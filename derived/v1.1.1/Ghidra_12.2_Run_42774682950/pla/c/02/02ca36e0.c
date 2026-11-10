/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ca36e0; name: FUN_02ca36e0
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02ca36e0(long *param_1,__tree_node_base *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  __tree_node_base _Var4;
  size_t __n;
  short sVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  bool bVar11;
  short sVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  uint *puVar17;
  __tree_node_base *p_Var18;
  long *plVar19;
  long *plVar20;
  uint *puVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  ulong *puVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long lVar32;
  char *pcVar33;
  uint uVar34;
  __tree_node_base *p_Var35;
  void *pvVar36;
  void *pvVar37;
  uint *puVar38;
  long *plVar39;
  long *plVar40;
  uint *puVar41;
  void *pvVar42;
  uint *puVar43;
  long *plVar44;
  __tree_node_base *p_Var45;
  long lVar46;
  __tree_node_base *p_Var47;
  long lVar48;
  __tree_node_base *p_Var49;
  undefined4 uVar50;
  float fVar51;
  undefined8 extraout_d0;
  undefined8 uVar52;
  undefined8 extraout_d0_00;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  __tree_node_base *local_138;
  uint *local_130;
  uint *local_128;
  uint *local_120;
  long *local_118;
  long *local_110;
  undefined8 local_108;
  undefined4 local_100;
  uint *local_f8;
  uint *local_f0;
  uint *local_e8;
  uint *local_e0;
  long *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  __tree_node_base *local_a0;
  __tree_node_base *local_98;
  __tree_node_base *local_90;
  __tree_node_base *local_88;
  long *plStack_80;
  __tree_node_base **local_68;
  
  *param_1 = (long)&PTR_FUN_04295650;
  param_1[1] = (long)param_2;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[5] = (long)param_2;
  param_1[6] = 0x2e8ba2e8ba2e8ba;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (long)param_2;
  param_1[0xd] = 0x3ffffffffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  plVar24 = param_1 + 0x17;
  *plVar24 = 0;
  param_1[0x15] = 0;
  param_1[0x13] = (long)param_2;
  param_1[0x14] = 0x3ffffffffffffff;
  puVar10 = PTR_DAT_04379520;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  if ((*puVar10 & 1) == 0) {
    iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar10 = PTR_DAT_04379528;
    if (iVar13 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar32 = DAT_043f1798;
  lVar9 = tpidr_el0;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar14 = lVar32;
  }
  param_1[0x19] = lVar14;
  param_1[0x1a] = 0x666666666666666;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar10 = PTR_DAT_04379528;
    if (iVar13 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar32 = DAT_043f1798;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar14 = lVar32;
  }
  param_1[0x1e] = lVar14;
  param_1[0x1f] = 0x666666666666666;
  plVar40 = param_1 + 0x25;
  plVar39 = param_1 + 0x2c;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  param_1[0x24] = (long)plVar40;
  param_1[0x25] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x26] = param_1[1];
  param_1[0x27] = 0xfffffffffffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = param_1[1];
  param_1[0x2e] = 0xfffffffffffffff;
  param_1[0x2f] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = (long)plVar39;
  param_1[0x31] = 0;
  param_1[0x32] = -1;
  *(undefined2 *)(param_1 + 0x33) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x19a) = 1;
  plVar19 = (long *)param_3[0xb];
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  lVar32 = plVar19[3];
  lVar14 = plVar19[4];
  lVar22 = plVar19[6];
  param_1[0x39] = plVar19[5];
  param_1[0x3a] = lVar22;
  param_1[0x37] = lVar32;
  param_1[0x38] = lVar14;
  param_1[0x34] = *plVar19;
  param_1[0x35] = plVar19[1];
  param_1[0x36] = plVar19[2];
  *plVar19 = 0;
  plVar19[1] = 0;
  plVar19[2] = 0;
  param_1[0x3b] = plVar19[7];
  plVar19[7] = 0;
  param_1[0x40] = 0xfffffffffffffff;
  lVar32 = param_1[2];
  param_1[0x41] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = param_1[1];
  uVar31 = param_3[1];
  uVar52 = extraout_d0;
  if ((ulong)((param_1[4] - lVar32 >> 3) * 0x2e8ba2e8ba2e8ba3) < uVar31) {
    lVar14 = param_1[3];
    plVar19 = param_1 + 5;
    local_e0 = (uint *)0x0;
    local_d8 = plVar19;
    local_f8 = (uint *)(**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],uVar31 * 0x58,8)
    ;
    if (local_f8 == (uint *)0x0) {
      (**(code **)(*(long *)*plVar19 + 0xb8))();
    }
    puVar43 = local_f8 + (lVar14 - lVar32 >> 3) * 2;
    puVar38 = local_f8 + uVar31 * 0x16;
    puVar17 = (uint *)param_1[2];
    puVar41 = (uint *)param_1[3];
    puVar21 = puVar43;
    local_f0 = puVar43;
    local_e8 = puVar43;
    local_e0 = puVar38;
    if (puVar41 == puVar17) {
      local_e8 = puVar17;
    }
    else {
      do {
        puVar21 = puVar21 + -0x16;
        puVar41 = puVar41 + -0x16;
        FUN_02ca8660(plVar19,puVar21,puVar41);
      } while (puVar17 != puVar41);
      puVar17 = (uint *)param_1[2];
      local_e8 = (uint *)param_1[3];
      local_f0 = puVar21;
    }
    param_1[2] = (long)local_f0;
    param_1[3] = (long)puVar43;
    local_e0 = (uint *)param_1[4];
    param_1[4] = (long)puVar38;
    local_f8 = puVar17;
    local_f0 = puVar17;
    uVar52 = FUN_02ca83e4(&local_f8);
    uVar31 = param_3[1];
  }
  if (uVar31 != 0) {
    plVar19 = param_1 + 0x24;
    plVar44 = param_1 + 0x1d;
    uVar31 = 0;
    plVar1 = param_1 + 5;
    do {
      lVar32 = *param_3;
      FUN_0290f77c(&local_f8);
      uVar34 = *(uint *)(lVar32 + uVar31 * 0x28 + 0x18);
      uVar50 = 0x3f800000;
      if ((uVar34 & 1) == 0) {
        if ((uVar34 >> 1 & 1) != 0) goto LAB_02ca3cf8;
LAB_02ca3aa0:
        local_b8 = 0x3f800000;
      }
      else {
        uVar50 = *(undefined4 *)(lVar32 + uVar31 * 0x28 + 0x1c);
        if ((uVar34 >> 1 & 1) == 0) goto LAB_02ca3aa0;
LAB_02ca3cf8:
        local_b8 = *(undefined4 *)(lVar32 + uVar31 * 0x28 + 0x20);
      }
      local_b4 = 0x3f800000;
      if ((uVar34 >> 2 & 1) != 0) {
        local_b4 = *(undefined4 *)(lVar32 + uVar31 * 0x28 + 0x24);
      }
      local_b0 = 0x3f8000003f800000;
      local_c0 = CONCAT44(uVar50,uVar34);
      local_a8 = 0x3f800000;
      local_118 = (long *)param_1[1];
      local_100 = 0;
      local_130 = (uint *)0x0;
      local_128 = (uint *)0x0;
      local_120 = (uint *)0x0;
      local_110 = (long *)0x3fffffffffffffff;
      local_108 = 0;
      puVar29 = (ulong *)(lVar32 + uVar31 * 0x28 + 8);
      FUN_01663fa8(&local_130,*puVar29);
      if (*puVar29 != 0) {
        uVar34 = 1;
        do {
          local_a0 = (__tree_node_base *)
                     CONCAT44(local_a0._4_4_,
                              *(undefined4 *)
                               (*(long *)(lVar32 + uVar31 * 0x28) + (long)(int)(uVar34 - 1) * 4));
          FUN_02ca6008(&local_130,&local_a0);
          uVar15 = (ulong)uVar34;
          uVar34 = uVar34 + 1;
        } while (uVar15 < *puVar29);
      }
      puVar41 = local_e0;
      puVar17 = local_f8;
      if (local_f8 != (uint *)0x0) {
        local_f0 = local_f8;
        lVar14 = (long)local_e8 - (long)local_f8;
        uVar15 = (**(code **)(*(long *)local_e0 + 0xc0))(local_e0);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            FUN_02bcc824(puVar41,puVar17,lVar14,4);
            goto LAB_02ca3bc0;
          }
        }
        (**(code **)(*(long *)puVar41 + 0x18))(puVar41,puVar17,lVar14,4);
      }
