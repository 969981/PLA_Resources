/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c438f4; name: FUN_02c438f4
 */


long * FUN_02c438f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *local_38;
  long local_30;
  undefined8 uStack_28;
  
  lVar6 = *(long *)(param_1 + 0x88);
  if (*(code **)(param_1 + 0x560) == (code *)0x0) {
    plVar4 = *(long **)(lVar6 + 0x18);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,param_2,1);
  }
  else {
    local_30 = param_1;
    uStack_28 = param_2;
    (**(code **)(param_1 + 0x560))(&local_38,param_1 + 0x580,&uStack_28,&local_30);
    plVar3 = *(long **)(lVar6 + 0x18);
    plVar4 = (long *)PTR_PTR_04379d00;
    if (local_38 != (long *)0x0) {
      plVar4 = local_38 + 0xc;
    }
    plVar4 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,*plVar4,1);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (plVar4 != (long *)0x0) {
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
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
    if (puVar5 != (undefined8 *)0x0) {
      do {
        if (puVar5 == (undefined8 *)PTR_DAT_043729e0) {
          return plVar4;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != (undefined8 *)0x0);
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


