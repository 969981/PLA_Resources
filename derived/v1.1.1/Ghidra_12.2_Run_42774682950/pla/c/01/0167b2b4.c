/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167b2b4; name: FUN_0167b2b4
 */


void FUN_0167b2b4(long param_1,undefined8 param_2)

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
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 local_68;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_1 + 0x78);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar14 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0167b324;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0167b324:
  uVar10 = *(ulong *)(param_1 + 0x88);
  puVar1 = (undefined8 *)(param_1 + 0x98);
  if (uVar10 < *(ulong *)(param_1 + 0x90)) {
    FUN_0167be80(puVar1,uVar10,param_2);
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 0x1e0;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0xa0);
    lVar9 = (long)(uVar10 - *(long *)(param_1 + 0x80)) >> 5;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    uVar10 = lVar9 * -0x1111111111111111 + 1;
    if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = (long)(*(ulong *)(param_1 + 0x90) - *(long *)(param_1 + 0x80)) >> 5;
    uVar12 = lVar11 * -0x2222222222222222;
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if ((ulong)(lVar11 * -0x1111111111111111) < uVar13 >> 1) {
      uVar13 = uVar10;
    }
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar13 * 0x1e0,0x10);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar17 = lVar11 + lVar9 * 0x20;
    FUN_0167be80(puVar1,lVar17,param_2);
    lVar16 = *(long *)(param_1 + 0x80);
    lVar15 = *(long *)(param_1 + 0x88);
    lVar9 = lVar17 + 0x1e0;
    if (lVar15 == lVar16) {
      lVar15 = lVar16;
    }
    else {
      do {
        lVar17 = lVar17 + -0x1e0;
        lVar15 = lVar15 + -0x1e0;
        FUN_0167be80(puVar1,lVar17,lVar15);
      } while (lVar16 != lVar15);
      lVar16 = *(long *)(param_1 + 0x80);
      lVar15 = *(long *)(param_1 + 0x88);
    }
    lVar19 = *(long *)(param_1 + 0x90);
    *(ulong *)(param_1 + 0x90) = lVar11 + uVar13 * 0x1e0;
    *(long *)(param_1 + 0x80) = lVar17;
    *(long *)(param_1 + 0x88) = lVar9;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    while (lVar15 != lVar16) {
      puVar18 = *(undefined8 **)(lVar15 + -0x20);
      lVar15 = lVar15 + -0x1e0;
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
      FUN_0167b61c(lVar15);
    }
    if (lVar16 != 0) {
      plVar14 = (long *)*puVar1;
      lVar19 = lVar19 - lVar16;
      uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar10 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar14,lVar16,lVar19,0x10);
          goto LAB_0167b34c;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,lVar19,0x10);
    }
  }
LAB_0167b34c:
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


