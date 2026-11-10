/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b9f2c; name: FUN_016b9f2c
 */


bool FUN_016b9f2c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x10);
  lVar1 = FUN_016ba0b4();
  if (lVar1 == 0) {
    FUN_016ba1f8(param_1,param_2);
  }
  return lVar1 == 0;
}


