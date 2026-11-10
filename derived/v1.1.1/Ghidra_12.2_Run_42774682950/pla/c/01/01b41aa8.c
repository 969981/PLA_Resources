/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b41aa8; name: FUN_01b41aa8
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01b41aa8(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long *local_60;
  undefined8 uStack_58;
  long local_48;
  
  iVar9 = *(int *)(param_2 + 3);
  if (iVar9 == 1) {
LAB_01b41ad8:
    pcVar12 = *(code **)(param_1 + 0xc48);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xc50) = 0;
      *(undefined8 *)(param_1 + 0xc58) = 0;
      *(undefined8 *)(param_1 + 0xc40) = 0;
      *(undefined8 *)(param_1 + 0xc48) = 0;
      (*pcVar12)(param_1 + 0xc60);
    }
    if ((code *)param_2[0x10] != (code *)0x0) {
      (*(code *)param_2[0x10])(param_2 + 0x12,param_1 + 0xc60);
      uVar3 = param_2[0xe];
      uVar4 = param_2[0xf];
      uVar5 = param_2[0x11];
      *(undefined8 *)(param_1 + 0xc50) = param_2[0x10];
      *(undefined8 *)(param_1 + 0xc58) = uVar5;
      *(undefined8 *)(param_1 + 0xc40) = uVar3;
      *(undefined8 *)(param_1 + 0xc48) = uVar4;
    }
    pcVar12 = *(code **)(param_1 + 0xcc8);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xcd0) = 0;
      *(undefined8 *)(param_1 + 0xcd8) = 0;
      *(undefined8 *)(param_1 + 0xcc0) = 0;
      *(undefined8 *)(param_1 + 0xcc8) = 0;
      (*pcVar12)(param_1 + 0xce0);
    }
    if ((code *)param_2[0x20] != (code *)0x0) {
      (*(code *)param_2[0x20])(param_2 + 0x22,param_1 + 0xce0);
      uVar3 = param_2[0x1e];
      uVar4 = param_2[0x1f];
      uVar5 = param_2[0x21];
      *(undefined8 *)(param_1 + 0xcd0) = param_2[0x20];
      *(undefined8 *)(param_1 + 0xcd8) = uVar5;
      *(undefined8 *)(param_1 + 0xcc0) = uVar3;
      *(undefined8 *)(param_1 + 0xcc8) = uVar4;
    }
  }
  else {
    if (iVar9 == 2) {
      if (*(int *)(param_1 + 0xbf8) != 4) {
        return false;
      }
      *(undefined8 *)(param_1 + 0xc38) = param_2[1];
      *(undefined8 *)(param_1 + 0xc30) = *param_2;
      goto LAB_01b41ad8;
    }
    if (iVar9 != 0) {
      return false;
    }
    *(undefined8 *)(param_1 + 0xc38) = param_2[1];
    *(undefined8 *)(param_1 + 0xc30) = *param_2;
    pcVar12 = *(code **)(param_1 + 0xc48);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xc50) = 0;
      *(undefined8 *)(param_1 + 0xc58) = 0;
      *(undefined8 *)(param_1 + 0xc40) = 0;
      *(undefined8 *)(param_1 + 0xc48) = 0;
      (*pcVar12)(param_1 + 0xc60);
    }
    if ((code *)param_2[0x10] != (code *)0x0) {
      (*(code *)param_2[0x10])(param_2 + 0x12,param_1 + 0xc60);
      uVar3 = param_2[0xe];
      uVar4 = param_2[0xf];
      uVar5 = param_2[0x11];
      *(undefined8 *)(param_1 + 0xc50) = param_2[0x10];
      *(undefined8 *)(param_1 + 0xc58) = uVar5;
      *(undefined8 *)(param_1 + 0xc40) = uVar3;
      *(undefined8 *)(param_1 + 0xc48) = uVar4;
    }
    pcVar12 = *(code **)(param_1 + 0xcc8);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xcd0) = 0;
      *(undefined8 *)(param_1 + 0xcd8) = 0;
      *(undefined8 *)(param_1 + 0xcc0) = 0;
      *(undefined8 *)(param_1 + 0xcc8) = 0;
      (*pcVar12)(param_1 + 0xce0);
    }
    if ((code *)param_2[0x20] != (code *)0x0) {
      (*(code *)param_2[0x20])(param_2 + 0x22,param_1 + 0xce0);
      uVar3 = param_2[0x1e];
      uVar4 = param_2[0x1f];
      uVar5 = param_2[0x21];
      *(undefined8 *)(param_1 + 0xcd0) = param_2[0x20];
      *(undefined8 *)(param_1 + 0xcd8) = uVar5;
      *(undefined8 *)(param_1 + 0xcc0) = uVar3;
      *(undefined8 *)(param_1 + 0xcc8) = uVar4;
    }
    if (*(int *)(param_1 + 0xbf8) != 0) {
      return *(int *)(param_1 + 0xbf8) != 3;
    }
  }
  lVar11 = param_1 + 0x5f8;
  local_60 = (long *)0x0;
  uStack_58 = 0;
  FUN_01a6a07c(&local_60,lVar11);
  plVar14 = local_60;
  if (local_60 != (long *)0x0) {
    if (*(int *)((long)local_60 + 0xc) != 0) {
      piVar1 = (int *)((long)local_60 + 0xc);
      iVar9 = *(int *)((long)local_60 + 0xc);
      do {
        plVar10 = (long *)plVar14[2];
        lVar13 = FUN_018e43a0();
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_01b42028;
          if (plVar10 == (long *)lVar13) break;
          plVar10 = (long *)*plVar10;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar9) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar9 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            lVar13 = plVar14[3];
            plVar14 = (long *)0x0;
            plVar10 = local_60;
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x01b41f80;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar6;
      } while (iVar6 != 0);
    }
