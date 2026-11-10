/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d01644; name: FUN_00d01644
 */


void FUN_00d01644(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 local_58;
  
  if (param_1[1] != param_1[2]) {
    FUN_00cf42fc(param_1 + 3,param_1[1],param_2);
    param_1[1] = param_1[1] + 0x250;
    return;
  }
  plVar14 = param_1 + 3;
  lVar9 = FUN_00d019a8(param_1,(param_1[1] - *param_1 >> 4) * 0x14c1bacf914c1bad + 1);
  lVar13 = *param_1;
  lVar16 = param_1[1];
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,lVar9 * 0x250,0x10);
    if (lVar10 == 0) {
      (**(code **)(*(long *)*plVar14 + 0xb8))();
    }
  }
  lVar17 = lVar10 + (lVar16 - lVar13 >> 4) * 0x10;
  FUN_00cf42fc(plVar14,lVar17,param_2);
  lVar16 = *param_1;
  lVar15 = param_1[1];
  lVar13 = lVar17 + 0x250;
  if (lVar15 == lVar16) {
    lVar15 = lVar16;
  }
  else {
    do {
      lVar17 = lVar17 + -0x250;
      lVar15 = lVar15 + -0x250;
      FUN_00cf42fc(plVar14,lVar17,lVar15);
    } while (lVar16 != lVar15);
    lVar16 = *param_1;
    lVar15 = param_1[1];
  }
  lVar18 = param_1[2];
  param_1[2] = lVar10 + lVar9 * 0x250;
  *param_1 = lVar17;
  param_1[1] = lVar13;
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  while (lVar15 != lVar16) {
    puVar12 = (undefined8 *)(lVar15 + -0x240);
    lVar15 = lVar15 + -0x250;
    puVar12 = (undefined8 *)*puVar12;
    if (puVar12 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar12 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar12[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar13 = *(long *)puVar5;
        *(long *)puVar6 = lVar13;
        local_58 = *puVar12;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
  }
  if (lVar16 == 0) {
    return;
  }
  plVar14 = (long *)*plVar14;
  uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  if ((uVar11 & 1) != 0) {
    lVar13 = tpidr_el0;
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      FUN_02bcc824(plVar14,lVar16,lVar18 - lVar16,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00d01920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,lVar18 - lVar16,0x10);
  return;
}


