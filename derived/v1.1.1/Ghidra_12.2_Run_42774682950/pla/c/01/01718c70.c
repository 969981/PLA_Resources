/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01718c70; name: FUN_01718c70
 */


void FUN_01718c70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_28;
  
  local_28 = 0;
  FUN_0171541c(param_1,1,&local_28);
  local_28 = (*(code *)*param_2)();
  FUN_0014ff10(param_1,0);
  FUN_01718ccc(param_1,&local_28);
  return;
}


