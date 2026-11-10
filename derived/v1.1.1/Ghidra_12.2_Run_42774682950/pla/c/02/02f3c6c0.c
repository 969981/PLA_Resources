/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3c6c0; name: FUN_02f3c6c0
 */


undefined8 FUN_02f3c6c0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_150 [256];
  undefined4 local_50;
  long local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  uint3 local_28;
  undefined1 uStack_25;
  
  local_50 = 0;
  local_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  _local_28 = 0x1000001;
  (**(code **)(*param_1 + 0xb8))(param_1,auStack_150,0);
  local_28 = (uint3)(ushort)local_28;
  if (local_48 == 0) {
    uVar1 = 0;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    uVar1 = FUN_02f4f004(auStack_150,param_2);
  }
  return uVar1;
}


