using System;
using System.Linq;

public class MyString
{
    public string Value { get; set; }

    public MyString(string value)
    {
        Value = value;
    }

    public int GetLength()
    {
        return Value.Length;
    }

    public string SortDescending()
    {
        return new string(Value.OrderByDescending(c => c).ToArray());
    }

    public override string ToString()
    {
        return Value;
    }
}