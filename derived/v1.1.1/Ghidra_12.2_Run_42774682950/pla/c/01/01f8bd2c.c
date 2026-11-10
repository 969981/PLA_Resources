/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f8bd2c; name: FUN_01f8bd2c
 */


undefined8 FUN_01f8bd2c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar8 = **(long **)(*(long *)(param_1 + 600) + 0x1f0);
  if (((lVar8 != 0) && (puVar9 = *(undefined8 **)(lVar8 + 0x18), puVar9 != (undefined8 *)0x0)) &&
     (uVar5 = FUN_00bd1318(puVar9), (uVar5 & 1) != 0)) {
    puVar6 = (undefined8 *)(**(code **)*puVar9)(puVar9);
    puVar1 = (undefined8 *)PTR_DAT_0437a678;
    if (((*PTR_DAT_0437a670 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a670), puVar3 = PTR_DAT_0437a588,
       puVar1 = (undefined8 *)PTR_DAT_0437a678, iVar4 != 0)) {
      if (((*PTR_DAT_0437a598 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a598), puVar2 = PTR_DAT_043794d8, iVar4 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar4 != 0)) {
          uVar7 = FUN_0087f8f0();
          *(undefined8 *)puVar2 = uVar7;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(PTR_DAT_0437a598);
      }
      puVar1 = (undefined8 *)PTR_DAT_0437a678;
      *(undefined **)PTR_DAT_0437a678 = puVar3;
      __cxa_guard_release(PTR_DAT_0437a670);
    }
    if (puVar6 != (undefined8 *)0x0) {
      do {
        if (puVar6 == puVar1) {
          *(undefined1 *)((long)puVar9 + 0x29) = 1;
          return 1;
        }
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


