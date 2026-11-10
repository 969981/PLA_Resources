/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332306c; name: FUN_0332306c
 */


long FUN_0332306c(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  if ((param_2 != 0) && ((param_3 & 1) != 0)) {
    lVar1 = FUN_032cf5b0(0x38);
    FUN_03325838(lVar1,param_2,0xffffffff);
    FUN_032d647c(param_2);
  }
  return lVar1;
}


