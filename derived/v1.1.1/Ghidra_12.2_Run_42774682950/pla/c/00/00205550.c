/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205550; name: FUN_00205550
 */


undefined8 FUN_00205550(long param_1)

{
  if (*(long *)PTR_stdout_04372328 != param_1 && *(long *)PTR_stderr_04372330 != param_1) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortFormatImpl(&DAT_03996322,&DAT_03996322,&DAT_03996322,0,&DAT_03996322);
  }
  return 0xffffffff;
}


