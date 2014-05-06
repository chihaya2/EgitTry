/*
 * RtcTime.c
 *
 *  Created on: 2014/05/06
 *      Author: chihaya
 */


static void SetYearAndDayOfYear(RtcTie * time)
{
	int days = time->daySince1980;
	int year = STATRTING_YEAR;
	while ( days > 365 )
	{
		if ( IsLeapYear(year))
		{
			if(days > 366)
			{
				days -= 366;
				year += 1;

			}
			else
			{
				days -= 365;
				year += 1;

			}
		}
	}
	time->dayOfYear = days;
	time->year = year;

}
