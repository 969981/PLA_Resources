/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00359a14; name: FUN_00359a14
 */


void FUN_00359a14(undefined8 param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  void *__dest;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  __tree_node_base *p_Var12;
  bool bVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  byte *__s1;
  byte *__s2;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  void *pvVar24;
  ulong uVar25;
  __tree_node_base *p_Var26;
  undefined8 uVar27;
  byte local_128 [16];
  undefined8 local_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  undefined8 *local_b8;
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  __tree_node_base *local_90;
  __tree_node_base *local_88;
  long local_80;
  undefined8 local_78;
  ulong local_70;
  long local_68;
  
  pbVar14 = (byte *)*param_3;
  bVar3 = *pbVar14;
  pbVar18 = *(byte **)(pbVar14 + 0x10);
  if ((bVar3 & 1) == 0) {
    pbVar18 = pbVar14 + 1;
  }
  if ((bVar3 & 1) == 0) {
    local_70 = 0;
    local_68 = 0;
    local_78 = 0;
    uVar21 = (ulong)(bVar3 >> 1);
    goto joined_r0x00359a64;
  }
  uVar21 = *(ulong *)(pbVar14 + 8);
  if ((long)uVar21 < 0) {
    FUN_0031f284(uVar21,"size_t to int conversion");
    local_70 = 0;
    local_68 = 0;
    local_78 = 0;
  }
  else {
    local_70 = 0;
    local_68 = 0;
    local_78 = 0;
    if (0 < (long)uVar21) {
      do {
        bVar3 = *pbVar18;
        if (bVar3 != 0x5f) {
          uVar20 = bVar3 + 0x20;
          if (0x19 < bVar3 - 0x41) {
            uVar20 = (uint)bVar3;
          }
                    /* try { // try from 00359ab0 to 00359ab7 has its CatchHandler @ 0035a484 */
          FUN_002e6a9c(&local_78,uVar20);
        }
        pbVar18 = pbVar18 + 1;
        uVar21 = uVar21 - 1;
joined_r0x00359a64:
      } while (uVar21 != 0);
    }
  }
  puVar5 = PTR_LAB_04373088;
  local_90 = (__tree_node_base *)&local_88;
  local_88 = (__tree_node_base *)0x0;
  local_80 = 0;
  if (0 < *(int *)((long)param_3 + 0x2c)) {
    pvVar24 = (void *)((ulong)&local_d0 | 1);
    uVar21 = 0;
LAB_00359b28:
    lVar22 = param_3[6];
    puVar23 = (undefined8 *)(lVar22 + uVar21 * 0x28);
    pbVar14 = (byte *)*puVar23;
    bVar3 = *pbVar14;
    pbVar18 = *(byte **)(pbVar14 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar18 = pbVar14 + 1;
    }
    if ((bVar3 & 1) == 0) {
      uVar25 = (ulong)(bVar3 >> 1);
      if (uVar25 != 0) goto LAB_00359bc4;
LAB_00359b54:
      uVar15 = 0;
      uVar19 = 0;
      uVar17 = (local_78 & 0xff) >> 1;
      bVar6 = true;
      if ((local_78 & 1) == 0) goto LAB_00359bec;
LAB_00359b6c:
      if (local_70 <= uVar19) goto LAB_00359b78;
LAB_00359bf4:
      uStack_c8 = 0;
      local_c0 = (void *)0x0;
      local_d0 = 0;
      if (pbVar18 == (byte *)0x0) goto LAB_00359e64;
      if (0xffffffffffffffef < uVar25) {
                    /* try { // try from 0035a38c to 0035a3cb has its CatchHandler @ 0035a3dc */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
LAB_00359c74:
      local_c0 = (void *)0x0;
      uStack_c8 = 0;
      local_d0 = 0;
      if (uVar25 < 0x17) {
        local_d0 = (ulong)(byte)((int)uVar25 << 1);
        pvVar8 = pvVar24;
        if (!bVar6) goto LAB_00359cbc;
      }
      else {
        uVar15 = uVar25 + 0x10 & 0xfffffffffffffff0;
        pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar15);
        local_d0 = uVar15 | 1;
        uStack_c8 = uVar25;
        local_c0 = pvVar8;
LAB_00359cbc:
        memcpy(pvVar8,pbVar18,uVar25);
      }
      *(undefined1 *)((long)pvVar8 + uVar25) = 0;
    }
    else {
      uVar25 = *(ulong *)(pbVar14 + 8);
      if ((long)uVar25 < 0) {
                    /* try { // try from 00359cd4 to 00359ce3 has its CatchHandler @ 0035a440 */
        FUN_0031f284(uVar25,"size_t to int conversion");
        uVar20 = (uint)(byte)local_78;
        uVar17 = (ulong)((byte)local_78 >> 1);
        uVar19 = 0;
        uVar15 = 0;
        if ((local_78 & 1) == 0) goto LAB_00359d08;
LAB_00359bd4:
        uVar19 = 0;
        uVar16 = 0;
        uVar15 = uVar16;
        if (local_70 != 0) {
          do {
            if ((long)uVar25 <= (long)uVar16) goto LAB_0035a344;
            bVar3 = pbVar18[uVar16];
            if (bVar3 != 0x5f) {
              bVar4 = bVar3 + 0x20;
              if (0x19 < bVar3 - 0x41) {
                bVar4 = bVar3;
              }
              if (*(byte *)(local_68 + uVar19) != bVar4) goto LAB_00359d94;
              uVar19 = uVar19 + 1;
            }
            uVar16 = uVar16 + 1;
            uVar15 = uVar25;
          } while ((uVar25 != uVar16) && (uVar15 = uVar16, uVar19 < local_70));
        }
        bVar6 = false;
        if ((uVar20 & 1) != 0) goto LAB_00359b6c;
LAB_00359bec:
        if (uVar19 < uVar17) goto LAB_00359bf4;
      }
      else {
        if (uVar25 == 0) goto LAB_00359b54;
LAB_00359bc4:
        uVar17 = (local_78 & 0xff) >> 1;
        uVar19 = 0;
        uVar15 = 0;
        uVar20 = (uint)(local_78 & 0xff);
        if ((local_78 & 1) != 0) goto LAB_00359bd4;
LAB_00359d08:
        do {
          if (uVar17 <= uVar19) {
            bVar6 = false;
            if (uVar17 <= uVar19) goto LAB_00359b78;
            goto LAB_00359bf4;
          }
          if ((long)uVar25 <= (long)uVar15) {
LAB_0035a344:
                    /* try { // try from 0035a344 to 0035a383 has its CatchHandler @ 0035a3dc */
                    /* WARNING: Subroutine does not return */
            __assert_fail("i < length_",
                          "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/stubs/stringpiece.h"
                          ,0x116,"operator[]");
          }
          bVar3 = pbVar18[uVar15];
          if (bVar3 != 0x5f) {
            bVar4 = bVar3 + 0x20;
            if (0x19 < bVar3 - 0x41) {
              bVar4 = bVar3;
            }
            if (*(byte *)((long)&local_78 + uVar19 + 1) != bVar4) goto LAB_00359d94;
            uVar19 = uVar19 + 1;
          }
          uVar15 = uVar15 + 1;
        } while (uVar25 != uVar15);
        bVar6 = false;
        uVar15 = uVar25;
        if (uVar19 < uVar17) goto LAB_00359bf4;
      }
LAB_00359b78:
      if (uVar15 < uVar25) {
        do {
          if ((long)uVar25 <= (long)uVar15) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("i < length_",
                          "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/stubs/stringpiece.h"
                          ,0x116,"operator[]");
          }
          if (pbVar18[uVar15] != 0x5f) goto LAB_00359c58;
          uVar15 = uVar15 + 1;
        } while (uVar25 != uVar15);
joined_r0x00359bac:
        if (0xffffffffffffffef < uVar25) {
          local_c0 = (void *)0x0;
          uStack_c8 = 0;
          local_d0 = 0;
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        goto LAB_00359c74;
      }
LAB_00359c58:
      uVar19 = uVar25 - uVar15;
      if (uVar19 == 0) {
        uStack_c8 = 0;
        local_c0 = (void *)0x0;
        local_d0 = 0;
        if (pbVar18 != (byte *)0x0) goto joined_r0x00359bac;
      }
      else {
        if ((long)uVar25 < (long)uVar15) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("length_ >= n",
                        "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/stubs/stringpiece.h"
                        ,0x11b,"remove_prefix");
        }
        uStack_c8 = 0;
        local_c0 = (void *)0x0;
        local_d0 = 0;
        if (pbVar18 + uVar15 != (byte *)0x0) {
          if (0xffffffffffffffef < uVar19) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar19 < 0x17) {
            local_d0 = (ulong)(byte)((int)uVar19 << 1);
            pvVar8 = pvVar24;
            if (uVar19 != 0) goto LAB_00359e50;
          }
          else {
            uVar25 = uVar19 + 0x10 & 0xfffffffffffffff0;
            pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar25);
            local_d0 = uVar25 | 1;
            uStack_c8 = uVar19;
            local_c0 = pvVar8;
LAB_00359e50:
            memcpy(pvVar8,pbVar18 + uVar15,uVar19);
          }
          *(undefined1 *)((long)pvVar8 + uVar19) = 0;
        }
      }
    }
    goto LAB_00359e64;
  }
  FUN_0036d9f8(&local_90,0);
