/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001db9f8; name: FUN_001db9f8
 */


undefined8
FUN_001db9f8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_6 != 0))))
  {
    if (DAT_0438eac8 == 0) {
      FUN_0020448c(param_2,param_3,param_4,param_5,param_6);
      uVar1 = FUN_001db97c(param_1,0);
      return uVar1;
    }
    uVar1 = 0;
    DAT_0438eac8 = DAT_0438eac8 + 1;
  }
  return uVar1;
}


