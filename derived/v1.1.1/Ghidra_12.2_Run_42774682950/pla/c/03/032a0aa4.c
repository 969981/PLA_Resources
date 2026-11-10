/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a0aa4; name: FUN_032a0aa4
 */


long FUN_032a0aa4(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x165) == '\0') {
    lVar1 = FUN_032cf5b0(0x168);
    FUN_032a04d0(lVar1,param_1);
    FUN_032a0af8(lVar1);
  }
  else {
    FUN_032d645c(param_1);
    lVar1 = param_1;
  }
  return lVar1;
}


