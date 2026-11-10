/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ce508; name: FUN_010ce508
 */


long FUN_010ce508(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x80));
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == *(long *)(param_1 + 0x10)) {
    lVar11 = 0;
  }
  else {
    uVar10 = (*(long *)(param_1 + 0x10) - lVar6) - 0x30;
    uVar4 = uVar10 / 0x30 + 1;
    uVar8 = uVar4 & 3;
    if (uVar10 < 0x90) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      lVar9 = uVar4 - uVar8;
      do {
        plVar7 = (long *)(lVar6 + 0x20);
        plVar1 = (long *)(lVar6 + 0x50);
        plVar2 = (long *)(lVar6 + 0x80);
        plVar3 = (long *)(lVar6 + 0xb0);
        lVar6 = lVar6 + 0xc0;
        lVar11 = lVar11 + *plVar7 + *plVar1 + *plVar2 + *plVar3 + 0x10;
        lVar9 = lVar9 + -4;
      } while (lVar9 != 0);
    }
    if (uVar8 != 0) {
      lVar9 = -uVar8;
      plVar7 = (long *)(lVar6 + 0x20);
      do {
        lVar11 = lVar11 + *plVar7 + 4;
        bVar5 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        plVar7 = plVar7 + 6;
      } while (bVar5);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  return lVar11;
}


