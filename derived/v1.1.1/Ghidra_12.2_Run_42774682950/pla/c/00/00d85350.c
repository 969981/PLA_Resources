/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d85350; name: FUN_00d85350
 */


undefined8 FUN_00d85350(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x88);
  while( true ) {
    if (plVar3 == (long *)0x0) {
      uVar2 = FUN_010a27f0();
      return uVar2;
    }
    uVar1 = FUN_010b9e20(plVar3[3]);
    if ((uVar1 & 1) == 0) break;
    plVar3 = (long *)*plVar3;
  }
  return 0;
}


