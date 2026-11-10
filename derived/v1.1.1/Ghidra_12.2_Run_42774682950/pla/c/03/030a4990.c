/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a4990; name: FUN_030a4990
 */


/* WARNING: Removing unreachable block (ram,0x030a4bf8) */

void FUN_030a4990(long param_1,long *param_2,long *param_3)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  char cVar21;
  long lVar22;
  byte *pbVar23;
  ulong uVar24;
  short sVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  int iVar33;
  uint *puVar34;
  int iVar35;
  long local_80;
  undefined8 local_78;
  long local_70;
  uint local_68;
  
  uVar7 = *(uint *)(param_2 + 1);
  uVar32 = (ulong)uVar7;
  lVar20 = param_3[1];
  iVar8 = (int)lVar20;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < (int)uVar7) {
    uVar13 = FUN_030a84a0(PTR_PTR_0434a080,uVar7,*(undefined8 *)(param_1 + 0x30),
                          *(undefined4 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x30) = uVar13;
  }
  iVar26 = *(int *)(param_1 + 0x38);
  lVar27 = (long)(int)uVar7;
  if (iVar26 < (int)uVar7) {
    pvVar2 = (void *)(*(long *)(param_1 + 0x30) + (long)iVar26 * 8);
    *(uint *)(param_1 + 0x38) = uVar7;
    memset(pvVar2,0,(*(long *)(param_1 + 0x30) + lVar27 * 8) - (long)pvVar2 & 0xfffffffffffffff8);
  }
  else if ((int)uVar7 < iVar26) {
    *(uint *)(param_1 + 0x38) = uVar7;
  }
  puVar12 = PTR_PTR_0434a080;
  puVar34 = (uint *)(param_1 + 0x5c);
  uVar17 = *puVar34;
  uVar29 = uVar7 + 1;
  if ((int)(uVar17 & 0x3fffffff) <= (int)uVar7) {
    uVar13 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(undefined4 *)(param_1 + 0x58);
    if (0x3ffffffe < (int)uVar7) {
      FUN_032bd0a8(uVar29);
      uVar17 = *puVar34;
    }
    uVar17 = (uVar17 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar17) {
      uVar17 = 0x3fffffff;
    }
    uVar6 = uVar29;
    if ((int)uVar29 <= (int)uVar17) {
      uVar6 = uVar17;
    }
    uVar13 = FUN_032bd1d4(puVar12,uVar6,2,uVar13,uVar9,puVar34);
    *(undefined8 *)(param_1 + 0x50) = uVar13;
  }
  if ((*(int *)(param_1 + 0x58) <= (int)uVar7) || ((int)uVar29 < *(int *)(param_1 + 0x58))) {
    *(uint *)(param_1 + 0x58) = uVar29;
  }
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < iVar8) {
    uVar13 = FUN_030a8614(puVar12,iVar8,*(undefined8 *)(param_1 + 0x40),
                          *(undefined4 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x40) = uVar13;
  }
  iVar26 = *(int *)(param_1 + 0x48);
  if (iVar26 < iVar8) {
    *(int *)(param_1 + 0x48) = iVar8;
    pvVar2 = (void *)(*(long *)(param_1 + 0x40) + (long)iVar26 * 8);
    memset(pvVar2,0,(*(long *)(param_1 + 0x40) + (long)iVar8 * 8) - (long)pvVar2 &
                    0xfffffffffffffff8);
  }
  else if (iVar8 < iVar26) {
    *(int *)(param_1 + 0x48) = iVar8;
  }
  puVar34 = (uint *)(param_1 + 0x8c);
  uVar17 = *puVar34;
  if ((int)(uVar17 & 0x3fffffff) < (int)uVar7) {
    uVar13 = *(undefined8 *)(param_1 + 0x80);
    uVar9 = *(undefined4 *)(param_1 + 0x88);
    if (0x3fffffff < (int)uVar7) {
      FUN_032bd0a8(uVar7);
      uVar17 = *puVar34;
    }
    uVar17 = (uVar17 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar17) {
      uVar17 = 0x3fffffff;
    }
    uVar6 = uVar7;
    if ((int)uVar7 <= (int)uVar17) {
      uVar6 = uVar17;
    }
    uVar13 = FUN_032bd1d4(puVar12,uVar6,1,uVar13,uVar9,puVar34);
    *(undefined8 *)(param_1 + 0x80) = uVar13;
  }
  if (*(uint *)(param_1 + 0x88) != uVar7) {
    *(uint *)(param_1 + 0x88) = uVar7;
  }
  puVar34 = (uint *)(param_1 + 0x7c);
  uVar17 = *puVar34;
  if ((int)(uVar17 & 0x3fffffff) <= (int)uVar7) {
    uVar13 = *(undefined8 *)(param_1 + 0x70);
    uVar9 = *(undefined4 *)(param_1 + 0x78);
    if (0x3ffffffe < (int)uVar7) {
      FUN_032bd0a8(uVar29);
      uVar17 = *puVar34;
    }
    uVar17 = (uVar17 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar17) {
      uVar17 = 0x3fffffff;
    }
    uVar6 = uVar29;
    if ((int)uVar29 <= (int)uVar17) {
      uVar6 = uVar17;
    }
    uVar13 = FUN_032bd1d4(puVar12,uVar6,2,uVar13,uVar9,puVar34);
    *(undefined8 *)(param_1 + 0x70) = uVar13;
  }
  if ((*(int *)(param_1 + 0x78) <= (int)uVar7) || ((int)uVar29 < *(int *)(param_1 + 0x78))) {
    *(uint *)(param_1 + 0x78) = uVar29;
  }
  puVar34 = (uint *)(param_1 + 0x6c);
  if ((int)(*puVar34 & 0x3fffffff) < iVar8 * 2) {
    uVar13 = FUN_030a8788(puVar12,iVar8 * 2,*(undefined8 *)(param_1 + 0x60),
                          *(undefined4 *)(param_1 + 0x68),puVar34);
    *(undefined8 *)(param_1 + 0x60) = uVar13;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (0 < (int)uVar7) {
    if (uVar7 == 1) {
      iVar26 = 0;
      lVar22 = 0;
    }
    else {
      iVar26 = 0;
      lVar22 = 0;
      do {
        iVar26 = iVar26 + (uint)*(byte *)(*param_2 + lVar22);
        *(int *)(param_1 + 0x2c) = iVar26;
        lVar18 = *param_2 + lVar22;
        lVar22 = lVar22 + 2;
        iVar26 = iVar26 + (uint)*(byte *)(lVar18 + 1);
        *(int *)(param_1 + 0x2c) = iVar26;
      } while (uVar32 - (uVar32 & 1) != lVar22);
      if ((uVar7 & 1) == 0) goto LAB_030a4c6c;
    }
    *(uint *)(param_1 + 0x2c) = iVar26 + (uint)*(byte *)(*param_2 + lVar22);
  }
LAB_030a4c6c:
  local_78 = 0x8000000000000000;
  lVar22 = tpidr_el0;
  local_68 = uVar7;
  if (uVar7 == 0) {
    local_80 = 0;
  }
  else {
    lVar18 = *(long *)(lVar22 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar22 + 0x38d490) = lVar18;
    }
    lVar18 = *(long *)(lVar18 + 8);
    uVar14 = lVar27 + 0x7fU & 0xffffffffffffff80;
    if (uVar14 <= *(ulong *)(lVar18 + 0x10)) {
      local_80 = *(long *)(lVar18 + 0x18);
      uVar14 = local_80 + uVar14;
      if (uVar14 <= *(ulong *)(lVar18 + 0x20)) {
        *(ulong *)(lVar18 + 0x18) = uVar14;
        goto LAB_030a4cc4;
      }
    }
    local_80 = FUN_032ce670();
  }
LAB_030a4cc4:
  local_78 = CONCAT44(uVar7,(uint)local_78) | 0x8000000000000000;
  local_70 = local_80;
  if ((int)uVar7 < 0x40000000) {
    if (uVar7 == 0) goto LAB_030a4cf0;
  }
  else {
    FUN_032bd0a8(uVar7);
    uVar29 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar29) {
      uVar29 = 0x3fffffff;
    }
    uVar17 = uVar7;
    if ((int)uVar7 <= (int)uVar29) {
      uVar17 = uVar29;
    }
    local_80 = FUN_032bd1d4(puVar12,uVar17,1,local_80,0,(long)&local_78 + 4);
    if ((uint)local_78 == uVar7) goto LAB_030a4cf0;
  }
  local_78 = CONCAT44(local_78._4_4_,uVar7);
