/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037edac; name: FUN_0037edac
 */


long * FUN_0037edac(long param_1,long param_2,undefined8 param_3,ulong *param_4,ulong *param_5,
                   undefined8 *param_6,long *param_7,ulong param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  ulong *puVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long local_b0;
  undefined **local_a8;
  long *local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  
  local_b0 = param_2;
  if ((*(char *)(param_1 + 0x10) != '\0') &&
     (lVar30 = *(long *)(*(long *)(param_2 + 0x10) + 0x10), lVar9 = FUN_003420d0(), lVar30 == lVar9)
     ) {
    plVar10 = (long *)thunk_FUN_00391bac();
                    /* WARNING: Could not recover jumptable at 0x0037ee9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,param_2);
    return plVar10;
  }
  plVar10 = (long *)FUN_00380438(*(undefined8 *)(param_1 + 0x18),&local_b0);
  if (*plVar10 != 0) {
    return *(long **)(*plVar10 + 0x40);
  }
  puVar11 = (uint *)FUN_002e2e80(PTR_FUN_04373078,0x50);
  if (puVar11 != (uint *)0x0) {
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
  }
  *plVar10 = (long)puVar11;
  *(long *)(puVar11 + 8) = local_b0;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    uVar13 = *(undefined8 *)(*(long *)(local_b0 + 0x10) + 0x10);
    *(long *)(puVar11 + 4) = param_1;
    *(undefined8 *)(puVar11 + 6) = uVar13;
    uVar19 = *(uint *)(local_b0 + 0x6c);
    if ((int)uVar19 < 1) goto LAB_0037eeb8;
LAB_0037ee58:
    uVar17 = (ulong)(int)uVar19;
    if (uVar19 < 4) {
      uVar20 = 0;
      iVar25 = 0;
LAB_0037f050:
      lVar9 = *(long *)(local_b0 + 0x30) + uVar20 * 0x30;
      puVar22 = (undefined8 *)(lVar9 + 0x20);
      if (*(int *)(lVar9 + 0x18) != 1) goto LAB_0037f098;
      do {
        uVar19 = *(byte *)(*(long *)*puVar22 + 0x41) ^ 1;
        puVar23 = puVar22;
        while( true ) {
          uVar20 = uVar20 + 1;
          iVar25 = iVar25 + uVar19;
          puVar22 = puVar23 + 6;
          if ((long)uVar17 <= (long)uVar20) goto LAB_0037f0a0;
          if (*(int *)(puVar23 + 5) == 1) break;
LAB_0037f098:
          uVar19 = 1;
          puVar23 = puVar22;
        }
      } while( true );
    }
    uVar20 = uVar17 & 0xfffffffffffffffc;
    iVar16 = 0;
    iVar27 = 0;
    iVar26 = 0;
    iVar25 = 0;
    piVar28 = (int *)(*(long *)(local_b0 + 0x30) + 0x78);
    uVar29 = uVar20;
    do {
      iVar4 = piVar28[-0x18];
      iVar5 = piVar28[-0xc];
      iVar2 = *piVar28;
      iVar3 = piVar28[0xc];
      if (iVar4 == 1) {
        param_4 = *(ulong **)(piVar28 + -0x16);
        if (iVar5 == 1) goto LAB_0037efbc;
LAB_0037ef5c:
        if (iVar2 != 1) goto LAB_0037ef64;
LAB_0037efc8:
        param_6 = *(undefined8 **)(piVar28 + 2);
        if (iVar3 == 1) goto LAB_0037efd4;
LAB_0037ef6c:
        if (iVar4 != 1) goto LAB_0037ef74;
LAB_0037efe0:
        param_8 = *param_4;
        if (iVar5 == 1) goto LAB_0037efec;
LAB_0037ef7c:
        if (iVar2 != 1) goto LAB_0037ef84;
LAB_0037eff8:
        param_5 = (ulong *)*param_6;
        if (iVar3 == 1) goto LAB_0037f004;
LAB_0037ef8c:
        if (iVar4 != 1) goto LAB_0037ef94;
LAB_0037f010:
        uVar19 = (uint)*(byte *)(param_8 + 0x41);
        uVar14 = (uint)*(byte *)(param_8 + 0x41);
        if (iVar5 == 1) goto LAB_0037f01c;
LAB_0037ef9c:
        if (iVar2 != 1) goto LAB_0037efa4;
LAB_0037f028:
        uVar14 = (uint)*(byte *)((long)param_5 + 0x41);
      }
      else {
        if (iVar5 != 1) goto LAB_0037ef5c;
LAB_0037efbc:
        param_5 = *(ulong **)(piVar28 + -10);
        if (iVar2 == 1) goto LAB_0037efc8;
LAB_0037ef64:
        if (iVar3 != 1) goto LAB_0037ef6c;
LAB_0037efd4:
        param_7 = *(long **)(piVar28 + 0xe);
        if (iVar4 == 1) goto LAB_0037efe0;
LAB_0037ef74:
        if (iVar5 != 1) goto LAB_0037ef7c;
LAB_0037efec:
        param_4 = (ulong *)*param_5;
        if (iVar2 == 1) goto LAB_0037eff8;
LAB_0037ef84:
        if (iVar3 != 1) goto LAB_0037ef8c;
LAB_0037f004:
        param_6 = (undefined8 *)*param_7;
        if (iVar4 == 1) goto LAB_0037f010;
LAB_0037ef94:
        uVar19 = (uint)param_7;
        uVar14 = uVar19;
        if (iVar5 != 1) goto LAB_0037ef9c;
LAB_0037f01c:
        uVar19 = uVar14;
        param_8 = (ulong)*(byte *)((long)param_4 + 0x41);
        if (iVar2 == 1) goto LAB_0037f028;
LAB_0037efa4:
        uVar14 = (uint)param_4;
      }
      uVar15 = (uint)param_5;
      if (iVar3 == 1) {
        uVar15 = (uint)*(byte *)((long)param_6 + 0x41);
      }
      uVar19 = (uVar19 ^ 1) & 0xff;
      param_6 = (undefined8 *)(ulong)uVar19;
      uVar1 = ((uint)param_8 ^ 1) & 0xff;
      param_7 = (long *)(ulong)uVar1;
      if (iVar4 != 1) {
        uVar19 = 1;
      }
      uVar14 = (uVar14 ^ 1) & 0xff;
      param_4 = (ulong *)(ulong)uVar14;
      if (iVar5 != 1) {
        uVar1 = 1;
      }
      uVar15 = (uVar15 ^ 1) & 0xff;
      param_5 = (ulong *)(ulong)uVar15;
      if (iVar2 != 1) {
        uVar14 = 1;
      }
      if (iVar3 != 1) {
        uVar15 = 1;
      }
      iVar16 = iVar16 + uVar19;
      iVar27 = iVar27 + uVar1;
      iVar26 = iVar26 + uVar14;
      iVar25 = iVar25 + uVar15;
      uVar29 = uVar29 - 4;
      piVar28 = piVar28 + 0x30;
    } while (uVar29 != 0);
    iVar25 = iVar25 + iVar26 + iVar27 + iVar16;
    if (uVar20 != uVar17) goto LAB_0037f050;
  }
  else {
    *(long *)(puVar11 + 4) = param_1;
    *(long *)(puVar11 + 6) = lVar9;
    uVar19 = *(uint *)(local_b0 + 0x6c);
    if (0 < (int)uVar19) goto LAB_0037ee58;
LAB_0037eeb8:
    iVar25 = 0;
  }
LAB_0037f0a0:
  uVar19 = *(int *)(local_b0 + 0x68) + iVar25;
  lVar9 = FUN_002e2ec0(PTR_FUN_04373078,
                       -(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2);
  lVar30 = *(long *)(puVar11 + 10);
  *(long *)(puVar11 + 10) = lVar9;
  if (lVar30 != 0) {
    FUN_002e2f10(lVar30);
    FUN_002e2ef0(PTR_LAB_04373088,lVar30);
  }
  puVar11[1] = 0xffffffff;
  puVar8 = PTR_LAB_04373088;
  puVar7 = PTR_FUN_04373078;
  uVar14 = *(uint *)(local_b0 + 0x68);
  uVar17 = (ulong)uVar14;
  uVar19 = 0x28;
  lVar30 = local_b0;
  if (0 < (int)uVar14) {
    lVar31 = 0;
    iVar16 = 0;
    lVar21 = *(long *)(local_b0 + 0x28);
    cVar6 = *(char *)(lVar21 + 0x41);
    do {
      if (cVar6 == '\0') {
        lVar24 = lVar21 + lVar31 * 0x98;
        iVar27 = *(int *)(lVar24 + 0x3c);
        if (*(int *)(*(long *)(lVar24 + 0x28) + 0x3c) == 2 && iVar27 == 1) {
          if (*(long *)(lVar21 + lVar31 * 0x98 + 0x58) == 0) goto LAB_0037f15c;
        }
        else if (iVar27 == 2) goto LAB_0037f15c;
      }
      else {
LAB_0037f15c:
        if (*(char *)(*(long *)(lVar21 + lVar31 * 0x98 + 0x78) + 0x4f) == '\0') {
          if (puVar11[1] == 0xffffffff) {
            puVar11[1] = 0x28;
            lVar30 = FUN_002e2ec0(puVar7,-(uVar17 >> 0x1f & 1) & 0xfffffffc00000000 |
                                         (uVar17 & 0xffffffff) << 2);
            if (0 < *(int *)(local_b0 + 0x68)) {
              lVar21 = 0;
              do {
                *(undefined4 *)(lVar30 + lVar21 * 4) = 0xffffffff;
                lVar21 = lVar21 + 1;
              } while (lVar21 < *(int *)(local_b0 + 0x68));
            }
            lVar21 = *(long *)(puVar11 + 0xc);
            *(long *)(puVar11 + 0xc) = lVar30;
            lVar30 = local_b0;
            if (lVar21 != 0) {
              FUN_002e2f10(lVar21);
              FUN_002e2ef0(puVar8,lVar21);
              lVar30 = local_b0;
            }
          }
          *(int *)(*(long *)(puVar11 + 0xc) + lVar31 * 4) = iVar16;
          iVar16 = iVar16 + 1;
        }
      }
      uVar14 = *(uint *)(lVar30 + 0x68);
      uVar17 = (ulong)(int)uVar14;
      lVar31 = lVar31 + 1;
      if ((long)uVar17 <= lVar31) goto LAB_0037f210;
      lVar21 = *(long *)(lVar30 + 0x28);
      cVar6 = *(char *)(lVar21 + lVar31 * 0x98 + 0x41);
    } while( true );
  }
LAB_0037f248:
  if (0 < iVar25) {
    iVar16 = uVar19 + iVar25 * 4;
    uVar15 = iVar16 + 7;
    uVar1 = iVar16 + 0xe;
    if (-1 < (int)uVar15) {
      uVar1 = uVar15;
    }
    puVar11[2] = uVar19;
    uVar19 = uVar1 & 0xfffffff8;
  }
  if (*(int *)(lVar30 + 0x7c) < 1) {
    puVar11[3] = 0xffffffff;
  }
  else {
    puVar11[3] = uVar19;
    uVar15 = uVar19 + 0x26;
    if (-1 < (int)(uVar19 + 0x1f)) {
      uVar15 = uVar19 + 0x1f;
    }
    uVar19 = uVar15 & 0xfffffff8;
  }
  if (0 < (int)uVar14) {
    lVar21 = 0;
    lVar31 = 0;
    lVar24 = *(long *)(lVar30 + 0x28);
    lVar18 = *(long *)(lVar24 + 0x58);
    if (lVar18 != 0) goto LAB_0037f320;
    do {
      iVar16 = *(int *)(lVar24 + 0x3c);
      puVar12 = *(ulong **)(lVar24 + 0x30);
      if (puVar12 != (ulong *)0x0) {
        puStack_70 = PTR_LAB_04373a98;
        local_78 = lVar24;
        if (*puVar12 != 0xffffffffffffffff) {
          local_a0 = &local_78;
          local_a8 = &puStack_70;
          local_68 = &local_a8;
          std::__call_once(puVar12,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
      }
      uVar14 = *(uint *)(lVar24 + 0x38);
      uVar15 = *(uint *)(PTR_DAT_04373ab0 + (ulong)uVar14 * 4);
      if (iVar16 == 3) {
        if (uVar15 - 1 < 8) {
          iVar16 = 0x10;
        }
        else {
          if (uVar15 != 9) {
            if (uVar15 != 10) goto LAB_0037f470;
            puVar12 = *(ulong **)(lVar24 + 0x30);
            if (puVar12 != (ulong *)0x0) {
              puStack_70 = PTR_LAB_04373a98;
              local_78 = lVar24;
              if (*puVar12 != 0xffffffffffffffff) {
                local_a0 = &local_78;
                local_a8 = &puStack_70;
                local_68 = &local_a8;
                std::__call_once(puVar12,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
              }
              uVar14 = *(uint *)(lVar24 + 0x38);
            }
            if (uVar14 == 0xb) {
              uVar17 = FUN_00344344(lVar24);
              iVar16 = 0x60;
              if ((uVar17 & 1) == 0) {
                iVar16 = 0x18;
              }
              goto LAB_0037f2dc;
            }
          }
          iVar16 = 0x18;
        }
LAB_0037f2dc:
        iVar27 = 8;
      }
      else if (uVar15 < 0xb) {
        uVar14 = 1 << (ulong)(uVar15 & 0x1f);
        if ((uVar14 & 0x634) != 0) {
          iVar16 = 8;
          goto LAB_0037f2dc;
        }
        if ((uVar14 & 0x14a) == 0) {
          if (uVar15 != 7) goto LAB_0037f470;
          iVar16 = 1;
          iVar27 = 1;
        }
        else {
          iVar16 = 4;
          iVar27 = 4;
        }
      }
      else {
LAB_0037f470:
        FUN_0030f640(&local_a8,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/dynamic_message.cc"
                     ,0xc4);
                    /* try { // try from 0037f488 to 0037f49b has its CatchHandler @ 0037f810 */
        uVar13 = FUN_0030f3ac(&local_a8,"Can\'t get here.");
                    /* try { // try from 0037f49c to 0037f4a3 has its CatchHandler @ 0037f80c */
        FUN_0030f41c(&local_68,uVar13);
        FUN_0030f658(&local_a8);
        iVar16 = 0;
        iVar27 = 0;
      }
      iVar26 = 0;
      if (iVar27 != 0) {
        iVar26 = (int)(uVar19 + iVar27 + -1) / iVar27;
      }
      *(int *)(lVar9 + lVar31 * 4) = iVar26 * iVar27;
      uVar19 = iVar26 * iVar27 + iVar16;
      lVar30 = local_b0;
      do {
        lVar31 = lVar31 + 1;
        lVar21 = lVar21 + 0x98;
        if (*(int *)(lVar30 + 0x68) <= lVar31) goto LAB_0037f4c0;
        lVar24 = *(long *)(lVar30 + 0x28) + lVar21;
        lVar18 = *(long *)(lVar24 + 0x58);
        if (lVar18 == 0) break;
LAB_0037f320:
      } while ((*(int *)(lVar18 + 0x18) != 1) ||
              (*(char *)(**(long **)(lVar18 + 0x20) + 0x41) == '\0'));
    } while( true );
  }
