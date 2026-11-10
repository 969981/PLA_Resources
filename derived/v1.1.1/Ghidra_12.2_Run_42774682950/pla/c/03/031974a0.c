/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031974a0; name: FUN_031974a0
 */


void FUN_031974a0(long param_1,long param_2,int *param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  byte *pbVar13;
  
  if (0 < (short)param_3[2]) {
    iVar10 = 0;
    do {
      iVar9 = *param_3 + iVar10;
      iVar3 = iVar9 - *(int *)(param_1 + 0x30);
      if (iVar9 < *(int *)(param_1 + 0x30)) {
        if (*(int *)(param_1 + 0x78) == 0) {
          iVar2 = iVar9;
        }
        else {
          iVar2 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar9 * 4);
        }
        lVar7 = *(long *)(param_1 + 0x28);
        iVar3 = iVar9;
        if (iVar2 != -1) {
          lVar7 = *(long *)(param_1 + 0xc0);
          iVar3 = iVar2;
        }
      }
      else {
        lVar7 = *(long *)(param_1 + 0xe0);
      }
      if ((*(byte *)(lVar7 + (long)iVar3 * 0x14 + 0x10) >> 6 & 1) != 0) {
        puVar12 = (uint *)(lVar7 + (long)iVar3 * 0x14 + 8);
        uVar5 = *puVar12;
        lVar7 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar5 >> 0x16) * 0xf0);
        if (*(char *)(lVar7 + 0x30) == '\x01') {
          lVar7 = *(long *)(lVar7 + 0x20);
        }
        else {
          lVar7 = FUN_02898b44();
          uVar5 = *puVar12;
        }
        uVar5 = uVar5 & 0x3fffff;
        uVar4 = uVar5 - *(int *)(lVar7 + 0x30);
        if ((int)uVar5 < *(int *)(lVar7 + 0x30)) {
          if (*(int *)(lVar7 + 0x78) != 0) {
            uVar5 = *(uint *)(*(long *)(lVar7 + 0x70) + (ulong)uVar5 * 4);
          }
          plVar8 = (long *)(lVar7 + 0xc0);
          uVar4 = uVar5;
        }
        else {
          plVar8 = (long *)(lVar7 + 0xe0);
        }
        lVar7 = *plVar8 + (long)(int)uVar4 * 0x14;
        *(undefined8 *)(lVar7 + 8) = 0xffffffffffffffff;
        *(byte *)(lVar7 + 0x10) = *(byte *)(lVar7 + 0x10) & 0xbf;
        if (param_4 != (long *)0x0) {
          uVar5 = *puVar12 >> 0x16;
          iVar9 = (int)param_4[1];
          if (iVar9 <= (int)param_4[2] * 2) {
            FUN_031999a8(param_4,iVar9 << 1);
            iVar9 = (int)param_4[1];
          }
          uVar4 = (uVar5 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar5 * -0x61c8864f & 0xff00ff) << 8;
          uVar4 = iVar9 - 1U & (uVar4 >> 0x10 | uVar4 << 0x10);
          lVar7 = *param_4;
          puVar12 = (uint *)(lVar7 + (long)(int)uVar4 * 4);
          if (*puVar12 == 0xffffffff) {
            iVar9 = 1;
          }
          else if (*puVar12 == uVar5) {
            iVar9 = 0;
          }
          else {
            do {
              uVar4 = uVar4 + 1 & iVar9 - 1U;
              uVar1 = *(uint *)(lVar7 + (long)(int)uVar4 * 4);
              if (uVar1 == 0xffffffff) {
                iVar9 = 1;
                goto LAB_0319766c;
              }
            } while (uVar1 != uVar5);
            iVar9 = 0;
LAB_0319766c:
            puVar12 = (uint *)(lVar7 + (long)(int)uVar4 * 4);
          }
          *(int *)(param_4 + 2) = (int)param_4[2] + iVar9;
          *puVar12 = uVar5;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (short)param_3[2]);
  }
  lVar11 = (long)DAT_0444b53c;
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar6;
  }
  if (*(long *)(lVar6 + lVar11 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  if (0 < *(short *)((long)param_3 + 10)) {
    iVar10 = 0;
    do {
      iVar9 = param_3[1] + iVar10;
      iVar3 = iVar9 - *(int *)(param_1 + 0x30);
      if (iVar9 < *(int *)(param_1 + 0x30)) {
        if (*(int *)(param_1 + 0x78) == 0) {
          iVar2 = iVar9;
        }
        else {
          iVar2 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar9 * 4);
        }
        lVar7 = *(long *)(param_1 + 0x28);
        iVar3 = iVar9;
        if (iVar2 != -1) {
          lVar7 = *(long *)(param_1 + 0xc0);
          iVar3 = iVar2;
        }
      }
      else {
        lVar7 = *(long *)(param_1 + 0xe0);
      }
      if ((*(byte *)(lVar7 + (long)iVar3 * 0x14 + 0x10) >> 6 & 1) != 0) {
        puVar12 = (uint *)(lVar7 + (long)iVar3 * 0x14 + 8);
        uVar5 = *puVar12;
        lVar7 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar5 >> 0x16) * 0xf0);
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else if (*(char *)(lVar7 + 0x30) == '\x01') {
          lVar7 = *(long *)(lVar7 + 0x20);
        }
        else {
          lVar7 = FUN_02898b44();
          uVar5 = *puVar12;
        }
        uVar5 = uVar5 & 0x3fffff;
        uVar4 = uVar5 - *(int *)(lVar7 + 0x30);
        if ((int)uVar5 < *(int *)(lVar7 + 0x30)) {
          if (*(int *)(lVar7 + 0x78) != 0) {
            uVar5 = *(uint *)(*(long *)(lVar7 + 0x70) + (ulong)uVar5 * 4);
          }
          plVar8 = (long *)(lVar7 + 0xc0);
          uVar4 = uVar5;
        }
        else {
          plVar8 = (long *)(lVar7 + 0xe0);
        }
        lVar6 = *plVar8 + (long)(int)uVar4 * 0x14;
        pbVar13 = (byte *)(lVar6 + 0x10);
        uVar5 = *pbVar13 & 0xffffffbf;
        *(undefined8 *)(lVar6 + 8) = 0xffffffffffffffff;
        *pbVar13 = (byte)uVar5;
        if (param_4 != (long *)0x0) {
          uVar5 = *puVar12 >> 0x16;
          iVar9 = (int)param_4[1];
          if (iVar9 <= (int)param_4[2] * 2) {
            FUN_031999a8(param_4,iVar9 << 1);
            iVar9 = (int)param_4[1];
          }
          uVar4 = (uVar5 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar5 * -0x61c8864f & 0xff00ff) << 8;
          uVar4 = iVar9 - 1U & (uVar4 >> 0x10 | uVar4 << 0x10);
          lVar6 = *param_4;
          puVar12 = (uint *)(lVar6 + (long)(int)uVar4 * 4);
          if (*puVar12 == 0xffffffff) {
            iVar9 = 1;
          }
          else if (*puVar12 == uVar5) {
            iVar9 = 0;
          }
          else {
            do {
              uVar4 = uVar4 + 1 & iVar9 - 1U;
              uVar1 = *(uint *)(lVar6 + (long)(int)uVar4 * 4);
              if (uVar1 == 0xffffffff) {
                iVar9 = 1;
                goto LAB_031978b8;
              }
            } while (uVar1 != uVar5);
            iVar9 = 0;
LAB_031978b8:
            puVar12 = (uint *)(lVar6 + (long)(int)uVar4 * 4);
          }
          *(int *)(param_4 + 2) = (int)param_4[2] + iVar9;
          *puVar12 = uVar5;
          uVar5 = (uint)*pbVar13;
        }
        if ((uVar5 >> 2 & 1) == 0) {
          *(int *)(lVar7 + 0x164) = *(int *)(lVar7 + 0x164) + 1;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(short *)((long)param_3 + 10));
  }
  return;
}


