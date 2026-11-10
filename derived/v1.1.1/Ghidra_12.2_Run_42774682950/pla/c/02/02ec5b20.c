/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec5b20; name: FUN_02ec5b20
 */


uint FUN_02ec5b20(void)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_02e96f44(DAT_0440a120 + 0x188);
  uVar1 = 0;
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


