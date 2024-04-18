import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());

		HashMap<String, Integer> map = new HashMap<>();

		for (int i = 0; i < n; i++) {
			st = new StringTokenizer(br.readLine());
			String str = st.nextToken().toString();
			String file = str.substring(str.lastIndexOf('.') + 1, str.length());
			map.put(file, map.getOrDefault(file, 0) + 1);
		}

		List<String> list = new ArrayList<>();
		list.addAll(map.keySet());

		Collections.sort(list);

		for (int i = 0; i < list.size(); i++) {
			int cnt = map.get(list.get(i));

			bw.write(list.get(i) + " " + Integer.toString(cnt) + '\n');
		}
		bw.flush();

	}
}
