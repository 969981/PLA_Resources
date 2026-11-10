/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019ea274; name: FUN_019ea274
 */


undefined8 FUN_019ea274(long param_1,long *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long *local_68;
  long *local_58;
  
  lVar12 = nn::os::GetCurrentThread();
  plVar16 = (long *)(param_1 + 0x240);
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x234));
        while (*plVar16 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_019ea2e4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_019ea2e4:
  FUN_00cf6d78(&local_68,param_2);
  if (local_68 == (long *)0x0) {
    uVar15 = 0;
    goto LAB_019ea3cc;
  }
  plVar16 = *(long **)(param_1 + 0x200);
  plVar13 = *(long **)(param_1 + 0x208);
  if (plVar16 == plVar13) {
LAB_019ea370:
    uVar17 = (long)plVar13 - (long)plVar16 >> 4;
    if (0x7f < uVar17) goto LAB_019ea660;
    if (*(long **)(param_1 + 0x210) == plVar13) {
      uVar14 = (long)plVar13 - (long)plVar16 >> 3;
      if (uVar14 < uVar17 + 1) {
        uVar14 = uVar17 + 1;
      }
      if (uVar14 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = (**(code **)(**(long **)(param_1 + 0x218) + 0x10))
                           (*(long **)(param_1 + 0x218),uVar14 << 4,8);
        if (lVar12 == 0) {
          (**(code **)(**(long **)(param_1 + 0x218) + 0xb8))();
        }
      }
      puVar20 = (undefined8 *)(lVar12 + uVar17 * 0x10);
      *puVar20 = 0;
      puVar20[1] = 0;
      FUN_00b63974(puVar20,param_2);
      plVar16 = *(long **)(param_1 + 0x200);
      plVar13 = *(long **)(param_1 + 0x208);
      if (plVar13 == plVar16) {
        puVar18 = puVar20;
        plVar13 = plVar16;
      }
      else {
        puVar18 = puVar20 + -2;
        *puVar18 = 0;
        puVar20[-1] = 0;
        FUN_00b63974(puVar18,plVar13 + -2);
        if (plVar13 + -2 != plVar16) {
          puVar9 = puVar20 + -4;
          do {
            puVar18 = puVar9;
            *puVar18 = 0;
            puVar18[1] = 0;
            FUN_00b63974(puVar18,plVar13 + -4);
            plVar13 = plVar13 + -2;
            puVar9 = puVar18 + -2;
          } while (plVar16 + 2 != plVar13);
        }
        plVar16 = *(long **)(param_1 + 0x200);
        plVar13 = *(long **)(param_1 + 0x208);
      }
      lVar19 = *(long *)(param_1 + 0x210);
      *(undefined8 **)(param_1 + 0x200) = puVar18;
      *(undefined8 **)(param_1 + 0x208) = puVar20 + 2;
      *(ulong *)(param_1 + 0x210) = lVar12 + uVar14 * 0x10;
      puVar8 = PTR_DAT_043794a8;
      puVar7 = PTR_DAT_043794a0;
      puVar6 = PTR_DAT_04379498;
      if (plVar13 != plVar16) {
        plVar13 = plVar13 + -2;
        puVar20 = (undefined8 *)*plVar13;
        puVar5 = PTR_LAB_04379590;
        puVar10 = PTR_LAB_04379590;
        if (puVar20 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar20 + 1);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          puVar5 = PTR_LAB_04379590;
          puVar10 = PTR_LAB_04379590;
          if (iVar11 + -1 == 0) {
            puVar20[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_58 = (long *)*puVar20;
            FUN_02a44274(lVar12 + 0xd8,&local_58);
            puVar5 = PTR_LAB_04379590;
            puVar10 = PTR_LAB_04379590;
          }
        }
        while( true ) {
          PTR_LAB_04379590 = puVar10;
          puVar10 = PTR_LAB_04379590;
          PTR_LAB_04379590 = puVar5;
          if (plVar13 == plVar16) break;
          plVar13 = plVar13 + -2;
          puVar20 = (undefined8 *)*plVar13;
          if (puVar20 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar20 + 1);
            do {
              iVar11 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            puVar5 = PTR_LAB_04379590;
            if (iVar11 + -1 == 0) {
              puVar20[2] = 0;
              if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                FUN_00100250(puVar10,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
              }
              lVar12 = *(long *)puVar7;
              *(long *)puVar8 = lVar12;
              local_58 = (long *)*puVar20;
              FUN_02a44274(lVar12 + 0xd8,&local_58);
              puVar5 = PTR_LAB_04379590;
            }
          }
        }
      }
      if (plVar16 != (long *)0x0) {
        plVar13 = *(long **)(param_1 + 0x218);
        lVar19 = lVar19 - (long)plVar16;
        uVar17 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar17 & 1) != 0) {
          lVar12 = tpidr_el0;
          if (*(char *)(lVar12 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar12 + 0x38d488) = 1;
            *(undefined8 *)(lVar12 + 0x38d478) = 0;
            *(undefined8 *)(lVar12 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar12 + 0x38d480)) {
            FUN_02bcc824(plVar13,plVar16,lVar19,8);
            goto LAB_019ea3a4;
          }
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar16,lVar19,8);
      }
    }
    else {
      *plVar13 = 0;
      plVar13[1] = 0;
      FUN_00b63974(plVar13,param_2);
      *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x208) + 0x10;
    }
LAB_019ea3a4:
    uVar15 = 1;
  }
  else {
    bVar4 = false;
    do {
      FUN_00cf6d78(&local_58,plVar16);
      if (local_58 != (long *)0x0) {
        lVar19 = *plVar16;
        lVar21 = *param_2;
        bVar4 = (bool)(bVar4 | lVar19 == lVar21);
        lVar12 = local_58[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
        if (lVar19 == lVar21) goto LAB_019ea660;
      }
      plVar13 = *(long **)(param_1 + 0x208);
      plVar16 = plVar16 + 2;
    } while (plVar16 != plVar13);
    if (!bVar4) {
      plVar16 = *(long **)(param_1 + 0x200);
      goto LAB_019ea370;
    }
LAB_019ea660:
    uVar15 = 0;
  }
  if (local_68 != (long *)0x0) {
    lVar12 = local_68[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
LAB_019ea3cc:
  *(undefined8 *)(param_1 + 0x240) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x234));
  return uVar15;
}


