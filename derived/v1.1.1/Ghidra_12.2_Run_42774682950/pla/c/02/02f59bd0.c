/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59bd0; name: FUN_02f59bd0
 */


void FUN_02f59bd0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  *param_3 = *param_2;
  *param_2 = param_3;
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)param_2 + 0xc) + -1;
    *(int *)((long)param_2 + 0xc) = iVar2;
    if (iVar2 == *(int *)((long)param_2 + 0x1c)) {
      FUN_02f59d00(param_1,param_2[8],param_2);
      return;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_2 + 1) = 1;
      param_2[9] = 0;
      plVar3 = (long *)(param_2[8] + (ulong)*(uint *)((long)param_2 + 0x14) * 0x10 + 8);
      if (*plVar3 == 0) {
        param_2[10] = param_2;
        *plVar3 = (long)param_2;
        return;
      }
      lVar4 = *(long *)(*plVar3 + 0x50);
      *(undefined8 **)(lVar4 + 0x48) = param_2;
      param_2[10] = lVar4;
      *(undefined8 **)(*plVar3 + 0x50) = param_2;
      return;
    }
  }
  return;
}


