/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a311c; name: FUN_011a311c
 */


undefined8 FUN_011a311c(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = FUN_02c5fbcc(param_2);
  lVar4 = 0;
  switch(param_3) {
  case 0x4cf:
    break;
  case 0x4d0:
    lVar4 = 1;
    break;
  case 0x4d1:
    lVar4 = 2;
    break;
  case 0x4d2:
    lVar4 = 3;
    break;
  case 0x4d3:
    lVar4 = 4;
    break;
  case 0x4d4:
    lVar4 = 5;
    break;
  case 0x4d5:
    lVar4 = 6;
    break;
  case 0x4d6:
    lVar4 = 7;
    break;
  case 0x4d7:
    lVar4 = 8;
    break;
  case 0x4d8:
    lVar4 = 9;
    break;
  case 0x4d9:
    lVar4 = 10;
    break;
  case 0x4da:
    lVar4 = 0xb;
    break;
  case 0x4db:
    lVar4 = 0xc;
    break;
  case 0x4dc:
    lVar4 = 0xd;
    break;
  case 0x4dd:
    lVar4 = 0xe;
    break;
  case 0x4de:
    lVar4 = 0xf;
    break;
  case 0x4df:
    lVar4 = 0x10;
    break;
  case 0x4e0:
    lVar4 = 0x11;
    break;
  case 0x4e1:
    lVar4 = 0x12;
    break;
  case 0x4e2:
    lVar4 = 0x13;
    break;
  case 0x4e3:
    if ((uVar1 < 0x19) && ((0x1041041U >> (ulong)(uVar1 & 0x1f) & 1) != 0))
    goto switchD_011a3160_default;
    uVar3 = 0xc;
    goto LAB_011a3240;
  default:
    goto switchD_011a3160_default;
  }
  uVar3 = (&DAT_03a79748)[lVar4 * 2];
  if (uVar3 == uVar1) {
switchD_011a3160_default:
    uVar2 = 0;
  }
  else {
LAB_011a3240:
    FUN_02c624d8(param_2,uVar3);
    uVar2 = 1;
  }
  return uVar2;
}


