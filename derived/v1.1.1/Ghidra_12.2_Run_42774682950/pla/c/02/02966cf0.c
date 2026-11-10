/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02966cf0; name: FUN_02966cf0
 */


void FUN_02966cf0(long *param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  long *plVar10;
  char cVar11;
  undefined1 uVar12;
  long *plVar13;
  char *pcVar14;
  long lVar15;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1[1] + 8) + (ulong)param_2 * 8 + 0x120) + 0x387) & 0x78)
      != 0) {
    return;
  }
  lVar7 = *(long *)(param_1[6] + 0x70);
  uVar6 = 0;
  if (*(long *)(lVar7 + 0x18) != 0) {
    uVar6 = *(uint *)(*(long *)(lVar7 + 0x18) + 0xc);
  }
  if ((param_2 != 0x1f) && ((uVar6 & 0xff) != 0x1f)) {
    uVar5 = *(uint *)(*param_1 + 0x110);
    if ((uVar6 & 0xff) < 6) {
      lVar15 = 0;
    }
    else {
      uVar2 = uVar6 & 0xff;
      lVar15 = 3;
      if (0x17 < uVar2) {
        lVar15 = (ulong)(uVar2 < 0x1e) << 2;
      }
      lVar3 = 1;
      if (0x11 < uVar2) {
        lVar3 = lVar15;
      }
      lVar15 = 2;
      if (0xb < uVar2) {
        lVar15 = lVar3;
      }
    }
    if (uVar5 < 3) {
      cVar11 = (&PTR_DAT_04276e58)[(int)uVar5][lVar15];
    }
    else {
      cVar11 = '\x02';
    }
    if (param_2 < 6) {
      lVar15 = 0;
    }
    else if (param_2 < 0xc) {
      lVar15 = 2;
    }
    else if (param_2 < 0x12) {
      lVar15 = 1;
    }
    else if (param_2 < 0x18) {
      lVar15 = 3;
    }
    else {
      lVar15 = (ulong)(param_2 < 0x1e) << 2;
    }
    if (uVar5 < 3) {
      if (cVar11 == (&PTR_DAT_04276e58)[(int)uVar5][lVar15]) {
        return;
      }
    }
    else if (cVar11 == '\x02') {
      return;
    }
  }
  uVar9 = 0;
  if (*(long *)(lVar7 + 0x98) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(lVar7 + 0x98) + 0xc);
  }
  plVar10 = &DAT_0428af30 + uVar9 * 6;
  lVar15 = *plVar10;
  if (lVar15 == 0) {
    plVar13 = &DAT_0428af30;
  }
  else {
    plVar13 = &DAT_0428af30;
    if (*(char *)(lVar15 + 0x1e1) != '\0') {
      plVar13 = plVar10;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
  if (((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar9 != 0)) &&
     (*(char *)((long)piVar1 + uVar9) == '\v')) {
    plVar13 = &DAT_0428af30;
    if ((lVar15 != 0) && (plVar13 = &DAT_0428af30, *(char *)(lVar15 + 0x1e1) != '\0')) {
      plVar13 = plVar10;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
    if (((0x52 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x29], uVar9 != 0)) &&
       ((*(char *)((long)piVar1 + uVar9) != '\0' &&
        ((lVar7 = *(long *)(lVar7 + 0x130), lVar7 != 0 && (*(byte *)(lVar7 + 10) < 2)))))) {
      *(undefined4 *)(lVar7 + 0xc) = 0x1a;
      if (*(byte *)(lVar7 + 10) == 1) {
        *(undefined1 *)(lVar7 + 10) = 2;
      }
      lVar7 = *(long *)(param_1[5] + 8) + (ulong)*(byte *)(*(long *)(param_1[5] + 8) + 0x1c8) * 0x40
      ;
      pbVar8 = (byte *)(lVar7 + 0x30);
      bVar4 = *pbVar8;
      if ((ulong)bVar4 < 6) {
        pcVar14 = *(char **)(param_1[1] + 0xa8);
        if ((*pcVar14 == '\0') || ((uint)(byte)pcVar14[2] != (uVar6 & 0xff))) {
          if ((pcVar14[3] == '\0') || ((uint)(byte)pcVar14[5] != (uVar6 & 0xff))) {
            if ((pcVar14[6] == '\0') || ((uint)(byte)pcVar14[8] != (uVar6 & 0xff))) {
              if ((pcVar14[9] == '\0') || ((uint)(byte)pcVar14[0xb] != (uVar6 & 0xff))) {
                if ((pcVar14[0xc] == '\0') || ((uint)(byte)pcVar14[0xe] != (uVar6 & 0xff))) {
                  if ((pcVar14[0xf] == '\0') || ((uint)(byte)pcVar14[0x11] != (uVar6 & 0xff))) {
                    uVar12 = 6;
                  }
                  else {
                    uVar12 = 5;
                  }
                }
                else {
                  uVar12 = 4;
                }
              }
              else {
                uVar12 = 3;
              }
            }
            else {
              uVar12 = 2;
            }
          }
          else {
            uVar12 = 1;
          }
        }
        else {
          uVar12 = 0;
        }
        lVar7 = lVar7 + (ulong)bVar4;
        *(char *)(lVar7 + 0x3d) = (char)uVar6;
        *(byte *)(lVar7 + 0x31) = param_2;
        *(undefined1 *)(lVar7 + 0x37) = uVar12;
        *pbVar8 = bVar4 + 1;
        return;
      }
    }
  }
  return;
}


