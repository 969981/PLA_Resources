/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ffe98; name: FUN_007ffe98
 */


undefined8 FUN_007ffe98(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int local_30 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    uVar1 = FUN_007f63fc(uVar2);
    if (((uVar1 & 1) == 0) && (uVar1 = FUN_007f6c84(uVar2), (uVar1 & 1) == 0)) {
      local_30[0] = 0xc406;
    }
    else {
      FUN_007ee578(local_30,*(long *)(param_1 + 0xa8) + 0x1a8);
      if (local_30[0] != 0) {
        FUN_007ee578(local_30,*(long *)(param_1 + 0xa8) + 0x1a8);
        goto LAB_007ffee4;
      }
      uVar1 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x158))();
      if ((uVar1 & 1) != 0) {
        return 5;
      }
      local_30[0] = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) == 1) {
      FUN_007e5da4();
    }
    local_30[0] = 0x6c05;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
LAB_007ffee4:
  FUN_007ee660(param_1 + 0x94,local_30);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_043776c8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetNetworkStateJob::WaitBackgroundJobEnd";
  return 0;
}


