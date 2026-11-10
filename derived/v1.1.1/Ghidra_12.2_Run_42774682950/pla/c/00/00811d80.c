/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00811d80; name: FUN_00811d80
 */


void FUN_00811d80(void)

{
  undefined1 auStack_30 [16];
  
  if (DAT_043a4219 == '\x01') {
    FUN_007e32c8(5);
    DAT_043a4219 = '\0';
    FUN_007ee4d4(auStack_30,5);
  }
  return;
}


