/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318f8d0; name: FUN_0318f8d0
 */


void FUN_0318f8d0(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  short sVar9;
  int iVar10;
  
  iVar7 = *param_2;
  iVar10 = *(int *)(*(long *)(param_1 + 0x168) + (long)iVar7 * 4);
  lVar6 = (long)iVar10;
  if (iVar10 != -1) {
    if (-1 < iVar10) {
      do {
        bVar8 = 0;
        if (*(int *)(param_1 + 0x108) != 0) {
          bVar8 = *(byte *)(*(long *)(param_1 + 0x100) + lVar6);
        }
        *(byte *)(*(long *)(param_1 + 0x100) + lVar6) = bVar8 | 1;
        lVar1 = *(long *)(param_1 + 0xd0) + (lVar6 - *(int *)(param_1 + 0x20)) * 0x10;
        iVar7 = *(int *)(param_1 + 0x164) + (int)*(short *)(lVar1 + 8);
        *(int *)(param_1 + 0x164) = iVar7;
        sVar9 = *(short *)(lVar1 + 10);
        if (0 < sVar9) {
          iVar10 = 0;
          do {
            iVar2 = iVar10 + *(int *)(lVar1 + 4);
            if (iVar2 < *(int *)(param_1 + 0x30)) {
              iVar3 = iVar2;
              if (*(int *)(param_1 + 0x78) != 0) {
                iVar3 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar2 * 4);
              }
              plVar4 = (long *)(param_1 + 0xc0);
              lVar5 = *(long *)(param_1 + 0x28);
              if (iVar3 != -1) goto LAB_0318f9a4;
            }
            else {
              plVar4 = (long *)(param_1 + 0xe0);
              iVar3 = (iVar10 - *(int *)(param_1 + 0x30)) + *(int *)(lVar1 + 4);
LAB_0318f9a4:
              iVar2 = iVar3;
              lVar5 = *plVar4;
            }
            if ((*(byte *)(lVar5 + (long)iVar2 * 0x14 + 0x10) >> 3 & 1) == 0) {
              iVar7 = iVar7 + 1;
              *(int *)(param_1 + 0x164) = iVar7;
              sVar9 = *(short *)(lVar1 + 10);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < sVar9);
        }
        *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
        *(undefined4 *)(*(long *)(param_1 + 0x168) + lVar6 * 4) = 0xfffffffd;
        lVar6 = lVar6 + 1;
        if (*(int *)(param_1 + 0x170) <= lVar6) {
          iVar7 = *param_2;
          break;
        }
        iVar7 = *param_2;
      } while (*(int *)(*(long *)(param_1 + 0x168) + lVar6 * 4) == iVar7);
    }
    bVar8 = 0;
    if (*(int *)(param_1 + 0x108) != 0) {
      bVar8 = *(byte *)(*(long *)(param_1 + 0x100) + (long)iVar7) & 0xfe;
    }
    *(byte *)(*(long *)(param_1 + 0x100) + (long)iVar7) = bVar8;
    *(undefined4 *)(*(long *)(param_1 + 0x168) + (long)*param_2 * 4) = 0xffffffff;
  }
  return;
}


