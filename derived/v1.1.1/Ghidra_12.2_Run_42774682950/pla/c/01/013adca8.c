/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013adca8; name: FUN_013adca8
 */


undefined8 FUN_013adca8(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xac) == 10) {
    uVar1 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),1);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
      return 0x400000001;
    }
  }
  else {
    if (*(int *)(param_1 + 0xac) != 9) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(char *)(param_1 + 0xb8) != '\0') {
      return 0x400000001;
    }
    uVar1 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0x1a);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xac) = 10;
    }
  }
  return 0x400000000;
}


