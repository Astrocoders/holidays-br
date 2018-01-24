open Jest;

test("should properly detect a holiday", () =>
  Expect.(
    expect(
      Holiday.isHoliday(
        Js.Date.makeWithYMD(~year=2017., ~month=1., ~date=1., ())
      )
    )
    |> toBe(true)
  )
);

test("should not properly detect a normal date as holiday", () =>
  Expect.(
    expect(
      Holiday.isHoliday(
        Js.Date.makeWithYMD(~year=2018., ~month=6., ~date=15., ())
      )
    )
    |> toBe(false)
  )
);
