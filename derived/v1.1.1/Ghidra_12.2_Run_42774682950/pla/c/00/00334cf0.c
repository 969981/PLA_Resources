/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00334cf0; name: FUN_00334cf0
 */


void FUN_00334cf0(long param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    if ((ulong)*(ushort *)(param_1 + 10) != 0) {
      lVar6 = (ulong)*(ushort *)(param_1 + 10) << 5;
      lVar4 = *(long *)(param_1 + 0x10) + 8;
      do {
        FUN_0032e380(lVar4);
        lVar6 = lVar6 + -0x20;
        lVar4 = lVar4 + 0x20;
      } while (lVar6 != 0);
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0x10);
    plVar2 = (long *)*plVar5;
    while (plVar2 != plVar5 + 1) {
      FUN_0032e380(plVar2 + 5);
      plVar3 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 2;
        bVar1 = (long *)*(long *)*plVar3 != plVar2;
        plVar2 = (long *)*plVar3;
        if (bVar1) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar2 = (long *)*plVar3;
          } while (*(long *)*plVar3 != lVar4);
        }
      }
      else {
        do {
          plVar2 = plVar3;
          plVar3 = (long *)*plVar2;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  return;
}


