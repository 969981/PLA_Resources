/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013afa8c; name: FUN_013afa8c
 */


undefined8 FUN_013afa8c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long local_b0;
  long local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x46:
    iVar4 = FUN_02728954();
    if ((iVar4 == 0) || (iVar4 = FUN_02728954(), iVar4 == 3)) {
      uVar6 = 0x49;
    }
    else {
      uVar5 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0x10);
      if ((uVar5 & 1) == 0) {
        return 0x1000000000;
      }
      uVar6 = 0x47;
    }
    break;
  case 0x47:
    FUN_0272a99c(&local_40);
    local_60 = 0x47af60fadf7d021d;
    pcStack_58 = "DeferToLocal";
    local_50 = 0xc;
    local_48 = (long *)0x0;
    FUN_013b00e0(&local_38,local_40,&local_60,2000);
    local_80 = 0x6ff643349b50c810;
    pcStack_78 = "Success";
    local_70 = 7;
    uStack_68 = 0;
    local_88 = param_1;
    FUN_013b04b4(&local_30,local_38,&local_80,&local_88);
    local_a8 = -0x65e463199a50382f;
    pcStack_a0 = "Failure";
    local_98 = 7;
    uStack_90 = 0;
    local_b0 = param_1;
    FUN_013b0584(&local_28,local_30,&local_a8,&local_b0);
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
      }
    }
    if (local_38 != (long *)0x0) {
      lVar7 = local_38[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_40 != (long *)0x0) {
      lVar7 = local_40[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    uVar6 = 0x48;
    break;
  case 0x48:
    goto LAB_013afc64;
  case 0x49:
    uVar5 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),1);
    if ((uVar5 & 1) == 0) {
      return 0x1000000000;
    }
    uVar6 = 0x4a;
    break;
  case 0x4a:
    uVar5 = FUN_013c6200(*(undefined8 *)(param_1 + 0xc0),1);
    if ((uVar5 & 1) == 0) {
      return 0x1000000000;
    }
    return 0x1000000001;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(undefined4 *)(param_1 + 0xac) = uVar6;
LAB_013afc64:
  return 0x1000000000;
}


