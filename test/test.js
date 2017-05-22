/* @flow */
//fdff
///asfasfasf
// import PubNubCore from '../core/pubnub-common';
// import Networking from '../networking';
// import Database from '../db/common';
// import { get, post } from '../networking/modules/web-node';
// import { keepAlive, proxy } from '../networking/modules/node';
// import { InternalSetupStruct } from '../core/flow_interfaces';

// export default class extends PubNubCore {
//   constructor(setup: InternalSetupStruct) {
//     setup.db = new Database();
//     setup.networking = new Networking({ keepAlive, get, post, proxy });
//     setup.sdkFamily = 'Nodejs';
//     super(setup);
//   }
// }

// function main()
// {
//     let i = 2;
//     while (i < 10)
//     {
//         i = i + 1;
//         if (i == 3 || i == 5)
//         {
//             continue;

//         }
//         if (i == 8)
//         {
//             break;
//         }
//         print("%d! = %d", i, factor(i));

//     }
//     return 0;
// }
// function factor(let i)
// {
//     if (i < 2)
//     {
//         return 1;
//     }
//     return i * factor(i - 1);
// }

// function closure(){
// 	return function (){
// 		return 2;
// 	};
// }

// function sum(a,b){
// 	return a + b;
// }

// function main(){
// 	let a = 10;
// 	let b = 10.5;
// 	let c = sum(a,b);
// 	// let d = function(){
// 	// 	let a = 10;
// 	// 	return;
// 	// };
// 	return c;
// }
// let b =10;
// b= main();
// // console.log(b)
// print("result: %f",b);


// let a= 11;
// let b = 10;
// function closure(){
// 	// let a = 5;
// 	function sum(let a ,let b){
// 		print("asfa%d",a+b);
// 		return;
// 	}
// 	return sum;
// }

// let s = closure();
// s(a,b);
// res = s();
// 
// let addt;
// function counter(){
// 	let count = 10;
// 	function add(){
// 		while(count>2){
// 			count= count-1;
// 		}
// 		// return ;
// 	}
// 	addt = add;
// 	function display(){
// 		print("res%d",count);
// 		// return ;
// 	}
// 	return display;
// }

// let display = counter();

// addt();

// display();
//  b = 15;

// let change = function (){
// 	print("res:%d",b);
// };
// // need ';' otherwise throw error
// change();

// let Add;
// let Display;
// function Counter(){
// 	let count = 0;
// 	let m = 10;
// 	function Add(){
// 		count=count+1;
// 	}
// 	Display = function(){
// 		print("count: %d",count);
// 		print("m: %d",m);
// 	};
// 	return Add;

// }

// Add = Counter();

// // Add();
// // Add();
// let i = 10;
// while(i){
// 	Add();
// 	i=i-1;
// }

// Display();
// function main(){
// 	let a = 10;
// 	let c= 1000;
// 	function demo(){
// 		let b = 100;
// 		a=20;
// 		return function(){
// 			// b=10;
// 			print("b: %d",b);
// 			print("a: %d",a);
// 			print("c: %d",c);
// 		};
// 	}
// 	let display = demo();
// 	display();
// }

// main();
// 

// function a(){
// // a = 10;
// }

// console.log(a)
// 


// let a ;

// let b = 10;
// print("%d",b);
// 
let i=0;
function add(){
	i=i+1;
}
while (i<2000){
	add();
}

print("i %d",i);