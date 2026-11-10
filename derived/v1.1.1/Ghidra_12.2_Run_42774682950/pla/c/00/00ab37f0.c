/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab37f0; name: FUN_00ab37f0
 */


undefined8 FUN_00ab37f0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_0437a5d8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a5d8), puVar1 = PTR_DAT_0437a5b0, iVar2 != 0)) {
    if (((*PTR_DAT_0437a5a8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a5a8), iVar2 != 0)) {
      uVar4 = FUN_00ab38cc();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_0437a5a8);
    }
    *(undefined **)PTR_DAT_0437a5e0 = puVar1;
    __cxa_guard_release(PTR_DAT_0437a5d8);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_0437a5e0) break;
    plVar3 = (long *)*plVar3;
  }
  return 1;
}


