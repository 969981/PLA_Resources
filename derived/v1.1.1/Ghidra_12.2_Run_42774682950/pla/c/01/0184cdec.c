/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0184cdec; name: FUN_0184cdec
 */


void FUN_0184cdec(long param_1,undefined8 param_2)

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
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 local_68;
  
  lVar10 = nn::os::GetCurrentThread();
  plVar15 = (long *)(param_1 + 0x98);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x8c));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0184ce5c;
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
LAB_0184ce5c:
  lVar10 = *(long *)(param_1 + 0x58);
  puVar1 = (undefined8 *)(param_1 + 0x68);
  if (lVar10 == *(long *)(param_1 + 0x60)) {
    uVar14 = *(ulong *)(param_1 + 0x70);
    lVar10 = lVar10 - *(long *)(param_1 + 0x50) >> 4;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    uVar2 = lVar10 * -0x79435e50d79435e5 + 1;
    if (uVar14 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x50) >> 4;
    uVar13 = lVar11 * 0xd79435e50d79436;
    if (uVar2 <= uVar13) {
      uVar2 = uVar13;
    }
    if ((ulong)(lVar11 * -0x79435e50d79435e5) < uVar14 >> 1) {
      uVar14 = uVar2;
    }
    if (uVar14 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar14 * 0x130,0x10);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar17 = lVar11 + lVar10 * 0x10;
    FUN_0184e738(puVar1,lVar17,param_2);
    puVar16 = *(undefined8 **)(param_1 + 0x50);
    puVar18 = *(undefined8 **)(param_1 + 0x58);
    lVar10 = lVar17 + 0x130;
    if (puVar18 == puVar16) {
      puVar18 = puVar16;
    }
    else {
      do {
        lVar17 = lVar17 + -0x130;
        puVar18 = puVar18 + -0x26;
        FUN_0184e738(puVar1,lVar17,puVar18);
      } while (puVar16 != puVar18);
      puVar16 = *(undefined8 **)(param_1 + 0x50);
      puVar18 = *(undefined8 **)(param_1 + 0x58);
    }
    lVar21 = *(long *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = lVar11 + uVar14 * 0x130;
    *(long *)(param_1 + 0x50) = lVar17;
    *(long *)(param_1 + 0x58) = lVar10;
    puVar8 = PTR_DAT_043794a8;
    puVar7 = PTR_DAT_043794a0;
    puVar6 = PTR_DAT_04379498;
    while (puVar18 != puVar16) {
      pcVar12 = (code *)puVar18[-0x11];
      if (pcVar12 != (code *)0x0) {
        puVar18[-0x10] = 0;
        puVar18[-0xf] = 0;
        puVar18[-0x12] = 0;
        puVar18[-0x11] = 0;
        (*pcVar12)(puVar18 + -0xe);
      }
      pcVar12 = (code *)puVar18[-0x21];
      puVar20 = puVar18 + -0x26;
      if (pcVar12 != (code *)0x0) {
        puVar18[-0x20] = 0;
        puVar18[-0x1f] = 0;
        puVar18[-0x21] = 0;
        puVar18[-0x22] = 0;
        (*pcVar12)(puVar18 + -0x1e);
      }
      puVar18 = (undefined8 *)puVar18[-0x24];
      if (puVar18 != (undefined8 *)0x0) {
        piVar3 = (int *)(puVar18 + 1);
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
          puVar18[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_68 = *puVar18;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
      puVar19 = (undefined8 *)*puVar20;
      puVar18 = puVar20;
      if (puVar19 != (undefined8 *)0x0) {
        piVar3 = (int *)(puVar19 + 1);
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
          puVar19[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_68 = *puVar19;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
    }
    if (puVar16 != (undefined8 *)0x0) {
      plVar15 = (long *)*puVar1;
      lVar21 = lVar21 - (long)puVar16;
      uVar14 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar14 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar15,puVar16,lVar21,0x10);
          goto LAB_0184d16c;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,puVar16,lVar21,0x10);
    }
  }
  else {
    FUN_0184e738(puVar1,lVar10,param_2);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 0x130;
  }
LAB_0184d16c:
  *(undefined8 *)(param_1 + 0x98) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x8c));
  return;
}


