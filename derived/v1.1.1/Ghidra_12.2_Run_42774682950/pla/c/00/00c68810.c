/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c68810; name: FUN_00c68810
 */


void FUN_00c68810(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined4 local_70;
  undefined8 local_68;
  
  lVar2 = param_1[3];
  lVar6 = param_1[4];
  lVar3 = param_1[5];
  lVar7 = param_1[6];
  lVar19 = param_1[2];
  lVar4 = *param_1;
  lVar8 = param_1[1];
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar14 = param_2[6];
  lVar5 = param_2[3];
  lVar16 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar16;
  param_1[3] = lVar5;
  *(int *)(param_1 + 6) = (int)lVar14;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar5 = param_1[7];
  lVar16 = param_1[8];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(int *)(param_1 + 7) = (int)param_2[7];
  param_1[8] = param_2[8];
  lVar14 = *param_2;
  if (lVar14 == 0) goto LAB_00c688ac;
  lVar15 = param_2[1];
  lVar18 = lVar14;
  if (lVar15 != lVar14) {
    lVar18 = lVar15 + -0x250;
    puVar17 = *(undefined8 **)(lVar15 + -0x240);
    if (puVar17 == (undefined8 *)0x0) goto LAB_00c68978;
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar12 = *piVar1 + -1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar12;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    do {
      if (iVar12 == 0) {
        puVar17[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_68 = *puVar17;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
LAB_00c68978:
      do {
        if (lVar18 == lVar14) {
          lVar18 = *param_2;
          goto LAB_00c689b0;
        }
        puVar17 = (undefined8 *)(lVar18 + -0x240);
        lVar18 = lVar18 + -0x250;
        puVar17 = (undefined8 *)*puVar17;
      } while (puVar17 == (undefined8 *)0x0);
      piVar1 = (int *)(puVar17 + 1);
      do {
        iVar12 = *piVar1 + -1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar12;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    } while( true );
  }
LAB_00c689b0:
  param_2[1] = lVar14;
  lVar14 = param_2[2];
  plVar9 = (long *)param_2[3];
  uVar13 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar13 & 1) == 0) {
LAB_00c68a1c:
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar18,lVar14 - lVar18,0x10);
  }
  else {
    lVar15 = tpidr_el0;
    if (*(char *)(lVar15 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar15 + 0x38d488) = 1;
      *(undefined8 *)(lVar15 + 0x38d478) = 0;
      *(undefined8 *)(lVar15 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_00c68a1c;
    FUN_02bcc824(plVar9,lVar18,lVar14 - lVar18,0x10);
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
LAB_00c688ac:
  local_70 = (undefined4)lVar7;
  *param_2 = lVar4;
  param_2[1] = lVar8;
  *(undefined4 *)(param_2 + 6) = local_70;
  param_2[3] = lVar2;
  param_2[4] = lVar6;
  param_2[5] = lVar3;
  param_2[2] = lVar19;
  *(int *)(param_2 + 7) = (int)lVar5;
  param_2[8] = lVar16;
  return;
}


