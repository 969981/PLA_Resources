/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134e400; name: FUN_0134e400
 */


void FUN_0134e400(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0xf1e8b0e6aaf33cd6;
  pcStack_38 = "pane_N_stamp_set_00";
  local_30 = 0x13;
  plVar2 = (long *)FUN_0283ac34(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148),&local_40);
  if (((*PTR_DAT_043729e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_043729f0 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if (plVar2 != (long *)0x0) {
    for (plVar3 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_043729f0) goto LAB_0134e48c;
    }
    plVar2 = (long *)0x0;
  }
LAB_0134e48c:
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (plVar2 != (long *)0x0) {
    plVar2[6] = 0;
    *(undefined4 *)(plVar2 + 7) = 0;
    *(byte *)(plVar2 + 0xb) = *(byte *)(plVar2 + 0xb) | 0x10;
  }
  return;
}


