/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00800b24; name: FUN_00800b24
 */


void FUN_00800b24(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 local_50;
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar5 = (int *)&local_50;
  if (param_4 == 0) {
    local_40[0] = 0x10408;
  }
  else {
    lVar3 = FUN_007f2a68(param_4);
    if (lVar3 != 0) {
      FUN_008004c8(local_40,param_2,param_3,3);
      if (local_40[0] == 0) {
        iVar2 = memcmp((void *)(param_4 + 0x10),&DAT_03a72a15,0x10);
        if (iVar2 != 0) {
          FUN_007fc454(&local_50,*(undefined8 *)(param_2 + 0x78),(void *)(param_4 + 0x10),0x10);
        }
        iVar2 = (**(code **)(**(long **)(param_2 + 0x78) + 0x1c0))();
        plVar4 = (long *)FUN_007ecfa4();
        lVar3 = *plVar4;
        local_50 = 0;
        FUN_007ecf14(&local_50);
        *(ulong *)(param_2 + 0x70) = local_50 + lVar3 * iVar2;
        local_50 = 0;
        FUN_007ecf14(&local_50);
        *(ulong *)(param_2 + 0xc0) = local_50;
        pMVar1 = (MutexType *)(*(long *)(param_2 + 0x78) + 0x1f8);
        *(undefined4 *)(param_2 + 200) = 1;
        *(undefined8 *)(param_2 + 0x30) = 0xb8;
        *(undefined8 *)(param_2 + 0x38) = 1;
        *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartConnectNetwork";
        nn::os::LockMutex(pMVar1);
        (**(code **)(**(long **)(*(long *)(param_2 + 0x78) + 0x218) + 0x48))();
        local_50 = local_50 & 0xffffffff00000000;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_28);
        FUN_007ee578(param_1,&local_50);
        nn::os::UnlockMutex(pMVar1);
        return;
      }
      local_50 = CONCAT44(local_50._4_4_,0x10408);
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_28);
      goto LAB_00800bcc;
    }
    local_40[0] = 0x10407;
  }
  local_50 = (ulong)local_50._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)&local_50);
  piVar5 = local_40;
LAB_00800bcc:
  FUN_007ee578(param_1,piVar5);
  return;
}


