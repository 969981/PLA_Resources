/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080118c; name: FUN_0080118c
 */


ulong FUN_0080118c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 auStack_50 [16];
  undefined4 local_40 [4];
  int local_30 [4];
  
  local_30[0] = 0;
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
  if (*(int *)(param_1 + 0x68) == 1) {
    pcVar2 = *(code **)(**(long **)(param_1 + 0x78) + 0xa0);
  }
  else {
    pcVar2 = *(code **)(**(long **)(param_1 + 0x78) + 0xa8);
  }
  (*pcVar2)(local_40);
  FUN_007ee660(local_30,local_40);
  if (local_30[0] == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0x130;
    *(undefined8 *)(param_1 + 0x38) = 1;
    *(char **)(param_1 + 0x40) = "NetBackgroundProcessJob::WaitChangeNetworkState";
    uVar1 = 0xf0000;
    uVar3 = 4;
  }
  else {
    FUN_007ee578(auStack_50,local_30);
    FUN_007ee660(param_1 + 0x80,auStack_50);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined **)(param_1 + 0x30) = PTR_FUN_043776f0;
    uVar3 = 0;
    uVar1 = 0;
    *(char **)(param_1 + 0x40) = "NetBackgroundProcessJob::CompleteFailureProcess";
  }
  return uVar1 | uVar3;
}


