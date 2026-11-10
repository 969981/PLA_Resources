/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008648f8; name: FUN_008648f8
 */


void FUN_008648f8(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  MutexType *pMVar2;
  ulong uVar3;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0x10) != '\0') {
    if (*(char *)(param_2 + 0xa8) != '\0') {
      pMVar2 = (MutexType *)(*(long *)(param_2 + 0x58) + 0x1378);
      nn::os::LockMutex(pMVar2);
      FUN_0085e9c0(*(undefined8 *)(param_2 + 0xa0),
                   *(undefined8 *)(*(long *)(param_2 + 0x58) + 0x1308));
      *(undefined1 *)(param_2 + 0xa8) = 0;
      nn::os::UnlockMutex(pMVar2);
    }
    uVar3 = FUN_007fab94(*(undefined8 *)(param_2 + 0x58));
    if (((uVar3 & 1) != 0) || (*(int *)(*(long *)(param_2 + 0x58) + 0x1c0) != 0)) {
      uVar1 = (*(uint *)(param_3 + 0x5fc) >> 1 & 0x55555555) +
              (*(uint *)(param_3 + 0x5fc) & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = (uVar1 >> 4 & 0x7070707) + (uVar1 & 0x7070707);
      uVar1 = (uVar1 >> 8 & 0xf000f) + (uVar1 & 0xf000f);
      if ((uVar1 & 0x1f) + (uVar1 >> 0x10) < 2) {
        FUN_008644d8(param_1,param_2,param_3);
        return;
      }
      FUN_00863f9c(param_1,param_2,param_3);
      return;
    }
  }
  local_40[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


