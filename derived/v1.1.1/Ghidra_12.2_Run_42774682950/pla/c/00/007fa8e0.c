/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fa8e0; name: FUN_007fa8e0
 */


ulong FUN_007fa8e0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  uint local_60 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_007f1184(param_2);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_007f10e8(param_2);
    return uVar1;
  }
  FUN_007f0fc8(auStack_40,param_2);
  uVar1 = FUN_007e44ac(auStack_40);
  FUN_007e34a4(auStack_40);
  if ((uVar1 & 1) == 0) {
    local_50 = 0;
    uStack_48 = 0;
    FUN_007f0fc8(auStack_40,param_2);
    FUN_007e3670(local_60,auStack_40,&local_50);
    FUN_007e34a4(auStack_40);
    uVar1 = FUN_007ed370(&uStack_48);
    return uVar1;
  }
  local_60[0] = 0;
  FUN_007f0fc8(auStack_40,param_2);
  FUN_007e3524(&local_50,auStack_40,local_60);
  FUN_007e34a4(auStack_40);
  return (ulong)local_60[0];
}


