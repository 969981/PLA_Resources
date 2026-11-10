/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7bf0c; name: FUN_02e7bf0c
 */


void FUN_02e7bf0c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined1 local_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plVar2 = *(long **)(lVar1 + 0x40);
  if (plVar2 != (long *)0x0) {
    do {
      local_38 = 0;
      local_40 = 0x400000000;
      FUN_02ecc560(plVar2[2],&local_40,0);
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  for (plVar2 = *(long **)(lVar1 + 0x68); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    FUN_02e85730(DAT_0440a128,plVar2[2]);
  }
  return;
}


