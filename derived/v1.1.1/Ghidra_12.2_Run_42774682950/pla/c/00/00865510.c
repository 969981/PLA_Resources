/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00865510; name: FUN_00865510
 */


void FUN_00865510(void)

{
  undefined1 auStack_30 [16];
  
  if (DAT_043a5850 == '\x01') {
    if (DAT_043a5851 == '\x01') {
      FUN_00865570(auStack_30);
    }
    FUN_007e32c8(9);
    DAT_043a5850 = '\0';
    FUN_007ee4d4(auStack_30,9);
  }
  return;
}


