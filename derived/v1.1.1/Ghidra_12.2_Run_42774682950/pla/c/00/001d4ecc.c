/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d4ecc; name: FUN_001d4ecc
 */


void FUN_001d4ecc(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x18);
  lVar3 = *plVar2;
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + (long)plVar2;
  }
  *(undefined4 *)(lVar1 + (ulong)param_2 * 0x30 + 0x28) = param_3;
  return;
}


