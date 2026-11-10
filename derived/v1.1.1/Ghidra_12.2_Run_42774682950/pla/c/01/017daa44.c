/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017daa44; name: FUN_017daa44
 */


void FUN_017daa44(long param_1,long *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long *local_40;
  long *local_38;
  
  if (*(long *)(param_1 + 0xb0) == 0) {
    local_38 = (long *)0x0;
    if (*param_2 == 0) goto LAB_017daa78;
LAB_017dab04:
    FUN_017dca7c(&local_40);
    bVar5 = local_38 != local_40;
    if (local_40 != (long *)0x0) {
      lVar7 = local_40[0xb];
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
        (**(code **)(*local_40 + 0x20))(local_40);
      }
    }
  }
  else {
    FUN_017dca7c(&local_38);
    if (*param_2 != 0) goto LAB_017dab04;
LAB_017daa78:
    bVar5 = local_38 != (long *)0x0;
    local_40 = (long *)0x0;
  }
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[0xb];
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
      (**(code **)(*local_38 + 0x20))();
      if (!bVar5 && (param_3 & 1) == 0) {
        return;
      }
      goto LAB_017daab0;
    }
  }
  if (!bVar5 && (param_3 & 1) == 0) {
    return;
  }
LAB_017daab0:
  FUN_017db6d4(param_1 + 0xc0,param_2);
  uVar6 = FUN_017db94c();
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  return;
}


