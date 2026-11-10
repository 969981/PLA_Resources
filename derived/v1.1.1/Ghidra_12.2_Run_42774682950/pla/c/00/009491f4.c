/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009491f4; name: FUN_009491f4
 */


undefined8 FUN_009491f4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_04379db8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379db8), puVar2 = PTR_DAT_04379dd0, iVar3 != 0)) {
    if (((*PTR_DAT_04379dc8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379dc8), puVar1 = PTR_DAT_04379d98, iVar3 != 0)) {
      if (((*PTR_DAT_04379d90 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04379d90), iVar3 != 0)) {
        uVar5 = FUN_0087f8f0();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_04379d90);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_04379dc8);
    }
    *(undefined **)PTR_DAT_04379dc0 = puVar2;
    __cxa_guard_release(PTR_DAT_04379db8);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    if (plVar4 == (long *)PTR_DAT_04379dc0) break;
    plVar4 = (long *)*plVar4;
  }
  return 1;
}


