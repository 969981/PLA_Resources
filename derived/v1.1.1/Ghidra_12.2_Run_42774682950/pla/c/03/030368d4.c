/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030368d4; name: FUN_030368d4
 */


void FUN_030368d4(long *param_1,ulong param_2,ulong *param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  MutexType *pMVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  long lVar23;
  ulong uVar24;
  byte bVar25;
  long lVar26;
  long lVar27;
  byte *pbVar28;
  uint *puVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  int iVar33;
  ulong uVar34;
  ulong uVar35;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1a8;
  uint local_110 [2];
  long local_108;
  undefined8 local_100;
  long local_f8;
  uint local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  uint local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  uint local_90;
  undefined2 local_8c;
  ulong local_88;
  ulong uStack_80;
  undefined1 local_78;
  
  if ((long)param_2 < 0) {
    uVar34 = param_2 & 0xffffffff;
  }
  else {
    uVar24 = FUN_032c0fa4(param_1 + 0x129,param_2,&local_90);
    uVar34 = (ulong)local_90;
    if ((uVar24 & 1) == 0) {
      uVar34 = 0xffffff;
    }
  }
  lVar23 = param_1[7];
  uVar24 = uVar34 & 0xffffff;
  puVar16 = (uint *)(lVar23 + uVar24 * 0xc0 + 0x80);
  uVar3 = *puVar16;
  uVar30 = (ulong)uVar3;
  if (param_5 == 2) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(byte *)(lVar23 + uVar24 * 0xc0 + 0x54) & 5) == 0;
  }
  lVar9 = (**(code **)(*param_1 + 0x270))(param_1,uVar30);
  iVar2 = *(int *)(lVar9 + 0x4c);
  bVar25 = 0;
  uVar18 = uVar34;
  do {
    uVar18 = (ulong)((uint)uVar18 & 0xffffff);
    bVar4 = *(byte *)(param_1[7] + uVar18 * 0xc0 + 0x88);
    bVar25 = bVar25 | bVar4 & 1;
    if ((bVar4 & 1) != 0) break;
    uVar20 = *(uint *)(param_1[7] + uVar18 * 0xc0 + 0x84);
    uVar18 = (ulong)uVar20;
  } while (uVar20 != (uint)uVar34);
  local_c8 = 0;
  local_c0 = 0x8000000000000000;
  lVar9 = tpidr_el0;
  local_b0 = param_4;
  if (param_4 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(lVar9 + 0x38d490);
    if (lVar17 == 0) {
      lVar17 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar17;
    }
    lVar10 = *(long *)(lVar17 + 8);
    uVar18 = (ulong)(int)(param_4 * 4 + 0x7f & 0xffffff80);
    if (uVar18 <= *(ulong *)(lVar10 + 0x10)) {
      lVar17 = *(long *)(lVar10 + 0x18);
      uVar18 = lVar17 + uVar18;
      if (uVar18 <= *(ulong *)(lVar10 + 0x20)) {
        *(ulong *)(lVar10 + 0x18) = uVar18;
        goto LAB_03036a20;
      }
    }
    lVar17 = FUN_032ce670();
  }
LAB_03036a20:
  local_c0 = CONCAT44(param_4,(uint)local_c0) | 0x8000000000000000;
  local_e8 = 0;
  local_e0 = 0x8000000000000000;
  local_d0 = param_4;
  local_c8 = lVar17;
  local_b8 = lVar17;
  if (param_4 == 0) {
    local_d8 = 0;
  }
  else {
    lVar10 = *(long *)(lVar9 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar10;
    }
    lVar10 = *(long *)(lVar10 + 8);
    uVar18 = (ulong)(int)(param_4 * 8 + 0x7f & 0xffffff80);
    if (uVar18 <= *(ulong *)(lVar10 + 0x10)) {
      local_d8 = *(long *)(lVar10 + 0x18);
      uVar18 = local_d8 + uVar18;
      if (uVar18 <= *(ulong *)(lVar10 + 0x20)) {
        *(ulong *)(lVar10 + 0x18) = uVar18;
        goto LAB_03036a90;
      }
    }
    local_d8 = FUN_032ce670(lVar10);
  }
