/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020ff40; name: FUN_0020ff40
 */


ulong FUN_0020ff40(long param_1,byte *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar6 = PTR_DAT_043727f8;
  if (param_3 != 0) {
    uVar12 = 8;
    uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) - *(long *)(*(long *)(param_1 + 8) + 0x20);
    do {
      bVar3 = *param_2;
      if (uVar12 == 8) {
        if (uVar13 == 0) {
          uVar13 = FUN_0020c618(param_1,0);
          if ((int)uVar13 != 0) {
            return uVar13;
          }
          uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) -
                   *(long *)(*(long *)(param_1 + 8) + 0x20);
        }
        else {
          **(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = 0;
        }
      }
      uVar14 = (ulong)*(uint *)(puVar6 + (ulong)bVar3 * 8);
      uVar2 = *(uint *)((long)(puVar6 + (ulong)bVar3 * 8) + 4);
      uVar5 = uVar12 - uVar14;
      if (uVar12 < uVar14 || uVar5 == 0) {
        lVar9 = *(long *)(param_1 + 8);
        pbVar11 = *(byte **)(lVar9 + 0x20);
        if (uVar12 == uVar14) {
          *pbVar11 = *pbVar11 | (byte)uVar2;
          *(long *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + 1;
          uVar13 = uVar13 - 1;
          uVar12 = 8;
        }
        else {
          uVar14 = uVar14 - uVar12;
          *pbVar11 = *pbVar11 | (byte)(uVar2 >> (ulong)((uint)uVar14 & 0x1f));
          uVar1 = 0;
          if ((uVar14 & 7) != 0) {
            uVar1 = 8 - ((uint)uVar14 & 7);
          }
          uVar13 = uVar13 - 1;
          uVar2 = uVar2 << (ulong)(uVar1 & 0x1f);
          *(long *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + 1;
          if (uVar13 < uVar14 + 7 >> 3) {
            if (uVar14 < 0x19) {
              if (0x10 < uVar14) goto LAB_002100cc;
              if (8 < uVar14) goto LAB_00210114;
LAB_00210128:
              if (uVar14 == 8) {
                iVar7 = FUN_0020c5c4();
                if (iVar7 != 0) goto LAB_002101ec;
                goto LAB_002101cc;
              }
              iVar7 = FUN_0020c618(param_1,uVar2);
              if (iVar7 == 0) {
                uVar12 = 8 - uVar14;
                uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) -
                         *(long *)(*(long *)(param_1 + 8) + 0x20);
                goto joined_r0x002101a8;
              }
            }
            else {
              iVar7 = FUN_0020c5c4(param_1,uVar2 >> 0x18);
              if (iVar7 == 0) {
                uVar14 = uVar14 - 8;
LAB_002100cc:
                iVar7 = FUN_0020c5c4(param_1,uVar2 >> 0x10);
                if (iVar7 == 0) {
                  uVar14 = uVar14 - 8;
LAB_00210114:
                  iVar7 = FUN_0020c5c4(param_1,uVar2 >> 8);
                  if (iVar7 == 0) {
                    uVar14 = uVar14 - 8;
                    goto LAB_00210128;
                  }
                }
              }
            }
LAB_002101ec:
            uVar12 = (ulong)iVar7;
            goto joined_r0x002101a8;
          }
          uVar4 = (undefined1)uVar2;
          if (uVar14 < 8) {
            **(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = uVar4;
            uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) -
                     *(long *)(*(long *)(param_1 + 8) + 0x20);
            uVar12 = 8 - uVar14;
            goto LAB_002101f4;
          }
          if (uVar14 < 0x19) {
            if (0x10 < uVar14) goto LAB_0021014c;
            if (8 < uVar14) goto LAB_00210168;
            plVar8 = (long *)(*(long *)(param_1 + 8) + 0x20);
            puVar10 = (undefined1 *)*plVar8;
          }
          else {
            uVar14 = uVar14 - 8;
            puVar10 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar10 + 1;
            *puVar10 = (char)(uVar2 >> 0x18);
LAB_0021014c:
            uVar14 = uVar14 - 8;
            puVar10 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar10 + 1;
            *puVar10 = (char)(uVar2 >> 0x10);
LAB_00210168:
            puVar10 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar10 + 1;
            *puVar10 = (char)(uVar2 >> 8);
            plVar8 = (long *)(*(long *)(param_1 + 8) + 0x20);
            puVar10 = (undefined1 *)*plVar8;
            if (uVar14 != 0x10) {
              *puVar10 = uVar4;
              uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) -
                       *(long *)(*(long *)(param_1 + 8) + 0x20);
              uVar12 = 0x10 - uVar14;
              goto joined_r0x002101a8;
            }
          }
          *plVar8 = (long)(puVar10 + 1);
          *puVar10 = uVar4;
LAB_002101cc:
          uVar12 = 8;
          uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) -
                   *(long *)(*(long *)(param_1 + 8) + 0x20);
        }
      }
      else {
        pbVar11 = *(byte **)(*(long *)(param_1 + 8) + 0x20);
        *pbVar11 = *pbVar11 | (byte)(uVar2 << (ulong)((uint)uVar5 & 0x1f));
        uVar12 = uVar5;
joined_r0x002101a8:
        if ((long)uVar12 < 0) {
          return uVar12 & 0xffffffff;
        }
      }
LAB_002101f4:
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    if ((long)uVar12 < 8) {
      lVar9 = *(long *)(param_1 + 8);
      **(byte **)(lVar9 + 0x20) =
           **(byte **)(lVar9 + 0x20) |
           (byte)(*(uint *)(puVar6 + 0x804) >>
                 (ulong)(*(int *)(puVar6 + 0x800) - (int)uVar12 & 0x1f));
      *(long *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + 1;
      return 0;
    }
  }
  return 0;
}


