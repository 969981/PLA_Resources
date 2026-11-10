/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053f9f0; name: FUN_0053f9f0
 */


void FUN_0053f9f0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = param_2;
  lVar4 = (long)(1 << (ulong)(*(byte *)(param_2 + 0x10) & 0x1f)) + -1;
  lVar2 = 0;
  if (*(byte *)(param_2 + 0x10) == 0) {
    lVar4 = -1;
  }
  lVar3 = -1;
  do {
    if (lVar4 == lVar3) {
      param_1[1] = -2;
      return;
    }
    lVar3 = lVar3 + 1;
    plVar1 = (long *)(*(long *)(param_2 + 0x18) + lVar2);
    lVar2 = lVar2 + 0x18;
  } while (*plVar1 == 0);
  param_1[1] = lVar3;
  return;
}


