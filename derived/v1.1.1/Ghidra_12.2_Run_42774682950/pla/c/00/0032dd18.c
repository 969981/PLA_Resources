/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032dd18; name: FUN_0032dd18
 */


void FUN_0032dd18(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (*param_1 == 0) {
    if (*(ushort *)(param_1 + 1) < 0x101) {
      if ((ulong)*(ushort *)((long)param_1 + 10) != 0) {
        lVar6 = (ulong)*(ushort *)((long)param_1 + 10) << 5;
        lVar4 = param_1[2] + 8;
        do {
                    /* try { // try from 0032dd58 to 0032dd5f has its CatchHandler @ 0032de40 */
          FUN_0033a968(lVar4);
          lVar6 = lVar6 + -0x20;
          lVar4 = lVar4 + 0x20;
        } while (lVar6 != 0);
      }
    }
    else {
      plVar5 = (long *)param_1[2];
      plVar2 = (long *)*plVar5;
      while (plVar2 != plVar5 + 1) {
                    /* try { // try from 0032ddc4 to 0032ddc7 has its CatchHandler @ 0032de3c */
        FUN_0033a968(plVar2 + 5);
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
    if (*(ushort *)(param_1 + 1) < 0x101) {
      lVar4 = param_1[2];
      if (lVar4 != 0) {
        FUN_002e2f10(lVar4);
        FUN_002e2ef0(PTR_LAB_04373088,lVar4);
        return;
      }
    }
    else {
      lVar4 = param_1[2];
      if (lVar4 != 0) {
        FUN_0033af80(lVar4,*(undefined8 *)(lVar4 + 8));
        FUN_002e2ea0(PTR_LAB_04373088,lVar4);
        return;
      }
    }
  }
  return;
}


