/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053ef60; name: FUN_0053ef60
 */


void FUN_0053ef60(long param_1,uint param_2)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(param_1 + 8);
  if ((ulong)(*(long *)(param_1 + 0x10) - (long)puVar1) < 0x20) {
    puVar1 = (ulong *)FUN_0053f330(param_1,0x20);
  }
  else {
    *(ulong **)(param_1 + 8) = puVar1 + 4;
  }
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = (ulong)(byte)(&DAT_03a2b20b)[param_2];
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}


