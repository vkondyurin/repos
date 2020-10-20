using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace LogAPP
{
    public class Logapp
    {
        private static async Task AppendLineToFile(string path, string line)
        {
            if (string.IsNullOrWhiteSpace(path)) //проверяем, что имя файла не пустое
                throw new ArgumentOutOfRangeException(nameof(path), path, "Was null or whitespace.");

            if (!File.Exists(path))
                throw new FileNotFoundException("File not found.", nameof(path));

            using (var file = File.Open(path, FileMode.Append, FileAccess.Write))
            using (var writer = new StreamWriter(file))
            {
                await writer.WriteLineAsync(line);
                await writer.FlushAsync();// Асинхронно очищает все буферы
            }
        }
    }

}