LAB_0037f4c0:
  iVar16 = *(int *)(lVar30 + 0x6c);
  if (0 < iVar16) {
    lVar31 = 0;
    puVar22 = (undefined8 *)(*(long *)(lVar30 + 0x30) + 0x20);
    if (*(int *)(*(long *)(lVar30 + 0x30) + 0x18) == 1) goto LAB_0037f52c;
    do {
      uVar14 = uVar19 + 0xe;
      if (-1 < (int)(uVar19 + 7)) {
        uVar14 = uVar19 + 7;
      }
      uVar19 = (uVar14 & 0xfffffff8) + 8;
      *(uint *)(lVar9 + (long)((int)lVar31 + *(int *)(lVar30 + 0x68)) * 4) = uVar14 & 0xfffffff8;
      iVar16 = *(int *)(lVar30 + 0x6c);
      puVar23 = puVar22;
      do {
        lVar31 = lVar31 + 1;
        puVar22 = puVar23 + 6;
        if (iVar16 <= lVar31) {
          puVar11[0x12] = 0xffffffff;
          *puVar11 = uVar19;
          if (iVar16 < 1) goto LAB_0037f6f0;
          lVar31 = 0;
          goto LAB_0037f5a4;
        }
        if (*(int *)(puVar23 + 5) != 1) break;
LAB_0037f52c:
        puVar23 = puVar22;
      } while (*(char *)(*(long *)*puVar22 + 0x41) != '\0');
    } while( true );
  }
  puVar11[0x12] = 0xffffffff;
  *puVar11 = uVar19;
