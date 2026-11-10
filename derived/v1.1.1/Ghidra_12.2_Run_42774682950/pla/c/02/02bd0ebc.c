/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd0ebc; name: FUN_02bd0ebc
 */


void FUN_02bd0ebc(void)

{
  int iVar1;
  
  if (((DAT_043f2370 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043f2370), iVar1 != 0)) {
    nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_043f2328);
    FUN_00100250(&LAB_02c4f938,&DAT_043f2328,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f2370);
  }
  nn::mem::StandardAllocator::Free(&DAT_043f2328);
  return;
}


