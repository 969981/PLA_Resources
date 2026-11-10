/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b7691c; name: FUN_02b7691c
 */


void FUN_02b7691c(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  uint *puVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  long *plVar21;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long *local_70;
  undefined8 uStack_68;
  
  plVar21 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  if (plVar21 == plVar4) {
    return;
  }
  plVar1 = param_2 + 3;
LAB_02b76970:
  puVar12 = (uint *)*plVar21;
  puVar5 = (uint *)plVar21[1];
  if (puVar12 != puVar5) {
    if ((param_3 >> 2 & 1) == 0) {
      if ((param_3 >> 1 & 1) == 0) {
        if ((param_3 & 1) != 0) {
          do {
            if (*puVar12 - 1 < 0x13) goto LAB_02b76aa0;
            puVar12 = puVar12 + 2;
          } while (puVar5 != puVar12);
        }
      }
      else if ((param_3 & 1) == 0) {
        do {
          if (0x12 < *puVar12 - 1 && *puVar12 - 0x14 < 8) goto LAB_02b76aa0;
          puVar12 = puVar12 + 2;
        } while (puVar5 != puVar12);
      }
      else {
        do {
          if (*puVar12 - 1 < 0x13 || *puVar12 - 0x14 < 8) goto LAB_02b76aa0;
          puVar12 = puVar12 + 2;
        } while (puVar5 != puVar12);
      }
    }
    else if ((param_3 >> 1 & 1) == 0) {
      do {
        uVar6 = *puVar12;
        if (uVar6 - 1 < 0x13) {
          if ((param_3 & 1) != 0) goto LAB_02b76aa0;
        }
        else if (7 < uVar6 - 0x14 && (uVar6 & 0xfffffffc) == 0x1c) goto LAB_02b76aa0;
        puVar12 = puVar12 + 2;
      } while (puVar5 != puVar12);
    }
    else if ((param_3 & 1) == 0) {
      do {
        uVar6 = *puVar12;
        if ((0x12 < uVar6 - 1) && (uVar6 - 0x14 < 8 || (uVar6 & 0xfffffffc) == 0x1c))
        goto LAB_02b76aa0;
        puVar12 = puVar12 + 2;
      } while (puVar5 != puVar12);
    }
    else {
      do {
        uVar6 = *puVar12;
        if (((uVar6 & 0xfffffffc) == 0x1c || uVar6 - 1 < 0x13) || uVar6 - 0x14 < 8)
        goto LAB_02b76aa0;
        puVar12 = puVar12 + 2;
      } while (puVar5 != puVar12);
    }
  }
  goto LAB_02b76964;
LAB_02b76aa0:
  lStack_90 = param_2[7];
  local_98 = 0;
  local_88 = 0x1fffffffffffffff;
  uStack_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78 = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  uVar10 = param_2[1];
  if (uVar10 < (ulong)param_2[2]) {
    FUN_02b77054(plVar1,uVar10,&local_a8);
    param_2[1] = param_2[1] + 0x48;
  }
  else {
    uVar15 = param_2[4];
    lVar13 = (long)(uVar10 - *param_2) >> 3;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    uVar10 = lVar13 * -0x71c71c71c71c71c7 + 1;
    if (uVar15 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar16 = param_2[2] - *param_2 >> 3;
    uVar14 = lVar16 * 0x1c71c71c71c71c72;
    if (uVar10 <= uVar14) {
      uVar10 = uVar14;
    }
    if ((ulong)(lVar16 * -0x71c71c71c71c71c7) < uVar15 >> 1) {
      uVar15 = uVar10;
    }
    if (uVar15 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar15 * 0x48,8);
      if (lVar16 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xb8))();
      }
    }
    lVar20 = lVar16 + lVar13 * 8;
    FUN_02b77054(plVar1,lVar20,&local_a8);
    lVar18 = *param_2;
    lVar17 = param_2[1];
    lVar13 = lVar20 + 0x48;
    if (lVar17 == lVar18) {
      lVar17 = lVar18;
    }
    else {
      do {
        lVar20 = lVar20 + -0x48;
        lVar17 = lVar17 + -0x48;
        FUN_02adc23c(plVar1,lVar20,lVar17);
      } while (lVar18 != lVar17);
      lVar18 = *param_2;
      lVar17 = param_2[1];
    }
    *param_2 = lVar20;
    param_2[1] = lVar13;
    lVar13 = param_2[2];
    param_2[2] = lVar16 + uVar15 * 0x48;
    while (lVar17 != lVar18) {
      plVar11 = *(long **)(lVar17 + -0x10);
      lVar17 = lVar17 + -0x48;
      if (plVar11 != (long *)0x0) {
        plVar3 = plVar11 + 10;
        do {
          iVar9 = (int)*plVar3 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *(int *)plVar3 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      FUN_014bd284(lVar17);
    }
    if (lVar18 != 0) {
      plVar11 = (long *)*plVar1;
      uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar10 & 1) != 0) {
        lVar16 = tpidr_el0;
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar11,lVar18,lVar13 - lVar18,8);
          goto joined_r0x02b76c7c;
        }
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar18,lVar13 - lVar18,8);
    }
  }
