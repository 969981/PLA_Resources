/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03138a34; name: FUN_03138a34
 */


/* WARNING: Removing unreachable block (ram,0x03138bc0) */

long * FUN_03138a34(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  if (param_2 == param_1) goto LAB_03138c5c;
  uVar10 = *(uint *)(param_2 + 1);
  puVar1 = (undefined4 *)0x0;
  if (*param_2 != 0) {
    puVar1 = (undefined4 *)(*param_2 + (long)param_2);
  }
  uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  if ((int)uVar2 <= (int)uVar10) {
    uVar2 = uVar10;
  }
  lVar7 = *param_1;
  if (puVar1 == (undefined4 *)0x0 || uVar2 == 0) {
    if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
      uVar10 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar10 <= (int)*(uint *)(param_1 + 1)) {
        uVar10 = *(uint *)(param_1 + 1);
      }
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + (long)param_1;
      }
      lVar7 = tpidr_el0;
      lVar8 = *(long *)(lVar7 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar7 + 0x38d490) = lVar8;
      }
      plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,(ulong)uVar10 * 6);
    }
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_03138c5c;
  }
  puVar6 = (undefined4 *)0x0;
  if (lVar7 != 0) {
    puVar6 = (undefined4 *)(lVar7 + (long)param_1);
  }
  uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  if ((int)uVar3 <= (int)*(uint *)(param_1 + 1)) {
    uVar3 = *(uint *)(param_1 + 1);
  }
  if (uVar2 != uVar3) {
    lVar7 = tpidr_el0;
    if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
      lVar9 = *(long *)(lVar7 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar7 + 0x38d490) = lVar9;
      }
      plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar6,(ulong)uVar3 * 6);
    }
    lVar9 = *(long *)(lVar7 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar9;
    }
    plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    puVar6 = (undefined4 *)(**(code **)(*plVar5 + 0x10))(plVar5,(ulong)uVar2 * 6,0);
    uVar10 = *(uint *)(param_2 + 1);
  }
  if (0 < (int)uVar10) {
    if (uVar10 == 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar11 = puVar1;
      puVar12 = puVar6;
      do {
        uVar4 = *puVar11;
        lVar7 = lVar7 + 2;
        *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar11 + 1);
        *puVar12 = uVar4;
        uVar4 = *(undefined4 *)((long)puVar11 + 6);
        *(undefined2 *)((long)puVar12 + 10) = *(undefined2 *)((long)puVar11 + 10);
        *(undefined4 *)((long)puVar12 + 6) = uVar4;
        puVar12 = puVar12 + 3;
        puVar11 = puVar11 + 3;
      } while ((ulong)uVar10 - ((ulong)uVar10 & 1) != lVar7);
      if ((uVar10 & 1) == 0) goto LAB_03138c2c;
    }
    puVar12 = (undefined4 *)((long)puVar6 + lVar7 * 6);
    puVar1 = (undefined4 *)((long)puVar1 + lVar7 * 6);
    uVar4 = *puVar1;
    *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar1 + 1);
    *puVar12 = uVar4;
  }
LAB_03138c2c:
  lVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    lVar7 = (long)puVar6 - (long)param_1;
  }
  *param_1 = lVar7;
  *(int *)(param_1 + 1) = (int)param_2[1];
  uVar10 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  if ((int)uVar10 <= (int)*(uint *)(param_2 + 1)) {
    uVar10 = *(uint *)(param_2 + 1);
  }
  *(uint *)((long)param_1 + 0xc) = uVar10 | 0x80000000;
LAB_03138c5c:
  lVar7 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = lVar7;
  lVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar7;
  return param_1;
}


