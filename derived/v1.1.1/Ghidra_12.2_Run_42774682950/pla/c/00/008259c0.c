/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008259c0; name: FUN_008259c0
 */


void FUN_008259c0(void)

{
  undefined1 auStack_30 [16];
  
  if (DAT_043a5589 == '\x01') {
    if (DAT_043a558a == '\x01') {
      FUN_00825910(auStack_30);
    }
    FUN_007e32c8(0x12);
    DAT_043a5589 = '\0';
    FUN_007ee4d4(auStack_30,0x12);
  }
  return;
}


