/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcfa18; name: FUN_02bcfa18
 */


void FUN_02bcfa18(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (DAT_043f1790 == (undefined **)0x0) {
    DAT_043f1790 = &PTR_PTR_042868c8;
  }
  ppuVar1 = DAT_043f1790;
  plVar2 = *(long **)(param_1 + 0x88);
  do {
    if (plVar2 == (long *)(param_1 + 0x80)) {
      return;
    }
    while( true ) {
      (**(code **)(*ppuVar1 + 0x10))(ppuVar1,(int)plVar2[6]);
      plVar3 = (long *)plVar2[2];
      if ((long *)plVar2[2] != (long *)0x0) break;
      do {
        plVar3 = plVar2;
        plVar4 = (long *)*plVar3;
        plVar2 = plVar4;
      } while (plVar3 == (long *)plVar4[2]);
      plVar2 = plVar3;
      if ((long *)plVar3[2] != plVar4) {
        plVar2 = plVar4;
      }
      if (plVar2 == (long *)(param_1 + 0x80)) {
        return;
      }
    }
    do {
      plVar2 = plVar3;
      plVar3 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
  } while( true );
}


