/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5f78; name: FUN_007e5f78
 */


void FUN_007e5f78(long *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04377458;
  uVar5 = 6;
  if ((param_2 & 1) == 0) {
    uVar5 = 3;
  }
  *(undefined4 *)(param_1 + 1) = uVar5;
  lVar6 = *(long *)puVar2;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x68));
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  nn::os::LockMutex((MutexType *)(lVar6 + 0x68));
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  uVar5 = 8;
  switch(uVar3 & 0xff) {
  case 0:
  case 6:
  case 7:
    FUN_007ecf14(param_1 + 2);
    uVar1 = (uint)uVar3 & 0xff;
    if (uVar1 == 7) {
      FUN_007e89c8(*(undefined8 *)puVar2,param_1,1);
LAB_007e60c8:
      uVar5 = 5;
    }
    else {
      if (uVar1 == 6) {
        FUN_007e89c8(*(undefined8 *)puVar2,param_1,0);
      }
      else {
        FUN_007e89c8(*(undefined8 *)puVar2,param_1,param_2 & 1);
        if ((param_2 & 1) != 0) goto LAB_007e60c8;
      }
      uVar5 = 2;
    }
    break;
  case 1:
  case 2:
    break;
  case 3:
    uVar5 = 7;
    break;
  case 4:
    FUN_007ecf14(param_1 + 2);
    plVar4 = (long *)FUN_007ecfa4();
    param_1[2] = param_1[2] + *plVar4 * (uVar3 >> 0x10 & 0xffff);
    FUN_007e89c8(*(undefined8 *)puVar2,param_1,param_2 & 1);
    goto LAB_007e60a4;
  case 5:
    FUN_007ecf14(param_1 + 2);
    FUN_007e8a30(*(undefined8 *)puVar2,param_1);
LAB_007e60a4:
    uVar5 = 4;
    if ((param_2 & 1) == 0) {
      uVar5 = 1;
    }
    break;
  default:
    goto switchD_007e600c_default;
  }
  *(undefined4 *)(param_1 + 1) = uVar5;
switchD_007e600c_default:
  return;
}


