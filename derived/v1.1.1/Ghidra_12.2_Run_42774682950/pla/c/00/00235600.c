/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00235600; name: FUN_00235600
 */


void FUN_00235600(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  if (((*PTR_DAT_04372ab0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04372ab0), puVar1 = PTR_DAT_043729f0, iVar2 != 0)) {
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    *(undefined **)PTR_DAT_04372ab8 = puVar1;
    __cxa_guard_release(PTR_DAT_04372ab0);
  }
  if (param_1 != (long *)0x0) {
    for (plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_04372ab8) {
        *(ushort *)((long)param_1 + 0x114) =
             *(ushort *)((long)param_1 + 0x114) & 0xfffb |
             (*(ushort *)((long)param_1 + 0x114) >> 2 & 1 | (ushort)(param_1[0x21] != param_2)) << 2
        ;
        if (param_1[0x21] != param_2) {
          param_1[0x21] = param_2;
        }
        break;
      }
    }
  }
  for (plVar3 = (long *)param_1[5]; plVar3 != param_1 + 4; plVar3 = (long *)plVar3[1]) {
    FUN_00235600(plVar3 + -1,param_2);
  }
  return;
}


