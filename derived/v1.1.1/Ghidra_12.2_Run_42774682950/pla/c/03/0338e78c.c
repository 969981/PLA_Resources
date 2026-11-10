/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338e78c; name: FUN_0338e78c
 */


void FUN_0338e78c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)*param_1;
  lVar2 = (long)(int)param_1[3] + -1;
  lVar3 = param_1[2] + lVar2 * 0x18;
  if ((plVar1[5] - plVar1[2]) + *plVar1 ==
      *(long *)(lVar3 + 8) + ((ulong)*(uint *)(lVar3 + 4) & 0x3fffffff)) {
    param_1[1] = *(long *)(param_1[2] + lVar2 * 0x18 + 0x10);
    *(int *)(param_1 + 3) = (int)lVar2;
    return;
  }
  *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) | 2;
  return;
}


