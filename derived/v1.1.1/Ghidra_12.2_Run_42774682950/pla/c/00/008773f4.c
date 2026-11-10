/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008773f4; name: FUN_008773f4
 */


void FUN_008773f4(long param_1)

{
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00877410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_043784a8)(*(undefined8 *)(param_1 + 8));
  return;
}


