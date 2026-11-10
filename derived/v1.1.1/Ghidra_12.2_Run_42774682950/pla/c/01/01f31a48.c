/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f31a48; name: FUN_01f31a48
 */


void FUN_01f31a48(undefined8 param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  char local_80 [16];
  undefined8 *local_70;
  undefined8 *local_60;
  undefined8 local_28;
  
  FUN_01f2bf7c(local_80);
  if (local_80[0] != '\0') {
    if (((local_70 != (undefined8 *)0x0) && (*(int *)((long)local_70 + 0xc) != 0)) &&
       (local_70 == (undefined8 *)*param_2)) {
      FUN_01f31bf8(param_1,0);
    }
    if (local_80[0] != '\0') {
      if (local_60 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_60 + 1);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          local_60[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar5 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar5;
          local_28 = *local_60;
          FUN_02a44274(lVar5 + 0xd8,&local_28);
        }
      }
      if (local_70 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_70 + 1);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          local_70[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar5 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar5;
          local_28 = *local_70;
          FUN_02a44274(lVar5 + 0xd8,&local_28);
        }
      }
    }
  }
  return;
}


