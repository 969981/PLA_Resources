/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c637c4; name: FUN_02c637c4
 */


undefined8 FUN_02c637c4(long param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar2 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  sVar1 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  uVar3 = 0;
  if (iVar2 < 0x2ea) {
    if (iVar2 == 0x1a5) {
      if (sVar1 != 1) {
        return 0;
      }
      lVar4 = 0;
    }
    else if (iVar2 == 0x22b) {
      if (sVar1 == 1) {
        lVar4 = 1;
      }
      else {
        if (sVar1 != 3) {
          return 0;
        }
        lVar4 = 2;
      }
    }
    else {
      if (iVar2 != 0x2a9) {
        return 0;
      }
      if (sVar1 != 1) {
        return 0;
      }
      lVar4 = 3;
    }
  }
  else {
    switch(iVar2) {
    case 0x34d:
      if (sVar1 == 1) {
        lVar4 = 6;
      }
      else {
        if (sVar1 != 2) {
          return 0;
        }
        lVar4 = 7;
      }
      break;
    case 0x34e:
    case 0x34f:
    case 0x350:
    case 0x351:
    case 0x352:
    case 0x353:
    case 0x354:
    case 0x355:
    case 0x356:
    case 0x357:
    case 0x358:
    case 0x359:
    case 0x35a:
    case 0x35b:
    case 0x35c:
    case 0x35d:
    case 0x35e:
    case 0x35f:
    case 0x360:
    case 0x361:
    case 0x362:
    case 0x363:
    case 0x364:
    case 0x365:
    case 0x366:
    case 0x367:
    case 0x368:
    case 0x369:
    case 0x36a:
    case 0x36c:
    case 0x36e:
    case 0x36f:
    case 0x370:
    case 0x371:
    case 0x372:
    case 0x373:
    case 0x374:
    case 0x375:
    case 0x376:
    case 0x377:
      goto switchD_02c63818_caseD_34e;
    case 0x36b:
      if (sVar1 != 1) {
        return 0;
      }
      lVar4 = 0xb;
      break;
    case 0x36d:
      if (sVar1 != 1) {
        return 0;
      }
      lVar4 = 0xc;
      break;
    case 0x378:
      if (sVar1 != 1) {
        return 0;
      }
      lVar4 = 8;
      break;
    case 0x379:
      if (sVar1 != 1) {
        return 0;
      }
      lVar4 = 9;
      break;
    case 0x37a:
      if (sVar1 != 1) {
        return 0;
      }
      lVar4 = 10;
      break;
    default:
      if (iVar2 == 0x2ea) {
        if (sVar1 != 1) {
          return 0;
        }
        lVar4 = 4;
      }
      else {
        if (iVar2 != 0x30a) {
          return 0;
        }
        if (sVar1 != 1) {
          return 0;
        }
        lVar4 = 5;
      }
    }
  }
  FUN_02c62fcc(param_1,(&DAT_03a84cd6)[lVar4 * 4],0);
  uVar3 = 1;
switchD_02c63818_caseD_34e:
  return uVar3;
}


