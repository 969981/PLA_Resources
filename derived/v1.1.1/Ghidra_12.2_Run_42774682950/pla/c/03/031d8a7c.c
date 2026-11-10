/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d8a7c; name: FUN_031d8a7c
 */


/* WARNING: Removing unreachable block (ram,0x031d8e10) */

void FUN_031d8a7c(long param_1,uint *param_2,uint *param_3,undefined4 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11)

{
  undefined4 *puVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ushort *puVar16;
  int iVar17;
  ushort *puVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  short *psVar28;
  uint uVar29;
  undefined4 *local_70;
  undefined8 local_68;
  
  lVar13 = (long)param_3 - (long)param_2 >> 3;
  lVar10 = tpidr_el0;
  if ((int)lVar13 * -0x45d1745d == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar14;
    }
    lVar7 = *(long *)(lVar14 + 8);
    uVar11 = lVar13 * -0x1745d17000000000 + 0x7f00000000 >> 0x20 & 0xffffffffffffff80;
    if (uVar11 <= *(ulong *)(lVar7 + 0x10)) {
      lVar14 = *(long *)(lVar7 + 0x18);
      uVar11 = uVar11 + lVar14;
      if (uVar11 <= *(ulong *)(lVar7 + 0x20)) {
        *(ulong *)(lVar7 + 0x18) = uVar11;
        goto LAB_031d8b30;
      }
    }
    lVar14 = FUN_032ce670();
  }
