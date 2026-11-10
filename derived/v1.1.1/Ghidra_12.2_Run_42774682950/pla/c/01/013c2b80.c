/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c2b80; name: FUN_013c2b80
 */


undefined8 FUN_013c2b80(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_108;
  char *pcStack_100;
  undefined8 local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  undefined6 uStack_b0;
  undefined2 local_aa;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*(long *)(param_1 + 0x5c8) == 0) || (*(uint *)(*(long *)(param_1 + 0x5c8) + 0xb0) <= param_2)
     ) {
    uVar6 = 0;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x2c8);
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar9 = (long *)plVar8[0x37];
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_013c31d4;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    plVar2 = plVar8 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    FUN_02c35c98(plVar9);
    uStack_a8 = 0;
    local_b8 = (long *)0x0;
    uStack_b0 = 0;
    local_aa = 0;
    local_c8 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    plVar8 = *(long **)(param_1 + 0x2c8);
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_e0 = (long *)plVar8[0x39];
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
        iVar3 = (int)*plVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    plVar9 = plVar8 + 10;
    do {
      iVar3 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar8 = *(long **)(param_1 + 0x2c8);
    }
    else {
      plVar8 = *(long **)(param_1 + 0x2c8);
    }
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_d8 = (long *)plVar8[0x38];
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
        iVar3 = (int)*plVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_d8 + 0x10))();
      }
    }
    plVar9 = plVar8 + 10;
    do {
      iVar3 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar8 = *(long **)(param_1 + 0x2c8);
    }
    else {
      plVar8 = *(long **)(param_1 + 0x2c8);
    }
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar9 = (long *)plVar8[0x37];
    if (plVar9 == (long *)0x0) {
      local_d0 = (long *)0x0;
    }
    else {
      lVar10 = plVar9[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_013c31d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_d0 = plVar9;
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    plVar9 = plVar8 + 10;
    do {
      iVar3 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    uVar6 = FUN_00d40878(param_1);
    local_108 = 0xdf45236dd223994e;
    pcStack_100 = "common/mystery_card.dat";
    local_f8 = 0x17;
    local_f0 = (long *)0x0;
    FUN_00d37bb4(&local_e8,uVar6,&local_108,10);
    local_c8 = (long *)local_e8[0xd];
    if (local_c8 == (long *)0x0) {
      local_c8 = (long *)0x0;
    }
    else {
      plVar8 = local_c8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        iVar3 = (int)*plVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
    if (local_e8 != (long *)0x0) {
      lVar10 = local_e8[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_e8 + 0x20))();
      }
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    uVar6 = FUN_00d40878(param_1);
    local_108 = 0xe3ff362f39a6730a;
    pcStack_100 = "common/zkn_type.dat";
    local_f8 = 0x13;
    local_f0 = (long *)0x0;
    FUN_00d37bb4(&local_e8,uVar6,&local_108,10);
    local_c0 = (long *)local_e8[0xd];
    if (local_c0 == (long *)0x0) {
      local_c0 = (long *)0x0;
    }
    else {
      plVar8 = local_c0 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        iVar3 = (int)*plVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    if (local_e8 != (long *)0x0) {
      lVar10 = local_e8[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_e8 + 0x20))();
      }
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    uVar6 = FUN_00d40878(param_1);
    local_108 = 0x5d17a9aed6c828c8;
    pcStack_100 = "common/zkn_form.dat";
    local_f8 = 0x13;
    local_f0 = (long *)0x0;
    FUN_00d37bb4(&local_e8,uVar6,&local_108,10);
    local_b8 = (long *)local_e8[0xd];
    if (local_b8 == (long *)0x0) {
      local_b8 = (long *)0x0;
    }
    else {
      plVar8 = local_b8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        iVar3 = (int)*plVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
    if (local_e8 != (long *)0x0) {
      lVar10 = local_e8[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_e8 + 0x20))();
      }
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    puVar7 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x5c8) + 0xa8) + (ulong)param_2 * 0x78);
    local_a0 = puVar7[2];
    uStack_98 = puVar7[3];
    local_90 = puVar7[4];
    uStack_88 = puVar7[5];
    local_80 = puVar7[6];
    uStack_78 = puVar7[7];
    local_70 = puVar7[8];
    uStack_68 = puVar7[9];
    local_60 = puVar7[10];
    uStack_58 = puVar7[0xb];
    local_50 = puVar7[0xc];
    uStack_48 = puVar7[0xd];
    uStack_b0 = (undefined6)*puVar7;
    local_aa = (undefined2)((ulong)*puVar7 >> 0x30);
    uStack_a8 = (undefined6)puVar7[1];
    uStack_a2 = (undefined2)((ulong)puVar7[1] >> 0x30);
    FUN_013bcac0(&local_e0);
    uVar6 = FUN_02c2f268(local_e0);
  }
  return uVar6;
}


