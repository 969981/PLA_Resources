/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bcab0c; name: FUN_01bcab0c
 */


void FUN_01bcab0c(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_58;
  
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  plVar14 = (long *)*param_1;
  if (plVar14 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[1] == plVar14) {
    plVar13 = plVar14;
  }
  else {
    plVar13 = (long *)param_1[1] + -2;
    puVar11 = (undefined8 *)*plVar13;
    while( true ) {
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar11[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar12 = *(long *)puVar6;
          *(long *)puVar7 = lVar12;
          local_58 = *puVar11;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      if (plVar13 == plVar14) break;
      plVar13 = plVar13 + -2;
      puVar11 = (undefined8 *)*plVar13;
    }
    plVar13 = (long *)*param_1;
  }
  lVar12 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = plVar14;
  uVar10 = FUN_02bcc75c(plVar2);
  if ((uVar10 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01bcac68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,plVar13,lVar12 - (long)plVar13,8);
    return;
  }
  FUN_02bcc824(plVar2,plVar13,lVar12 - (long)plVar13,8);
  return;
}


