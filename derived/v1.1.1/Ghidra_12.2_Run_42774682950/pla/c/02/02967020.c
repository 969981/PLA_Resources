/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02967020; name: FUN_02967020
 */


void FUN_02967020(long param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  undefined1 uVar9;
  char *pcVar10;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x70);
  if ((*(long *)(lVar3 + 0x2b0) == 0) || (*(int *)(*(long *)(lVar3 + 0x2b0) + 0xc) == 0)) {
    uVar4 = 0;
    if (*(long *)(lVar3 + 0x28) != 0) {
      uVar4 = *(uint *)(*(long *)(lVar3 + 0x28) + 0xc);
    }
    if ((uVar4 == param_2) &&
       ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + (ulong)param_2 * 8 + 0x120) +
                  0x387) & 0x78) == 0)) {
      uVar5 = 0;
      if (*(long *)(lVar3 + 0x98) != 0) {
        uVar5 = (ulong)*(uint *)(*(long *)(lVar3 + 0x98) + 0xc);
      }
      lVar8 = (&DAT_0428af30)[uVar5 * 6];
      if (lVar8 == 0) {
        plVar7 = &DAT_0428af30;
      }
      else {
        plVar7 = &DAT_0428af30;
        if (*(char *)(lVar8 + 0x1e1) != '\0') {
          plVar7 = &DAT_0428af30 + uVar5 * 6;
        }
      }
      piVar1 = (int *)((long)*(uint **)(*plVar7 + 0x250) + (ulong)**(uint **)(*plVar7 + 0x250));
      if ((((0x52 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
           (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x29], uVar5 != 0)) &&
          (*(char *)((long)piVar1 + uVar5) != '\0')) &&
         ((lVar3 = *(long *)(lVar3 + 0x240), lVar3 != 0 && (*(byte *)(lVar3 + 10) < 2)))) {
        *(undefined4 *)(lVar3 + 0xc) = 1;
        if (*(byte *)(lVar3 + 10) == 1) {
          *(undefined1 *)(lVar3 + 10) = 2;
        }
        lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x70);
        uVar4 = 0;
        if (*(long *)(lVar3 + 0x20) != 0) {
          uVar4 = *(uint *)(*(long *)(lVar3 + 0x20) + 0xc);
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        lVar8 = lVar8 + (ulong)*(byte *)(lVar8 + 0x1c8) * 0x40;
        pbVar6 = (byte *)(lVar8 + 0x30);
        bVar2 = *pbVar6;
        if ((ulong)bVar2 < 6) {
          pcVar10 = *(char **)(*(long *)(param_1 + 8) + 0xa8);
          if ((*pcVar10 == '\0') || ((uint)(byte)pcVar10[2] != (uVar4 & 0xff))) {
            if ((pcVar10[3] == '\0') || ((uint)(byte)pcVar10[5] != (uVar4 & 0xff))) {
              if ((pcVar10[6] == '\0') || ((uint)(byte)pcVar10[8] != (uVar4 & 0xff))) {
                if ((pcVar10[9] == '\0') || ((uint)(byte)pcVar10[0xb] != (uVar4 & 0xff))) {
                  if ((pcVar10[0xc] == '\0') || ((uint)(byte)pcVar10[0xe] != (uVar4 & 0xff))) {
                    if ((pcVar10[0xf] == '\0') || ((uint)(byte)pcVar10[0x11] != (uVar4 & 0xff))) {
                      uVar9 = 6;
                    }
                    else {
                      uVar9 = 5;
                    }
                  }
                  else {
                    uVar9 = 4;
                  }
                }
                else {
                  uVar9 = 3;
                }
              }
              else {
                uVar9 = 2;
              }
            }
            else {
              uVar9 = 1;
            }
          }
          else {
            uVar9 = 0;
          }
          lVar8 = lVar8 + (ulong)bVar2;
          *(char *)(lVar8 + 0x3d) = (char)uVar4;
          *(byte *)(lVar8 + 0x31) = param_2;
          *(undefined1 *)(lVar8 + 0x37) = uVar9;
          *pbVar6 = bVar2 + 1;
          lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x70);
        }
        lVar3 = *(long *)(lVar3 + 0x2d0);
        if (((lVar3 != 0) && (*(byte *)(lVar3 + 10) < 2)) &&
           (*(undefined4 *)(lVar3 + 0xc) = 1, *(byte *)(lVar3 + 10) == 1)) {
          *(undefined1 *)(lVar3 + 10) = 2;
          return;
        }
      }
    }
  }
  return;
}


