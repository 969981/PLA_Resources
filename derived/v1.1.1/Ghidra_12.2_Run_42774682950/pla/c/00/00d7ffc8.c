/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7ffc8; name: FUN_00d7ffc8
 */


void FUN_00d7ffc8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *local_78;
  long *local_70;
  long *local_68;
  
  local_68 = (long *)0x0;
  FUN_009c69bc(&local_78,*param_2);
  plVar14 = (long *)*param_2;
  local_70 = local_78;
  if (plVar14 == (long *)0x0) {
  }
  else {
    lVar7 = plVar14[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar9;
    }
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (local_68 != (long *)0x0) {
      lVar7 = local_68[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        lVar7 = *local_68;
        local_68 = plVar14;
        (**(code **)(lVar7 + 0x20))();
        plVar14 = local_68;
      }
    }
  }
  local_68 = plVar14;
  plVar14 = (long *)(param_1 + 0x220);
  lVar15 = *plVar14;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar15) {
    bVar6 = false;
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + 0x210;
    lVar15 = nn::os::GetCurrentThread();
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x214));
          while (*plVar14 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *plVar14 = lVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00d80070;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00d80070:
    bVar6 = true;
  }
  lVar15 = *(long *)(param_1 + 0x230);
  puVar1 = (undefined8 *)(param_1 + 0x240);
  if (lVar15 != *(long *)(param_1 + 0x238)) {
    FUN_00d830a8(puVar1,lVar15,&local_70);
    *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0x230) + 0x10;
    goto joined_r0x00d803d0;
  }
  uVar13 = *(ulong *)(param_1 + 0x248);
  lVar15 = lVar15 - *(long *)(param_1 + 0x228) >> 4;
  uVar10 = lVar15 + 1;
  if (0x7ffffffffffffffe < uVar13) {
    uVar13 = 0x7fffffffffffffff;
  }
  if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar11 = *(long *)(param_1 + 0x238) - *(long *)(param_1 + 0x228);
  if ((ulong)(lVar11 >> 4) < uVar13 >> 1) {
    uVar12 = lVar11 >> 3;
    uVar13 = uVar10;
    if (uVar10 <= uVar12) {
      uVar13 = uVar12;
    }
  }
  if (uVar13 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar13 << 4,8);
    if (lVar11 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xb8))();
    }
  }
  lVar16 = lVar11 + lVar15 * 0x10;
  FUN_00d830a8(puVar1,lVar16,&local_70);
  plVar14 = *(long **)(param_1 + 0x228);
  lVar15 = lVar16 + 0x10;
  plVar17 = *(long **)(param_1 + 0x230);
  if (plVar17 == plVar14) {
    plVar17 = plVar14;
  }
  else {
    lVar16 = lVar16 + -0x10;
    FUN_00d830a8(puVar1,lVar16,plVar17 + -2);
    if (plVar17 + -2 != plVar14) {
      do {
        lVar16 = lVar16 + -0x10;
        FUN_00d830a8(puVar1,lVar16,plVar17 + -4);
        plVar17 = plVar17 + -2;
      } while (plVar14 + 2 != plVar17);
    }
    plVar14 = *(long **)(param_1 + 0x228);
    plVar17 = *(long **)(param_1 + 0x230);
  }
  *(long *)(param_1 + 0x228) = lVar16;
  lVar16 = *(long *)(param_1 + 0x238);
  *(long *)(param_1 + 0x230) = lVar15;
  *(ulong *)(param_1 + 0x238) = lVar11 + uVar13 * 0x10;
  if (plVar17 != plVar14) {
    plVar8 = (long *)plVar17[-1];
    plVar17 = plVar17 + -2;
    if (plVar8 == (long *)0x0) {
LAB_00d80160:
      plVar8 = (long *)*plVar17;
    }
    else {
      lVar15 = plVar8[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 != 0) goto LAB_00d80160;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
      plVar8 = (long *)*plVar17;
    }
    if (plVar8 != (long *)0x0) {
      lVar15 = plVar8[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) goto LAB_00d801d8;
    }
LAB_00d80184:
    if (plVar17 != plVar14) {
      do {
        plVar8 = (long *)plVar17[-1];
        plVar17 = plVar17 + -2;
        if (plVar8 == (long *)0x0) {
LAB_00d801b4:
          plVar8 = (long *)*plVar17;
        }
        else {
          lVar15 = plVar8[0xb];
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            iVar3 = *piVar2;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 != 0) goto LAB_00d801b4;
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
          plVar8 = (long *)*plVar17;
        }
        if (plVar8 == (long *)0x0) goto LAB_00d80184;
        lVar15 = plVar8[0xb];
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          iVar3 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 != 0) goto LAB_00d80184;
LAB_00d801d8:
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
        if (plVar17 == plVar14) break;
      } while( true );
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar17 = (long *)*puVar1;
    lVar16 = lVar16 - (long)plVar14;
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      lVar15 = tpidr_el0;
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar15 + 0x38d480)) {
        FUN_02bcc824(plVar17,plVar14,lVar16,8);
        goto joined_r0x00d803d0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,plVar14,lVar16,8);
  }
joined_r0x00d803d0:
  if (bVar6) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 4));
  }
  if (local_68 != (long *)0x0) {
    lVar7 = local_68[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    lVar7 = local_70[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


