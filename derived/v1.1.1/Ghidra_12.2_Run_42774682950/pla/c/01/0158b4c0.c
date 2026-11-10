/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158b4c0; name: FUN_0158b4c0
 */


long FUN_0158b4c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_18;
  
  local_18 = param_2;
  lVar2 = FUN_0158bea4(param_1 + 0x68,&local_18);
  lVar1 = param_1 + 0x100;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x18;
  }
  return lVar1;
}


