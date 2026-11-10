/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028629ac; name: FUN_028629ac
 */


void FUN_028629ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long **pplVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *local_1e8 [2];
  undefined8 *local_1d8 [2];
  undefined8 *local_1c8 [2];
  undefined8 *local_1b8 [2];
  undefined8 *local_1a8 [2];
  undefined8 *local_198 [2];
  undefined8 *local_188 [2];
  undefined8 *local_178 [2];
  undefined8 *local_168 [2];
  undefined8 *local_158 [2];
  undefined8 *local_148 [2];
  undefined8 *local_138 [2];
  undefined8 *local_128 [2];
  undefined8 *local_118 [2];
  undefined8 *local_108 [2];
  undefined8 *local_f8 [2];
  undefined8 *local_e8 [2];
  undefined8 *local_d8 [2];
  long *local_c8 [2];
  undefined8 *local_b8 [2];
  undefined8 *local_a8 [2];
  undefined8 *local_98 [2];
  long local_88;
  undefined1 local_7c [4];
  undefined8 *local_78 [2];
  undefined8 *local_68 [2];
  undefined8 *local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long *local_28;
  
  lVar8 = *(long *)PTR_DAT_04379ff8;
  uStack_30 = *(undefined8 *)(lVar8 + 0x68);
  local_38 = *(undefined8 *)(lVar8 + 0x48);
  uStack_40 = *(undefined8 *)(lVar8 + 200);
  local_48 = *(undefined8 *)(lVar8 + 0x188);
  switch(param_3) {
  case 0:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_02863388(local_58,param_2,uStack_30,&uStack_30,&local_28);
    if (local_58[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_58[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_58[0];
    } while (cVar2 != '\0');
    break;
  case 1:
    local_28 = *(long **)(lVar8 + 8);
    local_88 = CONCAT71(local_88._1_7_,1);
    FUN_0286356c(local_68,param_2,local_28,&local_28,&local_88);
    if (local_68[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_68[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_68[0];
    } while (cVar2 != '\0');
    break;
  case 2:
    local_28 = *(long **)(lVar8 + 0xe8);
    local_7c[0] = 1;
    local_88 = param_1 + 0x2e04;
    FUN_02863750(local_78,param_2,local_28,&local_28,local_7c,&local_88);
    if (local_78[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_78[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_78[0];
    } while (cVar2 != '\0');
    break;
  case 3:
    local_28 = *(long **)(lVar8 + 0x108);
    local_88 = CONCAT71(local_88._1_7_,1);
    FUN_02863938(local_98,param_2,local_28,&local_28,&local_88);
    if (local_98[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_98[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_98[0];
    } while (cVar2 != '\0');
    break;
  case 4:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_02863b1c(local_a8,param_2,uStack_30,&uStack_30,&local_28);
    if (local_a8[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_a8[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_a8[0];
    } while (cVar2 != '\0');
    break;
  case 5:
    local_28 = *(long **)(lVar8 + 0x148);
    local_88 = CONCAT71(local_88._1_7_,1);
    FUN_02863d00(local_b8,param_2,local_28,&local_28,&local_88);
    if (local_b8[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_b8[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_b8[0];
    } while (cVar2 != '\0');
    break;
  case 6:
  case 0xc:
  case 0x13:
  case 0x19:
  case 0x1a:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  case 7:
    local_28 = *(long **)(lVar8 + 0x28);
    local_7c[0] = 1;
    local_88 = param_1 + 0x2e00;
    FUN_028642bc(local_d8,param_2,local_28,&local_28,local_7c,&local_88);
    if (local_d8[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_d8[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_d8[0];
    } while (cVar2 != '\0');
    break;
  case 8:
    local_28 = *(long **)(lVar8 + 0x168);
    local_88 = CONCAT71(local_88._1_7_,1);
    FUN_028644a4(local_e8,param_2,local_28,&local_28,&local_88);
    if (local_e8[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_e8[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_e8[0];
    } while (cVar2 != '\0');
    break;
  default:
    goto switchD_02862a08_caseD_9;
  case 10:
    local_28 = *(long **)(lVar8 + 0x128);
    local_88 = CONCAT71(local_88._1_7_,1);
    FUN_02864688(local_f8,param_2,local_28,&local_28,&local_88);
    if (local_f8[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_f8[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_f8[0];
    } while (cVar2 != '\0');
    break;
  case 0xb:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_0286486c(local_108,param_2,uStack_30,&uStack_30,&local_28);
    if (local_108[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_108[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_108[0];
    } while (cVar2 != '\0');
    break;
  case 0xd:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_02864c3c(local_118,param_2,uStack_30,&uStack_30,&local_28);
    if (local_118[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_118[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_118[0];
    } while (cVar2 != '\0');
    break;
  case 0xe:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_02864e20(local_128,param_2,uStack_30,&uStack_30,&local_28);
    if (local_128[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_128[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_128[0];
    } while (cVar2 != '\0');
    break;
  case 0xf:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_028653e4(local_158,param_2,uStack_30,&uStack_30,&local_28);
    if (local_158[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_158[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_158[0];
    } while (cVar2 != '\0');
    break;
  case 0x10:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_028651f8(local_148,param_2,uStack_30,&uStack_30,&local_28);
    if (local_148[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_148[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_148[0];
    } while (cVar2 != '\0');
    break;
  case 0x11:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_0286500c(local_138,param_2,uStack_30,&uStack_30,&local_28);
    if (local_138[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_138[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_138[0];
    } while (cVar2 != '\0');
    break;
  case 0x14:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_02865d0c(local_198,param_2,uStack_30,&uStack_30,&local_28);
    if (local_198[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_198[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_198[0];
    } while (cVar2 != '\0');
    break;
  case 0x15:
    *(undefined4 *)(param_1 + 0x2ea8) = 1;
    local_28 = (long *)(param_1 + 0x2ea8);
    local_88 = CONCAT71(local_88._1_7_,1);
    FUN_028661a0(local_1b8,param_2,uStack_30,&uStack_30,&local_88,&local_28);
    if (local_1b8[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_1b8[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_1b8[0];
    } while (cVar2 != '\0');
    break;
  case 0x16:
    local_28 = (long *)(param_1 + 0x2ec8);
    local_88 = CONCAT71(local_88._1_7_,1);
    FUN_02866390(local_1c8,param_2,uStack_30,&local_28,&uStack_30,&local_88);
    if (local_1c8[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_1c8[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_1c8[0];
    } while (cVar2 != '\0');
    break;
  case 0x17:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_02866580(local_1d8,param_2,uStack_30,&uStack_30,&local_28);
    if (local_1d8[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_1d8[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_1d8[0];
    } while (cVar2 != '\0');
    break;
  case 0x18:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_0286676c(local_1e8,param_2,uStack_30,&uStack_30,&local_28);
    if (local_1e8[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_1e8[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_1e8[0];
    } while (cVar2 != '\0');
    break;
  case 0x1b:
    local_7c[0] = 1;
    FUN_02863ee4(local_c8,param_2,local_38,&local_38,local_7c);
    if (local_c8[0] == (long *)0x0) {
      local_88 = 0;
    }
    else {
      FUN_01f37e80(&local_88);
    }
    plVar6 = *(long **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x30) = local_88;
    if (local_c8[0] == (long *)0x0) {
      return;
    }
    plVar6 = local_c8[0] + 1;
    do {
      iVar5 = (int)*plVar6 + -1;
      bVar4 = iVar5 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_02863030;
  case 0x1e:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_028655d0(local_168,param_2,local_48,&local_48,&local_28);
    if (local_168[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_168[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_168[0];
    } while (cVar2 != '\0');
    break;
  case 0x1f:
    local_7c[0] = 1;
    FUN_028640d0(local_c8,param_2,local_38,&local_38,local_7c);
    if (local_c8[0] == (long *)0x0) {
      local_88 = 0;
    }
    else {
      FUN_0286e934(&local_88);
    }
    plVar6 = *(long **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x38) = local_88;
    if (local_c8[0] == (long *)0x0) {
      return;
    }
    plVar6 = local_c8[0] + 1;
    do {
      iVar5 = (int)*plVar6 + -1;
      bVar4 = iVar5 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_02863030;
  case 0x20:
    local_7c[0] = 1;
    FUN_02864a50(local_c8,param_2,uStack_40,&uStack_40,local_7c);
    if (local_c8[0] == (long *)0x0) {
      local_88 = 0;
    }
    else {
      FUN_02870780(&local_88);
    }
    plVar6 = *(long **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x40) = local_88;
    if (local_c8[0] == (long *)0x0) {
      return;
    }
    plVar6 = local_c8[0] + 1;
    do {
      iVar5 = (int)*plVar6 + -1;
      bVar4 = iVar5 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02863030:
    plVar6 = local_c8[0];
    local_88 = 0;
    if (!bVar4) {
      return;
    }
    local_c8[0][2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar8 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar8;
    local_28 = (long *)*plVar6;
    pplVar7 = &local_28;
    goto LAB_02862b48;
  case 0x23:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_02865ef8(local_1a8,param_2,uStack_40,&uStack_40,&local_28);
    if (local_1a8[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_1a8[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_1a8[0];
    } while (cVar2 != '\0');
    break;
  case 0x25:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_028657bc(local_178,param_2,local_48,&local_48,&local_28);
    if (local_178[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_178[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_178[0];
    } while (cVar2 != '\0');
    break;
  case 0x26:
    local_28 = (long *)CONCAT71(local_28._1_7_,1);
    FUN_02865a64(local_188,param_2,local_48,&local_48,&local_28);
    if (local_188[0] == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_188[0] + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar9 = local_188[0];
    } while (cVar2 != '\0');
  }
  if (bVar4) {
    puVar9[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar8 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar8;
    local_c8[0] = (long *)*puVar9;
    pplVar7 = local_c8;
LAB_02862b48:
    FUN_02a44274(lVar8 + 0xd8,pplVar7);
  }
switchD_02862a08_caseD_9:
  return;
}


