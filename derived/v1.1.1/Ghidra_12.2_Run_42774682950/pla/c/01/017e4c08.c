/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e4c08; name: FUN_017e4c08
 */


void FUN_017e4c08(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 400);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x184));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_017e4c70;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_017e4c70:
  for (plVar13 = *(long **)(param_1 + 0xc0); (long *)(param_1 + 0xb8) != plVar13;
      plVar13 = (long *)plVar13[1]) {
    lVar8 = plVar13[2];
    if (*param_2 == 0) {
      if (*(long *)(lVar8 + 0x68) == 0) {
LAB_017e4cfc:
        if (*(int *)(plVar13[2] + 0x7c) == 0) {
          *(long *)(*plVar13 + 8) = plVar13[1];
          *(long *)plVar13[1] = *plVar13;
          *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + -1;
          plVar9 = (long *)plVar13[2];
          if (plVar9 != (long *)0x0) {
            lVar8 = plVar9[0xb];
            piVar1 = (int *)(lVar8 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar7 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))();
            }
          }
          plVar9 = *(long **)(param_1 + 0xd0);
          uVar10 = (**(code **)(*plVar9 + 0xc0))(plVar9);
          if ((uVar10 & 1) != 0) {
            lVar8 = tpidr_el0;
            if (*(char *)(lVar8 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar8 + 0x38d488) = 1;
              *(undefined8 *)(lVar8 + 0x38d478) = 0;
              *(undefined8 *)(lVar8 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar8 + 0x38d480)) {
              FUN_02bcc824(plVar9,plVar13,0x18,8);
              break;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar13,0x18,8);
          break;
        }
        *(undefined4 *)(plVar13[2] + 0x7c) = 4;
        local_58 = (long *)0x0;
        uStack_50 = 0;
        FUN_009ab200(&local_58,*(long *)(plVar13[2] + 0x68) + 0x340);
        plVar9 = local_58;
        if (local_58 == (long *)0x0) goto LAB_017e4d30;
        if (*(int *)((long)local_58 + 0xc) == 0) goto LAB_017e5234;
        piVar1 = (int *)((long)local_58 + 0xc);
        iVar7 = *(int *)((long)local_58 + 0xc);
        goto LAB_017e4ebc;
      }
    }
    else {
      FUN_009b3e90(&local_58);
      plVar9 = local_58;
      plVar11 = *(long **)(lVar8 + 0x68);
      if (local_58 != (long *)0x0) {
        lVar8 = local_58[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))(local_58);
        }
      }
      if (plVar11 == plVar9) goto LAB_017e4cfc;
    }
  }
  goto LAB_017e4df8;
LAB_017e4ebc:
  uVar10 = FUN_009b4090(plVar9[2]);
  if ((uVar10 & 1) == 0) goto LAB_017e5234;
  iVar3 = *piVar1;
  if (iVar3 == iVar7) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar7 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
      lVar8 = plVar9[3];
      plVar9 = (long *)0x0;
      plVar11 = local_58;
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + -0x50);
      }
      goto joined_r0x017e4ef4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar7 = iVar3;
  if (iVar3 == 0) goto LAB_017e5234;
  goto LAB_017e4ebc;
LAB_017e5234:
  plVar9 = (long *)0x0;
  plVar11 = local_58;
joined_r0x017e4ef4:
  local_58 = plVar11;
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 1;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      plVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_48 = *plVar11;
      FUN_02a44274(lVar8 + 0xd8,&local_48);
    }
  }
  if (plVar9 != (long *)0x0) {
    FUN_009c69bc(&local_58,plVar9);
    lVar8 = FUN_009aff90(local_58 + 0x1e,&local_48);
    if (local_58 != (long *)0x0) {
      lVar12 = local_58[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    bVar6 = false;
    if (lVar8 != 0) {
      FUN_01836814(lVar8,0);
      *(long *)(*plVar13 + 8) = plVar13[1];
      *(long *)plVar13[1] = *plVar13;
      *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + -1;
      plVar11 = (long *)plVar13[2];
      if (plVar11 != (long *)0x0) {
        lVar8 = plVar11[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))();
        }
      }
      plVar11 = *(long **)(param_1 + 0xd0);
      uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar10 & 1) == 0) {
LAB_017e5044:
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar13,0x18,8);
      }
      else {
        lVar8 = tpidr_el0;
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_017e5044;
        FUN_02bcc824(plVar11,plVar13,0x18,8);
      }
      uVar14 = *(undefined8 *)(param_1 + 0xf8);
      (**(code **)(*plVar9 + 0x10))(&local_58,plVar9);
      local_68 = (long *)0x0;
      uStack_60 = 0;
      FUN_017dc294(&local_68,&local_58);
      plVar11 = local_58;
      if (local_58 != (long *)0x0) {
        plVar2 = local_58 + 1;
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          local_58[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_48 = *plVar11;
          FUN_02a44274(lVar8 + 0xd8,&local_48);
        }
      }
      FUN_017d5558(uVar14,&local_68);
      plVar11 = local_68;
      if (local_68 != (long *)0x0) {
        plVar2 = local_68 + 1;
        do {
          lVar8 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = (int)lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar8 == 1) {
          local_68[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_58 = (long *)*plVar11;
          FUN_02a44274(lVar8 + 0xd8,&local_58);
        }
      }
      bVar6 = true;
    }
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (bVar6) goto LAB_017e4df8;
  }
LAB_017e4d30:
  *(undefined1 *)(plVar13[2] + 0x70) = 1;
LAB_017e4df8:
  *(undefined8 *)(param_1 + 400) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x184));
  return;
}


