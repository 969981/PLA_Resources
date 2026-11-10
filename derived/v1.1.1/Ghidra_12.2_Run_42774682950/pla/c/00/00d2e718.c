/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2e718; name: FUN_00d2e718
 */


void FUN_00d2e718(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  if (param_2 != (long *)0x0) {
    if (((*PTR_DAT_04372b00 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04372b00), puVar1 = PTR_DAT_043729f0, iVar2 != 0)) {
      if (((*PTR_DAT_043729e8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar2 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_043729e8);
      }
      *(undefined **)PTR_DAT_04372b08 = puVar1;
      __cxa_guard_release(PTR_DAT_04372b00);
    }
    for (plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_04372b08) {
        FUN_00256608(param_2);
        break;
      }
    }
    for (plVar3 = (long *)param_2[5]; plVar3 != param_2 + 4; plVar3 = (long *)plVar3[1]) {
      FUN_00d2e718(param_1,plVar3 + -1);
    }
  }
  return;
}


