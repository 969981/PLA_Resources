/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f3d04; name: FUN_001f3d04
 */


undefined4
FUN_001f3d04(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined4 local_14;
  
  uVar1 = FUN_001f3c48(param_1,*(int *)(param_1 + 0x25c) == param_2,param_3,param_4,&local_14);
  *param_5 = uVar1;
  return local_14;
}


