/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b1238; name: FUN_009b1238
 */


undefined8 FUN_009b1238(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (*param_2 != 0) {
    plVar4 = (long *)(*(code *)**(undefined8 **)(*param_2 + 8))();
    if (((*PTR_DAT_0437a270 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a270), puVar2 = PTR_DAT_043795e0, iVar3 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_043795d8), puVar1 = PTR_DAT_043794d8, iVar3 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar3 != 0)) {
          uVar5 = FUN_0087f8f0();
          *(undefined8 *)puVar1 = uVar5;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)PTR_DAT_0437a278 = puVar2;
      __cxa_guard_release(PTR_DAT_0437a270);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_0437a278) {
        return 1;
      }
    }
  }
  return 0;
}


