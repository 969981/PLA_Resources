/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ff4300; name: FUN_00ff4300
 */


void FUN_00ff4300(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_28;
  
  local_28 = 0;
  FUN_00ff435c(param_1,1,&local_28);
  iVar1 = (*(code *)*param_2)();
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,(long)iVar1);
  return;
}