LAB_01b42028:
    plVar14 = (long *)0x0;
    plVar10 = local_60;
joined_r0x01b41f80:
    local_60 = plVar10;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *(int *)plVar2 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        plVar10[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *plVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    if (plVar14 != (long *)0x0) {
      FUN_0260c968(plVar14,1);
      lVar13 = plVar14[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar9 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xd40) = *(undefined4 *)(param_2 + 3);
  FUN_00956dac(&local_60,param_1 + 0x1a8);
  lVar13 = local_60[0x1a];
  *(long *)(param_1 + 0xc28) = local_60[0x1b];
  *(long *)(param_1 + 0xc20) = lVar13;
  if (local_60 != (long *)0x0) {
    lVar13 = local_60[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar9 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 0xbf4) = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xd78) = param_2[0xb];
  *(undefined8 *)(param_1 + 0xd70) = param_2[10];
  FUN_00b636fc(param_1 + 0xd48,param_2 + 4);
  plVar14 = (long *)param_2[8];
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  plVar10 = *(long **)(param_1 + 0xd68);
  *(long **)(param_1 + 0xd68) = plVar14;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  FUN_008c4b3c(param_1 + 0xd58,param_2 + 6);
  *(undefined1 *)(param_1 + 0xd82) = *(undefined1 *)((long)param_2 + 0x17c);
  *(undefined8 *)(param_1 + 0xda8) = param_2[0x33];
  *(undefined8 *)(param_1 + 0xda0) = param_2[0x32];
  *(undefined8 *)(param_1 + 0xd98) = param_2[0x31];
  *(undefined8 *)(param_1 + 0xd90) = param_2[0x30];
  *(undefined4 *)(param_1 + 0xbf0) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0xdb0) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)(param_1 + 0xdb8) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)(param_1 + 0xdb4) = *(undefined4 *)((long)param_2 + 0x174);
  *(undefined1 *)(param_1 + 0xd80) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xd81) = *(undefined1 *)((long)param_2 + 0x61);
  if (*(int *)(param_1 + 0xbf8) == 0) {
    FUN_00956dac(&local_60,param_1 + 0x1a8);
    lVar13 = local_60[0x16];
    *(long *)(param_1 + 0xc18) = local_60[0x17];
    *(long *)(param_1 + 0xc10) = lVar13;
    if (local_60 != (long *)0x0) {
      lVar13 = local_60[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar9 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
  }
  iVar9 = *(int *)(param_1 + 0xd40);
  if (iVar9 == 1) {
    if (*(int *)(param_1 + 0xbf8) != 4) {
      *(undefined8 *)(param_1 + 0xbf8) = 1;
      *(undefined4 *)(param_1 + 0xc00) = *(undefined4 *)(param_1 + 0xbf0);
      local_60 = (long *)0x0;
      uStack_58 = 0;
      FUN_01a6a07c(&local_60,lVar11);
      plVar14 = local_60;
      if (local_60 != (long *)0x0) {
        if (*(int *)((long)local_60 + 0xc) != 0) {
          piVar1 = (int *)((long)local_60 + 0xc);
          iVar9 = *(int *)((long)local_60 + 0xc);
          do {
            plVar10 = (long *)plVar14[2];
            lVar11 = FUN_018e43a0();
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_01b423d4;
              if (plVar10 == (long *)lVar11) break;
              plVar10 = (long *)*plVar10;
            }
            iVar6 = *piVar1;
            if (iVar6 == iVar9) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar9 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') {
                lVar11 = plVar14[3];
                plVar14 = (long *)0x0;
                plVar10 = local_60;
                if (lVar11 != 0) {
                  plVar14 = (long *)(lVar11 + -0x50);
                }
                goto joined_r0x01b42348;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar9 = iVar6;
          } while (iVar6 != 0);
        }
LAB_01b423d4:
        plVar14 = (long *)0x0;
        plVar10 = local_60;
joined_r0x01b42348:
        local_60 = plVar10;
        if (plVar10 != (long *)0x0) {
          plVar2 = plVar10 + 1;
          do {
            iVar9 = (int)*plVar2 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *(int *)plVar2 = iVar9;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar9 == 0) {
            plVar10[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_48 = *plVar10;
            FUN_02a44274(lVar11 + 0xd8,&local_48);
          }
        }
        if (plVar14 != (long *)0x0) {
          FUN_0260f8fc(plVar14);
          lVar11 = plVar14[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar1 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar9;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_01b42198:
          if (iVar9 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
      }
LAB_01b41dd4:
      FUN_01b42570(param_1);
      pcVar12 = *(code **)(param_1 + 0xae0);
      goto joined_r0x01b4250c;
    }
    *(undefined8 *)(param_1 + 0xbf8) = 2;
    *(undefined4 *)(param_1 + 0xc00) = *(undefined4 *)(param_1 + 0xbf4);
    local_60 = (long *)0x0;
    uStack_58 = 0;
    FUN_01a6a07c(&local_60,lVar11);
    plVar14 = local_60;
    if (local_60 == (long *)0x0) {
LAB_01b41cb0:
      cVar7 = *(char *)(param_1 + 0xd80);
    }
    else {
      if (*(int *)((long)local_60 + 0xc) != 0) {
        piVar1 = (int *)((long)local_60 + 0xc);
        iVar9 = *(int *)((long)local_60 + 0xc);
        do {
          plVar10 = (long *)plVar14[2];
          lVar11 = FUN_018e43a0();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_01b422b0;
            if (plVar10 == (long *)lVar11) break;
            plVar10 = (long *)*plVar10;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar9) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar9 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              lVar11 = plVar14[3];
              plVar14 = (long *)0x0;
              plVar10 = local_60;
              if (lVar11 != 0) {
                plVar14 = (long *)(lVar11 + -0x50);
              }
              goto joined_r0x01b42200;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar6;
        } while (iVar6 != 0);
      }
LAB_01b422b0:
      plVar14 = (long *)0x0;
      plVar10 = local_60;
joined_r0x01b42200:
      local_60 = plVar10;
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 1;
        do {
          iVar9 = (int)*plVar2 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(int *)plVar2 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          plVar10[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = *plVar10;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      if (plVar14 == (long *)0x0) goto LAB_01b41cb0;
      FUN_0260f998(plVar14,0);
      lVar11 = plVar14[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar9 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 + -1 != 0) goto LAB_01b41cb0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
      cVar7 = *(char *)(param_1 + 0xd80);
    }
    if (cVar7 != '\0') {
      FUN_01b426d8(param_1);
    }
  }
  else if (iVar9 == 2) {
    *(undefined8 *)(param_1 + 0xbf8) = 2;
    *(undefined4 *)(param_1 + 0xc00) = *(undefined4 *)(param_1 + 0xbf4);
    local_60 = (long *)0x0;
    uStack_58 = 0;
    FUN_01a6a07c(&local_60,lVar11);
    plVar14 = local_60;
    if (local_60 != (long *)0x0) {
      if (*(int *)((long)local_60 + 0xc) != 0) {
        piVar1 = (int *)((long)local_60 + 0xc);
        iVar9 = *(int *)((long)local_60 + 0xc);
        do {
          plVar10 = (long *)plVar14[2];
          lVar11 = FUN_018e43a0();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_01b4251c;
            if (plVar10 == (long *)lVar11) break;
            plVar10 = (long *)*plVar10;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar9) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar9 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              lVar11 = plVar14[3];
              plVar14 = (long *)0x0;
              plVar10 = local_60;
              if (lVar11 != 0) {
                plVar14 = (long *)(lVar11 + -0x50);
              }
              goto joined_r0x01b4246c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar6;
        } while (iVar6 != 0);
      }
LAB_01b4251c:
      plVar14 = (long *)0x0;
      plVar10 = local_60;
joined_r0x01b4246c:
      local_60 = plVar10;
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 1;
        do {
          iVar9 = (int)*plVar2 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(int *)plVar2 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          plVar10[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = *plVar10;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      if (plVar14 != (long *)0x0) {
        FUN_0260f998(plVar14,1);
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar9 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          pcVar12 = *(code **)(param_1 + 0xae0);
          goto joined_r0x01b4250c;
        }
      }
    }
  }
  else if (iVar9 == 0) {
    *(undefined8 *)(param_1 + 0xbf8) = 1;
    *(undefined4 *)(param_1 + 0xc00) = *(undefined4 *)(param_1 + 0xbf0);
    local_60 = (long *)0x0;
    uStack_58 = 0;
    FUN_01a6a07c(&local_60,lVar11);
    plVar14 = local_60;
    if (local_60 != (long *)0x0) {
      if (*(int *)((long)local_60 + 0xc) != 0) {
        piVar1 = (int *)((long)local_60 + 0xc);
        iVar9 = *(int *)((long)local_60 + 0xc);
        do {
          plVar10 = (long *)plVar14[2];
          lVar11 = FUN_018e43a0();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_01b4214c;
            if (plVar10 == (long *)lVar11) break;
            plVar10 = (long *)*plVar10;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar9) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar9 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              lVar11 = plVar14[3];
              plVar14 = (long *)0x0;
              plVar10 = local_60;
              if (lVar11 != 0) {
                plVar14 = (long *)(lVar11 + -0x50);
              }
              goto joined_r0x01b420c0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar6;
        } while (iVar6 != 0);
      }
LAB_01b4214c:
      plVar14 = (long *)0x0;
      plVar10 = local_60;
joined_r0x01b420c0:
      local_60 = plVar10;
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 1;
        do {
          iVar9 = (int)*plVar2 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(int *)plVar2 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          plVar10[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = *plVar10;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      if (plVar14 != (long *)0x0) {
        FUN_0260f8fc(plVar14);
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        goto LAB_01b42198;
      }
    }
    goto LAB_01b41dd4;
  }
  pcVar12 = *(code **)(param_1 + 0xae0);
joined_r0x01b4250c:
  if (pcVar12 != (code *)0x0) {
    local_60 = (long *)((ulong)local_60 & 0xffffffffffffff00);
    (*pcVar12)(param_1 + 0xb00,&local_60);
  }
  return true;
}


