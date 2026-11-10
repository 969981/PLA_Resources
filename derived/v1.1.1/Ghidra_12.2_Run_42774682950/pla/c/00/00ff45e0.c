/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ff45e0; name: FUN_00ff45e0
 */


void FUN_00ff45e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [72];
  undefined8 local_28;
  
  local_28 = 0;
  FUN_00ff435c(param_1,1,&local_28);
  (*(code *)*param_2)(auStack_70);
  FUN_0014ff10(param_1,0);
  uVar1 = FUN_00ff46ac();
  FUN_00ff4644(param_1,uVar1,auStack_70);
  return;
}


