/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00552ac4; name: FUN_00552ac4
 */


void FUN_00552ac4(uint *param_1,undefined1 param_2,undefined1 param_3,ushort param_4,int param_5)

{
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(out_opcode_) == (0)","external/com_github_google_re2/re2/prog.cc",0x27,
                  "InitByteRange");
  }
  *param_1 = param_5 << 4 | 2;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined1 *)((long)param_1 + 5) = param_3;
  *(ushort *)((long)param_1 + 6) = param_4 & 1;
  return;
}