LAB_02ca3bc0:
      local_e8 = local_120;
      local_f0 = local_128;
      local_f8 = local_130;
      local_d8 = local_110;
      uStack_d0 = local_108;
      local_e0 = (uint *)local_118;
      local_c8 = local_100;
      local_130 = (uint *)0x0;
      local_128 = (uint *)0x0;
      local_120 = (uint *)0x0;
      pcVar33 = *(char **)(lVar32 + uVar31 * 0x28 + 0x10);
      if (pcVar33 != (char *)0x0) {
        lVar32 = param_1[2];
        lVar14 = param_1[3];
        local_138 = (__tree_node_base *)0x0;
        if (*pcVar33 == '\0') {
          p_Var35 = (__tree_node_base *)FUN_00938550();
          if (p_Var35 != (__tree_node_base *)0x0) {
            (**(code **)(*(long *)p_Var35 + 0x18))(p_Var35);
          }
          if (local_138 != (__tree_node_base *)0x0) {
            lVar22 = *(long *)local_138;
            local_138 = p_Var35;
            (**(code **)(lVar22 + 0x20))();
            p_Var35 = local_138;
          }
        }
        else {
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar52 = *(undefined8 *)PTR_DAT_04379cd8;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar52;
          FUN_02a47cd8(&local_a0,uVar52,pcVar33);
          p_Var35 = local_138;
          local_138 = (__tree_node_base *)0x0;
          if (p_Var35 != (__tree_node_base *)0x0) {
            (**(code **)(*(long *)p_Var35 + 0x20))();
          }
          local_138 = local_a0;
          p_Var35 = local_138;
        }
        local_138 = p_Var35;
        local_68 = &local_138;
        if ((long *)*plVar40 == (long *)0x0) {
          plVar28 = plVar40;
          plVar20 = plVar40;
        }
        else {
          if (local_138 == (__tree_node_base *)0x0) {
            p_Var35 = (__tree_node_base *)PTR_DAT_04379c88;
          }
          else {
            p_Var35 = local_138 + 0x58;
          }
          plVar28 = (long *)*plVar40;
          plVar20 = param_1 + 0x25;
          while( true ) {
            while( true ) {
              puVar29 = (ulong *)PTR_DAT_04379c88;
              if (plVar28[4] != 0) {
                puVar29 = (ulong *)(plVar28[4] + 0x58);
              }
              if (*(ulong *)p_Var35 < *puVar29) break;
              if (*(ulong *)p_Var35 <= *puVar29) goto LAB_02ca3d18;
              plVar20 = plVar28 + 1;
              if ((long *)*plVar20 == (long *)0x0) goto LAB_02ca3d18;
              plVar28 = (long *)*plVar20;
            }
            plVar20 = plVar28;
            if ((long *)*plVar28 == (long *)0x0) break;
            plVar28 = (long *)*plVar28;
          }
        }
LAB_02ca3d18:
        p_Var35 = (__tree_node_base *)*plVar20;
        if (p_Var35 == (__tree_node_base *)0x0) {
          FUN_02ca8778(&local_a0,plVar19,&local_68);
          p_Var35 = local_a0;
          *(long **)(local_a0 + 0x10) = plVar28;
          *(undefined8 *)local_a0 = 0;
          *(undefined8 *)(local_a0 + 8) = 0;
          *plVar20 = (long)local_a0;
          p_Var18 = local_a0;
          if (*(long *)*plVar19 != 0) {
            *plVar19 = *(long *)*plVar19;
            p_Var18 = (__tree_node_base *)*plVar20;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((__tree_node_base *)param_1[0x25],p_Var18);
          param_1[0x2a] = param_1[0x2a] + 1;
        }
        *(long *)(p_Var35 + 0x28) = (lVar14 - lVar32 >> 3) * 0x2e8ba2e8ba2e8ba3;
        if (local_138 != (__tree_node_base *)0x0) {
          (**(code **)(*(long *)local_138 + 0x20))();
        }
      }
      puVar17 = local_f0;
      plVar28 = (long *)param_3[10];
      if ((plVar28 != (long *)0x0) && (local_f8 != local_f0)) {
        uVar15 = plVar28[1];
        puVar41 = local_f8;
joined_r0x02ca3db0:
        if (uVar15 != 0) {
          uVar26 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
          uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
          uVar34 = *puVar41;
          uVar25 = (ulong)(short)uVar34;
          uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar26 < 2) {
            uVar27 = uVar15 - 1 & uVar25;
          }
          else {
            uVar27 = uVar25;
            if (uVar15 <= uVar25) {
              uVar27 = 0;
              if (uVar15 != 0) {
                uVar27 = uVar25 / uVar15;
              }
              uVar27 = uVar25 - uVar27 * uVar15;
            }
          }
          plVar28 = *(long **)(*plVar28 + uVar27 * 8);
          if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
            if (uVar26 < 2) {
              do {
                if (plVar28[1] == uVar25) {
                  if ((uint)*(ushort *)(plVar28 + 2) == (uVar34 & 0xffff)) goto LAB_02ca3ea0;
                }
                else if ((plVar28[1] & uVar15 - 1) != uVar27) break;
                plVar28 = (long *)*plVar28;
              } while (plVar28 != (long *)0x0);
            }
            else {
              do {
                uVar26 = plVar28[1];
                if (uVar26 == uVar25) {
                  if ((uint)*(ushort *)(plVar28 + 2) == (uVar34 & 0xffff)) goto LAB_02ca3ea0;
                }
                else {
                  if (uVar15 <= uVar26) {
                    uVar6 = 0;
                    if (uVar15 != 0) {
                      uVar6 = uVar26 / uVar15;
                    }
                    uVar26 = uVar26 - uVar6 * uVar15;
                  }
                  if (uVar26 != uVar27) break;
                }
                plVar28 = (long *)*plVar28;
              } while (plVar28 != (long *)0x0);
            }
          }
        }
        goto LAB_02ca44e0;
      }
