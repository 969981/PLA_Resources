/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ee75c; name: FUN_011ee75c
 */


undefined * FUN_011ee75c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_0437e780 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_0437e780), puVar1 = PTR_DAT_0437e788, iVar2 != 0)) {
    uVar3 = FUN_00d68b60();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_0437e780);
  }
  return PTR_DAT_0437e788;
}


