/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00259864; name: FUN_00259864
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_00259864(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (((*PTR_DAT_04372b38 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04372b38), puVar1 = PTR_DAT_04372b50, iVar2 != 0)) {
    if (((*PTR_DAT_04372b48 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04372b48), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04372b48);
    }
    *(undefined **)PTR_DAT_04372b40 = puVar1;
    __cxa_guard_release(PTR_DAT_04372b38);
  }
  if (puVar6 != (undefined8 *)0x0) {
    for (plVar3 = (long *)(**(code **)*puVar6)(puVar6); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_04372b40) {
        plVar3 = (long *)FUN_00232654(0x70);
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
        FUN_0023a1b8(plVar3);
        plVar4 = plVar3 + 1;
        lVar5 = *plVar4;
        plVar7 = puVar6 + 1;
        *plVar4 = *plVar7;
        *(long **)(lVar5 + 8) = plVar7;
        *(long **)(*plVar7 + 8) = plVar4;
        *plVar7 = lVar5;
        return plVar3;
      }
    }
  }
  plVar3 = (long *)FUN_00232654(0x50);
  if (plVar3 != (long *)0x0) {
    FUN_00239358(plVar3);
    puVar1 = PTR_DAT_04372bf0;
    plVar3[9] = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar4 = plVar3 + 1;
    lVar5 = *plVar4;
    *plVar4 = _DAT_00000008;
    *(undefined8 *)(lVar5 + 8) = 8;
    *(long **)(_DAT_00000008 + 8) = plVar4;
    _DAT_00000008 = lVar5;
  }
  return plVar3;
}


