/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00800944; name: FUN_00800944
 */


void FUN_00800944(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_58;
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (param_4 == 0) {
    local_48[0] = 0x10408;
  }
  else {
    uVar2 = FUN_007f1f64(param_4);
    uVar3 = (**(code **)(**(long **)(param_2 + 0x78) + 0xf0))();
    if ((uVar2 <= uVar3) &&
       (*(ushort *)(param_4 + 0x10) <= *(ushort *)(*(long *)(param_2 + 0x78) + 0x114e))) {
      FUN_008004c8(local_48,param_2,param_3,3);
      if (local_48[0] == 0) {
        iVar4 = memcmp((void *)(param_4 + 0x25),&DAT_03a72a15,0x10);
        if (iVar4 != 0) {
          FUN_007fc454(&local_58,*(undefined8 *)(param_2 + 0x78),(void *)(param_4 + 0x25),0x10);
        }
        iVar4 = (**(code **)(**(long **)(param_2 + 0x78) + 0x1b8))();
        plVar5 = (long *)FUN_007ecfa4();
        lVar7 = *plVar5;
        local_58 = 0;
        FUN_007ecf14(&local_58);
        *(ulong *)(param_2 + 0x70) = local_58 + lVar7 * iVar4;
        local_58 = 0;
        FUN_007ecf14(&local_58);
        *(undefined4 *)(param_2 + 200) = 0;
        *(ulong *)(param_2 + 0xc0) = local_58;
        pMVar1 = (MutexType *)(*(long *)(param_2 + 0x78) + 0x1f8);
        *(undefined8 *)(param_2 + 0x30) = 0xa8;
        *(undefined8 *)(param_2 + 0x38) = 1;
        *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartCreateNetwork";
        nn::os::LockMutex(pMVar1);
        (**(code **)(**(long **)(*(long *)(param_2 + 0x78) + 0x218) + 0x48))();
        local_58 = local_58 & 0xffffffff00000000;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
        FUN_007ee578(param_1,&local_58);
        nn::os::UnlockMutex(pMVar1);
        return;
      }
      local_38[0] = 0;
      local_58 = CONCAT44(local_58._4_4_,0x10408);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
      piVar6 = (int *)&local_58;
      goto LAB_008009d4;
    }
    local_48[0] = 0x10407;
  }
  local_58 = (ulong)local_58._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)&local_58);
  piVar6 = local_48;
LAB_008009d4:
  FUN_007ee578(param_1,piVar6);
  return;
}


