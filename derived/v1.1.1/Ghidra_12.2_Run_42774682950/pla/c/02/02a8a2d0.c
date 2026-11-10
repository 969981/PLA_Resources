/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8a2d0; name: FUN_02a8a2d0
 */


byte * FUN_02a8a2d0(undefined8 param_1,byte *param_2,byte *param_3,string *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte *pbVar4;
  byte bVar5;
  
  if (param_2 == param_3) {
LAB_02a8a438:
                    /* WARNING: Subroutine does not return */
    FUN_02a861d0();
  }
  bVar5 = *param_2;
  switch(bVar5) {
  case 0x22:
  case 0x2f:
  case 0x5c:
    break;
  default:
    if ((bVar5 & 0xf8) == 0x30) {
      pbVar1 = param_2 + 1;
      cVar3 = bVar5 - 0x30;
      pbVar4 = param_3;
      if (pbVar1 != param_3) {
        pbVar4 = pbVar1;
        if ((*pbVar1 & 0xf8) == 0x30) {
          pbVar2 = param_2 + 2;
          cVar3 = *pbVar1 + cVar3 * '\b' + -0x30;
          pbVar4 = param_3;
          if (pbVar2 != param_3) {
            pbVar4 = pbVar2;
            if ((*pbVar2 & 0xf8) == 0x30) {
              cVar3 = *pbVar2 + cVar3 * '\b' + -0x30;
              pbVar4 = param_2 + 3;
            }
          }
        }
      }
      if (param_4 == (string *)0x0) {
        FUN_02a86478();
        return pbVar4;
      }
      std::string::operator=(param_4,cVar3);
      return pbVar4;
    }
    goto LAB_02a8a438;
  case 0x61:
    if (param_4 != (string *)0x0) {
      bVar5 = 7;
      goto LAB_02a8a3dc;
    }
    bVar5 = 7;
    goto LAB_02a8a410;
  case 0x62:
    if (param_4 == (string *)0x0) {
      bVar5 = 8;
      goto LAB_02a8a410;
    }
    bVar5 = 8;
    goto LAB_02a8a3dc;
  case 0x66:
    if (param_4 == (string *)0x0) {
      bVar5 = 0xc;
      goto LAB_02a8a410;
    }
    bVar5 = 0xc;
    goto LAB_02a8a3dc;
  case 0x6e:
    bVar5 = 10;
    break;
  case 0x72:
    bVar5 = 0xd;
    break;
  case 0x74:
    bVar5 = 9;
    break;
  case 0x76:
    bVar5 = 0xb;
  }
  if (param_4 == (string *)0x0) {
LAB_02a8a410:
    FUN_02a86478(param_1,bVar5);
  }
  else {
LAB_02a8a3dc:
    std::string::operator=(param_4,bVar5);
  }
  return param_2 + 1;
}


