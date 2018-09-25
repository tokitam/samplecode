//
// $ node item.js
//

// Itemクラス
var Item = function(name, price) {
    var self = this;
    var _name;
    // call constructor
    Item();

    // constractor        
    function Item() {

        console.log('price:' + price);

        // メンバー変数（public）
        self.price = 0;
        // ローカル変数（private的）
        _name = name;
    }

    // メソッド（public）
    self.showInfo = function() {
        console.log(getInfo());
    };
    // ローカル関数（private的）
    function getInfo() {
        return _name + " is " + self.price + "yen";
    }
};

var banana = new Item("Banana", 1);
var orange = new Item("Orange");
banana.price = 100;
orange.price = 200;
banana.showInfo(); // "Banana is 100yen" が表示される
orange.showInfo(); // "Orange is 200yen" が表示される
console.log(banana._name);



