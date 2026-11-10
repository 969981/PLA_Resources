/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03178fcc; name: FUN_03178fcc
 */


/* WARNING: Removing unreachable block (ram,0x03179438) */
/* WARNING: Removing unreachable block (ram,0x03179714) */

void FUN_03178fcc(long param_1,int *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  short sVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  short *psVar7;
  long *plVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  undefined4 *puVar21;
  long lVar22;
  long lVar23;
  short sVar24;
  short *psVar25;
  long lVar26;
  short *local_168;
  uint *local_160;
  uint local_100 [2];
  uint local_f8 [2];
  undefined4 local_f0 [2];
  long local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined1 local_c0;
  uint local_b8 [2];
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined4 local_90;
  short *local_80;
  undefined8 local_78;
  short local_70 [8];
  
  lVar15 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0;
  iVar4 = *(int *)(lVar15 + 0xa8);
  if (iVar4 != 0) {
    lVar15 = *(long *)(lVar15 + 0xa0);
    lVar1 = lVar15 + (long)iVar4 * 8;
    do {
      plVar8 = (long *)(*(long *)(param_1 + 0x48) + (long)*(int *)(lVar15 + 4) * 0x18);
      if ((char)plVar8[2] == '\x01') {
        lVar18 = *plVar8;
      }
      else {
        lVar18 = FUN_0317cc14();
      }
      puVar6 = PTR_PTR_0434a090;
      puVar5 = PTR_PTR_0434a080;
      iVar4 = *(int *)(lVar18 + 0x30);
      if (iVar4 != 0) {
        lVar22 = *(long *)(lVar18 + 0x28);
        local_160 = (uint *)(lVar22 + 0xc);
        lVar20 = 0;
        local_168 = (short *)(lVar22 + 0x14);
LAB_031797f8:
        if (iVar4 < 2) goto LAB_03179154;
        puVar10 = &LAB_03179880;
        do {
          FUN_0317d280(lVar22,0,iVar4 + -1,puVar10);
LAB_03179154:
          do {
            iVar12 = *(int *)(lVar18 + lVar20 * 4 + 0x18);
            lVar14 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar12 * 0xf0);
            if (lVar14 == 0) {
              lVar14 = 0;
            }
            else if (*(char *)(lVar14 + 0x30) == '\x01') {
              lVar14 = *(long *)(lVar14 + 0x20);
            }
            else {
              lVar14 = FUN_02898b44();
            }
            uVar17 = *(uint *)(lVar22 + lVar20 * 4);
            uVar11 = uVar17 - *(int *)(lVar14 + 0x20);
            if ((int)uVar17 < *(int *)(lVar14 + 0x20)) {
              lVar16 = *(long *)(lVar14 + 0x18);
              uVar11 = uVar17;
              if (*(int *)(lVar14 + 0x98) != 0) {
                uVar11 = *(uint *)(*(long *)(lVar14 + 0x90) + (long)(int)uVar17 * 4);
              }
              if (uVar11 != 0xffffffff) {
                plVar8 = (long *)(lVar14 + 0xb0);
                goto LAB_031791c8;
              }
              uVar11 = uVar17;
            }
            else {
              plVar8 = (long *)(lVar14 + 0xd0);
LAB_031791c8:
              lVar16 = *plVar8;
            }
            lVar16 = lVar16 + (long)(int)uVar11 * 0x10;
            sVar24 = *(short *)(lVar16 + 10) + *(short *)(lVar16 + 8);
            local_70[0] = *(short *)(lVar22 + lVar20 * 2 + 8) - sVar24;
            uVar11 = iVar12 << 0x16;
            iVar12 = 1;
            local_78 = 0x8000000400000001;
            local_80 = local_70;
            if (iVar4 != 1) {
              puVar19 = local_160;
              lVar16 = (long)iVar4 * 0xc + -0xc;
              psVar25 = local_168;
              do {
                psVar7 = local_80;
                iVar12 = (int)local_78;
                if (*puVar19 == uVar17) {
                  sVar3 = *psVar25;
                  uVar2 = local_78 & 0xffffffff;
                  iVar9 = (int)local_78 + 1;
                  if ((int)(local_78._4_4_ & 0x3fffffff) <= (int)local_78) {
                    if (0x3ffffffe < (int)local_78) {
                      FUN_032bd0a8(iVar9);
                    }
                    uVar13 = (local_78._4_4_ & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar13) {
                      uVar13 = 0x3fffffff;
                    }
                    if ((int)uVar13 < iVar9) {
                      uVar13 = iVar12 + 1;
                    }
                    local_80 = (short *)FUN_032bd1d4(puVar5,uVar13,2,psVar7,uVar2,
                                                     (long)&local_78 + 4);
                  }
                  local_80[(int)local_78] = sVar3 - sVar24;
                  local_78 = CONCAT44(local_78._4_4_,iVar9);
                }
                else {
                  local_b0 = 0;
                  local_a8 = -0x8000000000000000;
                  local_a0 = 0;
                  local_98 = -0x8000000000000000;
                  local_90 = 0;
                  local_b8[0] = uVar17;
                  FUN_03191128(lVar14,local_b8,local_80,local_80 + (int)local_78,&local_b0);
                  local_f8[0] = uVar17 | uVar11;
                  FUN_031798e0(local_f0,local_f8,&local_b0);
                  iVar9 = (int)param_3[1];
                  lVar26 = *param_3;
                  iVar12 = iVar9 + 1;
                  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar9) {
                    lVar26 = FUN_0317d3e8(puVar6,iVar12,lVar26,iVar9,(long)param_3 + 0xc);
                    iVar9 = (int)param_3[1];
                    *param_3 = lVar26;
                  }
                  puVar21 = (undefined4 *)(lVar26 + (long)iVar9 * 0x38);
                  *puVar21 = local_f0[0];
                  *(long *)(puVar21 + 2) = 0;
                  *(undefined8 *)(puVar21 + 4) = 0x8000000000000000;
                  if ((int)local_dc < 0) {
                    FUN_032bcf84(puVar6,&local_e8,2);
                  }
                  *(long *)(puVar21 + 2) = local_e8;
                  puVar21[4] = local_e0;
                  puVar21[5] = local_dc;
                  lVar23 = lVar26 + (long)iVar9 * 0x38;
                  local_e8 = 0;
                  local_e0 = 0;
                  local_dc = 0;
                  *(undefined8 *)(lVar23 + 0x18) = 0;
                  *(undefined8 *)(lVar23 + 0x20) = 0x8000000000000000;
                  if (local_cc < 0) {
                    FUN_032bcf84(puVar5,&local_d8,4);
                  }
                  *(undefined8 *)(lVar23 + 0x18) = local_d8;
                  *(undefined4 *)(lVar23 + 0x20) = local_d0;
                  *(int *)(lVar23 + 0x24) = local_cc;
                  lVar26 = lVar26 + (long)iVar9 * 0x38;
                  *(undefined4 *)(lVar26 + 0x28) = local_c8;
                  *(undefined1 *)(lVar26 + 0x30) = local_c0;
                  *(int *)(param_3 + 1) = iVar12;
                  local_d0 = 0;
                  local_cc = -0x80000000;
                  local_d8 = 0;
                  local_e0 = 0;
                  if ((-1 < (int)local_dc) && (local_e8 != 0)) {
                    (**(code **)(*(long *)puVar6 + 0x18))
                              (puVar6,local_e8,(local_dc & 0x3fffffff) << 1);
                  }
                  uVar17 = *puVar19;
                  uVar13 = uVar17 - *(int *)(lVar14 + 0x20);
                  if ((int)uVar17 < *(int *)(lVar14 + 0x20)) {
                    lVar26 = *(long *)(lVar14 + 0x18);
                    uVar13 = uVar17;
                    if (*(int *)(lVar14 + 0x98) != 0) {
                      uVar13 = *(uint *)(*(long *)(lVar14 + 0x90) + (long)(int)uVar17 * 4);
                    }
                    plVar8 = (long *)(lVar14 + 0xb0);
                    if (uVar13 != 0xffffffff) goto LAB_031794cc;
                    uVar13 = uVar17;
                  }
                  else {
                    plVar8 = (long *)(lVar14 + 0xd0);
LAB_031794cc:
                    lVar26 = *plVar8;
                  }
                  lVar26 = lVar26 + (long)(int)uVar13 * 0x10;
                  sVar3 = *(short *)(lVar26 + 8);
                  sVar24 = *(short *)(lVar26 + 10);
                  if ((local_78 & 0x3fffffff00000000) == 0) {
                    uVar13 = (local_78._4_4_ & 0x3fffffff) * 2;
                    if (uVar13 < 0x3fffffff) {
                      if (uVar13 < 2) {
                        uVar13 = 1;
                      }
                    }
                    else {
                      uVar13 = 0x3fffffff;
                    }
                    local_80 = (short *)FUN_032bd1d4(puVar5,uVar13,2,local_80,local_78 & 0xffffffff,
                                                     (long)&local_78 + 4);
                  }
                  lVar26 = local_98;
                  sVar24 = sVar24 + sVar3;
                  if ((int)local_78 != 1) {
                    local_78 = CONCAT44(local_78._4_4_,1);
                  }
                  *local_80 = *psVar25 - sVar24;
                  uVar13 = local_98._4_4_;
                  local_98 = (ulong)local_98._4_4_ << 0x20;
                  if ((-1 < lVar26) && (local_a0 != 0)) {
                    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_a0,uVar13 << 2);
                  }
                  lVar26 = local_a8;
                  local_98 = CONCAT44(0x80000000,(undefined4)local_98);
                  uVar13 = local_a8._4_4_;
                  local_a0 = 0;
                  local_a8 = (ulong)local_a8._4_4_ << 0x20;
                  if ((-1 < lVar26) && (local_b0 != 0)) {
                    (**(code **)(*(long *)puVar6 + 0x18))
                              (puVar6,local_b0,(uVar13 & 0x3fffffff) << 1);
                  }
                }
                lVar16 = lVar16 + -0xc;
                psVar25 = psVar25 + 6;
                puVar19 = puVar19 + 3;
              } while (lVar16 != 0);
              iVar12 = (int)local_78;
            }
            local_90 = 0;
            local_b0 = 0;
            local_a8 = -0x8000000000000000;
            local_a0 = 0;
            local_98 = -0x8000000000000000;
            local_100[0] = uVar17;
            FUN_03191128(lVar14,local_100,local_80,local_80 + iVar12,&local_b0);
            local_f8[0] = uVar17 | uVar11;
            FUN_031798e0(local_f0,local_f8,&local_b0);
            iVar9 = (int)param_3[1];
            lVar14 = *param_3;
            iVar12 = iVar9 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar9) {
              lVar14 = FUN_0317d3e8(puVar6,iVar12,lVar14,iVar9,(long)param_3 + 0xc);
              iVar9 = (int)param_3[1];
              *param_3 = lVar14;
            }
            puVar21 = (undefined4 *)(lVar14 + (long)iVar9 * 0x38);
            *puVar21 = local_f0[0];
            *(long *)(puVar21 + 2) = 0;
            *(undefined8 *)(puVar21 + 4) = 0x8000000000000000;
            if ((int)local_dc < 0) {
              FUN_032bcf84(puVar6,&local_e8,2);
            }
            *(long *)(puVar21 + 2) = local_e8;
            puVar21[4] = local_e0;
            puVar21[5] = local_dc;
            lVar16 = lVar14 + (long)iVar9 * 0x38;
            local_e8 = 0;
            local_e0 = 0;
            local_dc = 0;
            *(undefined8 *)(lVar16 + 0x18) = 0;
            *(undefined8 *)(lVar16 + 0x20) = 0x8000000000000000;
            if (local_cc < 0) {
              FUN_032bcf84(puVar5,&local_d8,4);
            }
            *(undefined8 *)(lVar16 + 0x18) = local_d8;
            *(undefined4 *)(lVar16 + 0x20) = local_d0;
            *(int *)(lVar16 + 0x24) = local_cc;
            lVar14 = lVar14 + (long)iVar9 * 0x38;
            *(undefined4 *)(lVar14 + 0x28) = local_c8;
            *(undefined1 *)(lVar14 + 0x30) = local_c0;
            *(int *)(param_3 + 1) = iVar12;
            local_d0 = 0;
            local_cc = -0x80000000;
            local_d8 = 0;
            local_e0 = 0;
            if ((-1 < (int)local_dc) && (local_e8 != 0)) {
              (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_e8,(local_dc & 0x3fffffff) << 1);
            }
            lVar14 = local_98;
            uVar17 = local_98._4_4_;
            local_98 = (ulong)local_98._4_4_ << 0x20;
            if ((-1 < lVar14) && (local_a0 != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_a0,uVar17 << 2);
            }
            lVar14 = local_a8;
            local_98 = CONCAT44(0x80000000,(undefined4)local_98);
            uVar17 = local_a8._4_4_;
            local_a0 = 0;
            local_a8 = (ulong)local_a8._4_4_ << 0x20;
            if ((-1 < lVar14) && (local_b0 != 0)) {
              (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_b0,(uVar17 & 0x3fffffff) << 1);
            }
            uVar2 = local_78;
            uVar17 = local_78._4_4_;
            local_78 = (ulong)local_78._4_4_ << 0x20;
            if ((-1 < (long)uVar2) && (local_80 != (short *)0x0)) {
              (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_80,(uVar17 & 0x3fffffff) << 1);
            }
            local_168 = local_168 + 1;
            lVar20 = lVar20 + 1;
            local_160 = local_160 + 1;
            if (lVar20 == 2) goto LAB_03179838;
            if (lVar20 == 0) goto LAB_031797f8;
          } while (iVar4 < 2);
          puVar10 = &LAB_031798ac;
        } while( true );
      }
LAB_03179838:
      lVar15 = lVar15 + 8;
    } while (lVar15 != lVar1);
  }
  return;
}


