/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ed430; name: FUN_002ed430
 */


void FUN_002ed430(byte *param_1,long *param_2)

{
  if (param_2[1] != 0) {
    if ((*param_1 & 1) == 0) {
      if (~(ulong)param_1 + *param_2 <= (ulong)(*param_1 >> 1)) {
LAB_002ed47c:
                    /* WARNING: Subroutine does not return */
        __assert_fail("((a).size() == 0) || (uintptr_t((a).data() - (*dest).data()) > uintptr_t((*dest).size()))"
                      ,"external/com_google_absl/absl/strings/str_cat.cc",0xc2,"StrAppend");
      }
    }
    else if ((ulong)(*param_2 - *(long *)(param_1 + 0x10)) <= *(ulong *)(param_1 + 8))
    goto LAB_002ed47c;
  }
  FUN_002e4094();
  return;
}


