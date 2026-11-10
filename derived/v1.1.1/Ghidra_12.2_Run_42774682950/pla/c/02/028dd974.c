/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028dd974; name: FUN_028dd974
 */


undefined8 FUN_028dd974(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0x120);
  plVar4 = *(long **)(param_1 + 0x118);
  do {
    plVar2 = plVar4;
    if (plVar3 == plVar2) {
      return 0;
    }
    plVar4 = plVar2 + 0x10;
  } while ((*plVar2 != 0) != (*param_2 != 0));
  if (plVar3 == plVar4) {
  }
  else {
    do {
      plVar2 = plVar4;
      pcVar1 = (code *)plVar2[-0xf];
      if (pcVar1 != (code *)0x0) {
        plVar2[-0xe] = 0;
        plVar2[-0xd] = 0;
        plVar2[-0x10] = 0;
        plVar2[-0xf] = 0;
        (*pcVar1)(plVar2 + -0xc);
      }
      if ((code *)plVar2[3] != (code *)0x0) {
        (*(code *)plVar2[3])(plVar2 + 4,plVar2 + -0xc);
        pcVar1 = (code *)plVar2[1];
        plVar2[-0x10] = *plVar2;
        plVar2[-0xf] = (long)pcVar1;
        plVar2[-0xe] = plVar2[2];
        plVar2[-0xd] = plVar2[3];
        if (pcVar1 != (code *)0x0) {
          plVar2[2] = 0;
          plVar2[3] = 0;
          *plVar2 = 0;
          plVar2[1] = 0;
          (*pcVar1)(plVar2 + 4);
        }
      }
      plVar4 = plVar2 + 0x10;
    } while (plVar3 != plVar4);
    plVar3 = *(long **)(param_1 + 0x120);
    if (plVar3 + 0x10 == plVar4) goto LAB_028dda74;
  }
  do {
    pcVar1 = (code *)plVar3[-0xf];
    plVar4 = plVar3 + -0x10;
    if (pcVar1 != (code *)0x0) {
      plVar3[-0xe] = 0;
      plVar3[-0xd] = 0;
      plVar3[-0x10] = 0;
      plVar3[-0xf] = 0;
      (*pcVar1)(plVar3 + -0xc);
    }
    plVar3 = plVar4;
  } while (plVar2 != plVar4);
LAB_028dda74:
  *(long **)(param_1 + 0x120) = plVar2;
  return 1;
}


