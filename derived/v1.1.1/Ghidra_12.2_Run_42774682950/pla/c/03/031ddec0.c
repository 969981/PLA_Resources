/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ddec0; name: FUN_031ddec0
 */


void FUN_031ddec0(long param_1,long param_2,int *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  
  if (0 < param_4) {
    iVar9 = 0;
    do {
      iVar1 = iVar9 + *param_3;
      lVar12 = *(long *)(param_2 + 0xe0);
      lVar10 = lVar12 + (long)iVar1 * 0x14;
      pbVar8 = (byte *)(lVar10 + 0x10);
      DataMemoryBarrier(2,3);
      puVar11 = (uint *)(lVar10 + 8);
      uVar2 = *puVar11;
      if ((*pbVar8 >> 6 & 1) == 0) {
        if (uVar2 != 0xffffffff) {
          uVar2 = uVar2 & 0x3fffff;
          uVar4 = uVar2 - *(int *)(param_2 + 0x30);
          if ((int)uVar2 < *(int *)(param_2 + 0x30)) {
            plVar7 = (long *)(param_2 + 0xc0);
            if (*(int *)(param_2 + 0x78) == 0) {
              uVar4 = uVar2;
              goto LAB_031de05c;
            }
            uVar4 = *(uint *)(*(long *)(param_2 + 0x70) + (ulong)uVar2 * 4);
            if (uVar4 != 0xffffffff) goto LAB_031de05c;
            lVar10 = 0;
          }
          else {
            plVar7 = (long *)(param_2 + 0xe0);
LAB_031de05c:
            lVar10 = *plVar7 + (long)(int)uVar4 * 0x14;
          }
          *(undefined4 *)(lVar12 + (long)iVar1 * 0x14 + 0xc) = 0xffffffff;
          *puVar11 = 0xffffffff;
          *pbVar8 = *pbVar8 & 0xbf;
          *(undefined8 *)(lVar10 + 8) = 0xffffffffffffffff;
          *(byte *)(lVar10 + 0x10) = *(byte *)(lVar10 + 0x10) & 0xbf;
        }
      }
      else {
        DataMemoryBarrier(2,3);
        if (uVar2 == 0xffffffff) goto LAB_031ddf60;
        lVar10 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar2 >> 0x16) * 0xf0);
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else if (*(char *)(lVar10 + 0x30) == '\x01') {
          lVar10 = *(long *)(lVar10 + 0x20);
        }
        else {
          lVar10 = FUN_02898b44();
        }
        FUN_0319133c(param_2,lVar10);
        if (*puVar11 != 0xffffffff) {
          uVar6 = (ulong)*puVar11 & 0x3fffff;
          iVar3 = (int)uVar6 - *(int *)(lVar10 + 0x30);
          if ((int)uVar6 < *(int *)(lVar10 + 0x30)) {
            if ((*(int *)(lVar10 + 0x78) == 0) ||
               (uVar2 = *(uint *)(*(long *)(lVar10 + 0x70) + uVar6 * 4), uVar6 = (ulong)uVar2,
               uVar2 != 0xffffffff)) {
              iVar3 = (int)uVar6;
              plVar7 = (long *)(lVar10 + 0xc0);
              goto LAB_031ddf14;
            }
            lVar5 = 0;
          }
          else {
            plVar7 = (long *)(lVar10 + 0xe0);
LAB_031ddf14:
            lVar5 = *plVar7 + (long)iVar3 * 0x14;
          }
          *(undefined4 *)(lVar12 + (long)iVar1 * 0x14 + 0xc) = 0xffffffff;
          *puVar11 = 0xffffffff;
          *pbVar8 = *pbVar8 & 0xbf;
          *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
          DataMemoryBarrier(2,3);
          *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) & 0xbf;
        }
        FUN_0319136c(param_2,lVar10);
      }
LAB_031ddf60:
      iVar9 = iVar9 + 1;
    } while (param_4 != iVar9);
  }
  return;
}


