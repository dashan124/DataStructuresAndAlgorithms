import java.io.*;
import java.util.*;

 class TaumAndBday {

    public static void main(String[] args) {
        Scanner s =  new Scanner(System.in);
		{
			int T = s.nextInt();
			while (T-- > 0) {
				long B = s.nextInt();
				long W = s.nextInt();
				long X = s.nextInt();
				long Y = s.nextInt();
				long Z = s.nextInt();

				if (X > (Y + Z)) {
					X = Y + Z;
				} else if (Y > (X + Z)) {
					Y = X + Z;
				}

				System.out.print((W * Y) + (B * X));
				System.out.println();
			}
		}
		s.close();
    }
}
