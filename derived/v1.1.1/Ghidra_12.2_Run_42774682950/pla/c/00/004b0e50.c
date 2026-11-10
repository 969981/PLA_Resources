/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004b0e50; name: FUN_004b0e50
 */


void FUN_004b0e50(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *param_1;
  local_14 = param_1[1];
  FUN_0047a3f0(&local_18,param_3,param_4);
  *param_2 = local_18;
  param_2[1] = local_14;
  return;
}


