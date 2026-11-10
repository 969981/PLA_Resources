/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db8b1c; name: FUN_00db8b1c
 */


void FUN_00db8b1c(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  
  if ((*(char *)(param_1 + 0x54) != '\0') &&
     (uVar10 = *(int *)(param_1 + 0x70) + 1, *(uint *)(param_1 + 0x70) = uVar10, 0x13 < uVar10)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    lVar5 = nn::os::GetSystemTick();
    if (lVar5 < *(long *)(param_1 + 0x58)) {
      lVar12 = *(long *)(param_1 + 0x58) + lVar5;
    }
    else {
      *(long *)(param_1 + 0x58) = lVar5;
      lVar12 = lVar5;
    }
    uVar6 = nn::os::ConvertToTimeSpan(lVar12 - *(long *)(param_1 + 0x60));
    uVar2 = ((long)uVar6 >> 0x20) * 0x26d694b3 + ((uVar6 & 0xffffffff) * 0x26d694b3 >> 0x20);
    lVar3 = ((long)(((long)uVar6 >> 0x20) * 0x112e0be8 + ((long)uVar2 >> 0x20) +
                   ((uVar6 & 0xffffffff) * 0x112e0be8 + (uVar2 & 0xffffffff) >> 0x20)) >> 0x1a) -
            ((long)uVar6 >> 0x3f);
    if (*(long *)(param_1 + 0x68) < lVar3) {
      lVar7 = *param_2;
      uVar10 = (int)lVar3 - (int)*(long *)(param_1 + 0x68);
      if (uVar10 < 2 && *(char *)(lVar7 + 0x110) != '\0') {
        uVar8 = *(ushort *)(lVar7 + 0x118);
        uVar9 = (uint)*(byte *)(lVar7 + 0x11a);
        if (((uVar8 != 999) || (uVar9 != 0x3b)) || (*(byte *)(lVar7 + 0x11b) != 0x3b)) {
          uVar10 = *(byte *)(lVar7 + 0x11b) + uVar10;
          if (0x3c < uVar10) {
            uVar11 = (uVar10 & 0xffff) / 0x3c;
            uVar9 = uVar11 + uVar9;
            uVar11 = uVar10 + uVar11 * -0x3c & 0xffff;
            uVar10 = uVar11;
            if (0x3b < uVar9) {
              uVar4 = uVar9 % 0x3c;
              uVar1 = uVar9 / 0x3c + (uint)uVar8;
              uVar10 = 999;
              if (uVar1 < 999) {
                uVar10 = uVar1;
              }
              uVar8 = (ushort)uVar10;
              uVar9 = 0x3b;
              if (uVar1 < 999) {
                uVar9 = uVar4;
              }
              uVar10 = 0x3b;
              if (uVar1 < 999) {
                uVar10 = uVar11;
              }
            }
          }
          *(ushort *)(lVar7 + 0x118) = uVar8;
          *(char *)(lVar7 + 0x11a) = (char)uVar9;
          *(char *)(lVar7 + 0x11b) = (char)uVar10;
        }
      }
      if (*(long *)(param_1 + 0x58) == lVar12) {
        *(long *)(param_1 + 0x68) = lVar3;
      }
      else {
        *(long *)(param_1 + 0x60) = lVar5;
        uVar6 = nn::os::ConvertToTimeSpan(lVar5);
        *(long *)(param_1 + 0x58) = lVar5;
        uVar2 = ((long)uVar6 >> 0x20) * 0x26d694b3 + ((uVar6 & 0xffffffff) * 0x26d694b3 >> 0x20);
        *(long *)(param_1 + 0x68) =
             ((long)(((long)uVar6 >> 0x20) * 0x112e0be8 + ((long)uVar2 >> 0x20) +
                    ((uVar6 & 0xffffffff) * 0x112e0be8 + (uVar2 & 0xffffffff) >> 0x20)) >> 0x1a) -
             ((long)uVar6 >> 0x3f);
      }
    }
  }
  return;
}


