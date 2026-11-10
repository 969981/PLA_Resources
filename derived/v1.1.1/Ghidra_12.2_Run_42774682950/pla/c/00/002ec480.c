/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec480; name: FUN_002ec480
 */


long FUN_002ec480(byte *param_1,long param_2,uint param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  if (((param_3 & 1) == 0) || (param_2 == 0)) {
    uVar6 = 0;
    uVar8 = 0;
    lVar5 = 0;
  }
  else {
    lVar9 = 0;
    uVar6 = 0;
    lVar5 = 0;
    uVar8 = 0;
    while( true ) {
      uVar10 = uVar8;
      cVar3 = "0123456789abcdef"[param_1[lVar9] >> 4];
      if (uVar10 == uVar6) {
        uVar6 = uVar6 * 2;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        lVar5 = FUN_002ebdc0(lVar5,uVar6);
      }
      *(char *)(lVar5 + uVar10) = cVar3;
      cVar3 = "0123456789abcdef"[(ulong)param_1[lVar9] & 0xf];
      if (uVar10 + 1 == uVar6) {
        uVar6 = uVar6 * 2;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        lVar5 = FUN_002ebdc0(lVar5,uVar6);
      }
      lVar9 = lVar9 + 1;
      uVar8 = uVar10 + 2;
      *(char *)(lVar5 + uVar10 + 1) = cVar3;
      if (param_2 == lVar9) break;
      if (lVar9 != 0) {
        if (uVar8 == uVar6) {
          uVar6 = uVar6 * 2;
          if (uVar6 < 9) {
            uVar6 = 8;
          }
          lVar5 = FUN_002ebdc0(lVar5,uVar6);
        }
        *(undefined1 *)(lVar5 + uVar8) = 0x20;
        uVar8 = uVar10 + 3;
      }
    }
  }
  if ((param_3 >> 1 & 1) == 0) {
LAB_002ec6b4:
    uVar7 = uVar8;
    if (uVar8 != uVar6) goto LAB_002ec6d8;
  }
  else {
    if (uVar8 == 0) {
      uVar10 = 0;
      uVar7 = uVar10;
      if (param_2 != 0) goto LAB_002ec634;
    }
    else {
      if (uVar8 == uVar6) {
        uVar6 = uVar6 * 2;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        lVar5 = FUN_002ebdc0(lVar5,uVar6);
      }
      *(undefined1 *)(lVar5 + uVar8) = 0x20;
      if (uVar8 + 1 == uVar6) {
        uVar6 = uVar6 * 2;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        lVar5 = FUN_002ebdc0(lVar5,uVar6);
      }
      uVar10 = uVar8 + 2;
      *(undefined1 *)(lVar5 + uVar8 + 1) = 0x27;
      uVar7 = uVar10;
      if (param_2 != 0) {
LAB_002ec634:
        do {
          bVar2 = *param_1;
          iVar4 = isprint((uint)bVar2);
          bVar1 = 0x2e;
          if (iVar4 != 0) {
            bVar1 = bVar2;
          }
          if (uVar10 == uVar6) {
            uVar6 = uVar6 * 2;
            if (uVar6 < 9) {
              uVar6 = 8;
            }
            lVar5 = FUN_002ebdc0(lVar5,uVar6);
          }
          uVar7 = uVar10 + 1;
          *(byte *)(lVar5 + uVar10) = bVar1;
          param_1 = param_1 + 1;
          param_2 = param_2 + -1;
          uVar10 = uVar7;
        } while (param_2 != 0);
      }
    }
    if (uVar8 != 0) {
      if (uVar7 == uVar6) {
        uVar6 = uVar6 * 2;
        if (uVar6 < 9) {
          uVar6 = 8;
        }
        lVar5 = FUN_002ebdc0(lVar5,uVar6);
      }
      uVar8 = uVar7 + 1;
      *(undefined1 *)(lVar5 + uVar7) = 0x27;
      goto LAB_002ec6b4;
    }
    if (uVar7 != uVar6) goto LAB_002ec6d8;
  }
  uVar6 = uVar6 * 2;
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  lVar5 = FUN_002ebdc0(lVar5,uVar6);
LAB_002ec6d8:
  *(undefined1 *)(lVar5 + uVar7) = 0;
  *param_4 = uVar7 + 1;
  return lVar5;
}


