/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a23bc; name: FUN_031a23bc
 */


undefined8 FUN_031a23bc(long param_1,undefined8 param_2,uint *param_3,int *param_4,int *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  int local_a0 [2];
  int local_98 [2];
  int local_90 [2];
  int local_88 [2];
  long local_80;
  undefined8 local_78;
  long local_70;
  
  lVar18 = tpidr_el0;
  if (*(long *)(lVar18 + 0x38d490) == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar18 + 0x38d490) = lVar6;
    lVar18 = *(long *)(lVar6 + 0x10);
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38d490) + 0x10);
  }
  if (lVar18 != 0) {
    FUN_032d5af0(lVar18,"TtstepCompactOwnedFaces",0x17);
  }
  local_70 = lVar18;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar8 = *(long *)(param_1 + 0x20);
    lVar6 = lVar8;
  }
  else {
    lVar6 = FUN_02898b44();
    lVar8 = *(long *)(param_1 + 0x20);
  }
  iVar3 = *(int *)(lVar8 + 0x20);
  uVar4 = *(uint *)(lVar8 + 0xd8);
  uVar7 = *param_3;
  iVar14 = *param_5;
  iVar22 = *param_4;
  local_80 = 0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0x80000000;
  if (0 < (int)(uVar4 - uVar7)) {
    local_80 = FUN_0315f314(PTR_PTR_0434a090,uVar4 - uVar7,0,0,(long)&local_78 + 4);
  }
  uVar20 = uVar7;
  if ((0 < iVar14) && (uVar21 = (ulong)uVar7, (int)uVar7 < (int)uVar4)) {
    do {
      lVar8 = *(long *)(lVar6 + 0x168);
      iVar9 = (int)uVar21;
      iVar10 = *(int *)(lVar8 + (long)(iVar9 + iVar3) * 4);
      if (iVar10 < 0) {
        lVar8 = (long)(int)local_78;
        local_78._0_4_ = (int)local_78 + 1;
        uVar21 = (ulong)(iVar9 + 1);
        iVar14 = iVar14 + -2;
        *(undefined4 *)(local_80 + lVar8 * 4) = 0xffffffff;
      }
      else {
        lVar11 = 0;
        uVar20 = 1;
        iVar5 = 1;
        do {
          iVar15 = iVar5;
          uVar16 = uVar20;
          lVar12 = lVar11;
          iVar14 = iVar14 + -9;
          if ((long)(int)uVar4 <= (long)iVar9 + 1 + lVar12) break;
          lVar11 = lVar12 + 1;
          uVar20 = uVar16 + 1;
          iVar5 = iVar15 + 1;
        } while (*(int *)(lVar8 + ((long)iVar3 + (long)iVar9) * 4 + 4 + lVar12 * 4) == iVar10);
        uVar21 = (uVar21 & 0xffffffff) + lVar12 + 1;
        uVar20 = (uint)(lVar12 + 1U);
        if (iVar9 == iVar22) {
LAB_031a253c:
          if (0 < (int)uVar20) {
            lVar8 = (long)(int)local_78;
            uVar20 = uVar20 & 3;
            if ((uint)lVar12 < 3) {
              lVar11 = 0;
            }
            else {
              lVar11 = 0;
              lVar13 = lVar8 * 4;
              do {
                iVar9 = (int)lVar11;
                iVar10 = iVar3 + iVar22 + iVar9;
                lVar17 = lVar11 * 4;
                lVar11 = lVar11 + 4;
                *(int *)(local_80 + lVar13 + lVar17) = iVar10;
                *(int *)(local_80 + lVar13 + lVar17 + 4) = iVar10 + 1;
                *(int *)(local_80 + lVar13 + lVar17 + 8) = iVar10 + 2;
                *(int *)(local_80 + lVar13 + lVar17 + 0xc) = iVar10 + 3;
              } while (iVar15 - (uVar16 & 3) != (int)lVar11);
              lVar8 = lVar8 + lVar11;
              local_78._0_4_ = (int)local_78 + iVar9 + 4;
            }
            if ((lVar12 + 1U & 3) != 0) {
              iVar10 = iVar3 + iVar22 + (int)lVar11;
              do {
                *(int *)(local_80 + lVar8 * 4) = iVar10;
                lVar8 = lVar8 + 1;
                uVar20 = uVar20 - 1;
                iVar10 = iVar10 + 1;
                local_78._0_4_ = (int)lVar8;
              } while (uVar20 != 0);
            }
          }
        }
        else {
          uVar1 = iVar22 + iVar3;
          *(uint *)(lVar8 + (long)iVar10 * 4) = uVar1;
          if (0 < (int)uVar20) {
            lVar8 = 0;
            do {
              lVar13 = lVar8 * 4;
              lVar11 = *(long *)(lVar6 + 0x168) + (long)(iVar9 + iVar3) * 4;
              *(undefined4 *)
               (*(long *)(lVar6 + 0x168) +
                (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) + lVar13) =
                   *(undefined4 *)(lVar11 + lVar13);
              *(undefined4 *)(lVar11 + lVar13) = 0xfffffffd;
              local_88[0] = iVar22 + (int)lVar8;
              local_90[0] = iVar9 + (int)lVar8;
              FUN_031993f4(param_2,lVar6,local_88,local_90);
              lVar8 = lVar8 + 1;
            } while (lVar12 + 1 != lVar8);
            goto LAB_031a253c;
          }
        }
        iVar22 = iVar22 + (uint)lVar12 + 1;
      }
      FUN_033299e0(0x8ba0850e);
      uVar20 = (uint)uVar21;
    } while (((int)uVar20 < (int)uVar4) && (0 < iVar14));
  }
  *param_3 = uVar20;
  *param_4 = iVar22;
  *param_5 = iVar14;
  if (uVar20 == uVar4) {
    uVar4 = iVar22 + iVar3;
    *(int *)(lVar6 + 0x160) =
         (iVar22 - *(int *)(*(long *)(param_1 + 0x20) + 0xd8)) + *(int *)(lVar6 + 0x160);
    local_98[0] = uVar7 + iVar3;
    FUN_0318ba28(param_1,&local_80,local_98,uVar4);
    uVar7 = *(uint *)(lVar6 + 0x174);
    if ((int)(uVar7 & 0x3fffffff) < (int)uVar4) {
      uVar19 = *(undefined8 *)(lVar6 + 0x168);
      uVar2 = *(undefined4 *)(lVar6 + 0x170);
      if (0x3fffffff < (int)uVar4) {
        FUN_032bd0a8(uVar4);
        uVar7 = *(uint *)(lVar6 + 0x174);
      }
      uVar7 = (uVar7 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar7) {
        uVar7 = 0x3fffffff;
      }
      uVar20 = uVar4;
      if ((int)uVar4 <= (int)uVar7) {
        uVar20 = uVar7;
      }
      uVar19 = FUN_032bd1d4(PTR_PTR_0434a080,uVar20,4,uVar19,uVar2,(uint *)(lVar6 + 0x174));
      *(undefined8 *)(lVar6 + 0x168) = uVar19;
    }
    if (*(uint *)(lVar6 + 0x170) != uVar4) {
      *(uint *)(lVar6 + 0x170) = uVar4;
    }
    FUN_03199240(lVar6,iVar22);
    uVar19 = 1;
  }
  else {
    local_a0[0] = uVar7 + iVar3;
    FUN_0318ba28(param_1,&local_80,local_a0,*(undefined4 *)(lVar6 + 0x170));
    uVar19 = 0;
  }
  uVar7 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (int)uVar7) && (local_80 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_80,4,uVar7 & 0x3fffffff);
  }
  if (lVar18 != 0) {
    FUN_032d5b34(lVar18,&DAT_0390f40e);
  }
  return uVar19;
}


