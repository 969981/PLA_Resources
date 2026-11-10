/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a81668; name: FUN_01a81668
 */


void FUN_01a81668(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  float fVar11;
  long *local_48;
  undefined8 uStack_40;
  long *local_38;
  long local_28;
  
  *(undefined1 *)((long)param_1 + 0x9c4) = 0;
  (**(code **)(*param_1 + 0xf0))();
  if (*(char *)(param_1[0xb8] + 0x99) != '\0') {
    iVar7 = *(int *)((long)param_1 + 0x914);
    if (iVar7 == 0) {
      uVar8 = (**(code **)(*param_1 + 0x1b0))(param_1);
      if (((((uVar8 & 1) != 0) ||
           (uVar8 = (**(code **)(*param_1 + 0x218))(param_1), (uVar8 & 1) != 0)) &&
          (uVar8 = (**(code **)(*param_1 + 0x218))(param_1), (uVar8 & 1) == 0)) &&
         (uVar8 = (**(code **)(*param_1 + 0x228))(param_1), (uVar8 & 1) == 0)) {
        *(undefined4 *)((long)param_1 + 0x914) = 2;
      }
    }
    else if (iVar7 == 2) {
      uVar8 = (**(code **)(*param_1 + 0x218))(param_1);
      if ((uVar8 & 1) == 0) {
        uVar8 = (**(code **)(*param_1 + 0x1b0))(param_1);
        if ((uVar8 & 1) == 0) {
          uVar8 = (**(code **)(*param_1 + 0x1a0))(param_1);
          if ((uVar8 & 1) != 0) {
            FUN_009c685c(&local_48,param_1 + 0xb9);
            if (local_48 != (long *)0x0) {
              uVar8 = (**(code **)(*local_48 + 0x208))();
              if (((uVar8 & 1) == 0) &&
                 (uVar8 = (**(code **)(*local_48 + 0x228))(), (uVar8 & 1) == 0)) {
                uVar8 = (**(code **)(*local_48 + 0x200))();
                if (((uVar8 & 1) == 0) ||
                   (uVar8 = (**(code **)(*local_48 + 0x210))(), (uVar8 & 1) != 0)) {
                  uVar8 = 1;
                }
                else {
                  uVar8 = (**(code **)(*local_48 + 0x218))();
                  uVar8 = uVar8 & 0xffffffff;
                }
              }
              else {
                uVar8 = 0;
              }
              if (local_48 != (long *)0x0) {
                lVar9 = local_48[0xb];
                piVar1 = (int *)(lVar9 + 0xc);
                do {
                  iVar7 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 + -1 == 0) {
                  *(undefined8 *)(lVar9 + 0x18) = 0;
                  (**(code **)(*local_48 + 0x20))();
                }
              }
              if ((uVar8 & 1) == 0) goto LAB_01a816a0;
            }
            uVar8 = (**(code **)(*param_1 + 0x1a8))(param_1);
            if ((uVar8 & 1) != 0) {
              pcVar10 = *(code **)(*param_1 + 0x1c0);
              goto LAB_01a81cb4;
            }
            goto LAB_01a81a7c;
          }
        }
        else {
          uVar8 = (**(code **)(*param_1 + 0x290))(param_1);
          if ((uVar8 & 1) == 0) {
            pcVar10 = *(code **)(*param_1 + 0x298);
            goto LAB_01a81a14;
          }
          if (*(int *)((long)param_1 + 0x914) == 2) {
            local_48 = (long *)0x0;
            uStack_40 = 0;
            FUN_01a2bf84(&local_48,param_1 + 0xb9);
            FUN_009c685c(&local_38,&local_48);
            plVar5 = local_48;
            if (local_48 != (long *)0x0) {
              plVar2 = local_48 + 1;
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
                local_48[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar9 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar9;
                local_28 = *plVar5;
                FUN_02a44274(lVar9 + 0xd8,&local_28);
              }
            }
            plVar5 = local_38;
            if (local_38 != (long *)0x0) {
              uVar6 = (**(code **)(*param_1 + 400))(param_1);
              (**(code **)(*plVar5 + 0x270))(plVar5,uVar6);
              if (local_38 != (long *)0x0) {
                lVar9 = local_38[0xb];
                piVar1 = (int *)(lVar9 + 0xc);
                do {
                  iVar7 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 + -1 == 0) {
                  *(undefined8 *)(lVar9 + 0x18) = 0;
                  (**(code **)(*local_38 + 0x20))();
                }
              }
            }
            *(undefined4 *)((long)param_1 + 0x914) = 3;
          }
        }
      }
      else {
        pcVar10 = *(code **)(*param_1 + 0x188);
LAB_01a81a14:
        (*pcVar10)(param_1);
      }
    }
    else if (iVar7 == 3) {
      uVar8 = (**(code **)(*param_1 + 0x1a0))(param_1);
      if ((uVar8 & 1) == 0) {
        pcVar10 = *(code **)(*param_1 + 0x218);
LAB_01a81cb4:
        uVar8 = (*pcVar10)(param_1);
        if ((uVar8 & 1) == 0) goto LAB_01a816a0;
      }
LAB_01a81a7c:
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    else if (iVar7 == 1) {
      pcVar10 = *(code **)(*param_1 + 0x280);
      goto LAB_01a81a14;
    }
  }
LAB_01a816a0:
  FUN_009c69bc(&local_48,param_1);
  (**(code **)(*local_48 + 0x40))();
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  uVar8 = (**(code **)(*param_1 + 0x1b8))(param_1);
  if (((uVar8 & 1) != 0) ||
     ((uVar8 = (**(code **)(*param_1 + 0x1a0))(param_1), (uVar8 & 1) != 0 &&
      (2 < *(int *)((long)param_1 + 0x914) - 1U)))) {
    FUN_01a8ac20(param_1);
  }
  if (*(int *)(param_1[0xb8] + 0x68) == 0) {
    *(undefined4 *)(param_1 + 0x143) = 0;
LAB_01a81730:
    if (*(char *)((long)param_1 + 0xa1c) == '\0') goto LAB_01a81738;
LAB_01a818dc:
    iVar7 = (**(code **)(*param_1 + 0x300))(param_1);
    if (iVar7 == 2) {
      if (*(char *)((long)param_1 + 0xa1d) != '\0') {
        (**(code **)(*param_1 + 0x310))(param_1);
        cVar3 = *(char *)((long)param_1 + 0xa24);
        goto joined_r0x01a81d28;
      }
LAB_01a818fc:
      *(undefined4 *)(param_1 + 0x144) = 0;
      cVar3 = *(char *)((long)param_1 + 0xa24);
    }
    else {
      if (iVar7 != 0) {
        if (iVar7 != 1) goto LAB_01a81738;
        goto LAB_01a818fc;
      }
      if ((int)param_1[0x144] < 1) {
LAB_01a81d98:
        uVar6 = (**(code **)(*param_1 + 0x318))(param_1);
        *(undefined4 *)(param_1 + 0x144) = uVar6;
        cVar3 = *(char *)((long)param_1 + 0xa24);
      }
      else {
        iVar7 = (int)param_1[0x144] + -1;
        *(int *)(param_1 + 0x144) = iVar7;
        if (iVar7 != 0) goto LAB_01a81738;
        iVar7 = (**(code **)(*param_1 + 0x308))(param_1);
        if (iVar7 == 0) {
          uVar6 = (**(code **)(*param_1 + 0x318))(param_1);
          *(undefined4 *)(param_1 + 0x144) = uVar6;
          *(undefined1 *)((long)param_1 + 0xa1d) = 1;
          cVar3 = *(char *)((long)param_1 + 0xa24);
        }
        else {
          if (iVar7 != 1) {
            if (iVar7 == 2) goto LAB_01a81d98;
            goto LAB_01a81738;
          }
          *(undefined4 *)(param_1 + 0x144) = 1;
          cVar3 = *(char *)((long)param_1 + 0xa24);
        }
      }
    }
  }
  else {
    lVar9 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar11 = *(float *)(param_1 + 0x143) + (float)((double)*(long *)(lVar9 + 8) / 1000000000.0);
    *(float *)(param_1 + 0x143) = fVar11;
    if (fVar11 < 10000.0) goto LAB_01a81730;
    *(undefined4 *)(param_1 + 0x143) = 0x461c4000;
    if (*(char *)((long)param_1 + 0xa1c) != '\0') goto LAB_01a818dc;
LAB_01a81738:
    cVar3 = *(char *)((long)param_1 + 0xa24);
  }
joined_r0x01a81d28:
  if (cVar3 != '\0') {
    iVar7 = (**(code **)(*param_1 + 800))(param_1);
    if (iVar7 == 2) {
      if (*(char *)((long)param_1 + 0xa25) == '\0') {
LAB_01a81928:
        *(undefined4 *)(param_1 + 0x145) = 0;
      }
      else {
        (**(code **)(*param_1 + 0x330))(param_1);
      }
    }
    else if (iVar7 == 0) {
      if ((int)param_1[0x145] < 1) {
LAB_01a81dc0:
        uVar6 = (**(code **)(*param_1 + 0x338))(param_1);
        *(undefined4 *)(param_1 + 0x145) = uVar6;
      }
      else {
        iVar7 = (int)param_1[0x145] + -1;
        *(int *)(param_1 + 0x145) = iVar7;
        if (iVar7 == 0) {
          iVar7 = (**(code **)(*param_1 + 0x328))(param_1);
          if (iVar7 == 1) {
            *(undefined4 *)(param_1 + 0x145) = 1;
          }
          else if (iVar7 == 0) {
            uVar6 = (**(code **)(*param_1 + 0x338))(param_1);
            *(undefined4 *)(param_1 + 0x145) = uVar6;
            *(undefined1 *)((long)param_1 + 0xa25) = 1;
          }
          else if (iVar7 == 2) goto LAB_01a81dc0;
        }
      }
    }
    else if (iVar7 == 1) goto LAB_01a81928;
  }
  local_48 = (long *)0x0;
  uStack_40 = 0;
  FUN_01a2bf84(&local_48,param_1 + 0xb9);
  FUN_009c685c(&local_38,&local_48);
  plVar5 = local_48;
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 1;
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
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *plVar5;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  if (local_38 == (long *)0x0) {
    return;
  }
  iVar7 = (int)param_1[0x14c];
  if (iVar7 == 3) {
    uVar8 = (**(code **)(*local_38 + 0x1d8))();
    if ((uVar8 & 1) != 0) {
LAB_01a81ad8:
      iVar7 = (int)param_1[0x14c];
joined_r0x01a817e0:
      if (iVar7 == 0) goto joined_r0x01a81cfc;
      goto LAB_01a81ce8;
    }
  }
  else {
    if (iVar7 == 2) {
      uVar8 = (**(code **)(*local_38 + 0x1d8))();
      if ((uVar8 & 1) == 0) goto LAB_01a81ad8;
      uVar6 = 3;
    }
    else {
      if (iVar7 != 1) goto joined_r0x01a817e0;
      if ((char)param_1[0x146] != '\0') goto LAB_01a81ad8;
      uVar6 = 2;
    }
    *(undefined4 *)(param_1 + 0x14c) = uVar6;
LAB_01a81ce8:
    uVar8 = FUN_01a5d488(local_38);
    if ((uVar8 & 1) == 0) goto joined_r0x01a81cfc;
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
joined_r0x01a81cfc:
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


