/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129dfd0; name: FUN_0129dfd0
 */


undefined4 FUN_0129dfd0(void)

{
  uint uVar1;
  
  uVar1 = FUN_00d155b0();
  if (uVar1 < 0x11) {
    return *(undefined4 *)(&DAT_03a7a708 + (long)(int)uVar1 * 4);
  }
  return 1;
}


