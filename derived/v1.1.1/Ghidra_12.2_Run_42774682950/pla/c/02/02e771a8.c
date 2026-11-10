/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e771a8; name: FUN_02e771a8
 */


void FUN_02e771a8(int *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  uVar4 = (ulong)(uint)param_1[1];
  if (param_1[1] != 0) {
    uVar5 = 0;
    plVar2 = (long *)(param_1 + 4);
    lVar3 = *plVar2;
    while( true ) {
      if (lVar3 != 0) {
        FUN_02f59e60(0);
        uVar4 = (ulong)(uint)param_1[1];
      }
      uVar5 = uVar5 + 1;
      plVar2 = plVar2 + 4;
      if (uVar4 <= uVar5) break;
      lVar3 = *plVar2;
    }
  }
  FUN_02f59e60(0,param_1);
  return;
}