LAB_0037f6f0:
  uVar14 = uVar19 + 0xe;
  if (-1 < (int)(uVar19 + 7)) {
    uVar14 = uVar19 + 7;
  }
  plVar10 = (long *)FUN_002ee6d0((long)(int)(uVar14 & 0xfffffff8));
  memset(plVar10,0,(long)(int)(uVar14 & 0xfffffff8));
  puVar7 = PTR_DAT_04373c78;
  *(undefined4 *)(plVar10 + 4) = 0;
  *plVar10 = (long)(puVar7 + 0x10);
  plVar10[1] = 0;
  plVar10[2] = (long)puVar11;
  plVar10[3] = 0;
  *(long **)(puVar11 + 0x10) = plVar10;
  FUN_0037ea64(plVar10,0);
  if (0 < iVar25) {
    FUN_003806d4(*(undefined8 *)(puVar11 + 8),*(undefined8 *)(puVar11 + 10),plVar10);
  }
  local_a8 = *(undefined ***)(puVar11 + 0x10);
  uStack_98 = *(undefined8 *)(puVar11 + 0xc);
  local_a0 = *(long **)(puVar11 + 10);
  local_90 = puVar11[1];
  uStack_8c = 8;
  local_88 = NEON_rev64(*(undefined8 *)(puVar11 + 2),4);
  local_80 = *puVar11;
  local_7c = puVar11[0x12];
  lVar9 = FUN_002e2e80(PTR_FUN_04373078,0x50);
  if (lVar9 != 0) {
    FUN_00380cfc(lVar9,*(undefined8 *)(puVar11 + 8),&local_a8,*(undefined8 *)(puVar11 + 6),param_1);
  }
  lVar30 = *(long *)(puVar11 + 0xe);
  *(long *)(puVar11 + 0xe) = lVar9;
  if (lVar30 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_0037fe70(plVar10);
  return plVar10;
LAB_0037f210:
  iVar27 = iVar16 + 0x3e;
  if (-1 < iVar16 + 0x1f) {
    iVar27 = iVar16 + 0x1f;
  }
  iVar27 = (iVar27 >> 5) * 4;
  uVar15 = iVar27 + 0x2f;
  uVar19 = iVar27 + 0x36;
  if (-1 < (int)uVar15) {
    uVar19 = uVar15;
  }
  uVar19 = uVar19 & 0xfffffff8;
  if (iVar16 < 1) {
    uVar19 = 0x28;
  }
  goto LAB_0037f248;
LAB_0037f5a4:
  do {
    lVar21 = *(long *)(lVar30 + 0x30);
    iVar16 = *(int *)(lVar21 + lVar31 * 0x30 + 0x18);
    if (iVar16 == 1) {
      if (*(char *)(**(long **)(lVar21 + lVar31 * 0x30 + 0x20) + 0x41) == '\0') goto LAB_0037f5bc;
    }
    else if (0 < iVar16) {
LAB_0037f5bc:
      lVar24 = 0;
      do {
        lVar30 = *(long *)(*(long *)(lVar21 + lVar31 * 0x30 + 0x20) + lVar24 * 8);
        puVar12 = *(ulong **)(lVar30 + 0x30);
        if (puVar12 != (ulong *)0x0) {
          puStack_70 = PTR_LAB_04373a98;
          local_78 = lVar30;
          if (*puVar12 != 0xffffffffffffffff) {
            local_a0 = &local_78;
            local_a8 = &puStack_70;
            local_68 = &local_a8;
            std::__call_once(puVar12,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
        }
        if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(lVar30 + 0x38) * 4) - 1U < 10) {
          iVar16 = *(int *)(&DAT_039faf00 +
                           (long)(int)(*(int *)(PTR_DAT_04373ab0 +
                                               (ulong)*(uint *)(lVar30 + 0x38) * 4) - 1U) * 4);
        }
        else {
          FUN_0030f640(&local_a8,3,
                       "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/dynamic_message.cc"
                       ,0xea);
                    /* try { // try from 0037f690 to 0037f69f has its CatchHandler @ 0037f818 */
          uVar13 = FUN_0030f3ac(&local_a8,"Can\'t get here.");
                    /* try { // try from 0037f6a0 to 0037f6a7 has its CatchHandler @ 0037f814 */
          FUN_0030f41c(&local_68,uVar13);
          FUN_0030f658(&local_a8);
          iVar16 = 0;
        }
        iVar27 = 0;
        if (iVar16 != 0) {
          iVar27 = (int)(uVar19 + iVar16 + -1) / iVar16;
        }
        if (*(char *)(lVar30 + 0x43) == '\0') {
          plVar10 = (long *)(*(long *)(lVar30 + 0x50) + 0x28);
        }
        else if (*(long *)(lVar30 + 0x60) == 0) {
          plVar10 = (long *)(*(long *)(lVar30 + 0x28) + 0x80);
        }
        else {
          plVar10 = (long *)(*(long *)(lVar30 + 0x60) + 0x50);
        }
        uVar14 = (int)((ulong)(lVar30 - *plVar10) >> 3) * 0x286bca1b;
        uVar19 = iVar27 * iVar16 + iVar16;
        *(int *)(lVar9 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2)) =
             iVar27 * iVar16;
        lVar21 = *(long *)(local_b0 + 0x30);
        lVar24 = lVar24 + 1;
        lVar30 = local_b0;
      } while (lVar24 < *(int *)(lVar21 + lVar31 * 0x30 + 0x18));
    }
    lVar31 = lVar31 + 1;
  } while (lVar31 < *(int *)(lVar30 + 0x6c));
  goto LAB_0037f6f0;
}


