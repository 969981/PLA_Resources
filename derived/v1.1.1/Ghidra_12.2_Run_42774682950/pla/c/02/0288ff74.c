/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0288ff74; name: FUN_0288ff74
 */


void FUN_0288ff74(void)

{
  int iVar1;
  
  if (((DAT_043ec280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ec280), iVar1 != 0)) {
    FUN_00100250(&LAB_028904ac,&DAT_043ec270,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ec280);
    return;
  }
  return;
}


