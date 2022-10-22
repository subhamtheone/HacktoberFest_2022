//creating a new date
let date = new Date() // Ex. Output: Sun Oct 23 2022 00:48:49 GMT+0530 (India Standard Time)
console.log(date)

let current_year = date.getFullYear(); // O/P: 2022
console.log(current_year)

let newDate = new Date(1223727718982) // Passing a timestamp
// Sat Oct 11 2008 14:21:58 GMT+0200 (Central European Summer Time)

newDate = new Date("2022-23-10T14:56:23")

//format according to the computer's default locale
// Intl.DateTimeFormat().format(newDate)
// "23/10/2022"

/* **CUSTOM Date Formats** */
newDate.getMonth()    // 0 (zero-based index)
newDate.getDate()     // 9
newDate.getDay()      // 6 (zero-based index starting from Sunday)
newDate.getHours()    // 14
newDate.getMinutes()  // 56
newDate.getUTCHours() // 9
newDate.getUTCDate()  // 9