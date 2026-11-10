/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030593d0; name: FUN_030593d0
 */


void FUN_030593d0(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  undefined8 uVar21;
  uint *puVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  int *piVar26;
  undefined8 *puVar27;
  uint *puVar28;
  undefined8 *puVar29;
  undefined4 *puVar30;
  uint uVar31;
  uint uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  int iVar35;
  long *plVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 *local_148;
  ulong local_140;
  undefined8 *local_130;
  long local_120;
  undefined8 *local_118;
  uint *local_110;
  uint local_108;
  uint local_104;
  long local_f8;
  undefined8 *local_f0;
  uint *local_e8;
  uint local_e0;
  uint local_dc;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  int local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  int local_98;
  ulong local_90;
  uint local_84;
  undefined8 local_80;
  undefined *puStack_78;
  uint *local_70;
  
  local_b0 = 0;
  local_a8 = 0x8000000000000000;
  local_98 = 0x77;
  lVar11 = tpidr_el0;
  lVar15 = *(long *)(lVar11 + 0x38d490);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar15;
  }
  lVar15 = *(long *)(lVar15 + 8);
  if (*(ulong *)(lVar15 + 0x10) < 0x400) {
LAB_0305a014:
    lVar18 = FUN_032ce670(lVar15,0x400);
  }
  else {
    lVar18 = *(long *)(lVar15 + 0x18);
    if (*(ulong *)(lVar15 + 0x20) < lVar18 + 0x400U) goto LAB_0305a014;
    *(ulong *)(lVar15 + 0x18) = lVar18 + 0x400U;
  }
  local_140 = 0x8000001e;
  local_140._0_4_ = 0x8000001e;
  local_a8 = CONCAT44(0x80000077,(uint)local_a8);
  iVar24 = *(int *)(param_1 + 0x5b4);
  local_d0 = 0;
  local_c8 = 0x8000000000000000;
  local_b8 = iVar24;
  local_b0 = lVar18;
  local_a0 = lVar18;
  if (iVar24 == 0) {
    local_c0 = 0;
  }
  else {
    lVar15 = *(long *)(lVar11 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar15;
    }
    lVar15 = *(long *)(lVar15 + 8);
    uVar12 = (ulong)(int)(iVar24 * 8 + 0x7fU & 0xffffff80);
    if (uVar12 <= *(ulong *)(lVar15 + 0x10)) {
      local_c0 = *(long *)(lVar15 + 0x18);
      uVar12 = local_c0 + uVar12;
      if (uVar12 <= *(ulong *)(lVar15 + 0x20)) {
        *(ulong *)(lVar15 + 0x18) = uVar12;
        goto LAB_030594c8;
      }
    }
    local_c0 = FUN_032ce670(lVar15);
  }
