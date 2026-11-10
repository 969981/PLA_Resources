/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085a220; name: FUN_0085a220
 */


void FUN_0085a220(void)

{
  undefined1 auStack_20 [16];
  
  if (DAT_043a5829 == '\x01') {
    if (DAT_043a582a == '\x01') {
      FUN_0085a280(auStack_20);
    }
    FUN_007e32c8(8);
    DAT_043a5829 = '\0';
    FUN_007ee4d4(auStack_20,8);
  }
  return;
}


