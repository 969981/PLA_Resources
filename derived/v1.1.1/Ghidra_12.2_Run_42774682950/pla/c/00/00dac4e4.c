/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dac4e4; name: FUN_00dac4e4
 */


void FUN_00dac4e4(uint param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 < 0x1f) {
    if ((*PTR_DAT_0437b630 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_0437b630);
      if (iVar1 != 0) {
        FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b630);
      }
    }
    DAT_043ad1d0 = *(long *)PTR_DAT_0437b638;
    if (DAT_043ad1d0 != 0) {
      FUN_00db0b58(DAT_043ad1d0,(&PTR_s_capture_wild_field_041edae0)[(ulong)param_1 * 2],param_2);
      return;
    }
  }
  return;
}


