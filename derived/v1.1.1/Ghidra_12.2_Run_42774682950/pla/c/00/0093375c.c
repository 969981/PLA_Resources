/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0093375c; name: FUN_0093375c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0093375c(long param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  char *local_1e0 [13];
  undefined **local_178;
  long local_170 [30];
  ulong local_80;
  char local_74 [4];
  long local_70 [2];
  
  cVar4 = *(char *)(*(long *)(*param_2 + 0x70) + 0x7d);
  plVar14 = *(long **)(param_1 + 0x70);
  plVar20 = *(long **)(param_1 + 0x78);
  local_74[0] = cVar4;
  if (plVar14 != plVar20) {
    do {
      plVar16 = (long *)*plVar14;
      if (plVar16 == (long *)0x0) {
        cVar5 = *(char *)(_DAT_00000070 + 0x7d);
      }
      else {
        lVar21 = plVar16[0xb];
        if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_00933e74:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar21 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
          *(undefined8 *)(lVar21 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        cVar5 = *(char *)(plVar16[0xe] + 0x7d);
        lVar21 = plVar16[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
      }
      if (cVar5 == cVar4) goto LAB_00933828;
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar20);
    plVar14 = plVar20;
  }
LAB_00933828:
  plVar16 = plVar14 + 1;
  if (plVar14 != plVar20 && plVar16 != plVar20) {
    plVar11 = (long *)*plVar16;
    if (plVar11 != (long *)0x0) goto LAB_00933da0;
    do {
      cVar5 = *(char *)(_DAT_00000070 + 0x7d);
      plVar8 = plVar14;
      while( true ) {
        plVar14 = plVar8;
        if (cVar5 != cVar4) {
          plVar14 = (long *)*plVar8;
          *plVar8 = 0;
          if (plVar14 != (long *)0x0) {
            lVar21 = plVar14[0xb];
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))();
            }
          }
          lVar21 = *plVar16;
          *plVar16 = 0;
          plVar14 = plVar8 + 1;
          *plVar8 = lVar21;
        }
        plVar16 = plVar16 + 1;
        if (plVar16 == plVar20) goto LAB_00933838;
        plVar11 = (long *)*plVar16;
        if (plVar11 == (long *)0x0) break;
LAB_00933da0:
        lVar21 = plVar11[0xb];
        if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_00933e74;
        if (*(long *)(lVar21 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
          *(undefined8 *)(lVar21 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        cVar5 = *(char *)(plVar11[0xe] + 0x7d);
        lVar21 = plVar11[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plVar8 = plVar14;
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
      }
    } while( true );
  }
LAB_00933838:
  plVar20 = *(long **)(param_1 + 0x78);
  lVar21 = (long)plVar20 - (long)plVar14;
  if (lVar21 != 0) {
    plVar16 = (long *)((long)plVar14 + lVar21);
    for (; plVar16 != plVar20; plVar16 = plVar16 + 1) {
      plVar11 = (long *)*plVar14;
      *plVar14 = 0;
      if (plVar11 != (long *)0x0) {
        lVar21 = plVar11[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))();
        }
      }
      lVar21 = *plVar16;
      *plVar16 = 0;
      *plVar14 = lVar21;
      plVar14 = plVar14 + 1;
    }
    FUN_009356d0((undefined8 *)(param_1 + 0x70),plVar14);
  }
  local_1e0[0] = local_74;
  local_178 = &PTR_FUN_041c2158;
  local_170[0] = 0;
  local_170[1] = 0;
  local_170[2] = 0;
  local_170[3] = 0;
  local_170[4] = 0;
  local_170[5] = 0;
  local_170[6] = 0;
  local_170[7] = 0;
  local_170[8] = 0;
  local_170[9] = 0;
  local_170[10] = 0;
  local_170[0xb] = 0;
  local_170[0xc] = 0;
  local_170[0xd] = 0;
  local_170[0xe] = 0;
  local_170[0xf] = 0;
  local_170[0x10] = 0;
  local_170[0x11] = 0;
  local_170[0x12] = 0;
  local_170[0x13] = 0;
  local_170[0x14] = 0;
  local_170[0x15] = 0;
  local_170[0x16] = 0;
  local_170[0x17] = 0;
  local_170[0x18] = 0;
  local_170[0x19] = 0;
  local_170[0x1a] = 0;
  local_170[0x1b] = 0;
  local_170[0x1c] = 0;
  local_170[0x1d] = 0;
  local_80 = 0;
  if (*(int *)(param_1 + 0x1a0) == 0) {
    iVar15 = 0;
  }
  else {
    uVar17 = 0;
    do {
      plVar14 = (long *)(param_1 + uVar17 * 8 + 0xb0);
      local_70[0] = *plVar14;
      uVar10 = FUN_00935a60(local_1e0,local_70);
      if ((uVar10 & 1) != 0) {
        lVar21 = *plVar14;
        uVar10 = local_80 & 0xffffffff;
        if ((uint)local_80 == 0) {
          uVar10 = 0;
        }
        else {
          plVar14 = local_170;
          uVar13 = uVar10;
          do {
            if (*plVar14 == lVar21) goto LAB_00933944;
            uVar13 = uVar13 - 1;
            plVar14 = plVar14 + 1;
          } while (uVar13 != 0);
          if (0x1d < (uint)local_80) goto LAB_00933944;
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 + 1);
        local_170[uVar10] = lVar21;
      }
LAB_00933944:
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(param_1 + 0x1a0));
    iVar15 = (uint)local_80;
    if ((uint)local_80 != 0) {
      memcpy((void *)(param_1 + 0xb0),local_170,(local_80 & 0xffffffff) << 3);
    }
  }
  *(int *)(param_1 + 0x1a0) = iVar15;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  FUN_00935a80(local_1e0);
  lVar21 = *(long *)(param_1 + 0x78);
  puVar2 = (undefined8 *)(param_1 + 0x88);
  if (lVar21 == *(long *)(param_1 + 0x80)) {
    uVar10 = *(ulong *)(param_1 + 0x90);
    lVar21 = lVar21 - *(long *)(param_1 + 0x70) >> 3;
    uVar17 = lVar21 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
    if ((ulong)(lVar12 >> 3) < uVar10 >> 1) {
      uVar13 = lVar12 >> 2;
      uVar10 = uVar17;
      if (uVar17 <= uVar13) {
        uVar10 = uVar13;
      }
    }
    if (uVar10 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar10 << 3,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar19 = lVar12 + lVar21 * 8;
    FUN_00935938(puVar2,lVar19,param_2);
    plVar14 = *(long **)(param_1 + 0x70);
    plVar20 = *(long **)(param_1 + 0x78);
    lVar21 = lVar19 + 8;
    if (plVar20 == plVar14) {
      plVar20 = plVar14;
    }
    else {
      lVar18 = lVar19 + -8;
      FUN_00935938(puVar2,lVar18,plVar20 + -1);
      if (plVar20 + -1 != plVar14) {
        lVar18 = lVar19 + -0x10;
        FUN_00935938(puVar2,lVar18,plVar20 + -2);
        if (plVar20 + -2 != plVar14) {
          lVar19 = lVar19 + -0x18;
          do {
            lVar18 = lVar19;
            FUN_00935938(puVar2,lVar18,plVar20 + -3);
            plVar20 = plVar20 + -1;
            lVar19 = lVar18 + -8;
          } while (plVar14 + 2 != plVar20);
        }
      }
      plVar14 = *(long **)(param_1 + 0x70);
      lVar19 = lVar18;
      plVar20 = *(long **)(param_1 + 0x78);
    }
    *(long *)(param_1 + 0x70) = lVar19;
    *(long *)(param_1 + 0x78) = lVar21;
    lVar21 = *(long *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0x80) = lVar12 + uVar10 * 8;
    if (plVar20 != plVar14) {
      plVar16 = (long *)plVar20[-1];
      if (plVar16 != (long *)0x0) {
        lVar12 = plVar16[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))();
        }
      }
      if (plVar20 + -1 != plVar14) {
        plVar20 = plVar20 + -2;
        plVar16 = (long *)*plVar20;
        if (plVar16 != (long *)0x0) {
          lVar12 = plVar16[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar15 + -1 == 0) goto LAB_00933b18;
        }
LAB_00933aec:
        if (plVar20 != plVar14) {
          while( true ) {
            plVar20 = plVar20 + -1;
            plVar16 = (long *)*plVar20;
            if (plVar16 == (long *)0x0) break;
            lVar12 = plVar16[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar15 = *piVar1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar15 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar15 + -1 != 0) break;
LAB_00933b18:
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))();
            if (plVar20 == plVar14) goto LAB_00933b30;
          }
          goto LAB_00933aec;
        }
      }
    }
LAB_00933b30:
    if (plVar14 != (long *)0x0) {
      plVar20 = (long *)*puVar2;
      lVar21 = lVar21 - (long)plVar14;
      uVar17 = (**(code **)(*plVar20 + 0xc0))(plVar20);
      if ((uVar17 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar20,plVar14,lVar21,8);
          goto LAB_00933bcc;
        }
      }
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar14,lVar21,8);
    }
  }
  else {
    FUN_00935938(puVar2,lVar21,param_2);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 8;
  }
LAB_00933bcc:
  lVar21 = *param_2;
  uVar3 = *(uint *)(param_1 + 0x1a0);
  uVar17 = (ulong)uVar3;
  if (uVar3 == 0) {
    uVar17 = 0;
  }
  else {
    plVar14 = (long *)(param_1 + 0xb0);
    uVar10 = uVar17;
    do {
      if (*plVar14 == lVar21) {
        return;
      }
      plVar14 = plVar14 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (0x1d < uVar3) {
      return;
    }
  }
  *(uint *)(param_1 + 0x1a0) = uVar3 + 1;
  *(long *)(param_1 + uVar17 * 8 + 0xb0) = lVar21;
  return;
}


