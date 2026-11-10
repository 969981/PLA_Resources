/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec9840; name: FUN_02ec9840
 */


void FUN_02ec9840(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_02eca254(param_3);
  if (lVar1 == 0) {
    return;
  }
  FUN_02ea7d54(lVar1 + 0x20,param_1);
  *(undefined4 *)(lVar1 + 0x38) = param_2;
  FUN_02eca440(&DAT_0440a7e8,lVar1 + 0x20);
  return;
}


