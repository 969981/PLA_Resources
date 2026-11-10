/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143338c; name: FUN_0143338c
 */


void FUN_0143338c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,long *param_7,uint param_8)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long *local_1a8;
  long local_1a0;
  code *local_198;
  code *local_190;
  long local_188;
  undefined1 auStack_180 [104];
  long *local_118;
  long local_110;
  code *local_108;
  code *local_100;
  long local_f8;
  undefined1 auStack_f0 [104];
  undefined8 local_88;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  
  local_88 = *(undefined8 *)(param_1 + 0x338);
  local_78 = 100;
  local_80 = param_6;
  uStack_7c = param_5;
  uStack_74 = param_4;
  plVar5 = (long *)FUN_0143aa90(auStack_70,param_3,&local_88,&uStack_74,&local_78,&uStack_7c,
                                &local_80);
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_014337bc;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((param_8 & 1) == 0) {
    local_100 = (code *)0x0;
    local_f8 = 0;
    local_110 = 0;
    local_108 = (code *)0x0;
    if ((code *)param_7[2] != (code *)0x0) {
      (*(code *)param_7[2])(param_7 + 4,auStack_f0);
      local_110 = *param_7;
      local_108 = (code *)param_7[1];
      local_100 = (code *)param_7[2];
      local_f8 = param_7[3];
    }
    pcVar8 = (code *)plVar5[0x17];
    if (pcVar8 != (code *)0x0) {
      plVar5[0x18] = 0;
      plVar5[0x19] = 0;
      plVar5[0x16] = 0;
      plVar5[0x17] = 0;
      (*pcVar8)(plVar5 + 0x1a);
    }
    if (local_100 != (code *)0x0) {
      (*local_100)(auStack_f0,plVar5 + 0x1a);
      plVar5[0x17] = (long)local_108;
      plVar5[0x19] = local_f8;
      plVar5[0x18] = (long)local_100;
      plVar5[0x16] = local_110;
    }
    pcVar8 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = 0;
      local_110 = 0;
      local_108 = (code *)0x0;
      (*pcVar8)(auStack_f0);
    }
  }
  local_118 = plVar5;
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_014337bc;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0115b43c(param_2,&local_118,0x400);
  if (local_118 != (long *)0x0) {
    lVar9 = local_118[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
  local_88 = *(undefined8 *)(param_1 + 0x340);
  local_78 = 100;
  local_80 = (int)((float)param_6 + (float)param_6);
  uStack_7c = param_5;
  uStack_74 = param_4;
  plVar7 = (long *)FUN_0143aa90(auStack_70,param_3,&local_88,&uStack_74,&local_78,&uStack_7c,
                                &local_80);
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_014337bc;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((param_8 & 1) != 0) {
    local_190 = (code *)0x0;
    local_188 = 0;
    local_1a0 = 0;
    local_198 = (code *)0x0;
    if ((code *)param_7[2] != (code *)0x0) {
      (*(code *)param_7[2])(param_7 + 4,auStack_180);
      local_1a0 = *param_7;
      local_198 = (code *)param_7[1];
      local_190 = (code *)param_7[2];
      local_188 = param_7[3];
    }
    pcVar8 = (code *)plVar7[0x17];
    if (pcVar8 != (code *)0x0) {
      plVar7[0x18] = 0;
      plVar7[0x19] = 0;
      plVar7[0x16] = 0;
      plVar7[0x17] = 0;
      (*pcVar8)(plVar7 + 0x1a);
    }
    if (local_190 != (code *)0x0) {
      (*local_190)(auStack_180,plVar7 + 0x1a);
      plVar7[0x17] = (long)local_198;
      plVar7[0x19] = local_188;
      plVar7[0x18] = (long)local_190;
      plVar7[0x16] = local_1a0;
    }
    pcVar8 = local_198;
    bVar4 = local_198 != (code *)0x0;
    local_198 = (code *)0x0;
    if (bVar4) {
      local_190 = (code *)0x0;
      local_188 = 0;
      local_1a0 = 0;
      local_198 = (code *)0x0;
      (*pcVar8)(auStack_180);
    }
  }
  local_1a8 = plVar7;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_014337bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0115b43c(param_2,&local_1a8,0x400);
  if (local_1a8 != (long *)0x0) {
    lVar9 = local_1a8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_1a8 + 0x20))();
    }
  }
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  return;
}


