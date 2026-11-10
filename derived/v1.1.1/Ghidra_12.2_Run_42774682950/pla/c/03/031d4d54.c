/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d4d54; name: FUN_031d4d54
 */


void FUN_031d4d54(int *param_1,long param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int local_68 [2];
  
  local_68[0] = *param_3;
  FUN_031d1c50(param_1,param_2,local_68,1);
  iVar4 = *param_1;
  lVar10 = *(long *)(*(long *)(param_2 + 0x20) + 0xd0);
  piVar1 = (int *)(*(long *)(*(long *)(param_2 + 0x20) + 0x18) + (long)*param_3 * 0x10);
  if (0 < (short)piVar1[2]) {
    iVar15 = 0;
    do {
      iVar7 = iVar15 + *piVar1;
      iVar2 = *(int *)(lVar10 + (long)iVar4 * 0x10);
      if (*(char *)(param_2 + 0x30) == '\x01') {
        lVar8 = *(long *)(param_2 + 0x20);
        lVar9 = lVar8;
      }
      else {
        lVar8 = FUN_02898b44((long *)(param_2 + 0x20));
        lVar9 = *(long *)(param_2 + 0x20);
      }
      if (iVar7 < *(int *)(lVar9 + 0x30)) {
        lVar11 = *(long *)(lVar9 + 0x28);
        iVar13 = iVar7;
        if (*(int *)(lVar9 + 0x78) != 0) {
          iVar13 = *(int *)(*(long *)(lVar9 + 0x70) + (long)iVar7 * 4);
        }
        if (iVar13 != -1) {
          plVar12 = (long *)(lVar9 + 0xc0);
          iVar7 = iVar13;
          goto LAB_031d4e58;
        }
      }
      else {
        plVar12 = (long *)(lVar9 + 0xe0);
        iVar7 = iVar7 - *(int *)(lVar9 + 0x30);
LAB_031d4e58:
        lVar11 = *plVar12;
      }
      puVar14 = (uint *)(lVar11 + (long)iVar7 * 0x14 + 8);
      uVar3 = *puVar14;
      if (uVar3 != 0xffffffff) {
        iVar2 = iVar15 + iVar2;
        iVar13 = *(int *)(lVar9 + 0x20);
        lVar9 = *(long *)(lVar8 + 0xe0) + (long)(iVar2 - *(int *)(lVar8 + 0x30)) * 0x14;
        *(uint *)(lVar9 + 8) = uVar3;
        *(undefined4 *)(lVar9 + 0xc) = *(undefined4 *)(lVar11 + (long)iVar7 * 0x14 + 0xc);
        uVar6 = (ulong)*puVar14 & 0x3fffff;
        iVar5 = (int)uVar6;
        iVar7 = iVar5 - *(int *)(lVar8 + 0x30);
        if (iVar5 < *(int *)(lVar8 + 0x30)) {
          if (*(int *)(lVar8 + 0x78) == 0) {
            iVar7 = iVar5;
LAB_031d4f04:
            lVar9 = *(long *)(lVar8 + 0xc0);
            goto LAB_031d4de0;
          }
          iVar7 = *(int *)(*(long *)(lVar8 + 0x70) + uVar6 * 4);
          if (iVar7 != -1) goto LAB_031d4f04;
          lVar9 = FUN_031d5dc0(*(undefined8 *)(lVar8 + 0x28),(long *)(lVar8 + 0xc0),
                               *(undefined8 *)(lVar8 + 0x58),lVar8 + 0x130,(long *)(lVar8 + 0x70),
                               lVar8 + 0x80,uVar6,*(undefined4 *)(lVar8 + 0x60));
        }
        else {
          lVar9 = *(long *)(lVar8 + 0xe0);
LAB_031d4de0:
          lVar9 = lVar9 + (long)iVar7 * 0x14;
        }
        *(int *)(lVar9 + 8) = iVar2;
        *(int *)(lVar9 + 0xc) = iVar13 + iVar4;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < (short)piVar1[2]);
  }
  if (0 < *(short *)((long)piVar1 + 10)) {
    iVar15 = 0;
    do {
      iVar7 = iVar15 + piVar1[1];
      iVar2 = *(int *)(lVar10 + (long)iVar4 * 0x10 + 4);
      if (*(char *)(param_2 + 0x30) == '\x01') {
        lVar8 = *(long *)(param_2 + 0x20);
        lVar9 = lVar8;
      }
      else {
        lVar8 = FUN_02898b44((long *)(param_2 + 0x20));
        lVar9 = *(long *)(param_2 + 0x20);
      }
      if (iVar7 < *(int *)(lVar9 + 0x30)) {
        lVar11 = *(long *)(lVar9 + 0x28);
        iVar13 = iVar7;
        if (*(int *)(lVar9 + 0x78) != 0) {
          iVar13 = *(int *)(*(long *)(lVar9 + 0x70) + (long)iVar7 * 4);
        }
        if (iVar13 != -1) {
          plVar12 = (long *)(lVar9 + 0xc0);
          iVar7 = iVar13;
          goto LAB_031d4fb8;
        }
      }
      else {
        plVar12 = (long *)(lVar9 + 0xe0);
        iVar7 = iVar7 - *(int *)(lVar9 + 0x30);
LAB_031d4fb8:
        lVar11 = *plVar12;
      }
      puVar14 = (uint *)(lVar11 + (long)iVar7 * 0x14 + 8);
      uVar3 = *puVar14;
      if (uVar3 != 0xffffffff) {
        iVar2 = iVar15 + iVar2;
        iVar13 = *(int *)(lVar9 + 0x20);
        lVar9 = *(long *)(lVar8 + 0xe0) + (long)(iVar2 - *(int *)(lVar8 + 0x30)) * 0x14;
        *(uint *)(lVar9 + 8) = uVar3;
        *(undefined4 *)(lVar9 + 0xc) = *(undefined4 *)(lVar11 + (long)iVar7 * 0x14 + 0xc);
        uVar6 = (ulong)*puVar14 & 0x3fffff;
        iVar5 = (int)uVar6;
        iVar7 = iVar5 - *(int *)(lVar8 + 0x30);
        if (iVar5 < *(int *)(lVar8 + 0x30)) {
          if (*(int *)(lVar8 + 0x78) == 0) {
            iVar7 = iVar5;
LAB_031d5064:
            lVar9 = *(long *)(lVar8 + 0xc0);
            goto LAB_031d4f40;
          }
          iVar7 = *(int *)(*(long *)(lVar8 + 0x70) + uVar6 * 4);
          if (iVar7 != -1) goto LAB_031d5064;
          lVar9 = FUN_031d5dc0(*(undefined8 *)(lVar8 + 0x28),(long *)(lVar8 + 0xc0),
                               *(undefined8 *)(lVar8 + 0x58),lVar8 + 0x130,(long *)(lVar8 + 0x70),
                               lVar8 + 0x80,uVar6,*(undefined4 *)(lVar8 + 0x60));
        }
        else {
          lVar9 = *(long *)(lVar8 + 0xe0);
LAB_031d4f40:
          lVar9 = lVar9 + (long)iVar7 * 0x14;
        }
        *(int *)(lVar9 + 8) = iVar2;
        *(int *)(lVar9 + 0xc) = iVar13 + iVar4;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(short *)((long)piVar1 + 10));
  }
  return;
}


