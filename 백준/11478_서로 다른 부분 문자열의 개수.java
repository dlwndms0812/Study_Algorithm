import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		String str = br.readLine();

		HashMap<String, Integer> map = new HashMap<>();

		for (int i = 1; i <= str.length(); i++) {

			for (int j = 0; j < str.length(); j++) {
				if (j + i > str.length())
					continue;
				String sub = str.substring(j, j + i);

				map.put(sub, map.getOrDefault(sub, 0) + 1);

			}
		}
		bw.write(String.valueOf(map.size()));
		bw.flush();
		bw.close();
	}
}
