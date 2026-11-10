/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c47aa8; name: FUN_02c47aa8
 */


long * FUN_02c47aa8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(param_1 + 8),1);
  if (((*PTR_DAT_043729d8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_043729d8), puVar1 = PTR_DAT_043729f0, iVar2 != 0)) {
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    *(undefined **)PTR_DAT_043729e0 = puVar1;
    __cxa_guard_release(PTR_DAT_043729d8);
  }
  if (plVar4 != (long *)0x0) {
    for (plVar3 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_043729e0) {
        return plVar4;
      }
    }
  }
  return (long *)0x0;
}


