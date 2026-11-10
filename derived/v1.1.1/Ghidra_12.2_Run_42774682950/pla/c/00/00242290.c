/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00242290; name: FUN_00242290
 */


void FUN_00242290(undefined8 param_1,float *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  
  param_2[0] = 1.0;
  puVar5 = PTR_DAT_043729f0;
  puVar4 = PTR_DAT_043729e8;
  puVar3 = PTR_DAT_043729e0;
  puVar2 = PTR_DAT_043729d8;
  param_2[1] = 1.0;
  if (param_3 != (long *)0x0) {
    bVar1 = *PTR_DAT_043729d8;
    while( true ) {
      if (((bVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar2), iVar6 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          *(undefined8 *)puVar5 = 0;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar3 = puVar5;
        __cxa_guard_release(puVar2);
      }
      for (plVar7 = (long *)(**(code **)(*param_3 + 0x10))(param_3); plVar7 != (long *)0x0;
          plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar3) {
          return;
        }
      }
      *param_2 = *param_2 * *(float *)(param_3 + 9);
      param_2[1] = param_2[1] * *(float *)((long)param_3 + 0x4c);
      param_3 = (long *)param_3[3];
      if (param_3 == (long *)0x0) break;
      bVar1 = *puVar2;
    }
  }
  return;
}


