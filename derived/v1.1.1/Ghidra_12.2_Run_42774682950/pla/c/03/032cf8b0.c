/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cf8b0; name: FUN_032cf8b0
 */


void FUN_032cf8b0(long *param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
  *(undefined8 *)(param_2 + -0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x032cf8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))
            (param_1,(undefined8 *)(param_2 + -0x10),(long)*(int *)(param_2 + -8) + 0x10);
  return;
}


