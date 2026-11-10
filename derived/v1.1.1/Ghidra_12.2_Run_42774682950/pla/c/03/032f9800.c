/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f9800; name: FUN_032f9800
 */


undefined4
FUN_032f9800(ulong *param_1,ulong *param_2,undefined4 param_3,ulong *param_4,undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar4;
  undefined2 uVar3;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  ulong uVar16;
  ulong extraout_x8;
  ulong *puVar17;
  undefined1 uVar18;
  ushort uVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  short *psVar22;
  short *psVar23;
  long *plVar24;
  long lVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *local_c0;
  undefined8 local_b8;
  ulong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  uint local_68 [2];
  
  uVar16 = *param_2;
  puVar20 = param_2;
  if ((uVar16 & 1) == 0) {
    puVar20 = (ulong *)param_2[1];
    bVar1 = (byte)*puVar20;
    while ((bVar1 & 1) == 0) {
      puVar20 = (ulong *)puVar20[1];
      bVar1 = (byte)*puVar20;
    }
  }
  uVar3 = (undefined2)param_3;
  uVar4 = (undefined2)param_5;
  switch((uint)puVar20[2] & 0x1f) {
  case 1:
    uVar6 = FUN_032fa5e0(param_1,param_2,param_3,param_4,param_5);
    return uVar6;
  case 2:
    plVar24 = (long *)param_1[1];
    iVar13 = (int)plVar24[1];
    lVar8 = *plVar24;
    lVar12 = (long)iVar13;
    iVar7 = iVar13 + 1;
    if ((int)(*(uint *)((long)plVar24 + 0xc) & 0x3fffffff) <= iVar13) {
      lVar8 = FUN_032c8bec(PTR_PTR_0434a080,iVar7);
      iVar13 = (int)plVar24[1];
      *plVar24 = lVar8;
    }
    puVar21 = (undefined8 *)(lVar8 + (long)iVar13 * 0x38);
    *(undefined1 *)(puVar21 + 1) = 0;
    *(undefined4 *)((long)puVar21 + 10) = 0;
    puVar21[2] = 0;
    *puVar21 = &PTR_LAB_0434d568;
    *(int *)(plVar24 + 1) = iVar7;
    plVar24 = (long *)(*plVar24 + lVar12 * 0x38);
    (**(code **)(*plVar24 + 8))(plVar24);
    uVar18 = 1;
    *(undefined2 *)((long)plVar24 + 10) = uVar4;
    *(undefined2 *)((long)plVar24 + 0xc) = uVar3;
    break;
  case 3:
    plVar24 = (long *)param_1[1];
    iVar13 = (int)plVar24[1];
    lVar8 = *plVar24;
    lVar12 = (long)iVar13;
    iVar7 = iVar13 + 1;
    if ((int)(*(uint *)((long)plVar24 + 0xc) & 0x3fffffff) <= iVar13) {
      lVar8 = FUN_032c8bec(PTR_PTR_0434a080,iVar7);
      iVar13 = (int)plVar24[1];
      *plVar24 = lVar8;
    }
    puVar21 = (undefined8 *)(lVar8 + (long)iVar13 * 0x38);
    *(undefined1 *)(puVar21 + 1) = 0;
    *(undefined4 *)((long)puVar21 + 10) = 0;
    puVar21[2] = 0;
    *puVar21 = &PTR_LAB_0434d568;
    *(int *)(plVar24 + 1) = iVar7;
    plVar24 = (long *)(*plVar24 + lVar12 * 0x38);
    (**(code **)(*plVar24 + 8))(plVar24);
    *(undefined2 *)((long)plVar24 + 10) = uVar4;
    *(undefined2 *)((long)plVar24 + 0xc) = uVar3;
    uVar18 = 5;
    break;
  case 4:
    plVar24 = (long *)param_1[1];
    iVar13 = (int)plVar24[1];
    lVar8 = *plVar24;
    lVar12 = (long)iVar13;
    iVar7 = iVar13 + 1;
    if ((int)(*(uint *)((long)plVar24 + 0xc) & 0x3fffffff) <= iVar13) {
      lVar8 = FUN_032c8bec(PTR_PTR_0434a080,iVar7);
      iVar13 = (int)plVar24[1];
      *plVar24 = lVar8;
    }
    puVar21 = (undefined8 *)(lVar8 + (long)iVar13 * 0x38);
    *(undefined1 *)(puVar21 + 1) = 0;
    *(undefined4 *)((long)puVar21 + 10) = 0;
    puVar21[2] = 0;
    *puVar21 = &PTR_LAB_0434d568;
    *(int *)(plVar24 + 1) = iVar7;
    plVar24 = (long *)(*plVar24 + lVar12 * 0x38);
    (**(code **)(*plVar24 + 8))(plVar24);
    *(undefined2 *)((long)plVar24 + 10) = uVar4;
    *(undefined2 *)((long)plVar24 + 0xc) = uVar3;
    uVar18 = 2;
    break;
  case 5:
    plVar24 = (long *)param_1[1];
    iVar13 = (int)plVar24[1];
    lVar8 = *plVar24;
    lVar12 = (long)iVar13;
    iVar7 = iVar13 + 1;
    if ((int)(*(uint *)((long)plVar24 + 0xc) & 0x3fffffff) <= iVar13) {
      lVar8 = FUN_032c8bec(PTR_PTR_0434a080,iVar7);
      iVar13 = (int)plVar24[1];
      *plVar24 = lVar8;
    }
    puVar21 = (undefined8 *)(lVar8 + (long)iVar13 * 0x38);
    *(undefined1 *)(puVar21 + 1) = 0;
    *(undefined4 *)((long)puVar21 + 10) = 0;
    puVar21[2] = 0;
    *puVar21 = &PTR_LAB_0434d568;
    *(int *)(plVar24 + 1) = iVar7;
    plVar24 = (long *)(*plVar24 + lVar12 * 0x38);
    (**(code **)(*plVar24 + 8))(plVar24);
    *(undefined2 *)((long)plVar24 + 10) = uVar4;
    *(undefined2 *)((long)plVar24 + 0xc) = uVar3;
    uVar18 = 3;
    break;
  case 6:
    plVar24 = (long *)param_1[1];
    iVar13 = (int)plVar24[1];
    lVar8 = *plVar24;
    lVar12 = (long)iVar13;
    iVar7 = iVar13 + 1;
    if ((int)(*(uint *)((long)plVar24 + 0xc) & 0x3fffffff) <= iVar13) {
      lVar8 = FUN_032c8bec(PTR_PTR_0434a080,iVar7);
      iVar13 = (int)plVar24[1];
      *plVar24 = lVar8;
    }
    puVar21 = (undefined8 *)(lVar8 + (long)iVar13 * 0x38);
    *(undefined1 *)(puVar21 + 1) = 0;
    *(undefined4 *)((long)puVar21 + 10) = 0;
    puVar21[2] = 0;
    *puVar21 = &PTR_LAB_0434d568;
    *(int *)(plVar24 + 1) = iVar7;
    plVar24 = (long *)(*plVar24 + lVar12 * 0x38);
    (**(code **)(*plVar24 + 8))(plVar24);
    *(undefined2 *)((long)plVar24 + 10) = uVar4;
    *(undefined2 *)((long)plVar24 + 0xc) = uVar3;
    uVar18 = 4;
    break;
  case 7:
    if (((ulong *)param_1[3] != param_2) && ((ulong *)param_1[2] != param_4)) {
      if (param_4 == param_2) {
        lVar8 = FUN_032f7d50(*param_1,param_4);
      }
      else {
        lVar8 = FUN_032f800c(*param_1,param_4,param_2);
      }
      if (lVar8 == 0) {
        return 0x80040200;
      }
      plVar24 = (long *)param_1[1];
      iVar13 = (int)plVar24[1];
      lVar12 = *plVar24;
      lVar25 = (long)iVar13;
      iVar7 = iVar13 + 1;
      if ((int)(*(uint *)((long)plVar24 + 0xc) & 0x3fffffff) <= iVar13) {
        lVar12 = FUN_032c8bec(PTR_PTR_0434a080,iVar7);
        iVar13 = (int)plVar24[1];
        *plVar24 = lVar12;
      }
      puVar21 = (undefined8 *)(lVar12 + (long)iVar13 * 0x38);
      *(undefined1 *)(puVar21 + 1) = 0;
      *(undefined4 *)((long)puVar21 + 10) = 0;
      puVar21[2] = 0;
      *puVar21 = &PTR_LAB_0434d568;
      *(int *)(plVar24 + 1) = iVar7;
      plVar24 = (long *)(*plVar24 + lVar25 * 0x38);
      (**(code **)(*plVar24 + 8))(plVar24);
      *(undefined1 *)(plVar24 + 1) = 0xc;
      *(undefined2 *)((long)plVar24 + 10) = uVar4;
      *(undefined2 *)((long)plVar24 + 0xc) = uVar3;
      *plVar24 = (long)&PTR_LAB_0434d610;
      plVar24[2] = 0;
      plVar24[3] = (long)param_4;
      plVar24[4] = (long)param_2;
      plVar24[5] = lVar8;
      return 0;
    }
    if (param_4 == param_2) {
      local_b8 = (undefined *)CONCAT44(param_5,param_3);
      local_c0 = param_1;
      local_70 = FUN_032fad4c(param_1,param_2,&local_c0);
      local_68[0] = 0x80040200;
      if (local_70 < 2) {
        return 0;
      }
      if (DAT_0444acb0 == '\0') {
        return 0x80040200;
      }
      local_c0 = (ulong *)0x0;
      local_b0 = &DAT_0444ac60;
      local_a8 = 1;
      local_a0 = FUN_032ba19c();
      uStack_98 = 0;
      local_90 = 0;
      pcStack_88 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp";
      local_80 = 0xc0;
      uStack_78 = 0;
      FUN_03326338(&local_c0,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_043890e0,"failedField",
                   local_68);
      pcVar11 = "Failed to clone field \'{}\' in fast path.";
      goto LAB_032fa448;
    }
    if (param_4 == (ulong *)0x0) {
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,param_3);
      local_c0 = param_1;
      local_70 = FUN_032fb154(param_1,param_2,&local_c0);
      local_68[0] = 0x80040200;
      if (local_70 < 2) {
        return 0;
      }
      if (DAT_0444acb0 == '\0') {
        return 0x80040200;
      }
      local_c0 = (ulong *)0x0;
      local_b0 = &DAT_0444ac60;
      local_a8 = 1;
      local_a0 = FUN_032ba19c();
      uStack_98 = 0;
      local_90 = 0;
      pcStack_88 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp";
      local_80 = 0xf1;
      uStack_78 = 0;
      FUN_03326338(&local_c0,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_043890e0,"failedField",
                   local_68);
      pcVar11 = "Failed to clone field \'{}\' with NULL source type.";
      goto LAB_032fa448;
    }
    puVar20 = param_4;
    if ((*param_4 & 1) == 0) {
      puVar20 = (ulong *)param_4[1];
      bVar1 = (byte)*puVar20;
      while ((bVar1 & 1) == 0) {
        puVar20 = (ulong *)puVar20[1];
        bVar1 = (byte)*puVar20;
      }
    }
    puVar26 = param_4;
    if ((puVar20[2] & 0x1f) != 7) {
      puVar26 = (ulong *)0x0;
    }
    if (puVar26 == param_4) {
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,param_3);
      local_a8 = CONCAT44(local_a8._4_4_,param_5);
      uVar16 = *param_1;
      if (*(char *)(uVar16 + 4) == '\0') {
        puVar20 = (ulong *)param_2[1];
      }
      else {
        puVar20 = (ulong *)0x0;
      }
      local_b0 = puVar26;
      if (*(char *)(uVar16 + 1) == '\0') {
        if (*(char *)(uVar16 + 2) == '\0') {
          puVar27 = (ulong *)0x0;
          puVar26 = (ulong *)0x0;
          local_c0 = param_1;
          do {
            puVar26 = puVar26 + 1;
            puVar17 = puVar20;
            if (puVar27 <= puVar26) {
              if (puVar20 == param_2) goto LAB_032fa3b0;
              uVar15 = (uint)*param_2;
              if ((uVar15 >> 0x17 & 1) == 0) {
                puVar17 = (ulong *)0x0;
                psVar22 = (short *)0x0;
              }
              else {
                uVar15 = (uVar15 & 0x7fffff) - (uVar15 >> 1 & 0x155555);
                uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
                psVar22 = (short *)param_2[(ulong)((uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101
                                                  >> 0x18) + 2];
                if (psVar22 == (short *)0x0) {
                  puVar17 = (ulong *)0x0;
                }
                else {
                  bVar5 = (int)psVar22[1] + (int)*psVar22 != 0;
                  puVar17 = (ulong *)0x0;
                  if (bVar5) {
                    puVar17 = param_2;
                  }
                  psVar23 = (short *)0x0;
                  if (bVar5) {
                    psVar23 = psVar22;
                  }
                  psVar22 = psVar23;
                }
              }
              for (puVar26 = (ulong *)param_2[1]; puVar26 != puVar20; puVar26 = (ulong *)puVar26[1])
              {
                uVar15 = (uint)*puVar26;
                if (((uVar15 >> 0x17 & 1) != 0) &&
                   (uVar15 = (uVar15 & 0x7fffff) - (uVar15 >> 1 & 0x155555),
                   uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333),
                   psVar23 = (short *)puVar26[(ulong)((uVar15 + (uVar15 >> 4) & 0xf0f0f0f) *
                                                      0x1010101 >> 0x18) + 2],
                   psVar23 != (short *)0x0)) {
                  if ((int)psVar23[1] + (int)*psVar23 != 0) {
                    psVar22 = psVar23;
                    puVar17 = puVar26;
                  }
                }
              }
              local_70 = 0;
              if (puVar17 == (ulong *)0x0) goto LAB_032fa3b4;
              puVar26 = (ulong *)(psVar22 + 4);
              puVar27 = puVar26 + (long)psVar22[1] + (long)*psVar22;
            }
            uVar15 = (uint)*(undefined8 *)*puVar26;
            puVar20 = puVar17;
          } while ((((uVar15 >> 0x11 & 1) == 0) ||
                   (uVar15 = (uVar15 & 0x1ffff) - (uVar15 >> 1 & 0x5555),
                   uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333),
                   (*(ushort *)
                     ((long)*puVar26 +
                     (ulong)((uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12) &
                   0x30) == 0)) || (iVar7 = FUN_032fb6ac(&local_c0,*puVar26), -1 < iVar7));
          local_70 = *puVar26;
          goto LAB_032fa3b4;
        }
        uVar19 = 0;
        uVar14 = 0x10;
      }
      else {
        uVar14 = (ushort)(*(char *)(uVar16 + 2) != '\0') << 4;
        uVar19 = 1;
      }
      puVar27 = (ulong *)0x0;
      puVar26 = (ulong *)0x0;
      local_c0 = param_1;
      do {
        do {
          puVar26 = puVar26 + 1;
          puVar17 = puVar20;
          if (puVar27 <= puVar26) {
            if (puVar20 == param_2) goto LAB_032fa3b0;
            uVar15 = (uint)*param_2;
            if ((uVar15 >> 0x17 & 1) == 0) {
              puVar17 = (ulong *)0x0;
              psVar22 = (short *)0x0;
            }
            else {
              uVar15 = (uVar15 & 0x7fffff) - (uVar15 >> 1 & 0x155555);
              uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
              psVar22 = (short *)param_2[(ulong)((uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                0x18) + 2];
              if (psVar22 == (short *)0x0) {
                puVar17 = (ulong *)0x0;
              }
              else {
                bVar5 = (int)psVar22[1] + (int)*psVar22 != 0;
                puVar17 = (ulong *)0x0;
                if (bVar5) {
                  puVar17 = param_2;
                }
                psVar23 = (short *)0x0;
                if (bVar5) {
                  psVar23 = psVar22;
                }
                psVar22 = psVar23;
              }
            }
            for (puVar26 = (ulong *)param_2[1]; puVar26 != puVar20; puVar26 = (ulong *)puVar26[1]) {
              uVar15 = (uint)*puVar26;
              if (((uVar15 >> 0x17 & 1) != 0) &&
                 (uVar15 = (uVar15 & 0x7fffff) - (uVar15 >> 1 & 0x155555),
                 uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333),
                 psVar23 = (short *)puVar26[(ulong)((uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101
                                                   >> 0x18) + 2], psVar23 != (short *)0x0)) {
                if ((int)psVar23[1] + (int)*psVar23 != 0) {
                  psVar22 = psVar23;
                  puVar17 = puVar26;
                }
              }
            }
            local_70 = 0;
            if (puVar17 == (ulong *)0x0) goto LAB_032fa3b4;
            puVar26 = (ulong *)(psVar22 + 4);
            puVar27 = puVar26 + (long)psVar22[1] + (long)*psVar22;
          }
          uVar15 = (uint)*(undefined8 *)*puVar26;
          puVar20 = puVar17;
        } while (((uVar15 >> 0x11 & 1) == 0) ||
                (uVar15 = (uVar15 & 0x1ffff) - (uVar15 >> 1 & 0x5555),
                uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333),
                (*(ushort *)
                  ((long)*puVar26 +
                  (ulong)((uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12) &
                0x30) == 0));
        uVar15 = (uint)*(undefined8 *)*puVar26;
      } while ((((uVar15 >> 0x11 & 1) != 0) &&
               (uVar15 = (uVar15 & 0x1ffff) - (uVar15 >> 1 & 0x5555),
               uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333),
               ((uVar14 | uVar19) &
               *(ushort *)
                ((long)*puVar26 +
                (ulong)((uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12)) != 0)
               ) || (iVar7 = FUN_032fb6ac(&local_c0,*puVar26), -1 < iVar7));
      local_70 = *puVar26;
      goto LAB_032fa3b4;
    }
    if (*(char *)*param_1 == '\0') {
      return 0;
    }
    FUN_032e2c7c(&local_c0,param_2,&DAT_04358dc0);
    puVar20 = local_b0;
    param_4 = local_c0;
    if (((ulong)local_b0 & 1) == 0) goto joined_r0x032fa1cc;
    goto LAB_032fa19c;
  case 8:
    if (param_4 != (ulong *)0x0) {
      uVar15 = (uint)*param_4;
      puVar20 = param_4;
      if ((*param_4 & 1) == 0) {
        puVar20 = (ulong *)param_4[1];
        bVar1 = (byte)*puVar20;
        while ((bVar1 & 1) == 0) {
          puVar20 = (ulong *)puVar20[1];
          bVar1 = (byte)*puVar20;
        }
      }
      if ((puVar20[2] & 0x1f) == 8) {
        puVar20 = param_2;
        if (((uint)uVar16 >> 1 & 1) == 0) {
          do {
            puVar20 = (ulong *)puVar20[1];
            if (puVar20 == (ulong *)0x0) goto LAB_032f9d04;
          } while (((byte)*puVar20 >> 1 & 1) == 0);
        }
        if (puVar20[3] != 0) {
          puVar20 = param_4;
          if ((uVar15 >> 1 & 1) == 0) {
            do {
              puVar20 = (ulong *)puVar20[1];
              if (puVar20 == (ulong *)0x0) goto LAB_032f9d04;
            } while (((byte)*puVar20 >> 1 & 1) == 0);
          }
          if (puVar20[3] != 0) {
            if (*(char *)(*param_1 + 5) == '\0') {
              puVar20 = param_2;
              if ((uVar16 & 1) == 0) {
                do {
                  puVar20 = (ulong *)puVar20[1];
                  if (puVar20 == (ulong *)0x0) goto LAB_032f9d04;
                } while ((*puVar20 & 1) == 0);
              }
              if ((puVar20 == (ulong *)0x0) || ((int)(puVar20[2] >> 8) == 0)) goto LAB_032f9d04;
            }
            puVar20 = param_4;
            if ((uVar15 >> 1 & 1) == 0) {
              do {
                puVar20 = (ulong *)puVar20[1];
                if (puVar20 == (ulong *)0x0) {
                  uVar10 = 0;
                  goto joined_r0x032fa11c;
                }
              } while (((byte)*puVar20 >> 1 & 1) == 0);
            }
            uVar10 = puVar20[3];
joined_r0x032fa11c:
            puVar20 = param_2;
            if (((uint)uVar16 >> 1 & 1) == 0) {
              do {
                puVar20 = (ulong *)puVar20[1];
                if (puVar20 == (ulong *)0x0) {
                  if (uVar10 == 0) goto LAB_032fa130;
                  goto LAB_032f9ad8;
                }
              } while (((byte)*puVar20 >> 1 & 1) == 0);
            }
            if (uVar10 == puVar20[3]) {
LAB_032fa130:
              lVar8 = FUN_032f7d50();
            }
            else {
LAB_032f9ad8:
              lVar8 = FUN_032f800c();
            }
            if (lVar8 == 0) {
              return 0x80040200;
            }
            goto LAB_032f9ae4;
          }
        }
      }
    }
LAB_032f9d04:
    lVar8 = 0;
LAB_032f9ae4:
    plVar24 = (long *)param_1[1];
    iVar13 = (int)plVar24[1];
    lVar12 = *plVar24;
    lVar25 = (long)iVar13;
    iVar7 = iVar13 + 1;
    if ((int)(*(uint *)((long)plVar24 + 0xc) & 0x3fffffff) <= iVar13) {
      lVar12 = FUN_032c8bec(PTR_PTR_0434a080,iVar7);
      iVar13 = (int)plVar24[1];
      *plVar24 = lVar12;
    }
    puVar21 = (undefined8 *)(lVar12 + (long)iVar13 * 0x38);
    *(undefined1 *)(puVar21 + 1) = 0;
    *(undefined4 *)((long)puVar21 + 10) = 0;
    puVar21[2] = 0;
    *puVar21 = &PTR_LAB_0434d568;
    *(int *)(plVar24 + 1) = iVar7;
    plVar24 = (long *)(*plVar24 + lVar25 * 0x38);
    (**(code **)(*plVar24 + 8))(plVar24);
    *(undefined1 *)(plVar24 + 1) = 0xb;
    *(undefined2 *)((long)plVar24 + 10) = uVar4;
    *(undefined2 *)((long)plVar24 + 0xc) = uVar3;
    *plVar24 = (long)&PTR_LAB_0434d648;
    plVar24[2] = 0;
    plVar24[3] = (long)param_4;
    plVar24[4] = (long)param_2;
    plVar24[5] = lVar8;
    return 0;
  default:
    local_b0 = (ulong *)0x0;
    local_c0 = (ulong *)0x0;
    local_b8 = PTR_DAT_04372528;
    FUN_03320b50(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,s_Bad_type_visitor_switch_0390397d,&local_c0);
    puVar20 = (ulong *)extraout_x8;
LAB_032fa19c:
    plVar9 = (long *)((ulong)puVar20 & 0xfffffffffffffffe);
    plVar24 = plVar9 + 1;
    do {
      lVar8 = *plVar24;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = (int)lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar8 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
joined_r0x032fa1cc:
    if (param_4 == (ulong *)0x0) {
      uVar6 = FUN_032f9800(param_1,param_2,param_3,0,0);
    }
    else {
      uVar6 = (*(code *)*param_4)(param_1[1],param_2,param_3,0,0);
    }
    return uVar6;
  }
  *(undefined1 *)(plVar24 + 1) = uVar18;
  *plVar24 = (long)&PTR_LAB_0434d5a0;
  plVar24[4] = (long)param_2;
  plVar24[2] = 0;
  plVar24[3] = (long)param_4;
  return 0;
LAB_032fa3b0:
  local_70 = 0;
LAB_032fa3b4:
  local_68[0] = 0x80040200;
  if (local_70 < 2) {
    return 0;
  }
  if (DAT_0444acb0 == '\0') {
    return 0x80040200;
  }
  local_c0 = (ulong *)0x0;
  local_b0 = &DAT_0444ac60;
  local_a8 = 1;
  local_a0 = FUN_032ba19c();
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = 
  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp";
  local_80 = 0xe9;
  uStack_78 = 0;
  FUN_03326338(&local_c0,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_043890e0,"failedField",
               local_68);
  pcVar11 = "Failed to clone field \'{}\' by name matching.";
LAB_032fa448:
  FUN_03326338(&local_c0,pcVar11,PTR_DAT_04389290,&local_70);
  FUN_033266e0(&local_c0);
  FUN_032c7b9c(&uStack_98);
  return local_68[0];
}


