/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085cfa0; name: FUN_0085cfa0
 */


void FUN_0085cfa0(int *param_1,long param_2,long param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  ulong uVar2;
  long lVar3;
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (((*(long **)(param_2 + 0x13a8) == (long *)0x0) ||
      (uVar2 = (**(code **)(**(long **)(param_2 + 0x13a8) + 0x68))(), (uVar2 & 1) == 0)) ||
     (*(char *)(*(long *)PTR_DAT_04377550 + 0x472) == '\0')) {
    (**(code **)(**(long **)(param_2 + 0x1318) + 0x50))
              (param_1,*(long **)(param_2 + 0x1318),param_3 + 0x30,*(undefined4 *)(param_3 + 0x5f8),
               param_4);
    if (*param_1 != 0) {
      return;
    }
LAB_0085d06c:
    local_48[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
    FUN_007ee578(param_1,local_48);
  }
  else {
    pMVar1 = (MutexType *)(param_2 + 0x1378);
    nn::os::LockMutex(pMVar1);
    lVar3 = FUN_0085e934(*(undefined8 *)(param_2 + 0x1308),param_4);
    if (lVar3 == 0) {
      local_48[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
    }
    else {
      (**(code **)(**(long **)(param_2 + 0x13a8) + 0x78))
                (local_48,*(long **)(param_2 + 0x13a8),*(undefined8 *)(lVar3 + 8),param_3 + 0x30,
                 *(undefined4 *)(param_3 + 0x5f8));
      if (local_48[0] == 0) {
        nn::os::UnlockMutex(pMVar1);
        goto LAB_0085d06c;
      }
    }
    FUN_007ee578(param_1,local_48);
    nn::os::UnlockMutex(pMVar1);
  }
  return;
}


