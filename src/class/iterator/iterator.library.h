.include "src/config/config.inc"

.enum 0 export
  TIMER.SPEED.ALWAYS db
  TIMER.SPEED.FASTEST db
  TIMER.SPEED.FASTER db
  TIMER.SPEED.FAST db
  TIMER.SPEED.MEDIUM db
  TIMER.SPEED.SLOW db
  TIMER.SPEED.SLOWER db
  TIMER.SPEED.SLOWEST db
.ende

;zp-vars,just a reference
.enum 0
  iterator INSTANCEOF iteratorStruct
zpLen ds 0
.ende

;object class static flags, default properties and zero page 
.define CLASS.FLAGS OBJECT.FLAGS.Present
.define CLASS.PROPERTIES 0
.define CLASS.ZP_LENGTH zpLen


.def TIMER.SPEED.MASK $7

.base BSL
.bank BANK.PROGRAM

;ram buffers
.ramsection "global iterator linkedLists" bank 0 slot 1
LINKED_LISTS.GLOBAL.START ds 0
GLOBAL.linkedList.unit_test ds _sizeof_oopObjHash
GLOBAL.linkedList.activeplayers ds _sizeof_oopObjHash
GLOBAL.linkedList.enemies ds _sizeof_oopObjHash
GLOBAL.linkedList.powerups ds _sizeof_oopObjHash
LINKED_LISTS.GLOBAL.END ds 0
.ends

.base BSL
.bank BANK.PROGRAM
