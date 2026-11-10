/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d3e4; name: FUN_0333d3e4
 */


void FUN_0333d3e4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  nn::os::FreeTlsSlot(DAT_04350fb8);
  FUN_0333d77c(DAT_04350fd0);
  lVar1 = *DAT_04350fd8;
  while (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x120);
    (*(code *)PTR_FUN_04350fe0)(lVar1,1);
    FUN_0333d658(lVar1);
    plVar2 = (long *)FUN_032d49a4();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,0x1d8);
    lVar1 = lVar3;
  }
  DAT_04350fc0 = 0;
  nn::os::UnlockMutex(DAT_04350fd0);
  plVar2 = (long *)FUN_032d49a4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  FUN_0333d74c(DAT_04350fd0);
  (**(code **)(*plVar2 + 0x18))(plVar2,DAT_04350fd0,0x78);
  DAT_04350fd0 = (MutexType *)0x0;
  (**(code **)(*plVar2 + 0x18))(plVar2,DAT_04350fd8,0x10);
  DAT_04350fd8 = (long *)0x0;
  return;
}


