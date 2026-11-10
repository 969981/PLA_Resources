/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ff2d4; name: FUN_007ff2d4
 */


void FUN_007ff2d4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[0x11];
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x48) = 1;
    FUN_007ec500(lVar1,2);
    FUN_007ff56c(param_1[0x11]);
  }
  uVar2 = FUN_007e5f0c(param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007ff31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}


