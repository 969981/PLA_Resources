/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01911c1c; name: FUN_01911c1c
 */


void FUN_01911c1c(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_48;
  
  if (((*(byte *)(param_1 + 200) >> 5 & 1) == 0) && (*(char *)(param_2 + 0xa5) == '\0')) {
    lVar10 = *param_3;
    uVar12 = *(undefined8 *)(param_1 + 8);
    plVar11 = *(long **)(lVar10 + 0x5e8);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar10 = *param_3;
    }
    local_48 = *(undefined8 *)(lVar10 + 0xb38);
    uVar6 = FUN_02c6849c(plVar11[0x13]);
    uVar5 = FUN_02c6f924(plVar11[0x13]);
    uVar7 = FUN_02c6f5e8(plVar11[0x13]);
    uVar8 = FUN_02c6d5b0(plVar11[0x13]);
    iVar9 = FUN_010924e0(uVar12,uVar6,uVar5,uVar7,uVar8 & 1,&local_48);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 10;
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
        (**(code **)(*plVar11 + 0x10))(plVar11);
        if (iVar9 == 0) {
          return;
        }
        goto LAB_01911d10;
      }
    }
    if (iVar9 != 0) {
LAB_01911d10:
      FUN_01b3ad4c(*param_3,iVar9,1);
      FUN_01b3aed4(*param_3,0,1);
      return;
    }
  }
  return;
}


