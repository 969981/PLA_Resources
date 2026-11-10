/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02839030; name: FUN_02839030
 */


/* WARNING: Removing unreachable block (ram,0x02839f18) */

void FUN_02839030(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  long local_70;
  undefined1 auStack_68 [8];
  
  puVar4 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar4 = PTR_DAT_04379520;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_70 = param_2;
  if ((*puVar4 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar4 = PTR_DAT_04379528;
    if (iVar5 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar7 = local_70;
  if (lVar6 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar12 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_0426f598;
  param_1[1] = lVar12;
  param_1[9] = (long)&PTR_LAB_0426f5d0;
  plVar10 = param_1 + 0xf;
  *plVar10 = local_70;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xd] = 0;
  param_1[0xb] = local_70;
  param_1[0xc] = 0x555555555555555;
  param_1[0x10] = 0x555555555555555;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = param_1[0xe];
  param_1[0x13] = 0;
  lVar12 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,0x600,8);
  lVar6 = lVar12;
  if (lVar12 == 0) {
    (**(code **)(*(long *)*plVar10 + 0xb8))();
    lVar13 = param_1[0x13];
    lVar15 = param_1[0x14];
    if (lVar15 != 0) goto LAB_0283911c;
  }
  else {
    lVar13 = param_1[0x13];
    lVar15 = param_1[0x14];
    if (lVar15 != 0) {
LAB_0283911c:
      if (lVar13 != 0) {
        lVar16 = lVar15 * 0x30;
        lVar14 = lVar13;
        do {
          FUN_0283dafc(plVar10,lVar6,lVar14);
          lVar14 = lVar14 + 0x30;
          lVar6 = lVar6 + 0x30;
          lVar16 = lVar16 + -0x30;
        } while (lVar16 != 0);
      }
    }
  }
  if (lVar13 != 0) {
    lVar14 = param_1[0x14];
    if (lVar14 != lVar15) {
      lVar16 = lVar13 + lVar15 * 0x30;
      lVar15 = lVar15 * -0x30 + lVar14 * 0x30;
      do {
        FUN_0283dafc(plVar10,lVar6,lVar16);
        lVar16 = lVar16 + 0x30;
        lVar6 = lVar6 + 0x30;
        lVar15 = lVar15 + -0x30;
      } while (lVar15 != 0);
      lVar14 = param_1[0x14];
    }
    if (lVar14 != 0) {
      plVar10 = *(long **)(lVar13 + 0x20);
      if (plVar10 == (long *)0x0) {
LAB_02839298:
        plVar10 = *(long **)(lVar13 + 0x18);
      }
      else {
        plVar9 = plVar10 + 10;
        do {
          iVar5 = (int)*plVar9 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 != 0) goto LAB_02839298;
        (**(code **)(*plVar10 + 0x10))();
        plVar10 = *(long **)(lVar13 + 0x18);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      if (lVar14 != 1) {
        plVar10 = *(long **)(lVar13 + 0x50);
        if (plVar10 != (long *)0x0) {
          plVar9 = plVar10 + 10;
          do {
            iVar5 = (int)*plVar9 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
        }
        lVar14 = lVar14 + -2;
        if (*(long **)(lVar13 + 0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar13 + 0x48) + 0x20))();
        }
        if (lVar14 != 0) {
          lVar13 = lVar13 + 0x60;
          do {
            plVar10 = *(long **)(lVar13 + 0x20);
            if (plVar10 != (long *)0x0) {
              plVar9 = plVar10 + 10;
              do {
                iVar5 = (int)*plVar9 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *(int *)plVar9 = iVar5;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar5 == 0) {
                (**(code **)(*plVar10 + 0x10))();
              }
            }
            lVar14 = lVar14 + -1;
            if (*(long **)(lVar13 + 0x18) != (long *)0x0) {
              (**(code **)(**(long **)(lVar13 + 0x18) + 0x20))();
            }
            lVar13 = lVar13 + 0x30;
          } while (lVar14 != 0);
        }
      }
    }
    lVar13 = param_1[0x15];
    plVar10 = (long *)param_1[0xf];
    lVar15 = param_1[0x13];
    uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar11 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar15,lVar13 * 0x30,8);
        goto LAB_02839178;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,lVar13 * 0x30,8);
  }
LAB_02839178:
  plVar10 = param_1 + 0x1a;
  *plVar10 = lVar7;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x13] = lVar12;
  param_1[0x14] = (lVar6 - lVar12 >> 4) * -0x5555555555555555;
  param_1[0x15] = 0x20;
  param_1[0x16] = lVar7;
  param_1[0x17] = 0x666666666666666;
  param_1[0x18] = 0;
  param_1[0x1b] = 0x666666666666666;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_1[0x19];
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  lVar12 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,0x500,8);
  lVar6 = lVar12;
  if (lVar12 == 0) {
    (**(code **)(*(long *)*plVar10 + 0xb8))();
    lVar13 = param_1[0x1e];
    lVar15 = param_1[0x1f];
    if (lVar15 != 0) goto LAB_028391f0;
  }
  else {
    lVar13 = param_1[0x1e];
    lVar15 = param_1[0x1f];
    if (lVar15 != 0) {
LAB_028391f0:
      if (lVar13 != 0) {
        lVar16 = lVar15 * 0x28;
        lVar14 = lVar13;
        do {
          FUN_0283dbfc(plVar10,lVar6,lVar14);
          lVar14 = lVar14 + 0x28;
          lVar6 = lVar6 + 0x28;
          lVar16 = lVar16 + -0x28;
        } while (lVar16 != 0);
      }
    }
  }
  if (lVar13 != 0) {
    lVar14 = param_1[0x1f];
    if (lVar14 != lVar15) {
      lVar16 = lVar13 + lVar15 * 0x28;
      lVar15 = lVar15 * -0x28 + lVar14 * 0x28;
      do {
        FUN_0283dbfc(plVar10,lVar6,lVar16);
        lVar16 = lVar16 + 0x28;
        lVar6 = lVar6 + 0x28;
        lVar15 = lVar15 + -0x28;
      } while (lVar15 != 0);
      lVar14 = param_1[0x1f];
    }
    if (lVar14 != 0) {
      plVar10 = *(long **)(lVar13 + 0x20);
      if (plVar10 == (long *)0x0) {
LAB_028394bc:
        plVar10 = *(long **)(lVar13 + 0x18);
      }
      else {
        lVar15 = plVar10[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 != 0) goto LAB_028394bc;
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
        plVar10 = *(long **)(lVar13 + 0x18);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      if (lVar14 != 1) {
        plVar10 = *(long **)(lVar13 + 0x48);
        if (plVar10 != (long *)0x0) {
          lVar15 = plVar10[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar10 + 0x20))();
          }
        }
        lVar14 = lVar14 + -2;
        if (*(long **)(lVar13 + 0x40) != (long *)0x0) {
          (**(code **)(**(long **)(lVar13 + 0x40) + 0x20))();
        }
        if (lVar14 != 0) {
          lVar13 = lVar13 + 0x50;
          do {
            plVar10 = *(long **)(lVar13 + 0x20);
            if (plVar10 != (long *)0x0) {
              lVar15 = plVar10[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar5 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar5 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar5 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*plVar10 + 0x20))();
              }
            }
            lVar14 = lVar14 + -1;
            if (*(long **)(lVar13 + 0x18) != (long *)0x0) {
              (**(code **)(**(long **)(lVar13 + 0x18) + 0x20))();
            }
            lVar13 = lVar13 + 0x28;
          } while (lVar14 != 0);
        }
      }
    }
    lVar13 = param_1[0x20];
    plVar10 = (long *)param_1[0x1a];
    lVar15 = param_1[0x1e];
    uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar11 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar15,lVar13 * 0x28,8);
        goto LAB_0283939c;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,lVar13 * 0x28,8);
  }