LAB_03036a90:
  local_e0 = CONCAT44(param_4,(int)local_e0) | 0x8000000000000000;
  local_108 = 0;
  local_100 = 0x8000000000000000;
  local_1d8 = lVar17;
  local_f0 = param_4;
  local_e8 = local_d8;
  if (param_4 == 0) {
    local_1a8 = 0;
    uVar20 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_108 = 0;
    local_100 = 0x8000000000000000;
    local_f8 = 0;
    goto LAB_030371ec;
  }
  lVar10 = *(long *)(lVar9 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar10;
  }
  lVar10 = *(long *)(lVar10 + 8);
  uVar18 = (ulong)(int)(param_4 * 4 + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar10 + 0x10) < uVar18) {
LAB_030374bc:
    local_1d0 = FUN_032ce670();
  }
  else {
    local_1d0 = *(long *)(lVar10 + 0x18);
    uVar18 = local_1d0 + uVar18;
    if (*(ulong *)(lVar10 + 0x20) < uVar18) goto LAB_030374bc;
    *(ulong *)(lVar10 + 0x18) = uVar18;
  }
  local_100 = CONCAT44(param_4,(uint)local_100) | 0x8000000000000000;
  local_1c8 = local_1d0;
  local_1a8 = local_1d0;
  local_108 = local_1d0;
  local_f8 = local_1d0;
  if (0 < (int)param_4) {
    uVar18 = 0;
    uVar20 = 0;
    uVar13 = *param_3;
    if ((long)uVar13 < 0) goto LAB_03036be8;
LAB_030371ac:
    uVar13 = FUN_032c0fa4(param_1 + 0x129,uVar13,&local_90);
    uVar32 = uVar18;
    uVar15 = uVar20;
    if ((uVar13 & 1) == 0) {
      uVar13 = 0xffffff;
    }
    else {
      uVar13 = (ulong)local_90;
    }
    do {
      uVar20 = local_c0._4_4_;
      uVar18 = uVar32 + 1;
      uVar31 = (uint)uVar32;
      local_110[0] = (uint)uVar13;
      uVar21 = (uint)uVar18;
      if (uVar31 < (local_c0._4_4_ & 0x3fffffff)) {
      }
      else {
        if (0x3ffffffe < uVar31) {
          FUN_032bd0a8(uVar18 & 0xffffffff);
        }
        uVar20 = (uVar20 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar20) {
          uVar20 = 0x3fffffff;
        }
        uVar31 = uVar21;
        if ((int)uVar21 <= (int)uVar20) {
          uVar31 = uVar20;
        }
        lVar17 = FUN_032bd1d4(PTR_PTR_0434a080,uVar31,4,local_1d8,uVar32 & 0xffffffff,
                              (long)&local_c0 + 4);
        uVar31 = (uint)local_c0;
        local_1d8 = lVar17;
        local_c8 = lVar17;
      }
      *(uint *)(lVar17 + (long)(int)uVar31 * 4) = local_110[0];
      local_c0 = CONCAT44(local_c0._4_4_,uVar21);
      uStack_80 = param_3[uVar32];
      local_90 = 0x2000020;
      local_8c = 4;
      local_78 = (undefined1)param_5;
      plVar11 = (long *)param_1[0xfe];
      local_88 = param_2;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_90);
      }
      uVar13 = (ulong)local_110[0] & 0xffffff;
      lVar10 = param_1[7];
      lVar26 = lVar10 + uVar13 * 0xc0;
      puVar22 = (uint *)(lVar26 + 0x80);
      uVar20 = uVar15;
      if (*puVar22 != *puVar16) {
        FUN_0302d8c4(param_1 + 0xe3,param_1,param_3[uVar32],param_2);
        lVar27 = lVar10 + uVar13 * 0xc0;
        pbVar28 = (byte *)(lVar27 + 0x88);
        bVar4 = *pbVar28;
        uVar31 = *(uint *)(lVar27 + 0x54);
        if ((bVar4 >> 2 & 1) != 0) {
          uVar21 = local_100._4_4_;
          uVar20 = uVar15 + 1;
          if ((int)(local_100._4_4_ & 0x3fffffff) <= (int)uVar15) {
            if (0x3ffffffe < (int)uVar15) {
              FUN_032bd0a8(uVar20);
            }
            uVar21 = (uVar21 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar21) {
              uVar21 = 0x3fffffff;
            }
            uVar1 = uVar20;
            if ((int)uVar20 <= (int)uVar21) {
              uVar1 = uVar21;
            }
            local_1d0 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,4,local_1a8,uVar15,(long)&local_100 + 4)
            ;
            uVar15 = (uint)local_100;
            local_1c8 = local_1d0;
            local_1a8 = local_1d0;
            local_108 = local_1d0;
          }
          *(undefined4 *)(local_1a8 + (long)(int)uVar15 * 4) =
               *(undefined4 *)(lVar10 + uVar13 * 0xc0 + 0x50);
          local_100 = CONCAT44(local_100._4_4_,uVar20);
        }
        bVar8 = (bVar4 & 1) != 0;
        if ((bVar25 == 1 && bVar8) && (param_1[0xd3] != 0)) {
          FUN_0304f924(param_1[0xd3],local_110[0],uVar34);
        }
        if (*puVar22 == 0) {
          if ((*pbVar28 >> 2 & 1) != 0) {
            (**(code **)(*(long *)param_1[0x98] + 0x40))((long *)param_1[0x98],local_110,1,4);
          }
          *puVar22 = 0x7fffffff;
          lVar27 = lVar10 + uVar13 * 0xc0;
          *(ushort *)(lVar27 + 0x58) = *(ushort *)(lVar27 + 0x58) | 8;
        }
        else {
          if (((uVar31 & 8) != 0 && bVar8) &&
             (*(uint *)(lVar10 + uVar13 * 0xc0 + 0x84) == local_110[0])) {
            lVar27 = param_1[0x2a] + (ulong)*puVar22 * 0x80;
            pbVar28 = (byte *)(lVar27 + 0x5e);
            uVar35 = (ulong)*pbVar28;
            pMVar12 = (MutexType *)param_1[0x90];
            nn::os::LockMutex(pMVar12);
            puVar29 = (uint *)(lVar27 + 0x4c);
            uVar15 = *puVar29;
            lVar27 = (long)(int)param_1[uVar35 * 3 + 0x31] + -1;
            if (uVar15 < (uint)lVar27) {
              iVar33 = *(int *)(param_1[uVar35 * 3 + 0x30] + lVar27 * 4);
              *(uint *)(param_1[0x2a] + (long)iVar33 * 0x80 + 0x4c) = uVar15;
              *(int *)(param_1[uVar35 * 3 + 0x30] + (long)(int)uVar15 * 4) = iVar33;
            }
            *pbVar28 = 0xff;
            *puVar29 = 0x7fffffff;
            *(int *)(param_1 + uVar35 * 3 + 0x31) = (int)param_1[uVar35 * 3 + 0x31] + -1;
            nn::os::UnlockMutex(pMVar12);
          }
          FUN_0302ed38(param_1,lVar26);
        }
        if ((bVar4 & 1) != 0) {
          *puVar22 = uVar3;
          FUN_03031544(param_1,local_110[0],1);
          *puVar22 = 0x7fffffff;
        }
        uVar5 = *(undefined1 *)(param_1[0x2a] + uVar30 * 0x80 + 0x5e);
        uVar15 = local_110[0];
        do {
          lVar27 = param_1[7];
          uVar35 = (ulong)uVar15 & 0xffffff;
          if ((*(byte *)(lVar27 + uVar35 * 0xc0 + 0x54) >> 3 & 1) != 0) {
            *(undefined1 *)(param_1[0x1f] + uVar35) = uVar5;
          }
          lVar27 = lVar27 + uVar35 * 0xc0;
          *(ushort *)(lVar27 + 0x58) = *(ushort *)(lVar27 + 0x58) | 0x20;
          uVar15 = *(uint *)(lVar27 + 0x84);
        } while (uVar15 != local_110[0]);
        FUN_0302e768(param_1,local_110[0],uVar30,0);
        if (param_1[0xd3] != 0) {
          FUN_03058e80(param_1[0xd3],*(undefined4 *)(lVar10 + uVar13 * 0xc0 + 0x50),*puVar22);
        }
        uVar31 = uVar31 & 8;
        uVar15 = *puVar22;
        lVar19 = param_1[0x2a];
        lVar27 = (**(code **)(*param_1 + 0xb0))(param_1);
        FUN_0301a9bc(lVar26,lVar19 + (ulong)uVar15 * 0x80,
                     lVar27 + (ulong)*(byte *)(lVar10 + uVar13 * 0xc0 + 0x89) * 0x40 + 0x20,
                     param_1 + 0xa6,param_1 + 0x9c,0,1);
        if (iVar2 == 0x7fffffff || uVar31 != 0) {
          if ((iVar2 == 0x7fffffff) && (uVar31 != 0)) {
            FUN_03030748(param_1,local_110[0],1);
            iVar33 = (int)local_e0 + 1;
            iVar14 = (int)local_e0;
            if ((int)(local_e0._4_4_ & 0x3fffffff) <= (int)local_e0) {
              local_e8 = FUN_02f6b138(PTR_PTR_0434a080,iVar33,local_e8,local_e0 & 0xffffffff,
                                      (long)&local_e0 + 4);
              iVar14 = (int)local_e0;
            }
            goto LAB_03036f60;
          }
        }
        else {
          FUN_03030748(param_1,local_110[0],0);
          iVar33 = (int)local_e0 + 1;
          iVar14 = (int)local_e0;
          if ((int)(local_e0._4_4_ & 0x3fffffff) <= (int)local_e0) {
            local_e8 = FUN_02f6b138(PTR_PTR_0434a080,iVar33,local_e8,local_e0 & 0xffffffff,
                                    (long)&local_e0 + 4);
            iVar14 = (int)local_e0;
          }
LAB_03036f60:
          *(ulong *)(local_e8 + (long)iVar14 * 8) = param_3[uVar32];
          local_e0 = CONCAT44(local_e0._4_4_,iVar33);
        }
        if (!bVar7) {
          (**(code **)(*param_1 + 0x270))(param_1,*puVar22);
          lVar27 = lVar10 + uVar13 * 0xc0;
          (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(lVar27 + 0x78) + 0x18) * 0x200 +
                      0x18))(*(long *)(lVar27 + 0x78),&DAT_03aae430,&local_90);
          local_a0 = CONCAT44(*(undefined4 *)(lVar26 + 0x1c),*(undefined4 *)(lVar27 + 0xc));
          uStack_98 = (ulong)*(uint *)(lVar26 + 0x2c);
          (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(lVar27 + 0x78) + 0x18) * 0x200 +
                      0x28))(*(long *)(lVar27 + 0x78),&local_a0,&local_a8);
          *(short *)(lVar27 + 0x94) = (short)((ulong)local_a8 >> 0x10) + 1;
        }
        *(undefined1 *)(lVar10 + uVar13 * 0xc0 + 0x96) =
             *(undefined1 *)(lVar23 + uVar24 * 0xc0 + 0x96);
        FUN_030027d8(param_1 + 0xe8,param_1,param_3[uVar32]);
      }
      if (uVar18 == param_4) goto LAB_030371ec;
      uVar13 = param_3[uVar18];
      if (-1 < (long)uVar13) goto LAB_030371ac;
