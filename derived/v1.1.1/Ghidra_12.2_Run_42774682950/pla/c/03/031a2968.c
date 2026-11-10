/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a2968; name: FUN_031a2968
 */


bool FUN_031a2968(long param_1,undefined8 param_2,int *param_3,int *param_4,int *param_5,
                 long *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 local_e0 [2];
  int local_d8 [2];
  int local_d0 [2];
  uint local_c8 [2];
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  int local_a0 [2];
  int local_98 [2];
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  
  lVar15 = tpidr_el0;
  if (*(long *)(lVar15 + 0x38d490) == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar16;
    lVar15 = *(long *)(lVar16 + 0x10);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38d490) + 0x10);
  }
  if (lVar15 != 0) {
    FUN_032d5af0(lVar15,"TtstepCompactOwnedEdges",0x17);
  }
  local_70 = lVar15;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar16 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar16 = FUN_02898b44();
  }
  local_80 = 0;
  local_78 = -0x8000000000000000;
  FUN_03196a14(lVar16,&local_80);
  FUN_033299e0(0xcbdb432a);
  local_90 = 0;
  local_88 = -0x8000000000000000;
  FUN_03196cb0(lVar16,&local_90);
  iVar2 = *param_3;
  iVar14 = *param_5;
  iVar3 = *(int *)(*(long *)(param_1 + 0x20) + 0x30);
  iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0xe8);
  iVar20 = *param_4;
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  local_a0[0] = iVar20;
  local_98[0] = iVar2;
  if (0 < iVar4) {
    local_b0 = FUN_03199ccc(PTR_PTR_0434a090,iVar4,0,0,(long)&local_a8 + 4);
  }
  local_c8[0] = 0;
  local_c0 = 0;
  local_b8 = 0x8000000000000000;
  FUN_033299e0(0x9021d7a5);
  if ((iVar14 < 1) || (iVar4 <= iVar2)) {
    iVar19 = iVar2;
  }
  else {
    iVar20 = iVar2;
    do {
      iVar19 = *(int *)(local_80 + (long)iVar20 * 4);
      if (iVar19 < 0) {
        iVar19 = *(int *)(local_90 + (long)iVar20 * 4);
        if (-1 < iVar19) {
          uVar18 = *(uint *)(*(long *)(lVar16 + 0xa0) + (long)iVar19 * 4);
          piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + (long)iVar19 * 0x10);
          uVar17 = uVar18;
          if (piVar12 != (int *)0x0) goto LAB_031a2b0c;
        }
LAB_031a2b6c:
        local_98[0] = iVar20 + 1;
        *(undefined4 *)(local_b0 + (long)(int)local_a8 * 4) = 0xffffffff;
        iVar14 = iVar14 + -2;
        bVar8 = 0xffc724bf < local_c8[0];
        local_c8[0] = local_c8[0] + 0x38db40;
        local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
        if (bVar8) {
          FUN_033299e0(0xefe0f571);
        }
      }
      else {
        uVar18 = *(int *)(lVar16 + 0x20) + iVar19;
        uVar17 = *(uint *)(*(long *)(lVar16 + 0x168) + (long)(int)uVar18 * 4);
        if ((int)uVar17 < 0) {
          uVar17 = 0xffffffff;
        }
        piVar12 = (int *)(*(long *)(lVar16 + 0xd0) + (long)iVar19 * 0x10);
        if (piVar12 == (int *)0x0) goto LAB_031a2b6c;
LAB_031a2b0c:
        if (*piVar12 == iVar20 + iVar3) {
          iVar14 = (short)piVar12[2] * -3 + iVar14;
          FUN_031a39f0(lVar16,param_2,piVar12,local_98,local_a0,&local_b0,local_c8);
        }
        else {
          iVar14 = *(short *)((long)piVar12 + 10) * -3 + iVar14;
          uVar9 = FUN_031a3b30(lVar16,param_2,piVar12,local_98,local_a0,&local_b0,local_c8);
          if ((uVar9 & 1) != 0) {
            if (uVar17 != 0xffffffff) {
              iVar19 = *(int *)(*(long *)(param_1 + 0x20) + 0x17c);
              iVar20 = (int)param_6[1];
              uVar13 = *(uint *)((long)param_6 + 0xc);
              uVar1 = iVar20 + 1;
              if (iVar20 < (int)(uVar13 & 0x3fffffff)) {
                lVar10 = *param_6;
              }
              else {
                lVar10 = *param_6;
                if (0x3ffffffe < iVar20) {
                  FUN_032bd0a8(uVar1);
                  uVar13 = *(uint *)((long)param_6 + 0xc);
                }
                uVar13 = (uVar13 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar13) {
                  uVar13 = 0x3fffffff;
                }
                uVar6 = uVar1;
                if ((int)uVar1 <= (int)uVar13) {
                  uVar6 = uVar13;
                }
                lVar10 = FUN_032bd1d4(PTR_PTR_0434a090,uVar6,4,lVar10,iVar20,
                                      (uint *)((long)param_6 + 0xc));
                *param_6 = lVar10;
                iVar20 = (int)param_6[1];
              }
              *(uint *)(lVar10 + (long)iVar20 * 4) = uVar17 | iVar19 << 0x16;
              *(uint *)(param_6 + 1) = uVar1;
            }
            iVar20 = (int)local_b8 + 1;
            if ((int)(local_b8._4_4_ & 0x3fffffff) <= (int)local_b8) {
              local_c0 = FUN_0315f314(PTR_PTR_0434a090,iVar20,local_c0,local_b8 & 0xffffffff,
                                      (long)&local_b8 + 4);
            }
            *(uint *)(local_c0 + (long)(int)local_b8 * 4) = uVar18;
            local_b8 = CONCAT44(local_b8._4_4_,iVar20);
          }
        }
      }
    } while ((0 < iVar14) && (iVar20 = local_98[0], local_98[0] < iVar4));
    iVar20 = local_a0[0];
    iVar19 = local_98[0];
  }
  *param_5 = iVar14;
  *param_3 = iVar19;
  *param_4 = iVar20;
  FUN_033299e0(0xa5eb7685);
  if (iVar19 == iVar4) {
    *(int *)(lVar16 + 0x164) =
         (iVar20 - *(int *)(*(long *)(param_1 + 0x20) + 0xe8)) + *(int *)(lVar16 + 0x164);
    if ((int)(*(uint *)(lVar16 + 0xec) & 0x3fffffff) < iVar20) {
      uVar11 = FUN_0318a8d4(PTR_PTR_0434a080,iVar20,*(undefined8 *)(lVar16 + 0xe0),
                            *(undefined4 *)(lVar16 + 0xe8));
      *(undefined8 *)(lVar16 + 0xe0) = uVar11;
    }
    if (*(int *)(lVar16 + 0xe8) != iVar20) {
      *(int *)(lVar16 + 0xe8) = iVar20;
    }
    if ((int)(*(uint *)(lVar16 + 0x11c) & 0x3fffffff) < iVar20) {
      uVar11 = FUN_031921e8(PTR_PTR_0434a080,iVar20,*(undefined8 *)(lVar16 + 0x110),
                            *(undefined4 *)(lVar16 + 0x118),lVar16 + 0x11c);
      *(undefined8 *)(lVar16 + 0x110) = uVar11;
    }
    if (*(int *)(lVar16 + 0x118) != iVar20) {
      *(int *)(lVar16 + 0x118) = iVar20;
    }
    uVar17 = *(int *)(lVar16 + 0x60) * iVar20;
    uVar18 = *(uint *)(lVar16 + 0x15c);
    if ((int)(uVar18 & 0x3fffffff) < (int)uVar17) {
      uVar11 = *(undefined8 *)(lVar16 + 0x150);
      uVar5 = *(undefined4 *)(lVar16 + 0x158);
      if (0x3fffffff < (int)uVar17) {
        FUN_032bd0a8(uVar17);
        uVar18 = *(uint *)(lVar16 + 0x15c);
      }
      uVar18 = (uVar18 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar18) {
        uVar18 = 0x3fffffff;
      }
      uVar1 = uVar17;
      if ((int)uVar17 <= (int)uVar18) {
        uVar1 = uVar18;
      }
      uVar11 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,4,uVar11,uVar5);
      *(undefined8 *)(lVar16 + 0x150) = uVar11;
    }
    if (*(uint *)(lVar16 + 0x158) != uVar17) {
      *(uint *)(lVar16 + 0x158) = uVar17;
    }
    iVar20 = iVar20 + iVar3;
    piVar12 = local_d0;
    local_d0[0] = iVar2 + iVar3;
  }
  else {
    iVar20 = *(int *)(*(long *)(param_1 + 0x20) + 0xe8) + *(int *)(*(long *)(param_1 + 0x20) + 0x30)
    ;
    piVar12 = local_d8;
    local_d8[0] = iVar2 + iVar3;
  }
  FUN_0318bae8(param_1,&local_b0,piVar12,iVar20);
  FUN_033299e0(0x4a0fb296);
  if (0 < (int)local_b8) {
    lVar16 = 0;
    do {
      local_e0[0] = *(undefined4 *)(local_c0 + lVar16 * 4);
      FUN_0318ac98(param_1,local_e0);
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)local_b8);
  }
  FUN_033299e0(0x96a0235d);
  uVar9 = local_b8;
  puVar7 = PTR_PTR_0434a090;
  uVar18 = local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < (long)uVar9) && (local_c0 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_c0,4,uVar18 & 0x3fffffff);
  }
  lVar16 = local_a8;
  uVar18 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_b0 != 0)) {
    FUN_032cf244(puVar7,local_b0,4,uVar18 & 0x3fffffff);
  }
  lVar16 = local_88;
  uVar18 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_90 != 0)) {
    FUN_032cf244(puVar7,local_90,4,uVar18 & 0x3fffffff);
  }
  lVar16 = local_78;
  uVar18 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_80 != 0)) {
    FUN_032cf244(puVar7,local_80,4,uVar18 & 0x3fffffff);
  }
  if (lVar15 != 0) {
    FUN_032d5b34(lVar15,&DAT_0390f40e);
  }
  return iVar19 == iVar4;
}