joined_r0x0035a2f8:
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return;
LAB_00359d94:
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  if (0xffffffffffffffef < uVar25) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar25 < 0x17) {
    local_d0 = (ulong)(byte)((int)uVar25 << 1);
    pvVar8 = pvVar24;
  }
  else {
    uVar15 = uVar25 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar15);
    local_d0 = uVar15 | 1;
    uStack_c8 = uVar25;
    local_c0 = pvVar8;
  }
  memcpy(pvVar8,pbVar18,uVar25);
  *(undefined1 *)((long)pvVar8 + uVar25) = 0;
LAB_00359e64:
  uVar25 = local_d0 >> 1 & 0x7f;
  if ((local_d0 & 1) != 0) {
    uVar25 = uStack_c8;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = (void *)0x0;
                    /* try { // try from 00359e80 to 00359e87 has its CatchHandler @ 0035a494 */
  FUN_0030ff7c(&local_a8,uVar25);
  bVar6 = (local_d0 & 1) == 0;
  uVar25 = local_d0 >> 1 & 0x7f;
  if (!bVar6) {
    uVar25 = uStack_c8;
  }
  if (uVar25 != 0) {
    uVar25 = 0;
    bVar13 = true;
    do {
      pvVar8 = pvVar24;
      if (!bVar6) {
        pvVar8 = local_c0;
      }
      bVar3 = *(byte *)((long)pvVar8 + uVar25);
      if (bVar3 == 0x5f) {
        bVar13 = true;
      }
      else {
        uVar20 = (uint)bVar3;
        if (bVar13) {
          uVar1 = uVar20 - 0x20;
          if (0x19 < uVar20 - 0x61) {
            uVar1 = uVar20;
          }
                    /* try { // try from 00359f04 to 00359f27 has its CatchHandler @ 0035a4d0 */
          FUN_002e6a9c(&local_a8,uVar1);
        }
        else {
          uVar1 = uVar20 + 0x20;
          if (0x19 < bVar3 - 0x41) {
            uVar1 = uVar20;
          }
          FUN_002e6a9c(&local_a8,uVar1);
        }
        bVar13 = false;
      }
      bVar6 = (local_d0 & 1) == 0;
      uVar25 = uVar25 + 1;
      uVar15 = local_d0 >> 1 & 0x7f;
      if (!bVar6) {
        uVar15 = uStack_c8;
      }
    } while (uVar25 < uVar15);
  }
  if ((local_d0 & 1) != 0) {
    FUN_002e2ea0(puVar5,local_c0);
  }
  pvVar8 = local_98;
  uVar25 = uStack_a0;
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  local_d0 = 0;
  if ((local_a8 & 1) == 0) {
    local_c0 = local_98;
    uStack_c8 = uStack_a0;
    local_d0 = local_a8;
  }
  else {
    if (0xffffffffffffffef < uStack_a0) {
                    /* try { // try from 0035a384 to 0035a38b has its CatchHandler @ 0035a3cc */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_a0 < 0x17) {
      local_d0 = (ulong)(byte)((int)uStack_a0 << 1);
      __dest = pvVar24;
      if (uStack_a0 != 0) goto LAB_00359fcc;
    }
    else {
      uVar15 = uStack_a0 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar15);
      local_d0 = uVar15 | 1;
      uStack_c8 = uVar25;
      local_c0 = __dest;
LAB_00359fcc:
      memcpy(__dest,pvVar8,uVar25);
    }
    *(undefined1 *)((long)__dest + uVar25) = 0;
  }
                    /* try { // try from 00359fe4 to 00359ff3 has its CatchHandler @ 0035a4a4 */
  local_b8 = puVar23;
  puVar9 = (undefined8 *)FUN_0036da54(&local_90,&local_f0,&local_d0);
  p_Var26 = (__tree_node_base *)*puVar9;
  if (p_Var26 == (__tree_node_base *)0x0) {
    p_Var26 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
    *(void **)(p_Var26 + 0x30) = local_c0;
    *(ulong *)(p_Var26 + 0x28) = uStack_c8;
    *(ulong *)(p_Var26 + 0x20) = local_d0;
    uStack_c8 = 0;
    local_c0 = (void *)0x0;
    local_d0 = 0;
    *(undefined8 **)(p_Var26 + 0x38) = local_b8;
    *(undefined8 *)p_Var26 = 0;
    *(undefined8 *)(p_Var26 + 8) = 0;
    *(ulong *)(p_Var26 + 0x10) = local_f0;
    *puVar9 = p_Var26;
    if (*(__tree_node_base **)local_90 == (__tree_node_base *)0x0) {
      p_Var12 = p_Var26;
    }
    else {
      p_Var12 = (__tree_node_base *)*puVar9;
      local_90 = *(__tree_node_base **)local_90;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_88,p_Var12);
    local_80 = local_80 + 1;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((local_d0 & 1) != 0) {
    FUN_002e2ea0(puVar5,local_c0);
  }
  if (bVar6) goto joined_r0x0035a28c;
  puVar9 = *(undefined8 **)(p_Var26 + 0x38);
  pbVar14 = (byte *)*puVar23;
  pbVar18 = (byte *)*puVar9;
  bVar3 = *pbVar18;
  uVar25 = (ulong)(bVar3 >> 1);
  __n = uVar25;
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(pbVar18 + 8);
  }
  bVar4 = *pbVar14;
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(pbVar14 + 8);
  }
  if (__n == sVar2) {
    __s1 = *(byte **)(pbVar18 + 0x10);
    if ((bVar3 & 1) == 0) {
      __s1 = pbVar18 + 1;
    }
    __s2 = *(byte **)(pbVar14 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = pbVar14 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        do {
          pbVar18 = pbVar18 + 1;
          if (*pbVar18 != *__s2) goto LAB_0035a148;
          uVar25 = uVar25 - 1;
          __s2 = __s2 + 1;
        } while (uVar25 != 0);
      }
      goto joined_r0x0035a28c;
    }
    if ((__n == 0) || (iVar7 = memcmp(__s1,__s2,__n), iVar7 == 0)) goto joined_r0x0035a28c;
  }
