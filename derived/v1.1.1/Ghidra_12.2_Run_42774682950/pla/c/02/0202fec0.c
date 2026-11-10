/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0202fec0; name: FUN_0202fec0
 */


void FUN_0202fec0(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  local_28 = 0;
  uVar1 = FUN_02022780(param_1,3,&local_28);
  *(undefined8 *)(param_3 + *param_2) = uVar1;
  FUN_0014ff10(param_1,0);
  return;
}


