/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00448150; name: FUN_00448150
 */


undefined8 FUN_00448150(int *param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar11 = (uint)((ulong)param_3 >> 0x20);
  lVar3 = param_3 / 0x15180 + ((long)(int)uVar11 >> 0x1f) + (ulong)(uVar11 >> 0x1f);
  param_2 = (int)lVar3 + param_2;
  uVar11 = ((int)param_3 - (int)((ulong)(lVar3 * 0x1518000000000) >> 0x20)) + param_1[2] * 0xe10 +
           param_1[1] * 0x3c + *param_1;
  iVar10 = (param_1[4] + -0xd) / 0xc;
  uVar6 = uVar11;
  iVar7 = param_2;
  if ((uVar11 & 0x80000000) != 0) {
    uVar6 = uVar11 + 0x15180;
    iVar7 = param_2 + -1;
  }
  iVar1 = param_1[5] + iVar10;
  iVar8 = iVar1 * 0x5b5;
  if (0x1517f < (int)uVar11) {
    iVar7 = param_2 + 1;
    uVar6 = uVar11 - 0x15180;
  }
  iVar2 = iVar8 + 0x955d1c;
  iVar8 = iVar8 + 0x955d1f;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  iVar2 = ((iVar1 + 0x1a90) / 100) * 3;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  lVar3 = (long)(((param_1[3] + (iVar8 >> 2) + ((param_1[4] + iVar10 * -0xc) * 0x16f + -0x16f) / 0xc
                  ) - (iVar1 >> 2)) + -0x7d4b) + (long)iVar7;
  if (-1 < lVar3) {
    uVar4 = lVar3 + 0x10bd9;
    lVar5 = (long)(uVar4 * 4) / 0x23ab1 + ((long)(uVar4 * 4) >> 0x3f) +
            ((uVar4 & 0x3fffffffffffffff) >> 0x3d);
    lVar13 = lVar5 * 0x23ab1;
    lVar3 = lVar13 + 3;
    lVar13 = lVar13 + 6;
    if (-1 < lVar3) {
      lVar13 = lVar3;
    }
    lVar12 = uVar4 - (lVar13 >> 2);
    lVar13 = (lVar12 * 4000 + 4000) / 0x164b09;
    lVar14 = lVar13 * 0x5b5;
    lVar3 = lVar14 + 3;
    if (-1 < lVar14) {
      lVar3 = lVar14;
    }
    lVar3 = (lVar12 - (lVar3 >> 2)) + 0x1f;
    lVar12 = lVar3 * 0x50;
    iVar7 = (int)(lVar12 / 0x6925);
    uVar11 = ((int)lVar13 + (int)lVar5 * 100 + iVar7) - 0x1a90;
    if (uVar11 >> 2 < 0x7e9) {
      lVar12 = lVar12 / 0x98f;
      param_1[4] = (int)lVar12 + iVar7 * -0xc + 1;
      param_1[5] = uVar11;
      auVar9 = SEXT816(lVar12 * 0x98f) * SEXT816(0x6666666666666667);
      param_1[2] = (int)uVar6 / 0xe10;
      param_1[3] = (int)lVar3 - ((int)(auVar9._8_8_ >> 5) - (auVar9._12_4_ >> 0x1f));
      *param_1 = (int)uVar6 % 0x3c;
      param_1[1] = ((int)uVar6 / 0x3c) % 0x3c;
      return 1;
    }
  }
  return 0;
}


