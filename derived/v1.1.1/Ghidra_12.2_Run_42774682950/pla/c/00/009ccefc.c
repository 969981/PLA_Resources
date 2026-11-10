/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009ccefc; name: FUN_009ccefc
 */


undefined8 FUN_009ccefc(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_04379e58 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379e58), puVar1 = PTR_DAT_043795b0, iVar2 != 0)) {
    if (((*PTR_DAT_043795a8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_043795a8), iVar2 != 0)) {
      uVar4 = FUN_009ccde4();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_043795a8);
    }
    *(undefined **)PTR_DAT_04379e60 = puVar1;
    __cxa_guard_release(PTR_DAT_04379e58);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_04379e60) break;
    plVar3 = (long *)*plVar3;
  }
  return 1;
}


