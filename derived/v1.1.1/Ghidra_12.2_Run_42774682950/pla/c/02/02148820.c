/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02148820; name: FUN_02148820
 */


void FUN_02148820(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_021399f8(param_1,3,&local_28);
  *(undefined8 *)(param_3 + *param_2) = *puVar1;
  FUN_0014ff10(param_1,0);
  return;
}


