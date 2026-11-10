/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002226d8; name: FUN_002226d8
 */


long * FUN_002226d8(long param_1,char param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  
  if (*(uint *)(param_1 + 0x1880) != 0) {
    uVar4 = 0;
    cVar1 = *(char *)(param_1 + 0x94);
    while( true ) {
      if (cVar1 == param_2) {
        lVar5 = param_1 + uVar4 * 0x18;
        plVar7 = *(long **)(lVar5 + 0x88);
        plVar3 = (long *)(lVar5 + 0x80);
        if (plVar3 != plVar7) {
          iVar9 = 0;
          cVar1 = (char)plVar7[5];
          plVar8 = plVar7;
          plVar12 = plVar7;
          while( true ) {
            if (cVar1 == '\0') {
              if (*(int *)((long)plVar8 + 0x2c) == 0) {
                uVar10 = (uint)*(ushort *)((long)plVar8 + 0x34);
                plVar6 = plVar8;
                if (iVar9 != 0) {
                  uVar10 = ((uint)*(ushort *)(plVar8 + 6) + (uint)*(ushort *)((long)plVar8 + 0x34))
                           - (uint)*(ushort *)(plVar12 + 6);
                  plVar6 = plVar12;
                }
                if (plVar6 == plVar7) {
                  uVar11 = 0;
                }
                else {
                  plVar12 = plVar6;
                  do {
                    plVar12 = (long *)*plVar12;
                  } while (plVar7 != plVar12 && (*(byte *)(plVar12 + 5) & 8) != 0);
                  uVar11 = (((uint)*(ushort *)(plVar6 + 6) - (uint)*(ushort *)(plVar12 + 6)) -
                           (uint)*(ushort *)((long)plVar12 + 0x34)) - 2;
                  uVar10 = (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) + uVar10;
                }
                if ((param_3 & 0xffff) <= uVar10) {
                  plVar3 = (long *)plVar8[1];
                  if (plVar3 != plVar6) {
                    plVar7 = (long *)(param_1 + 0x60);
                    bVar2 = *(byte *)(plVar6 + 5);
                    plVar8 = plVar6;
                    while( true ) {
                      if ((bVar2 >> 3 & 1) == 0) {
                        *(byte *)(plVar8 + 5) = bVar2 | 8;
                        lVar5 = plVar8[-2];
                        plVar8[-2] = *plVar7;
                        *(long **)(lVar5 + 8) = plVar7;
                        *(long **)(*plVar7 + 8) = plVar8 + -2;
                        *plVar7 = lVar5;
                        plVar8 = (long *)plVar8[1];
                      }
                      else {
                        plVar8 = (long *)plVar8[1];
                      }
                      if (plVar3 == plVar8) break;
                      bVar2 = *(byte *)(plVar8 + 5);
                    }
                  }
                  if (0 < (int)uVar11) {
                    *(short *)(plVar6 + 6) = (short)plVar6[6] - (short)uVar11;
                  }
                  return plVar6 + -2;
                }
                iVar9 = iVar9 + 1;
                plVar8 = (long *)plVar8[1];
                plVar12 = plVar6;
              }
              else {
                iVar9 = 0;
                plVar8 = (long *)plVar8[1];
              }
            }
            else {
              iVar9 = 0;
              plVar8 = (long *)plVar8[1];
            }
            if (plVar3 == plVar8) break;
            cVar1 = (char)plVar8[5];
          }
        }
      }
      uVar4 = uVar4 + 1;
      if (*(uint *)(param_1 + 0x1880) <= uVar4) break;
      cVar1 = *(char *)(param_1 + uVar4 * 0x18 + 0x94);
    }
  }
  return (long *)0x0;
}


