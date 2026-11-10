/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280ed44; name: FUN_0280ed44
 */


undefined8 FUN_0280ed44(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (**(long **)(param_1 + 0x488) != 0) {
    puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x488) + 0x50))();
    if (((*PTR_DAT_04387e08 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04387e08), iVar1 != 0)) {
      uVar3 = FUN_0281249c();
      *(undefined8 *)PTR_DAT_04387e10 = uVar3;
      __cxa_guard_release(PTR_DAT_04387e08);
    }
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_04387e10) {
          FUN_0280ee08(param_1);
          return 1;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


