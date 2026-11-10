/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edd89c; name: FUN_02edd89c
 */


void FUN_02edd89c(long *param_1,uint param_2,undefined4 *param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar3 * uVar2) * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x68)) {
      if (*(uint *)(lVar4 + 0x4c) == param_2) {
        pcVar5 = *(code **)(lVar4 + 0x50);
        if ((pcVar5 != (code *)0x0) && ((*(byte *)(lVar4 + 0x62) & 1) != 0)) {
          local_60 = *(undefined8 *)(lVar4 + 0x58);
          local_58 = *(undefined8 *)(lVar4 + 0x30);
          uStack_4c = *(undefined4 *)(lVar4 + 0x28);
          local_48 = *param_3;
          local_50 = param_2;
          nn::os::ClearEvent((EventType *)(param_1 + 7));
          nn::os::UnlockMutex(pMVar1);
          (*pcVar5)(0x10000,&local_60);
          nn::os::SignalEvent((EventType *)(param_1 + 7));
          return;
        }
        break;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


