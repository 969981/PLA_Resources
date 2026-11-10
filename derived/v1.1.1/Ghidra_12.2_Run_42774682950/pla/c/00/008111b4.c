/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008111b4; name: FUN_008111b4
 */


void FUN_008111b4(undefined8 param_1,long param_2,long param_3,uint param_4,long param_5)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_70 [4];
  undefined4 local_60 [8];
  uint local_38 [2];
  
  if (param_4 < 0xc) {
    local_60[0] = 0x10407;
  }
  else {
    if (*(long *)(param_2 + 0x58) == 0) {
      uVar3 = 0;
    }
    else {
      local_38[0] = 0;
      FUN_007f0fc8(local_60,param_5 + 0x628);
      FUN_007e3524(local_70,local_60,local_38);
      FUN_007e34a4(local_60);
      uVar2 = local_38[0];
      lVar4 = *(long *)(param_2 + 0x58);
      pMVar1 = (MutexType *)(lVar4 + 0x1f8);
      nn::os::LockMutex(pMVar1);
      if (*(long *)(lVar4 + 0x218) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_007f2084();
      }
      nn::os::UnlockMutex(pMVar1);
      uVar3 = uVar3 ^ uVar2;
    }
    FUN_007ed380(param_3,uVar3);
    memcpy((void *)(param_3 + 4),(void *)(param_5 + 0x15),8);
    local_60[0] = 0;
  }
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  FUN_007ee578(param_1,local_60);
  return;
}


