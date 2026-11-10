/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b734cc; name: FUN_02b734cc
 */


void FUN_02b734cc(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *local_98;
  char *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar9 = *(long *)(param_1 + 0xe0);
  plVar15 = *(long **)(param_1 + 0xe8);
  uVar12 = (long)plVar15 - lVar9 >> 3;
  lVar6 = tpidr_el0;
  if ((uint)uVar12 <= param_3) goto LAB_02b73760;
  uVar17 = (ulong)param_3;
  lVar13 = uVar12 - uVar17;
  if (uVar17 <= uVar12) {
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar9 + uVar17 * 8);
      while (plVar14 != plVar15) {
        plVar15 = plVar15 + -1;
        plVar8 = (long *)*plVar15;
        if (plVar8 != (long *)0x0) {
          plVar3 = plVar8 + 10;
          do {
            iVar5 = (int)*plVar3 + -1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *(int *)plVar3 = iVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      }
      *(long **)(param_1 + 0xe8) = plVar14;
    }
    goto LAB_02b73760;
  }
  puVar2 = (undefined8 *)(param_1 + 0xf8);
  if (uVar17 - uVar12 <= (ulong)(*(long *)(param_1 + 0xf0) - (long)plVar15 >> 3)) {
    do {
      FUN_02b73c4c(puVar2,plVar15);
      plVar15 = (long *)(*(long *)(param_1 + 0xe8) + 8);
      bVar7 = lVar13 != -1;
      lVar13 = lVar13 + 1;
      *(long **)(param_1 + 0xe8) = plVar15;
    } while (bVar7);
    goto LAB_02b73760;
  }
  uVar10 = *(ulong *)(param_1 + 0x100);
  if (0x7ffffffffffffffe < uVar10) {
    uVar10 = 0x7fffffffffffffff;
  }
  if (uVar10 < uVar17) {
LAB_02b73b80:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(param_1 + 0xf0) - lVar9;
  if ((ulong)(lVar9 >> 3) < uVar10 >> 1) {
    uVar10 = lVar9 >> 2;
    if (uVar17 <= uVar10) goto LAB_02b7357c;
LAB_02b73584:
    lVar9 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar17 << 3,8);
    uVar10 = uVar17;
    if (lVar9 == 0) {
      (**(code **)(*(long *)*puVar2 + 0xb8))();
    }
  }
  else {
LAB_02b7357c:
    uVar17 = uVar10;
    if (uVar10 != 0) goto LAB_02b73584;
    lVar9 = 0;
  }
  lVar16 = lVar9 + uVar12 * 8;
  lVar18 = lVar16;
  do {
    FUN_02b73c4c(puVar2,lVar18);
    lVar18 = lVar18 + 8;
    bVar7 = lVar13 != -1;
    lVar13 = lVar13 + 1;
  } while (bVar7);
  plVar15 = *(long **)(param_1 + 0xe0);
  plVar14 = *(long **)(param_1 + 0xe8);
  if (plVar14 == plVar15) {
    plVar14 = plVar15;
  }
  else {
    do {
      lVar16 = lVar16 + -8;
      plVar14 = plVar14 + -1;
      FUN_02b73d18(puVar2,lVar16,plVar14);
    } while (plVar15 != plVar14);
    plVar15 = *(long **)(param_1 + 0xe0);
    plVar14 = *(long **)(param_1 + 0xe8);
  }
  lVar13 = *(long *)(param_1 + 0xf0);
  *(ulong *)(param_1 + 0xf0) = lVar9 + uVar10 * 8;
  *(long *)(param_1 + 0xe0) = lVar16;
  *(long *)(param_1 + 0xe8) = lVar18;
  while (plVar14 != plVar15) {
    plVar14 = plVar14 + -1;
    plVar8 = (long *)*plVar14;
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  if (plVar15 != (long *)0x0) {
    plVar14 = (long *)*puVar2;
    lVar13 = lVar13 - (long)plVar15;
    uVar17 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar14,plVar15,lVar13,8);
        goto LAB_02b73760;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,plVar15,lVar13,8);
  }