LAB_0283939c:
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x22] = 0x555555555555555;
  param_1[0x23] = 0;
  param_1[0x20] = 0x20;
  param_1[0x21] = lVar7;
  param_1[0x2b] = 0;
  param_1[0x25] = lVar7;
  param_1[0x26] = 0x555555555555555;
  param_1[0x1e] = lVar12;
  param_1[0x1f] = (lVar6 - lVar12 >> 3) * -0x3333333333333333;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_1[0x24];
  plVar10 = param_1 + 0x25;
  lVar12 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,0x1800,8);
  lVar6 = lVar12;
  if (lVar12 == 0) {
    (**(code **)(*(long *)*plVar10 + 0xb8))();
    lVar13 = param_1[0x29];
    lVar15 = param_1[0x2a];
    if (lVar15 != 0) goto LAB_0283940c;
  }
  else {
    lVar13 = param_1[0x29];
    lVar15 = param_1[0x2a];
    if (lVar15 != 0) {
LAB_0283940c:
      if (lVar13 != 0) {
        lVar16 = lVar15 * 0x30;
        lVar14 = lVar13;
        do {
          FUN_0283dcf4(plVar10,lVar6,lVar14);
          lVar14 = lVar14 + 0x30;
          lVar6 = lVar6 + 0x30;
          lVar16 = lVar16 + -0x30;
        } while (lVar16 != 0);
      }
    }
  }
  if (lVar13 != 0) {
    lVar14 = param_1[0x2a];
    if (lVar14 != lVar15) {
      lVar16 = lVar13 + lVar15 * 0x30;
      lVar15 = lVar15 * -0x30 + lVar14 * 0x30;
      do {
        FUN_0283dcf4(plVar10,lVar6,lVar16);
        lVar16 = lVar16 + 0x30;
        lVar6 = lVar6 + 0x30;
        lVar15 = lVar15 + -0x30;
      } while (lVar15 != 0);
      lVar14 = param_1[0x2a];
    }
    if (lVar14 != 0) {
      plVar10 = (long *)(lVar13 + 0x18);
      do {
        lVar14 = lVar14 + -1;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x20))();
        }
        plVar10 = plVar10 + 6;
      } while (lVar14 != 0);
    }
    lVar13 = param_1[0x2b];
    plVar10 = (long *)param_1[0x25];
    lVar15 = param_1[0x29];
    uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar11 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar15,lVar13 * 0x30,8);
        goto LAB_028395d4;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,lVar13 * 0x30,8);
  }
