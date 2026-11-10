/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092ee20; name: FUN_0092ee20
 */


void FUN_0092ee20(long param_1,long *param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  short *psVar9;
  long *plVar10;
  long *local_48;
  
  plVar10 = *(long **)(param_1 + 0x70);
  if (plVar10 == (long *)0x0) {
    FUN_0092f04c(param_1,param_3,param_4);
  }
  else {
    plVar1 = plVar10 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_0092f04c(param_1,param_3,param_4);
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (param_3 - 0x34fU < 2) {
    FUN_010c6f28(*(undefined8 *)(param_1 + 0x78),0,*param_5);
    FUN_0092f2e4(param_1,1,param_5[1]);
    FUN_0092f2e4(param_1,2,param_5[2]);
    psVar9 = *(short **)(*(long *)(param_1 + 0x70) + 0x58);
    while( true ) {
      while (*psVar9 == 0x10) {
        uVar4 = psVar9[2];
        if ((((uVar4 & 0xff00) == 0x200 || 1 < (byte)((char)(uVar4 >> 8) - 1U)) ||
            ((uVar4 & 0xff) != 0x9e)) ||
           (FUN_02c36c30(*(undefined8 *)(param_1 + 0x78),0,0,1), *psVar9 == 0x10)) {
          psVar9 = psVar9 + (ulong)(ushort)psVar9[1] + 2;
        }
      }
      if (*psVar9 == 0) break;
      psVar9 = psVar9 + 1;
    }
  }
  else {
    plVar10 = *(long **)(param_1 + 0x70);
    local_48 = plVar10;
    if (plVar10 == (long *)0x0) {
      FUN_0092f418(param_1,&local_48,param_5);
    }
    else {
      plVar1 = plVar10 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_0092f418(param_1,&local_48,param_5);
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x78);
  lVar8 = *param_2;
  *(undefined4 *)(lVar3 + 0x124) = 0;
  *(undefined2 *)(lVar3 + 0x128) = 0;
  *(undefined4 *)(lVar3 + 300) = 0;
  *(undefined4 *)(lVar3 + 0x134) = 0;
  FUN_02c33414(lVar3,uVar2);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar3,lVar8,uVar2,0,0);
  return;
}


