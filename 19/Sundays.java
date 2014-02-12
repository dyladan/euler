public class Sundays {
	public static void main(String[] args) {
		int[] today = {1, 0, 1, 1900};
		// monday, january, 1, 1901

		int count = 0;

		while (today[3] < 2001) {
                        if (today[3] == 1900) {
                            today = nextDay(today);
                            continue;
                        }
			if (today[0] == 0 && today[2] == 1) { // sunday the first of the month
				count++;
			}
			today = nextDay(today);
		}	
		System.out.printf("%d Sundays on the first of the month.\n", count);

	}

	static boolean isLeapYear(int year) {
		if (year % 4 == 0) {
			if (year % 100 != 0) {
				return true;
			} else if (year % 400 == 0) {
				return true;
			}
		}
		return false;
	}

	static int[] nextDay(int[] today) {
		int[] tomorrow = new int[4];
		System.arraycopy(today, 0, tomorrow, 0, today.length);

		int dow = today[0];
		int month = today[1];
		int day = today[2];
		int year = today[3];

		int[] dim = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		if (isLeapYear(year)) {
			dim[1] = 29;
		}


		if (dow == 6) {
			tomorrow[0] = 0;
		} else {
                    tomorrow[0] = dow + 1;
                }
		if (dim[month] == day) {
			tomorrow[1] = month + 1;
			tomorrow[2] = 1;
                        //output(tomorrow);
		} else {
                    tomorrow[2] = day + 1;
                }
		if (tomorrow[1] == 12) {
			tomorrow[3] = year + 1;
			tomorrow[1] = 0;
		}
		return tomorrow;
	}

        static void output(int[] date) {
            System.out.printf("day: %d\n", date[0]);
            System.out.printf("month: %d\n", date[1]);
            System.out.printf("date: %d\n", date[2]);
            System.out.printf("year: %d\n", date[3]);
        }
}
