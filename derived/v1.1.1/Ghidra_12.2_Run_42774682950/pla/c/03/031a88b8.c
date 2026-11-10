/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a88b8; name: FUN_031a88b8
 */


void FUN_031a88b8(long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  
  lVar9 = *(long *)(param_1 + 0x228);
  if (lVar9 != 0) {
    pcVar2 = (char *)(lVar9 + 100);
    do {
      cVar4 = *pcVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar6) {
        *pcVar2 = '\x04';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar4 == '\x01') {
      *(undefined1 *)(*(long *)(lVar9 + 0x68) + 0x20) = 3;
      plVar7 = *(long **)(lVar9 + 0x68);
      *(undefined8 *)(lVar9 + 0x68) = 0;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar3 = plVar7 + 2;
        do {
          lVar9 = *plVar3;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    }
    plVar7 = *(long **)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar3 = plVar7 + 2;
      do {
        lVar9 = *plVar3;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
        cVar4 = *(char *)(param_1 + 0x198);
        goto joined_r0x031a89b0;
      }
    }
  }
  cVar4 = *(char *)(param_1 + 0x198);
joined_r0x031a89b0:
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0x198) = 1;
    iVar8 = *(int *)(param_1 + 0x250);
    lVar9 = *(long *)(param_1 + 0x248);
    iVar1 = iVar8 + 1;
    if ((int)(*(uint *)(param_1 + 0x254) & 0x3fffffff) <= iVar8) {
      lVar9 = FUN_031aaf24(PTR_PTR_0434a080,iVar1);
      iVar8 = *(int *)(param_1 + 0x250);
      *(long *)(param_1 + 0x248) = lVar9;
    }
    puVar10 = (undefined4 *)(lVar9 + (long)iVar8 * 0xa0);
    *(int *)(param_1 + 0x250) = iVar1;
    *(undefined8 *)(puVar10 + 0x24) = 0;
    *(undefined8 *)(puVar10 + 0x26) = 0x8000000000000000;
    *puVar10 = 4;
    puVar10[4] = param_2;
    if ((*(int *)(param_1 + 0x40) == 1) && (*(int *)(param_1 + 0x28) != 0)) {
      FUN_031a72b8(param_1,param_3);
      return;
    }
  }
  return;
}