LAB_028395d4:
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0x555555555555555;
  param_1[0x2e] = 0;
  param_1[0x36] = 0;
  param_1[0x2b] = 0x80;
  param_1[0x2c] = lVar7;
  param_1[0x30] = lVar7;
  param_1[0x31] = 0x555555555555555;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x29] = lVar12;
  param_1[0x2a] = (lVar6 - lVar12 >> 4) * -0x5555555555555555;
  param_1[0x32] = 0;
  param_1[0x33] = param_1[0x2f];
  plVar10 = param_1 + 0x30;
  lVar12 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,0x1800,8);
  lVar6 = lVar12;
  if (lVar12 == 0) {
    (**(code **)(*(long *)*plVar10 + 0xb8))();
    lVar13 = param_1[0x34];
    lVar15 = param_1[0x35];
    if (lVar15 != 0) goto LAB_0283963c;
  }
  else {
    lVar13 = param_1[0x34];
    lVar15 = param_1[0x35];
    if (lVar15 != 0) {
LAB_0283963c:
      if (lVar13 != 0) {
        lVar16 = lVar15 * 0x30;
        lVar14 = lVar13;
        do {
          FUN_0283dde8(plVar10,lVar6,lVar14);
          lVar14 = lVar14 + 0x30;
          lVar6 = lVar6 + 0x30;
          lVar16 = lVar16 + -0x30;
        } while (lVar16 != 0);
      }
    }
  }
  if (lVar13 != 0) {
    lVar14 = param_1[0x35];
    if (lVar14 != lVar15) {
      lVar16 = lVar13 + lVar15 * 0x30;
      lVar15 = lVar15 * -0x30 + lVar14 * 0x30;
      do {
        FUN_0283dde8(plVar10,lVar6,lVar16);
        lVar16 = lVar16 + 0x30;
        lVar6 = lVar6 + 0x30;
        lVar15 = lVar15 + -0x30;
      } while (lVar15 != 0);
      lVar14 = param_1[0x35];
    }
    while (lVar14 != 0) {
      plVar10 = *(long **)(lVar13 + 0x20);
      if (plVar10 != (long *)0x0) {
        lVar15 = plVar10[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
        }
      }
      lVar14 = lVar14 + -1;
      if (*(long **)(lVar13 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar13 + 0x18) + 0x20))();
      }
      lVar13 = lVar13 + 0x30;
    }
    lVar13 = param_1[0x36];
    plVar10 = (long *)param_1[0x30];
    lVar15 = param_1[0x34];
    uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar11 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar15,lVar13 * 0x30,8);
        goto LAB_028397a4;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,lVar13 * 0x30,8);
  }
