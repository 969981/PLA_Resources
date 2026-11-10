/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087e444; name: FUN_0087e444
 */


void FUN_0087e444(undefined1 *param_1,undefined8 param_2,ushort *param_3,long param_4)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_80 [4];
  
  *(uint *)(param_1 + 4) = (uint)param_3[1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) = lVar7 + (ulong)param_3[1] * 8;
  puVar4 = PTR_DAT_04379030;
  puVar3 = PTR_DAT_04379028;
  puVar2 = PTR_DAT_04379020;
  if (param_3[1] != 0) {
    lVar10 = 0;
    lVar12 = 0;
    uVar15 = 1;
    while( true ) {
      lVar7 = lVar7 + lVar12;
      lVar8 = *(long *)(param_3 + 8);
      (**(code **)puVar2)(lVar7);
      (**(code **)puVar3)(lVar7,(long)*(int *)(lVar8 + lVar10));
      (**(code **)puVar4)(lVar7,((int *)(lVar8 + lVar10))[1]);
      if (param_3[1] <= uVar15) break;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar12 = lVar12 + 8;
      lVar10 = lVar10 + 0x10;
      uVar15 = uVar15 + 1;
    }
  }
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  nn::util::BitArray::reset();
  uVar15 = (ulong)*param_3;
  if (*param_3 == 0) {
    iVar11 = 0;
    uVar13 = 0xffffffff;
    uVar16 = 0;
  }
  else {
    if (param_4 != 0) {
      lVar7 = 0;
      uVar16 = 0;
      iVar11 = 0;
      uVar13 = 0xffffffff;
      lVar12 = *(long *)(param_3 + 4);
      if (*(long *)(lVar12 + 0x10) != 0) goto LAB_0087e584;
LAB_0087e5a0:
      uVar15 = (ulong)*(short *)(lVar12 + 2);
      if (*(short *)(lVar12 + 2) < 0) goto LAB_0087e560;
      do {
        uVar9 = (uint)uVar15;
        lVar10 = *(long *)(param_1 + 0x18) + (long)(int)uVar9 * 4;
        (**(code **)PTR_DAT_04378ff8)(lVar10);
        uVar5 = FUN_0087bf1c(*(undefined4 *)(lVar12 + 0xc));
        (**(code **)PTR_DAT_04379000)(lVar10,uVar5,*(undefined4 *)(lVar12 + 8));
        (**(code **)PTR_DAT_04379008)(lVar10,*(undefined2 *)(lVar12 + 4));
        uVar14 = uVar9;
        if ((int)uVar9 <= (int)uVar13) {
          uVar14 = uVar13;
        }
        iVar11 = iVar11 + 1;
        local_80[uVar9 >> 6] = local_80[uVar9 >> 6] | 1L << (uVar15 & 0x3f);
        uVar13 = uVar14;
LAB_0087e560:
        do {
          uVar15 = (ulong)*param_3;
          uVar16 = uVar16 + 1;
          lVar7 = lVar7 + 0x28;
          if (uVar15 <= uVar16) goto LAB_0087e714;
          lVar12 = *(long *)(param_3 + 4) + lVar7;
          if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0087e5a0;
LAB_0087e584:
          uVar6 = FUN_0087d8bc(param_4,0,0);
          uVar15 = uVar6 & 0xffffffff;
        } while ((int)uVar6 < 0);
      } while( true );
    }
    lVar12 = 0;
    uVar16 = 0;
    iVar11 = 0;
    uVar13 = 0xffffffff;
    lVar7 = *(long *)(param_3 + 4);
    sVar1 = *(short *)(lVar7 + 2);
    uVar14 = uVar13;
    if (-1 < sVar1) goto LAB_0087e680;
    while (uVar16 = uVar16 + 1, uVar16 < uVar15) {
      while( true ) {
        lVar12 = lVar12 + 0x28;
        lVar7 = *(long *)(param_3 + 4) + lVar12;
        sVar1 = *(short *)(lVar7 + 2);
        uVar14 = uVar13;
        if (sVar1 < 0) break;
LAB_0087e680:
        lVar10 = *(long *)(param_1 + 0x18) + (long)(int)sVar1 * 4;
        (**(code **)PTR_DAT_04378ff8)(lVar10);
        uVar5 = FUN_0087bf1c(*(undefined4 *)(lVar7 + 0xc));
        (**(code **)PTR_DAT_04379000)(lVar10,uVar5,*(undefined4 *)(lVar7 + 8));
        (**(code **)PTR_DAT_04379008)(lVar10,*(undefined2 *)(lVar7 + 4));
        uVar13 = (uint)(int)sVar1 >> 6;
        local_80[uVar13] = local_80[uVar13] | 1L << ((long)sVar1 & 0x3fU);
        uVar15 = (ulong)*param_3;
        uVar13 = (int)sVar1;
        if ((int)sVar1 <= (int)uVar14) {
          uVar13 = uVar14;
        }
        iVar11 = iVar11 + 1;
        uVar16 = uVar16 + 1;
        if (*param_3 <= uVar16) goto LAB_0087e714;
      }
    }
LAB_0087e714:
    uVar14 = uVar13 + 1;
    uVar16 = (ulong)uVar14;
    if ((int)uVar15 != 0) goto LAB_0087e728;
  }
  uVar14 = 0;
LAB_0087e728:
  *(uint *)(param_1 + 8) = uVar14;
  puVar2 = PTR_DAT_04378ff8;
  if ((iVar11 <= (int)uVar13) && (-1 < (int)uVar13)) {
    lVar7 = 0;
    uVar15 = 0;
    do {
      if ((local_80[uVar15 >> 6 & 0x3ffffff] & 1L << (uVar15 & 0x3f)) == 0) {
        (**(code **)puVar2)(*(long *)(param_1 + 0x18) + lVar7);
      }
      uVar15 = uVar15 + 1;
      lVar7 = lVar7 + 4;
    } while (uVar16 != uVar15);
  }
  *param_1 = 1;
  return;
}


