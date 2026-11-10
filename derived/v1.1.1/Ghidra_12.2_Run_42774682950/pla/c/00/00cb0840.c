/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cb0840; name: FUN_00cb0840
 */


void FUN_00cb0840(long *param_1,long *param_2)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined4 local_70;
  undefined8 local_68;
  
  lVar2 = param_1[3];
  lVar6 = param_1[4];
  lVar3 = param_1[5];
  lVar7 = param_1[6];
  lVar22 = param_1[2];
  lVar4 = *param_1;
  lVar8 = param_1[1];
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar19 = param_2[6];
  lVar5 = param_2[3];
  lVar20 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar20;
  param_1[3] = lVar5;
  *(int *)(param_1 + 6) = (int)lVar19;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar5 = param_1[7];
  lVar19 = param_1[8];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(int *)(param_1 + 7) = (int)param_2[7];
  param_1[8] = param_2[8];
  puVar14 = PTR_DAT_043794a8;
  puVar13 = PTR_DAT_043794a0;
  puVar12 = PTR_DAT_04379498;
  lVar20 = *param_2;
  if (lVar20 == 0) goto LAB_00cb08dc;
  lVar21 = param_2[1];
  if (lVar21 == lVar20) {
    lVar21 = lVar20;
  }
  else {
    do {
      puVar18 = (undefined8 *)(lVar21 + -0x240);
      lVar21 = lVar21 + -0x250;
      puVar18 = (undefined8 *)*puVar18;
      if (puVar18 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar18 + 1);
        do {
          iVar15 = *piVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar15 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 + -1 == 0) {
          puVar18[2] = 0;
          if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar12), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar13,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar12);
          }
          lVar17 = *(long *)puVar13;
          *(long *)puVar14 = lVar17;
          local_68 = *puVar18;
          FUN_02a44274(lVar17 + 0xd8,&local_68);
        }
      }
    } while (lVar21 != lVar20);
    lVar21 = *param_2;
  }
  lVar17 = param_2[2];
  plVar9 = (long *)param_2[3];
  param_2[1] = lVar20;
  uVar16 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar16 & 1) == 0) {
LAB_00cb0a4c:
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar21,lVar17 - lVar21,0x10);
  }
  else {
    lVar20 = tpidr_el0;
    if (*(char *)(lVar20 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar20 + 0x38d488) = 1;
      *(undefined8 *)(lVar20 + 0x38d478) = 0;
      *(undefined8 *)(lVar20 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar20 + 0x38d480) < 1) goto LAB_00cb0a4c;
    FUN_02bcc824(plVar9,lVar21,lVar17 - lVar21,0x10);
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
LAB_00cb08dc:
  local_70 = (undefined4)lVar7;
  *param_2 = lVar4;
  param_2[1] = lVar8;
  *(undefined4 *)(param_2 + 6) = local_70;
  param_2[3] = lVar2;
  param_2[4] = lVar6;
  param_2[5] = lVar3;
  param_2[2] = lVar22;
  *(int *)(param_2 + 7) = (int)lVar5;
  param_2[8] = lVar19;
  return;
}


