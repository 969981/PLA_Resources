/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d09400; name: FUN_00d09400
 */


void FUN_00d09400(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *local_80;
  long local_78;
  long *local_70;
  long local_68;
  long *local_60;
  long *local_58;
  
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return;
  }
  uVar6 = FUN_00938764(param_1 + 0x68,1,param_1 + 0xb0,0,*(undefined8 *)(param_1 + 8),0);
  plVar12 = (long *)0x0;
  if (((uVar6 & 1) != 0) && (plVar12 = *(long **)(param_1 + 0x90), plVar12 != (long *)0x0)) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_00d099b4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (((*PTR_DAT_04379d48 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d48);
  }
  uVar7 = *(undefined8 *)PTR_DAT_04379d50;
  *(undefined8 *)PTR_DAT_04379d58 = uVar7;
  FUN_00b57040(&local_80,uVar7,plVar12[1]);
  local_70 = local_80;
  local_78 = param_1;
  if (local_80 != (long *)0x0) {
    lVar13 = local_80[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_00d099b4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = (long *)0x0;
  if (local_80 != (long *)0x0) {
    plVar14 = local_80 + 0xe;
  }
  if ((*(byte *)((long)plVar12 + 0x7a) & 1) != 0) goto joined_r0x00d09534;
  if ((*(byte *)((long)plVar12 + 0x79) & 1) != 0) {
    FUN_00d0a6ac(&local_78);
    goto joined_r0x00d09534;
  }
  lVar13 = nn::os::GetCurrentThread();
  plVar2 = plVar12 + 0x12;
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar12 + 0x84));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d095c8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d095c8:
  if ((*(byte *)((long)plVar12 + 0x79) & 1) == 0) {
    local_68 = local_78;
    local_60 = local_70;
    if (local_70 != (long *)0x0) {
      lVar13 = local_70[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_00d099b4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar6 = plVar12[0x1b];
    local_58 = plVar14;
    if (uVar6 < (ulong)plVar12[0x1c]) {
      FUN_00d0a8b8(plVar12[0x1d],uVar6,&local_68);
      plVar12[0x1b] = plVar12[0x1b] + 0x90;
    }
    else {
      uVar11 = plVar12[0x1e];
      lVar13 = (long)(uVar6 - plVar12[0x1a]) >> 4;
      if (0x7ffffffffffffffe < uVar11) {
        uVar11 = 0x7fffffffffffffff;
      }
      uVar6 = lVar13 * -0x71c71c71c71c71c7 + 1;
      if (uVar11 < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = plVar12[0x1c] - plVar12[0x1a] >> 4;
      uVar10 = lVar8 * 0x1c71c71c71c71c72;
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      plVar14 = plVar12 + 0x1d;
      if ((ulong)(lVar8 * -0x71c71c71c71c71c7) < uVar11 >> 1) {
        uVar11 = uVar6;
      }
      if (uVar11 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar11 * 0x90,0x10);
        if (lVar8 == 0) {
          (**(code **)(*(long *)*plVar14 + 0xb8))();
        }
      }
      lVar17 = lVar8 + lVar13 * 0x10;
      FUN_00d0a8b8(plVar12[0x1d],lVar17,&local_68);
      lVar16 = plVar12[0x1a];
      lVar15 = plVar12[0x1b];
      lVar13 = lVar17 + 0x90;
      if (lVar15 == lVar16) {
        lVar15 = lVar16;
      }
      else {
        do {
          lVar17 = lVar17 + -0x90;
          lVar15 = lVar15 + -0x90;
          FUN_00b57d94(plVar14,lVar17,lVar15);
        } while (lVar16 != lVar15);
        lVar16 = plVar12[0x1a];
        lVar15 = plVar12[0x1b];
      }
      plVar12[0x1a] = lVar17;
      plVar12[0x1b] = lVar13;
      lVar13 = plVar12[0x1c];
      plVar12[0x1c] = lVar8 + uVar11 * 0x90;
      while (lVar8 = lVar15, lVar8 != lVar16) {
        pcVar9 = *(code **)(lVar8 + -0x88);
        lVar15 = lVar8 + -0x90;
        if (pcVar9 != (code *)0x0) {
          *(undefined8 *)(lVar8 + -0x80) = 0;
          *(undefined8 *)(lVar8 + -0x78) = 0;
          *(undefined8 *)(lVar8 + -0x90) = 0;
          *(undefined8 *)(lVar8 + -0x88) = 0;
          (*pcVar9)(lVar8 + -0x70);
        }
      }
      if (lVar16 != 0) {
        plVar14 = (long *)*plVar14;
        uVar6 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar6 & 1) != 0) {
          lVar8 = tpidr_el0;
          if (*(char *)(lVar8 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar8 + 0x38d488) = 1;
            *(undefined8 *)(lVar8 + 0x38d478) = 0;
            *(undefined8 *)(lVar8 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar8 + 0x38d480)) {
            FUN_02bcc824(plVar14,lVar16,lVar13 - lVar16,0x10);
            goto joined_r0x00d09958;
          }
        }
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,lVar13 - lVar16,0x10);
      }
    }
joined_r0x00d09958:
    if (local_60 != (long *)0x0) {
      lVar13 = local_60[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
  }
  else {
    FUN_00d0a6ac(&local_78);
  }
  plVar12[0x12] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar12 + 0x84));
joined_r0x00d09534:
  if (local_70 != (long *)0x0) {
    lVar13 = local_70[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if (local_80 != (long *)0x0) {
    lVar13 = local_80[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  lVar13 = plVar12[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  *(undefined1 *)(param_1 + 0xe0) = 1;
  return;
}


