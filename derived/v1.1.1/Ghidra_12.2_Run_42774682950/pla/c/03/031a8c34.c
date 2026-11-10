/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a8c34; name: FUN_031a8c34
 */


void FUN_031a8c34(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  
  plVar5 = *(long **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = 0;
  if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) {
LAB_031a8c54:
    lVar7 = *(long *)(param_1 + 0x210);
  }
  else {
    plVar2 = plVar5 + 2;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 != 0) goto LAB_031a8c54;
    (**(code **)(*plVar5 + 0x18))();
    lVar7 = *(long *)(param_1 + 0x210);
  }
  if (lVar7 == 0) {
    if ((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) {
      *(long *)(param_1 + 0x210) = param_2;
      cVar3 = *(char *)(param_1 + 0x198);
      goto joined_r0x031a8d58;
    }
    plVar5 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = *(long **)(param_1 + 0x210);
    *(long *)(param_1 + 0x210) = param_2;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar2 = plVar5 + 2;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
        cVar3 = *(char *)(param_1 + 0x198);
        goto joined_r0x031a8d58;
      }
    }
  }
  cVar3 = *(char *)(param_1 + 0x198);
joined_r0x031a8d58:
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x198) = 1;
    iVar6 = *(int *)(param_1 + 0x250);
    lVar7 = *(long *)(param_1 + 0x248);
    iVar1 = iVar6 + 1;
    if ((int)(*(uint *)(param_1 + 0x254) & 0x3fffffff) <= iVar6) {
      lVar7 = FUN_031aaf24(PTR_PTR_0434a080,iVar1);
      iVar6 = *(int *)(param_1 + 0x250);
      *(long *)(param_1 + 0x248) = lVar7;
    }
    puVar8 = (undefined4 *)(lVar7 + (long)iVar6 * 0xa0);
    *(int *)(param_1 + 0x250) = iVar1;
    *(undefined8 *)(puVar8 + 0x24) = 0;
    *(undefined8 *)(puVar8 + 0x26) = 0x8000000000000000;
    *puVar8 = 4;
    puVar8[4] = 0;
  }
  return;
}


