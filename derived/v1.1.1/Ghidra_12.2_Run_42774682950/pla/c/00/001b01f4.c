/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b01f4; name: FUN_001b01f4
 */


/* WARNING: Removing unreachable block (ram,0x001b03e8) */

long * FUN_001b01f4(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  if (param_2 == param_1) goto LAB_001b0480;
  puVar1 = (undefined4 *)0x0;
  if (*param_2 != 0) {
    puVar1 = (undefined4 *)(*param_2 + (long)param_2);
  }
  uVar9 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  lVar10 = *param_1;
  if ((int)uVar2 <= (int)uVar9) {
    uVar2 = uVar9;
  }
  if (puVar1 == (undefined4 *)0x0 || uVar2 == 0) {
    if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
      uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 1)) {
        uVar2 = *(uint *)(param_1 + 1);
      }
      lVar8 = 0;
      if (lVar10 != 0) {
        lVar8 = lVar10 + (long)param_1;
      }
      lVar10 = tpidr_el0;
      lVar7 = *(long *)(lVar10 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar7;
      }
      plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,(ulong)uVar2 * 5);
    }
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_001b0480;
  }
  puVar6 = (undefined4 *)0x0;
  if (lVar10 != 0) {
    puVar6 = (undefined4 *)(lVar10 + (long)param_1);
  }
  uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  if ((int)uVar3 <= (int)*(uint *)(param_1 + 1)) {
    uVar3 = *(uint *)(param_1 + 1);
  }
  if (uVar2 != uVar3) {
    lVar10 = tpidr_el0;
    if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
      lVar8 = *(long *)(lVar10 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar8;
      }
      plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar6,(ulong)uVar3 + (ulong)uVar3 * 4);
    }
    lVar8 = *(long *)(lVar10 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar8;
    }
    plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    puVar6 = (undefined4 *)(**(code **)(*plVar5 + 0x10))(plVar5,(ulong)uVar2 + (ulong)uVar2 * 4,0);
    uVar9 = *(uint *)(param_2 + 1);
  }
  if (0 < (int)uVar9) {
    if (uVar9 == 1) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      puVar11 = puVar1;
      puVar12 = puVar6;
      do {
        uVar4 = *puVar11;
        lVar10 = lVar10 + 2;
        *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar11 + 1);
        *puVar12 = uVar4;
        uVar4 = *(undefined4 *)((long)puVar11 + 5);
        *(undefined1 *)((long)puVar12 + 9) = *(undefined1 *)((long)puVar11 + 9);
        *(undefined4 *)((long)puVar12 + 5) = uVar4;
        puVar12 = (undefined4 *)((long)puVar12 + 10);
        puVar11 = (undefined4 *)((long)puVar11 + 10);
      } while ((ulong)uVar9 - ((ulong)uVar9 & 1) != lVar10);
      if ((uVar9 & 1) == 0) goto LAB_001b0450;
    }
    puVar12 = (undefined4 *)((long)puVar6 + lVar10 * 5);
    puVar1 = (undefined4 *)((long)puVar1 + lVar10 * 5);
    uVar4 = *puVar1;
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar1 + 1);
    *puVar12 = uVar4;
  }
LAB_001b0450:
  lVar10 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    lVar10 = (long)puVar6 - (long)param_1;
  }
  *param_1 = lVar10;
  *(int *)(param_1 + 1) = (int)param_2[1];
  uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  if ((int)uVar2 <= (int)*(uint *)(param_2 + 1)) {
    uVar2 = *(uint *)(param_2 + 1);
  }
  *(uint *)((long)param_1 + 0xc) = uVar2 | 0x80000000;
LAB_001b0480:
  lVar10 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = lVar10;
  lVar10 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar10;
  return param_1;
}


