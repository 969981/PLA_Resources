/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0138a60c; name: FUN_0138a60c
 */


void FUN_0138a60c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 local_1e0;
  code *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  long *local_160;
  char *pcStack_158;
  undefined8 local_150;
  long *local_148;
  long *local_140;
  char *pcStack_138;
  undefined8 local_130;
  long *local_128;
  long *local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [104];
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  plVar16 = *(long **)(param_1 + 0x2c8);
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
  FUN_00d8c950(&local_160);
  FUN_016b6208(&local_140,local_160);
  FUN_0165dc5c(&local_120,local_140);
  FUN_016afe80(local_70,local_120);
  if (local_120 != (long *)0x0) {
    plVar17 = local_120 + 10;
    do {
      iVar6 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_120 + 0x10))();
    }
  }
  if (local_140 != (long *)0x0) {
    plVar17 = local_140 + 10;
    do {
      iVar6 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_140 + 0x10))();
    }
  }
  if (local_160 != (long *)0x0) {
    plVar17 = local_160 + 10;
    do {
      iVar6 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
  FUN_016a50f0(&local_78,local_70[0],param_2,*(undefined8 *)(param_1 + 8));
  local_120 = (long *)0xe7082d5f87038942;
  local_118 = (code *)0x394531e;
  local_110 = (code *)&DAT_00000019;
  local_108 = (code *)0x0;
  FUN_00d37bb4(&local_140,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_120,10);
  plVar17 = (long *)local_140[0xd];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_140 != (long *)0x0) {
    lVar10 = local_140[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_140 + 0x20))();
    }
  }
  if (local_108 != (code *)0x0) {
    (**(code **)(*(long *)local_108 + 0x20))();
  }
  plVar18 = (long *)plVar16[0x29];
  lVar10 = plVar16[0x2a];
  plVar11 = plVar18 + lVar10 * 6;
  plVar7 = plVar18;
  if ((lVar10 != 0) && (*plVar18 != -0x68c9355d831371b3)) {
    lVar13 = lVar10 * 0x30;
    plVar15 = plVar18;
    do {
      lVar13 = lVar13 + -0x30;
      if (lVar13 == 0) {
        plVar7 = plVar11;
        break;
      }
      plVar1 = plVar15 + 6;
      plVar7 = plVar15 + 6;
      plVar15 = plVar15 + 6;
    } while (*plVar1 != -0x68c9355d831371b3);
  }
  plVar15 = plVar18 + lVar10 * 6;
  if (plVar7 == plVar15) {
    lVar13 = 0;
  }
  else {
    lVar13 = plVar7[4];
  }
  if ((lVar10 != 0) && (*plVar18 != -0x7c34927266aee02e)) {
    lVar10 = lVar10 * 0x30;
    plVar7 = plVar18;
    do {
      lVar10 = lVar10 + -0x30;
      plVar18 = plVar15;
      if (lVar10 == 0) break;
      plVar18 = plVar7 + 6;
      plVar1 = plVar7 + 6;
      plVar7 = plVar18;
    } while (*plVar1 != -0x7c34927266aee02e);
  }
  if ((((plVar18 == plVar11) || (lVar13 == 0)) || (plVar18[4] == 0)) || (local_78 == (long *)0x0))
  goto LAB_0138b2ec;
  plVar18 = (long *)plVar16[0x38];
  if (*(int *)(param_1 + 0x5ac) == 0) {
    if (plVar18 == (long *)0x0) {
      lVar10 = plVar17[0x16];
      if (lVar10 != 0) {
        plVar18 = *(long **)(lVar10 + 0x270);
        if (plVar18 != *(long **)(lVar10 + 0x278)) {
          iVar6 = 0;
          do {
            plVar7 = (long *)PTR_DAT_04379c88;
            if (*plVar18 != 0) {
              plVar7 = (long *)(*plVar18 + 0x58);
            }
            if (*plVar7 == 0x31dfde3e67130017) goto LAB_0138b6fc;
            plVar18 = plVar18 + 1;
            iVar6 = iVar6 + 1;
          } while (*(long **)(lVar10 + 0x278) != plVar18);
        }
      }
      goto LAB_0138b6f8;
    }
    plVar7 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = plVar17[0x16];
    if (lVar10 != 0) {
      plVar11 = *(long **)(lVar10 + 0x270);
      if (plVar11 != *(long **)(lVar10 + 0x278)) {
        iVar6 = 0;
        do {
          plVar15 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar15 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar15 == 0x31dfde3e67130017) goto LAB_0138b400;
          plVar11 = plVar11 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar11);
      }
    }
    iVar6 = 0;