LAB_030a4cf0:
  **(undefined2 **)(param_1 + 0x50) = 0;
  **(undefined2 **)(param_1 + 0x70) = 0;
  if ((int)uVar7 < 1) {
    iVar15 = *(int *)(param_1 + 0x28);
    iVar26 = 0;
  }
  else {
    uVar16 = 0;
    sVar25 = 0;
    uVar14 = 0;
    iVar33 = 0;
    do {
      puVar3 = (undefined2 *)(*(long *)(param_1 + 0x30) + uVar14 * 8);
      pbVar23 = (byte *)(puVar3 + 3);
      *pbVar23 = *(byte *)(*param_2 + uVar14);
      puVar3[2] = sVar25;
      if (uVar32 - 1 < 7) {
        lVar19 = 0;
      }
      else {
        lVar18 = 7;
        do {
          lVar19 = lVar18;
          *(undefined1 *)(local_80 + lVar19 + -7) = 0;
          *(undefined1 *)(local_80 + lVar19 + -6) = 0;
          *(undefined1 *)(local_80 + lVar19 + -5) = 0;
          *(undefined1 *)(local_80 + lVar19 + -4) = 0;
          *(undefined1 *)(local_80 + lVar19 + -3) = 0;
          *(undefined1 *)(local_80 + lVar19 + -2) = 0;
          *(undefined1 *)(local_80 + lVar19 + -1) = 0;
          *(undefined1 *)(local_80 + lVar19) = 0;
          lVar18 = lVar19 + 8;
        } while (((uVar32 & 7) - uVar32) + lVar19 + 8 != 7);
        lVar19 = lVar19 + 1;
      }
      if ((uVar7 & 7) != 0) {
        uVar24 = uVar32 & 7;
        do {
          *(undefined1 *)(local_80 + lVar19) = 0;
          lVar19 = lVar19 + 1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      iVar15 = (int)uVar16;
      *(short *)(*(long *)(param_1 + 0x50) + uVar14 * 2) = (short)uVar16;
      *(short *)(*(long *)(param_1 + 0x70) + uVar14 * 2) = (short)iVar33;
      if (iVar8 - iVar15 == 0 || iVar8 < iVar15) {
        iVar35 = 0;
        iVar26 = 0;
      }
      else {
        iVar26 = 0;
        iVar35 = 0;
        uVar16 = -(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
        do {
          if (uVar14 < *(ushort *)(*param_3 + uVar16)) {
            uVar16 = (ulong)(uint)(iVar15 + iVar26);
            goto LAB_030a4eec;
          }
          puVar4 = (ushort *)(*(long *)(param_1 + 0x40) + uVar16 * 2);
          uVar10 = *(ushort *)(*param_3 + uVar16 + 2);
          *puVar4 = uVar10;
          puVar4[1] = (ushort)uVar14;
          lVar18 = *param_3 + uVar16;
          uVar16 = uVar16 + 4;
          iVar26 = iVar26 + 1;
          *(undefined1 *)(local_80 + (ulong)*(ushort *)(lVar18 + 2)) = 1;
          iVar35 = iVar35 + (uint)*(byte *)(*param_2 + (ulong)uVar10);
        } while ((iVar15 - iVar8) + iVar26 != 0);
        uVar16 = (ulong)(uint)(iVar15 + iVar26);
        iVar26 = iVar8 - iVar15;
      }
LAB_030a4eec:
      uVar24 = uVar14 + 1;
      *(short *)(*(long *)(param_1 + 0x50) + uVar24 * 2) = (short)uVar16;
      if (uVar14 != 0) {
        uVar28 = 0;
        do {
          if (*(char *)(local_80 + uVar28) != '\0') {
            uVar10 = *(ushort *)(*(long *)(param_1 + 0x70) + uVar28 * 2);
            uVar11 = *(ushort *)(*(long *)(param_1 + 0x70) + (uVar28 + 1) * 2);
            if (uVar10 < uVar11) {
              lVar19 = (ulong)uVar11 - (ulong)uVar10;
              lVar18 = (ulong)uVar10 << 2;
              do {
                uVar30 = (ulong)*(ushort *)(*(long *)(param_1 + 0x60) + lVar18);
                if (uVar28 < uVar30) {
                  if (*(char *)(local_80 + uVar30) == '\0') {
                    iVar26 = iVar26 + 1;
                    uVar29 = (uint)*(byte *)(*param_2 + uVar30);
                  }
                  else {
                    uVar29 = 0;
                  }
                  iVar35 = uVar29 + iVar35;
                  *(undefined1 *)(local_80 + uVar30) = 1;
                }
                lVar19 = lVar19 + -1;
                lVar18 = lVar18 + 4;
              } while (lVar19 != 0);
            }
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar14);
      }
      *puVar3 = (short)*(undefined4 *)(param_1 + 0x28);
      puVar3[1] = (short)iVar35;
      iVar26 = iVar26 + iVar33;
      if ((int)(*(uint *)(param_1 + 0x6c) & 0x3fffffff) < iVar26) {
        uVar13 = FUN_030a8788(puVar12,iVar26,*(undefined8 *)(param_1 + 0x60),
                              *(undefined4 *)(param_1 + 0x68),puVar34);
        *(undefined8 *)(param_1 + 0x60) = uVar13;
      }
      iVar15 = *(int *)(param_1 + 0x68);
      if (iVar15 < iVar26) {
        pvVar2 = (void *)(*(long *)(param_1 + 0x60) + (long)iVar15 * 4);
        *(int *)(param_1 + 0x68) = iVar26;
        memset(pvVar2,0,(*(long *)(param_1 + 0x60) + (long)iVar26 * 4) - (long)pvVar2 &
                        0xfffffffffffffffc);
      }
      else if (iVar26 < iVar15) {
        *(int *)(param_1 + 0x68) = iVar26;
      }
      uVar28 = 0;
      cVar21 = '\0';
      uVar10 = *(ushort *)(*(long *)(param_1 + 0x50) + uVar24 * 2);
      iVar15 = *(int *)(param_1 + 0x28);
      uVar29 = (uint)*(ushort *)(*(long *)(param_1 + 0x50) + uVar14 * 2);
      do {
        if (*(char *)(local_80 + uVar28) != '\0') {
          puVar1 = (undefined2 *)(*(long *)(param_1 + 0x60) + (long)iVar33 * 4);
          lVar18 = *(long *)(param_1 + 0x40);
          puVar4 = (ushort *)(lVar18 + (long)(int)uVar29 * 8);
          *puVar1 = (short)uVar28;
          puVar1[1] = (short)iVar15;
          uVar30 = (ulong)*puVar4;
          if (((int)uVar29 < (int)(uint)uVar10) && (uVar30 <= uVar28)) {
            *(short *)(lVar18 + (long)(int)uVar29 * 8 + 4) = (short)iVar15;
          }
          if (uVar28 == uVar14) {
            *(char *)((long)puVar3 + 7) =
                 (char)uVar29 - (char)*(undefined2 *)(*(long *)(param_1 + 0x50) + uVar14 * 2);
            *(char *)(*(long *)(param_1 + 0x80) + uVar14) = cVar21;
            uVar30 = (ulong)*puVar4;
          }
          if (((uVar28 < uVar14) && ((int)uVar29 < (int)(uint)uVar10)) && (uVar30 <= uVar28)) {
            puVar5 = (ushort *)(*(long *)(param_1 + 0x50) + uVar28 * 2);
            uVar31 = (ulong)*puVar5;
            lVar19 = uVar31 * 8;
            do {
              lVar19 = lVar19 + 8;
              uVar31 = uVar31 + 1;
              if (puVar5[1] <= uVar31) goto LAB_030a503c;
            } while (uVar14 != *(ushort *)(*(long *)(param_1 + 0x40) + lVar19));
            *(short *)(lVar18 + (long)(int)uVar29 * 8 + 6) = (short)uVar31;
            *(short *)(*(long *)(param_1 + 0x40) + (uVar31 & 0xffffffff) * 8 + 6) = (short)uVar29;
            uVar30 = (ulong)*puVar4;
          }
LAB_030a503c:
          uVar29 = uVar29 + ((int)uVar29 < (int)(uint)uVar10 && uVar30 <= uVar28);
          iVar15 = iVar15 + (uint)*(byte *)(*param_2 + uVar28);
          cVar21 = cVar21 + '\x01';
          iVar33 = iVar33 + 1;
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 != uVar32);
      iVar15 = *(int *)(param_1 + 0x28) + iVar35 * (uint)*pbVar23;
      *(int *)(param_1 + 0x28) = iVar15;
      sVar25 = sVar25 + (ushort)*pbVar23;
      uVar14 = uVar24;
      iVar33 = iVar26;
    } while (uVar24 != uVar32);
  }
  lVar18 = local_70;
  *(int *)(param_1 + 0x28) = iVar15 + 1;
  *(short *)(*(long *)(param_1 + 0x50) + lVar27 * 2) = (short)lVar20;
  *(short *)(*(long *)(param_1 + 0x70) + lVar27 * 2) = (short)iVar26;
  if (local_70 == local_80) {
    local_78 = local_78 & 0xffffffff00000000;
  }
  lVar27 = (long)(int)local_68;
  lVar20 = *(long *)(lVar22 + 0x38d490);
  if (lVar20 == 0) {
    lVar20 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar20;
  }
  lVar20 = *(long *)(lVar20 + 8);
  uVar32 = lVar27 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar20 + 0x10) < uVar32) || (*(long *)(lVar20 + 0x18) != uVar32 + lVar18)) ||
     (*(long *)(lVar20 + 0x28) == lVar18)) {
    FUN_032cedf0(lVar20,lVar18);
  }
  else {
    *(long *)(lVar20 + 0x18) = lVar18;
  }
  uVar32 = local_78;
  uVar7 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (long)uVar32) && (local_80 != 0)) {
    (**(code **)(*(long *)puVar12 + 0x18))(puVar12,local_80,uVar7 & 0x3fffffff);
  }
  return;
}


