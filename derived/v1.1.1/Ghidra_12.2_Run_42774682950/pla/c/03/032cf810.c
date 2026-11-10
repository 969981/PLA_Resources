/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cf810; name: FUN_032cf810
 */


void FUN_032cf810(long *param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
  *(undefined8 *)(param_2 + -0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x032cf82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))
            (param_1,param_2 - *(int *)(param_2 + -4),(long)*(int *)(param_2 + -8) + 0x10);
  return;
}


