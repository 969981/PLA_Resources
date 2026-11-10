/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002486d8; name: FUN_002486d8
 */


void FUN_002486d8(undefined8 *param_1,long param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    lVar7 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68);
    uVar3 = FUN_00251430(param_2,*param_1);
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0x9c) = uVar3;
    uVar3 = FUN_00251430(param_2,*param_1);
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0xa8) = uVar3;
    pbVar5 = *(byte **)(param_2 + 200);
    uVar4 = lVar7 + 0xdfU & -lVar7;
    if ((*pbVar5 & 1) == 0) {
      lVar7 = *(long *)(pbVar5 + 0x40);
      *(ulong *)(pbVar5 + 0x40) = lVar7 + uVar4;
    }
    else {
      plVar6 = *(long **)(pbVar5 + 0x40);
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + uVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(int *)((long)param_1 + (ulong)param_3 * 4 + 0xc0) = (int)lVar7;
  }
  if (((param_1[0xb] != 0) && ((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0)) &&
     ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) != 0)) {
    uVar3 = FUN_00251430(param_2,*param_1);
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0xb4) = uVar3;
  }
  return;
}


