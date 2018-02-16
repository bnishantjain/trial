
/*
 trapezodial_rule
 
*/

float trapezodial_rule(int number_of_interval)
{
        float area = 0.0;
        int i = 0;
        float interval_value = 0.0;

        interval_value = (UPPER_BOUND - LOWER_BOUND)/number_of_interval;

        area = sin(LOWER_BOUND) + sin(UPPER_BOUND);

	for (i = 1; i <= (number_of_interval-1); i++)
	{
	     area += (2*sin(i*interval_value));
	}

        area = (area * interval_value)/2;

        return area;
}

