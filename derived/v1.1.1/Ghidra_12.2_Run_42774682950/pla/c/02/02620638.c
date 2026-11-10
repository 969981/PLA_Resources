/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02620638; name: FUN_02620638
 */


undefined8 FUN_02620638(long param_1)

{
  ulong uVar1;
  undefined1 local_30;
  undefined4 local_2c;
  long local_28;
  undefined8 local_18;
  
  local_28 = param_1;
  uVar1 = FUN_02623b4c(param_1 + 0x1f0);
  if ((uVar1 & 1) == 0) {
    FUN_02623be4(&local_18,local_30);
  }
  else {
    FUN_02623bb4(param_1 + 0x1f0);
    local_2c = FUN_02623bcc();
    local_18 = FUN_02623b80(&local_2c);
  }
  return local_18;
}


