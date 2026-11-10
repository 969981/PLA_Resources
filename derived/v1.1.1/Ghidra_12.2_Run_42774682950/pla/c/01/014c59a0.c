/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c59a0; name: FUN_014c59a0
 */


void FUN_014c59a0(long param_1,int *param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_48;
  
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar10[0x37];
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_014c5db0;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar2 = plVar10 + 10;
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
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  FUN_02c395d0(plVar9,0,(uint)param_2[1] % 100,2,2,1);
  FUN_02c395d0(plVar9,1,param_2[2],2,2,1);
  FUN_02c395d0(plVar9,2,param_2[3],2,2,1);
  FUN_02c395d0(plVar9,3,param_2[8],3,0,1);
  local_48 = plVar9;
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_014c5db0;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_010a2d10(&local_48,4,*param_2);
  if (local_48 != (long *)0x0) {
    lVar11 = local_48[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  FUN_02c395d0(plVar9,5,(uint)param_2[5] % 100,2,2,1);
  FUN_02c395d0(plVar9,6,param_2[6],2,2,1);
  FUN_02c395d0(plVar9,7,param_2[7],2,2,1);
  if (*param_2 == 0x7542) {
    local_58 = plVar9;
    if (plVar9 == (long *)0x0) {
      iVar7 = 0x7542;
    }
    else {
      lVar11 = plVar9[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_014c5db0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      iVar7 = *param_2;
    }
    FUN_010a2d10(&local_58,8,iVar7);
    if (local_58 == (long *)0x0) goto LAB_014c5c34;
    lVar11 = local_58[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar10 = local_58;
    } while (cVar3 != '\0');
joined_r0x014c5cfc:
    if (iVar7 != 0) goto LAB_014c5c34;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    pcVar8 = *(code **)(*plVar10 + 0x20);
  }
  else {
    uVar6 = FUN_010a2f50(param_2[9]);
    if ((uVar6 & 1) != 0) {
      local_60 = plVar9;
      if (plVar9 != (long *)0x0) {
        lVar11 = plVar9[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_014c5db0;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar5;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_010a2d10(&local_60,8,param_2[4]);
      if (local_60 == (long *)0x0) goto LAB_014c5c34;
      lVar11 = local_60[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar10 = local_60;
      } while (cVar3 != '\0');
      goto joined_r0x014c5cfc;
    }
    FUN_010a2e20(&local_68,param_2[9],*(undefined8 *)(param_1 + 8));
    FUN_02c36128(plVar9,8,local_68,0,0);
    if (local_68 == (long *)0x0) goto LAB_014c5c34;
    plVar10 = local_68 + 10;
    do {
      iVar7 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 != 0) goto LAB_014c5c34;
    pcVar8 = *(code **)(*local_68 + 0x10);
  }
  (*pcVar8)();
LAB_014c5c34:
  FUN_014c1468(param_1,2,*(undefined8 *)(&DAT_03a7c020 + (param_4 & 0xffffffff) * 8),param_3);
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  return;
}


