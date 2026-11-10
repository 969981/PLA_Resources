/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd8f30; name: FUN_01cd8f30
 */


void FUN_01cd8f30(long *param_1)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  lVar6 = tpidr_el0;
  plVar3 = (long *)param_1[6];
  do {
    while( true ) {
      if (plVar3 == (long *)0x0) {
        lVar12 = *param_1;
        *param_1 = 0;
        if (lVar12 == 0) {
          return;
        }
        lVar2 = param_1[1];
        plVar3 = (long *)param_1[2];
        uVar11 = (**(code **)(*plVar3 + 0xc0))(plVar3);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar3,lVar12,lVar2 << 3,8);
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x01cd90e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar12,lVar2 << 3,8);
        return;
      }
      plVar13 = (long *)*plVar3;
      puVar14 = (undefined8 *)plVar3[3];
      if (puVar14 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar14 + 1);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          puVar14[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar7);
          }
          lVar12 = *(long *)puVar8;
          *(long *)puVar9 = lVar12;
          local_68 = *puVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
        }
      }
      plVar15 = (long *)param_1[7];
      uVar11 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar11 & 1) != 0) break;
LAB_01cd9020:
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar3,0x28,8);
      plVar3 = plVar13;
    }
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_01cd9020;
    FUN_02bcc824(plVar15,plVar3,0x28,8);
    plVar3 = plVar13;
  } while( true );
}


