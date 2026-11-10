/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031faa70; name: FUN_031faa70
 */


/* WARNING: Removing unreachable block (ram,0x031fabc0) */

long * FUN_031faa70(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong local_68 [2];
  undefined *local_58;
  uint *local_50;
  undefined4 *puStack_48;
  undefined4 local_38;
  uint local_34;
  
  puVar5 = PTR_PTR_0434a080;
  if (param_2 == param_1) goto LAB_031faadc;
  uVar1 = *(uint *)((long)param_1 + 0xc) & 0x3fffffff;
  uVar3 = *(uint *)(param_2 + 1);
  lVar10 = *param_2;
  lVar13 = *param_1;
  lVar14 = lVar13;
  if ((int)uVar1 < (int)uVar3) {
    local_68[0] = (long)(int)uVar3 << 4;
    uVar4 = *(uint *)(param_1 + 1);
    local_38 = 0x10;
    local_34 = uVar3;
    if ((int)uVar3 < 0) {
      local_68[1] = 2;
      local_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",local_68 + 1);
      if ((int)uVar1 <= (int)local_34) goto LAB_031fab3c;
LAB_031fab48:
      local_68[1] = 1;
      local_50 = &local_34;
      local_58 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",local_68 + 1);
    }
    else {
      if ((int)uVar3 < (int)uVar1) goto LAB_031fab48;
LAB_031fab3c:
      if (0x3fffffff < (int)local_34) goto LAB_031fab48;
    }
    uVar1 = *(uint *)((long)param_1 + 0xc);
    lVar14 = (**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_68[0],local_68);
    if (0 < (int)uVar4) {
      if (uVar4 == 1) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        puVar9 = (undefined8 *)(lVar14 + 0x10);
        puVar11 = (undefined8 *)(lVar13 + 0x10);
        do {
          uVar2 = puVar11[-1];
          lVar7 = lVar7 + 2;
          puVar9[-2] = puVar11[-2];
          puVar9[-1] = uVar2;
          uVar2 = puVar11[1];
          *puVar9 = *puVar11;
          puVar9[1] = uVar2;
          puVar9 = puVar9 + 4;
          puVar11 = puVar11 + 4;
        } while ((ulong)uVar4 - ((ulong)uVar4 & 1) != lVar7);
        if ((uVar4 & 1) == 0) goto LAB_031fac3c;
      }
      puVar9 = (undefined8 *)(lVar14 + lVar7 * 0x10);
      puVar11 = (undefined8 *)(lVar13 + lVar7 * 0x10);
      uVar2 = puVar11[1];
      *puVar9 = *puVar11;
      puVar9[1] = uVar2;
    }
LAB_031fac3c:
    if (-1 < (int)uVar1) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar13,((ulong)uVar1 & 0x3fffffff) << 4);
    }
    if (local_68[0] < 0x3fffffff0) {
      uVar6 = (undefined4)(local_68[0] >> 4);
    }
    else {
      uVar6 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0xc) = uVar6;
    *param_1 = lVar14;
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = uVar1;
  if ((int)uVar3 <= (int)uVar1) {
    uVar4 = uVar3;
  }
  if ((lVar14 != lVar10) && (0 < (int)uVar4)) {
    if (uVar4 == 1) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      puVar9 = (undefined8 *)(lVar10 + 0x10);
      puVar11 = (undefined8 *)(lVar14 + 0x10);
      do {
        uVar2 = puVar9[-1];
        lVar13 = lVar13 + 2;
        puVar11[-2] = puVar9[-2];
        puVar11[-1] = uVar2;
        uVar2 = puVar9[1];
        *puVar11 = *puVar9;
        puVar11[1] = uVar2;
        puVar9 = puVar9 + 4;
        puVar11 = puVar11 + 4;
      } while ((ulong)uVar4 - ((ulong)uVar4 & 1) != lVar13);
    }
    if ((uVar4 & 1) != 0) {
      puVar9 = (undefined8 *)(lVar10 + lVar13 * 0x10);
      puVar11 = (undefined8 *)(lVar14 + lVar13 * 0x10);
      uVar2 = puVar9[1];
      *puVar11 = *puVar9;
      puVar11[1] = uVar2;
    }
    lVar14 = *param_1;
  }
  if ((int)uVar1 < (int)uVar3) {
    puVar9 = (undefined8 *)(lVar10 + (long)(int)uVar4 * 0x10);
    puVar11 = (undefined8 *)(lVar14 + (long)(int)uVar4 * 0x10);
    uVar1 = uVar3 - uVar4 & 1;
    if (uVar3 != uVar4 + 1) {
      iVar8 = (uVar3 - uVar4) - uVar1;
      puVar12 = puVar11;
      puVar15 = puVar9;
      do {
        uVar2 = puVar15[1];
        puVar9 = puVar15 + 4;
        *puVar12 = *puVar15;
        puVar12[1] = uVar2;
        puVar11 = puVar12 + 4;
        uVar2 = puVar15[3];
        iVar8 = iVar8 + -2;
        puVar12[2] = puVar15[2];
        puVar12[3] = uVar2;
        puVar12 = puVar11;
        puVar15 = puVar9;
      } while (iVar8 != 0);
    }
    if (uVar1 != 0) {
      uVar2 = puVar9[1];
      *puVar11 = *puVar9;
      puVar11[1] = uVar2;
    }
  }
  *(uint *)(param_1 + 1) = uVar3;
LAB_031faadc:
  FUN_032c27dc(param_1 + 2,param_2 + 2);
  return param_1;
}


