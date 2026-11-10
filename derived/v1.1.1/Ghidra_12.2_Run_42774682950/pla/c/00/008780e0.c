/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008780e0; name: FUN_008780e0
 */


void FUN_008780e0(long param_1,uint param_2)

{
  if ((param_2 & 0x49c0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00878100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04378600)(*(undefined8 *)(param_1 + 0xb0),1);
  return;
}


