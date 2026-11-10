/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332c6a8; name: FUN_0332c6a8
 */


void FUN_0332c6a8(long param_1,ulong param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  iVar4 = (int)param_2;
  if (*(int *)(param_1 + 0xc) == 1) {
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x24);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 0x24) = iVar4;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  if (iVar4 == 0) {
    param_2 = **(ulong **)(*(long *)(param_1 + 0x18) + 0x490) >> 0x20;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  iVar7 = *(int *)(puVar6 + 9);
  uVar3 = iVar7 - 1;
  iVar5 = (int)param_2;
  iVar4 = iVar5;
  if (uVar3 != 1) {
    iVar4 = param_3;
  }
  if (iVar4 < 0) {
    *puVar6 = 0x100000000;
    puVar6[1] = 0x100000001;
    plVar8 = (long *)puVar6[0x92];
    if (0 < (int)uVar3) {
      uVar13 = (ulong)(int)uVar3;
      uVar10 = uVar13;
      if ((uVar13 & 1) != 0) {
        uVar10 = uVar13 - 1;
        plVar8[uVar13 * 8] = 0;
        *(undefined4 *)(puVar6[8] + uVar13 * 0x40) = 0;
        plVar8 = (long *)puVar6[0x92];
      }
      if (uVar3 != 1) {
        lVar11 = uVar10 << 6;
        do {
          *(undefined8 *)((long)plVar8 + lVar11) = 0;
          *(undefined4 *)(puVar6[8] + lVar11) = 0;
          *(undefined8 *)(puVar6[0x92] + lVar11 + -0x40) = 0;
          lVar12 = puVar6[8] + lVar11;
          lVar11 = lVar11 + -0x80;
          *(undefined4 *)(lVar12 + -0x40) = 0;
          plVar8 = (long *)puVar6[0x92];
          uVar10 = uVar10 - 2;
        } while (0 < (long)uVar10);
      }
    }
    *plVar8 = param_2 << 0x20;
    *(undefined4 *)puVar6[8] = 0;
    return;
  }
  uVar9 = 0;
  if (uVar3 != 0) {
    uVar9 = iVar5 / (int)uVar3;
  }
  uVar10 = (ulong)uVar9;
  *puVar6 = 1;
  uVar2 = uVar9;
  if ((int)uVar9 < 2) {
    uVar2 = 1;
  }
  *(int *)(puVar6 + 1) = iVar4;
  *(uint *)((long)puVar6 + 0xc) = uVar2;
  if ((int)uVar3 < 1) {
    uVar10 = 0;
  }
  else {
    uVar13 = -(ulong)(uVar3 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar3 << 6;
    *(ulong *)(puVar6[0x92] + uVar13) = uVar10 << 0x20;
    *(uint *)(puVar6[8] + uVar13) = uVar3;
    lVar11 = (long)(int)uVar3;
    lVar12 = lVar11 + -1;
    if (0 < lVar12) {
      uVar3 = iVar5 - uVar9;
      if (lVar12 != 1) {
        uVar3 = uVar9;
      }
      uVar2 = uVar3 + uVar9;
      uVar10 = (ulong)uVar2;
      *(ulong *)(puVar6[0x92] + lVar12 * 0x40) = CONCAT44(uVar2,uVar9);
      *(int *)(puVar6[8] + lVar12 * 0x40) = (int)lVar12;
      lVar12 = lVar11 + -2;
      if (0 < lVar12) {
        uVar9 = iVar5 - uVar2;
        if (lVar12 != 1) {
          uVar9 = uVar3;
        }
        uVar10 = (ulong)(uVar9 + uVar2);
        *(ulong *)(puVar6[0x92] + lVar12 * 0x40) = CONCAT44(uVar9 + uVar2,uVar2);
        *(int *)(puVar6[8] + lVar12 * 0x40) = (int)lVar12;
        if (0 < lVar11 + -3) {
          lVar12 = lVar11 * 0x40 + -0xc0;
          iVar7 = iVar7 + -4;
          lVar11 = lVar11 + -4;
          uVar13 = uVar10;
          do {
            uVar3 = iVar5 - (int)uVar13;
            if (lVar11 != 0) {
              uVar3 = uVar9;
            }
            uVar10 = (ulong)(uVar3 + (int)uVar13);
            *(ulong *)(puVar6[0x92] + lVar12) = uVar13 | uVar10 << 0x20;
            *(int *)(puVar6[8] + lVar12) = iVar7;
            lVar12 = lVar12 + -0x40;
            iVar7 = iVar7 + -1;
            bVar1 = 0 < lVar11;
            lVar11 = lVar11 + -1;
            uVar13 = uVar10;
            uVar9 = uVar3;
          } while (bVar1);
        }
      }
    }
  }
  *(ulong *)puVar6[0x92] = uVar10 | param_2 << 0x20;
  *(undefined4 *)puVar6[8] = 1;
  return;
}


