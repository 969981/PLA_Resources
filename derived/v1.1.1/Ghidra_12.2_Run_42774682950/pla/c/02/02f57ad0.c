/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f57ad0; name: FUN_02f57ad0
 */


undefined8 FUN_02f57ad0(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  int *piVar16;
  
  if (*(int *)(&DAT_0442c0e0 + (long)param_1 * 0x820) != 0) {
    FUN_02f57a60(param_1);
    return 0;
  }
  lVar14 = (long)param_1;
  *(int *)(&DAT_0442c0e0 + (long)param_1 * 0x820) = 1;
  if (param_2 != (undefined8 *)0x0) {
    lVar13 = lVar14 * 0x820;
    uVar8 = param_2[2];
    uVar4 = param_2[1];
    *(undefined8 *)(&DAT_0442c0e8 + lVar13) = *param_2;
    *(undefined8 *)(&DAT_0442c0f0 + lVar13) = uVar4;
    *(undefined8 *)(&DAT_0442c0f8 + lVar13) = uVar8;
    uVar4 = param_2[3];
    uVar8 = param_2[4];
    uVar1 = param_2[6];
    *(undefined8 *)(&DAT_0442c110 + lVar13) = param_2[5];
    *(undefined8 *)(&DAT_0442c118 + lVar13) = uVar1;
    *(undefined8 *)(&DAT_0442c100 + lVar13) = uVar4;
    *(undefined8 *)(&DAT_0442c108 + lVar13) = uVar8;
  }
  lVar13 = lVar14 * 0x820;
  uVar6 = *(ulong *)(&DAT_0442c0f8 + lVar13);
  uVar5 = 0;
  puVar9 = (ulong *)(&DAT_0442c120 + lVar13);
  *puVar9 = uVar6;
  *(undefined4 *)(&DAT_0442c564 + lVar13) = 0;
  *(ulong *)(&DAT_0442c130 + lVar13) = uVar6;
  if (((param_2 != (undefined8 *)0x0) && (uVar6 != 0)) && (uVar5 = 0, *(int *)(param_2 + 5) != 0)) {
    uVar5 = 1;
    *(undefined4 *)(&DAT_0442c564 + lVar13) = 1;
  }
  if (uVar6 < 0x200) {
    uVar6 = 0x200;
  }
  else {
    if (uVar6 < 0x4000001) goto LAB_02f57bac;
    uVar6 = 0x4000000;
  }
  *puVar9 = uVar6;
LAB_02f57bac:
  uVar10 = 0;
  *(ulong *)(&DAT_0442c128 + lVar14 * 0x820) = 0;
  do {
    uVar6 = uVar6 >> 1;
    uVar10 = uVar10 + 1;
  } while (uVar6 != 1);
  uVar7 = 1L << (uVar10 & 0x3f);
  *(ulong *)(&DAT_0442c128 + lVar14 * 0x820) = uVar10;
  *puVar9 = uVar7;
  lVar2 = lVar14 * 0x820;
  uVar10 = 0x1000;
  puVar9 = (ulong *)(&DAT_0442c138 + lVar2);
  *puVar9 = 0x1000;
  uVar11 = *(ulong *)(&DAT_0442c100 + lVar2);
  uVar6 = 0x10000;
  if (uVar11 != 0) {
    uVar6 = uVar11;
  }
  *(long *)(&DAT_0442c140 + lVar2) = 0xc;
  if (0x3ffff < uVar6) {
    uVar6 = 0x40000;
  }
  if (0x1000 < uVar6) {
    lVar12 = 0xc;
    uVar10 = 0x1000;
    do {
      uVar10 = uVar10 << 1;
      lVar12 = lVar12 + 1;
    } while (uVar10 < uVar6);
    *puVar9 = uVar10;
    *(long *)(&DAT_0442c140 + lVar2) = lVar12;
  }
  lVar12 = lVar14 * 0x820;
  uVar11 = *(ulong *)(&DAT_0442c108 + lVar12);
  *(ulong *)(&DAT_0442c148 + lVar12) = -uVar10;
  uVar6 = 0x10;
  if (uVar11 != 0) {
    uVar6 = uVar11;
  }
  if ((uVar6 * uVar10 < uVar7) && (uVar6 = 0, uVar10 != 0)) {
    uVar6 = uVar7 / uVar10;
  }
  *(ulong *)(&DAT_0442c150 + lVar12) = uVar6;
  if ((uVar10 <= uVar7) && ((uVar6 * uVar10 & uVar7 - 1) != 0)) {
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = uVar7 / uVar10;
    }
    *(ulong *)(&DAT_0442c150 + lVar12) = uVar6;
  }
  *(ulong *)(&DAT_0442c0f8 + lVar13) = uVar7;
  lVar13 = lVar14 * 0x820;
  uVar7 = uVar6;
  if (0x3f < uVar6) {
    uVar7 = 0x40;
  }
  *(ulong *)(&DAT_0442c100 + lVar2) = uVar10;
  *(ulong *)(&DAT_0442c108 + lVar12) = uVar6;
  if (uVar7 < 5) {
    uVar7 = 4;
  }
  uVar6 = uVar7 >> 2;
  *(undefined4 *)(&DAT_0442c110 + lVar13) = uVar5;
  if (uVar7 < 9) {
    uVar6 = 2;
  }
  *(ulong *)(&DAT_0442c158 + lVar13) = uVar7;
  *(ulong *)(&DAT_0442c160 + lVar13) = uVar6;
  iVar3 = FUN_02f59d60(&DAT_0442d120 + lVar14 * 4);
  if (iVar3 == 0) {
    lVar2 = lVar14 * 0x820;
    iVar3 = 0x10;
    *(undefined8 *)(&DAT_0442c568 + lVar2) = *(undefined8 *)(&DAT_0442c118 + lVar2);
    *(undefined4 *)(&DAT_0442c560 + lVar2) = 0;
    *(undefined4 *)(&DAT_0442c8f0 + lVar2) = 0;
    *(undefined4 *)(&DAT_0442c168 + lVar2) = 0x10;
    lVar13 = 1;
    *(undefined2 *)(&DAT_0442c16e + lVar2) = 0;
    *(short *)(&DAT_0442c16c + lVar2) = (short)((int)*puVar9 + 0xfffa0U >> 4);
    piVar16 = (int *)(&DAT_0442c170 + lVar2);
    do {
      *piVar16 = iVar3;
      FUN_02f57f80(param_1,lVar13);
      lVar13 = lVar13 + 1;
      iVar3 = iVar3 + 0x10;
      piVar16 = piVar16 + 2;
    } while (lVar13 != 0x41);
    uVar6 = 0x7e00;
    if (*puVar9 - 0x60 < 0xfc02) {
      uVar6 = *puVar9 - 0x60 >> 1;
    }
    *(ulong *)(&DAT_0442c558 + lVar14 * 0x820) = uVar6;
    if (0x5ff < uVar6) {
      puVar15 = (undefined4 *)(&DAT_0442c370 + lVar14 * 0x820);
      uVar6 = 0x600;
      lVar13 = 0x41;
      do {
        *puVar15 = (int)uVar6;
        FUN_02f57f80(param_1,lVar13);
        if (lVar13 == 0x7d) break;
        uVar6 = uVar6 + 0x200;
        lVar13 = lVar13 + 1;
        puVar15 = puVar15 + 2;
      } while (uVar6 <= *(ulong *)(&DAT_0442c558 + lVar14 * 0x820));
    }
    lVar14 = lVar14 * 0x820;
    *(undefined8 *)(&DAT_0442c770 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c778 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c780 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c788 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c790 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c798 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7a0 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7a8 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7b0 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7b8 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7c0 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7c8 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7d0 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7d8 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7e0 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7e8 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7f0 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c7f8 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c800 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c808 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c810 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c818 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c820 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c828 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c830 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c838 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c840 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c848 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c850 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c858 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c860 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c868 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c870 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c878 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c880 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c888 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c890 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c898 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c8a0 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c8a8 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c8b0 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c8b8 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c8c0 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c8c8 + lVar14) = 0;
    uVar4 = 0;
    *(undefined8 *)(&DAT_0442c8d0 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c8d8 + lVar14) = 0;
    *(undefined8 *)(&DAT_0442c8e0 + lVar14) = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


