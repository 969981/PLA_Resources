/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01917ea4; name: FUN_01917ea4
 */


void FUN_01917ea4(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  byte *pbVar19;
  undefined1 auStack_1e8 [120];
  long *local_170;
  long *local_150;
  long *local_130;
  long *local_110;
  long *local_f0;
  long *local_d0;
  int aiStack_c0 [7];
  int local_a4;
  uint local_70;
  undefined2 local_6c;
  
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x288);
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar16 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar16;
    plVar18 = *(long **)(lVar16 + 0xd0);
    if (plVar18 != (long *)0x0) {
      plVar13 = plVar18 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar13 = (long *)plVar18[0xb];
    if (plVar13 == (long *)0x0) {
      bVar5 = 5 < DAT_00000088;
    }
    else {
      plVar1 = plVar13 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar5 = 5 < *(byte *)(plVar13 + 0x11);
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    plVar13 = plVar18 + 10;
    do {
      iVar10 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    puVar7 = PTR_DAT_04379558;
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    puVar9 = PTR_DAT_04379568;
    puVar8 = PTR_DAT_04379560;
    lVar16 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar16;
    plVar18 = *(long **)(lVar16 + 0x240);
    if (plVar18 != (long *)0x0) {
      lVar16 = plVar18[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_019183fc;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar14;
      }
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    iVar10 = FUN_010e630c();
    iVar11 = FUN_010e3c70(plVar18 + 0xa8ce);
    if (plVar18 != (long *)0x0) {
      lVar16 = plVar18[0xb];
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        iVar12 = *piVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
    if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar16 = *(long *)puVar8;
    *(long *)puVar9 = lVar16;
    plVar18 = *(long **)(lVar16 + 0x280);
    if (plVar18 != (long *)0x0) {
      lVar16 = plVar18[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_019183fc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar14;
      }
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pbVar19 = (byte *)&DAT_03a7c6d4;
    do {
      uVar15 = FUN_010dac08(plVar18,*(int *)pbVar19);
      if ((int)uVar15 != 0) {
        uVar17 = 0;
        do {
          iVar12 = *(int *)pbVar19;
          local_6c = 1;
          uVar15 = FUN_010dac08(uVar15,iVar12);
          plVar13 = plVar18 + 0xd;
          if ((((iVar12 == 0) || (plVar13 = (long *)((long)plVar18 + 0xaf4), iVar12 == 1)) ||
              (plVar13 = (long *)((long)plVar18 + 0xc84), iVar12 == 2)) &&
             (((uVar17 < (uVar15 & 0xffffffff) &&
               (local_70 = *(uint *)((long)plVar13 + uVar17 * 4), (local_70 & 0xffff) != 0)) &&
              (0xffff < local_70)))) {
            FUN_01918414(auStack_1e8,param_1,local_70 & 0xffff);
            if (7 < uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_0191aa30();
            }
            if (aiStack_c0[(int)uVar3] - 1U < 2) {
              local_6c = CONCAT11(local_6c._1_1_,aiStack_c0[(int)uVar3] == 2);
              iVar12 = FUN_02c50328((undefined2)local_70,0x14);
              if ((char)local_6c != '\0' && !(bool)(bVar5 & (iVar10 + 0x1d) * 0x1e == iVar11 ^ 1)) {
                local_6c._0_1_ = local_a4 == 2;
              }
              local_6c = CONCAT11(iVar12 != 0,(char)local_6c);
              if (*(long *)(param_2 + 8) == *(long *)(param_2 + 0x10)) {
                FUN_0191c570(param_2,&local_70);
              }
              else {
                FUN_0191c614(param_2 + 0x18,*(long *)(param_2 + 8),&local_70);
                *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 6;
              }
            }
            if (local_d0 != (long *)0x0) {
              (**(code **)(*local_d0 + 0x20))();
            }
            if (local_f0 != (long *)0x0) {
              (**(code **)(*local_f0 + 0x20))();
            }
            if (local_110 != (long *)0x0) {
              (**(code **)(*local_110 + 0x20))();
            }
            if (local_130 != (long *)0x0) {
              (**(code **)(*local_130 + 0x20))();
            }
            if (local_150 != (long *)0x0) {
              (**(code **)(*local_150 + 0x20))();
            }
            if (local_170 != (long *)0x0) {
              (**(code **)(*local_170 + 0x20))();
            }
          }
          uVar17 = uVar17 + 1;
          uVar15 = FUN_010dac08(plVar18,*(int *)pbVar19);
        } while (uVar17 < (uVar15 & 0xffffffff));
      }
      pbVar19 = pbVar19 + 4;
    } while (pbVar19 != &switchD_0191d8a4::switchdataD_03a7c6dc);
    if (plVar18 != (long *)0x0) {
      lVar16 = plVar18[0xb];
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
  }
  return;
}


