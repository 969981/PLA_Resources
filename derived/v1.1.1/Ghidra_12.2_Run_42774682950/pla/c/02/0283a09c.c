/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283a09c; name: FUN_0283a09c
 */


void FUN_0283a09c(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  
  *param_1 = &PTR_FUN_0426f598;
  param_1[9] = &PTR_LAB_0426f5d0;
  if (*(int *)(param_1 + 0x3e) == -1) {
    lVar11 = param_1[0x1f];
    pbVar5 = PTR_DAT_0437b228;
    puVar6 = (undefined8 *)PTR_DAT_0437b230;
    puVar7 = (undefined8 *)PTR_DAT_0437b238;
  }
  else {
    if (((*PTR_DAT_0437b228 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b228);
    }
    uVar9 = *(undefined8 *)PTR_DAT_0437b230;
    *(undefined8 *)PTR_DAT_0437b238 = uVar9;
    FUN_010b7d48(uVar9,*(undefined4 *)(param_1 + 0x3e));
    lVar11 = param_1[0x1f];
    pbVar5 = PTR_DAT_0437b228;
    puVar6 = (undefined8 *)PTR_DAT_0437b230;
    puVar7 = (undefined8 *)PTR_DAT_0437b238;
  }
  PTR_DAT_0437b228 = pbVar5;
  PTR_DAT_0437b230 = (undefined *)puVar6;
  PTR_DAT_0437b238 = (undefined *)puVar7;
  if (lVar11 != 0) {
    lVar15 = param_1[0x1e];
    lVar11 = lVar15 + lVar11 * 0x28;
    do {
      plVar13 = *(long **)(lVar15 + 0x18);
      if (plVar13 == (long *)0x0) {
        plVar14 = *(long **)(lVar15 + 0x20);
      }
      else {
        (**(code **)(*plVar13 + 0x18))(plVar13);
        plVar14 = *(long **)(lVar15 + 0x20);
      }
      if (plVar14 != (long *)0x0) {
        lVar12 = plVar14[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_0283a3e4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar12 = plVar14[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0283a3e4;
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (((*pbVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar5), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar5);
      }
      uVar9 = *puVar6;
      *puVar7 = uVar9;
      FUN_010b7dc4(uVar9,plVar14);
      if (plVar14 != (long *)0x0) {
        lVar12 = plVar14[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
        lVar12 = plVar14[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      lVar15 = lVar15 + 0x28;
    } while (lVar15 != lVar11);
  }
  plVar14 = param_1 + 0x13d;
  plVar13 = (long *)*plVar14;
  if (plVar13 != (long *)0x0) goto LAB_0283a224;
LAB_0283a214:
  if (plVar14 != param_1 + 0x3f) {
    while( true ) {
      plVar14 = plVar14 + -2;
      plVar13 = (long *)*plVar14;
      if (plVar13 == (long *)0x0) break;
LAB_0283a224:
      plVar2 = plVar13 + 10;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != 0) break;
      (**(code **)(*plVar13 + 0x10))();
      if (plVar14 == param_1 + 0x3f) goto LAB_0283a250;
    }
    goto LAB_0283a214;
  }
LAB_0283a250:
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 0x20))();
  }
  plVar13 = (long *)param_1[0x39];
  if (plVar13 == (long *)0x0) {
LAB_0283a284:
    plVar13 = (long *)param_1[0x38];
    if (plVar13 == (long *)0x0) goto LAB_0283a2a4;
LAB_0283a28c:
    plVar14 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != 0) goto LAB_0283a2a4;
    (**(code **)(*plVar13 + 0x10))();
    plVar13 = (long *)param_1[0x37];
    if (plVar13 != (long *)0x0) goto LAB_0283a2ac;
LAB_0283a2c8:
    lVar11 = param_1[0x35];
  }
  else {
    plVar14 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != 0) goto LAB_0283a284;
    (**(code **)(*plVar13 + 0x10))();
    plVar13 = (long *)param_1[0x38];
    if (plVar13 != (long *)0x0) goto LAB_0283a28c;
LAB_0283a2a4:
    plVar13 = (long *)param_1[0x37];
    if (plVar13 == (long *)0x0) goto LAB_0283a2c8;
LAB_0283a2ac:
    lVar11 = plVar13[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 != 0) goto LAB_0283a2c8;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))();
    lVar11 = param_1[0x35];
  }
  if (lVar11 != 0) {
    plVar13 = *(long **)(param_1[0x34] + 0x20);
    lVar15 = param_1[0x34];
    while( true ) {
      if (plVar13 != (long *)0x0) {
        lVar12 = plVar13[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))();
        }
      }
      lVar11 = lVar11 + -1;
      if (*(long **)(lVar15 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar15 + 0x18) + 0x20))();
      }
      if (lVar11 == 0) break;
      plVar13 = *(long **)(lVar15 + 0x50);
      lVar15 = lVar15 + 0x30;
    }
  }
  if (param_1[0x36] == 0) {
LAB_0283a50c:
    lVar11 = param_1[0x2a];
  }
  else {
    plVar13 = (long *)param_1[0x30];
    lVar11 = param_1[0x36] * 0x30;
    uVar9 = param_1[0x34];
    uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar10 & 1) == 0) {
LAB_0283a4f0:
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar9,lVar11,8);
      goto LAB_0283a50c;
    }
    lVar15 = tpidr_el0;
    if (*(char *)(lVar15 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar15 + 0x38d488) = 1;
      *(undefined8 *)(lVar15 + 0x38d478) = 0;
      *(undefined8 *)(lVar15 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_0283a4f0;
    FUN_02bcc824(plVar13,uVar9,lVar11,8);
    lVar11 = param_1[0x2a];
  }
  if (lVar11 != 0) {
    plVar13 = (long *)(param_1[0x29] + 0x18);
    do {
      lVar11 = lVar11 + -1;
      if ((long *)*plVar13 != (long *)0x0) {
        (**(code **)(*(long *)*plVar13 + 0x20))();
      }
      plVar13 = plVar13 + 6;
    } while (lVar11 != 0);
  }
  if (param_1[0x2b] == 0) {
LAB_0283a600:
    lVar11 = param_1[0x1f];
  }
  else {
    plVar13 = (long *)param_1[0x25];
    lVar11 = param_1[0x2b] * 0x30;
    uVar9 = param_1[0x29];
    uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar10 & 1) == 0) {
LAB_0283a5e4:
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar9,lVar11,8);
      goto LAB_0283a600;
    }
    lVar15 = tpidr_el0;
    if (*(char *)(lVar15 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar15 + 0x38d488) = 1;
      *(undefined8 *)(lVar15 + 0x38d478) = 0;
      *(undefined8 *)(lVar15 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_0283a5e4;
    FUN_02bcc824(plVar13,uVar9,lVar11,8);
    lVar11 = param_1[0x1f];
  }
  if (lVar11 != 0) {
    lVar15 = param_1[0x1e];
    plVar13 = *(long **)(lVar15 + 0x20);
    if (plVar13 == (long *)0x0) {
LAB_0283a630:
      plVar13 = *(long **)(lVar15 + 0x18);
    }
    else {
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 != 0) goto LAB_0283a630;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
      plVar13 = *(long **)(lVar15 + 0x18);
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    if (lVar11 != 1) {
      plVar13 = *(long **)(lVar15 + 0x48);
      if (plVar13 != (long *)0x0) {
        lVar12 = plVar13[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))();
        }
      }
      lVar11 = lVar11 + -2;
      if (*(long **)(lVar15 + 0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar15 + 0x40) + 0x20))();
      }
      if (lVar11 != 0) {
        lVar15 = lVar15 + 0x50;
        do {
          plVar13 = *(long **)(lVar15 + 0x20);
          if (plVar13 != (long *)0x0) {
            lVar12 = plVar13[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))();
            }
          }
          lVar11 = lVar11 + -1;
          if (*(long **)(lVar15 + 0x18) != (long *)0x0) {
            (**(code **)(**(long **)(lVar15 + 0x18) + 0x20))();
          }
          lVar15 = lVar15 + 0x28;
        } while (lVar11 != 0);
      }
    }
  }
  if (param_1[0x20] == 0) {
LAB_0283a718:
    lVar11 = param_1[0x14];
  }
  else {
    plVar13 = (long *)param_1[0x1a];
    lVar11 = param_1[0x20] * 0x28;
    uVar9 = param_1[0x1e];
    uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar10 & 1) == 0) {
LAB_0283a6fc:
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar9,lVar11,8);
      goto LAB_0283a718;
    }
    lVar15 = tpidr_el0;
    if (*(char *)(lVar15 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar15 + 0x38d488) = 1;
      *(undefined8 *)(lVar15 + 0x38d478) = 0;
      *(undefined8 *)(lVar15 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_0283a6fc;
    FUN_02bcc824(plVar13,uVar9,lVar11,8);
    lVar11 = param_1[0x14];
  }
  if (lVar11 == 0) goto LAB_0283a79c;
  lVar15 = param_1[0x13];
  plVar13 = *(long **)(lVar15 + 0x20);
  if (plVar13 == (long *)0x0) {
LAB_0283a744:
    plVar13 = *(long **)(lVar15 + 0x18);
  }
  else {
    plVar14 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != 0) goto LAB_0283a744;
    (**(code **)(*plVar13 + 0x10))();
    plVar13 = *(long **)(lVar15 + 0x18);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  if (lVar11 != 1) {
    plVar13 = *(long **)(lVar15 + 0x50);
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 10;
      do {
        iVar8 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    lVar11 = lVar11 + -2;
    if (*(long **)(lVar15 + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(lVar15 + 0x48) + 0x20))();
    }
    if (lVar11 != 0) {
      lVar15 = lVar15 + 0x60;
      do {
        plVar13 = *(long **)(lVar15 + 0x20);
        if (plVar13 != (long *)0x0) {
          plVar14 = plVar13 + 10;
          do {
            iVar8 = (int)*plVar14 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *(int *)plVar14 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        lVar11 = lVar11 + -1;
        if (*(long **)(lVar15 + 0x18) != (long *)0x0) {
          (**(code **)(**(long **)(lVar15 + 0x18) + 0x20))();
        }
        lVar15 = lVar15 + 0x30;
      } while (lVar11 != 0);
    }
  }
LAB_0283a79c:
  if (param_1[0x15] == 0) {
    return;
  }
  plVar13 = (long *)param_1[0xf];
  uVar9 = param_1[0x13];
  lVar11 = param_1[0x15] * 0x30;
  uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  if ((uVar10 & 1) != 0) {
    lVar15 = tpidr_el0;
    if (*(char *)(lVar15 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar15 + 0x38d488) = 1;
      *(undefined8 *)(lVar15 + 0x38d478) = 0;
      *(undefined8 *)(lVar15 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar15 + 0x38d480)) {
      FUN_02bcc824(plVar13,uVar9,lVar11,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0283a83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 0x18))(plVar13,uVar9,lVar11,8);
  return;
}


