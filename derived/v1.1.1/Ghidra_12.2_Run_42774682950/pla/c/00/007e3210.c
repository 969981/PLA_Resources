/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e3210; name: FUN_007e3210
 */


void FUN_007e3210(void)

{
  if (*PTR_DAT_043773e0 == '\0') {
    return;
  }
  *PTR_DAT_043773e0 = 0;
  FUN_00825528(*(undefined8 *)PTR_DAT_043773f8);
  FUN_00824fa8();
  FUN_0081e9d4();
  return;
}


