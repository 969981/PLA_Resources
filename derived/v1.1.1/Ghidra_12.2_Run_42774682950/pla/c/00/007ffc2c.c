/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ffc2c; name: FUN_007ffc2c
 */


undefined8 FUN_007ffc2c(long param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar3 = 5;
    switch(*(int *)(param_1 + 0x60)) {
    case 1:
      goto switchD_007ffc80_caseD_1;
    case 2:
      pMVar1 = (MutexType *)(*(long *)(param_1 + 0xa8) + 0x1f8);
      nn::os::LockMutex(pMVar1);
      uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0xa8) + 0x218) + 0x10))();
      uVar4 = 1;
      if ((uVar2 & 1) == 0) {
        uVar4 = 2;
      }
      FUN_007f59ac(*(undefined8 *)(param_1 + 0xa8),uVar4);
      nn::os::UnlockMutex(pMVar1);
      FUN_007f6af0(*(undefined8 *)(param_1 + 0xa8));
      local_30[0] = 0;
      goto LAB_007ffce0;
    case 3:
      FUN_007ee578(local_30,param_1 + 100);
      break;
    case 4:
      goto switchD_007ffc80_caseD_4;
    default:
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) == 1) {
      FUN_007e5da4();
    }
switchD_007ffc80_caseD_4:
    local_30[0] = 0x6c05;
LAB_007ffce0:
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  }
  FUN_007ee660(param_1 + 0x94,local_30);
  uVar3 = 0;
  *(undefined **)(param_1 + 0x30) = PTR_FUN_043776c8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetNetworkStateJob::WaitBackgroundJobEnd";
switchD_007ffc80_caseD_1:
  return uVar3;
}


