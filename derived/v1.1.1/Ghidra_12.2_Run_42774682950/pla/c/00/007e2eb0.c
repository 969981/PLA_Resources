/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e2eb0; name: FUN_007e2eb0
 */


void FUN_007e2eb0(void)

{
  undefined1 auStack_20 [16];
  
  if (DAT_043a3510 == '\x01') {
    if (DAT_043a3512 == '\x01') {
      FUN_007e2f50(auStack_20);
    }
    FUN_0081a9cc(0);
    FUN_007e85d8();
    FUN_007ed208();
    FUN_007e4dd0();
    FUN_007e80a0();
    if (*(long *)PTR_DAT_043773d8 == DAT_043a3518) {
      *(undefined8 *)PTR_DAT_043773d8 = 0;
    }
    FUN_007e848c();
    DAT_043a3518 = 0;
    FUN_007e32c8(2);
    FUN_007e3210();
    DAT_043a3510 = '\0';
    FUN_007ee4d4(auStack_20,2);
  }
  return;
}


