/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae6804; name: FUN_00ae6804
 */


void FUN_00ae6804(long param_1,undefined1 (*param_2) [16])

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 *local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  
  puVar6 = PTR_DAT_04379e80;
  puVar5 = PTR_DAT_04379e78;
  local_d0 = (undefined1 *)0x1eb774d1eef8fbe2;
  pcStack_c8 = "OverrideRimColor";
  local_c0 = 0x1f;
  local_b8 = (long *)0x0;
  lVar12 = *(long *)(param_1 + 0x1f0);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar15 = *(int *)(lVar12 + 0xc);
      do {
        plVar14 = *(long **)(lVar12 + 0x10);
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar8 = FUN_0095a420();
          *(undefined8 *)puVar6 = uVar8;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_00ae697c;
          if (plVar14 == (long *)puVar6) break;
          plVar14 = (long *)*plVar14;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar15) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x18);
            if (lVar12 != 0) {
              lVar11 = *(long *)(lVar12 + 0x1a0);
              if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) goto LAB_00ae6960;
              piVar1 = (int *)(lVar11 + 0xc);
              iVar15 = *(int *)(lVar11 + 0xc);
              goto LAB_00ae6a00;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar15 = iVar7;
      } while (iVar7 != 0);
    }
    goto LAB_00ae697c;
  }
  goto LAB_00ae6850;
LAB_00ae6c80:
  do {
    plVar14 = *(long **)(lVar11 + 0x10);
    lVar9 = FUN_00a3edb8();
    while( true ) {
      if (plVar14 == (long *)0x0) goto LAB_00ae6c04;
      if (plVar14 == (long *)lVar9) break;
      plVar14 = (long *)*plVar14;
    }
    iVar7 = *piVar1;
    if (iVar7 == iVar15) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar11 = *(long *)(lVar11 + 0x18);
        if (lVar11 != 0) {
          plVar14 = (long *)(lVar11 + -0x50);
          if (0 < *(int *)(lVar11 + 0x220)) {
            iVar15 = 0;
            do {
              puVar10 = (undefined8 *)FUN_02a9b354(plVar14,iVar15);
              local_80 = *puVar10;
              local_78 = puVar10[1];
              local_70 = puVar10[2];
              local_68 = (long *)puVar10[3];
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x18))();
              }
              puVar10 = (undefined8 *)FUN_02a9b144(plVar14,&local_80);
              plVar13 = (long *)*puVar10;
              if (plVar13 != (long *)0x0) {
                plVar2 = plVar13 + 10;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = (int)*plVar2 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              local_a0 = &DAT_cbf29ce484222645;
              puStack_98 = &DAT_03996322;
              local_90 = 0;
              local_88 = (long *)0x0;
              FUN_02b39e1c(plVar13,&local_d0,&local_b0,&local_a0);
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              if (plVar13 != (long *)0x0) {
                plVar2 = plVar13 + 10;
                do {
                  iVar7 = (int)*plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = iVar7;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < *(int *)(lVar11 + 0x220));
          }
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar15 = iVar7;
  } while (iVar7 != 0);
LAB_00ae6c04:
  lVar11 = *(long *)(lVar12 + 8);
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar15 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar15 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
  }
  goto joined_r0x00ae6c38;
LAB_00ae6a00:
  do {
    plVar14 = *(long **)(lVar11 + 0x10);
    lVar9 = FUN_00a3edb8();
    while( true ) {
      if (plVar14 == (long *)0x0) goto LAB_00ae6960;
      if (plVar14 == (long *)lVar9) break;
      plVar14 = (long *)*plVar14;
    }
    iVar7 = *piVar1;
    if (iVar7 == iVar15) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar11 = *(long *)(lVar11 + 0x18);
        if (lVar11 != 0) {
          plVar14 = (long *)(lVar11 + -0x50);
          if (0 < *(int *)(lVar11 + 0x220)) {
            iVar15 = 0;
            do {
              puVar10 = (undefined8 *)FUN_02a9b354(plVar14,iVar15);
              local_80 = *puVar10;
              local_78 = puVar10[1];
              local_70 = puVar10[2];
              local_68 = (long *)puVar10[3];
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x18))();
              }
              puVar10 = (undefined8 *)FUN_02a9b144(plVar14,&local_80);
              plVar13 = (long *)*puVar10;
              if (plVar13 != (long *)0x0) {
                plVar2 = plVar13 + 10;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = (int)*plVar2 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              local_b0 = *(undefined8 *)*param_2;
              auVar16 = NEON_ext(*param_2,*param_2,8,1);
              uStack_a8 = auVar16._0_8_;
              local_a0 = &DAT_cbf29ce484222645;
              puStack_98 = &DAT_03996322;
              local_90 = 0;
              local_88 = (long *)0x0;
              FUN_02b39cb4(plVar13,&local_d0,&local_b0,&local_a0);
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              if (plVar13 != (long *)0x0) {
                plVar2 = plVar13 + 10;
                do {
                  iVar7 = (int)*plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = iVar7;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < *(int *)(lVar11 + 0x220));
          }
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar15 = iVar7;
  } while (iVar7 != 0);
LAB_00ae6960:
  lVar11 = *(long *)(lVar12 + 8);
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar15 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar15 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
  }
LAB_00ae697c:
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))(local_b8);
  }
LAB_00ae6850:
  puVar6 = PTR_DAT_04379e80;
  puVar5 = PTR_DAT_04379e78;
  local_d0 = &DAT_c48fa98e41e54f54;
  pcStack_c8 = "OverrideRimPower";
  local_c0 = 0x1f;
  local_b8 = (long *)0x0;
  local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)param_2[1]);
  lVar12 = *(long *)(param_1 + 0x1f0);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar15 = *(int *)(lVar12 + 0xc);
    do {
      plVar14 = *(long **)(lVar12 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar8 = FUN_0095a420();
        *(undefined8 *)puVar6 = uVar8;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto joined_r0x00ae6c38;
        if (plVar14 == (long *)puVar6) break;
        plVar14 = (long *)*plVar14;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar15) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            lVar11 = *(long *)(lVar12 + 0x1a0);
            if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) goto LAB_00ae6c04;
            piVar1 = (int *)(lVar11 + 0xc);
            iVar15 = *(int *)(lVar11 + 0xc);
            goto LAB_00ae6c80;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar7;
    } while (iVar7 != 0);
  }
joined_r0x00ae6c38:
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  return;
}


