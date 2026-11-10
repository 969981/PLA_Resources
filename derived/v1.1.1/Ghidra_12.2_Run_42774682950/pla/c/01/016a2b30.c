/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a2b30; name: FUN_016a2b30
 */


void FUN_016a2b30(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_016a3284(param_2 + 0x78);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = lVar1 + 0x18;
  }
  return;
}


