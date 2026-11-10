/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02869470; name: FUN_02869470
 */


undefined8 * FUN_02869470(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_0437f680 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_0437f680), puVar2 = PTR_DAT_0437b320, iVar3 != 0)) {
    if (((*PTR_DAT_0437b318 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b318), puVar1 = PTR_DAT_04379c98, iVar3 != 0)) {
      if (((*PTR_DAT_04379ca8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar3 != 0)) {
        uVar5 = FUN_009311a8();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_04379ca8);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_0437b318);
    }
    *(undefined **)PTR_DAT_0437f688 = puVar2;
    __cxa_guard_release(PTR_DAT_0437f680);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar4 == (long *)PTR_DAT_0437f688) break;
    plVar4 = (long *)*plVar4;
  }
  return param_1 + -10;
}


