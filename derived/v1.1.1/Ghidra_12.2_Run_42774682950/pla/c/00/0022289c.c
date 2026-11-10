/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022289c; name: FUN_0022289c
 */


void FUN_0022289c(long param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  short sVar6;
  long *plVar7;
  long lVar8;
  
  plVar5 = *(long **)(param_1 + 0x68);
  plVar1 = (long *)(param_1 + 0x60);
  if (plVar1 != plVar5) {
    plVar4 = (long *)plVar5[1];
    while( true ) {
      if (plVar1 != plVar5) {
        lVar8 = *plVar4;
        *(long **)(*plVar5 + 8) = plVar4;
        *plVar4 = *plVar5;
        *(long **)(lVar8 + 8) = plVar5;
        *plVar5 = lVar8;
      }
      if ((*(byte *)(plVar5 + 7) >> 3 & 1) != 0) {
        bVar3 = *(byte *)((long)plVar5 + 0x3b);
        plVar2 = (long *)(param_1 + (ulong)bVar3 * 0x18 + 0x80);
        if (plVar2 != plVar5 + 2) {
          plVar7 = (long *)plVar5[3];
          lVar8 = *plVar7;
          *(long **)(plVar5[2] + 8) = plVar7;
          *plVar7 = plVar5[2];
          *(long **)(lVar8 + 8) = plVar5 + 2;
          plVar5[2] = lVar8;
        }
        plVar7 = *(long **)(param_1 + (ulong)bVar3 * 0x18 + 0x88);
        if (plVar7 == plVar2) {
          sVar6 = 0;
        }
        else {
          do {
            plVar7 = (long *)plVar7[1];
          } while (plVar7 != plVar2);
          sVar6 = *(short *)(*plVar2 + 0x30) + *(short *)(*plVar2 + 0x34) + 2;
        }
        *(short *)(param_1 + (ulong)*(byte *)((long)plVar5 + 0x3b) * 0x18 + 0x92) = sVar6;
      }
      FUN_00223714(param_1 + 0x30,(int)plVar5[6],*(undefined2 *)((long)plVar5 + 0x36),
                   *(undefined2 *)((long)plVar5 + 0x34));
      if (plVar1 == plVar4) break;
      plVar5 = plVar4;
      plVar4 = (long *)plVar4[1];
    }
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_00223e00();
  return;
}


