/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021ea80; name: FUN_0021ea80
 */


uint FUN_0021ea80(long param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  short sVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  
  uVar6 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14);
  if (uVar6 != 0) {
    puVar5 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar6);
    uVar6 = *puVar5;
    if (uVar6 <= param_2) goto LAB_0021eab8;
    do {
      do {
        if (puVar5[3] == 0) {
          return 0xffff;
        }
        puVar5 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)puVar5[3]);
        uVar6 = *puVar5;
      } while (param_2 < uVar6);
LAB_0021eab8:
    } while (puVar5[1] < param_2);
    uVar3 = *(uint *)(param_1 + 0x80);
    uVar8 = (ulong)uVar3;
    if (uVar3 != 0) {
      if ((int)uVar3 < 1) {
        return 0xffff;
      }
      puVar7 = (uint *)(param_1 + 0xc4);
      if (*(uint *)(param_1 + 0x84) <= param_2) goto LAB_0021eafc;
      do {
        do {
          uVar8 = uVar8 - 1;
          puVar2 = puVar7 + 1;
          if (uVar8 == 0) {
            return 0xffff;
          }
          puVar1 = puVar7 + -0xf;
          puVar7 = puVar2;
        } while (param_2 < *puVar1);
LAB_0021eafc:
      } while (*puVar7 < param_2);
    }
    sVar4 = (short)puVar5[2];
    if (sVar4 == 2) {
      puVar7 = puVar5 + 5;
      puVar5 = puVar7 + (ulong)(ushort)puVar5[4] * 2 + -2;
      if (puVar7 <= puVar5) {
        do {
          while( true ) {
            lVar9 = (long)puVar5 - (long)puVar7 >> 3;
            if (lVar9 < 0) {
              lVar9 = lVar9 + 1;
            }
            puVar2 = puVar7 + (lVar9 >> 1) * 2;
            if (*puVar2 < param_2) break;
            if (*puVar2 <= param_2) {
              return (uint)(ushort)puVar2[1];
            }
            puVar5 = puVar2 + -2;
            if (puVar5 < puVar7) {
              return 0xffff;
            }
          }
          puVar7 = puVar2 + 2;
        } while (puVar7 <= puVar5);
      }
    }
    else {
      if (sVar4 == 1) {
        return (uint)*(ushort *)((long)puVar5 + (long)(int)(param_2 - uVar6) * 2 + 0x10);
      }
      if (sVar4 == 0) {
        return (uint)(ushort)puVar5[4] + (param_2 - uVar6);
      }
    }
  }
  return 0xffff;
}


