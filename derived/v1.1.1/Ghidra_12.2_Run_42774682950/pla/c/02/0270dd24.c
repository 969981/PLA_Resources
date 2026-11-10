/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0270dd24; name: FUN_0270dd24
 */


void FUN_0270dd24(void)

{
  int iVar1;
  
  if (((DAT_043ea060 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ea060), iVar1 != 0)) {
    DAT_043ea058 = FUN_017edfd4();
    __cxa_guard_release(&DAT_043ea060);
    return;
  }
  return;
}


