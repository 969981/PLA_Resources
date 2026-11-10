/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b49364; name: FUN_01b49364
 */


void FUN_01b49364(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 local_68;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar16 = (long *)(param_1 + 0x78);
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar16 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01b493d4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01b493d4:
  uVar11 = *(ulong *)(param_1 + 0x88);
  puVar1 = (undefined8 *)(param_1 + 0x98);
  if (uVar11 < *(ulong *)(param_1 + 0x90)) {
    FUN_01b49980(puVar1,uVar11,param_2);
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 0x28;
  }
  else {
    uVar14 = *(ulong *)(param_1 + 0xa0);
    lVar9 = (long)(uVar11 - *(long *)(param_1 + 0x80)) >> 3;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    uVar11 = lVar9 * -0x3333333333333333 + 1;
    if (uVar14 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)(*(ulong *)(param_1 + 0x90) - *(long *)(param_1 + 0x80)) >> 3;
    uVar13 = lVar12 * -0x6666666666666666;
    if (uVar11 <= uVar13) {
      uVar11 = uVar13;
    }
    if ((ulong)(lVar12 * -0x3333333333333333) < uVar14 >> 1) {
      uVar14 = uVar11;
    }
    if (uVar14 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar14 * 0x28,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar17 = lVar12 + lVar9 * 8;
    FUN_01b49980(puVar1,lVar17,param_2);
    plVar16 = *(long **)(param_1 + 0x80);
    plVar15 = *(long **)(param_1 + 0x88);
    lVar9 = lVar17 + 0x28;
    if (plVar15 == plVar16) {
      plVar15 = plVar16;
    }
    else {
      do {
        lVar17 = lVar17 + -0x28;
        plVar15 = plVar15 + -5;
        FUN_01b49980(puVar1,lVar17,plVar15);
      } while (plVar16 != plVar15);
      plVar16 = *(long **)(param_1 + 0x80);
      plVar15 = *(long **)(param_1 + 0x88);
    }
    lVar19 = *(long *)(param_1 + 0x90);
    *(ulong *)(param_1 + 0x90) = lVar12 + uVar14 * 0x28;
    *(long *)(param_1 + 0x80) = lVar17;
    *(long *)(param_1 + 0x88) = lVar9;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    while (plVar15 != plVar16) {
      puVar18 = (undefined8 *)plVar15[-3];
      plVar15 = plVar15 + -5;
      if (puVar18 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar18 + 1);
        do {
          iVar8 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          puVar18[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar9 = *(long *)puVar6;
          *(long *)puVar7 = lVar9;
          local_68 = *puVar18;
          FUN_02a44274(lVar9 + 0xd8,&local_68);
        }
      }
      plVar10 = (long *)*plVar15;
      if (plVar10 != (long *)0x0) {
        lVar9 = plVar10[0xb];
        piVar2 = (int *)(lVar9 + 0xc);
        do {
          iVar8 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
        }
      }
    }
    if (plVar16 != (long *)0x0) {
      plVar15 = (long *)*puVar1;
      lVar19 = lVar19 - (long)plVar16;
      uVar11 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar11 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar15,plVar16,lVar19,8);
          goto LAB_01b493fc;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar16,lVar19,8);
    }
  }
LAB_01b493fc:
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