LAB_0138b400:
    FUN_02c2e33c(plVar17,iVar6,plVar18);
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
joined_r0x0138b41c:
    if (iVar6 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  else {
    if (plVar18 != (long *)0x0) {
      plVar7 = plVar18 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar10 = plVar17[0x16];
      if (lVar10 != 0) {
        plVar11 = *(long **)(lVar10 + 0x270);
        if (plVar11 != *(long **)(lVar10 + 0x278)) {
          iVar6 = 0;
          do {
            plVar15 = (long *)PTR_DAT_04379c88;
            if (*plVar11 != 0) {
              plVar15 = (long *)(*plVar11 + 0x58);
            }
            if (*plVar15 == 0x31dfdd3e6712fe64) goto LAB_0138a90c;
            plVar11 = plVar11 + 1;
            iVar6 = iVar6 + 1;
          } while (*(long **)(lVar10 + 0x278) != plVar11);
        }
      }
      iVar6 = 0;
LAB_0138a90c:
      FUN_02c2e33c(plVar17,iVar6,plVar18);
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto joined_r0x0138b41c;
    }
    lVar10 = plVar17[0x16];
    if (lVar10 != 0) {
      plVar18 = *(long **)(lVar10 + 0x270);
      if (plVar18 != *(long **)(lVar10 + 0x278)) {
        iVar6 = 0;
        do {
          plVar7 = (long *)PTR_DAT_04379c88;
          if (*plVar18 != 0) {
            plVar7 = (long *)(*plVar18 + 0x58);
          }
          if (*plVar7 == 0x31dfdd3e6712fe64) goto LAB_0138b6fc;
          plVar18 = plVar18 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar18);
      }
    }
LAB_0138b6f8:
    iVar6 = 0;
LAB_0138b6fc:
    FUN_02c2e33c(plVar17,iVar6,0);
  }
  local_120 = (long *)0x9736caa27cec8e4d;
  local_118 = (code *)0x3992028;
  local_110 = (code *)0xe;
  local_108 = (code *)0x0;
  FUN_0283d080(plVar16,&local_120,10);
  if (local_108 != (code *)0x0) {
    (**(code **)(*(long *)local_108 + 0x20))();
  }
  local_120 = (long *)0x83cb6d8d99511fd2;
  local_118 = (code *)0x392915f;
  local_110 = (code *)&DAT_00000014;
  local_108 = (code *)0x0;
  lVar10 = param_1 + 0x180;
  FUN_0283ce7c(plVar16,&local_120,local_78[0xd],10);
  if (local_108 != (code *)0x0) {
    (**(code **)(*(long *)local_108 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x5b8) = *param_2;
  puVar5 = PTR_DAT_043729f0;
  if (*(int *)(param_1 + 0x5b0) == 0) {
    plVar18 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar13 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if ((lVar13 == 0) || (*plVar18 == -0x58735b1eb53524ca)) {
      plVar7 = plVar18;
    }
    else {
      lVar14 = lVar13 * 0x30;
      plVar11 = plVar18;
      do {
        lVar14 = lVar14 + -0x30;
        if (lVar14 == 0) goto LAB_0138b4a0;
        plVar15 = plVar11 + 6;
        plVar7 = plVar11 + 6;
        plVar11 = plVar11 + 6;
      } while (*plVar15 != -0x58735b1eb53524ca);
    }
    if (plVar7 == plVar18 + lVar13 * 6) {
LAB_0138b4a0:
      plVar18 = (long *)0x0;
    }
    else {
      plVar18 = (long *)plVar7[4];
    }
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar6 != 0)) {
      *(undefined8 *)puVar5 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    for (plVar7 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18); plVar7 != (long *)puVar5;
        plVar7 = (long *)*plVar7) {
    }
    *(byte *)(plVar18 + 0xb) = *(byte *)(plVar18 + 0xb) | 1;
    local_120 = (long *)0x8f665b7c943d9f0d;
    local_118 = (code *)0x39b54c0;
    local_110 = (code *)0x1a;
    local_108 = (code *)0x0;
    if (plVar17 != (long *)0x0) {
      plVar18 = plVar17 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_140 = (long *)0x31dcda3e6710c374;
    local_80 = plVar17;
    FUN_011845f4(lVar10,&local_120,&local_80,&local_140,10);
    if (local_80 != (long *)0x0) {
      plVar18 = local_80 + 10;
      do {
        iVar6 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (local_108 != (code *)0x0) {
      (**(code **)(*(long *)local_108 + 0x20))();
    }
    local_120 = (long *)0x8f665a7c943d9d5a;
    local_118 = (code *)0x39a46f9;
    local_110 = (code *)&DAT_0000001a;
    local_108 = (code *)0x0;
    if (plVar17 != (long *)0x0) {
      plVar18 = plVar17 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_140 = (long *)0x31dcd73e6710be5b;
    local_88 = plVar17;
    FUN_011845f4(lVar10,&local_120,&local_88,&local_140,10);
    if (local_88 != (long *)0x0) {
      plVar18 = local_88 + 10;
      do {
        iVar6 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (local_108 != (code *)0x0) {
      (**(code **)(*(long *)local_108 + 0x20))();
    }
  }
  if (*(int *)(param_1 + 0x5ac) == 1) {
    plVar18 = (long *)plVar16[0x38];
    if (plVar18 == (long *)0x0) {
      lVar13 = plVar17[0x16];
      if (lVar13 != 0) {
        plVar18 = *(long **)(lVar13 + 0x270);
        if (plVar18 != *(long **)(lVar13 + 0x278)) {
          iVar6 = 0;
          do {
            plVar7 = (long *)PTR_DAT_04379c88;
            if (*plVar18 != 0) {
              plVar7 = (long *)(*plVar18 + 0x58);
            }
            if (*plVar7 == 0x31dcd83e6710c00e) goto LAB_0138b770;
            plVar18 = plVar18 + 1;
            iVar6 = iVar6 + 1;
          } while (*(long **)(lVar13 + 0x278) != plVar18);
        }
      }
      iVar6 = 0;
LAB_0138b770:
      FUN_02c2e33c(plVar17,iVar6,0);
      plVar18 = (long *)plVar16[0x37];
joined_r0x0138b780:
      if (plVar18 != (long *)0x0) goto LAB_0138ac5c;
LAB_0138b4e4:
      FUN_02c395d0(0,0,(int)local_78[0xc],3,0,1);
    }
    else {
      plVar7 = plVar18 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar13 = plVar17[0x16];
      if (lVar13 != 0) {
        plVar11 = *(long **)(lVar13 + 0x270);
        if (plVar11 != *(long **)(lVar13 + 0x278)) {
          iVar6 = 0;
          do {
            plVar15 = (long *)PTR_DAT_04379c88;
            if (*plVar11 != 0) {
              plVar15 = (long *)(*plVar11 + 0x58);
            }
            if (*plVar15 == 0x31dcd83e6710c00e) goto LAB_0138ac34;
            plVar11 = plVar11 + 1;
            iVar6 = iVar6 + 1;
          } while (*(long **)(lVar13 + 0x278) != plVar11);
        }
      }
      iVar6 = 0;
LAB_0138ac34:
      FUN_02c2e33c(plVar17,iVar6,plVar18);
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        plVar18 = (long *)plVar16[0x37];
        goto joined_r0x0138b780;
      }
      plVar18 = (long *)plVar16[0x37];
      if (plVar18 == (long *)0x0) goto LAB_0138b4e4;
LAB_0138ac5c:
      lVar13 = plVar18[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_0138b8a0;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar8;
      }
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_02c395d0(plVar18,0,(int)local_78[0xc],3,0,1);
      lVar13 = plVar18[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
    local_120 = (long *)&DAT_16af60913822fb04;
    local_118 = (code *)0x399b056;
    local_110 = (code *)0x12;
    local_108 = (code *)0x0;
    FUN_0283d080(plVar16,&local_120,10);
    if (local_108 != (code *)0x0) {
      (**(code **)(*(long *)local_108 + 0x20))();
    }
    iVar6 = *(int *)(param_1 + 0x5b0);
    if (iVar6 == 1) {
      lVar13 = *(long *)(param_1 + 0x4a8);
      local_130 = 0x1c;
      local_128 = (long *)0x0;
      local_160 = (long *)0x661d15ae769cd23d;
      pcStack_158 = "pane_L_reward_00_P_icon_reward_item_00";
      local_140 = (long *)0x1153c1a99eddb038;
      pcStack_138 = "work_mssn_notify_complete_01";
      local_150 = 0x26;
      local_148 = (long *)0x0;
      FUN_00d62910(&local_120,*(undefined8 *)(param_1 + 0x2c8),&local_140,&local_160);
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x20))();
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1e0 = 0;
      local_1d8 = (code *)0x0;
      FUN_0284d5a8(lVar13,*(undefined8 *)(param_1 + 8),&local_120,0,&local_1e0);
      pcVar12 = local_1d8;
      if (local_1d8 != (code *)0x0) {
        local_1d0 = 0;
        uStack_1c8 = 0;
        local_1e0 = 0;
        local_1d8 = (code *)0x0;
        (*pcVar12)(&local_1c0);
      }
      pcVar12 = local_108;
      if (local_108 != (code *)0x0) {
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = (code *)0x0;
        local_108 = (code *)0x0;
        (*pcVar12)(auStack_f0);
      }
      plVar18 = local_120;
      if (local_120 != (long *)0x0) {
        plVar7 = local_120 + 1;
        do {
          iVar6 = (int)*plVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_140 = (long *)*plVar18;
          FUN_02a44274(lVar14 + 0xd8,&local_140);
        }
      }
      local_130 = 0x1c;
      local_128 = (long *)0x0;
      local_160 = (long *)0x661d14ae769cd08a;
      pcStack_158 = "pane_L_reward_00_P_icon_reward_item_01";
      local_140 = (long *)0x1153c1a99eddb038;
      pcStack_138 = "work_mssn_notify_complete_01";
      local_150 = 0x26;
      local_148 = (long *)0x0;
      FUN_00d62910(&local_120,*(undefined8 *)(param_1 + 0x2c8),&local_140,&local_160);
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x20))();
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1e0 = 0;
      local_1d8 = (code *)0x0;
      FUN_0284d5a8(lVar13 + 0xc0,*(undefined8 *)(param_1 + 8),&local_120,0,&local_1e0);
      pcVar12 = local_1d8;
      if (local_1d8 == (code *)0x0) {
        local_1d8 = (code *)0x0;
        pcVar12 = local_108;
      }
      else {
        local_1d0 = 0;
        uStack_1c8 = 0;
        local_1e0 = 0;
        local_1d8 = (code *)0x0;
        (*pcVar12)(&local_1c0);
        pcVar12 = local_108;
      }
      local_108 = pcVar12;
      if (pcVar12 != (code *)0x0) {
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = (code *)0x0;
        local_108 = (code *)0x0;
        (*pcVar12)(auStack_f0);
      }
      plVar18 = local_120;
      if (local_120 != (long *)0x0) {
        plVar7 = local_120 + 1;
        do {
          iVar6 = (int)*plVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_140 = (long *)*plVar18;
          FUN_02a44274(lVar14 + 0xd8,&local_140);
        }
      }
      local_130 = 0x1c;
      local_128 = (long *)0x0;
      local_160 = (long *)0x661d13ae769cced7;
      pcStack_158 = "pane_L_reward_00_P_icon_reward_item_02";
      local_140 = (long *)0x1153c1a99eddb038;
      pcStack_138 = "work_mssn_notify_complete_01";
      local_150 = 0x26;
      local_148 = (long *)0x0;
      FUN_00d62910(&local_120,*(undefined8 *)(param_1 + 0x2c8),&local_140,&local_160);
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x20))();
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1e0 = 0;
      local_1d8 = (code *)0x0;
      FUN_0284d5a8(lVar13 + 0x180,*(undefined8 *)(param_1 + 8),&local_120,0,&local_1e0);
      pcVar12 = local_1d8;
      if (local_1d8 == (code *)0x0) {
        local_1d8 = (code *)0x0;
        pcVar12 = local_108;
      }
      else {
        local_1d0 = 0;
        uStack_1c8 = 0;
        local_1e0 = 0;
        local_1d8 = (code *)0x0;
        (*pcVar12)(&local_1c0);
        pcVar12 = local_108;
      }
      local_108 = pcVar12;
      if (pcVar12 != (code *)0x0) {
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = (code *)0x0;
        local_108 = (code *)0x0;
        (*pcVar12)(auStack_f0);
      }
      plVar18 = local_120;
      if (local_120 != (long *)0x0) {
        plVar7 = local_120 + 1;
        do {
          iVar6 = (int)*plVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_140 = (long *)*plVar18;
          FUN_02a44274(lVar13 + 0xd8,&local_140);
        }
      }
      lVar13 = FUN_016a7b0c(local_70[0]);
      if ((lVar13 == *(long *)(param_1 + 0x5b8)) ||
         (lVar13 = FUN_016a7b0c(local_70[0]), lVar13 == -0x3f15b8ab654a0c27)) {
        FUN_016a7da4(local_70[0],*(undefined8 *)(param_1 + 8));
        FUN_0138b8c0();
      }
      goto LAB_0138b108;
    }
  }
  else {
LAB_0138b108:
    iVar6 = *(int *)(param_1 + 0x5b0);
  }
  if (iVar6 == 0) {
    uVar9 = FUN_0138bff8(param_1);
    if ((uVar9 & 1) == 0) {
      local_120 = (long *)0x3cd8ed9ee38d0c37;
      local_118 = (code *)0x38df7b4;
      local_110 = (code *)&DAT_00000020;
    }
    else {
      local_120 = (long *)0x16dbf78af7fe1a5b;
      local_118 = (code *)0x38c25b5;
      local_110 = (code *)0x1f;
    }
    local_108 = (code *)0x0;
    FUN_00d2df7c(lVar10,&local_120);
    if (local_108 != (code *)0x0) {
      (**(code **)(*(long *)local_108 + 0x20))();
    }
  }
  if ((*(int *)(param_1 + 0x5b0) == 0) && (uVar9 = FUN_0138bff8(param_1), (uVar9 & 1) == 0)) {
    plVar18 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
    if (plVar18 != (long *)0x0) {
      lVar10 = plVar18[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0138b8a0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
      }
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_120 = (long *)0x1e9f5cb72be5c73a;
    local_118 = (code *)0x394e636;
    local_110 = (code *)0x1c;
    local_108 = (code *)0x0;
    lVar10 = FUN_00d4d2c4(plVar18,*(undefined8 *)(param_1 + 8),&local_120);
    if (local_108 != (code *)0x0) {
      (**(code **)(*(long *)local_108 + 0x20))();
    }
    if (plVar18 != (long *)0x0) {
      lVar13 = plVar18[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
    pcVar12 = *(code **)(lVar10 + 0x188);
    *(undefined8 *)(lVar10 + 0xf8) = 0x400;
    local_120 = (long *)&LAB_0138c754;
    local_118 = FUN_0138c914;
    local_110 = FUN_0138c918;
    local_108 = (code *)&LAB_0138c924;
    local_100 = param_1;
    if (pcVar12 == (code *)0x0) {
LAB_0138b284:
      (*local_110)(&local_100,lVar10 + 0x1a0);
      *(code **)(lVar10 + 0x188) = local_118;
      *(code **)(lVar10 + 0x198) = local_108;
      *(code **)(lVar10 + 400) = local_110;
      *(undefined8 *)(lVar10 + 0x180) = local_120;
    }
    else {
      *(undefined8 *)(lVar10 + 400) = 0;
      *(undefined8 *)(lVar10 + 0x198) = 0;
      *(undefined8 *)(lVar10 + 0x180) = 0;
      *(undefined8 *)(lVar10 + 0x188) = 0;
      (*pcVar12)(lVar10 + 0x1a0);
      if (local_110 != (code *)0x0) goto LAB_0138b284;
    }
    pcVar12 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (code *)0x0;
      local_108 = (code *)0x0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      (*pcVar12)(&local_100);
    }
  }
  if ((*(int *)(param_1 + 0x5ac) == 1) && (*(int *)(param_1 + 0x5b0) == 1)) {
    FUN_013816d0(*(undefined8 *)(param_1 + 0x5c0),*(undefined8 *)(param_1 + 0x5b8));
  }
LAB_0138b2ec:
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      iVar6 = (int)*plVar18 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  if (local_78 != (long *)0x0) {
    plVar17 = local_78 + 10;
    do {
      iVar6 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if (local_70[0] != (long *)0x0) {
    plVar17 = local_70[0] + 10;
    do {
      iVar6 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
  }
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      iVar6 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  return;
}