LAB_030594c8:
  local_c8 = CONCAT44(iVar24,(int)local_c8) | 0x8000000000000000;
  lVar15 = param_1 + 0x210;
  local_f0 = *(undefined8 **)(param_2 + 0x4e0);
  puVar22 = *(uint **)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x28) * 8 + -8);
  local_e0 = *puVar22 >> 0x10;
  local_dc = *puVar22 & 0xffff;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - local_dc;
  local_120 = 0;
  local_f8 = param_1 + 0x10;
  local_e8 = puVar22;
  local_d0 = local_c0;
  FUN_032bf22c(lVar15,*(undefined8 *)(param_2 + 0x4e0));
  local_118 = *(undefined8 **)(param_2 + 0x4e0);
  local_110 = *(uint **)(*(long *)(param_1 + 0x220) + (long)*(int *)(param_1 + 0x228) * 8 + -8);
  local_108 = *local_110 >> 0x10;
  local_104 = *local_110 & 0xffff;
  *(uint *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) - local_104;
  auVar42._8_8_ = extraout_x1;
  auVar42._0_8_ = *(long *)(lVar11 + 0x38d490);
  local_120 = lVar15;
  if (*(long *)(lVar11 + 0x38d490) == 0) {
    auVar42 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = auVar42._0_8_;
  }
  lVar10 = *(long *)(auVar42._0_8_ + 8);
  if (*(ulong *)(lVar10 + 0x10) < 0x200) {
LAB_0305a024:
    auVar38 = FUN_032ce670(lVar10,0x200);
  }
  else {
    auVar38._8_8_ = auVar42._8_8_;
    auVar38._0_8_ = *(long *)(lVar10 + 0x18);
    uVar12 = *(long *)(lVar10 + 0x18) + 0x200;
    if (*(ulong *)(lVar10 + 0x20) < uVar12) goto LAB_0305a024;
    *(ulong *)(lVar10 + 0x18) = uVar12;
  }
  puVar27 = auVar38._0_8_;
  if (*(char *)(param_1 + 0x361) == '\0') {
    puVar16 = (uint *)**(undefined8 **)(param_1 + 0x20);
    puVar28 = puVar16 + 8;
    *(uint **)(param_1 + 0x368) = puVar16;
    *(uint **)(param_1 + 0x370) = puVar28;
    uVar32 = *puVar16;
    *(uint *)(param_1 + 0x37c) = uVar32 & 0xffff;
    *(undefined4 *)(param_1 + 0x378) = 0x7fffffff;
    if ((uVar32 & 0xffff) == 0) {
      puVar28 = (uint *)0x0;
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    *(undefined1 *)(param_1 + 0x361) = 1;
  }
  else {
    puVar28 = *(uint **)(param_1 + 0x370);
  }
  local_148 = puVar27;
  if (puVar28 != (uint *)0x0) {
    plVar1 = (long *)(param_1 + 0x368);
    uVar32 = 0;
    uVar31 = 0;
    iVar24 = 0;
    uVar25 = 0;
    puVar16 = (uint *)*plVar1;
LAB_03059ab0:
    puVar17 = puVar16;
    auVar41._8_8_ = auVar38._8_8_;
    auVar41._0_8_ = local_d0;
    local_130 = auVar38._0_8_;
    uVar13 = uVar32;
    if ((char)puVar28[6] != '\0') goto LAB_030596cc;
LAB_03059abc:
    local_130 = auVar38._0_8_;
    auVar37._8_8_ = auVar38._8_8_;
    auVar37._0_8_ = lVar18;
    uVar31 = uVar31 + 1;
    puVar16 = puVar17;
    do {
      uVar21 = auVar37._8_8_;
      auVar41._8_8_ = uVar21;
      auVar41._0_8_ = local_d0;
      lVar18 = auVar37._0_8_;
      auVar38._8_8_ = uVar21;
      auVar38._0_8_ = local_130;
      auVar8._8_8_ = uVar21;
      auVar8._0_8_ = local_130;
      puVar28 = (uint *)(*(long *)(param_1 + 0x370) + (ulong)*(byte *)((long)puVar28 + 0x19) * 0x10
                        + 0x10);
      iVar35 = *(int *)(param_1 + 0x37c) + -1;
      *(uint **)(param_1 + 0x370) = puVar28;
      *(int *)(param_1 + 0x37c) = iVar35;
      if (iVar35 < 1) {
        uVar13 = *(uint *)(param_1 + 0x378);
        if (uVar13 == 0) {
          *plVar1 = 0;
          *(undefined8 *)(param_1 + 0x370) = 0;
        }
        else {
          puVar17 = *(uint **)(*plVar1 + 8);
          *plVar1 = (long)puVar17;
          if (puVar17 != (uint *)0x0) {
            uVar14 = *puVar17 & 0xffff;
            if ((int)uVar13 <= (int)(*puVar17 & 0xffff)) {
              uVar14 = uVar13;
            }
            if (0 < (int)uVar14) {
              puVar28 = puVar17 + 8;
              *(uint *)(param_1 + 0x37c) = uVar14;
              *(uint *)(param_1 + 0x378) = uVar13 - uVar14;
              *(uint **)(param_1 + 0x370) = puVar28;
              if (puVar17 != puVar16) goto LAB_03059678;
              goto LAB_03059ab0;
            }
          }
          *(undefined8 *)(param_1 + 0x370) = 0;
        }
LAB_03059b64:
        bVar7 = true;
LAB_03059b6c:
        goto LAB_03059b70;
      }
      if (puVar28 == (uint *)0x0) goto LAB_03059b64;
      puVar17 = (uint *)*plVar1;
      auVar38 = auVar8;
      if (puVar17 == puVar16) goto LAB_03059ab0;
LAB_03059678:
      if ((*(int *)(param_1 + 0x5b0) < (int)uVar31) || (uVar31 == (*puVar16 & 0xffff))) {
        if (0 < (int)uVar32) {
          lVar18 = 0;
          do {
            puVar34 = *(undefined8 **)(auVar37._0_8_ + lVar18 * 8);
            bVar5 = *(byte *)((long)puVar34 + 0x19);
            uVar32 = (uint)bVar5 * 0x10 + 0x10;
            if ((int)(uVar32 + local_e0) < 0xee1) {
              auVar40._8_8_ = auVar37._8_8_;
              auVar40._0_8_ = (long)local_e8 + (long)(int)local_e0 + 0x20;
              if ((bVar5 & 1) == 0) goto LAB_030597d8;
LAB_030599a8:
              puVar33 = auVar40._0_8_;
              uVar31 = uVar32 >> 4;
            }
            else {
              auVar40 = FUN_032bf82c(&local_f8,auVar37._8_8_,0x5a);
              if ((bVar5 & 1) != 0) goto LAB_030599a8;
LAB_030597d8:
              puVar29 = auVar40._0_8_;
              uVar31 = (uVar32 >> 4) - 1;
              uVar3 = *(undefined4 *)(puVar34 + 1);
              uVar4 = *(undefined4 *)((long)puVar34 + 0xc);
              *puVar29 = *puVar34;
              puVar33 = puVar29 + 2;
              puVar34 = puVar34 + 2;
              *(undefined4 *)(puVar29 + 1) = uVar3;
              *(undefined4 *)((long)puVar29 + 0xc) = uVar4;
            }
            if (bVar5 != 0) {
              do {
                uVar31 = uVar31 - 2;
                uVar3 = *(undefined4 *)(puVar34 + 1);
                uVar4 = *(undefined4 *)((long)puVar34 + 0xc);
                *puVar33 = *puVar34;
                *(undefined4 *)(puVar33 + 1) = uVar3;
                *(undefined4 *)((long)puVar33 + 0xc) = uVar4;
                uVar3 = *(undefined4 *)(puVar34 + 3);
                uVar4 = *(undefined4 *)((long)puVar34 + 0x1c);
                puVar33[2] = puVar34[2];
                *(undefined4 *)(puVar33 + 3) = uVar3;
                *(undefined4 *)((long)puVar33 + 0x1c) = uVar4;
                puVar34 = puVar34 + 4;
                puVar33 = puVar33 + 4;
              } while (0 < (int)uVar31);
            }
            puVar30 = auVar40._0_8_;
            local_e0 = local_e0 + uVar32;
            local_dc = local_dc + 1;
            piVar26 = *(int **)(local_b0 + lVar18 * 8);
            iVar35 = piVar26[1];
            lVar23 = *(long *)(*(long *)(param_1 + 0x398) + (long)*piVar26 * 8);
            lVar10 = (long)*(int *)(lVar23 + 0x18) + -1;
            iVar20 = (int)lVar10;
            *(int *)(lVar23 + 0x18) = iVar20;
            if (iVar20 != iVar35) {
              *(undefined8 *)(*(long *)(lVar23 + 0x10) + (long)iVar35 * 8) =
                   *(undefined8 *)(*(long *)(lVar23 + 0x10) + lVar10 * 8);
              if (iVar35 < *(int *)(lVar23 + 0x18)) {
                *(int *)(*(long *)(*(long *)(lVar23 + 0x10) + (long)iVar35 * 8) + 4) = iVar35;
              }
            }
            *puVar30 = *(undefined4 *)(lVar23 + 0x20);
            puVar30[1] = *(undefined4 *)(lVar23 + 0x18);
            iVar35 = *(int *)(lVar23 + 0x18);
            puVar17 = (uint *)(lVar23 + 0x1c);
            uVar31 = *puVar17;
            uVar32 = iVar35 + 1;
            if (iVar35 < (int)(uVar31 & 0x3fffffff)) {
              auVar39._8_8_ = auVar40._8_8_;
              auVar39._0_8_ = *(undefined8 *)(lVar23 + 0x10);
            }
            else {
              uVar21 = *(undefined8 *)(lVar23 + 0x10);
              if (0x3ffffffe < iVar35) {
                FUN_032bd0a8(uVar32);
                uVar31 = *puVar17;
              }
              uVar31 = (uVar31 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar31) {
                uVar31 = 0x3fffffff;
              }
              uVar13 = uVar32;
              if ((int)uVar32 <= (int)uVar31) {
                uVar13 = uVar31;
              }
              auVar39 = FUN_032bd1d4(PTR_PTR_0434a080,uVar13,8,uVar21,iVar35,puVar17);
              iVar35 = *(int *)(lVar23 + 0x18);
              *(long *)(lVar23 + 0x10) = auVar39._0_8_;
            }
            uVar21 = auVar39._8_8_;
            *(undefined4 **)(auVar39._0_8_ + (long)iVar35 * 8) = puVar30;
            *(uint *)(lVar23 + 0x18) = uVar32;
            if (((ulong)*(byte *)(puVar30 + 6) != 9) &&
               (plVar36 = *(long **)(*(long *)(param_2 + 0x40) + (ulong)*(byte *)(puVar30 + 6) * 8 +
                                    0x13b8), (int)plVar36[1] != 0)) {
              uVar13 = (uint)local_140;
              uVar31 = uVar13 & 0x3fffffff;
              uVar32 = uVar25 + 1;
              if ((int)uVar25 < (int)uVar31) {
              }
              else {
                if (0x3ffffffe < (int)uVar25) {
                  FUN_032bd0a8(uVar32);
                }
                puVar9 = PTR_PTR_0434a080;
                uVar14 = (uVar13 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar14) {
                  uVar14 = 0x3fffffff;
                }
                local_84 = uVar32;
                if ((int)uVar32 <= (int)uVar14) {
                  local_84 = uVar14;
                }
                local_90 = (ulong)local_84 << 4;
                if (((int)local_84 < (int)uVar31) || (0x3fffffff < (int)local_84)) {
                  local_80 = 1;
                  puStack_78 = &DAT_0411b3b8;
                  local_70 = &local_84;
                  FUN_03320b50(0x65816502,
                               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                               ,0x5a,"Invalid requestedCapacity {}",&local_80);
                }
                puVar34 = (undefined8 *)
                          (**(code **)(*(long *)puVar9 + 0x10))(puVar9,local_90,&local_90);
                if (0 < (int)uVar25) {
                  uVar12 = (ulong)uVar25;
                  puVar33 = puVar34;
                  do {
                    uVar12 = uVar12 - 1;
                    puVar33[1] = local_130[1];
                    *puVar33 = *local_130;
                    puVar33 = puVar33 + 2;
                    local_130 = local_130 + 2;
                  } while (uVar12 != 0);
                }
                if (-1 < (int)uVar13) {
                  (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_148,(ulong)uVar31 << 4);
                }
                if (local_90 < 0x3fffffff0) {
                  local_140 = local_90 >> 4;
                }
                else {
                  local_140 = 0x3fffffff;
                }
                local_148 = puVar34;
                local_130 = puVar34;
              }
              (local_130 + (long)(int)uVar25 * 2)[1] = *(undefined8 *)(puVar30 + 0xe);
              local_130[(long)(int)uVar25 * 2] = *(undefined8 *)(puVar30 + 0xc);
              (**(code **)(*plVar36 + 0x38))(plVar36,puVar30 + 4,&local_120,0);
              uVar21 = extraout_x1_00;
              uVar25 = uVar32;
            }
            auVar37._8_8_ = uVar21;
            auVar37._0_8_ = local_b0;
            *(undefined1 *)(*(long *)(local_b0 + lVar18 * 8) + 0x18) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < (int)(uint)local_a8);
        }
        lVar18 = auVar37._0_8_;
        auVar41._8_8_ = auVar37._8_8_;
        auVar41._0_8_ = local_d0;
        iVar35 = (int)local_c8 + 1;
        if ((int)(local_c8._4_4_ & 0x3fffffff) <= (int)local_c8) {
          auVar41 = FUN_0305b5f0(PTR_PTR_0434a080,iVar35,local_d0,local_c8 & 0xffffffff,
                                 (long)&local_c8 + 4);
        }
        local_d0 = auVar41._0_8_;
        *(uint **)(local_d0 + (long)(int)local_c8 * 8) = puVar16;
        local_c8 = CONCAT44(local_c8._4_4_,iVar35);
        puVar17 = (uint *)*plVar1;
      }
      auVar38._8_8_ = auVar41._8_8_;
      auVar38._0_8_ = local_130;
      local_d0 = auVar41._0_8_;
      iVar24 = iVar24 + 1;
      local_a8 = local_a8 & 0xffffffff00000000;
      if ((iVar24 == param_4) || (puVar17 == puVar22)) {
        bVar7 = false;
        goto LAB_03059b6c;
      }
      uVar32 = 0;
      uVar31 = 0;
      uVar13 = uVar32;
      if ((char)puVar28[6] == '\0') goto LAB_03059abc;
LAB_030596cc:
      local_d0 = auVar41._0_8_;
      auVar37._8_8_ = auVar41._8_8_;
      auVar37._0_8_ = lVar18;
      uVar14 = local_a8._4_4_;
      uVar32 = uVar13 + 1;
      if ((int)(local_a8._4_4_ & 0x3fffffff) <= (int)uVar13) {
        if (0x3ffffffe < (int)uVar13) {
          FUN_032bd0a8(uVar32);
        }
        uVar14 = (uVar14 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar14) {
          uVar14 = 0x3fffffff;
        }
        uVar2 = uVar32;
        if ((int)uVar32 <= (int)uVar14) {
          uVar2 = uVar14;
        }
        auVar37 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,lVar18,uVar13);
        local_b0 = auVar37._0_8_;
        uVar13 = (uint)local_a8;
      }
      *(uint **)(auVar37._0_8_ + (long)(int)uVar13 * 8) = puVar28;
      local_a8 = CONCAT44(local_a8._4_4_,uVar32);
      puVar16 = puVar17;
    } while( true );
  }
  uVar25 = 0;
  bVar7 = true;
  local_130 = puVar27;
