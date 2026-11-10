/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d74aa0; name: FUN_00d74aa0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00d74aa0(int *param_1,undefined8 *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long **pplVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  int *piVar14;
  long *local_100;
  undefined8 local_f8;
  undefined1 *local_b8;
  undefined4 *local_b0;
  undefined8 uStack_a8;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  
  pplVar9 = &local_100;
  uVar13 = 0x80000001;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x736b6264)) {
    piVar14 = param_1 + 4;
    local_100._0_4_ = 0x40;
    plVar5 = (long *)FUN_00a246f0(&local_90,*(undefined8 *)piVar14,&local_100);
    if (plVar5 != (long *)0x0) {
      plVar11 = plVar5 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar11 = *(long **)(*(long *)(param_1 + 2) + 0x68);
    if (plVar11 != (long *)0x0) {
      plVar6 = plVar11 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = (int)*plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)FUN_00d68c40(&local_100,*(undefined8 *)piVar14,piVar14);
    if (plVar6 != (long *)0x0) {
      lVar12 = plVar6[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00d74ef8;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_100._0_4_ = 0x40;
    plVar7 = (long *)FUN_00a246f0(&local_90,*(undefined8 *)piVar14,&local_100);
    if (plVar7 != (long *)0x0) {
      plVar10 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_02c36a60(plVar6,0,param_3);
    if (param_4 == 0) {
      plVar10 = (long *)0x3959fac2aed8a07;
    }
    else if (param_4 == 1) {
      plVar10 = (long *)0x3959cac2aed84ee;
      pplVar9 = &local_90;
    }
    else {
      plVar10 = (long *)0x395a0ac2aed8bba;
      pplVar9 = &local_58;
    }
    *pplVar9 = plVar10;
    FUN_02c2e7d0(plVar11,pplVar9,plVar7);
    FUN_02c333a8(plVar6,plVar5,plVar7);
    local_90._0_4_ = 0x3e;
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_80 = *(undefined8 *)piVar14;
    local_78 = 0xb9e4e56c5c7aa74f;
    uStack_70 = 0xb9e4e36c5c7aa3e9;
    local_68 = 0x3959eac2aed8854;
    uStack_60 = 8;
    local_88 = plVar11;
    FUN_00d7674c(&local_100);
    FUN_00d74270(&local_100,6,0xc);
    local_f8 = FUN_02c2f268(plVar5);
    uStack_a8 = FUN_02c2f268(*param_2);
    local_b8 = &LAB_00d74300;
    local_b0 = (undefined4 *)&local_90;
    FUN_00d75f8c(&local_58,*(undefined8 *)piVar14);
    uVar13 = FUN_00d76780(*param_2,*(undefined8 *)piVar14,&local_100);
    if (local_58 == (long *)0x0) {
      FUN_02a49534(0);
    }
    else {
      lVar12 = local_58[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_00d74ef8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar8;
      }
      piVar14 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = *piVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_02a49534(local_58);
      lVar12 = local_58[0xb];
      piVar14 = (int *)(lVar12 + 0xc);
      do {
        iVar2 = *piVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))(local_58);
      }
      lVar12 = local_58[0xb];
      piVar14 = (int *)(lVar12 + 0xc);
      do {
        iVar2 = *piVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))(local_58);
      }
    }
    if (local_88 != (long *)0x0) {
      plVar10 = local_88 + 10;
      do {
        iVar2 = (int)*plVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = iVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    plVar10 = plVar7 + 10;
    do {
      iVar2 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if (plVar6 != (long *)0x0) {
      lVar12 = plVar6[0xb];
      piVar14 = (int *)(lVar12 + 0xc);
      do {
        iVar2 = *piVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar6 = plVar11 + 10;
      do {
        iVar2 = (int)*plVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = iVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    if (plVar5 != (long *)0x0) {
      plVar11 = plVar5 + 10;
      do {
        iVar2 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return uVar13;
}