LAB_03036be8:
      uVar13 = uVar13 & 0xffffffff;
      uVar32 = uVar18;
      uVar15 = uVar20;
    } while( true );
  }
  uVar20 = 0;
LAB_030371ec:
  (**(code **)(*(long *)param_1[0x98] + 0x40))((long *)param_1[0x98],local_1d0,uVar20,4);
  if (bVar7) {
    (**(code **)(*param_1 + 0x278))(param_1,uVar30);
  }
  plVar11 = param_1 + 0xe9;
  if (iVar2 == 0x7fffffff) {
    plVar11 = param_1 + 0xea;
  }
  FUN_030376f0(plVar11,param_1,local_e8,local_e0 & 0xffffffff);
  FUN_030027d8(param_1 + 0xe8,param_1,param_2);
  uVar3 = local_f0;
  lVar23 = local_f8;
  if (local_f8 == local_1c8) {
    local_100 = local_100 & 0xffffffff00000000;
  }
  lVar10 = *(long *)(lVar9 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar10;
  }
  lVar10 = *(long *)(lVar10 + 8);
  uVar34 = (ulong)(int)(uVar3 * 4 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar10 + 0x10) < uVar34) || (*(long *)(lVar10 + 0x18) != uVar34 + lVar23)) ||
     (*(long *)(lVar10 + 0x28) == lVar23)) {
    if (lVar23 != 0) {
      if (*(ulong *)(lVar10 + 0x10) < uVar34) {
        *(int *)(*(long *)(lVar10 + 8) + 0x20) = *(int *)(*(long *)(lVar10 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))(*(long **)(lVar10 + 0x40),lVar23);
      }
      else if (*(long *)(lVar10 + 0x18) == uVar34 + lVar23) {
        *(long *)(lVar10 + 0x18) = lVar23;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar10,lVar23);
      }
    }
  }
  else {
    *(long *)(lVar10 + 0x18) = lVar23;
  }
  uVar24 = local_100;
  puVar6 = PTR_PTR_0434a080;
  uVar34 = local_100 >> 0x20;
  local_100 = local_100 & 0xffffffff00000000;
  if ((local_1c8 != 0) && (-1 < (long)uVar24)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_1a8,(int)uVar34 << 2);
  }
  uVar3 = local_d0;
  lVar23 = local_d8;
  if (local_d8 == local_e8) {
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  lVar10 = *(long *)(lVar9 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar10;
  }
  lVar10 = *(long *)(lVar10 + 8);
  uVar34 = (ulong)(int)(uVar3 * 8 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar10 + 0x10) < uVar34) || (*(long *)(lVar10 + 0x18) != uVar34 + lVar23)) ||
     (*(long *)(lVar10 + 0x28) == lVar23)) {
    if (lVar23 != 0) {
      if (*(ulong *)(lVar10 + 0x10) < uVar34) {
        *(int *)(*(long *)(lVar10 + 8) + 0x20) = *(int *)(*(long *)(lVar10 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar10 + 0x40) + 0x18))(*(long **)(lVar10 + 0x40),lVar23);
      }
      else if (*(long *)(lVar10 + 0x18) == uVar34 + lVar23) {
        *(long *)(lVar10 + 0x18) = lVar23;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar10,lVar23);
      }
    }
  }
  else {
    *(long *)(lVar10 + 0x18) = lVar23;
  }
  uVar34 = local_e0;
  uVar24 = (ulong)local_e0._4_4_;
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  if ((-1 < (long)uVar34) && (local_e8 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_e8,(uVar24 & 0x3fffffff) << 3);
  }
  uVar3 = local_b0;
  lVar23 = local_b8;
  if (local_b8 == lVar17) {
    local_c0 = local_c0 & 0xffffffff00000000;
  }
  lVar10 = *(long *)(lVar9 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar10;
  }
  lVar9 = *(long *)(lVar10 + 8);
  uVar34 = (ulong)(int)(uVar3 * 4 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar9 + 0x10) < uVar34) || (*(long *)(lVar9 + 0x18) != uVar34 + lVar23)) ||
     (*(long *)(lVar9 + 0x28) == lVar23)) {
    if (lVar23 != 0) {
      if (*(ulong *)(lVar9 + 0x10) < uVar34) {
        *(int *)(*(long *)(lVar9 + 8) + 0x20) = *(int *)(*(long *)(lVar9 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar9 + 0x40) + 0x18))(*(long **)(lVar9 + 0x40),lVar23);
      }
      else if (*(long *)(lVar9 + 0x18) == uVar34 + lVar23) {
        *(long *)(lVar9 + 0x18) = lVar23;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar9,lVar23);
      }
    }
  }
  else {
    *(long *)(lVar9 + 0x18) = lVar23;
  }
  if (lVar17 != 0) {
    local_c0 = local_c0 & 0xffffffff00000000;
    if (-1 < (long)local_c0) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_1d8,local_c0._4_4_ << 2);
    }
  }
  return;
}


