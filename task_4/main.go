package main

import (
	"encoding/json"
	"fmt"
	"os"
)

type dataStruct struct {
	Id int `json:"global_id"`
}

func main() {
	var res int = 0
	file, err := os.Open("data.json")
	if err != nil {
		panic("error")
	}
	var data []dataStruct
	var decoder = json.NewDecoder(file)
	decoder.Decode(&data)
	for _, d := range data {
		res += d.Id
	}
	fmt.Println(res)
	fmt.Println(len(data))
}