LAB_02ca460c:
      uVar15 = param_1[3];
      if (uVar15 < (ulong)param_1[4]) {
        uVar52 = FUN_02ca8660(plVar1,uVar15,&local_f8);
        param_1[3] = param_1[3] + 0x58;
        puVar17 = local_130;
        plVar28 = local_118;
      }
      else {
        lVar32 = (long)(uVar15 - param_1[2]) >> 3;
        uVar15 = param_1[6];
        if (0x7ffffffffffffffe < uVar15) {
          uVar15 = 0x7fffffffffffffff;
        }
        uVar26 = lVar32 * 0x2e8ba2e8ba2e8ba3 + 1;
        if (uVar15 < uVar26) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar14 = param_1[4] - param_1[2] >> 3;
        uVar25 = lVar14 * 0x5d1745d1745d1746;
        local_88 = (__tree_node_base *)0x0;
        if (uVar26 <= uVar25) {
          uVar26 = uVar25;
        }
        if ((ulong)(lVar14 * 0x2e8ba2e8ba2e8ba3) < uVar15 >> 1) {
          uVar15 = uVar26;
        }
        plStack_80 = plVar1;
        if (uVar15 == 0) {
          p_Var35 = (__tree_node_base *)0x0;
        }
        else {
          p_Var35 = (__tree_node_base *)
                    (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar15 * 0x58,8);
          if (p_Var35 == (__tree_node_base *)0x0) {
            (**(code **)(*(long *)*plVar1 + 0xb8))();
          }
        }
        p_Var47 = p_Var35 + lVar32 * 8;
        local_a0 = p_Var35;
        local_98 = p_Var47;
        local_88 = p_Var35 + uVar15 * 0x58;
        FUN_02ca8660(plVar1,p_Var47,&local_f8);
        p_Var18 = p_Var47 + 0x58;
        p_Var45 = (__tree_node_base *)param_1[2];
        p_Var49 = (__tree_node_base *)param_1[3];
        local_90 = p_Var18;
        if (p_Var49 == p_Var45) {
          local_90 = p_Var45;
        }
        else {
          do {
            p_Var47 = p_Var47 + -0x58;
            p_Var49 = p_Var49 + -0x58;
            FUN_02ca8660(plVar1,p_Var47,p_Var49);
          } while (p_Var45 != p_Var49);
          p_Var45 = (__tree_node_base *)param_1[2];
          local_90 = (__tree_node_base *)param_1[3];
        }
        param_1[2] = (long)p_Var47;
        param_1[3] = (long)p_Var18;
        local_88 = (__tree_node_base *)param_1[4];
        param_1[4] = (long)(p_Var35 + uVar15 * 0x58);
        local_a0 = p_Var45;
        local_98 = p_Var45;
        uVar52 = FUN_02ca83e4(&local_a0);
        puVar17 = local_130;
        plVar28 = local_118;
      }
      local_130 = puVar17;
      local_118 = plVar28;
      puVar41 = local_f8;
      puVar21 = local_e0;
      if (puVar17 != (uint *)0x0) {
        lVar32 = (long)local_120 - (long)puVar17;
        local_128 = puVar17;
        uVar15 = (**(code **)(*plVar28 + 0xc0))(plVar28);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            uVar52 = FUN_02bcc824(plVar28,puVar17,lVar32,4);
            puVar41 = local_f8;
            puVar21 = local_e0;
            goto joined_r0x02ca47f4;
          }
        }
        uVar52 = (**(code **)(*plVar28 + 0x18))(plVar28,puVar17,lVar32,4);
        puVar41 = local_f8;
        puVar21 = local_e0;
      }
joined_r0x02ca47f4:
      local_f8 = puVar41;
      local_e0 = puVar21;
      if (puVar41 != (uint *)0x0) {
        lVar32 = (long)local_e8 - (long)puVar41;
        local_f0 = puVar41;
        uVar15 = (**(code **)(*(long *)puVar21 + 0xc0))(puVar21);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            uVar52 = FUN_02bcc824(puVar21,puVar41,lVar32,4);
            goto LAB_02ca4878;
          }
        }
        uVar52 = (**(code **)(*(long *)puVar21 + 0x18))(puVar21,puVar41,lVar32,4);
      }
LAB_02ca4878:
      uVar31 = (ulong)((int)uVar31 + 1);
    } while (uVar31 < (ulong)param_3[1]);
  }
  lVar32 = param_1[9];
  uVar31 = param_3[3];
  if ((ulong)(param_1[0xb] - lVar32 >> 6) < uVar31) {
    plVar24 = param_1 + 0xc;
    lVar14 = param_1[10];
    local_e0 = (uint *)0x0;
    local_d8 = plVar24;
    puVar17 = (uint *)(**(code **)(*(long *)param_1[0xc] + 0x10))
                                ((long *)param_1[0xc],uVar31 << 6,8);
    if (puVar17 == (uint *)0x0) {
      (**(code **)(*(long *)*plVar24 + 0xb8))();
    }
    puVar41 = puVar17 + (lVar14 - lVar32 >> 6) * 0x10;
    puVar21 = (uint *)param_1[9];
    puVar43 = (uint *)param_1[10];
    puVar38 = puVar41;
    local_f8 = puVar17;
    local_f0 = puVar41;
    local_e8 = puVar41;
    local_e0 = puVar17 + uVar31 * 0x10;
    if (puVar43 == puVar21) {
      local_e8 = puVar21;
    }
    else {
      do {
        puVar38 = puVar38 + -0x10;
        puVar43 = puVar43 + -0x10;
        FUN_02ca9390(plVar24,puVar38,puVar43);
      } while (puVar21 != puVar43);
      puVar21 = (uint *)param_1[9];
      local_e8 = (uint *)param_1[10];
      local_f0 = puVar38;
    }
    param_1[9] = (long)local_f0;
    param_1[10] = (long)puVar41;
    local_e0 = (uint *)param_1[0xb];
    param_1[0xb] = (long)(puVar17 + uVar31 * 0x10);
    local_f8 = puVar21;
    local_f0 = puVar21;
    uVar52 = FUN_02ca9114(&local_f8);
    uVar31 = param_3[3];
  }
  puVar10 = PTR_DAT_04379c88;
  if (uVar31 != 0) {
    plVar24 = param_1 + 0x2b;
    uVar31 = 0;
    plVar40 = param_1 + 0xc;
    do {
      lVar32 = param_3[2];
      FUN_0290f77c(&local_f8);
      plVar19 = (long *)(lVar32 + uVar31 * 0x20);
      local_c0 = CONCAT44(0x3f800000,(int)plVar19[3]);
      local_118 = (long *)param_1[1];
      local_120 = (uint *)0x0;
      local_130 = (uint *)0x0;
      local_128 = (uint *)0x0;
      local_110 = (long *)0x3fffffffffffffff;
      local_108 = 0;
      local_100 = 0;
      puVar29 = (ulong *)(plVar19 + 1);
      FUN_01663fa8(&local_130,*puVar29);
      if (*puVar29 != 0) {
        uVar34 = 1;
        do {
          local_a0 = (__tree_node_base *)
                     CONCAT44(local_a0._4_4_,*(undefined4 *)(*plVar19 + (long)(int)(uVar34 - 1) * 4)
                             );
          FUN_02ca6008(&local_130,&local_a0);
          uVar15 = (ulong)uVar34;
          uVar34 = uVar34 + 1;
        } while (uVar15 < *puVar29);
      }
      puVar41 = local_e0;
      puVar17 = local_f8;
      if (local_f8 != (uint *)0x0) {
        local_f0 = local_f8;
        lVar32 = (long)local_e8 - (long)local_f8;
        uVar15 = (**(code **)(*(long *)local_e0 + 0xc0))(local_e0);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            FUN_02bcc824(puVar41,puVar17,lVar32,4);
            goto LAB_02ca4c88;
          }
        }
        (**(code **)(*(long *)puVar41 + 0x18))(puVar41,puVar17,lVar32,4);
      }
