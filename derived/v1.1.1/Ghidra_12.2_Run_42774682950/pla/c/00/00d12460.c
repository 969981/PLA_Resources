/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d12460; name: FUN_00d12460
 */


void FUN_00d12460(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = param_1;
  iVar1 = FUN_02c30440();
  if (iVar1 != 0) {
    FUN_00d124a0(&local_18,param_2 & 1);
  }
  return;
}


