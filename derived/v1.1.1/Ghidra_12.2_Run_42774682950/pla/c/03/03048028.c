/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03048028; name: FUN_03048028
 */


/* WARNING: Removing unreachable block (ram,0x03048164) */

void FUN_03048028(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined *local_68;
  uint *local_60;
  undefined4 *puStack_58;
  
  puVar4 = PTR_PTR_0434a080;
  if (param_2 == param_1) goto LAB_03048238;
  uVar1 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
  uVar2 = *(uint *)(param_2 + 0x10);
  lVar16 = *(long *)(param_2 + 8);
  lVar15 = *(long *)(param_1 + 8);
  lVar5 = lVar15;
  if ((int)uVar1 < (int)uVar2) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar17 = (ulong)uVar3;
    local_80 = (long)(int)uVar2 << 1;
    local_78 = 2;
    local_74 = uVar2;
    if ((int)uVar2 < 0) {
      local_70 = 2;
      local_68 = &DAT_0411b3a0;
      local_60 = &local_74;
      puStack_58 = &local_78;
      FUN_03320b50(0x1bd2a77e,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x53,"Array size overflow {}*{}",&local_70);
      if ((int)uVar1 <= (int)local_74) goto LAB_030480a0;
LAB_030480ac:
      local_70 = 1;
      local_60 = &local_74;
      local_68 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_70);
    }
    else {
      if ((int)uVar2 < (int)uVar1) goto LAB_030480ac;
LAB_030480a0:
      if (0x3fffffff < (int)local_74) goto LAB_030480ac;
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    lVar5 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
    if (0 < (int)uVar3) {
      uVar8 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        puVar10 = (undefined2 *)(lVar5 + 4);
        puVar12 = (undefined2 *)(lVar15 + 4);
        do {
          puVar10[-2] = puVar12[-2];
          puVar10[-1] = puVar12[-1];
          *puVar10 = *puVar12;
          puVar9 = puVar12 + 1;
          lVar14 = lVar14 + 4;
          puVar12 = puVar12 + 4;
          puVar10[1] = *puVar9;
          puVar10 = puVar10 + 4;
        } while (uVar17 - uVar8 != lVar14);
      }
      if ((uVar3 & 3) != 0) {
        puVar10 = (undefined2 *)(lVar15 + lVar14 * 2);
        puVar12 = (undefined2 *)(lVar5 + lVar14 * 2);
        do {
          uVar8 = uVar8 - 1;
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar8 != 0);
      }
    }
    if (-1 < (int)uVar1) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar15,(uVar1 & 0x3fffffff) << 1);
    }
    if (local_80 < 0x7ffffffe) {
      uVar6 = (undefined4)(local_80 >> 1);
    }
    else {
      uVar6 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x14) = uVar6;
    *(long *)(param_1 + 8) = lVar5;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  if ((lVar5 != lVar16) && (0 < (int)uVar1)) {
    if (uVar1 == 1) {
      lVar15 = 0;
LAB_0304819c:
      *(undefined2 *)(lVar5 + lVar15 * 2) = *(undefined2 *)(lVar16 + lVar15 * 2);
    }
    else {
      lVar15 = 0;
      do {
        lVar14 = lVar15 * 2;
        lVar15 = lVar15 + 2;
        puVar10 = (undefined2 *)(lVar16 + lVar14);
        puVar12 = (undefined2 *)(lVar5 + lVar14);
        *puVar12 = *puVar10;
        puVar12[1] = puVar10[1];
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar15);
      if ((uVar1 & 1) != 0) goto LAB_0304819c;
    }
    lVar5 = *(long *)(param_1 + 8);
  }
  if ((int)uVar3 < (int)uVar2) {
    uVar3 = uVar2 - uVar1 & 3;
    puVar10 = (undefined2 *)(lVar16 + (long)(int)uVar1 * 2);
    puVar12 = (undefined2 *)(lVar5 + (long)(int)uVar1 * 2);
    if (2 < uVar2 + ~uVar1) {
      iVar13 = (uVar2 - uVar1) - uVar3;
      puVar9 = puVar10;
      puVar11 = puVar12;
      do {
        *puVar11 = *puVar9;
        puVar11[1] = puVar9[1];
        puVar11[2] = puVar9[2];
        puVar10 = puVar9 + 4;
        puVar12 = puVar11 + 4;
        iVar13 = iVar13 + -4;
        puVar11[3] = puVar9[3];
        puVar9 = puVar10;
        puVar11 = puVar12;
      } while (iVar13 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  *(uint *)(param_1 + 0x10) = uVar2;
LAB_03048238:
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  return;
}


