/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c39c8; name: FUN_013c39c8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_013c39c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined1 *local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  undefined6 local_d0;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  undefined2 local_c2;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  
  if (((*(long *)(param_1 + 0x68) != 0) && (*(long *)(*(long *)(param_1 + 0x68) + 0xb0) != 0)) &&
     (plVar10 = *(long **)(param_1 + 0x2c8), plVar10 != (long *)0x0)) {
    plVar1 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar11 = (long *)plVar10[0x37];
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar8;
        }
        piVar2 = (int *)(lVar12 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar12 = plVar11[0xb];
        piVar2 = (int *)(lVar12 + 0xc);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
        if (((*PTR_DAT_04379558 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        lVar12 = *(long *)PTR_DAT_04379560;
        *(long *)PTR_DAT_04379568 = lVar12;
        if ((lVar12 != 0) && (FUN_01148cdc(&local_58), local_58 != (long *)0x0)) {
          FUN_02c35c98(plVar11);
          uStack_c0 = 0;
          local_d0 = 0;
          uStack_ca = 0;
          uStack_c8 = 0;
          local_c2 = 0;
          local_e0 = (long *)0x0;
          local_d8 = (long *)0x0;
          local_f0 = (long *)0x0;
          local_e8 = (long *)0x0;
          local_f8 = (long *)plVar10[0x39];
          if (local_f8 == (long *)0x0) {
            local_f8 = (long *)0x0;
            local_f0 = (long *)plVar10[0x38];
          }
          else {
            plVar9 = local_f8 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_f8 + 0x10))();
              local_f0 = (long *)plVar10[0x38];
            }
            else {
              local_f0 = (long *)plVar10[0x38];
            }
          }
          if (local_f0 == (long *)0x0) {
            local_f0 = (long *)0x0;
          }
          else {
            plVar9 = local_f0 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_f0 + 0x10))();
            }
          }
          local_e8 = plVar11;
          uVar8 = FUN_00d40878(param_1);
          local_120 = (undefined1 *)0xdf45236dd223994e;
          pcStack_118 = "common/mystery_card.dat";
          local_110 = 0x17;
          local_108 = (long *)0x0;
          FUN_00d37bb4(&local_100,uVar8,&local_120,10);
          local_e0 = (long *)local_100[0xd];
          if (local_e0 == (long *)0x0) {
            local_e0 = (long *)0x0;
          }
          else {
            plVar9 = local_e0 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_e0 + 0x10))();
            }
          }
          if (local_100 != (long *)0x0) {
            lVar12 = local_100[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_100 + 0x20))();
            }
          }
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          uVar8 = FUN_00d40878(param_1);
          local_120 = (undefined1 *)0xe3ff362f39a6730a;
          pcStack_118 = "common/zkn_type.dat";
          local_110 = 0x13;
          local_108 = (long *)0x0;
          FUN_00d37bb4(&local_100,uVar8,&local_120,10);
          local_d8 = (long *)local_100[0xd];
          if (local_d8 == (long *)0x0) {
            local_d8 = (long *)0x0;
          }
          else {
            plVar9 = local_d8 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_d8 + 0x10))();
            }
          }
          if (local_100 != (long *)0x0) {
            lVar12 = local_100[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_100 + 0x20))();
            }
          }
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          uVar8 = FUN_00d40878(param_1);
          local_120 = (undefined1 *)0x5d17a9aed6c828c8;
          pcStack_118 = "common/zkn_form.dat";
          local_110 = 0x13;
          local_108 = (long *)0x0;
          FUN_00d37bb4(&local_100,uVar8,&local_120,10);
          plVar9 = (long *)local_100[0xd];
          if (plVar9 == (long *)0x0) {
            local_d0 = 0;
            uStack_ca = 0;
          }
          else {
            plVar3 = plVar9 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *(int *)plVar3 = (int)*plVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            local_d0 = SUB86(plVar9,0);
            uStack_ca = (undefined2)((ulong)plVar9 >> 0x30);
            do {
              iVar7 = (int)*plVar3 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *(int *)plVar3 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
          }
          if (local_100 != (long *)0x0) {
            lVar12 = local_100[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_100 + 0x20))();
            }
          }
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          uStack_c8 = (undefined6)*param_2;
          local_c2 = (undefined2)((ulong)*param_2 >> 0x30);
          uStack_c0 = (undefined6)param_2[1];
          uStack_ba = (undefined2)((ulong)param_2[1] >> 0x30);
          local_b8 = param_2[2];
          local_b0 = param_2[3];
          local_a8 = param_2[4];
          local_a0 = param_2[5];
          local_98 = param_2[6];
          local_90 = param_2[7];
          local_88 = param_2[8];
          local_80 = param_2[9];
          local_78 = param_2[10];
          local_70 = param_2[0xb];
          local_68 = param_2[0xc];
          local_60 = param_2[0xd];
          FUN_013bcac0(&local_f8);
          local_120 = (undefined1 *)0x8fb815a4e5c07f4b;
          pcStack_118 = "pane_T_text_00";
          local_110 = 0xe;
          local_108 = (long *)0x0;
          FUN_0283ce7c(plVar10,&local_120,local_f8,10);
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          FUN_02c35c98(plVar11);
          local_60 = local_60 & 0xffffffff00000000;
          local_f0 = (long *)0x0;
          local_e8 = (long *)0x0;
          local_e0 = (long *)0x0;
          local_d8 = (long *)0x0;
          local_d0 = 0;
          uStack_ca = 0;
          uStack_c8 = 0;
          local_f8 = (long *)plVar10[0x39];
          if (local_f8 == (long *)0x0) {
            local_f8 = (long *)0x0;
            local_f0 = (long *)plVar10[0x38];
          }
          else {
            plVar9 = local_f8 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_f8 + 0x10))();
              local_f0 = (long *)plVar10[0x38];
            }
            else {
              local_f0 = (long *)plVar10[0x38];
            }
          }
          if (local_f0 == (long *)0x0) {
            local_f0 = (long *)0x0;
          }
          else {
            plVar9 = local_f0 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_f0 + 0x10))();
            }
          }
          local_e8 = plVar11;
          uVar8 = FUN_00d40878(param_1);
          local_110 = 0x12;
          local_108 = (long *)0x0;
          local_120 = (undefined1 *)0x9bf1d120b9d1525;
          pcStack_118 = "common/mystery.dat";
          FUN_00d37bb4(&local_100,uVar8,&local_120,10);
          local_e0 = (long *)local_100[0xd];
          if (local_e0 == (long *)0x0) {
            local_e0 = (long *)0x0;
          }
          else {
            plVar9 = local_e0 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_e0 + 0x10))();
            }
          }
          if (local_100 != (long *)0x0) {
            lVar12 = local_100[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_100 + 0x20))();
            }
          }
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          uVar8 = FUN_00d40878(param_1);
          local_120 = &DAT_cda5145a42cb9db6;
          pcStack_118 = "common/dressup_item_name.dat";
          local_110 = 0x1c;
          local_108 = (long *)0x0;
          FUN_00d37bb4(&local_100,uVar8,&local_120,10);
          local_d8 = (long *)local_100[0xd];
          if (local_d8 == (long *)0x0) {
            local_d8 = (long *)0x0;
          }
          else {
            plVar9 = local_d8 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_d8 + 0x10))();
            }
          }
          if (local_100 != (long *)0x0) {
            lVar12 = local_100[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_100 + 0x20))();
            }
          }
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          local_d0 = (undefined6)*param_2;
          uStack_ca = (undefined2)((ulong)*param_2 >> 0x30);
          uStack_c8 = (undefined6)param_2[1];
          local_c2 = (undefined2)((ulong)param_2[1] >> 0x30);
          local_b8 = param_2[3];
          local_b0 = param_2[4];
          local_a8 = param_2[5];
          uStack_c0 = (undefined6)param_2[2];
          uStack_ba = (undefined2)((ulong)param_2[2] >> 0x30);
          local_a0 = param_2[6];
          local_98 = param_2[7];
          local_90 = param_2[8];
          local_88 = param_2[9];
          local_80 = param_2[10];
          local_78 = param_2[0xb];
          local_70 = param_2[0xc];
          local_68 = param_2[0xd];
          uVar6 = FUN_01123ce8(local_58);
          local_60 = CONCAT44(local_60._4_4_,uVar6) & 0xffffffff000000ff;
          FUN_013bce00(&local_f8);
          local_120 = (undefined1 *)0x8fb814a4e5c07d98;
          pcStack_118 = "pane_T_text_01";
          local_110 = 0xe;
          local_108 = (long *)0x0;
          FUN_0283ce7c(plVar10,&local_120,local_f8,10);
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          FUN_02c35c98(plVar11);
          local_e0 = (long *)0x0;
          local_d8 = (long *)0x0;
          local_f0 = (long *)0x0;
          local_e8 = (long *)0x0;
          local_f8 = (long *)plVar10[0x39];
          if (local_f8 == (long *)0x0) {
            local_f8 = (long *)0x0;
            local_f0 = (long *)plVar10[0x38];
          }
          else {
            plVar9 = local_f8 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_f8 + 0x10))();
              local_f0 = (long *)plVar10[0x38];
            }
            else {
              local_f0 = (long *)plVar10[0x38];
            }
          }
          if (local_f0 == (long *)0x0) {
            local_f0 = (long *)0x0;
          }
          else {
            plVar9 = local_f0 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_f0 + 0x10))();
            }
          }
          local_d8 = (long *)*param_2;
          uVar8 = FUN_00d40878(param_1);
          local_110 = 0x12;
          local_108 = (long *)0x0;
          local_120 = (undefined1 *)0x9bf1d120b9d1525;
          pcStack_118 = "common/mystery.dat";
          FUN_00d37bb4(&local_100,uVar8,&local_120,10);
          local_e8 = (long *)local_100[0xd];
          if (local_e8 == (long *)0x0) {
            local_e8 = (long *)0x0;
          }
          else {
            plVar9 = local_e8 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = (int)*plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              iVar7 = (int)*plVar9 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_e8 + 0x10))();
            }
          }
          if (local_100 != (long *)0x0) {
            lVar12 = local_100[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_100 + 0x20))();
            }
          }
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          local_e0 = plVar11;
          FUN_013bd4b0(&local_f8);
          local_120 = (undefined1 *)0x8fb817a4e5c082b1;
          pcStack_118 = "pane_T_text_02";
          local_110 = 0xe;
          local_108 = (long *)0x0;
          FUN_0283ce7c(plVar10,&local_120,local_f8,10);
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          if (local_58 != (long *)0x0) {
            lVar12 = local_58[0xb];
            piVar2 = (int *)(lVar12 + 0xc);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_58 + 0x20))();
            }
          }
          do {
            iVar7 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


