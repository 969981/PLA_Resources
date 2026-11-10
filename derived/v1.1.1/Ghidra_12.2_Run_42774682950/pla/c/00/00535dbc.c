/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00535dbc; name: FUN_00535dbc
 */


long FUN_00535dbc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x90);
  if (param_2 != 0) {
    lVar1 = ((ulong)((int)lVar1 + 0xf) & 0xfffffff0) + param_2;
  }
  return lVar1 + 0x70;
}


