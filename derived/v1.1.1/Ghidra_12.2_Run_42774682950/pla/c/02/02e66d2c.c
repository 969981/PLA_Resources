/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e66d2c; name: FUN_02e66d2c
 */


undefined4 FUN_02e66d2c(long param_1,int param_2,float *param_3,undefined1 *param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  undefined1 auStack_60 [16];
  ulong local_50;
  uint local_34;
  
  *param_3 = 0.0;
  *param_4 = 0;
  piVar8 = *(int **)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 == 0) || (*piVar8 == param_2)) {
    piVar9 = piVar8;
  }
  else {
    lVar10 = (ulong)uVar4 * 0x18;
    piVar11 = piVar8;
    do {
      lVar10 = lVar10 + -0x18;
      if (lVar10 == 0) goto LAB_02e66e6c;
      piVar9 = piVar11 + 6;
      piVar1 = piVar11 + 6;
      piVar11 = piVar9;
    } while (*piVar1 != param_2);
  }
  if (piVar9 == piVar8 + (ulong)uVar4 * 6) {
LAB_02e66e6c:
    uVar7 = 2;
  }
  else {
    local_34 = 0;
    plVar2 = (long *)0x0;
    if (**(long **)(piVar9 + 4) != 0) {
      plVar2 = (long *)(**(long **)(piVar9 + 4) + -0x70);
    }
    iVar3 = (**(code **)(*plVar2 + 0xe8))(plVar2,&local_34);
    if ((iVar3 != 2) && (uVar4 = (**(code **)(*plVar2 + 0x48))(plVar2), uVar4 != 0)) {
      (**(code **)(*plVar2 + 0x78))(plVar2,auStack_60);
      uVar6 = uVar4;
      if (local_50 <= uVar4) {
        uVar6 = (uint)local_50;
      }
      if (local_50 != 0) {
        uVar4 = uVar6;
      }
      *param_3 = ((float)local_34 * 100.0) / (float)uVar4;
      if (local_34 < uVar4) {
        bVar5 = (uint)(*(int *)(plVar2[10] + 0x624) - *(int *)(plVar2[10] + 0x628)) <
                uVar4 - local_34;
      }
      else {
        bVar5 = false;
      }
      *param_4 = bVar5;
    }
    uVar7 = 1;
    if (iVar3 == 2) {
      uVar7 = 2;
    }
  }
  return uVar7;
}


