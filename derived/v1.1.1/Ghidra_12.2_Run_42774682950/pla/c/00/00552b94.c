/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00552b94; name: FUN_00552b94
 */


void FUN_00552b94(int *param_1,int param_2)

{
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(out_opcode_) == (0)","external/com_github_google_re2/re2/prog.cc",0x3b,
                  "InitMatch");
  }
  *param_1 = 5;
  param_1[1] = param_2;
  return;
}


