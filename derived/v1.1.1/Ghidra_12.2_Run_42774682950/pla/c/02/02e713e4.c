/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e713e4; name: FUN_02e713e4
 */


/* WARNING: Removing unreachable block (ram,0x02e71448) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e713e4(long param_1,undefined4 param_2)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x50);
  pMVar1 = (MutexType *)(lVar3 + 0x1e8);
  nn::os::LockMutex(pMVar1);
  lVar2 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_02e714d4(lVar3,lVar2,param_2);
  nn::os::UnlockMutex(pMVar1);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x18);
    (**(code **)(**(long **)(lVar2 + 0x20) + 0x30))(*(long **)(lVar2 + 0x20),lVar2,param_2,1);
    lVar2 = lVar3;
    while (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x18);
      lVar5 = lVar4;
      if (lVar2 != lVar3) {
        lVar5 = lVar2;
        _DAT_00000018 = lVar4;
      }
      (**(code **)(**(long **)(lVar3 + 0x20) + 0x30))(*(long **)(lVar3 + 0x20),lVar3,param_2,0);
      lVar3 = lVar4;
      lVar2 = lVar5;
    }
  }
  return;
}


