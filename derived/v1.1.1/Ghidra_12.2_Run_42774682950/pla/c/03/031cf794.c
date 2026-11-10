/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cf794; name: FUN_031cf794
 */


void FUN_031cf794(long *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  long *plVar16;
  int *piVar17;
  long lVar18;
  undefined4 *puVar19;
  int *piVar20;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *puStack_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  
  lVar7 = (long)(int)param_1[1] + -1;
  uVar6 = param_2[1];
  lVar13 = (long)(int)uVar6;
  if (uVar6 != (uint)lVar7) {
    lVar7 = FUN_031cf710(param_1,*param_1 + lVar7 * 0x30);
    *(uint *)(lVar7 + 4) = uVar6;
  }
  lVar14 = *param_1;
  plVar16 = (long *)(lVar14 + lVar13 * 0x30 + 0x20);
  lVar7 = *plVar16;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    piVar17 = (int *)(lVar14 + lVar13 * 0x30 + 0x28);
    uVar9 = (long)*piVar17 + 1;
    lVar18 = tpidr_el0;
    lVar8 = *(long *)(lVar18 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar18 + 0x38d490) = lVar8;
    }
    plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    local_88 = (undefined4)uVar9;
    uStack_84 = 8;
    if ((uVar9 & 0x1ffffffff0000000) != 0) {
      local_80 = 2;
      puStack_78 = &DAT_0411b3a0;
      local_70 = &uStack_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_80);
    }
    (**(code **)(*plVar5 + 0x18))
              (plVar5,lVar7,-(uVar9 >> 0x1c & 1) & 0xffffffff00000000 | uVar9 * 8 & 0xfffffff8);
    *plVar16 = (long)&DAT_03aad864;
    *piVar17 = 0;
  }
  puVar4 = PTR_PTR_0434a080;
  lVar7 = lVar14 + lVar13 * 0x30;
  piVar17 = (int *)(lVar7 + 0x18);
  iVar3 = *piVar17;
  plVar16 = (long *)(lVar7 + 0x10);
  lVar7 = *plVar16;
  if (iVar3 != 0) {
    lVar18 = (long)iVar3 * 0x68;
    do {
      FUN_031cd728(lVar7 + -0x60 + lVar18);
      lVar18 = lVar18 + -0x68;
    } while (lVar18 != 0);
  }
  *piVar17 = 0;
  puVar11 = (uint *)(lVar14 + lVar13 * 0x30 + 0x1c);
  uVar2 = *puVar11;
  if ((-1 < (int)uVar2) && (*plVar16 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*plVar16,((ulong)uVar2 & 0x3fffffff) * 0x68);
  }
  *plVar16 = 0;
  *puVar11 = 0x80000000;
  lVar7 = (long)(int)param_1[1] + -1;
  *(uint *)(param_1 + 1) = (uint)lVar7;
  if ((uint)lVar7 != uVar6) {
    lVar14 = *param_1;
    puVar15 = (undefined4 *)(lVar14 + lVar7 * 0x30);
    puVar19 = (undefined4 *)(lVar14 + lVar13 * 0x30);
    *puVar19 = *puVar15;
    uVar1 = puVar15[2];
    *(undefined8 *)(puVar19 + 4) = 0;
    puVar19[2] = uVar1;
    piVar17 = puVar19 + 6;
    piVar17[0] = 0;
    piVar17[1] = -0x80000000;
    puVar11 = puVar15 + 7;
    uVar6 = *puVar11;
    puVar12 = (undefined8 *)(puVar15 + 4);
    if ((int)uVar6 < 0) {
      FUN_031cec70(puVar4,puVar12);
      uVar6 = *puVar11;
    }
    *(undefined8 *)(puVar19 + 4) = *puVar12;
    lVar7 = lVar14 + lVar7 * 0x30;
    piVar20 = (int *)(lVar7 + 0x18);
    *piVar17 = *piVar20;
    puVar19[7] = uVar6;
    *puVar12 = 0;
    *(undefined8 *)(puVar15 + 6) = 0;
    lVar14 = lVar14 + lVar13 * 0x30;
    *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
    *(undefined4 *)(lVar14 + 0x28) = *(undefined4 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x20) = &DAT_03aad864;
    *(undefined4 *)(lVar7 + 0x28) = 0;
    plVar16 = (long *)(lVar7 + 0x10);
    lVar7 = *plVar16;
    if (*piVar20 != 0) {
      lVar13 = (long)*piVar20 * 0x68;
      do {
        FUN_031cd728(lVar7 + -0x60 + lVar13);
        lVar13 = lVar13 + -0x68;
      } while (lVar13 != 0);
    }
    *piVar20 = 0;
    if ((-1 < (int)*puVar11) && (*plVar16 != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,*plVar16,((ulong)*puVar11 & 0x3fffffff) * 0x68);
    }
    *plVar16 = 0;
    *puVar11 = 0x80000000;
  }
  lVar7 = param_1[2];
  uVar9 = (ulong)(int)param_1[3];
  uVar10 = ((long)param_2 - lVar7 >> 3) + 1U & uVar9;
  while (puVar11 = (uint *)(lVar7 + uVar10 * 8), -1 < (int)puVar11[1]) {
    lVar13 = lVar7 + ((ulong)*puVar11 & uVar9 & 0xffffffff) * 8;
    uVar10 = (ulong)(int)uVar9;
    if ((uVar10 & (long)param_2 - lVar13 >> 3) < (uVar10 & (long)puVar11 - lVar13 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar11;
      uVar9 = (ulong)*(uint *)(param_1 + 3);
      lVar7 = param_1[2];
      uVar10 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar11;
    }
    uVar10 = ((ulong)((long)puVar11 - lVar7) >> 3) + 1 & uVar10;
  }
  param_2[1] = 0xffffffff;
  return;
}


