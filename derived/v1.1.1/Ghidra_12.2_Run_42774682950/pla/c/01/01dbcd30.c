/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dbcd30; name: FUN_01dbcd30
 */


void FUN_01dbcd30(undefined8 param_1,undefined2 param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  long *local_48;
  char *local_40;
  undefined8 uStack_38;
  
  if ((*param_3 == 0) || (FUN_0191cb34(&local_48), plVar5 = local_48, local_48 == (long *)0x0)) {
LAB_01dbcd50:
    local_48 = (long *)0xe431111b6dcdb992;
    local_40 = "ef_kinomi01_start";
    uStack_38 = 0x11;
    FUN_02a4754c(param_1,&local_48);
  }
  else {
    switch(param_2) {
    case 0x660:
    case 0x6bc:
      local_48 = (long *)0x1541de6513de2ae5;
      local_40 = "ef_yosedama_exp01";
      uStack_38 = 0x11;
      FUN_02a4754c(param_1,&local_48);
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      break;
    case 0x661:
    case 0x6bd:
      local_48 = (long *)0x1541db6513de25cc;
      local_40 = "ef_yosedama_exp02";
      uStack_38 = 0x11;
      FUN_02a4754c(param_1,&local_48);
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      break;
    case 0x662:
    case 0x6be:
      local_48 = (long *)0x1541dc6513de277f;
      local_40 = "ef_yosedama_exp03";
      uStack_38 = 0x11;
      FUN_02a4754c(param_1,&local_48);
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      break;
    case 0x663:
    case 0x6bf:
      local_48 = (long *)0x1541d96513de2266;
      local_40 = "ef_yosedama_exp04";
      uStack_38 = 0x11;
      FUN_02a4754c(param_1,&local_48);
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      break;
    case 0x664:
    case 0x6c0:
      local_48 = (long *)0x1541da6513de2419;
      local_40 = "ef_yosedama_exp05";
      uStack_38 = 0x11;
      FUN_02a4754c(param_1,&local_48);
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      break;
    default:
      lVar7 = local_48[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))(local_48);
      }
      goto LAB_01dbcd50;
    }
    if (bVar6) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  return;
}


