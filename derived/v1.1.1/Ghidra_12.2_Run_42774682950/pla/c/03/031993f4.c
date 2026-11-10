/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031993f4; name: FUN_031993f4
 */


void FUN_031993f4(long param_1,long param_2,int *param_3,int *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  byte bVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  int iVar19;
  
  if (*param_4 != *param_3) {
    puVar3 = (undefined4 *)(*(long *)(param_2 + 0xd0) + (long)*param_4 * 0x10);
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0xd0) + (long)*param_3 * 0x10);
    uVar6 = puVar3[1];
    iVar19 = *(int *)(param_2 + 0x20);
    lVar17 = (long)iVar19;
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar3 + 2);
    *(undefined1 *)(*(long *)(param_2 + 0x100) + *param_3 + lVar17) =
         *(undefined1 *)(*(long *)(param_2 + 0x100) + *param_4 + lVar17);
    iVar11 = *(int *)(param_2 + 0x50);
    memcpy((void *)(*(long *)(param_2 + 0x140) + (long)(iVar11 * *param_3) * 4),
           (void *)(*(long *)(param_2 + 0x140) + (long)(iVar11 * *param_4) * 4),(long)iVar11 << 2);
    uVar2 = *param_3 + iVar19;
    piVar5 = (int *)(*(long *)(param_2 + 0xd0) + (long)*param_3 * 0x10);
    if (0 < (short)piVar5[2]) {
      iVar19 = 0;
      plVar1 = (long *)(param_2 + 0xc0);
      do {
        iVar11 = iVar19 + *piVar5;
        iVar7 = *(int *)(param_2 + 0x30);
        if (iVar11 < iVar7) {
          lVar16 = *(long *)(param_2 + 0x28);
          iVar14 = iVar11;
          if (*(int *)(param_2 + 0x78) != 0) {
            iVar14 = *(int *)(*(long *)(param_2 + 0x70) + (long)iVar11 * 4);
          }
          plVar10 = plVar1;
          if (iVar14 != -1) goto LAB_03199630;
        }
        else {
          plVar10 = (long *)(param_2 + 0xe0);
          iVar14 = iVar11 - iVar7;
LAB_03199630:
          iVar11 = iVar14;
          lVar16 = *plVar10;
        }
        puVar18 = (uint *)(lVar16 + (long)iVar11 * 0x14 + 8);
        uVar8 = *puVar18;
        if (uVar8 != 0xffffffff) {
          if ((*(byte *)(lVar16 + (long)iVar11 * 0x14 + 0x10) >> 6 & 1) == 0) {
            uVar12 = (ulong)uVar8 & 0x3fffff;
            uVar15 = (ulong)(uint)((int)uVar12 - iVar7);
            if ((int)uVar12 < iVar7) {
              plVar10 = plVar1;
              uVar15 = uVar12;
              if (*(int *)(param_2 + 0x78) != 0) {
                uVar15 = (ulong)*(uint *)(*(long *)(param_2 + 0x70) + uVar12 * 4);
              }
            }
            else {
              plVar10 = (long *)(param_2 + 0xe0);
            }
            *(uint *)(*plVar10 + (long)(int)uVar15 * 0x14 + 0xc) = uVar2;
          }
          else {
            lVar16 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar8 >> 0x16) * 0xf0);
            if (*(char *)(lVar16 + 0x30) == '\x01') {
              lVar16 = *(long *)(lVar16 + 0x20);
            }
            else {
              lVar16 = FUN_02898b44();
              uVar8 = *puVar18;
            }
            uVar8 = uVar8 & 0x3fffff;
            uVar9 = uVar8 - *(int *)(lVar16 + 0x30);
            if ((int)uVar8 < *(int *)(lVar16 + 0x30)) {
              if (*(int *)(lVar16 + 0x78) != 0) {
                uVar8 = *(uint *)(*(long *)(lVar16 + 0x70) + (ulong)uVar8 * 4);
              }
              plVar10 = (long *)(lVar16 + 0xc0);
              uVar9 = uVar8;
            }
            else {
              plVar10 = (long *)(lVar16 + 0xe0);
            }
            lVar16 = *plVar10 + (long)(int)uVar9 * 0x14;
            *(uint *)(lVar16 + 0xc) = *(uint *)(lVar16 + 0xc) & 0xffc00000 | uVar2;
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (short)piVar5[2]);
    }
    if (0 < *(short *)((long)piVar5 + 10)) {
      iVar19 = 0;
      plVar1 = (long *)(param_2 + 0xc0);
      do {
        iVar11 = iVar19 + piVar5[1];
        iVar7 = *(int *)(param_2 + 0x30);
        if (iVar11 < iVar7) {
          lVar16 = *(long *)(param_2 + 0x28);
          iVar14 = iVar11;
          if (*(int *)(param_2 + 0x78) != 0) {
            iVar14 = *(int *)(*(long *)(param_2 + 0x70) + (long)iVar11 * 4);
          }
          plVar10 = plVar1;
          if (iVar14 != -1) goto LAB_031997a8;
        }
        else {
          plVar10 = (long *)(param_2 + 0xe0);
          iVar14 = iVar11 - iVar7;
LAB_031997a8:
          iVar11 = iVar14;
          lVar16 = *plVar10;
        }
        puVar18 = (uint *)(lVar16 + (long)iVar11 * 0x14 + 8);
        uVar8 = *puVar18;
        if (uVar8 != 0xffffffff) {
          if ((*(byte *)(lVar16 + (long)iVar11 * 0x14 + 0x10) >> 6 & 1) == 0) {
            uVar12 = (ulong)uVar8 & 0x3fffff;
            uVar15 = (ulong)(uint)((int)uVar12 - iVar7);
            if ((int)uVar12 < iVar7) {
              plVar10 = plVar1;
              uVar15 = uVar12;
              if (*(int *)(param_2 + 0x78) != 0) {
                uVar15 = (ulong)*(uint *)(*(long *)(param_2 + 0x70) + uVar12 * 4);
              }
            }
            else {
              plVar10 = (long *)(param_2 + 0xe0);
            }
            *(uint *)(*plVar10 + (long)(int)uVar15 * 0x14 + 0xc) = uVar2;
          }
          else {
            lVar16 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar8 >> 0x16) * 0xf0);
            if (*(char *)(lVar16 + 0x30) == '\x01') {
              lVar16 = *(long *)(lVar16 + 0x20);
            }
            else {
              lVar16 = FUN_02898b44();
              uVar8 = *puVar18;
            }
            uVar8 = uVar8 & 0x3fffff;
            uVar9 = uVar8 - *(int *)(lVar16 + 0x30);
            if ((int)uVar8 < *(int *)(lVar16 + 0x30)) {
              if (*(int *)(lVar16 + 0x78) != 0) {
                uVar8 = *(uint *)(*(long *)(lVar16 + 0x70) + (ulong)uVar8 * 4);
              }
              plVar10 = (long *)(lVar16 + 0xc0);
              uVar9 = uVar8;
            }
            else {
              plVar10 = (long *)(lVar16 + 0xe0);
            }
            lVar16 = *plVar10 + (long)(int)uVar9 * 0x14;
            *(uint *)(lVar16 + 0xc) = *(uint *)(lVar16 + 0xc) & 0xffc00000 | uVar2;
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < *(short *)((long)piVar5 + 10));
    }
    if (*(int *)(param_2 + 0x108) == 0) {
      bVar13 = 1;
    }
    else {
      bVar13 = *(byte *)(*(long *)(param_2 + 0x100) + *param_4 + lVar17) | 1;
    }
    *(byte *)(*(long *)(param_2 + 0x100) + *param_4 + lVar17) = bVar13;
  }
  return;
}


