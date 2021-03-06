' https://adventofcode.com/2017/day/1
' Archie Adams - 19/06/2020

Imports System.IO.File

Module Module1

    Sub Main()

        dim strInput as String = readalltext("input.txt")
        strInput += strInput  ' Doubles input for circular searching.

        dim input() as Char = strInput.ToCharArray
        dim halfinput as Integer = input.Count / 4
        dim totalSum as Integer = 0

        ' Sums all identical numbers halfway around list.
        for i = 0 to (input.Count / 2) - 1
            if input(i) = input(i + halfinput) then totalSum += cint(cstr(input(i)))
        next

        Console.WriteLine(totalSum)

    End Sub

End Module