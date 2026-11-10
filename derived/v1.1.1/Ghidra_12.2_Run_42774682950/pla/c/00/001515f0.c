/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001515f0; name: FUN_001515f0
 */


undefined8 FUN_001515f0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  uStack_28 = param_3[3];
  uVar1 = FUN_00162b30(param_1,param_2,&local_40);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_0015dc70(param_1);
  }
  return uVar1;
}


