/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e659a4; name: FUN_02e659a4
 */


void FUN_02e659a4(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  DAT_0440a0a0 = 0;
  plVar3 = DAT_0440a0a8;
  if (DAT_0440a0b0 != 0) {
    plVar2 = (long *)*DAT_0440a0a8;
    plVar1 = DAT_0440a0a8;
    uVar4 = DAT_0440a0b0;
    while( true ) {
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x30))();
        plVar3 = DAT_0440a0a8;
        uVar4 = DAT_0440a0b0;
      }
      plVar1 = plVar1 + 1;
      if (plVar1 == plVar3 + uVar4) break;
      plVar2 = (long *)*plVar1;
    }
  }
  if (plVar3 != (long *)0x0) {
    DAT_0440a0b0 = 0;
    (*DAT_0442d150)(7);
    DAT_0440a0a8 = (long *)0x0;
    DAT_0440a0b4 = 0;
  }
  if (DAT_0440a0b8 != 0) {
    DAT_0440a0c0 = 0;
    (*DAT_0442d150)(7);
    DAT_0440a0b8 = 0;
    DAT_0440a0c4 = 0;
  }
  return;
}


