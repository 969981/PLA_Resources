/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02289f50; name: FUN_02289f50
 */


void FUN_02289f50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_28;
  
  local_28 = 0;
  FUN_00eeba34(param_1,1,&local_28);
  local_28 = (*(code *)*param_2)();
  FUN_0014ff10(param_1,0);
  FUN_02289fac(param_1,&local_28);
  return;
}


