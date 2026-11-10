/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d65e54; name: FUN_00d65e54
 */


void FUN_00d65e54(undefined1 param_1 [16],float param_2,long param_3,float *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  ulong local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar5 = *(long **)(param_3 + 0x2c8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (0.0 < *param_4) {
    pcStack_58 = "pane_N_pos_01";
    local_60 = 0x7f827303f39f;
  }
  else {
    pcStack_58 = "pane_N_pos_00";
    local_60 = 0x7e827303f1ec;
  }
  local_60 = local_60 | 0xcb54000000000000;
  local_50 = 0xd;
  local_48 = (long *)0x0;
  fVar6 = (float)FUN_0283ad10(plVar5,&local_60);
  fVar7 = param_2;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = 0x80a8e808288e407;
  pcStack_58 = "pane_all";
  local_50 = 8;
  local_48 = (long *)0x0;
  local_68 = (float)FUN_0283ad10(plVar5,&local_60);
  local_64 = fVar7;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_68 = (local_68 + *param_4) - fVar6;
  local_60 = 0x80a8e808288e407;
  pcStack_58 = "pane_all";
  local_64 = (local_64 + param_4[1]) - param_2;
  local_50 = 8;
  local_48 = (long *)0x0;
  FUN_0283ab3c(plVar5,&local_60,&local_68);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return;
}