LAB_02ca4c88:
      local_e8 = local_120;
      local_f0 = local_128;
      local_f8 = local_130;
      local_e0 = (uint *)local_118;
      local_c8 = local_100;
      local_d8 = local_110;
      uStack_d0 = local_108;
      local_130 = (uint *)0x0;
      local_128 = (uint *)0x0;
      local_120 = (uint *)0x0;
      pcVar33 = (char *)plVar19[2];
      if (pcVar33 != (char *)0x0) {
        lVar32 = param_1[9];
        lVar14 = param_1[10];
        local_138 = (__tree_node_base *)0x0;
        if (*pcVar33 == '\0') {
          p_Var35 = (__tree_node_base *)FUN_00938550();
          if (p_Var35 != (__tree_node_base *)0x0) {
            (**(code **)(*(long *)p_Var35 + 0x18))(p_Var35);
          }
          if (local_138 != (__tree_node_base *)0x0) {
            lVar22 = *(long *)local_138;
            local_138 = p_Var35;
            (**(code **)(lVar22 + 0x20))();
            p_Var35 = local_138;
          }
        }
        else {
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar52 = *(undefined8 *)PTR_DAT_04379cd8;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar52;
          FUN_02a47cd8(&local_a0,uVar52,pcVar33);
          p_Var35 = local_138;
          local_138 = (__tree_node_base *)0x0;
          if (p_Var35 != (__tree_node_base *)0x0) {
            (**(code **)(*(long *)p_Var35 + 0x20))();
          }
          local_138 = local_a0;
          p_Var35 = local_138;
        }
        local_138 = p_Var35;
        local_68 = &local_138;
        if ((long *)*plVar39 == (long *)0x0) {
          plVar19 = plVar39;
          plVar44 = plVar39;
        }
        else {
          if (local_138 == (__tree_node_base *)0x0) {
            p_Var35 = (__tree_node_base *)puVar10;
          }
          else {
            p_Var35 = local_138 + 0x58;
          }
          plVar19 = (long *)*plVar39;
          plVar44 = param_1 + 0x2c;
          while( true ) {
            while( true ) {
              puVar29 = (ulong *)puVar10;
              if (plVar19[4] != 0) {
                puVar29 = (ulong *)(plVar19[4] + 0x58);
              }
              if (*(ulong *)p_Var35 < *puVar29) break;
              if (*(ulong *)p_Var35 <= *puVar29) goto LAB_02ca4dac;
              plVar44 = plVar19 + 1;
              if ((long *)*plVar44 == (long *)0x0) goto LAB_02ca4dac;
              plVar19 = (long *)*plVar44;
            }
            plVar44 = plVar19;
            if ((long *)*plVar19 == (long *)0x0) break;
            plVar19 = (long *)*plVar19;
          }
        }
LAB_02ca4dac:
        p_Var35 = (__tree_node_base *)*plVar44;
        if (p_Var35 == (__tree_node_base *)0x0) {
          FUN_02ca8778(&local_a0,plVar24,&local_68);
          p_Var35 = local_a0;
          *(long **)(local_a0 + 0x10) = plVar19;
          *(undefined8 *)local_a0 = 0;
          *(undefined8 *)(local_a0 + 8) = 0;
          *plVar44 = (long)local_a0;
          p_Var18 = local_a0;
          if (*(long *)*plVar24 != 0) {
            *plVar24 = *(long *)*plVar24;
            p_Var18 = (__tree_node_base *)*plVar44;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((__tree_node_base *)param_1[0x2c],p_Var18);
          param_1[0x31] = param_1[0x31] + 1;
        }
        *(long *)(p_Var35 + 0x28) = lVar14 - lVar32 >> 6;
        if (local_138 != (__tree_node_base *)0x0) {
          (**(code **)(*(long *)local_138 + 0x20))();
        }
      }
      uVar15 = param_1[10];
      if (uVar15 < (ulong)param_1[0xb]) {
        uVar52 = FUN_02ca9390(plVar40,uVar15,&local_f8);
        param_1[10] = param_1[10] + 0x40;
      }
      else {
        uVar26 = param_1[0xd];
        lVar32 = (long)(uVar15 - param_1[9]) >> 6;
        uVar15 = lVar32 + 1;
        if (0x7ffffffffffffffe < uVar26) {
          uVar26 = 0x7fffffffffffffff;
        }
        if (uVar26 < uVar15) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar14 = param_1[0xb] - param_1[9];
        if ((ulong)(lVar14 >> 6) < uVar26 >> 1) {
          uVar25 = lVar14 >> 5;
          uVar26 = uVar15;
          if (uVar15 <= uVar25) {
            uVar26 = uVar25;
          }
        }
        local_88 = (__tree_node_base *)0x0;
        plStack_80 = plVar40;
        if (uVar26 == 0) {
          p_Var35 = (__tree_node_base *)0x0;
        }
        else {
          p_Var35 = (__tree_node_base *)
                    (**(code **)(*(long *)*plVar40 + 0x10))((long *)*plVar40,uVar26 << 6,8);
          if (p_Var35 == (__tree_node_base *)0x0) {
            (**(code **)(*(long *)*plVar40 + 0xb8))();
          }
        }
        p_Var45 = p_Var35 + lVar32 * 0x40;
        local_a0 = p_Var35;
        local_98 = p_Var45;
        local_88 = p_Var35 + uVar26 * 0x40;
        FUN_02ca9390(plVar40,p_Var45,&local_f8);
        p_Var18 = p_Var45 + 0x40;
        p_Var49 = (__tree_node_base *)param_1[9];
        p_Var47 = (__tree_node_base *)param_1[10];
        local_90 = p_Var18;
        if (p_Var47 == p_Var49) {
          local_90 = p_Var49;
        }
        else {
          do {
            p_Var45 = p_Var45 + -0x40;
            p_Var47 = p_Var47 + -0x40;
            FUN_02ca9390(plVar40,p_Var45,p_Var47);
          } while (p_Var49 != p_Var47);
          p_Var49 = (__tree_node_base *)param_1[9];
          local_90 = (__tree_node_base *)param_1[10];
        }
        param_1[9] = (long)p_Var45;
        param_1[10] = (long)p_Var18;
        local_88 = (__tree_node_base *)param_1[0xb];
        param_1[0xb] = (long)(p_Var35 + uVar26 * 0x40);
        local_a0 = p_Var49;
        local_98 = p_Var49;
        uVar52 = FUN_02ca9114(&local_a0);
      }
      plVar19 = local_118;
      puVar17 = local_130;
      if (local_130 != (uint *)0x0) {
        local_128 = local_130;
        lVar32 = (long)local_120 - (long)local_130;
        uVar15 = (**(code **)(*local_118 + 0xc0))(local_118);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            uVar52 = FUN_02bcc824(plVar19,puVar17,lVar32,4);
            goto LAB_02ca4ff8;
          }
        }
        uVar52 = (**(code **)(*plVar19 + 0x18))(plVar19,puVar17,lVar32,4);
      }
LAB_02ca4ff8:
      puVar41 = local_e0;
      puVar17 = local_f8;
      if (local_f8 != (uint *)0x0) {
        local_f0 = local_f8;
        lVar32 = (long)local_e8 - (long)local_f8;
        uVar15 = (**(code **)(*(long *)local_e0 + 0xc0))(local_e0);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            uVar52 = FUN_02bcc824(puVar41,puVar17,lVar32,4);
            goto LAB_02ca5084;
          }
        }
        uVar52 = (**(code **)(*(long *)puVar41 + 0x18))(puVar41,puVar17,lVar32,4);
      }
