/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03266600; name: FUN_03266600
 */


void FUN_03266600(long param_1,ushort *param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  undefined2 *puVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  
  puVar10 = PTR_PTR_0434a080;
  if (*(int *)(param_1 + 0xb0) != 0) {
    uVar7 = *param_2;
    if ((ulong)uVar7 != 0xffff) {
      lVar12 = *(long *)(param_1 + 0x100);
      piVar2 = (int *)(lVar12 + (ulong)*(ushort *)
                                        (*(long *)(param_1 + 0xb8) +
                                         (long)*(int *)(param_1 + 0xc0) * 2 + -2) * 0x20);
      iVar4 = *piVar2;
      iVar5 = piVar2[1];
      piVar2 = (int *)(lVar12 + (ulong)*(ushort *)
                                        (*(long *)(param_1 + 0xa8) +
                                        (long)(*(int *)(param_1 + 0xb0) + -1) * 2) * 0x20);
      iVar14 = iVar5 - iVar4;
      iVar8 = piVar2[1] - *piVar2;
      iVar14 = (iVar14 * 2 & 0x10000U) + iVar14;
      iVar8 = (iVar8 * 2 & 0x10000U) + iVar8;
      if ((iVar8 >> 0x10) * (int)(short)iVar14 < (int)(short)iVar8 * (iVar14 >> 0x10)) {
        iVar14 = *(int *)(*(long *)(param_1 + 0x130) +
                         (ulong)*(ushort *)
                                 (*(long *)(param_1 + 0x120) +
                                 (ulong)*(ushort *)(*(long *)(param_1 + 0x110) + (ulong)uVar7 * 8) *
                                 8) * 4);
        iVar4 = iVar4 - iVar14;
        iVar5 = iVar5 - iVar14;
        iVar4 = (iVar4 * 2 & 0x10000U) + iVar4;
        iVar5 = (iVar5 * 2 & 0x10000U) + iVar5;
        if ((int)(short)iVar5 * (iVar4 >> 0x10) < (int)(short)iVar4 * (iVar5 >> 0x10)) {
          uVar6 = *(uint *)(param_1 + 0x108);
          if ((int)(*(uint *)(param_1 + 0x10c) & 0x3fffffff) <= (int)uVar6) {
            uVar13 = FUN_032635e4(PTR_PTR_0434a080,uVar6 + 1,lVar12,uVar6,param_1 + 0x10c);
            *(undefined8 *)(param_1 + 0x100) = uVar13;
          }
          *(uint *)(param_1 + 0x108) = uVar6 + 1;
          iVar14 = (int)((ulong)uVar6 & 0xffff) + 1;
          FUN_032633cc(param_1 + 0xe8,iVar14);
          FUN_032634d8(param_1 + 0xd0,iVar14);
          puVar16 = (uint *)(*(long *)(param_1 + 0x100) + ((ulong)uVar6 & 0xffff) * 0x20);
          *puVar16 = param_4;
          puVar16[1] = param_4 & 0xffff0000 | 0x3fff;
          *(undefined4 *)((long)puVar16 + 10) = 0xffffff00;
          *(ushort *)((long)puVar16 + 0x12) = uVar7;
          uVar15 = *(uint *)(param_1 + 0xc4);
          iVar14 = *(int *)(param_1 + 0xc0);
          uVar1 = iVar14 + 1;
          if (iVar14 < (int)(uVar15 & 0x3fffffff)) {
            lVar12 = *(long *)(param_1 + 0xb8);
          }
          else {
            uVar13 = *(undefined8 *)(param_1 + 0xb8);
            if (0x3ffffffe < iVar14) {
              FUN_032bd0a8(uVar1);
              uVar15 = *(uint *)(param_1 + 0xc4);
            }
            uVar15 = (uVar15 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar15) {
              uVar15 = 0x3fffffff;
            }
            uVar9 = uVar1;
            if ((int)uVar1 <= (int)uVar15) {
              uVar9 = uVar15;
            }
            lVar12 = FUN_032bd1d4(puVar10,uVar9,2,uVar13,iVar14);
            iVar14 = *(int *)(param_1 + 0xc0);
            *(long *)(param_1 + 0xb8) = lVar12;
          }
          *(short *)(lVar12 + (long)iVar14 * 2) = (short)uVar6;
          *(uint *)(param_1 + 0xc0) = uVar1;
        }
        else {
          FUN_03265360(param_1);
        }
      }
    }
    puVar10 = PTR_PTR_0434a080;
    if ((ulong)*param_3 != 0xffff) {
      lVar12 = *(long *)(param_1 + 0x100);
      piVar2 = (int *)(lVar12 + (ulong)**(ushort **)(param_1 + 0xa8) * 0x20);
      piVar3 = (int *)(lVar12 + (ulong)**(ushort **)(param_1 + 0xb8) * 0x20);
      iVar4 = *piVar3;
      iVar5 = piVar3[1];
      iVar14 = piVar2[1] - *piVar2;
      iVar8 = iVar5 - iVar4;
      iVar14 = (iVar14 * 2 & 0x10000U) + iVar14;
      iVar8 = (iVar8 * 2 & 0x10000U) + iVar8;
      if ((iVar8 >> 0x10) * (int)(short)iVar14 < (int)(short)iVar8 * (iVar14 >> 0x10)) {
        iVar14 = *(int *)(*(long *)(param_1 + 0x130) +
                         (ulong)*(ushort *)
                                 (*(long *)(param_1 + 0x120) +
                                 (ulong)*(ushort *)
                                         (*(long *)(param_1 + 0x110) + (ulong)*param_3 * 8 + 2) * 8)
                         * 4);
        iVar4 = iVar4 - iVar14;
        iVar5 = iVar5 - iVar14;
        iVar4 = (iVar4 * 2 & 0x10000U) + iVar4;
        iVar5 = (iVar5 * 2 & 0x10000U) + iVar5;
        if ((int)(short)iVar5 * (iVar4 >> 0x10) <= (int)(short)iVar4 * (iVar5 >> 0x10)) {
          FUN_032654a0(param_1,param_3);
          return;
        }
        uVar6 = *(uint *)(param_1 + 0x108);
        if ((int)(*(uint *)(param_1 + 0x10c) & 0x3fffffff) <= (int)uVar6) {
          uVar13 = FUN_032635e4(PTR_PTR_0434a080,uVar6 + 1,lVar12,uVar6,param_1 + 0x10c);
          *(undefined8 *)(param_1 + 0x100) = uVar13;
        }
        *(uint *)(param_1 + 0x108) = uVar6 + 1;
        iVar14 = (int)((ulong)uVar6 & 0xffff) + 1;
        FUN_032633cc(param_1 + 0xe8,iVar14);
        FUN_032634d8(param_1 + 0xd0,iVar14);
        puVar16 = (uint *)(*(long *)(param_1 + 0x100) + ((ulong)uVar6 & 0xffff) * 0x20);
        *puVar16 = param_4;
        puVar16[1] = param_4 + 0x10000 & 0xffff0000;
        *(undefined4 *)((long)puVar16 + 10) = 0xffffff00;
        *(undefined2 *)((long)puVar16 + 0x12) = 0xffff;
        puVar16 = (uint *)(param_1 + 0xc4);
        uVar15 = *puVar16;
        iVar14 = *(int *)(param_1 + 0xc0);
        uVar1 = iVar14 + 1;
        if (iVar14 < (int)(uVar15 & 0x3fffffff)) {
          puVar11 = *(undefined2 **)(param_1 + 0xb8);
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + 0xb8);
          if (0x3ffffffe < iVar14) {
            FUN_032bd0a8(uVar1);
            uVar15 = *puVar16;
          }
          uVar15 = (uVar15 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar15) {
            uVar15 = 0x3fffffff;
          }
          uVar9 = uVar1;
          if ((int)uVar1 <= (int)uVar15) {
            uVar9 = uVar15;
          }
          puVar11 = (undefined2 *)FUN_032bd1d4(puVar10,uVar9,2,uVar13,iVar14,puVar16);
          *(undefined2 **)(param_1 + 0xb8) = puVar11;
        }
        if (0 < iVar14) {
          FUN_032d57d0(puVar11 + 1,puVar11,(long)iVar14 << 1);
        }
        *puVar11 = (short)uVar6;
        *(uint *)(param_1 + 0xc0) = uVar1;
      }
    }
  }
  return;
}


