/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d149e8; name: FUN_02d149e8
 */


void FUN_02d149e8(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  long local_80;
  long local_78;
  long *local_70;
  undefined4 local_68;
  long local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  undefined1 auStack_38 [8];
  
  uVar7 = *(undefined8 *)(*param_1 + 8);
  local_a8 = (long *)((ulong)local_a8 & 0xffffffff00000000);
  local_a0 = (long *)0x2000;
  local_48 = (long *)*param_2;
  if (local_48 == (long *)0x0) {
    local_58 = (long *)0x0;
    local_50 = (long *)0x0;
  }
  else {
    lVar8 = local_48[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02d15074;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_50 = (long *)*param_2;
    if (local_50 == (long *)0x0) {
      local_58 = (long *)0x0;
    }
    else {
      lVar8 = local_50[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02d15074;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_58 = (long *)*param_2;
      if (local_58 != (long *)0x0) {
        lVar8 = local_58[0xb];
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02d15074;
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar5;
        }
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
  plVar6 = (long *)FUN_02d1508c(auStack_38,uVar7,&local_a8,&local_48,&local_50,&local_58);
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02d15074;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_58 != (long *)0x0) {
    lVar8 = local_58[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if (local_50 != (long *)0x0) {
    lVar8 = local_50[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  local_a8 = (long *)*param_1;
  if (local_a8 != (long *)0x0) {
    lVar8 = local_a8[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02d15074;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a0 = (long *)param_1[5];
  if (local_a0 != (long *)0x0) {
    lVar8 = local_a0[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02d15074;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_98 = plVar6;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02d15074;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_90 = (long *)*param_2;
  if (local_90 != (long *)0x0) {
    lVar8 = local_90[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02d15074;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = param_1[1];
  local_80 = param_1[2];
  local_78 = param_1[3];
  local_70 = (long *)param_1[4];
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  local_68 = (undefined4)param_1[6];
  local_60 = param_1[7];
  local_48 = (long *)*param_2;
  if (local_48 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
    lVar8 = local_48[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02d15074;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_50 = (long *)*param_2;
    if (local_50 != (long *)0x0) {
      lVar8 = local_50[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02d15074;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  local_58 = (long *)FUN_02d15584(auStack_38,*(undefined8 *)(*param_1 + 8),param_1 + 6,&local_a8,
                                  &local_48,&local_50);
  if (local_58 != (long *)0x0) {
    lVar8 = local_58[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_02d15074:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_013b651c(*param_1,&local_58);
  if (local_58 != (long *)0x0) {
    lVar8 = local_58[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if (local_50 != (long *)0x0) {
    lVar8 = local_50[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    lVar8 = local_90[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (local_98 != (long *)0x0) {
    lVar8 = local_98[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_a0 != (long *)0x0) {
    lVar8 = local_a0[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (local_a8 != (long *)0x0) {
    lVar8 = local_a8[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  return;
}


