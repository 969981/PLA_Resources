/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fd228; name: FUN_029fd228
 */


void FUN_029fd228(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  undefined1 local_740;
  undefined4 local_73f;
  code *local_640;
  undefined1 auStack_620 [1512];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x1041) >> 1 & 1) != 0) {
    plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_009463f0(&local_740,plVar9 + 0xc);
    pcVar5 = local_640;
    FUN_00945e04(&local_740);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if (pcVar5 != (code *)0x0) {
      plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_009463f0(&local_740,plVar9 + 0xc);
      uVar6 = (*local_640)(auStack_620);
      FUN_00945e04(&local_740);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 10;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if ((uVar6 & 0xff) < 0xe) {
        lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x200) + 0x60);
        uVar8 = (uint)**(byte **)(*(long *)(*(long *)(lVar7 + 0x240) + 0x10) + 0x28);
        if ((uVar8 != (uVar6 & 0xff)) && (3 < (uVar6 - 1 & 0xff) || 2 < uVar8 - 5)) {
          local_73f = 0x1f0000;
          local_740 = (char)uVar6;
          FUN_029d32fc(*(undefined8 *)(lVar7 + 0x260),auStack_38,&local_740);
        }
      }
    }
  }
  return;
}


