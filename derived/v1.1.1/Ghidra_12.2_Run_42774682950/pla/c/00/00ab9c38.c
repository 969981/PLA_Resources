/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab9c38; name: FUN_00ab9c38
 */


undefined8 FUN_00ab9c38(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *local_30 [2];
  undefined8 local_18;
  
  lVar6 = FUN_009b807c(*param_1 + 0xf0,local_30);
  if (lVar6 == 0) {
    uVar7 = FUN_009d6c6c(*param_1 + 0xf0,local_30);
    return uVar7;
  }
  FUN_01a74a50(local_30);
  if (local_30[0] == (undefined8 *)0x0) {
LAB_00ab9d20:
    uVar7 = 0;
  }
  else {
    if (*(int *)((long)local_30[0] + 0xc) == 0) {
LAB_00ab9d28:
      uVar7 = 0;
      puVar4 = local_30[0];
    }
    else {
      if (local_30[0] == (undefined8 *)0x0) goto LAB_00ab9d20;
      if (local_30[0][3] == 0) goto LAB_00ab9d28;
      uVar7 = FUN_00aba064();
      puVar4 = local_30[0];
    }
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_18 = *puVar4;
        FUN_02a44274(lVar6 + 0xd8,&local_18);
      }
    }
  }
  return uVar7;
}


