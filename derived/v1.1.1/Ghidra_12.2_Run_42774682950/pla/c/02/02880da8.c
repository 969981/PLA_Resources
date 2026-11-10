/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02880da8; name: FUN_02880da8
 */


void FUN_02880da8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_043ec268 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_043ec268);
    if (iVar2 != 0) {
      FUN_00100250(&LAB_0288ee34,&DAT_043ec258,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043ec268);
    }
  }
  uVar3 = FUN_0288ec7c(param_1);
  FUN_0288ea10(&DAT_043ec258,uVar3);
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  lVar1 = 0;
  if (DAT_043ec258 != 0) {
    lVar1 = DAT_043ec258 + 0x48;
  }
  *(long *)(&DAT_043eced0 + (long)(int)DAT_043eeed0 * 8) = lVar1;
  DAT_043eeed0 = DAT_043eeed0 + 1;
  return;
}


