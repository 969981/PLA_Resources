/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b59d78; name: FUN_02b59d78
 */


void FUN_02b59d78(long *param_1,ulong param_2,undefined4 *param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  
  if (param_6 == 0) {
    param_6 = *(long *)(param_2 + 8);
  }
  local_60 = param_2;
  lVar6 = FUN_02b5a848(auStack_38,param_6,&local_60);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    piVar2 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *param_1;
  }
  if (**(char **)(param_4 + 8) != '\0') {
    FUN_02bba5e0(&local_60,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x58) + 0x58) + 0x78),param_4
                );
    plVar7 = *(long **)(lVar6 + 0x68);
    *(undefined8 *)(lVar6 + 0x68) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    *(ulong *)(lVar6 + 0x68) = local_60;
  }
  (**(code **)(*DAT_043ef740 + 0x68))
            (DAT_043ef740,param_2 + 0xa0,*(undefined1 *)((long)param_3 + 0x11),
             *(undefined1 *)((long)param_3 + 0x12),*(undefined1 *)((long)param_3 + 0x13));
  lVar8 = *(long *)(param_2 + 0xa0);
  local_60 = local_60 & 0xffffffffffffff00;
  if (*(char *)(lVar8 + 0x118) != '\0') {
    local_58 = *(undefined8 *)(lVar8 + 0x120);
    local_50 = *(undefined8 *)(lVar8 + 0x128);
    local_48 = *(undefined8 *)(lVar8 + 0x130);
    local_40 = *(long **)(lVar8 + 0x138);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x18))();
    }
    local_60 = CONCAT71(local_60._1_7_,1);
  }
  FUN_02ba7ba0(*(undefined8 *)(lVar6 + 0x60),0x1f,&local_60);
  if ((char)local_60 != '\0') {
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    local_60 = local_60 & 0xffffffffffffff00;
  }
  FUN_02ba6340(*(undefined8 *)(lVar6 + 0x60),*param_3);
  FUN_02ba6b60(param_3[1],*(undefined8 *)(lVar6 + 0x60));
  FUN_02ba7380(param_3[2],*(undefined8 *)(lVar6 + 0x60));
  if (param_3[3] != 0) {
    FUN_02ba9aa4(*(undefined8 *)(lVar6 + 0x60),param_3[3],0,0,0,0);
  }
  return;
}


