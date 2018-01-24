let getDateYMD = date =>
  Js.Date.([getFullYear(date), getDate(date), getMonth(date)]);

let isHoliday = date => {
  let currentDate = Js.Date.([getFullYear(date), getDate(date), getMonth(date)]);
  Data.holidays
  |> List.exists((holiday: Data.holiday) =>
       holiday.date |> getDateYMD |> List.for_all2((a, b) => a == b, currentDate)
     );
};
