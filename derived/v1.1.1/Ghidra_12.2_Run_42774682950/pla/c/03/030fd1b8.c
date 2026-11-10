/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fd1b8; name: FUN_030fd1b8
 */


void FUN_030fd1b8(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong local_58;
  
  uVar11 = (ulong)*(uint *)(param_1 + 0x150) & 0xffffff;
  if (((((uint)uVar11 != 0xffffff) && ((uint)uVar11 < *(uint *)(*(long *)(param_1 + 0x140) + 0x40)))
      && (lVar13 = *(long *)(*(long *)(param_1 + 0x140) + 0x38),
         (*(byte *)(lVar13 + uVar11 * 0xc0 + 0x54) & 3) != 0)) &&
     ((*(uint *)(lVar13 + uVar11 * 0xc0 + 0x50) == *(uint *)(param_1 + 0x150) &&
      ((*(byte *)(lVar13 + uVar11 * 0xc0 + 0x88) & 1) != 0)))) {
    FUN_030fd470(param_1,*(undefined4 *)(param_1 + 0x15d4),param_2);
  }
  if (*(long *)(param_1 + 0x1660) != 0) {
    *(undefined1 *)(param_1 + 0x1668) = 1;
    puVar5 = PTR_PTR_0434a080;
    uVar7 = *(uint *)(param_1 + 0x1644);
    uVar1 = *(int *)(param_1 + 0x15d4) + param_2;
    if ((int)(uVar7 & 0x3fffffff) < (int)uVar1) {
      puVar16 = *(undefined8 **)(param_1 + 0x1638);
      uVar4 = *(uint *)(param_1 + 0x1640);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar7 = *(uint *)(param_1 + 0x1644);
      }
      uVar9 = (uVar7 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar9) {
        uVar3 = uVar9;
      }
      FUN_032bd100(uVar3,0x10,uVar7,&local_58);
      uVar7 = *(uint *)(param_1 + 0x1644);
      puVar6 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_58,&local_58);
      if (0 < (int)uVar4) {
        puVar6[1] = puVar16[1];
        *puVar6 = *puVar16;
        if (uVar4 != 1) {
          puVar6[3] = puVar16[3];
          puVar6[2] = puVar16[2];
          if (uVar4 != 2) {
            puVar6[5] = puVar16[5];
            puVar6[4] = puVar16[4];
            if (uVar4 != 3) {
              lVar13 = (ulong)uVar4 - 3;
              puVar12 = puVar16 + 6;
              puVar14 = puVar6 + 6;
              do {
                puVar14[1] = puVar12[1];
                lVar13 = lVar13 + -1;
                *puVar14 = *puVar12;
                puVar12 = puVar12 + 2;
                puVar14 = puVar14 + 2;
              } while (lVar13 != 0);
            }
          }
        }
      }
      if (-1 < (int)uVar7) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5,puVar16,((ulong)uVar7 & 0x3fffffff) << 4);
      }
      if (local_58 < 0x3fffffff0) {
        uVar10 = (undefined4)(local_58 >> 4);
      }
      else {
        uVar10 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0x1644) = uVar10;
      *(undefined8 **)(param_1 + 0x1638) = puVar6;
    }
    if (*(uint *)(param_1 + 0x1640) != uVar1) {
      *(uint *)(param_1 + 0x1640) = uVar1;
    }
    iVar8 = *(int *)(param_1 + 0x15d4);
    if (iVar8 < (int)uVar1) {
      uVar11 = (ulong)iVar8;
      uVar15 = ~uVar11;
      if ((uVar1 - iVar8 & 1) != 0) {
        *(int *)(*(long *)(param_1 + 0x1638) + uVar11 * 0x10 + 0xc) = iVar8;
        *(int *)(*(long *)(param_1 + 0x1648) + uVar11 * 4) = iVar8;
        uVar11 = uVar11 + 1;
      }
      if (uVar15 + (long)(int)uVar1 != 0) {
        lVar13 = uVar11 << 2;
        do {
          iVar8 = (int)uVar11;
          *(int *)(*(long *)(param_1 + 0x1638) + lVar13 * 4 + 0xc) = iVar8;
          *(int *)(*(long *)(param_1 + 0x1648) + lVar13) = iVar8;
          *(int *)(*(long *)(param_1 + 0x1638) + lVar13 * 4 + 0x1c) = iVar8 + 1;
          uVar11 = uVar11 + 2;
          lVar2 = *(long *)(param_1 + 0x1648) + lVar13;
          lVar13 = lVar13 + 8;
          *(int *)(lVar2 + 4) = iVar8 + 1;
        } while (uVar11 != (long)(int)uVar1);
      }
    }
  }
  *(int *)(param_1 + 0x15d4) = *(int *)(param_1 + 0x15d4) + param_2;
  return;
}


