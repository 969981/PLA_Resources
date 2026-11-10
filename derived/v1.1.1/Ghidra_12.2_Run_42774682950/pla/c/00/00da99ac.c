/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da99ac; name: FUN_00da99ac
 */


long FUN_00da99ac(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0xe0;
  lVar2 = param_1 + 8;
  if ((param_2 & 1) == 0) {
    lVar1 = param_1 + 8;
    lVar2 = param_1 + 0xe0;
  }
  if (((*(byte *)(lVar2 + 0x58) & 1) == 0) && ((*(byte *)(lVar1 + 0x58) & 1) != 0)) {
    lVar2 = lVar1;
  }
  return lVar2;
}


