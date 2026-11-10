/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005863a0; name: FUN_005863a0
 */


void FUN_005863a0(long param_1,char param_2,long param_3,long param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  char cVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  
  param_1 = param_1 + (param_4 / 0x23ab1) * 400;
  param_4 = param_4 % 0x23ab1;
  lVar7 = param_1 + -400;
  if (-1 < param_4) {
    lVar7 = param_1;
  }
  uVar8 = lVar7 + (param_3 / 0x23ab1) * 400;
  lVar7 = param_4 + 0x23ab1;
  if (-1 < param_4) {
    lVar7 = param_4;
  }
  lVar7 = lVar7 + param_3 % 0x23ab1;
  if (lVar7 < 1) {
    if (lVar7 < -0x16c) {
      uVar6 = uVar8 - 400;
      lVar7 = lVar7 + 0x23ab1;
    }
    else {
      uVar6 = uVar8 - 1;
      uVar9 = uVar6;
      if ('\x02' < param_2) {
        uVar9 = uVar8;
      }
      if ((uVar9 & 3) == 0) {
        lVar11 = 0x16d;
        if ((long)uVar9 % 400 == 0 || (long)uVar9 % 100 != 0) {
          lVar11 = 0x16e;
        }
        lVar7 = lVar11 + lVar7;
      }
      else {
        lVar7 = lVar7 + 0x16d;
      }
    }
  }
  else {
    uVar6 = uVar8;
    if (0x23ab1 < lVar7) {
      uVar6 = uVar8 + 400;
      lVar7 = lVar7 + -0x23ab1;
    }
  }
  if (0x16d < lVar7) {
    uVar8 = uVar6;
    if ('\x02' < param_2) {
      uVar8 = uVar6 + 1;
    }
    iVar10 = ((int)uVar8 +
              (SUB164(SEXT816((long)uVar8) * ZEXT816(0xa3d70a3d70a3d70b),9) -
              (SUB164(SEXT816((long)uVar8) * ZEXT816(0xa3d70a3d70a3d70b),0xc) >> 0x1f)) * -400 + 400
             ) % 400;
    uVar9 = (ulong)('\x02' < param_2);
    lVar11 = 0x8eac;
    if (300 < iVar10 || iVar10 == 0) {
      lVar11 = 0x8ead;
    }
    if (lVar11 < lVar7) {
      do {
        lVar2 = uVar9 + uVar6;
        uVar6 = uVar6 + 100;
        lVar2 = lVar2 + 100;
        lVar7 = lVar7 - lVar11;
        auVar4 = SEXT816(lVar2) * ZEXT816(0xa3d70a3d70a3d70b);
        iVar10 = ((int)lVar2 + (auVar4._9_4_ - (auVar4._12_4_ >> 0x1f)) * -400 + 400) % 400;
        lVar11 = 0x8eac;
        if (300 < iVar10 || iVar10 == 0) {
          lVar11 = 0x8ead;
        }
      } while (lVar11 < lVar7);
      uVar8 = uVar9 + uVar6;
    }
    lVar11 = 0x5b5;
    if (((iVar10 != 0) && (iVar10 < 0x12d)) && (lVar11 = 0x5b4, (iVar10 + -1) % 100 < 0x60)) {
      lVar11 = 0x5b5;
    }
    if (lVar11 < lVar7) {
      do {
        while( true ) {
          lVar7 = lVar7 - lVar11;
          lVar11 = uVar9 + uVar6;
          uVar6 = uVar6 + 4;
          lVar11 = lVar11 + 4;
          auVar4 = SEXT816(lVar11) * ZEXT816(0xa3d70a3d70a3d70b);
          iVar10 = ((int)lVar11 + (auVar4._9_4_ - (auVar4._12_4_ >> 0x1f)) * -400 + 400) % 400;
          if ((iVar10 != 0) && (iVar10 < 0x12d)) break;
          lVar11 = 0x5b5;
          if (lVar7 < 0x5b6) goto LAB_005865c8;
        }
        lVar11 = 0x5b4;
        if ((iVar10 + -1) % 100 < 0x60) {
          lVar11 = 0x5b5;
        }
      } while (lVar11 < lVar7);
LAB_005865c8:
      uVar8 = uVar9 + uVar6;
    }
    if ((uVar8 & 3) == 0) {
      lVar11 = 0x16d;
      if ((long)uVar8 % 400 == 0 || (long)uVar8 % 100 != 0) {
        lVar11 = 0x16e;
      }
      if (lVar7 <= lVar11) goto joined_r0x005866c8;
    }
    else {
      lVar11 = 0x16d;
      if (lVar7 < 0x16e) goto joined_r0x005866c8;
    }
    uVar8 = uVar6;
    do {
      while( true ) {
        uVar6 = uVar8 + 1;
        uVar3 = uVar9 + 1 + uVar8;
        lVar7 = lVar7 - lVar11;
        uVar8 = uVar6;
        if ((uVar3 & 3) == 0) break;
        lVar11 = 0x16d;
        if (lVar7 < 0x16e) goto joined_r0x005866c8;
      }
      lVar11 = 0x16d;
      if ((long)uVar3 % 400 == 0 || (long)uVar3 % 100 != 0) {
        lVar11 = 0x16e;
      }
    } while (lVar11 < lVar7);
  }
joined_r0x005866c8:
  if (0x1c < lVar7) {
    uVar8 = 0;
    if ((param_2 == '\x02') && ((uVar6 & 3) == 0)) {
      if ((long)uVar6 % 100 == 0) {
        uVar8 = (ulong)((long)uVar6 % 400 == 0);
      }
      else {
        uVar8 = 1;
      }
    }
    lVar11 = uVar8 + (long)*(int *)(&DAT_03a3404c + (long)param_2 * 4);
    if (lVar11 < lVar7) {
      do {
        while( true ) {
          lVar7 = lVar7 - lVar11;
          cVar1 = param_2 + '\x01';
          cVar5 = '\x01';
          if (cVar1 < '\r') {
            cVar5 = param_2 + '\x01';
          }
          param_2 = cVar5;
          uVar8 = 0;
          if ('\f' < cVar1) {
            uVar6 = uVar6 + 1;
          }
          if ((param_2 == '\x02') && ((uVar6 & 3) == 0)) break;
LAB_00586784:
          lVar11 = uVar8 + (long)*(int *)(&DAT_03a3404c + (long)param_2 * 4);
          if (lVar7 <= lVar11) {
            return;
          }
        }
        if ((long)uVar6 % 100 == 0) {
          uVar8 = (ulong)((long)uVar6 % 400 == 0);
          goto LAB_00586784;
        }
        lVar11 = (long)*(int *)(&DAT_03a3404c + (long)param_2 * 4) + 1;
      } while (lVar11 < lVar7);
    }
  }
  return;
}


