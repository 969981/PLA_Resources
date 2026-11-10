/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039eab8; name: FUN_0039eab8
 */


long FUN_0039eab8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    lVar7 = (ulong)*(ushort *)(param_1 + 10) << 5;
    if ((ulong)*(ushort *)(param_1 + 10) != 0) {
      lVar3 = *(long *)(param_1 + 0x10) + 8;
      lVar8 = lVar7;
      do {
        lVar2 = FUN_0039eb8c(lVar3);
        lVar7 = lVar7 + lVar2;
        lVar8 = lVar8 + -0x20;
        lVar3 = lVar3 + 0x20;
      } while (lVar8 != 0);
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x10);
    lVar7 = plVar4[2] << 5;
    plVar5 = (long *)*plVar4;
    while (plVar5 != plVar4 + 1) {
      lVar3 = FUN_0039eb8c(plVar5 + 5);
      lVar7 = lVar7 + lVar3;
      plVar6 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar6 = plVar5 + 2;
        bVar1 = (long *)*(long *)*plVar6 != plVar5;
        plVar5 = (long *)*plVar6;
        if (bVar1) {
          do {
            lVar3 = *plVar6;
            plVar6 = (long *)(lVar3 + 0x10);
            plVar5 = (long *)*plVar6;
          } while (*(long *)*plVar6 != lVar3);
        }
      }
      else {
        do {
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return lVar7;
}