LAB_02b73760:
  if ((uint)uVar12 < param_3) {
    puVar2 = (undefined8 *)(param_1 + 0xf8);
    do {
      local_68 = *param_2;
      local_90 = "";
      local_98 = &DAT_cbf29ce484222645;
      local_88 = 0;
      local_80 = (long *)0x0;
      lVar9 = *(long *)(param_1 + 8);
      if (lVar9 == 0) {
        lVar9 = *(long *)(local_68 + 8);
      }
      plVar15 = (long *)FUN_02b5a848(auStack_70,lVar9,&local_68,param_1 + 0x58);
      if (plVar15 != (long *)0x0) {
        plVar14 = plVar15 + 10;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_78 = plVar15;
      if (*local_90 != '\0') {
        FUN_02bba5e0(&local_68,*(undefined8 *)(*(long *)(plVar15[0xb] + 0x58) + 0x78),&local_98);
        plVar14 = (long *)plVar15[0xd];
        plVar15[0xd] = 0;
        if (plVar14 != (long *)0x0) {
          plVar8 = plVar14 + 10;
          do {
            iVar5 = (int)*plVar8 + -1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar7) {
              *(int *)plVar8 = iVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
        }
        plVar15[0xd] = local_68;
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      lVar9 = *(long *)(param_1 + 0xe8);
      if (lVar9 == *(long *)(param_1 + 0xf0)) {
        uVar10 = *(ulong *)(param_1 + 0x100);
        lVar9 = lVar9 - *(long *)(param_1 + 0xe0) >> 3;
        uVar17 = lVar9 + 1;
        if (0x7ffffffffffffffe < uVar10) {
          uVar10 = 0x7fffffffffffffff;
        }
        if (uVar10 < uVar17) goto LAB_02b73b80;
        lVar13 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe0);
        if ((ulong)(lVar13 >> 3) < uVar10 >> 1) {
          uVar11 = lVar13 >> 2;
          uVar10 = uVar17;
          if (uVar17 <= uVar11) {
            uVar10 = uVar11;
          }
        }
        if (uVar10 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar10 << 3,8);
          if (lVar13 == 0) {
            (**(code **)(*(long *)*puVar2 + 0xb8))();
          }
        }
        lVar18 = lVar13 + lVar9 * 8;
        FUN_02b73d18(puVar2,lVar18,&local_78);
        plVar15 = *(long **)(param_1 + 0xe0);
        plVar14 = *(long **)(param_1 + 0xe8);
        lVar9 = lVar18 + 8;
        if (plVar14 == plVar15) {
          plVar14 = plVar15;
        }
        else {
          do {
            lVar18 = lVar18 + -8;
            plVar14 = plVar14 + -1;
            FUN_02b73d18(puVar2,lVar18,plVar14);
          } while (plVar15 != plVar14);
          plVar15 = *(long **)(param_1 + 0xe0);
          plVar14 = *(long **)(param_1 + 0xe8);
        }
        *(long *)(param_1 + 0xe0) = lVar18;
        *(long *)(param_1 + 0xe8) = lVar9;
        lVar9 = *(long *)(param_1 + 0xf0);
        *(ulong *)(param_1 + 0xf0) = lVar13 + uVar10 * 8;
        while (plVar14 != plVar15) {
          plVar14 = plVar14 + -1;
          plVar8 = (long *)*plVar14;
          if (plVar8 != (long *)0x0) {
            plVar3 = plVar8 + 10;
            do {
              iVar5 = (int)*plVar3 + -1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar7) {
                *(int *)plVar3 = iVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
        }
        if (plVar15 != (long *)0x0) {
          plVar14 = (long *)*puVar2;
          lVar9 = lVar9 - (long)plVar15;
          uVar17 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar17 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar14,plVar15,lVar9,8);
              goto joined_r0x02b73a04;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar15,lVar9,8);
        }
      }
      else {
        FUN_02b73d18(puVar2,lVar9,&local_78);
        *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 8;
      }
joined_r0x02b73a04:
      if (local_78 != (long *)0x0) {
        plVar15 = local_78 + 10;
        do {
          iVar5 = (int)*plVar15 + -1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *(int *)plVar15 = iVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
      uVar1 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar1;
    } while (uVar1 != param_3);
  }
  return;
}