LAB_03059b70:
  puVar34 = local_118;
  if (local_104 == 0) {
    piVar26 = (int *)(local_120 + 0x18);
    iVar24 = *piVar26;
    if (iVar24 < 2) goto LAB_03059b8c;
    iVar35 = *(int *)(local_118 + 0xb);
    lVar10 = *(long *)(*(long *)(local_120 + 0x10) + (long)(iVar24 + -2) * 8);
    lVar18 = local_118[1];
    *(undefined8 *)(lVar18 + (long)iVar35 * 8) =
         *(undefined8 *)(*(long *)(local_120 + 0x10) + (long)(iVar24 + -1) * 8);
    *(int *)(local_118 + 0xb) = iVar35 + 1;
    if (*(int *)((long)local_118 + 0x5c) <= iVar35 + 1) {
      (**(code **)(*(long *)*local_118 + 0x28))
                ((long *)*local_118,lVar18 + (long)(iVar35 + -5) * 8,6);
      *(int *)(puVar34 + 0xb) = iVar35 + -5;
    }
    *(undefined8 *)(lVar10 + 8) = 0;
    uVar32 = 0xffffffff;
  }
  else {
LAB_03059b8c:
    piVar26 = (int *)(local_120 + 8);
    local_110[2] = 0;
    local_110[3] = 0;
    *local_110 = *local_110 & 0xffff0000 | local_104 & 0xffff;
    *local_110 = *local_110 & 0xffff | local_108 << 0x10;
    uVar32 = local_104;
  }
  puVar34 = local_f0;
  *piVar26 = *piVar26 + uVar32;
  local_110 = (uint *)0x0;
  local_120 = 0;
  if (local_dc == 0) {
    piVar26 = (int *)(local_f8 + 0x18);
    iVar24 = *piVar26;
    if (iVar24 < 2) goto LAB_03059be4;
    iVar35 = *(int *)(local_f0 + 0xb);
    lVar10 = *(long *)(*(long *)(local_f8 + 0x10) + (long)(iVar24 + -2) * 8);
    lVar18 = local_f0[1];
    *(undefined8 *)(lVar18 + (long)iVar35 * 8) =
         *(undefined8 *)(*(long *)(local_f8 + 0x10) + (long)(iVar24 + -1) * 8);
    *(int *)(local_f0 + 0xb) = iVar35 + 1;
    if (*(int *)((long)local_f0 + 0x5c) <= iVar35 + 1) {
      (**(code **)(*(long *)*local_f0 + 0x28))((long *)*local_f0,lVar18 + (long)(iVar35 + -5) * 8,6)
      ;
      *(int *)(puVar34 + 0xb) = iVar35 + -5;
    }
    *(undefined8 *)(lVar10 + 8) = 0;
    uVar32 = 0xffffffff;
  }
  else {
LAB_03059be4:
    piVar26 = (int *)(local_f8 + 8);
    local_e8[2] = 0;
    local_e8[3] = 0;
    *local_e8 = *local_e8 & 0xffff0000 | local_dc & 0xffff;
    *local_e8 = *local_e8 & 0xffff | local_e0 << 0x10;
    uVar32 = local_dc;
  }
  *piVar26 = *piVar26 + uVar32;
  local_e8 = (uint *)0x0;
  local_f8 = 0;
  if (0 < (int)local_c8) {
    lVar18 = 0;
    do {
      lVar23 = *(long *)(local_d0 + lVar18 * 8);
      puVar34 = *(undefined8 **)(param_2 + 0x4e0);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)*(int *)(lVar23 + 4) * 8) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 1;
      iVar24 = *(int *)(puVar34 + 0xb);
      lVar10 = puVar34[1];
      *(long *)(lVar10 + (long)iVar24 * 8) = lVar23;
      *(int *)(puVar34 + 0xb) = iVar24 + 1;
      if (*(int *)((long)puVar34 + 0x5c) <= iVar24 + 1) {
        (**(code **)(*(long *)*puVar34 + 0x28))((long *)*puVar34,lVar10 + (long)(iVar24 + -5) * 8,6)
        ;
        *(int *)(puVar34 + 0xb) = iVar24 + -5;
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)local_c8);
  }
  if ((int)local_c8 == 0) {
    if (!bVar7) goto LAB_0305a1b4;
LAB_03059c34:
    *(undefined1 *)(param_1 + 0x361) = 0;
  }
  else {
    FUN_032bf22c(param_1 + 0x10,*(undefined8 *)(param_2 + 0x4e0));
    if (bVar7) goto LAB_03059c34;
LAB_0305a1b4:
    if (*(uint **)(param_1 + 0x368) == puVar22) goto LAB_03059c34;
  }
  if (0 < (int)uVar25) {
    uVar12 = 0;
    piVar26 = (int *)(param_1 + 0x218);
    do {
      puVar34 = local_130 + uVar12 * 2;
      puVar33 = *(undefined8 **)(param_2 + 0x4e0);
      uVar32 = *(uint *)((long)puVar34 + 0xc);
      if (uVar32 == 0) {
        uVar32 = 0;
      }
      else {
        uVar31 = (uint)*(ushort *)((long)puVar34 + 10);
        puVar22 = (uint *)*puVar34;
        do {
          while (uVar31 != (*puVar22 & 0xffff)) {
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar22,0x10);
              if (bVar7) {
                *puVar22 = *puVar22 - uVar31;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            uVar32 = uVar32 - uVar31;
            if (uVar32 == 0) goto LAB_03059fd8;
            uVar13 = **(uint **)(puVar22 + 2) & 0xffff;
            uVar31 = uVar32;
            if ((int)uVar13 <= (int)uVar32) {
              uVar31 = uVar13;
            }
            puVar22 = *(uint **)(puVar22 + 2);
            if (uVar32 == 0) goto LAB_03059fd8;
          }
          puVar28 = *(uint **)(puVar22 + 2);
          *(undefined8 *)(*(long *)(param_1 + 0x220) + (long)(int)puVar22[1] * 8) = 0;
          *(undefined1 *)(param_1 + 0x21c) = 1;
          iVar24 = *(int *)(puVar33 + 0xb);
          lVar18 = puVar33[1];
          *(uint **)(lVar18 + (long)iVar24 * 8) = puVar22;
          *(int *)(puVar33 + 0xb) = iVar24 + 1;
          if (iVar24 + 1 < *(int *)((long)puVar33 + 0x5c)) {
            uVar32 = uVar32 - uVar31;
            if (puVar28 != (uint *)0x0) goto LAB_0305a110;
LAB_0305a38c:
            uVar13 = 0;
          }
          else {
            (**(code **)(*(long *)*puVar33 + 0x28))
                      ((long *)*puVar33,lVar18 + (long)(iVar24 + -5) * 8,6);
            *(int *)(puVar33 + 0xb) = iVar24 + -5;
            uVar32 = uVar32 - uVar31;
            if (puVar28 == (uint *)0x0) goto LAB_0305a38c;
LAB_0305a110:
            uVar13 = *puVar28 & 0xffff;
          }
          uVar31 = uVar32;
          if ((int)uVar13 <= (int)uVar32) {
            uVar31 = uVar13;
          }
          puVar22 = puVar28;
        } while (uVar32 != 0);
LAB_03059fd8:
        uVar32 = *(uint *)((long)puVar34 + 0xc);
      }
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar7) {
          *piVar26 = *piVar26 - uVar32;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      uVar12 = uVar12 + 1;
      *(undefined1 *)(param_1 + 0x21c) = 1;
    } while (uVar12 != uVar25);
  }
  FUN_032bf22c(lVar15,*(undefined8 *)(param_2 + 0x4e0));
  lVar15 = *(long *)(lVar11 + 0x38d490);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar15;
  }
  lVar15 = *(long *)(lVar15 + 8);
  if (((*(ulong *)(lVar15 + 0x10) < 0x200) || (*(undefined8 **)(lVar15 + 0x18) != puVar27 + 0x40))
     || (*(undefined8 **)(lVar15 + 0x28) == puVar27)) {
    if (puVar27 != (undefined8 *)0x0) {
      if (*(ulong *)(lVar15 + 0x10) < 0x200) {
        *(int *)(*(long *)(lVar15 + 8) + 0x20) = *(int *)(*(long *)(lVar15 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))(*(long **)(lVar15 + 0x40),puVar27,0x200);
      }
      else if (*(undefined8 **)(lVar15 + 0x18) == puVar27 + 0x40) {
        *(undefined8 **)(lVar15 + 0x18) = puVar27;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar15,puVar27,0x200);
      }
    }
  }
  else {
    *(undefined8 **)(lVar15 + 0x18) = puVar27;
  }
  puVar9 = PTR_PTR_0434a080;
  lVar15 = local_120;
  puVar27 = local_118;
  uVar32 = local_104;
  if ((local_130 != (undefined8 *)0x0) && (-1 < (int)(uint)local_140)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_148,(ulong)((uint)local_140 & 0x3fffffff) << 4);
    lVar15 = 0;
    puVar27 = local_118;
    uVar32 = local_104;
  }
  local_118 = puVar27;
  local_104 = uVar32;
  puVar34 = local_f0;
  uVar31 = local_dc;
  if (local_120 != 0) {
    if (uVar32 == 0) {
      piVar26 = (int *)(local_120 + 0x18);
      iVar24 = *piVar26;
      if (iVar24 < 2) goto LAB_03059ec0;
      iVar35 = *(int *)(puVar27 + 0xb);
      lVar18 = *(long *)(*(long *)(local_120 + 0x10) + (long)(iVar24 + -2) * 8);
      lVar15 = puVar27[1];
      *(undefined8 *)(lVar15 + (long)iVar35 * 8) =
           *(undefined8 *)(*(long *)(local_120 + 0x10) + (long)(iVar24 + -1) * 8);
      *(int *)(puVar27 + 0xb) = iVar35 + 1;
      if (*(int *)((long)puVar27 + 0x5c) <= iVar35 + 1) {
        (**(code **)(*(long *)*puVar27 + 0x28))((long *)*puVar27,lVar15 + (long)(iVar35 + -5) * 8,6)
        ;
        *(int *)(puVar27 + 0xb) = iVar35 + -5;
      }
      *(undefined8 *)(lVar18 + 8) = 0;
      uVar32 = 0xffffffff;
    }
    else {
LAB_03059ec0:
      piVar26 = (int *)(local_120 + 8);
      local_110[2] = 0;
      local_110[3] = 0;
      *local_110 = *local_110 & 0xffff0000 | uVar32 & 0xffff;
      *local_110 = *local_110 & 0xffff | local_108 << 0x10;
    }
    *piVar26 = *piVar26 + uVar32;
    local_110 = (uint *)0x0;
    local_120 = 0;
    lVar15 = local_120;
    puVar34 = local_f0;
    uVar31 = local_dc;
  }
  local_120 = lVar15;
  local_f0 = puVar34;
  local_dc = uVar31;
  if (local_f8 == 0) goto LAB_03059cb8;
  if (uVar31 == 0) {
    piVar26 = (int *)(local_f8 + 0x18);
    iVar24 = *piVar26;
    if (iVar24 < 2) goto LAB_03059f1c;
    iVar35 = *(int *)(puVar34 + 0xb);
    lVar18 = *(long *)(*(long *)(local_f8 + 0x10) + (long)(iVar24 + -2) * 8);
    lVar15 = puVar34[1];
    *(undefined8 *)(lVar15 + (long)iVar35 * 8) =
         *(undefined8 *)(*(long *)(local_f8 + 0x10) + (long)(iVar24 + -1) * 8);
    *(int *)(puVar34 + 0xb) = iVar35 + 1;
    if (*(int *)((long)puVar34 + 0x5c) <= iVar35 + 1) {
      (**(code **)(*(long *)*puVar34 + 0x28))((long *)*puVar34,lVar15 + (long)(iVar35 + -5) * 8,6);
      *(int *)(puVar34 + 0xb) = iVar35 + -5;
    }
    *(undefined8 *)(lVar18 + 8) = 0;
    uVar31 = 0xffffffff;
  }
  else {
LAB_03059f1c:
    piVar26 = (int *)(local_f8 + 8);
    local_e8[2] = 0;
    local_e8[3] = 0;
    *local_e8 = *local_e8 & 0xffff0000 | uVar31 & 0xffff;
    *local_e8 = *local_e8 & 0xffff | local_e0 << 0x10;
  }
  *piVar26 = *piVar26 + uVar31;
  local_e8 = (uint *)0x0;
  local_f8 = 0;
