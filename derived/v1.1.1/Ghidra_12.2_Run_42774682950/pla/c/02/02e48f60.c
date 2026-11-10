/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e48f60; name: FUN_02e48f60
 */


ulong FUN_02e48f60(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = (ulong)uVar2;
  if (uVar2 != 0) {
    plVar6 = *(long **)(param_1 + 0x10);
    lVar8 = uVar3 << 3;
    plVar4 = plVar6;
    do {
      if (*plVar4 == param_2) {
        if (plVar6 + ((ulong)uVar2 - 1) <= plVar4) goto LAB_02e49010;
        uVar7 = (long)plVar6 + ~(ulong)plVar4 + uVar3 * 8 + -8;
        uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
        uVar3 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) == 0) {
          if (uVar7 < 0x18) goto LAB_02e4900c;
          goto LAB_02e48fe4;
        }
        plVar5 = plVar4;
        do {
          plVar4 = plVar5 + 1;
          *plVar5 = *plVar4;
          uVar3 = uVar3 - 1;
          plVar5 = plVar4;
        } while (uVar3 != 0);
        if (0x17 < uVar7) {
LAB_02e48fe4:
          do {
            *plVar4 = plVar4[1];
            plVar4[1] = plVar4[2];
            plVar4[2] = plVar4[3];
            plVar5 = plVar4 + 4;
            plVar4[3] = *plVar5;
            plVar4 = plVar5;
          } while (plVar5 < plVar6 + ((ulong)uVar2 - 1));
        }
LAB_02e4900c:
        uVar2 = *(uint *)(param_1 + 0x18);
LAB_02e49010:
        *(uint *)(param_1 + 0x18) = uVar2 - 1;
        return (ulong)(uVar2 - 1);
      }
      plVar4 = plVar4 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  return uVar3;
}