LAB_031d8b30:
  local_70 = (undefined4 *)0x0;
  local_68 = 0x8000000000000000;
  uVar11 = (ulong)(param_5 - (long)param_4) >> 2;
  uVar29 = (uint)uVar11;
  if (0 < (int)uVar29) {
    local_70 = (undefined4 *)
               FUN_0315f314(PTR_PTR_0434a090,uVar11 & 0xffffffff,0,0,(long)&local_68 + 4);
    uVar12 = uVar29 & 3;
    puVar9 = local_70;
    if (2 < uVar29 - 1) {
      iVar17 = uVar29 - uVar12;
      puVar8 = local_70;
      do {
        *puVar8 = *param_4;
        puVar8[1] = param_4[1];
        puVar8[2] = param_4[2];
        puVar1 = param_4 + 3;
        puVar9 = puVar8 + 4;
        param_4 = param_4 + 4;
        iVar17 = iVar17 + -4;
        puVar8[3] = *puVar1;
        puVar8 = puVar9;
      } while (iVar17 != 0);
    }
    if ((uVar11 & 3) != 0) {
      do {
        uVar12 = uVar12 - 1;
        *puVar9 = *param_4;
        puVar9 = puVar9 + 1;
        param_4 = param_4 + 1;
      } while (uVar12 != 0);
    }
  }
  local_68 = CONCAT44(local_68._4_4_,uVar29);
  if (param_2 == param_3) {
    iVar26 = 0;
LAB_031d8c7c:
    FUN_031d6af0(param_1,lVar14,lVar14 + (long)iVar26 * 0x30,local_70,local_70 + (int)uVar29,param_6
                 ,param_7,param_8,param_9,param_10,param_11);
    FUN_033299e0(0xf7b91a59);
    puVar6 = PTR_PTR_0434a080;
    if (iVar26 != 0) {
      lVar7 = (long)iVar26 * 0x30;
      do {
        lVar20 = lVar14 + lVar7;
        *(undefined4 *)(lVar20 + -0x20) = 0;
        if ((-1 < (int)*(uint *)(lVar20 + -0x1c)) && (*(long *)(lVar20 + -0x28) != 0)) {
          FUN_032cf244(puVar6,*(long *)(lVar20 + -0x28),4,*(uint *)(lVar20 + -0x1c) & 0x3fffffff);
        }
        lVar7 = lVar7 + -0x30;
        *(undefined8 *)(lVar20 + -0x28) = 0;
        *(undefined4 *)(lVar20 + -0x1c) = 0x80000000;
      } while (lVar7 != 0);
    }
    FUN_033299e0(0x4df00b5e);
    FUN_033299e0(0x25bed9e4);
    uVar11 = local_68;
    uVar29 = local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < (long)uVar11) && (local_70 != (undefined4 *)0x0)) {
      FUN_032cf244(PTR_PTR_0434a090,local_70,4,uVar29 & 0x3fffffff);
    }
    local_68._4_4_ = 0x80000000;
    FUN_033299e0(0x1a99144c);
    local_68 = (ulong)local_68._4_4_ << 0x20;
    lVar7 = *(long *)(lVar10 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar7;
    }
    lVar10 = *(long *)(lVar7 + 8);
    uVar11 = lVar13 * -0x1745d17000000000 + 0x7f00000000 >> 0x20 & 0xffffffffffffff80;
    if (((*(ulong *)(lVar10 + 0x10) < uVar11) || (*(long *)(lVar10 + 0x18) != uVar11 + lVar14)) ||
       (*(long *)(lVar10 + 0x28) == lVar14)) {
      FUN_032cedf0(lVar10,lVar14);
    }
    else {
      *(long *)(lVar10 + 0x18) = lVar14;
    }
    return;
  }
  iVar17 = 0;
  iVar26 = 0;
  iVar27 = iVar26;
  if ((param_2[1] & 1) == 0) goto LAB_031d8e78;
  do {
    uVar29 = *param_2;
    iVar27 = (uint)local_68 + 1;
    if ((int)(local_68._4_4_ & 0x3fffffff) <= (int)(uint)local_68) {
      local_70 = (undefined4 *)
                 FUN_0315f314(PTR_PTR_0434a090,iVar27,local_70,local_68 & 0xffffffff,
                              (long)&local_68 + 4);
    }
    local_70[(int)(uint)local_68] = uVar29 & 0x3fffff;
    local_68 = CONCAT44(local_68._4_4_,iVar27);
    puVar25 = param_2;
    while( true ) {
      FUN_033299e0(0x6bed4449);
      param_2 = puVar25 + 0x16;
      iVar17 = iVar17 + 1;
      if (param_2 == param_3) {
        uVar29 = (uint)local_68;
        goto LAB_031d8c7c;
      }
      iVar27 = iVar26;
      if ((puVar25[0x17] & 1) != 0) break;
LAB_031d8e78:
      iVar26 = iVar27 + 1;
      lVar7 = (long)iVar27 + (long)iVar27 * 2;
      lVar20 = lVar7 * 0x10;
      puVar19 = (undefined8 *)(lVar14 + 0x10 + lVar20);
      lVar7 = (long)iVar26 * 0x30 + lVar7 * -0x10;
      do {
        puVar19[-1] = puVar19 + 1;
        *puVar19 = 0x8000000100000000;
        lVar7 = lVar7 + -0x30;
        *(undefined4 *)(puVar19 + 2) = 0;
        puVar19 = puVar19 + 6;
      } while (lVar7 != 0);
      uVar29 = *param_2;
      lVar15 = lVar14 + (long)iVar27 * 0x30;
      *(int *)(lVar14 + lVar20) = (int)((ulong)uVar29 & 0x3fffff);
      *(int *)(lVar15 + 0x28) = iVar17;
      lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x18) + ((ulong)uVar29 & 0x3fffff) * 0x10;
      psVar28 = (short *)(lVar7 + 8);
      iVar27 = (int)*(short *)(lVar7 + 10) + (int)*psVar28;
      plVar3 = (long *)(lVar15 + 8);
      FUN_031d9074(plVar3,iVar27);
      puVar25 = param_2;
      if (param_2[4] != 0) {
        puVar16 = *(ushort **)(param_2 + 2);
        puVar18 = puVar16 + (long)(int)param_2[4] * 3;
        uVar11 = 0;
        uVar21 = 0;
        do {
          uVar2 = *puVar16 + uVar11;
          uVar5 = puVar16[1];
          if ((ulong)*puVar16 != 0) {
            uVar22 = uVar11 << 3 | 2;
            iVar23 = (int)uVar2 + -1;
            do {
              lVar7 = *(long *)(param_2 + 10);
              bVar4 = *(byte *)(lVar7 + (long)iVar23 * 8 + 2);
              if (((bVar4 & 3) == 0) && (((*(byte *)(lVar7 + uVar22) | bVar4) >> 2 & 1) == 0)) {
                uVar12 = *(uint *)(lVar7 + (long)iVar23 * 8 + 4);
                uVar29 = (int)uVar12 >> 5;
                uVar24 = -(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar29 << 2;
                *(uint *)(*plVar3 + uVar24) =
                     *(uint *)(*plVar3 + uVar24) & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
              }
              iVar23 = (int)uVar11;
              uVar11 = uVar11 + 1;
              uVar22 = uVar22 + 8;
            } while (uVar11 < uVar2);
          }
          uVar22 = uVar5 + uVar21;
          if (uVar5 != 0) {
            lVar7 = uVar21 << 3;
            do {
              lVar20 = *(long *)(param_2 + 0xe) + lVar7;
              if ((((*(byte *)(lVar20 + 4) & 3) == 0) &&
                  (((*(byte *)(lVar20 + 5) | *(byte *)(lVar20 + 4)) >> 2 & 1) == 0)) &&
                 (uVar29 = (uint)*(ushort *)(lVar20 + 6) + (int)*psVar28, (int)uVar29 < iVar27)) {
                uVar11 = -(ulong)((uint)((int)uVar29 >> 5) >> 0x1f) & 0xfffffffc00000000 |
                         (ulong)(uint)((int)uVar29 >> 5) << 2;
                *(uint *)(*plVar3 + uVar11) =
                     *(uint *)(*plVar3 + uVar11) & (1 << (ulong)(uVar29 & 0x1f) ^ 0xffffffffU);
              }
              uVar21 = uVar21 + 1;
              lVar7 = lVar7 + 8;
            } while (uVar21 < uVar22);
          }
          puVar16 = puVar16 + 3;
          uVar11 = uVar2 & 0xffffffff;
          uVar21 = uVar22 & 0xffffffff;
        } while (puVar16 != puVar18);
      }
    }
  } while( true );
}


