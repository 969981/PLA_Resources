/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00214fa0; name: FUN_00214fa0
 */


ulong FUN_00214fa0(ulong param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  byte *pbVar22;
  int iVar23;
  
  uVar18 = param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 - 1 == 0) {
    param_1 = param_1 + *param_2;
    uVar20 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar20 = param_1;
    }
    uVar19 = (uVar20 + uVar18) * 0x10000;
    uVar21 = uVar19 - 0xfff10000;
    if (uVar20 + uVar18 < 0xfff1) {
      uVar21 = uVar19;
    }
    return uVar21 | uVar20;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar20 = param_3;
      if ((param_3 & 1) != 0) {
        param_1 = param_1 + *param_2;
        uVar18 = param_1 + uVar18;
        uVar20 = param_3 - 1;
        param_2 = param_2 + 1;
      }
      if (param_3 != 1) {
        do {
          lVar16 = param_1 + *param_2;
          pbVar22 = param_2 + 1;
          param_2 = param_2 + 2;
          param_1 = lVar16 + (ulong)*pbVar22;
          uVar20 = uVar20 - 2;
          uVar18 = param_1 + lVar16 + uVar18;
        } while (uVar20 != 0);
      }
    }
    uVar20 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar20 = param_1;
    }
    return uVar20 | (uVar18 % 0xfff1) * 0x10000;
  }
  if (param_3 >> 4 < 0x15b) {
LAB_00215164:
    uVar20 = param_3 - 0x10;
    uVar21 = uVar20 & 0xfffffffffffffff0;
    pbVar22 = param_2;
    do {
      lVar16 = param_1 + *pbVar22;
      lVar2 = lVar16 + (ulong)pbVar22[1];
      lVar3 = lVar2 + (ulong)pbVar22[2];
      lVar4 = lVar3 + (ulong)pbVar22[3];
      lVar5 = lVar4 + (ulong)pbVar22[4];
      lVar6 = lVar5 + (ulong)pbVar22[5];
      lVar7 = lVar6 + (ulong)pbVar22[6];
      lVar8 = lVar7 + (ulong)pbVar22[7];
      lVar9 = lVar8 + (ulong)pbVar22[8];
      lVar10 = lVar9 + (ulong)pbVar22[9];
      lVar11 = lVar10 + (ulong)pbVar22[10];
      lVar12 = lVar11 + (ulong)pbVar22[0xb];
      lVar13 = lVar12 + (ulong)pbVar22[0xc];
      lVar14 = lVar13 + (ulong)pbVar22[0xd];
      lVar15 = lVar14 + (ulong)pbVar22[0xe];
      param_3 = param_3 - 0x10;
      param_1 = lVar15 + (ulong)pbVar22[0xf];
      uVar18 = lVar16 + uVar18 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
               lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
      pbVar22 = pbVar22 + 0x10;
    } while (0xf < param_3);
    param_3 = uVar20 - uVar21;
    if (param_3 != 0) {
      param_2 = param_2 + uVar21 + 0x10;
      goto LAB_00215250;
    }
  }
  else {
    do {
      param_3 = param_3 - 0x15b0;
      iVar23 = -0x15b;
      pbVar22 = param_2;
      do {
        lVar16 = param_1 + *pbVar22;
        lVar2 = lVar16 + (ulong)pbVar22[1];
        lVar3 = lVar2 + (ulong)pbVar22[2];
        lVar4 = lVar3 + (ulong)pbVar22[3];
        lVar5 = lVar4 + (ulong)pbVar22[4];
        lVar6 = lVar5 + (ulong)pbVar22[5];
        lVar7 = lVar6 + (ulong)pbVar22[6];
        lVar8 = lVar7 + (ulong)pbVar22[7];
        lVar9 = lVar8 + (ulong)pbVar22[8];
        lVar10 = lVar9 + (ulong)pbVar22[9];
        lVar11 = lVar10 + (ulong)pbVar22[10];
        lVar12 = lVar11 + (ulong)pbVar22[0xb];
        lVar13 = lVar12 + (ulong)pbVar22[0xc];
        lVar14 = lVar13 + (ulong)pbVar22[0xd];
        lVar15 = lVar14 + (ulong)pbVar22[0xe];
        pbVar1 = pbVar22 + 0xf;
        pbVar22 = pbVar22 + 0x10;
        param_1 = lVar15 + (ulong)*pbVar1;
        uVar18 = lVar16 + uVar18 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
        bVar17 = iVar23 != -1;
        iVar23 = iVar23 + 1;
      } while (bVar17);
      param_1 = param_1 % 0xfff1;
      uVar18 = uVar18 % 0xfff1;
      param_2 = param_2 + 0x15b0;
    } while (0x15a < param_3 >> 4);
    if (param_3 == 0) goto LAB_00215358;
    if (0xf < param_3) goto LAB_00215164;
LAB_00215250:
    uVar20 = param_3;
    if ((param_3 & 1) != 0) {
      param_1 = param_1 + *param_2;
      uVar18 = param_1 + uVar18;
      param_2 = param_2 + 1;
      uVar20 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        lVar16 = param_1 + *param_2;
        pbVar22 = param_2 + 1;
        param_2 = param_2 + 2;
        param_1 = lVar16 + (ulong)*pbVar22;
        uVar20 = uVar20 - 2;
        uVar18 = param_1 + lVar16 + uVar18;
      } while (uVar20 != 0);
    }
  }
  param_1 = param_1 % 0xfff1;
  uVar18 = uVar18 % 0xfff1;
LAB_00215358:
  return param_1 | uVar18 << 0x10;
}


