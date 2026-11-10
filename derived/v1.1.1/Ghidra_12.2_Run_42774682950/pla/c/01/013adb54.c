/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013adb54; name: FUN_013adb54
 */


undefined8 FUN_013adb54(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xac) == 5) {
    uVar1 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),1);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0xac) != 4) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    uVar1 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),*(int *)(param_1 + 0xbc) + 0x11);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xac) = 5;
    }
  }
  return 0;
}


