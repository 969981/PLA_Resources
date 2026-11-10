/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00805bb8; name: FUN_00805bb8
 */


void FUN_00805bb8(long *param_1)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = FUN_007e5f0c();
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00805be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}


