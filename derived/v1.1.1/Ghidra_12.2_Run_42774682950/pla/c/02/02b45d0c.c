/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b45d0c; name: FUN_02b45d0c
 */


void FUN_02b45d0c(long param_1,byte param_2)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x90);
  plVar2 = *(long **)(param_1 + 0x98);
  if (plVar5 != plVar2) {
    uVar6 = (long)plVar2 + (-8 - (long)plVar5);
    uVar1 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
    param_2 = param_2 & 1;
    if ((uVar1 & 3) != 0) {
      lVar7 = -((ulong)uVar1 & 3);
      plVar4 = plVar5;
      do {
        plVar5 = plVar4 + 1;
        bVar3 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        *(byte *)(*plVar4 + 0x228) = param_2;
        plVar4 = plVar5;
      } while (bVar3);
    }
    if (0x17 < uVar6) {
      do {
        *(byte *)(*plVar5 + 0x228) = param_2;
        *(byte *)(plVar5[1] + 0x228) = param_2;
        *(byte *)(plVar5[2] + 0x228) = param_2;
        plVar4 = plVar5 + 3;
        plVar5 = plVar5 + 4;
        *(byte *)(*plVar4 + 0x228) = param_2;
      } while (plVar5 != plVar2);
    }
  }
  return;
}