LAB_02ca5084:
      uVar31 = (ulong)((int)uVar31 + 1);
    } while (uVar31 < (ulong)param_3[3]);
  }
  if (param_3[5] != 0) {
    uVar31 = 0;
    plVar24 = param_1 + 0x13;
    do {
      lVar32 = param_3[4];
      local_118 = (long *)param_1[1];
      local_120 = (uint *)0x0;
      local_130 = (uint *)0x0;
      local_128 = (uint *)0x0;
      local_110 = (long *)0x3fffffffffffffff;
      local_108 = 0;
      local_100 = 0;
      puVar29 = (ulong *)(lVar32 + uVar31 * 0x18 + 8);
      FUN_01663fa8(&local_130,*puVar29);
      if (*puVar29 != 0) {
        uVar34 = 1;
        do {
          local_f8 = (uint *)CONCAT44(local_f8._4_4_,
                                      *(undefined4 *)
                                       (*(long *)(lVar32 + uVar31 * 0x18) +
                                       (long)(int)(uVar34 - 1) * 4));
          FUN_02ca6008(&local_130,&local_f8);
          uVar15 = (ulong)uVar34;
          uVar34 = uVar34 + 1;
        } while (uVar15 < *puVar29);
      }
      FUN_0290f77c(&local_f8);
      p_Var35 = *(__tree_node_base **)(lVar32 + uVar31 * 0x18 + 0x10);
      if (p_Var35 == (__tree_node_base *)0x0) {
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar13 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        local_a0 = *(__tree_node_base **)PTR_DAT_0437a0d8;
        local_88 = *(__tree_node_base **)(PTR_DAT_0437a0d8 + 0x18);
        local_98 = *(__tree_node_base **)(PTR_DAT_0437a0d8 + 8);
        local_90 = *(__tree_node_base **)(PTR_DAT_0437a0d8 + 0x10);
        if (local_88 != (__tree_node_base *)0x0) {
          (**(code **)(*(long *)local_88 + 0x18))();
        }
      }
      else {
        local_90 = (__tree_node_base *)strlen((char *)p_Var35);
        _Var4 = *p_Var35;
        if (_Var4 == (__tree_node_base)0x0) {
          local_a0 = (__tree_node_base *)&DAT_cbf29ce484222645;
        }
        else {
          local_a0 = (__tree_node_base *)&DAT_cbf29ce484222645;
          p_Var18 = p_Var35;
          do {
            p_Var18 = p_Var18 + 1;
            local_a0 = (__tree_node_base *)(((ulong)local_a0 ^ (ulong)(byte)_Var4) * 0x100000001b3);
            _Var4 = *p_Var18;
          } while (_Var4 != (__tree_node_base)0x0);
        }
        local_88 = (__tree_node_base *)0x0;
        local_98 = p_Var35;
      }
      local_c0 = (**(code **)(*param_1 + 0x68))(param_1,&local_a0);
      if (local_88 != (__tree_node_base *)0x0) {
        (**(code **)(*(long *)local_88 + 0x20))();
      }
      puVar41 = local_e0;
      puVar17 = local_f8;
      if (local_f8 != (uint *)0x0) {
        local_f0 = local_f8;
        lVar32 = (long)local_e8 - (long)local_f8;
        uVar15 = (**(code **)(*(long *)local_e0 + 0xc0))(local_e0);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            FUN_02bcc824(puVar41,puVar17,lVar32,4);
            goto LAB_02ca5404;
          }
        }
        (**(code **)(*(long *)puVar41 + 0x18))(puVar41,puVar17,lVar32,4);
      }
LAB_02ca5404:
      local_e8 = local_120;
      local_f0 = local_128;
      local_f8 = local_130;
      local_e0 = (uint *)local_118;
      local_c8 = local_100;
      local_d8 = local_110;
      uStack_d0 = local_108;
      local_130 = (uint *)0x0;
      local_128 = (uint *)0x0;
      local_120 = (uint *)0x0;
      uVar15 = param_1[0x11];
      if (uVar15 < (ulong)param_1[0x12]) {
        uVar52 = FUN_02ca9498(plVar24,uVar15,&local_f8);
        param_1[0x11] = param_1[0x11] + 0x40;
        puVar17 = local_f8;
        puVar41 = local_e0;
      }
      else {
        uVar26 = param_1[0x14];
        lVar32 = (long)(uVar15 - param_1[0x10]) >> 6;
        uVar15 = lVar32 + 1;
        if (0x7ffffffffffffffe < uVar26) {
          uVar26 = 0x7fffffffffffffff;
        }
        if (uVar26 < uVar15) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar14 = param_1[0x12] - param_1[0x10];
        if ((ulong)(lVar14 >> 6) < uVar26 >> 1) {
          uVar25 = lVar14 >> 5;
          uVar26 = uVar15;
          if (uVar15 <= uVar25) {
            uVar26 = uVar25;
          }
        }
        if (uVar26 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = (**(code **)(*(long *)*plVar24 + 0x10))((long *)*plVar24,uVar26 << 6,8);
          if (lVar14 == 0) {
            (**(code **)(*(long *)*plVar24 + 0xb8))();
          }
        }
        lVar22 = lVar14 + lVar32 * 0x40;
        uVar52 = FUN_02ca9498(plVar24,lVar22,&local_f8);
        lVar32 = lVar22 + 0x40;
        plVar40 = (long *)param_1[0x10];
        plVar39 = (long *)param_1[0x11];
        if (plVar39 == plVar40) {
          plVar39 = plVar40;
        }
        else {
          do {
            lVar22 = lVar22 + -0x40;
            plVar39 = plVar39 + -8;
            uVar52 = FUN_02ca9498(plVar24,lVar22,plVar39);
          } while (plVar40 != plVar39);
          plVar40 = (long *)param_1[0x11];
          plVar39 = (long *)param_1[0x10];
        }
        param_1[0x10] = lVar22;
        param_1[0x11] = lVar32;
        lVar32 = param_1[0x12];
        param_1[0x12] = lVar14 + uVar26 * 0x40;
        if (plVar40 != plVar39) {
          do {
            plVar19 = plVar40 + -8;
            lVar14 = *plVar19;
            if (lVar14 != 0) {
              plVar40[-7] = lVar14;
              lVar22 = plVar40[-6];
              plVar40 = (long *)plVar40[-5];
              uVar15 = (**(code **)(*plVar40 + 0xc0))(plVar40);
              if ((uVar15 & 1) != 0) {
                if (*(char *)(lVar9 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar9 + 0x38d488) = 1;
                  *(undefined8 *)(lVar9 + 0x38d478) = 0;
                  *(undefined8 *)(lVar9 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar9 + 0x38d480)) {
                  uVar52 = FUN_02bcc824(plVar40,lVar14,lVar22 - lVar14,4);
                  goto LAB_02ca55e4;
                }
              }
              uVar52 = (**(code **)(*plVar40 + 0x18))(plVar40,lVar14,lVar22 - lVar14,4);
            }
LAB_02ca55e4:
            plVar40 = plVar19;
          } while (plVar39 != plVar19);
        }
        puVar17 = local_f8;
        puVar41 = local_e0;
        if (plVar39 != (long *)0x0) {
          plVar40 = (long *)*plVar24;
          uVar15 = (**(code **)(*plVar40 + 0xc0))(plVar40);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar9 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar9 + 0x38d488) = 1;
              *(undefined8 *)(lVar9 + 0x38d478) = 0;
              *(undefined8 *)(lVar9 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar9 + 0x38d480)) {
              uVar52 = FUN_02bcc824(plVar40,plVar39,lVar32 - (long)plVar39,8);
              puVar17 = local_f8;
              puVar41 = local_e0;
              goto joined_r0x02ca56f0;
            }
          }
          uVar52 = (**(code **)(*plVar40 + 0x18))(plVar40,plVar39,lVar32 - (long)plVar39,8);
          puVar17 = local_f8;
          puVar41 = local_e0;
        }
      }
