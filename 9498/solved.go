package main
import "fmt"

func main() {
	var num1 int
	fmt.Scanf("%d", &num1)
	if num1<=100 && num1 >= 90 {
		fmt.Println("A")
	} else if num1<90 && num1 >= 80 {
		fmt.Println("B")
	} else if 80>num1&& num1 >= 70 {
		fmt.Println("C")
	} else if 70>num1 && num1 >= 60 {
		fmt.Println("D")
	} else {
		fmt.Println("F")
	}

}