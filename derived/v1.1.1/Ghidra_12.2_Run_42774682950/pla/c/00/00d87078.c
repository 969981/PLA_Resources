/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d87078; name: FUN_00d87078
 */


void FUN_00d87078(void)

{
  int iVar1;
  
  if (((DAT_043acf48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043acf48), iVar1 != 0)) {
    FUN_00100250(&LAB_00d870d4,&DAT_043acf38,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043acf48);
    return;
  }
  return;
}


