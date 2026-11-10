/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fecc2c; name: FUN_02fecc2c
 */


void FUN_02fecc2c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  *param_1 = &PTR_LAB_042bb140;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  puVar17 = param_1 + 6;
  *puVar17 = 0;
  param_1[4] = uVar3;
  param_1[5] = uVar13;
  param_1[3] = uVar2;
  param_1[7] = 0;
  lVar9 = *(long *)(param_2 + 0x30);
  uVar4 = *(uint *)(param_2 + 0x38);
  uVar16 = (ulong)uVar4;
  lVar15 = 0;
  if (lVar9 != 0) {
    lVar15 = lVar9 + param_2 + 0x30;
  }
  uVar6 = uVar4 - 1;
  if (0 < (int)uVar4 && lVar15 != 0) {
    uVar5 = uVar6 | (int)uVar6 >> 0x10;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
    if ((int)uVar5 < (int)uVar4) {
      local_58 = 0;
      local_68 = 0;
      puStack_60 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_68);
    }
    lVar9 = tpidr_el0;
    lVar10 = *(long *)(lVar9 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    plVar8 = (long *)(**(code **)(*plVar7 + 0x10))
                               (plVar7,-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar5 << 3,0);
    plVar7 = (long *)0x0;
    if (param_1[6] != 0) {
      plVar7 = (long *)(param_1[6] + (long)puVar17);
    }
    uVar11 = (ulong)*(uint *)(param_1 + 7);
    if (0 < (int)*(uint *)(param_1 + 7)) {
      plVar14 = plVar8;
      do {
        *plVar14 = 0;
        lVar10 = 0;
        if (*plVar7 != 0) {
          lVar10 = (long)plVar7 + (*plVar7 - (long)plVar14);
        }
        uVar11 = uVar11 - 1;
        *plVar14 = lVar10;
        *plVar7 = 0;
        plVar7 = plVar7 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar11 != 0);
    }
    if ((int)*(uint *)((long)param_1 + 0x3c) < 0) {
      uVar1 = *(uint *)((long)param_1 + 0x3c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 7)) {
        uVar1 = *(uint *)(param_1 + 7);
      }
      lVar10 = 0;
      if (param_1[6] != 0) {
        lVar10 = param_1[6] + (long)puVar17;
      }
      lVar12 = *(long *)(lVar9 + 0x38d490);
      if (lVar12 == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar12;
      }
      plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,(ulong)uVar1 << 3);
    }
    lVar9 = 0;
    if (plVar8 != (long *)0x0) {
      lVar9 = (long)plVar8 - (long)puVar17;
    }
    param_1[6] = lVar9;
    *(uint *)(param_1 + 7) = uVar4;
    *(uint *)((long)param_1 + 0x3c) = uVar5 | 0x80000000;
    memset((void *)(lVar9 + (long)puVar17),0,(ulong)uVar6 * 8 + 8);
    lVar9 = param_1[6] + (long)puVar17;
    do {
      FUN_02ff9844(lVar9,lVar15);
      uVar16 = uVar16 - 1;
      lVar15 = lVar15 + 8;
      lVar9 = lVar9 + 8;
    } while (uVar16 != 0);
  }
  return;
}


