/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ccdd8; name: FUN_013ccdd8
 */


void FUN_013ccdd8(undefined8 param_1,byte param_2)

{
  long lVar1;
  byte local_28 [8];
  
  lVar1 = FUN_013cafb4();
  if (lVar1 != 0) {
    FUN_0280779c(lVar1,param_2 & 1);
    local_28[0] = param_2 & 1;
    FUN_013cdc5c(lVar1,local_28,0);
  }
  return;
}


