<?php
function test()
{
    $a = array();

    $b = Array ();

    $c = Array(
            'a' => 1,
         );
}


class TestClass
{
    public $good = array(
        'width' => '',
        'height' => '',
    );

    private $_bad = Array(
        'width'  => '',
        'height' => ''
        );


    public function test()
    {
        $truck = array(
           'width' => '',
            'height' => '',
        );

        $plane = Array(
           'width' => '',
            'height' => '',
        );

        $car = array(
            'width'  => '',
            'height' => '',
        );

        $bus = array(
            'width'  =>   '',
            'height' => ''
        );

        $train = array  (
             TRUE,
            FALSE,
            'aaa'
        );

        $inline = array('aaa', 'bbb', 'ccc',);
        $inline = array('aaa');
        $inline = Array('aaa');

        $bigone = array(
            'name'     => 'bigone',
            'children' => Array(
                '1a'  => 'child',
                '11b'  => 'child',
                '111c'      => 'child',
                'children'  => Array(
                    'child' => 'aaa',
                ),
            ),
            'short_name' => 'big'
        );
    }

}//end class

$value = array ( );
$value = array(  );
$value = array('1'=>$one, '2'  =>  $two, '3'=> $three, '4' =>$four);
$value = array('1'=>$one);

if (in_array('1', array('1','2','3')) === TRUE) {
    $value = in_array('1', array('1'  ,   '2',     '3','4'));
}

$value = array(
    '1' => TRUE,
    FALSE,
    '3' => 'aaa',);

$value = array(
    '1' => TRUE,
    FALSE,
);

$value = array(
    TRUE,
    '1' => FALSE,
);

$value = array(1,
    2 ,
    3 ,
);

$value = array(1 => $one,
        2 => $two ,
        3 => $three ,
);

$value = array(
    'tag' => $tag,
    'space' => $this->_getIndentation($tag, $tagElement),
);

$expected = array(
    array(
        '1' => 1,
        '1' => 2,
    ),
);

$expected = array(
    array(
        '1' => 1,
        '1' => 2
    )
);

// Space in second arg.
$args = array(
    '"'.$this->id.'"',
    (int) $hasSessions,
);

// No errors.
$paths = array(
    Init::ROOT_DIR.'/Systems' => 'Systems',
    Init::ROOT_DIR.'/Installer' => 'Systems',
);

$x = array(
     );

$x = array('test'
);
$x = array('test',
);
$x = array('name' => 'test',
);

$x = array(
    $x,
);

$func = array(
    $x,
    'get'.$x.'Replacement'
);

$array = array(
    'input_one' => 'one',
    'inputTwo' => 'two',
    'input_3' => 3,
);

$array = array(
    'input_one',
    'inputTwo',
    'input_3',
);

// Malformed
$foo = array(1
, 2);

$listItems[$aliasPath] = array('itemContent' => implode('<br/>', $aliases));

$listItems[$aliasPath] = array(
    'itemContent' => implode('<br/>', $aliases)
);

$x = array
  (
    $x,
    $y,
);

$x = array
(
    $x,
    $y,
);

$x = array(

    $x,
    $y,
);

$test = array(
    'test' => TestFunction::blah(
        $value1,
        $value2
    ),
);

$c = array('a' => 1,);

function b()
{
    $a = array(
            'a'   => a('a'),

         );

}

$foo = Array('[',']',':',"\n","\r");
$bar = Array('&#91;','&#93;','&#58;','&#10;','&#13;');

function foo()
{
    return array($a, $b->screen);
}

$array = array(
    'name' => 'contactSubject',
    'required' => TRUE,
    'validators' => array(
        new \Zend\Validator\InArray(array('haystack' => array_keys($aSubjects))),
    ),
);

$var = array(
    'ViewHelper',
    array('Foo'),
    'Errors',
);

$data = array(
    'first',
    'second',
    'third',
    // Add more here
);

$data = array(
    'first',
    'second',
    //'third',
);

$data = array(
    'first',
    'second'
    //'third',
);

$foo = array(
    $this->getViewName() . '.id' => 'value',
    $this->getViewName() . '.title' => 'value',
);

$foo = array(
    $this->getViewName() . '.id',
    $this->getViewName() . '.title',
);

$weightings = array(
    T_CLOSURE => 100,

    /*
        Conditions.
    */

    T_WHILE => 50,

    /*
        Operators and arithmetic.
    */

    T_BITWISE_AND => 8,

    T_BOOLEAN_AND => 5,

    /*
        Equality.
    */

    T_IS_GREATER_OR_EQUAL => 5,
);

foreach (array(
        'foo'    => 'bar',
        'foobaz' => 'bazzy',
    ) as $key => $value) {
}

$ids = array(
    '1', // Foo.
    '13', // Bar.
);

array(
    'key1' => function($bar) {
        return $bar;
    },
    'key2' => function($foo) {
        return $foo;
    },
    'key3' => function($bar) {
        return $bar;
    }
);

array(
    'key1' => array(
        '1',
        '2',
    )
);

$var = array(
    'tab_template' => '
        <li>%s</li>',
    'panel_template' => '
        <div id="%s">
            %s
        </div>',
);

function test() : array
{
    return [];
}

$single = array(
    'comma'
);

$single = array(
    'key' => 'value'
);

$multi = array(
    array(
        'a', 'b'
    ), array(
        'c', 'd'
    )
);

$multi = array(
    array(
        'a' => 'a', 'b' => 'b'
    ), array(
        'c' => 'c', 'd' => 'd'
    )
);

$unaligned = array(
    'foo' => 'bar',
    'keyless',
    'a' => 'b',
);

$aligned = array(
    'foo' => 'bar',
    'keyless',
    'a'   => 'b',
);

$aligned = array(
    'foo' => 'bar',
    'keyless',
    'a' => 'b',
    'c'   => 'd',
);

$aligned = array(
    'foo'    => 'bar',
    'keyless',
    'a'      => 'b',
    'c'          => 'd',
);

$dontAlign = array(
    'foo'=>'bar',
    'bazbaz' => 'qux',
);

$fields = array(
    'id'    => array('type' => 'INT'),
    'value' => array('type' => 'VARCHAR'));

$foo = array(    'a', 'b'     );
$foo = array('a', 'b');
$foo = array( 'a', 'b' );
$bar = array( 'c' );
$bar = array(      'c'   );
$bar = array('c');

$arr = array('a', array(
    'a' => 1,
    'b' => 2,
));

$arr = array('a', foo(
    'a',
    'b'
));

$arr = array('a', 'b' => function ($a, $b) {
    return $a + $b;
});

$arr = array('a', array(
    'a' => 1,
    'b' => 2, 'c' => 3
));

$arr = array(
    'a' => <<<EOT
a
a
EOT
,
    'b' => <<<EOT
b
b
EOT
);

$arr = array(
    'a' => <<<'EOT'
a
a
EOT
,
    'b' => <<<'EOT'
b
b
EOT
);
