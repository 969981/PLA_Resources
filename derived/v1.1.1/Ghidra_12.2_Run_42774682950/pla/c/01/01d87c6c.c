/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d87c6c; name: FUN_01d87c6c
 */


undefined8 FUN_01d87c6c(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (*param_1 != 0) {
    puVar5 = (undefined8 *)(*(code *)**(undefined8 **)(*param_1 + 8))();
    puVar1 = (undefined8 *)PTR_DAT_0437b118;
    if (((*PTR_DAT_0437b110 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b110), puVar3 = PTR_DAT_043795e0,
       puVar1 = (undefined8 *)PTR_DAT_0437b118, iVar4 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_043795d8), puVar2 = PTR_DAT_043794d8, iVar4 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar4 != 0)) {
          uVar6 = FUN_0087f8f0();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      puVar1 = (undefined8 *)PTR_DAT_0437b118;
      *(undefined **)PTR_DAT_0437b118 = puVar3;
      __cxa_guard_release(PTR_DAT_0437b110);
    }
    if (puVar5 != (undefined8 *)0x0) {
      do {
        if (puVar5 == puVar1) {
          return 1;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


