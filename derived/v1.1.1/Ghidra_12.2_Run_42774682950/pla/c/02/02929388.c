/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02929388; name: FUN_02929388
 */


void FUN_02929388(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
  plVar1 = *(long **)(param_1 + 0xd0);
  plVar2 = *(long **)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar3 = *plVar1;
    if (*(int *)(lVar3 + 0x88) != 0) {
      FUN_0292d3a4(0,lVar3 + 0x38,4);
      *(undefined8 *)(lVar3 + 0x8c) = 0;
    }
    *(undefined1 *)(lVar3 + 0x25) = 0;
    FUN_0292cc6c(lVar3);
    *(undefined4 *)(lVar3 + 0x20) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  return;
}


