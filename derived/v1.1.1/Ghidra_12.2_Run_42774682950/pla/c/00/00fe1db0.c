/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fe1db0; name: FUN_00fe1db0
 */


void FUN_00fe1db0(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 local_28;
  
  local_28 = 0;
  FUN_00fe1e0c(param_1,1,&local_28);
  fVar1 = (float)(*(code *)*param_2)();
  FUN_0014ff10(param_1,0);
  FUN_001514b0((double)fVar1,param_1);
  return;
}


