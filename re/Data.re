type holiday = {
  name: string,
  date: Js.Date.t
};

let holidays = [
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=1.0, ~date=17.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=3.0, ~date=3.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=3.0, ~date=5.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=5.0, ~date=4.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2015.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=1.0, ~date=9.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=2.0, ~date=25.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=2.0, ~date=27.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=4.0, ~date=26.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2016.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=1.0, ~date=28.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=3.0, ~date=14.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=3.0, ~date=16.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=5.0, ~date=15.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2017.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=1.0, ~date=13.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=2.0, ~date=30.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=3.0, ~date=1.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=4.0, ~date=31.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2018.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=2.0, ~date=5.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=3.0, ~date=19.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=3.0, ~date=21.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=5.0, ~date=20.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2019.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=1.0, ~date=25.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=3.0, ~date=10.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=3.0, ~date=12.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=5.0, ~date=11.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2020.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=1.0, ~date=16.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=3.0, ~date=2.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=3.0, ~date=4.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=5.0, ~date=3.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2021.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=2.0, ~date=1.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=3.0, ~date=15.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=3.0, ~date=17.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=5.0, ~date=16.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2022.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=1.0, ~date=21.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=3.0, ~date=7.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=3.0, ~date=9.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=5.0, ~date=8.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2023.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=1.0, ~date=13.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=2.0, ~date=29.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=2.0, ~date=31.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=4.0, ~date=30.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2024.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=2.0, ~date=4.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=3.0, ~date=18.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=3.0, ~date=20.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=5.0, ~date=19.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2025.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=1.0, ~date=17.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=3.0, ~date=3.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=3.0, ~date=5.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=5.0, ~date=4.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2026.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=1.0, ~date=9.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=2.0, ~date=26.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=2.0, ~date=28.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=4.0, ~date=27.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2027.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=1.0, ~date=29.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=3.0, ~date=14.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=3.0, ~date=16.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=5.0, ~date=15.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2028.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=1.0, ~date=13.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=2.0, ~date=30.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=3.0, ~date=1.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=4.0, ~date=31.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2029.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=2.0, ~date=5.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=3.0, ~date=19.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=3.0, ~date=21.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=5.0, ~date=20.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2030.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=1.0, ~date=25.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=3.0, ~date=11.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=3.0, ~date=13.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=5.0, ~date=12.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2031.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=1.0, ~date=10.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=2.0, ~date=26.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=2.0, ~date=28.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=4.0, ~date=27.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2032.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=2.0, ~date=1.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=3.0, ~date=15.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=3.0, ~date=17.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=5.0, ~date=16.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2033.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=1.0, ~date=21.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=3.0, ~date=7.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=3.0, ~date=9.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=5.0, ~date=8.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2034.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=1.0, ~date=6.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=2.0, ~date=23.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=2.0, ~date=25.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=4.0, ~date=24.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2035.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=1.0, ~date=26.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=3.0, ~date=11.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=3.0, ~date=13.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=5.0, ~date=12.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2036.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=1.0, ~date=17.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=3.0, ~date=3.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=3.0, ~date=5.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=5.0, ~date=4.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2037.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=2.0, ~date=9.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=3.0, ~date=23.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=3.0, ~date=25.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=5.0, ~date=24.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2038.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=1.0, ~date=22.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=3.0, ~date=8.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=3.0, ~date=10.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=5.0, ~date=9.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2039.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=1.0, ~date=14.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=2.0, ~date=30.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=3.0, ~date=1.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=4.0, ~date=31.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2040.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=2.0, ~date=5.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=3.0, ~date=19.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=3.0, ~date=21.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=5.0, ~date=20.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2041.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=1.0, ~date=18.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=3.0, ~date=4.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=3.0, ~date=6.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=5.0, ~date=5.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2042.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=1.0, ~date=10.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=2.0, ~date=27.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=2.0, ~date=29.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=4.0, ~date=28.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2043.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=2.0, ~date=1.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=3.0, ~date=15.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=3.0, ~date=17.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=5.0, ~date=16.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2044.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=1.0, ~date=21.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=3.0, ~date=7.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=3.0, ~date=9.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=5.0, ~date=8.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2045.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=1.0, ~date=6.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=2.0, ~date=23.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=2.0, ~date=25.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=4.0, ~date=24.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2046.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=1.0, ~date=26.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=3.0, ~date=12.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=3.0, ~date=14.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=5.0, ~date=13.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2047.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=1.0, ~date=18.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=3.0, ~date=3.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=3.0, ~date=5.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=5.0, ~date=4.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2048.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=2.0, ~date=2.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=3.0, ~date=16.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=3.0, ~date=18.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=5.0, ~date=17.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2049.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=0.0, ~date=1.0, ()),
    name: "Ano Novo"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=1.0, ~date=22.0, ()),
    name: "Carnaval"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=3.0, ~date=8.0, ()),
    name: "Sexta-feira da Paixão"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=3.0, ~date=10.0, ()),
    name: "Páscoa"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=3.0, ~date=21.0, ()),
    name: "Tiradentes"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=4.0, ~date=1.0, ()),
    name: "Dia do Trabalho"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=5.0, ~date=9.0, ()),
    name: "Corpus Christi"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=8.0, ~date=7.0, ()),
    name: "Independência do Brasil (Sete de Setembro)"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=9.0, ~date=12.0, ()),
    name: "Nossa Senhora Aparecida"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=10.0, ~date=2.0, ()),
    name: "Finados"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=10.0, ~date=15.0, ()),
    name: "Proclamação da República"
  },
  {
    date: Js.Date.makeWithYMD(~year=2050.0, ~month=11.0, ~date=25.0, ()),
    name: "Natal"
  }
];
