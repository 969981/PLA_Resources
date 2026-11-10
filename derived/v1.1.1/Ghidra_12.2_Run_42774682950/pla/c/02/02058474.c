/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02058474; name: FUN_02058474
 */


undefined8 * FUN_02058474(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*param_1 != 0) && (puVar5 = *(undefined8 **)(*param_1 + 0x18), puVar5 != (undefined8 *)0x0))
  {
    puVar3 = (undefined8 *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_0437b068 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b068), puVar1 = PTR_DAT_043794d8, iVar2 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar2 != 0)) {
        uVar4 = FUN_0087f8f0();
        *(undefined8 *)puVar1 = uVar4;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_0437b070 = puVar1;
      __cxa_guard_release(PTR_DAT_0437b068);
    }
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_0437b070) {
          return puVar5 + -10;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}


