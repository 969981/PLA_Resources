/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008a62a4; name: FUN_008a62a4
 */


void FUN_008a62a4(TlsSlot *param_1)

{
  int local_18 [2];
  
  local_18[0] = nn::os::AllocateTlsSlot(param_1,(_func_void_ulong *)0x0);
  if (local_18[0] != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)local_18,"");
  }
  return;
}


