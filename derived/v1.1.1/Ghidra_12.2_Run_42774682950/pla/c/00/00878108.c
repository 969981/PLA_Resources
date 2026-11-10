/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00878108; name: FUN_00878108
 */


void FUN_00878108(long param_1,uint param_2)

{
  if ((param_2 >> 6 & 0x40) == 0 &&
      (((param_2 >> 6 & 8) == 0 && (param_2 & 0x4020) == 0) && (param_2 & 0x2050) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00878144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04378600)(*(undefined8 *)(param_1 + 0xb0));
  return;
}


