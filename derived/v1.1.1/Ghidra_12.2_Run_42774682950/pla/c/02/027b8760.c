/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027b8760; name: FUN_027b8760
 */


void FUN_027b8760(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long local_140;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  long local_118;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined1 *local_c0;
  long *local_b8;
  long local_b0 [13];
  long *local_48;
  long *local_40;
  long *local_38;
  
  lVar6 = param_1 + 0x70;
  FUN_027bc6c4(lVar6);
  local_b0[0] = param_1;
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 3:
    local_38 = *(long **)(param_1 + 0x238);
    local_40 = *(long **)(param_1 + 0x228);
    local_48 = *(long **)(param_1 + 0x230);
    local_d0 = (long *)&LAB_027b8de4;
    local_c8 = FUN_027b8e0c;
    local_c0 = &LAB_027b8e10;
    local_b8 = (long *)&LAB_027b8e1c;
    FUN_027bcb98(lVar6,&local_38,&local_40,&local_48,&local_d0);
    pcVar7 = local_c8;
    break;
  case 4:
    FUN_0272a99c(&local_48);
    local_f0 = 0x47af60fadf7d021d;
    pcStack_e8 = "DeferToLocal";
    local_e0 = 0xc;
    local_d8 = (long *)0x0;
    FUN_013b00e0(&local_40,local_48,&local_f0,3000);
    local_110 = 0x6ff643349b50c810;
    pcStack_108 = "Success";
    local_100 = 7;
    uStack_f8 = 0;
    local_118 = param_1;
    FUN_027b8ae0(&local_38,local_40,&local_110,&local_118);
    local_138 = 0x9a1b9ce665afc7d1;
    pcStack_130 = "Failure";
    local_128 = 7;
    uStack_120 = 0;
    local_140 = param_1;
    FUN_027b8bb0(&local_d0,local_38,&local_138,&local_140);
    if (local_38 != (long *)0x0) {
      lVar5 = local_38[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
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
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if (local_40 != (long *)0x0) {
      lVar5 = local_40[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
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
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (local_48 != (long *)0x0) {
      lVar5 = local_48[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
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
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (local_d0 == (long *)0x0) {
      *(undefined4 *)(param_1 + 0x68) = 7;
      return;
    }
    local_38 = *(long **)(param_1 + 0x240);
    FUN_027bcc14(lVar6,&local_38);
    *(undefined4 *)(param_1 + 0x68) = 2;
    if (local_d0 == (long *)0x0) {
      return;
    }
    lVar6 = local_d0[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_d0 + 0x20))();
      return;
    }
    return;
  case 5:
    FUN_02a4754c(&local_d0,&DAT_0426c2c8);
    FUN_028354b0(&local_d0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    local_38 = *(long **)(param_1 + 0x248);
    local_d0 = (long *)&LAB_027bc158;
    local_c8 = FUN_027bc168;
    local_c0 = &LAB_027bc16c;
    local_b8 = (long *)&LAB_027bc178;
    FUN_027bc964(lVar6,&local_38,&local_d0);
    pcVar7 = local_c8;
    break;
  case 6:
    pcVar7 = *(code **)(param_1 + 0x250);
    if (pcVar7 != (code *)0x0) {
      local_d0 = (long *)((ulong)local_d0._4_4_ << 0x20);
LAB_027b8a60:
      (*pcVar7)(param_1 + 0x270,&local_d0);
    }
    goto LAB_027b8a6c;
  case 7:
    pcVar7 = *(code **)(param_1 + 0x250);
    if (pcVar7 != (code *)0x0) {
      local_d0 = (long *)CONCAT44(local_d0._4_4_,1);
      goto LAB_027b8a60;
    }
LAB_027b8a6c:
    *(undefined4 *)(param_1 + 0x68) = 0;
  default:
    goto switchD_027b87a8_default;
  }
  if (pcVar7 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar7)(local_b0);
  }
  *(undefined4 *)(param_1 + 0x68) = 1;
switchD_027b87a8_default:
  return;
}


