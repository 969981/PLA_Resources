/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0118e018; name: FUN_0118e018
 */


undefined8 * FUN_0118e018(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((*param_1 != 0) && (puVar6 = *(undefined8 **)(*param_1 + 0x18), puVar6 != (undefined8 *)0x0))
  {
    puVar4 = (undefined8 *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_0437e5f0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437e5f0), puVar2 = PTR_DAT_0437b320, iVar3 != 0)) {
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
      *(undefined **)PTR_DAT_0437e5f8 = puVar2;
      __cxa_guard_release(PTR_DAT_0437e5f0);
    }
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (puVar4 == (undefined8 *)PTR_DAT_0437e5f8) {
          return puVar6 + -10;
        }
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}


