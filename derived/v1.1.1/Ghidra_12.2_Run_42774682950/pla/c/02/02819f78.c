/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02819f78; name: FUN_02819f78
 */


undefined8 FUN_02819f78(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = (long *)**(undefined8 **)(param_1 + 0x8d0);
  if (plVar5 != (long *)0x0) {
    puVar2 = (undefined8 *)(**(code **)plVar5[10])(plVar5 + 10);
    if (((*PTR_DAT_04387e08 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04387e08), iVar1 != 0)) {
      uVar4 = FUN_0281249c();
      *(undefined8 *)PTR_DAT_04387e10 = uVar4;
      __cxa_guard_release(PTR_DAT_04387e08);
    }
    if (puVar2 != (undefined8 *)0x0) {
      while (puVar2 != (undefined8 *)PTR_DAT_04387e10) {
        puVar2 = (undefined8 *)*puVar2;
        if (puVar2 == (undefined8 *)0x0) {
          return 0;
        }
      }
      uVar3 = (**(code **)(*plVar5 + 0x70))(plVar5);
      if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x970) == 0)) {
        FUN_0281a068(param_1);
        return 1;
      }
    }
  }
  return 0;
}


