/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02623400; name: FUN_02623400
 */


void FUN_02623400(void)

{
  int iVar1;
  
  if (((DAT_043e9ad8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e9ad8), iVar1 != 0)) {
    FUN_02623460();
    FUN_02622714(&DAT_043e9ad0,PTR_DAT_04379ef0);
    __cxa_guard_release(&DAT_043e9ad8);
  }
  return;
}


