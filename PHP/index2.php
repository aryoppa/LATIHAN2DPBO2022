<?php

	// include all the class files
	include "Product.php";
	include "Hardware.php";
	include "Memory.php";

	// inputs
	$data1 = new Memory();
	$data1->setIDProduct("12A");
	$data1->setPrice("Rp 15.000");
	$data1->setBrand("Omicron");
	$data1->setModel("Pegasus");
	$data1->setFreq("1500 MHz");
	$data1->setMemo("25 GB");
	$data1->setSupp("Yes");

	$data2 = new Memory();
	$data2->setIDProduct("12B");
	$data2->setPrice("Rp 10.000");
	$data2->setBrand("Omicron");
	$data2->setModel("Centaur");
	$data2->setFreq("15000 Mhz");
	$data2->setMemo("5 GB");
	$data2->setSupp("No");
	
    // outputs
	echo "===================="."<br/>";
    echo "Harga Produk  : " .$data1->getPrice()."<br/>";
	echo "Id-Product	: " .$data1->getIDProduct()."<br/>";
	echo "Merek         : " .$data1->getBrand()."<br/>";
	echo "Model         : " .$data1->getModel()."<br/>";
	echo "Frekuensi     : " .$data1->getFreq()." MHz"."<br/>";
	echo "Memori        : " .$data1->getMemo()." GB"."<br/>";
	echo "Supports Cuda : " .$data1->getSupp()."<br/>";
	echo "===================="."<br/>";
		
	echo "<br/>";
	echo "===================="."<br/>";
    echo "Harga Produk  : " .$data2->getPrice()."<br/>";
	echo "Id-Product	: " .$data2->getIDProduct()."<br/>";
	echo "Merek         : " .$data2->getBrand()."<br/>";
	echo "Model         : " .$data2->getModel()."<br/>";
	echo "Frekuensi     : " .$data2->getFreq()." MHz"."<br/>";
	echo "Memori        : " .$data2->getMemo()." GB"."<br/>";
	echo "Supports Cuda : " .$data2->getSupp()."<br/>";
	echo "===================="."<br/>";

?>