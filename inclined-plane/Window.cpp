#include "Window.h"

namespace inclinedplane {

	System::Void Window::start_Click(System::Object^  sender, System::EventArgs^  e) {
	    // Отключаем и включаем кнопки
		start->Enabled = false;
		stop->Enabled = true;
		timer1->Enabled = true;

		// Создаем катящийся объект
		c = new Cylinder((double)m->Value, (double)r->Value, (double)w->Value, (double)h->Value);

		// Устанавливаем область видимости 
		chart1->ChartAreas[0]->AxisX->Minimum = 0;
		chart1->ChartAreas[0]->AxisX->Maximum = (double)w->Value + 2*(double)r->Value;
		chart1->ChartAreas[0]->AxisY->Minimum = 0;
		chart1->ChartAreas[0]->AxisY->Maximum = (double)h->Value + 2*(double)r->Value; 
		
		/*chart1->ChartAreas[0]->AxisX->Minimum = -100;
		chart1->ChartAreas[0]->AxisX->Maximum =100;
		chart1->ChartAreas[0]->AxisY->Minimum = -100;
		chart1->ChartAreas[0]->AxisY->Maximum = 100;*/

		chart1->ChartAreas[0]->AxisX->Interval = (int)chart1->ChartAreas[0]->AxisX->Maximum / 5;
		chart1->ChartAreas[0]->AxisY->Interval = (int)chart1->ChartAreas[0]->AxisY->Maximum / 5;

		// Рисуем наклонную плоскость
		chart1->Series["Plane"]->Points->AddXY(0, 0);
		chart1->Series["Plane"]->Points->AddXY(0, (double)h->Value);
		chart1->Series["Plane"]->Points->AddXY((double)w->Value, 0);
		chart1->Series["Plane"]->Points->AddXY(0, 0);

		// Устанавливаем масштаб
		chart1->ChartAreas[0]->AxisX->Maximum = (double)scale_x->Value;
		chart1->ChartAreas[0]->AxisY->Maximum = (double)scale_y->Value;
	}

	System::Void Window::stop_Click(System::Object^  sender, System::EventArgs^  e) {
		// Отключаем и включаем кнопки
		start->Enabled = true;
		stop->Enabled = false;
		timer1->Enabled = false;
		
		// Удаляем катящийся объект
		delete c;

		// Очищаем графики
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		chart1->Series[2]->Points->Clear();
	}

	System::Void Window::timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		c->NextStep((double)timer1->Interval / 1000.0);

		double R = (double)r->Value;
		double x0 = c->get_cylinder_x();
		double y0 = c->get_cylinder_y();

		chart1->Series["Wheel"]->Points->Clear();
		for (double i = -R; i < R; i += R / 10)
			chart1->Series["Wheel"]->Points->AddXY(x0 + i, y0 + sqrt(R*R - pow(i, 2)));

		for (double i = R; i > -R; i -= R / 10)
			chart1->Series["Wheel"]->Points->AddXY(x0 + i, y0 - sqrt(R*R - pow(i, 2)));

		chart1->Series["Dot"]->Points->Clear();
		chart1->Series["Dot"]->Points->AddXY(c->get_dot_x(), c->get_dot_y());

		if (c->get_cylinder_y() - (double)r->Value < 0) timer1->Enabled = false;
	}
	System::Void Window::scale_changed(System::Object ^ sender, System::EventArgs ^ e)
	{
		chart1->ChartAreas[0]->AxisX->Maximum = (double)scale_x->Value;
		chart1->ChartAreas[0]->AxisY->Maximum = (double)scale_y->Value;
	}
}