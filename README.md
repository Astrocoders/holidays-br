# holidays-br
[![Build Status](https://travis-ci.org/Astrocoders/holidays-br.svg?branch=master)](https://travis-ci.org/Astrocoders/holidays-br)

BR holidays

## Installation
```
yarn add @astrocoders/holidays-br
```
If you'll use this only in JS, skip the next step because you can just import now 

```js
import { isHoliday } from '@astrocoders/holidays-br'

isHoliday(new Date())
```

### BuckleScript
Add to deps in bsconfig.json

```json
  "bs-dependencies": ["@astrocoders/holidays-br"]
```

## Usage

Only for values from 2015/01/01
### HolidaysBr.Holiday.isHoliday(Js.Date.t) => bool