LAB_0035a148:
  if (*(int *)(puVar9 + 2) != *(int *)(lVar22 + uVar21 * 0x28 + 0x10)) {
                    /* try { // try from 0035a15c to 0035a16f has its CatchHandler @ 0035a430 */
    FUN_0034b2f0(local_128,"Enum name ",pbVar14);
                    /* try { // try from 0035a170 to 0035a183 has its CatchHandler @ 0035a420 */
    puVar10 = (ulong *)FUN_002e4094(local_128," has the same name as ",0x16);
    uStack_108 = puVar10[1];
    local_110 = *puVar10;
    local_100 = puVar10[2];
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
                    /* try { // try from 0035a19c to 0035a1cf has its CatchHandler @ 0035a458 */
    puVar23 = (undefined8 *)FUN_0035a530(&local_90,&local_a8);
    pbVar14 = *(byte **)*puVar23;
    uVar25 = *(ulong *)(pbVar14 + 8);
    pbVar18 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar18 = pbVar14 + 1;
      uVar25 = (ulong)(*pbVar14 >> 1);
    }
    puVar10 = (ulong *)FUN_002e4094(&local_110,pbVar18,uVar25);
    uStack_e8 = puVar10[1];
    local_f0 = *puVar10;
    local_e0 = puVar10[2];
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
                    /* try { // try from 0035a1e8 to 0035a1fb has its CatchHandler @ 0035a3e4 */
    puVar10 = (ulong *)FUN_002e4094(&local_f0,
                                    " if you ignore case and strip out the enum name prefix (if any). This is error-prone and can lead to undefined behavior. Please avoid doing this. If you are using allow_alias, please assign the same numeric value to both enums."
                                    ,0xe3);
    uStack_c8 = puVar10[1];
    local_d0 = *puVar10;
    local_c0 = (void *)puVar10[2];
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    if ((local_f0 & 1) != 0) {
      FUN_002e2ea0(puVar5,local_e0);
    }
    if ((local_110 & 1) != 0) {
      FUN_002e2ea0(puVar5,local_100);
    }
    if ((local_128[0] & 1) != 0) {
      FUN_002e2ea0(puVar5,local_118);
    }
    uVar27 = *(undefined8 *)(lVar22 + uVar21 * 0x28 + 8);
    if (*(int *)(param_3[2] + 0x3c) == 2) {
                    /* try { // try from 0035a250 to 0035a2e3 has its CatchHandler @ 0035a448 */
      uVar11 = FUN_003664d8(param_2 + 0x18,uVar21 & 0xffffffff);
      FUN_0034e3c0(param_1,uVar27,uVar11,0,&local_d0);
    }
    else {
      uVar11 = FUN_003664d8(param_2 + 0x18,uVar21 & 0xffffffff);
      FUN_0034db00(param_1,uVar27,uVar11,0,&local_d0);
    }
    if ((local_d0 & 1) != 0) {
      FUN_002e2ea0(puVar5,local_c0);
    }
  }
joined_r0x0035a28c:
  if ((local_a8 & 1) != 0) {
    FUN_002e2ea0(puVar5,local_98);
  }
  uVar21 = uVar21 + 1;
  if ((long)*(int *)((long)param_3 + 0x2c) <= (long)uVar21) goto LAB_0035a2e8;
  goto LAB_00359b28;
LAB_0035a2e8:
  FUN_0036d9f8(&local_90,local_88);
  goto joined_r0x0035a2f8;
}


