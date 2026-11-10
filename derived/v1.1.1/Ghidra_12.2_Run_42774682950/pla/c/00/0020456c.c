/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020456c; name: FUN_0020456c
 */


void FUN_0020456c(long param_1)

{
  if (*(code **)(PTR_DAT_043727c0 + 8) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortFormatImpl(&DAT_03996322,&DAT_03996322,&DAT_03996322,0,&DAT_03996322);
  }
                    /* WARNING: Could not recover jumptable at 0x0020458c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_043727c0 + 8))(*(undefined8 *)(param_1 + -8));
  return;
}


