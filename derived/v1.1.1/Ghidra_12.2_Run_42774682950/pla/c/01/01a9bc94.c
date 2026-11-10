/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9bc94; name: FUN_01a9bc94
 */


void FUN_01a9bc94(undefined8 param_1,undefined8 param_2,float param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long *local_58;
  long local_50;
  long lStack_48;
  long *local_38;
  long local_30;
  long lStack_28;
  
  lVar7 = param_4[0xb8];
  *(float *)(param_4 + 0x139) = param_3;
  *(undefined1 *)((long)param_4 + 0x9cc) = 0;
  if (param_3 < *(float *)(lVar7 + 0xb4)) {
    uVar6 = 0;
  }
  else if (*(float *)(lVar7 + 0xb8) <= param_3) {
    if (*(float *)(lVar7 + 0xbc) <= param_3) {
      uVar6 = 3;
    }
    else {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 1;
  }
  *(undefined4 *)((long)param_4 + 0x9d4) = uVar6;
  *(undefined1 *)((long)param_4 + 0x9c5) = 1;
  uVar5 = (**(code **)(*param_4 + 0x1b0))(param_4);
  if ((uVar5 & 1) != 0) {
    FUN_009c69bc(&local_58,param_4);
    lStack_48 = local_58[0x1b];
    local_50 = local_58[0x1a];
    FUN_009c69bc(&local_38,param_4);
    lStack_28 = local_38[0x19];
    local_30 = local_38[0x18];
    FUN_01a89bd4(0x42c80000,param_4,&local_50,&local_30);
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
      }
    }
    if (local_58 != (long *)0x0) {
      lVar7 = local_58[0xb];
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
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  (**(code **)(*param_4 + 0x108))(param_1,param_2,param_4);
  return;
}


