using System;

class Program
{
    static void Main(string[] args)
    {
        Console.Write("Enter line: ");
        string input = Console.ReadLine();

        MyString myString = new MyString(input);

        Console.WriteLine("Line:");
        Console.WriteLine(myString);

        Console.WriteLine($"Length: {myString.GetLength()}");

        Console.WriteLine($"Sorted By Decreasing: {myString.SortDescending()}");
    }
}