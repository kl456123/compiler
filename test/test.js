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

// function sum(let a,let b){
// 	return a + b;
// }

// function main(){
// 	let a = 10;
// 	let b = 10;
// 	let c = sum(a,b);
// 	let d = function(){
// 		let a = 10;
// 		return;
// 	};
// 	return ;
// }


let a= 10;

function closure(){
	let a = 10;
	function sum(){
		print("asfa",a);
		return;
	}
	return sum;
}

let s = closure();
s();
// res = s();
