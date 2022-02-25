<?php

    class Product
    {
        public $idProduct;
        public $price;

        public function __construct($idProduct = "", $price = 0)
        {
            $this->idProduct = $idProduct;
            $this->price = $price;
        }

        public function setIdProduct($idProduct)
        {
            $this->idProduct = $idProduct;
        }
        public function getIdProduct()
        {
            return $this->idProduct;
        }


        public function setPrice($price)
        {
            $this->price = $price;
        }
        public function getPrice()
        {
            return $this->price;
        }

        public function __destruct()
        {
            
        }
    }

?>