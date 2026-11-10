/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4ba88; name: FUN_00d4ba88
 */


void FUN_00d4ba88(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  if (param_2 == 2) {
    param_2 = *(int *)(param_1 + 0x6d8);
  }
  if (*(int *)(*(long *)(param_1 + (long)param_2 * 0x60 + 0x638) + 0xb0) != 0) {
    iVar5 = 0;
    if (param_2 != 2) {
      iVar5 = param_2;
    }
    *(int *)(param_1 + 0x6d8) = param_2;
    plVar6 = (long *)FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar5 * 0x28);
    if (*(char *)((long)plVar6 + 0xa2) != '\x01') {
      *(undefined1 *)((long)plVar6 + 0xa2) = 1;
      (**(code **)(*plVar6 + 0x98))(plVar6,1);
    }
    (**(code **)(*plVar6 + 0x58))(plVar6);
    if ((param_3 & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x2c8);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = (int)*plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar7 = (long *)plVar6[0x29];
      lVar10 = plVar6[0x2a];
      if ((lVar10 != 0) && (*plVar7 != 0x62f3434c9624b485)) {
        plVar9 = plVar7 + lVar10 * 6;
        lVar10 = lVar10 * 0x30;
        do {
          lVar10 = lVar10 + -0x30;
          if (lVar10 == 0) {
            plVar7 = plVar9;
            break;
          }
          plVar2 = plVar7 + 6;
          plVar1 = plVar7 + 6;
          plVar7 = plVar2;
        } while (*plVar1 != 0x62f3434c9624b485);
      }
      *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) | 1;
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 10;
        do {
          iVar5 = (int)*plVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
    if (*(char *)(param_1 + (long)param_2 * 0x60 + 0x665) == '\0') {
      plVar6 = *(long **)(param_1 + 0x2c8);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = (int)*plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar7 = (long *)plVar6[0x29];
      lVar10 = plVar6[0x2a];
      if ((lVar10 != 0) && (*plVar7 != 0x2dc110817bf2fd6c)) {
        plVar9 = plVar7 + lVar10 * 6;
        lVar10 = lVar10 * 0x30;
        do {
          lVar10 = lVar10 + -0x30;
          if (lVar10 == 0) {
            plVar7 = plVar9;
            break;
          }
          plVar2 = plVar7 + 6;
          plVar1 = plVar7 + 6;
          plVar7 = plVar2;
        } while (*plVar1 != 0x2dc110817bf2fd6c);
      }
      *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) & 0xfe;
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 10;
        do {
          iVar5 = (int)*plVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
    uVar8 = (long)param_2 ^ 1;
    if (((*(int *)(param_1 + uVar8 * 0x60 + 0x640) != 0) &&
        (*(int *)(param_1 + uVar8 * 0x60 + 0x644) != 0)) &&
       (*(int *)(*(long *)(param_1 + uVar8 * 0x60 + 0x638) + 0xb0) != 0)) {
      if ((int)uVar8 == 2) {
        uVar8 = 0;
      }
      plVar6 = (long *)FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)(int)uVar8 * 0x28);
      if (*(char *)((long)plVar6 + 0xa2) != '\0') {
        *(undefined1 *)((long)plVar6 + 0xa2) = 0;
        (**(code **)(*plVar6 + 0x98))(plVar6,0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x5ac) = 3;
  return;
}


