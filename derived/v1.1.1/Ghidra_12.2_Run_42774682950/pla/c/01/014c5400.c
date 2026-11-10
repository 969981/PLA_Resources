/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c5400; name: FUN_014c5400
 */


void FUN_014c5400(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_38 = FUN_02c5f330(param_2,0);
  local_34 = FUN_02c5f330(param_2,1);
  local_30 = FUN_02c5f330(param_2,2);
  local_2c = FUN_02c5f330(param_2,5);
  local_28 = FUN_02c5f330(param_2,4);
  local_24 = FUN_02c5f330(param_2,3);
  FUN_014bd1d8(*(undefined8 *)(param_1 + 0x5f0),&local_38);
  uVar1 = FUN_014c51cc();
  if ((uVar1 & 1) != 0) {
    local_38 = FUN_02c5e1ec(param_2,0);
    local_34 = FUN_02c5e1ec(param_2,1);
    local_30 = FUN_02c5e1ec(param_2,2);
    local_2c = FUN_02c5e1ec(param_2,5);
    local_28 = FUN_02c5e1ec(param_2,4);
    local_24 = FUN_02c5e1ec(param_2,3);
    FUN_014bd1d8(*(long *)(param_1 + 0x5f0) + 0x60,&local_38);
  }
  return;
}


