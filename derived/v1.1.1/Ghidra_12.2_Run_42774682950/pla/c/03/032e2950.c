/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e2950; name: FUN_032e2950
 */


ulong * FUN_032e2950(ulong *param_1,void *param_2,long param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  size_t __n;
  char *pcVar10;
  
  if (param_1 != (ulong *)0x0) {
    __n = param_3 - (long)param_2;
    if ((param_4 & 1) == 0) {
      bVar1 = (byte)*param_1;
      while ((bVar1 & 1) == 0) {
        param_1 = (ulong *)param_1[1];
        bVar1 = (byte)*param_1;
      }
      while( true ) {
        uVar5 = (uint)*param_1;
        if ((uVar5 >> 0x17 & 1) != 0) break;
        if ((*param_1 & 1) != 0) {
          return (ulong *)0x0;
        }
        param_1 = (ulong *)param_1[1];
        if (param_1 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
      }
      if (((param_1 != (ulong *)0x0) &&
          (uVar5 = (uVar5 & 0x7fffff) - (uVar5 >> 1 & 0x155555),
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333),
          uVar7 = param_1[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
          uVar7 != 0)) && (sVar2 = *(short *)(uVar7 + 4), (long)sVar2 != 0)) {
        puVar9 = (undefined8 *)(uVar7 + 8);
        do {
          puVar6 = (ulong *)*puVar9;
          if (puVar6 != (ulong *)0x0) {
            puVar8 = puVar6;
            do {
              uVar5 = (uint)*puVar8;
              if ((uVar5 >> 0x10 & 1) != 0) {
                uVar5 = (uVar5 & 0xffff) - (uVar5 >> 1 & 0x5555);
                uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
                pcVar10 = (char *)puVar8[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                0x18) + 2];
                if (pcVar10 != (char *)0x0) {
                  sVar4 = strlen(pcVar10);
                  if ((sVar4 == __n) && (iVar3 = memcmp(param_2,pcVar10,__n), iVar3 == 0)) {
                    return puVar6;
                  }
                  goto LAB_032e2bd4;
                }
                break;
              }
            } while (((*puVar8 & 1) == 0) && (puVar8 = (ulong *)puVar8[1], puVar8 != (ulong *)0x0));
          }
          if (__n == 0) {
            return puVar6;
          }
LAB_032e2bd4:
          puVar9 = puVar9 + 1;
          if (puVar9 == (undefined8 *)(uVar7 + (long)sVar2 * 8 + 8)) {
            return (ulong *)0x0;
          }
        } while( true );
      }
    }
    else {
      do {
        bVar1 = (byte)*param_1;
        while ((bVar1 & 1) == 0) {
          param_1 = (ulong *)param_1[1];
          bVar1 = (byte)*param_1;
        }
        puVar6 = param_1;
        while( true ) {
          uVar5 = (uint)*puVar6;
          if ((uVar5 >> 0x17 & 1) != 0) break;
          if (((*puVar6 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
          goto LAB_032e2aa8;
        }
        if (((puVar6 != (ulong *)0x0) &&
            (uVar5 = (uVar5 & 0x7fffff) - (uVar5 >> 1 & 0x155555),
            uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333),
            uVar7 = puVar6[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
            uVar7 != 0)) && (sVar2 = *(short *)(uVar7 + 4), (long)sVar2 != 0)) {
          puVar9 = (undefined8 *)(uVar7 + 8);
          do {
            puVar6 = (ulong *)*puVar9;
            if (puVar6 != (ulong *)0x0) {
              puVar8 = puVar6;
              do {
                uVar5 = (uint)*puVar8;
                if ((uVar5 >> 0x10 & 1) != 0) {
                  uVar5 = (uVar5 & 0xffff) - (uVar5 >> 1 & 0x5555);
                  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
                  pcVar10 = (char *)puVar8[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                  0x18) + 2];
                  if (pcVar10 != (char *)0x0) {
                    sVar4 = strlen(pcVar10);
                    if ((sVar4 == __n) && (iVar3 = memcmp(param_2,pcVar10,__n), iVar3 == 0)) {
                      return puVar6;
                    }
                    goto LAB_032e2a70;
                  }
                  break;
                }
              } while (((*puVar8 & 1) == 0) && (puVar8 = (ulong *)puVar8[1], puVar8 != (ulong *)0x0)
                      );
            }
            if (__n == 0) {
              return puVar6;
            }
LAB_032e2a70:
            puVar9 = puVar9 + 1;
          } while (puVar9 != (undefined8 *)(uVar7 + (long)sVar2 * 8 + 8));
        }
LAB_032e2aa8:
        param_1 = (ulong *)param_1[1];
      } while (param_1 != (ulong *)0x0);
    }
  }
  return (ulong *)0x0;
}