joined_r0x02ca56f0:
      puVar21 = local_130;
      plVar40 = local_118;
      local_f8 = puVar17;
      local_e0 = puVar41;
      if (puVar17 != (uint *)0x0) {
        lVar32 = (long)local_e8 - (long)puVar17;
        local_f0 = puVar17;
        uVar15 = (**(code **)(*(long *)puVar41 + 0xc0))(puVar41);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            uVar52 = FUN_02bcc824(puVar41,puVar17,lVar32,4);
            puVar21 = local_130;
            plVar40 = local_118;
            goto joined_r0x02ca5778;
          }
        }
        uVar52 = (**(code **)(*(long *)puVar41 + 0x18))(puVar41,puVar17,lVar32,4);
        puVar21 = local_130;
        plVar40 = local_118;
      }
joined_r0x02ca5778:
      local_130 = puVar21;
      local_118 = plVar40;
      if (puVar21 != (uint *)0x0) {
        lVar32 = (long)local_120 - (long)puVar21;
        local_128 = puVar21;
        uVar15 = (**(code **)(*plVar40 + 0xc0))(plVar40);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            uVar52 = FUN_02bcc824(plVar40,puVar21,lVar32,4);
            goto LAB_02ca57fc;
          }
        }
        uVar52 = (**(code **)(*plVar40 + 0x18))(plVar40,puVar21,lVar32,4);
      }
LAB_02ca57fc:
      uVar31 = (ulong)((int)uVar31 + 1);
    } while (uVar31 < (ulong)param_3[5]);
  }
  if (*(char *)param_3[7] != '\0') {
    lVar32 = (**(code **)(*param_1 + 0x68))(param_1,param_3 + 6);
    uVar52 = extraout_d0_00;
    if (lVar32 != -1) {
      param_1[0x32] = lVar32;
    }
  }
  lVar14 = param_3[0xc];
  plVar24 = param_1 + 0x3c;
  sVar5 = (short)(*(long *)(lVar14 + 0x278) - *(long *)(lVar14 + 0x270) >> 4) * -0x5555;
  puVar23 = (undefined8 *)param_1[0x3c];
  puVar30 = (undefined8 *)param_1[0x3d];
  uVar34 = (uint)sVar5;
  uVar15 = (ulong)uVar34;
  uVar31 = (long)puVar30 - (long)puVar23 >> 4;
  lVar32 = uVar31 - uVar15;
  if (uVar15 <= uVar31) {
    if (lVar32 != 0) {
      puVar30 = puVar23 + uVar15 * 2;
      param_1[0x3d] = (long)puVar30;
    }
    goto LAB_02ca5c84;
  }
  plVar40 = param_1 + 0x3f;
  if ((ulong)(param_1[0x3e] - (long)puVar30 >> 4) < uVar15 - uVar31) {
    uVar26 = param_1[0x40];
    if (0x7ffffffffffffffe < uVar26) {
      uVar26 = 0x7fffffffffffffff;
    }
    if (uVar26 < uVar15) {
LAB_02ca5fb0:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar22 = param_1[0x3e] - (long)puVar23;
    if ((ulong)(lVar22 >> 4) < uVar26 >> 1) {
      uVar26 = lVar22 >> 3;
      uVar25 = uVar15;
      if (uVar15 <= uVar26) goto LAB_02ca5b44;
LAB_02ca5b4c:
      lVar22 = (**(code **)(*(long *)*plVar40 + 0x10))((long *)*plVar40,uVar25 << 4,0x10);
      uVar26 = uVar25;
      if (lVar22 == 0) {
        (**(code **)(*(long *)*plVar40 + 0xb8))();
      }
    }
    else {
LAB_02ca5b44:
      uVar25 = uVar26;
      if (uVar26 != 0) goto LAB_02ca5b4c;
      lVar22 = 0;
    }
    do {
      uVar52 = FUN_02ca95a0(plVar40);
      bVar11 = lVar32 != -1;
      lVar32 = lVar32 + 1;
    } while (bVar11);
    lVar32 = lVar22 + uVar31 * 0x10;
    lVar46 = param_1[0x3c];
    lVar48 = param_1[0x3d];
    if (lVar48 != lVar46) {
      do {
        lVar32 = lVar32 + -0x10;
        lVar48 = lVar48 + -0x10;
        uVar52 = FUN_01c7fa78(plVar40,lVar32,lVar48);
      } while (lVar46 != lVar48);
      lVar46 = *plVar24;
    }
    param_1[0x3c] = lVar32;
    param_1[0x3d] = lVar22 + uVar15 * 0x10;
    lVar32 = param_1[0x3e];
    param_1[0x3e] = lVar22 + uVar26 * 0x10;
    if (lVar46 != 0) {
      plVar40 = (long *)*plVar40;
      uVar31 = (**(code **)(*plVar40 + 0xc0))(plVar40);
      if ((uVar31 & 1) != 0) {
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          uVar52 = FUN_02bcc824(plVar40,lVar46,lVar32 - lVar46,0x10);
          goto LAB_02ca5c70;
        }
      }
      uVar52 = (**(code **)(*plVar40 + 0x18))(plVar40,lVar46,lVar32 - lVar46,0x10);
    }
  }
  else {
    do {
      uVar52 = FUN_02ca95a0(plVar40);
      bVar11 = lVar32 != -1;
      lVar32 = lVar32 + 1;
      param_1[0x3d] = param_1[0x3d] + 0x10;
    } while (bVar11);
  }
LAB_02ca5c70:
  puVar23 = (undefined8 *)param_1[0x3c];
  puVar30 = (undefined8 *)param_1[0x3d];
