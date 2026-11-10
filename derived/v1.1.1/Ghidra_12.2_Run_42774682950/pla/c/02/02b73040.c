/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b73040; name: FUN_02b73040
 */


void FUN_02b73040(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *local_80;
  long *local_78;
  char local_70;
  undefined7 uStack_6f;
  long local_68;
  long local_60;
  long local_58;
  long *local_50;
  long *local_48;
  
  if (*(char *)param_1[0x14] == '\0') {
    lVar7 = param_1[0xf];
    lVar8 = param_1[0x10];
    lVar9 = param_1[0x11];
    local_50 = (long *)param_1[0x12];
    if (local_50 == (long *)0x0) goto LAB_02b730f4;
    pcVar6 = *(code **)(*local_50 + 0x18);
    plVar5 = local_50;
LAB_02b730c8:
    (*pcVar6)(local_50);
LAB_02b730cc:
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_50 = plVar5;
  }
  else {
    FUN_02b32f8c(&local_70,param_1 + 0x13,&DAT_039b07fe,param_1 + 0xf);
    plVar5 = (long *)CONCAT71(uStack_6f,local_70);
    if (plVar5 == (long *)0x0) {
      lVar7 = *(long *)PTR_DAT_04379c88;
LAB_02b733c0:
      lVar8 = *(long *)PTR_PTR_04379d00;
    }
    else {
      lVar7 = plVar5[0xb];
      if (plVar5 == (long *)0x0) goto LAB_02b733c0;
      lVar8 = plVar5[0xc];
    }
    if (plVar5 != (long *)0x0) {
      lVar9 = plVar5[0xd];
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_50 = (long *)CONCAT71(uStack_6f,local_70);
      if (local_50 != (long *)0x0) {
        pcVar6 = *(code **)(*local_50 + 0x20);
        goto LAB_02b730c8;
      }
      goto LAB_02b730cc;
    }
    lVar9 = 0;
    local_50 = plVar5;
LAB_02b730f4:
    plVar5 = (long *)0x0;
  }
  local_70 = '\x01';
  local_68 = lVar7;
  local_60 = lVar8;
  local_58 = lVar9;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  plVar5 = param_1 + 0x17;
  if ((local_70 == '\0') || ((char)*plVar5 == '\0')) {
    if ((char)*plVar5 != '\0' || local_70 != '\0') goto LAB_02b7314c;
  }
  else {
    if (param_1[0x18] == local_68) goto LAB_02b732f0;
LAB_02b7314c:
    FUN_02b3365c(&local_78,*param_2,&local_70);
    if (local_78 != (long *)0x0) {
      if ((char)*plVar5 == '\0') {
        local_80 = (long *)0x0;
      }
      else {
        FUN_02b3365c(&local_80,*param_2,plVar5);
        if (local_80 != (long *)0x0) {
          plVar1 = param_1 + 10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_48 = param_1;
          FUN_02b2ae3c(local_80,&local_48);
          if (local_48 != (long *)0x0) {
            plVar1 = local_48 + 10;
            do {
              iVar4 = (int)*plVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*local_48 + 0x10))();
            }
          }
        }
      }
      if (local_78 != (long *)0x0) {
        plVar1 = param_1 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_48 = param_1;
        FUN_02b2ab64(local_78,&local_48);
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 10;
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
      }
      plVar1 = local_50;
      *(undefined1 *)((long)param_1 + 300) = 1;
      if ((char)param_1[0x17] == '\0') {
        if (local_70 != '\0') {
          param_1[0x18] = local_68;
          param_1[0x19] = local_60;
          param_1[0x1a] = local_58;
          param_1[0x1b] = (long)local_50;
          if (local_50 != (long *)0x0) {
            (**(code **)(*local_50 + 0x18))();
          }
          *(char *)plVar5 = '\x01';
        }
      }
      else if (local_70 == '\0') {
        if ((long *)param_1[0x1b] != (long *)0x0) {
          (**(code **)(*(long *)param_1[0x1b] + 0x20))();
        }
        *(char *)plVar5 = '\0';
      }
      else {
        param_1[0x18] = local_68;
        param_1[0x19] = local_60;
        param_1[0x1a] = local_58;
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x18))(local_50);
        }
        plVar5 = (long *)param_1[0x1b];
        param_1[0x1b] = (long)plVar1;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      if (local_80 != (long *)0x0) {
        plVar5 = local_80 + 10;
        do {
          iVar4 = (int)*plVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      if (local_78 != (long *)0x0) {
        plVar5 = local_78 + 10;
        do {
          iVar4 = (int)*plVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
    }
  }
  if (local_70 == '\0') {
    return;
  }
LAB_02b732f0:
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


