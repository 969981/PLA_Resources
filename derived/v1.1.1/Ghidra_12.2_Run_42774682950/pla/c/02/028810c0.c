/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028810c0; name: FUN_028810c0
 */


void FUN_028810c0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_0437e3b8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_0437e3b8);
    if (iVar3 != 0) {
      FUN_00100250(PTR_LAB_04387f18,PTR_DAT_0437e3c0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437e3b8);
    }
  }
  uVar4 = FUN_0289154c(param_1);
  puVar2 = PTR_DAT_0437e3c0;
  FUN_028912e0(PTR_DAT_0437e3c0,uVar4);
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x48;
  }
  *(long *)(&DAT_043eced0 + (long)(int)DAT_043eeed0 * 8) = lVar1;
  DAT_043eeed0 = DAT_043eeed0 + 1;
  return;
}


