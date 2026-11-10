/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5723c; name: FUN_02e5723c
 */


void FUN_02e5723c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  char local_14 [4];
  
  lVar1 = FUN_02e57b9c(param_1,param_2,local_14);
  if ((lVar1 == 0) || (local_14[0] == '\0')) {
    return;
  }
  FUN_02e56afc(lVar1 + 0x18,param_3);
  return;
}


