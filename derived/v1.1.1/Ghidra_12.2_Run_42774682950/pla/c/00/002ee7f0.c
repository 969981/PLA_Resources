/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ee7f0; name: FUN_002ee7f0
 */


bool FUN_002ee7f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (param_2 == param_4) {
    iVar1 = FUN_002ee670(param_1,param_3,param_2);
    return iVar1 == 0;
  }
  return false;
}


