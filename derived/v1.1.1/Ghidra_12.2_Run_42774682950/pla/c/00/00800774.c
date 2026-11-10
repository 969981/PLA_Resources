/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00800774; name: FUN_00800774
 */


void FUN_00800774(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_60;
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar6 = (int *)&local_60;
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
    uVar2 = FUN_007f1f64(param_4);
    uVar3 = (**(code **)(**(long **)(param_2 + 0x78) + 0xf0))();
    if ((uVar2 <= uVar3) &&
       (*(ushort *)(param_4 + 0x10) <= *(ushort *)(*(long *)(param_2 + 0x78) + 0x114e))) {
      FUN_008004c8(local_50,param_2,param_3,3);
      if (local_50[0] == 0) {
        *(long *)(param_2 + 0x90) = param_6;
        uVar2 = FUN_0083385c(param_6);
        *(uint *)(param_2 + 0x9c) = uVar2 & 0xffff;
        iVar4 = (**(code **)(**(long **)(param_2 + 0x78) + 0x1c8))();
        plVar5 = (long *)FUN_007ecfa4();
        lVar7 = *plVar5;
        local_60 = 0;
        FUN_007ecf14(&local_60);
        *(ulong *)(param_2 + 0x70) = local_60 + lVar7 * iVar4;
        local_60 = 0;
        FUN_007ecf14(&local_60);
        *(undefined4 *)(param_2 + 200) = 3;
        *(ulong *)(param_2 + 0xc0) = local_60;
        pMVar1 = (MutexType *)(*(long *)(param_2 + 0x78) + 0x1f8);
        *(undefined8 *)(param_2 + 0x30) = 0x98;
        *(undefined8 *)(param_2 + 0x38) = 1;
        *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartAutoConnectNetwork";
        nn::os::LockMutex(pMVar1);
        (**(code **)(**(long **)(*(long *)(param_2 + 0x78) + 0x218) + 0x48))();
        local_60 = local_60 & 0xffffffff00000000;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_60 | 4),(Result *)local_38);
        FUN_007ee578(param_1,&local_60);
        nn::os::UnlockMutex(pMVar1);
        return;
      }
      local_38[0] = 0;
      local_60 = CONCAT44(local_60._4_4_,0x10408);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_60 | 4),(Result *)local_38);
      goto LAB_00800808;
    }
  }
  local_50[0] = 0x10407;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_60);
  piVar6 = local_50;
LAB_00800808:
  FUN_007ee578(param_1,piVar6);
  return;
}