LAB_03059cb8:
  iVar24 = local_b8;
  lVar15 = local_c0;
  if (local_c0 == local_d0) {
    local_c8 = local_c8 & 0xffffffff00000000;
  }
  lVar18 = *(long *)(lVar11 + 0x38d490);
  if (lVar18 == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar18;
  }
  lVar18 = *(long *)(lVar18 + 8);
  uVar12 = (ulong)(int)(iVar24 * 8 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar18 + 0x10) < uVar12) || (*(long *)(lVar18 + 0x18) != uVar12 + lVar15)) ||
     (*(long *)(lVar18 + 0x28) == lVar15)) {
    if (lVar15 != 0) {
      if (*(ulong *)(lVar18 + 0x10) < uVar12) {
        *(int *)(*(long *)(lVar18 + 8) + 0x20) = *(int *)(*(long *)(lVar18 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar18 + 0x40) + 0x18))(*(long **)(lVar18 + 0x40),lVar15);
      }
      else if (*(long *)(lVar18 + 0x18) == uVar12 + lVar15) {
        *(long *)(lVar18 + 0x18) = lVar15;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar18,lVar15);
      }
    }
  }
  else {
    *(long *)(lVar18 + 0x18) = lVar15;
  }
  uVar12 = local_c8;
  uVar19 = (ulong)local_c8._4_4_;
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  if ((-1 < (long)uVar12) && (local_d0 != 0)) {
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_d0,(uVar19 & 0x3fffffff) << 3);
  }
  iVar24 = local_98;
  lVar18 = local_a0;
  lVar15 = local_b0;
  if (local_a0 == local_b0) {
    local_a8 = local_a8 & 0xffffffff00000000;
  }
  lVar10 = *(long *)(lVar11 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar10;
  }
  lVar11 = *(long *)(lVar10 + 8);
  uVar19 = (ulong)(int)(iVar24 * 8 + 0x7fU & 0xffffff80);
  uVar12 = local_a8;
  if (((*(ulong *)(lVar11 + 0x10) < uVar19) || (*(long *)(lVar11 + 0x18) != uVar19 + lVar18)) ||
     (*(long *)(lVar11 + 0x28) == lVar18)) {
    if (lVar18 != 0) {
      if (*(ulong *)(lVar11 + 0x10) < uVar19) {
        *(int *)(*(long *)(lVar11 + 8) + 0x20) = *(int *)(*(long *)(lVar11 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar11 + 0x40) + 0x18))(*(long **)(lVar11 + 0x40),lVar18);
        uVar12 = local_a8;
      }
      else if (*(long *)(lVar11 + 0x18) == uVar19 + lVar18) {
        *(long *)(lVar11 + 0x18) = lVar18;
        FUN_032ce944();
        uVar12 = local_a8;
      }
      else {
        FUN_032ceaf0(lVar11,lVar18);
        uVar12 = local_a8;
      }
    }
  }
  else {
    *(long *)(lVar11 + 0x18) = lVar18;
  }
  if (lVar15 != 0) {
    local_a8 = uVar12 & 0xffffffff00000000;
    if (-1 < (long)local_a8) {
      (**(code **)(*(long *)puVar9 + 0x18))(puVar9,lVar15,(uVar12 >> 0x20 & 0x3fffffff) << 3);
    }
  }
  return;
}


