<?php
    
    class Memory extends Hardware
    {
        public $freq;
        public $memo;
        public $supp;
        
        public function __construct($freq = "", $memo = "", $supp = "")
        {
            $this->freq = $freq;
            $this->memo = $memo;
            $this->supp = $supp;
        }

        public function setFreq($freq)
        {
            $this->freq = $freq;
        }
        public function getFreq()
        {
            return $this->freq;
        }


        public function setMemo($memo)
        {
            $this->memo = $memo;
        }
        public function getmemo()
        {
            return $this->memo;
        }


        public function setSupp($supp)
        {
            $this->supp = $supp;
        }
        public function getSupp()
        {
            $this->supp;
        }

        public function __destruct()
        {
            
        }
    }

    
?>