LAB_028397a4:
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = (long)&DAT_cbf29ce484222645;
  param_1[0x3b] = (long)&DAT_03996322;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x34] = lVar12;
  param_1[0x35] = (lVar6 - lVar12 >> 4) * -0x5555555555555555;
  param_1[0x36] = 0x80;
  param_1[0x37] = 0;
  *(undefined2 *)((long)param_1 + 0x1f5) = 0x8080;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  param_1[0x73] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  param_1[0x7d] = 0;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  param_1[0x85] = 0;
  param_1[0x87] = 0;
  param_1[0x89] = 0;
  param_1[0x8b] = 0;
  param_1[0x8d] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 0;
  param_1[0x93] = 0;
  param_1[0x95] = 0;
  param_1[0x97] = 0;
  param_1[0x99] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9f] = 0;
  param_1[0xa1] = 0;
  param_1[0xa3] = 0;
  param_1[0xa5] = 0;
  param_1[0xa7] = 0;
  param_1[0xa9] = 0;
  param_1[0xab] = 0;
  param_1[0xad] = 0;
  param_1[0xaf] = 0;
  param_1[0xb1] = 0;
  param_1[0xb3] = 0;
  param_1[0xb5] = 0;
  param_1[0xb7] = 0;
  param_1[0xb9] = 0;
  param_1[0xbb] = 0;
  param_1[0xbd] = 0;
  param_1[0xbf] = 0;
  param_1[0xc1] = 0;
  param_1[0xc3] = 0;
  param_1[0xc5] = 0;
  param_1[199] = 0;
  param_1[0xc9] = 0;
  param_1[0xcb] = 0;
  param_1[0xcd] = 0;
  param_1[0xcf] = 0;
  param_1[0xd1] = 0;
  param_1[0xd3] = 0;
  param_1[0xd5] = 0;
  param_1[0xd7] = 0;
  param_1[0xd9] = 0;
  param_1[0xdb] = 0;
  param_1[0xdd] = 0;
  param_1[0xdf] = 0;
  param_1[0xe1] = 0;
  param_1[0xe3] = 0;
  param_1[0xe5] = 0;
  param_1[0xe7] = 0;
  param_1[0xe9] = 0;
  param_1[0xeb] = 0;
  param_1[0xed] = 0;
  param_1[0xef] = 0;
  param_1[0xf1] = 0;
  param_1[0xf3] = 0;
  param_1[0xf5] = 0;
  param_1[0xf7] = 0;
  param_1[0xf9] = 0;
  param_1[0xfb] = 0;
  param_1[0xfd] = 0;
  param_1[0xff] = 0;
  param_1[0x101] = 0;
  param_1[0x103] = 0;
  param_1[0x105] = 0;
  param_1[0x107] = 0;
  param_1[0x109] = 0;
  param_1[0x10b] = 0;
  param_1[0x10d] = 0;
  param_1[0x10f] = 0;
  param_1[0x111] = 0;
  param_1[0x113] = 0;
  param_1[0x115] = 0;
  param_1[0x117] = 0;
  param_1[0x119] = 0;
  param_1[0x11b] = 0;
  param_1[0x11d] = 0;
  param_1[0x11f] = 0;
  param_1[0x121] = 0;
  param_1[0x123] = 0;
  param_1[0x125] = 0;
  param_1[0x127] = 0;
  param_1[0x129] = 0;
  param_1[299] = 0;
  param_1[0x12d] = 0;
  param_1[0x12f] = 0;
  param_1[0x131] = 0;
  param_1[0x133] = 0;
  param_1[0x135] = 0;
  param_1[0x137] = 0;
  param_1[0x139] = 0;
  param_1[0x13b] = 0;
  param_1[0x13d] = 0;
  local_78[0] = 0x12;
  local_80[0] = 0x40;
  lVar7 = FUN_00d86a90(auStack_68,lVar7,local_78,local_80,&local_70);
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = param_1 + 0x37;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  *plVar10 = lVar7;
  local_78[0] = 0x400;
  lVar7 = FUN_00a246f0(local_80,local_70,local_78);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  param_1[0x38] = lVar7;
  local_78[0] = 0x400;
  lVar7 = FUN_00a246f0(local_80,local_70,local_78);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x39];
  param_1[0x39] = 0;
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  param_1[0x39] = lVar7;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 500) = 1;
  lVar7 = 0;
  do {
    lVar6 = FUN_010c4dd4(local_78,local_70);
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar10 = (long *)param_1[lVar7 * 2 + 0x3f];
    param_1[lVar7 * 2 + 0x3f] = 0;
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 10;
      do {
        iVar5 = (int)*plVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    lVar12 = lVar7 + 1;
    param_1[lVar7 * 2 + 0x3f] = lVar6;
    param_1[lVar7 * 2 + 0x40] = 0;
    lVar7 = lVar12;
  } while (lVar12 != 0x80);
  return;
}


