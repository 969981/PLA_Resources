/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4e704; name: FUN_02f4e704
 */


bool FUN_02f4e704(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined **local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = *param_2;
  local_28 = *(undefined4 *)(param_2 + 1);
  local_30 = &PTR_LAB_042a8f98;
  local_18 = 0;
  iVar1 = FUN_02f4e74c(param_1,&local_30);
  return iVar1 == 1;
}


