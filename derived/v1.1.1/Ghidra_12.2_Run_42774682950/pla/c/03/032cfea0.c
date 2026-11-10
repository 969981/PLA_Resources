/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cfea0; name: FUN_032cfea0
 */


int FUN_032cfea0(void)

{
  int iVar1;
  
  thunk_FUN_0333d3e4();
  if (DAT_04445700 == (long *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*DAT_04445700 + 0x18))(DAT_04445700,3);
    (**(code **)*DAT_04445700)();
    DAT_04445700 = (long *)0x0;
    FUN_032d4998(0);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  if (DAT_04445708 != (code *)0x0) {
    iVar1 = (*DAT_04445708)();
    DAT_04445708 = (code *)0x0;
  }
  return iVar1;
}