joined_r0x02b76c7c:
  if (local_70 != (long *)0x0) {
    plVar11 = local_70 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *(int *)plVar11 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  FUN_014bd284(&local_a8);
  lVar16 = param_2[1];
  lVar13 = plVar21[7];
  if (lVar13 != 0) {
    piVar2 = (int *)(lVar13 + 0x50);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar11 = *(long **)(lVar16 + -0x10);
  *(long *)(lVar16 + -0x10) = lVar13;
  if (plVar11 != (long *)0x0) {
    plVar3 = plVar11 + 10;
    do {
      iVar9 = (int)*plVar3 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(int *)plVar3 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  *(int *)(lVar16 + -8) = (int)plVar21[8];
  *(undefined4 *)(lVar16 + -4) = *(undefined4 *)((long)plVar21 + 0x44);
  puVar12 = (uint *)*plVar21;
  puVar5 = (uint *)plVar21[1];
  if (puVar12 != puVar5) {
    lVar16 = lVar16 + -0x48;
    if ((param_3 >> 2 & 1) == 0) {
      if ((param_3 >> 1 & 1) == 0) {
        do {
          puVar19 = puVar12 + 2;
          uVar6 = 0;
          if (*puVar12 - 1 < 0x13 && (param_3 & 1) != 0) {
            uVar6 = *puVar12;
          }
          local_a8 = CONCAT44(local_a8._4_4_,uVar6);
          FUN_02b76540(lVar16,&local_a8,puVar12 + 1);
          puVar12 = puVar19;
        } while (puVar19 != puVar5);
      }
      else if ((param_3 & 1) == 0) {
        do {
          puVar19 = puVar12 + 2;
          uVar6 = *puVar12;
          if (7 < uVar6 - 0x14 || uVar6 - 1 < 0x13) {
            uVar6 = 0;
          }
          local_a8 = CONCAT44(local_a8._4_4_,uVar6);
          FUN_02b76540(lVar16,&local_a8,puVar12 + 1);
          puVar12 = puVar19;
        } while (puVar19 != puVar5);
      }
      else {
        do {
          puVar19 = puVar12 + 2;
          uVar6 = *puVar12;
          if (7 < uVar6 - 0x14 && 0x12 < uVar6 - 1) {
            uVar6 = 0;
          }
          local_a8 = CONCAT44(local_a8._4_4_,uVar6);
          FUN_02b76540(lVar16,&local_a8,puVar12 + 1);
          puVar12 = puVar19;
        } while (puVar19 != puVar5);
      }
    }
    else if ((param_3 >> 1 & 1) == 0) {
      do {
        uVar6 = *puVar12;
        local_a8 = CONCAT44(local_a8._4_4_,uVar6);
        if (uVar6 - 1 < 0x13) {
          if ((param_3 & 1) == 0) {
LAB_02b76d90:
            local_a8 = (ulong)local_a8._4_4_ << 0x20;
          }
        }
        else if (uVar6 - 0x14 < 8 || (uVar6 & 0xfffffffc) != 0x1c) goto LAB_02b76d90;
        FUN_02b76540(lVar16,&local_a8,puVar12 + 1);
        puVar12 = puVar12 + 2;
      } while (puVar12 != puVar5);
    }
    else {
      do {
        uVar6 = *puVar12;
        local_a8 = CONCAT44(local_a8._4_4_,uVar6);
        if (uVar6 - 1 < 0x13) {
          if ((param_3 & 1) == 0) {
LAB_02b76de4:
            local_a8 = (ulong)local_a8._4_4_ << 0x20;
          }
        }
        else if (7 < uVar6 - 0x14 && (uVar6 & 0xfffffffc) != 0x1c) goto LAB_02b76de4;
        FUN_02b76540(lVar16,&local_a8,puVar12 + 1);
        puVar12 = puVar12 + 2;
      } while (puVar12 != puVar5);
    }
  }
LAB_02b76964:
  plVar21 = plVar21 + 9;
  if (plVar21 == plVar4) {
    return;
  }
  goto LAB_02b76970;
}


