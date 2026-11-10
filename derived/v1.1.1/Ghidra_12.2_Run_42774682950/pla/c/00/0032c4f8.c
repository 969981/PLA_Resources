/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032c4f8; name: FUN_0032c4f8
 */


void FUN_0032c4f8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  for (lVar2 = *param_1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
    plVar1 = *(long **)(lVar2 + 0x18);
    if (plVar1 != (long *)0x0) {
      lVar5 = (*(long *)(lVar2 + 0x38) - (long)plVar1) + -0x10 >> 4;
      while( true ) {
        if (lVar5 != 0) {
          plVar6 = plVar1 + lVar5 * 2 + 1;
          do {
                    /* try { // try from 0032c59c to 0032c59f has its CatchHandler @ 0032c5c4 */
            (*(code *)*plVar6)(plVar6[-1]);
            lVar5 = lVar5 + -1;
            plVar6 = plVar6 + -2;
          } while (lVar5 != 0);
        }
        plVar1 = (long *)plVar1[1];
        if (plVar1 == (long *)0x0) break;
        lVar5 = *plVar1;
      }
    }
  }
  lVar2 = *param_1;
  while (lVar2 != 0) {
    plVar1 = *(long **)(lVar2 + 0x10);
    lVar2 = *(long *)(lVar2 + 0x20);
    if (plVar1 != (long *)0x0) {
      plVar3 = (long *)param_1[3];
      pcVar4 = (code *)param_1[10];
      plVar6 = (long *)*plVar1;
      while( true ) {
        if (plVar1 != plVar3) {
                    /* try { // try from 0032c564 to 0032c567 has its CatchHandler @ 0032c5c0 */
          (*pcVar4)(plVar1,plVar1[2]);
        }
        if (plVar6 == (long *)0x0) break;
        plVar1 = plVar6;
        plVar6 = (long *)*plVar6;
      }
    }
  }
  return;
}


