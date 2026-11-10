/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001db2e4; name: FUN_001db2e4
 */


/* WARNING: Removing unreachable block (ram,0x001db42c) */

void FUN_001db2e4(long *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long *plVar14;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  *param_1 = (long)(PTR_DAT_043726c8 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  plVar14 = param_1 + 4;
  *plVar14 = 0;
  param_1[5] = 0;
  lVar8 = *(long *)(param_2 + 0x48);
  param_1[7] = *(long *)(param_2 + 0x38);
  param_1[9] = lVar8;
  lVar8 = *(long *)(param_2 + 0x30);
  param_1[8] = *(long *)(param_2 + 0x40);
  param_1[6] = lVar8;
  lVar8 = *(long *)(param_2 + 0x20);
  uVar2 = *(uint *)(param_2 + 0x28);
  puVar1 = (undefined4 *)0x0;
  if (lVar8 != 0) {
    puVar1 = (undefined4 *)(lVar8 + param_2 + 0x20);
  }
  if ((int)uVar2 < 1 || puVar1 == (undefined4 *)0x0) {
    return;
  }
  uVar5 = uVar2 - 1 | (int)(uVar2 - 1) >> 0x10;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  uVar5 = uVar5 | (int)uVar5 >> 8;
  uVar5 = uVar5 | (int)uVar5 >> 4;
  uVar5 = uVar5 | (int)uVar5 >> 2;
  uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
  if ((int)uVar5 < (int)uVar2) {
    local_68 = 0;
    local_78 = 0;
    puStack_70 = PTR_DAT_04372528;
    FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                 "Capacity reservation overflow",&local_78);
  }
  lVar8 = tpidr_el0;
  lVar9 = *(long *)(lVar8 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar9;
  }
  plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  puVar7 = (undefined4 *)(**(code **)(*plVar6 + 0x10))(plVar6,(long)(int)uVar5 * 6,0);
  uVar3 = *(uint *)(param_1 + 5);
  puVar13 = (undefined4 *)0x0;
  if (param_1[4] != 0) {
    puVar13 = (undefined4 *)(param_1[4] + (long)plVar14);
  }
  if (0 < (int)uVar3) {
    if (uVar3 == 1) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      puVar11 = puVar13;
      puVar12 = puVar7;
      do {
        uVar4 = *puVar11;
        lVar9 = lVar9 + 2;
        *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar11 + 1);
        *puVar12 = uVar4;
        uVar4 = *(undefined4 *)((long)puVar11 + 6);
        *(undefined2 *)((long)puVar12 + 10) = *(undefined2 *)((long)puVar11 + 10);
        *(undefined4 *)((long)puVar12 + 6) = uVar4;
        puVar12 = puVar12 + 3;
        puVar11 = puVar11 + 3;
      } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar9);
      if ((uVar3 & 1) == 0) goto LAB_001db498;
    }
    puVar13 = (undefined4 *)((long)puVar13 + lVar9 * 6);
    puVar12 = (undefined4 *)((long)puVar7 + lVar9 * 6);
    uVar4 = *puVar13;
    *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar13 + 1);
    *puVar12 = uVar4;
  }
LAB_001db498:
  if ((int)*(uint *)((long)param_1 + 0x2c) < 0) {
    uVar3 = *(uint *)((long)param_1 + 0x2c) & 0x7fffffff;
    if ((int)uVar3 <= (int)*(uint *)(param_1 + 5)) {
      uVar3 = *(uint *)(param_1 + 5);
    }
    lVar9 = 0;
    if (param_1[4] != 0) {
      lVar9 = param_1[4] + (long)plVar14;
    }
    lVar10 = *(long *)(lVar8 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar10;
    }
    plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,(ulong)uVar3 * 6);
  }
  lVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    lVar8 = (long)puVar7 - (long)plVar14;
  }
  *(uint *)(param_1 + 5) = uVar2;
  *(uint *)((long)param_1 + 0x2c) = uVar5 | 0x80000000;
  param_1[4] = lVar8;
  lVar9 = 0;
  if (uVar2 != 1) {
    lVar9 = 0;
    puVar7 = puVar1;
    puVar13 = (undefined4 *)(lVar8 + (long)plVar14);
    do {
      uVar4 = *puVar7;
      lVar9 = lVar9 + 2;
      *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar7 + 1);
      *puVar13 = uVar4;
      uVar4 = *(undefined4 *)((long)puVar7 + 6);
      *(undefined2 *)((long)puVar13 + 10) = *(undefined2 *)((long)puVar7 + 10);
      *(undefined4 *)((long)puVar13 + 6) = uVar4;
      puVar13 = puVar13 + 3;
      puVar7 = puVar7 + 3;
    } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar9);
  }
  if ((uVar2 & 1) != 0) {
    puVar13 = (undefined4 *)(lVar8 + (long)plVar14 + lVar9 * 6);
    puVar1 = (undefined4 *)((long)puVar1 + lVar9 * 6);
    uVar4 = *puVar1;
    *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar1 + 1);
    *puVar13 = uVar4;
  }
  return;
}


