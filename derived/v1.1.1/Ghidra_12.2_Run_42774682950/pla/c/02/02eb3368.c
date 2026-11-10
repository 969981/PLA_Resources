/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb3368; name: FUN_02eb3368
 */


void FUN_02eb3368(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = FUN_02eca254();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x54) = param_2;
  FUN_02e71f00();
  return;
}


