/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ffa0c; name: FUN_007ffa0c
 */


undefined8 FUN_007ffa0c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar1 = 5;
    switch(*(int *)(param_1 + 0x60)) {
    case 1:
      goto switchD_007ffaa8_caseD_1;
    case 2:
      FUN_007f59ac(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x90));
      local_28[0] = 0;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
      FUN_007ee660(param_1 + 0x94,local_28);
      uVar2 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x1e8))();
      if ((uVar2 & 1) != 0) {
        FUN_007f79fc(*(undefined8 *)(param_1 + 0xa8));
        *(undefined **)(param_1 + 0x30) = PTR_FUN_043776d0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NetNetworkStateJob::WaitSendUpdateNetworkProperty";
        return 0;
      }
      break;
    case 3:
      FUN_007ee578(local_28,param_1 + 100);
      goto LAB_007ffa50;
    case 4:
      goto switchD_007ffaa8_caseD_4;
    default:
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) == 1) {
      FUN_007e5da4();
    }
switchD_007ffaa8_caseD_4:
    local_28[0] = 0x6c05;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
LAB_007ffa50:
    FUN_007ee660(param_1 + 0x94,local_28);
  }
  uVar1 = 0;
  *(undefined **)(param_1 + 0x30) = PTR_FUN_043776c8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetNetworkStateJob::WaitBackgroundJobEnd";
switchD_007ffaa8_caseD_1:
  return uVar1;
}


