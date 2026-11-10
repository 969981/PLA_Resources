/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f38820; name: FUN_01f38820
 */


void FUN_01f38820(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 local_68;
  
  lVar10 = nn::os::GetCurrentThread();
  plVar15 = (long *)(param_1 + 0xb8);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xac));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01f38890;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01f38890:
  lVar10 = *(long *)(param_1 + 0x70);
  puVar1 = (undefined8 *)(param_1 + 0x80);
  if (lVar10 == *(long *)(param_1 + 0x78)) {
    uVar13 = *(ulong *)(param_1 + 0x88);
    lVar10 = lVar10 - *(long *)(param_1 + 0x68) >> 3;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    uVar2 = lVar10 * -0x5555555555555555 + 1;
    if (uVar13 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x68) >> 3;
    uVar12 = lVar11 * 0x5555555555555556;
    if (uVar2 <= uVar12) {
      uVar2 = uVar12;
    }
    if ((ulong)(lVar11 * -0x5555555555555555) < uVar13 >> 1) {
      uVar13 = uVar2;
    }
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar13 * 0x18,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar16 = lVar11 + lVar10 * 8;
    FUN_01f38fd8(puVar1,lVar16,param_2);
    plVar15 = *(long **)(param_1 + 0x68);
    plVar14 = *(long **)(param_1 + 0x70);
    lVar10 = lVar16 + 0x18;
    if (plVar14 == plVar15) {
      plVar14 = plVar15;
    }
    else {
      do {
        lVar16 = lVar16 + -0x18;
        plVar14 = plVar14 + -3;
        FUN_01f38fd8(puVar1,lVar16,plVar14);
      } while (plVar15 != plVar14);
      plVar15 = *(long **)(param_1 + 0x68);
      plVar14 = *(long **)(param_1 + 0x70);
    }
    lVar18 = *(long *)(param_1 + 0x78);
    *(ulong *)(param_1 + 0x78) = lVar11 + uVar13 * 0x18;
    *(long *)(param_1 + 0x68) = lVar16;
    *(long *)(param_1 + 0x70) = lVar10;
    puVar8 = PTR_DAT_043794a8;
    puVar7 = PTR_DAT_043794a0;
    puVar6 = PTR_DAT_04379498;
    if (plVar14 != plVar15) {
      plVar14 = plVar14 + -3;
      puVar17 = (undefined8 *)*plVar14;
      while( true ) {
        if (puVar17 != (undefined8 *)0x0) {
          piVar3 = (int *)(puVar17 + 1);
          do {
            iVar9 = *piVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 == 0) {
            puVar17[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar10 = *(long *)puVar7;
            *(long *)puVar8 = lVar10;
            local_68 = *puVar17;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        if (plVar14 == plVar15) break;
        plVar14 = plVar14 + -3;
        puVar17 = (undefined8 *)*plVar14;
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar14 = (long *)*puVar1;
      lVar18 = lVar18 - (long)plVar15;
      uVar13 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar13 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar14,plVar15,lVar18,8);
          goto LAB_01f388b8;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar15,lVar18,8);
    }
  }
  else {
    FUN_01f38fd8(puVar1,lVar10,param_2);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 0x18;
  }
LAB_01f388b8:
  *(undefined8 *)(param_1 + 0xb8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xac));
  return;
}


