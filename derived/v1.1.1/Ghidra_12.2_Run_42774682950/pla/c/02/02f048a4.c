/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f048a4; name: FUN_02f048a4
 */


undefined8 FUN_02f048a4(long param_1,uint param_2,int param_3,uint param_4)

{
  int *piVar1;
  MutexType *pMVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  lVar8 = DAT_0440a120;
  pMVar2 = (MutexType *)(DAT_0440a120 + 0x70);
  nn::os::LockMutex(pMVar2);
  uVar4 = *(uint *)(lVar8 + 0x98);
  if (uVar4 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar10 = 0;
    if (uVar4 != 0) {
      uVar10 = param_2 / uVar4;
    }
    for (plVar9 = *(long **)(*(long *)(lVar8 + 0x90) + (ulong)(param_2 - uVar10 * uVar4) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == param_2) {
        *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + 1;
        break;
      }
    }
  }
  nn::os::UnlockMutex(pMVar2);
  piVar5 = *(int **)(param_1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x30);
  if ((uVar4 == 0) || (*piVar5 == param_3)) {
    piVar6 = piVar5;
  }
  else {
    lVar8 = (ulong)uVar4 * 0x10;
    piVar7 = piVar5;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) goto joined_r0x02f04ab4;
      piVar1 = piVar7 + 4;
      piVar6 = piVar7 + 4;
      piVar7 = piVar7 + 4;
    } while (*piVar1 != param_3);
  }
  if (piVar6 != piVar5 + (ulong)uVar4 * 4) {
    if (plVar9 == *(long **)(piVar6 + 2)) {
      if (plVar9 == (long *)0x0) {
        return 1;
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
      return 1;
    }
    FUN_02f03e68();
    (**(code **)(**(long **)(piVar6 + 2) + 0x18))();
    FUN_02f055a0((undefined8 *)(param_1 + 0x28),param_3);
  }
joined_r0x02f04ab4:
  if (plVar9 == (long *)0x0) {
    return 0x10;
  }
  piVar5 = *(int **)(param_1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x30);
  if ((uVar4 == 0) || (*piVar5 == param_3)) {
    piVar6 = piVar5;
  }
  else {
    lVar8 = (ulong)uVar4 * 0x10;
    piVar7 = piVar5;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) goto LAB_02f049d8;
      piVar6 = piVar7 + 4;
      piVar1 = piVar7 + 4;
      piVar7 = piVar6;
    } while (*piVar1 != param_3);
  }
  if (piVar6 != piVar5 + (ulong)uVar4 * 4) {
LAB_02f04a40:
    *(long **)(piVar6 + 2) = plVar9;
    plVar9[4] = *(long *)(param_1 + 0x18);
    if ((param_4 & 1) != 0) {
      FUN_02f04094(*(undefined8 *)(param_1 + 0x18));
    }
    return 1;
  }
LAB_02f049d8:
  uVar10 = *(uint *)(param_1 + 0x34);
  if (uVar10 <= uVar4) {
    iVar3 = uVar10 + (uVar10 >> 1);
    if (uVar10 == 0) {
      iVar3 = 1;
    }
    uVar10 = iVar3 + uVar10;
    piVar5 = (int *)(*DAT_0442d148)(0,piVar5,(ulong)uVar10 << 4);
    if (piVar5 == (int *)0x0) goto LAB_02f04a70;
    *(int **)(param_1 + 0x28) = piVar5;
    *(uint *)(param_1 + 0x34) = uVar10;
  }
  if (uVar4 < uVar10) {
    uVar4 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar4 + 1;
    if (piVar5 + (ulong)uVar4 * 4 != (int *)0x0) {
      piVar6 = piVar5 + (ulong)uVar4 * 4;
      piVar5[(ulong)uVar4 * 4] = param_3;
      goto LAB_02f04a40;
    }
  }
LAB_02f04a70:
  (**(code **)(*plVar9 + 0x18))(plVar9);
  return 0x34;
}


