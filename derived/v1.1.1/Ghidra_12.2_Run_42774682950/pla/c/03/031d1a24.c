/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d1a24; name: FUN_031d1a24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031d1a24(long param_1,int *param_2)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  int local_70 [2];
  int local_68 [2];
  int local_58 [2];
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar16 = *(long *)(param_1 + 0x20);
    lVar7 = lVar16;
  }
  else {
    lVar16 = FUN_02898b44();
    lVar7 = *(long *)(param_1 + 0x20);
  }
  local_58[0] = *param_2;
  if ((*(int *)(lVar7 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar7 + 0x100) + (long)local_58[0]) >> 3 & 1) == 0)) {
    plVar17 = (long *)0x0;
    iVar6 = _DAT_00000008;
  }
  else {
    lVar18 = FUN_031920dc((long *)(lVar7 + 0x188),local_58);
    if (lVar18 == 0) {
      uVar9 = 0;
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(uint *)(lVar18 + 4);
      uVar9 = ((int)lVar18 - (int)*(undefined8 *)(lVar7 + 0x198)) * 0x20000000;
    }
    lVar7 = *(long *)(lVar7 + 0x188) + (long)(int)(uVar5 | uVar9) * 0x38;
    plVar17 = (long *)(lVar7 + 8);
    iVar6 = *(int *)(lVar7 + 0x10);
  }
  if (iVar6 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = 0;
    lVar7 = (long)iVar6 * 0x14;
    pbVar10 = (byte *)(*plVar17 + 0x10);
    do {
      iVar15 = iVar15 + ((*pbVar10 >> 3 ^ 0xffffffff) & 1);
      lVar7 = lVar7 + -0x14;
      pbVar10 = pbVar10 + 0x14;
    } while (lVar7 != 0);
  }
  local_70[0] = *param_2;
  FUN_031d1c50(local_68,param_1,local_70,iVar15);
  iVar6 = (int)plVar17[1];
  if (0 < iVar6) {
    lVar11 = *(long *)(param_1 + 0x20);
    lVar18 = 0;
    lVar19 = 0;
    lVar7 = 0;
    lVar8 = *(long *)(lVar11 + 0xd0) + (long)local_68[0] * 0x10;
    lVar13 = *(long *)(lVar11 + 0x18) + (long)*param_2 * 0x10;
    sVar2 = *(short *)(lVar13 + 8);
    sVar3 = *(short *)(lVar13 + 10);
    iVar4 = *(int *)(lVar11 + 0x60);
    iVar15 = ((*(int *)(lVar8 + 4) - iVar15) - *(int *)(lVar11 + 0x30)) +
             (int)*(short *)(lVar8 + 10);
    do {
      puVar1 = (undefined4 *)(*plVar17 + lVar18);
      if ((*(byte *)(puVar1 + 4) >> 3 & 1) == 0) {
        iVar6 = *(int *)(lVar16 + 0x60);
        lVar13 = *(long *)(lVar16 + 0x150);
        puVar12 = (undefined4 *)(*(long *)(lVar16 + 0xe0) + (long)iVar15 * 0x14);
        lVar8 = plVar17[2];
        *puVar12 = *puVar1;
        puVar12[1] = puVar1[1];
        uVar14 = *(undefined8 *)(puVar1 + 2);
        *(undefined2 *)(puVar12 + 4) = *(undefined2 *)(puVar1 + 4);
        *(undefined8 *)(puVar12 + 2) = uVar14;
        *(undefined2 *)((long)puVar12 + 0x12) = *(undefined2 *)((long)puVar1 + 0x12);
        memcpy((void *)(lVar13 + (long)(iVar6 * iVar15) * 4),(void *)(lVar8 + lVar19),
               (long)iVar6 << 2);
        *(short *)(*(long *)(lVar16 + 0x110) + (long)iVar15 * 2) = sVar3 + sVar2 + (short)lVar7;
        iVar6 = (int)plVar17[1];
        iVar15 = iVar15 + 1;
      }
      lVar7 = lVar7 + 1;
      lVar19 = lVar19 + (long)iVar4 * 4;
      lVar18 = lVar18 + 0x14;
    } while (lVar7 < iVar6);
  }
  return;
}