LAB_02ca5c84:
  if (0 < (long)puVar30 - (long)puVar23) {
    uVar31 = (ulong)((long)puVar30 - (long)puVar23) >> 4;
    uVar53 = *(undefined8 *)PTR_DAT_0437a120;
    uVar2 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
    do {
      uVar31 = uVar31 - 1;
      *puVar23 = uVar53;
      puVar23[1] = uVar2;
      puVar23 = puVar23 + 2;
    } while (0 < (long)uVar31);
  }
  puVar30 = (undefined8 *)param_1[2];
  puVar23 = (undefined8 *)param_1[3];
  plVar40 = param_1 + 0x34;
  if (puVar30 != puVar23) {
    uVar52 = 0;
    do {
      puVar41 = (uint *)puVar30[1];
      for (puVar17 = (uint *)*puVar30; puVar17 != puVar41; puVar17 = puVar17 + 1) {
        uVar3 = *puVar17;
        if (uVar3 < uVar34 &&
            (1 << (ulong)(uVar3 & 0x1f) & *(uint *)(*plVar40 + ((ulong)(uVar3 >> 3) & 0x1ffffffc)))
            != 0) {
          fVar51 = *(float *)(puVar30 + 9);
          fVar54 = *(float *)((long)puVar30 + 0x3c);
          fVar56 = *(float *)(puVar30 + 8);
          puVar7 = (undefined8 *)(*plVar24 + (ulong)uVar3 * 0x10);
          uVar53 = *puVar7;
          fVar55 = *(float *)((long)puVar30 + 0x4c);
          puVar8 = (undefined8 *)(*plVar24 + (ulong)uVar3 * 0x10);
          puVar8[1] = (ulong)(uint)(*(float *)(puVar30 + 10) * (float)puVar7[1] *
                                   *(float *)((long)puVar30 + 0x44));
          *puVar8 = CONCAT44(fVar55 * (float)((ulong)uVar53 >> 0x20) * fVar56,
                             fVar51 * (float)uVar53 * fVar54);
        }
      }
      puVar30 = puVar30 + 0xb;
    } while (puVar30 != puVar23);
  }
  puVar23 = (undefined8 *)param_1[10];
  for (puVar30 = (undefined8 *)param_1[9]; puVar30 != puVar23; puVar30 = puVar30 + 8) {
    puVar41 = (uint *)puVar30[1];
    for (puVar17 = (uint *)*puVar30; puVar17 != puVar41; puVar17 = puVar17 + 1) {
      uVar3 = *puVar17;
      if (uVar3 < uVar34 &&
          (1 << (ulong)(uVar3 & 0x1f) & *(uint *)(*plVar40 + ((ulong)(uVar3 >> 3) & 0x1ffffffc))) !=
          0) {
        fVar51 = *(float *)((long)puVar30 + 0x3c) * *(float *)(puVar30 + 7);
        puVar7 = (undefined8 *)(*plVar24 + (ulong)uVar3 * 0x10);
        uVar53 = puVar7[1];
        uVar52 = *puVar7;
        uVar52 = CONCAT44((float)((ulong)uVar52 >> 0x20) * fVar51,(float)uVar52 * fVar51);
        puVar7 = (undefined8 *)(*plVar24 + (ulong)uVar3 * 0x10);
        puVar7[1] = CONCAT44((float)((ulong)uVar53 >> 0x20) * fVar51,(float)uVar53 * fVar51);
        *puVar7 = uVar52;
      }
    }
  }
  if (*(long **)(lVar14 + 0x60) == *(long **)(lVar14 + 0x58)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  sVar12 = (**(code **)(*(long *)(*(long *)(**(long **)(lVar14 + 0x58) + 0x58) + 0x58) + 0x10))
                     (uVar52);
  uVar31 = (ulong)(uint)(int)sVar12;
  if ((uint)(int)sVar12 < uVar34) {
    do {
      if ((1 << (ulong)((uint)uVar31 & 0x1f) &
          *(uint *)(*plVar40 + (uVar31 >> 3 & 0x1ffffffffffffffc))) != 0) {
        sVar12 = FUN_02b68b4c(lVar14,uVar31 & 0xffffffff);
        puVar30 = (undefined8 *)(*plVar24 + (long)sVar12 * 0x10);
        uVar52 = *puVar30;
        puVar23 = (undefined8 *)(*plVar24 + uVar31 * 0x10);
        puVar23[1] = puVar30[1];
        *puVar23 = uVar52;
      }
      uVar31 = uVar31 + 1;
    } while ((int)sVar5 != (int)uVar31);
  }
  return;
LAB_02ca3ea0:
  puVar30 = (undefined8 *)plVar28[3];
  if (puVar30 == (undefined8 *)0x0) goto LAB_02ca44e0;
  p_Var35 = (__tree_node_base *)(**(code **)(*(long *)param_2 + 0x10))(param_2,0x38,8);
  if (p_Var35 == (__tree_node_base *)0x0) {
    local_90 = (__tree_node_base *)0x0;
    local_88 = (__tree_node_base *)0x0;
    local_a0 = (__tree_node_base *)0x0;
    local_98 = (__tree_node_base *)0x0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar10 = PTR_DAT_04379528;
      if (iVar13 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_02ca5fb8;
    *(__tree_node_base **)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = param_2;
    *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
    *(undefined8 *)p_Var35 = 0;
    *(undefined8 *)(p_Var35 + 0x28) = 0;
    *(undefined8 *)(p_Var35 + 0x30) = 0;
    *(undefined8 *)(p_Var35 + 0x18) = 0;
    *(undefined8 *)(p_Var35 + 0x20) = 0;
    *(undefined8 *)(p_Var35 + 8) = 0;
    *(undefined8 *)(p_Var35 + 0x10) = 0;
    FUN_028cca78(p_Var35);
    local_88 = (__tree_node_base *)&DAT_00000008;
    local_90 = (__tree_node_base *)&DAT_00000038;
    *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
    local_a0 = p_Var35;
    local_98 = param_2;
  }
  p_Var18 = local_a0;
  pvVar37 = (void *)*puVar30;
  pvVar42 = (void *)puVar30[1];
  uVar15 = (long)pvVar42 - (long)pvVar37 >> 1;
  uVar26 = *(ulong *)(local_a0 + 0x10);
  pvVar36 = *(void **)local_a0;
  lVar32 = uVar26 - (long)pvVar36;
  if ((ulong)(lVar32 >> 1) < uVar15) {
    if (pvVar36 != (void *)0x0) {
      plVar28 = *(long **)(local_a0 + 0x18);
      *(void **)(local_a0 + 8) = pvVar36;
      uVar26 = (**(code **)(*plVar28 + 0xc0))(plVar28);
      if ((uVar26 & 1) == 0) {
LAB_02ca3fdc:
        (**(code **)(*plVar28 + 0x18))(plVar28,pvVar36,lVar32,2);
      }
      else {
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02ca3fdc;
        FUN_02bcc824(plVar28,pvVar36,lVar32,2);
      }
      uVar26 = 0;
      *(undefined8 *)(p_Var35 + 8) = 0;
      *(undefined8 *)(p_Var35 + 0x10) = 0;
      *(undefined8 *)p_Var35 = 0;
    }
    uVar25 = *(ulong *)(p_Var18 + 0x20);
    if (0x7ffffffffffffffe < uVar25) {
      uVar25 = 0x7fffffffffffffff;
    }
    if (uVar25 < uVar15) goto LAB_02ca5fb0;
    if (uVar15 <= uVar26) {
      uVar15 = uVar26;
    }
    if (uVar25 >> 1 <= (ulong)((long)uVar26 >> 1)) {
      uVar15 = uVar25;
    }
    if (uVar25 < uVar15) goto LAB_02ca5fb0;
    p_Var35 = p_Var18 + 0x18;
    pvVar16 = (void *)(**(code **)(**(long **)p_Var35 + 0x10))(*(long **)p_Var35,uVar15 << 1,2);
    if (pvVar16 == (void *)0x0) {
      (**(code **)(**(long **)p_Var35 + 0xb8))();
    }
    *(void **)(p_Var18 + 0x10) = (void *)((long)pvVar16 + uVar15 * 2);
    *(void **)p_Var18 = pvVar16;
    *(void **)(p_Var18 + 8) = pvVar16;
    for (; pvVar37 != pvVar42; pvVar37 = (void *)((long)pvVar37 + 2)) {
      FUN_02ca889c(p_Var35,pvVar16,pvVar37);
      pvVar16 = (void *)(*(long *)(p_Var18 + 8) + 2);
      *(void **)(p_Var18 + 8) = pvVar16;
    }
  }
  else {
    uVar26 = *(long *)(local_a0 + 8) - (long)pvVar36 >> 1;
    pvVar16 = (void *)((long)pvVar37 + (*(long *)(local_a0 + 8) - (long)pvVar36));
    if (uVar15 <= uVar26) {
      pvVar16 = pvVar42;
    }
    __n = (long)pvVar16 - (long)pvVar37;
    if (__n != 0) {
      memmove(pvVar36,pvVar37,__n);
    }
    if (uVar26 < uVar15) {
      if (pvVar16 != pvVar42) {
        lVar32 = *(long *)(p_Var18 + 8);
        do {
          FUN_02ca889c(p_Var18 + 0x18,lVar32,pvVar16);
          pvVar16 = (void *)((long)pvVar16 + 2);
          lVar32 = *(long *)(p_Var18 + 8) + 2;
          *(long *)(p_Var18 + 8) = lVar32;
        } while (pvVar42 != pvVar16);
      }
    }
    else {
      *(void **)(p_Var18 + 8) = (void *)((long)pvVar36 + ((long)__n >> 1) * 2);
    }
  }
  uVar34 = *puVar41;
  pvVar42 = (void *)(long)(short)uVar34;
  pvVar37 = (void *)param_1[0x18];
  if (pvVar37 == (void *)0x0) {
LAB_02ca4228:
    plVar28 = (long *)(**(code **)(*(long *)param_1[0x1e] + 0x10))((long *)param_1[0x1e],0x38,8);
    if (plVar28 == (long *)0x0) {
      (**(code **)(*(long *)param_1[0x1e] + 0xb8))();
    }
    lVar32 = param_1[0x1e];
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), iVar13 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    p_Var35 = local_a0;
    if (lVar14 == 0) {
      bVar11 = true;
    }
    else {
      if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_02ca5fb8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar32;
      bVar11 = false;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    }
    *(short *)(plVar28 + 2) = (short)uVar34;
    local_a0 = (__tree_node_base *)0x0;
    plVar28[3] = (long)p_Var35;
    plVar28[5] = (long)local_90;
    plVar28[6] = (long)local_88;
    plVar28[4] = (long)local_98;
    if (!bVar11) {
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    *plVar28 = 0;
    plVar28[1] = (long)pvVar42;
    if ((pvVar37 == (void *)0x0) ||
       (*(float *)(param_1 + 0x23) * (float)pvVar37 < (float)(param_1[0x22] + 1))) {
      uVar15 = (ulong)(pvVar37 < (void *)0x3 || ((ulong)pvVar37 & (long)pvVar37 - 1U) != 0) |
               (long)pvVar37 << 1;
      uVar26 = (ulong)((float)(param_1[0x22] + 1) / *(float *)(param_1 + 0x23));
      if (uVar26 <= uVar15) {
        uVar26 = uVar15;
      }
      if (uVar26 - 1 == 0) {
        uVar26 = 2;
      }
      else if ((uVar26 & uVar26 - 1) != 0) {
        uVar26 = std::__next_prime(uVar26);
      }
      uVar15 = param_1[0x18];
      if (uVar15 < uVar26) {
        uVar25 = uVar26;
LAB_02ca4368:
        FUN_02ca8974(plVar24,uVar25);
      }
      else if (uVar26 < uVar15) {
        uVar25 = (ulong)((float)(ulong)param_1[0x22] / *(float *)(param_1 + 0x23));
        if ((uVar15 < 3) ||
           (uVar27 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
           uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333),
           1 < (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar25 = std::__next_prime(uVar25);
        }
        else if (1 < uVar25) {
          uVar25 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar25 - 1) & 0x3f);
        }
        if (uVar25 <= uVar26) {
          uVar25 = uVar26;
        }
        if (uVar25 < uVar15) goto LAB_02ca4368;
      }
      pvVar37 = (void *)param_1[0x18];
      if (((ulong)pvVar37 & (long)pvVar37 - 1U) == 0) {
        pvVar16 = (void *)((long)pvVar37 - 1U & (ulong)pvVar42);
      }
      else if (pvVar42 < pvVar37) {
        pvVar16 = pvVar42;
      }
      else {
        uVar15 = 0;
        if (pvVar37 != (void *)0x0) {
          uVar15 = (ulong)pvVar42 / (ulong)pvVar37;
        }
        pvVar16 = (void *)((long)pvVar42 - uVar15 * (long)pvVar37);
      }
    }
    plVar20 = *(long **)(*plVar24 + (long)pvVar16 * 8);
    if (plVar20 == (long *)0x0) {
      *plVar28 = *plVar44;
      *plVar44 = (long)plVar28;
      *(long **)(*plVar24 + (long)pvVar16 * 8) = plVar44;
      if (*plVar28 != 0) {
        pvVar42 = *(void **)(*plVar28 + 8);
        if (((ulong)pvVar37 & (long)pvVar37 - 1U) == 0) {
          pvVar42 = (void *)((ulong)pvVar42 & (long)pvVar37 - 1U);
        }
        else if (pvVar37 <= pvVar42) {
          uVar15 = 0;
          if (pvVar37 != (void *)0x0) {
            uVar15 = (ulong)pvVar42 / (ulong)pvVar37;
          }
          pvVar42 = (void *)((long)pvVar42 - uVar15 * (long)pvVar37);
        }
        plVar20 = (long *)(*plVar24 + (long)pvVar42 * 8);
        goto LAB_02ca44a4;
      }
    }
    else {
      *plVar28 = *plVar20;
LAB_02ca44a4:
      *plVar20 = (long)plVar28;
    }
    param_1[0x22] = param_1[0x22] + 1;
  }
  else {
    uVar15 = (long)pvVar37 - ((ulong)pvVar37 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      pvVar16 = (void *)((long)pvVar37 - 1U & (ulong)pvVar42);
    }
    else {
      pvVar16 = pvVar42;
      if (pvVar37 <= pvVar42) {
        uVar26 = 0;
        if (pvVar37 != (void *)0x0) {
          uVar26 = (ulong)pvVar42 / (ulong)pvVar37;
        }
        pvVar16 = (void *)((long)pvVar42 - uVar26 * (long)pvVar37);
      }
    }
    plVar28 = *(long **)(*plVar24 + (long)pvVar16 * 8);
    if (plVar28 == (long *)0x0) goto LAB_02ca4228;
    if (uVar15 < 2) {
      do {
        plVar28 = (long *)*plVar28;
        if ((plVar28 == (long *)0x0) ||
           ((void *)plVar28[1] != pvVar42 &&
            (void *)((ulong)plVar28[1] & (long)pvVar37 - 1U) != pvVar16)) goto LAB_02ca4228;
      } while ((uint)*(ushort *)(plVar28 + 2) != (uVar34 & 0xffff));
    }
    else {
      do {
        plVar28 = (long *)*plVar28;
        if (plVar28 == (long *)0x0) goto LAB_02ca4228;
        pvVar36 = (void *)plVar28[1];
        if (pvVar36 != pvVar42) {
          if (pvVar37 <= pvVar36) {
            uVar15 = 0;
            if (pvVar37 != (void *)0x0) {
              uVar15 = (ulong)pvVar36 / (ulong)pvVar37;
            }
            pvVar36 = (void *)((long)pvVar36 - uVar15 * (long)pvVar37);
          }
          if (pvVar36 != pvVar16) goto LAB_02ca4228;
        }
      } while ((uint)*(ushort *)(plVar28 + 2) != (uVar34 & 0xffff));
    }
  }
  p_Var35 = local_a0;
  local_a0 = (__tree_node_base *)0x0;
  if (p_Var35 != (__tree_node_base *)0x0) {
    FUN_02ca8dd0(&local_98);
  }
LAB_02ca44e0:
  puVar41 = puVar41 + 1;
  if (puVar41 == puVar17) goto LAB_02ca460c;
  plVar28 = (long *)param_3[10];
  uVar15 = plVar28[1];
  goto joined_r0x02ca3db0;
}


