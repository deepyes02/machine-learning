<?php

class Animal {
	public $name;
	public $age;
	public function __construct($name, $age)
	{
		$this->name = $name;
		$this->age = $age;
	}
	public function make_noise(){
		return "Some Generic Animal Noise";
	}
}

class Cat extends Animal {
	public function make_noise(){
		return "Meow";
	}
}