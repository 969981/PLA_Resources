/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cc3ddc; name: FUN_01cc3ddc
 */


void FUN_01cc3ddc(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  
  plVar3 = DAT_043f1798;
  if (param_1 >> 0x3d == 0) {
    lVar1 = tpidr_el0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x01cc3e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1 << 3,8);
    return;
  }
  puVar4 = (undefined8 *)FUN_01cc37b0();
  puVar2 = (void *)puVar4[2];
  while (puVar2 != (void *)0x0) {
    pvVar6 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar6;
  }
  pvVar6 = (void *)*puVar4;
  *puVar4 = 0;
  if (pvVar6 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar6);
  return;
}


