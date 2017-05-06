
// let add, print;
// function scope()
// {
//     let a = 5;
//     (function ()
//     {
//         add = function ()
//         {
//             a++;
//         };

//         print = function ()
//         {
//             console.log(a);
//         };
//     }
//     )()

// }

// scope()
// add()

// print()


function scope()
{
    let a = "sadf";
    a = "saf";
    return function ()
    {
        console.log(a);
    };
}

let obj = scope();

obj();
