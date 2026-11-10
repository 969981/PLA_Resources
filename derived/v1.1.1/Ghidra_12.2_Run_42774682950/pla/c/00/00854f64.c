/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00854f64; name: FUN_00854f64
 */


void FUN_00854f64(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_043773c0;
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x70) + 0x10), plVar2 != (long *)0x0)) {
    lVar3 = *(long *)(*(long *)(*(long *)PTR_DAT_043773c0 + 0x60) + 0x20);
    if (lVar3 != *(long *)(*(long *)PTR_DAT_043773c0 + 0x60) + 0x18) {
      do {
        local_38 = 0;
        local_40 = 0x20000000;
        (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))(*(long **)(lVar3 + 0x10),&local_40);
        lVar3 = *(long *)(lVar3 + 8);
      } while (lVar3 != *(long *)(*(long *)puVar1 + 0x60) + 0x18);
    }
    (**(code **)(*plVar2 + 0x10))(&local_40,plVar2);
  }
  return;
}


