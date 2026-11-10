/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2f4f0; name: FUN_02f2f4f0
 */


void FUN_02f2f4f0(long param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  else if (*(char *)(param_1 + 0x88) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f2f508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}


