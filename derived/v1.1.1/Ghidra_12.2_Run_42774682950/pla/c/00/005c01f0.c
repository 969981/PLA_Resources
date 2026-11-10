/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c01f0; name: FUN_005c01f0
 */


/* WARNING: Removing unreachable block (ram,0x005c0b18) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_005c01f0(undefined8 param_1,char param_2,long param_3,ulong *param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  byte *******pppppppbVar14;
  bool bVar15;
  int iVar16;
  byte *******pppppppbVar17;
  void *pvVar18;
  byte *pbVar19;
  size_t __n;
  size_t sVar20;
  void *pvVar21;
  byte ******ppppppbVar22;
  char *pcVar23;
  uint uVar24;
  ulong *puVar25;
  byte *pbVar26;
  byte ****ppppbVar27;
  byte ***pppbVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  byte *******pppppppbVar33;
  byte *******pppppppbVar34;
  ulong uVar35;
  int *piVar36;
  long lVar37;
  undefined4 *puVar38;
  ulong uVar39;
  byte *pbVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  undefined8 uVar44;
  byte *******pppppppbVar45;
  byte *******pppppppbVar46;
  byte *pbVar47;
  int iVar48;
  ulong uVar49;
  undefined8 *puVar50;
  ulong unaff_x23;
  ulong uVar51;
  long *plVar52;
  byte ***pppbVar53;
  long lVar54;
  byte ***pppbVar55;
  ulong uVar56;
  ushort uVar58;
  ushort uVar57;
  char *pcVar59;
  undefined8 *puVar60;
  byte *pbVar61;
  byte *******pppppppbVar62;
  undefined8 uVar63;
  byte ******ppppppbVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  ulong local_250;
  byte *****local_240;
  ulong local_208;
  byte ******local_200;
  byte *******local_1e8;
  char *local_1d0;
  byte *******pppppppbStack_1c8;
  byte *******pppppppbStack_1c0;
  byte *******local_1b8;
  long lStack_1b0;
  byte *******local_1a8;
  byte *******pppppppbStack_1a0;
  byte *******pppppppbStack_198;
  ulong uStack_190;
  byte *******local_188;
  byte *******pppppppbStack_180;
  byte *******local_178;
  byte *pbStack_170;
  byte *local_168;
  byte *local_160;
  undefined8 local_150;
  byte *******pppppppbStack_148;
  byte *local_140;
  undefined1 local_130 [8];
  byte *******pppppppbStack_128;
  byte *******local_120;
  char *local_110;
  ulong local_108;
  void *local_100;
  char *local_f8;
  byte *pbStack_f0;
  byte *local_e0;
  byte *local_d8;
  byte *local_d0;
  char *local_c8;
  byte *pbStack_c0;
  byte *******local_b8;
  byte *******pppppppbStack_b0;
  byte *******local_a8;
  byte *******local_a0;
  byte *******local_98;
  ulong local_80;
  ulong local_78;
  void *local_70;
  undefined1 auStack_68 [8];
  
  if ((param_2 == '\0') || (iVar16 = FUN_002ec180(0), iVar16 == 0)) {
LAB_005c0220:
    puVar25 = *(ulong **)(param_3 + 0x28);
  }
  else {
    local_d8 = (byte *)0x0;
    local_d0 = (byte *)0x0;
    local_e0 = (byte *)0x0;
    pppppppbStack_1c8 = *(byte ********)(param_3 + 0x10);
    local_1d0 = *(char **)(param_3 + 8);
                    /* try { // try from 005c2094 to 005c20ab has its CatchHandler @ 005c2f7c */
    FUN_005be370(&DAT_038f8fce,&local_1d0,&local_e0,0);
    puVar13 = PTR_LAB_04373088;
    uVar9 = _UNK_03889718;
    uVar8 = _DAT_03889710;
    uVar7 = _UNK_03889558;
    uVar6 = _DAT_03889550;
    uVar65 = _UNK_03888e88;
    uVar44 = _DAT_03888e80;
    puVar25 = *(ulong **)(param_3 + 0x28);
    if ((puVar25 != (ulong *)0x0) && (uVar49 = puVar25[1], uVar49 != 0)) {
      uVar29 = *puVar25;
      pcVar59 = (char *)((ulong)&local_1d0 | 1);
      uVar5 = CONCAT17(s_virtual_hosts___039069b6[7],s_virtual_hosts___039069b6._0_7_);
      local_250 = CONCAT71(s_virtual_hosts___039069b6._8_7_,s_virtual_hosts___039069b6[7]);
      uVar56 = 0;
      do {
        lVar54 = *(long *)((uVar29 & 0xfffffffffffffff8) + uVar56 * 8);
        local_1d0 = (char *)0x1e;
        pppppppbStack_1c8 = (byte *******)0x0;
        *(ulong *)(pcVar59 + 7) = local_250;
        *(undefined8 *)pcVar59 = uVar5;
        pppppppbStack_1c0 = (byte *******)0x0;
                    /* try { // try from 005c2184 to 005c218f has its CatchHandler @ 005c2fbc */
        FUN_005b7b7c(&local_e0,&local_1d0);
        if (((ulong)local_1d0 & 1) != 0) {
          FUN_002e2ea0(puVar13,pppppppbStack_1c0);
        }
        pppppppbStack_1c8 = *(byte ********)(lVar54 + 0x18);
        local_1d0 = *(char **)(lVar54 + 0x10);
                    /* try { // try from 005c21ac to 005c21c3 has its CatchHandler @ 005c2fcc */
        FUN_005be370("  name",&local_1d0,&local_e0,0);
        puVar25 = *(ulong **)(lVar54 + 0x48);
        if (puVar25 != (ulong *)0x0) {
          uVar43 = puVar25[1];
          unaff_x23 = 0;
          if (uVar43 != 0) {
            uVar31 = *puVar25 & 0xfffffffffffffff8;
            do {
                    /* try { // try from 005c21e0 to 005c21f3 has its CatchHandler @ 005c30f4 */
              FUN_005be370("  domains",uVar31,&local_e0,0);
              uVar43 = uVar43 - 1;
              uVar31 = uVar31 + 0x10;
              unaff_x23 = 0;
            } while (uVar43 != 0);
          }
        }
        puVar25 = *(ulong **)(lVar54 + 0x50);
        if ((puVar25 != (ulong *)0x0) && (unaff_x23 = puVar25[1], unaff_x23 != 0)) {
          uVar31 = *puVar25;
          uVar43 = 0;
          do {
            puVar50 = *(undefined8 **)((uVar31 & 0xfffffffffffffff8) + uVar43 * 8);
            local_1d0 = (char *)0x12;
            pppppppbStack_1c0 = (byte *******)0x0;
            *(undefined8 *)pcVar59 = s_route___03911ad4._0_8_;
            pcVar59[8] = '{';
            pppppppbStack_1c8 = (byte *******)0x0;
                    /* try { // try from 005c225c to 005c2267 has its CatchHandler @ 005c30ac */
            FUN_005b7b7c(&local_e0,&local_1d0);
            if (((ulong)local_1d0 & 1) != 0) {
              FUN_002e2ea0(puVar13,pppppppbStack_1c0);
            }
            pppppppbStack_1c8 = (byte *******)puVar50[1];
            local_1d0 = (char *)*puVar50;
                    /* try { // try from 005c2284 to 005c229b has its CatchHandler @ 005c30bc */
            FUN_005be370("    name",&local_1d0,&local_e0,0);
            lVar54 = puVar50[2];
            if (lVar54 != 0) {
                    /* try { // try from 005c22a4 to 005c22b3 has its CatchHandler @ 005c3104 */
              FUN_005bf53c(&local_e0,"    match {");
              pbVar26 = local_d8;
              puVar12 = PTR_FUN_04373078;
              switch(*(undefined4 *)(lVar54 + 0x40)) {
              case 1:
                pppppppbStack_1c8 = *(byte ********)(lVar54 + 0x38);
                local_1d0 = *(char **)(lVar54 + 0x30);
                    /* try { // try from 005c22e4 to 005c22fb has its CatchHandler @ 005c2ffc */
                FUN_005be370("      prefix",&local_1d0,&local_e0,1);
                break;
              case 2:
                pppppppbStack_1c8 = *(byte ********)(lVar54 + 0x38);
                local_1d0 = *(char **)(lVar54 + 0x30);
                    /* try { // try from 005c232c to 005c2343 has its CatchHandler @ 005c2fec */
                FUN_005be370("      path",&local_1d0,&local_e0,1);
                break;
              case 3:
                pppppppbStack_1c8 = *(byte ********)(lVar54 + 0x38);
                local_1d0 = *(char **)(lVar54 + 0x30);
                    /* try { // try from 005c2308 to 005c231f has its CatchHandler @ 005c300c */
                FUN_005be370("      regex",&local_1d0,&local_e0,1);
                break;
              default:
                    /* try { // try from 005c23ac to 005c23bb has its CatchHandler @ 005c3104 */
                FUN_005c33f4(&local_e0,"      <unknown path matching type>");
                break;
              case 10:
                if (local_d0 <= local_d8) {
                  lVar30 = (long)local_d8 - (long)local_e0 >> 3;
                  uVar35 = 0xaaaaaaaaaaaaaaa;
                  uVar51 = lVar30 * -0x5555555555555555 + 1;
                  if (0xaaaaaaaaaaaaaaa < uVar51) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar37 = (long)local_d0 - (long)local_e0 >> 3;
                  if ((ulong)(lVar37 * -0x5555555555555555) < 0x555555555555555) {
                    uVar39 = lVar37 * 0x5555555555555556;
                    uVar35 = uVar51;
                    if (uVar51 <= uVar39) {
                      uVar35 = uVar39;
                    }
                    if (uVar35 != 0) goto LAB_005c2418;
                    lVar37 = 0;
                  }
                  else {
LAB_005c2418:
                    lVar37 = FUN_002e2e80(PTR_FUN_04373078,uVar35 * 0x18);
                  }
                  pbVar47 = (byte *)(lVar37 + lVar30 * 8);
                  pbVar61 = (byte *)(lVar37 + uVar35 * 0x18);
                  pbVar47[0x10] = 0;
                  pbVar47[0x11] = 0;
                  pbVar47[0x12] = 0;
                  pbVar47[0x13] = 0;
                  pbVar47[0x14] = 0;
                  pbVar47[0x15] = 0;
                  pbVar47[0x16] = 0;
                  pbVar47[0x17] = 0;
                  pbVar47[0] = 0;
                  pbVar47[1] = 0;
                  pbVar47[2] = 0;
                  pbVar47[3] = 0;
                  pbVar47[4] = 0;
                  pbVar47[5] = 0;
                  pbVar47[6] = 0;
                  pbVar47[7] = 0;
                  pbVar47[8] = 0;
                  pbVar47[9] = 0;
                  pbVar47[10] = 0;
                  pbVar47[0xb] = 0;
                  pbVar47[0xc] = 0;
                  pbVar47[0xd] = 0;
                  pbVar47[0xe] = 0;
                  pbVar47[0xf] = 0;
                  pcVar23 = (char *)FUN_002e2e80(puVar12,0x20);
                  pbVar19 = local_e0;
                  *(char **)(pbVar47 + 0x10) = pcVar23;
                  pbVar26 = pbVar47 + 0x18;
                  *(undefined8 *)(pbVar47 + 8) = uVar7;
                  *(undefined8 *)pbVar47 = uVar6;
                  uVar11 = s_safe_regex__<not_printed>_039308e2._23_8_;
                  uVar10 = s_safe_regex__<not_printed>_039308e2._0_8_;
                  uVar63 = CONCAT17(s_safe_regex__<not_printed>_039308e2[0xf],
                                    s_safe_regex__<not_printed>_039308e2._8_7_);
                  uVar66 = CONCAT71(s_safe_regex__<not_printed>_039308e2._16_7_,
                                    s_safe_regex__<not_printed>_039308e2[0xf]);
                  pcVar23[0x1f] = '\0';
                  *(undefined8 *)(pcVar23 + 0x17) = uVar11;
                  *(undefined8 *)(pcVar23 + 0xf) = uVar66;
                  *(undefined8 *)(pcVar23 + 8) = uVar63;
                  *(undefined8 *)pcVar23 = uVar10;
                  pbVar40 = local_d8;
                  if (local_d8 == local_e0) {
                    local_d8 = local_e0;
                  }
                  else {
                    do {
                      uVar66 = *(undefined8 *)(pbVar40 + -0x10);
                      uVar63 = *(undefined8 *)(pbVar40 + -0x18);
                      *(undefined8 *)(pbVar47 + -8) = *(undefined8 *)(pbVar40 + -8);
                      *(undefined8 *)(pbVar47 + -0x10) = uVar66;
                      *(undefined8 *)(pbVar47 + -0x18) = uVar63;
                      pbVar40[-0x18] = 0;
                      pbVar40[-0x17] = 0;
                      pbVar40[-0x16] = 0;
                      pbVar40[-0x15] = 0;
                      pbVar40[-0x14] = 0;
                      pbVar40[-0x13] = 0;
                      pbVar40[-0x12] = 0;
                      pbVar40[-0x11] = 0;
                      pbVar40[-0x10] = 0;
                      pbVar40[-0xf] = 0;
                      pbVar40[-0xe] = 0;
                      pbVar40[-0xd] = 0;
                      pbVar40[-0xc] = 0;
                      pbVar40[-0xb] = 0;
                      pbVar40[-10] = 0;
                      pbVar40[-9] = 0;
                      pbVar40[-8] = 0;
                      pbVar40[-7] = 0;
                      pbVar40[-6] = 0;
                      pbVar40[-5] = 0;
                      pbVar40[-4] = 0;
                      pbVar40[-3] = 0;
                      pbVar40[-2] = 0;
                      pbVar40[-1] = 0;
                      pbVar40 = pbVar40 + -0x18;
                      pbVar47 = pbVar47 + -0x18;
                    } while (local_e0 != pbVar40);
                  }
                  bVar15 = local_d8 != local_e0;
                  local_e0 = pbVar47;
                  local_d0 = pbVar61;
                  if (bVar15) {
                    bVar4 = local_d8[-0x18];
                    pbVar47 = local_d8 + -0x18;
                    pbVar40 = local_d8;
                    while( true ) {
                      pbVar61 = pbVar47;
                      local_d8 = pbVar26;
                      if ((bVar4 & 1) != 0) {
                        FUN_002e2ea0(puVar13,*(undefined8 *)(pbVar40 + -8));
                      }
                      pbVar26 = local_d8;
                      if (pbVar19 == pbVar61) break;
                      bVar4 = pbVar61[-0x18];
                      pbVar47 = pbVar61 + -0x18;
                      pbVar40 = pbVar61;
                    }
                  }
                  local_d8 = pbVar26;
                  if (pbVar19 != (byte *)0x0) {
                    FUN_002e2ea0(puVar13,pbVar19);
                  }
                  break;
                }
                local_d8[0] = 0;
                local_d8[1] = 0;
                local_d8[2] = 0;
                local_d8[3] = 0;
                local_d8[4] = 0;
                local_d8[5] = 0;
                local_d8[6] = 0;
                local_d8[7] = 0;
                local_d8[8] = 0;
                local_d8[9] = 0;
                local_d8[10] = 0;
                local_d8[0xb] = 0;
                local_d8[0xc] = 0;
                local_d8[0xd] = 0;
                local_d8[0xe] = 0;
                local_d8[0xf] = 0;
                local_d8[0x10] = 0;
                local_d8[0x11] = 0;
                local_d8[0x12] = 0;
                local_d8[0x13] = 0;
                local_d8[0x14] = 0;
                local_d8[0x15] = 0;
                local_d8[0x16] = 0;
                local_d8[0x17] = 0;
                pcVar23 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
                *(char **)(pbVar26 + 0x10) = pcVar23;
                *(undefined8 *)(pbVar26 + 8) = uVar7;
                *(undefined8 *)pbVar26 = uVar6;
                uVar11 = s_safe_regex__<not_printed>_039308e2._23_8_;
                uVar10 = s_safe_regex__<not_printed>_039308e2._0_8_;
                uVar63 = CONCAT17(s_safe_regex__<not_printed>_039308e2[0xf],
                                  s_safe_regex__<not_printed>_039308e2._8_7_);
                uVar66 = CONCAT71(s_safe_regex__<not_printed>_039308e2._16_7_,
                                  s_safe_regex__<not_printed>_039308e2[0xf]);
                pcVar23[0x1f] = '\0';
                *(undefined8 *)(pcVar23 + 0x17) = uVar11;
                *(undefined8 *)(pcVar23 + 0xf) = uVar66;
                *(undefined8 *)(pcVar23 + 8) = uVar63;
                *(undefined8 *)pcVar23 = uVar10;
                local_d8 = local_d8 + 0x18;
                lVar54 = *(long *)(lVar54 + 0x20);
                goto joined_r0x005c23a4;
              }
              lVar54 = *(long *)(lVar54 + 0x20);
joined_r0x005c23a4:
              if ((lVar54 != 0) && (*(long *)(lVar54 + 8) != 0)) {
                pppppppbStack_1c8 = (byte *******)0x10;
                local_1d0 = "      headers: <";
                    /* try { // try from 005c2554 to 005c255f has its CatchHandler @ 005c3040 */
                lVar54 = FUN_002ed6c0(*(long *)(lVar54 + 8),&local_a8);
                pppppppbVar33 = (byte *******)(lVar54 - (long)&local_a8);
                local_b8 = (byte *******)&local_a8;
                if ((long)pppppppbVar33 < 0) {
                    /* try { // try from 005c2de0 to 005c2dff has its CatchHandler @ 005c2e38 */
                    /* WARNING: Subroutine does not return */
                  __assert_fail("false && \"len <= kMaxSize\"",
                                "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                "operator()");
                }
                local_108 = 0xc;
                local_110 = " element(s)>";
                    /* try { // try from 005c2584 to 005c2597 has its CatchHandler @ 005c3030 */
                pppppppbStack_b0 = pppppppbVar33;
                FUN_002ecfd0(&local_80,&local_1d0,&local_b8,&local_110);
                    /* try { // try from 005c2598 to 005c25a3 has its CatchHandler @ 005c301c */
                FUN_005bef00(&local_e0,&local_80);
                if ((local_80 & 1) != 0) {
                  FUN_002e2ea0(puVar13,local_70);
                }
              }
                    /* try { // try from 005c25b8 to 005c25bf has its CatchHandler @ 005c309c */
              FUN_005bf810(&local_e0);
            }
            pbVar26 = local_d8;
            puVar12 = PTR_FUN_04373078;
            switch(*(undefined4 *)(puVar50 + 0xe)) {
            case 2:
              lVar54 = puVar50[0xd];
                    /* try { // try from 005c25ec to 005c25fb has its CatchHandler @ 005c3054 */
              FUN_005bf53c(&local_e0,"    route {");
              pbVar26 = local_d8;
              puVar12 = PTR_FUN_04373078;
              iVar16 = *(int *)(lVar54 + 0xc0);
              if (iVar16 == 3) {
                lVar54 = *(long *)(lVar54 + 0xb0);
                if (local_d8 < local_d0) {
                  local_d8[0x10] = 0;
                  local_d8[0x11] = 0;
                  local_d8[0x12] = 0;
                  local_d8[0x13] = 0;
                  local_d8[0x14] = 0;
                  local_d8[0x15] = 0;
                  local_d8[0x16] = 0;
                  local_d8[0x17] = 0;
                  local_d8[0] = 0;
                  local_d8[1] = 0;
                  local_d8[2] = 0;
                  local_d8[3] = 0;
                  local_d8[4] = 0;
                  local_d8[5] = 0;
                  local_d8[6] = 0;
                  local_d8[7] = 0;
                  local_d8[8] = 0;
                  local_d8[9] = 0;
                  local_d8[10] = 0;
                  local_d8[0xb] = 0;
                  local_d8[0xc] = 0;
                  local_d8[0xd] = 0;
                  local_d8[0xe] = 0;
                  local_d8[0xf] = 0;
                  pcVar23 = (char *)FUN_002e2e80(puVar12,0x20);
                  *(char **)(pbVar26 + 0x10) = pcVar23;
                  *(undefined8 *)(pbVar26 + 8) = uVar65;
                  *(undefined8 *)pbVar26 = uVar44;
                  uVar11 = s_weighted_clusters___03986133._17_8_;
                  uVar10 = s_weighted_clusters___03986133._0_8_;
                  uVar63 = CONCAT71(s_weighted_clusters___03986133._9_7_,
                                    s_weighted_clusters___03986133[8]);
                  uVar66 = CONCAT17(s_weighted_clusters___03986133[0x10],
                                    s_weighted_clusters___03986133._9_7_);
                  pcVar23[0x19] = '\0';
                  *(undefined8 *)(pcVar23 + 0x11) = uVar11;
                  *(undefined8 *)(pcVar23 + 9) = uVar66;
                  *(undefined8 *)(pcVar23 + 8) = uVar63;
                  *(undefined8 *)pcVar23 = uVar10;
                  local_d8 = local_d8 + 0x18;
                  puVar25 = *(ulong **)(lVar54 + 0x18);
                }
                else {
                  lVar30 = (long)local_d8 - (long)local_e0 >> 3;
                  uVar35 = 0xaaaaaaaaaaaaaaa;
                  uVar51 = lVar30 * -0x5555555555555555 + 1;
                  if (0xaaaaaaaaaaaaaaa < uVar51) {
                    /* try { // try from 005c2e10 to 005c2e17 has its CatchHandler @ 005c2e18 */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar37 = (long)local_d0 - (long)local_e0 >> 3;
                  if ((ulong)(lVar37 * -0x5555555555555555) < 0x555555555555555) {
                    uVar39 = lVar37 * 0x5555555555555556;
                    uVar35 = uVar51;
                    if (uVar51 <= uVar39) {
                      uVar35 = uVar39;
                    }
                    if (uVar35 != 0) goto LAB_005c28f4;
                    lVar37 = 0;
                  }
                  else {
LAB_005c28f4:
                    lVar37 = FUN_002e2e80(PTR_FUN_04373078,uVar35 * 0x18);
                  }
                  pbVar47 = (byte *)(lVar37 + lVar30 * 8);
                  pbVar61 = (byte *)(lVar37 + uVar35 * 0x18);
                  pbVar47[0x10] = 0;
                  pbVar47[0x11] = 0;
                  pbVar47[0x12] = 0;
                  pbVar47[0x13] = 0;
                  pbVar47[0x14] = 0;
                  pbVar47[0x15] = 0;
                  pbVar47[0x16] = 0;
                  pbVar47[0x17] = 0;
                  pbVar47[0] = 0;
                  pbVar47[1] = 0;
                  pbVar47[2] = 0;
                  pbVar47[3] = 0;
                  pbVar47[4] = 0;
                  pbVar47[5] = 0;
                  pbVar47[6] = 0;
                  pbVar47[7] = 0;
                  pbVar47[8] = 0;
                  pbVar47[9] = 0;
                  pbVar47[10] = 0;
                  pbVar47[0xb] = 0;
                  pbVar47[0xc] = 0;
                  pbVar47[0xd] = 0;
                  pbVar47[0xe] = 0;
                  pbVar47[0xf] = 0;
                  pcVar23 = (char *)FUN_002e2e80(puVar12,0x20);
                  pbVar19 = local_e0;
                  *(char **)(pbVar47 + 0x10) = pcVar23;
                  pbVar26 = pbVar47 + 0x18;
                  *(undefined8 *)(pbVar47 + 8) = uVar65;
                  *(undefined8 *)pbVar47 = uVar44;
                  uVar11 = s_weighted_clusters___03986133._17_8_;
                  uVar10 = s_weighted_clusters___03986133._0_8_;
                  uVar63 = CONCAT71(s_weighted_clusters___03986133._9_7_,
                                    s_weighted_clusters___03986133[8]);
                  uVar66 = CONCAT17(s_weighted_clusters___03986133[0x10],
                                    s_weighted_clusters___03986133._9_7_);
                  pcVar23[0x19] = '\0';
                  *(undefined8 *)(pcVar23 + 0x11) = uVar11;
                  *(undefined8 *)(pcVar23 + 9) = uVar66;
                  *(undefined8 *)(pcVar23 + 8) = uVar63;
                  *(undefined8 *)pcVar23 = uVar10;
                  pbVar40 = local_d8;
                  local_d0 = pbVar61;
                  if (local_d8 == local_e0) {
                    local_e0 = pbVar47;
                  }
                  else {
                    do {
                      uVar66 = *(undefined8 *)(pbVar40 + -0x10);
                      uVar63 = *(undefined8 *)(pbVar40 + -0x18);
                      *(undefined8 *)(pbVar47 + -8) = *(undefined8 *)(pbVar40 + -8);
                      *(undefined8 *)(pbVar47 + -0x10) = uVar66;
                      *(undefined8 *)(pbVar47 + -0x18) = uVar63;
                      pbVar40[-0x18] = 0;
                      pbVar40[-0x17] = 0;
                      pbVar40[-0x16] = 0;
                      pbVar40[-0x15] = 0;
                      pbVar40[-0x14] = 0;
                      pbVar40[-0x13] = 0;
                      pbVar40[-0x12] = 0;
                      pbVar40[-0x11] = 0;
                      pbVar40[-0x10] = 0;
                      pbVar40[-0xf] = 0;
                      pbVar40[-0xe] = 0;
                      pbVar40[-0xd] = 0;
                      pbVar40[-0xc] = 0;
                      pbVar40[-0xb] = 0;
                      pbVar40[-10] = 0;
                      pbVar40[-9] = 0;
                      pbVar40[-8] = 0;
                      pbVar40[-7] = 0;
                      pbVar40[-6] = 0;
                      pbVar40[-5] = 0;
                      pbVar40[-4] = 0;
                      pbVar40[-3] = 0;
                      pbVar40[-2] = 0;
                      pbVar40[-1] = 0;
                      pbVar40 = pbVar40 + -0x18;
                      pbVar47 = pbVar47 + -0x18;
                    } while (local_e0 != pbVar40);
                    bVar15 = local_d8 != local_e0;
                    local_e0 = pbVar47;
                    if (bVar15) {
                      bVar4 = local_d8[-0x18];
                      pbVar47 = local_d8 + -0x18;
                      pbVar40 = local_d8;
                      while( true ) {
                        pbVar61 = pbVar47;
                        local_d8 = pbVar26;
                        if ((bVar4 & 1) != 0) {
                          FUN_002e2ea0(puVar13,*(undefined8 *)(pbVar40 + -8));
                        }
                        pbVar26 = local_d8;
                        if (pbVar19 == pbVar61) break;
                        bVar4 = pbVar61[-0x18];
                        pbVar47 = pbVar61 + -0x18;
                        pbVar40 = pbVar61;
                      }
                    }
                  }
                  local_d8 = pbVar26;
                  if (pbVar19 != (byte *)0x0) {
                    FUN_002e2ea0(puVar13,pbVar19);
                  }
                  puVar25 = *(ulong **)(lVar54 + 0x18);
                }
                if ((puVar25 != (ulong *)0x0) && (uVar51 = puVar25[1], uVar51 != 0)) {
                  plVar52 = (long *)(*puVar25 & 0xfffffffffffffff8);
                  do {
                    puVar50 = (undefined8 *)*plVar52;
                    /* try { // try from 005c2a2c to 005c2a37 has its CatchHandler @ 005c318c */
                    FUN_005c36c8(&local_e0,"        clusters {");
                    pppppppbStack_1c8 = (byte *******)puVar50[1];
                    local_1d0 = (char *)*puVar50;
                    /* try { // try from 005c2a40 to 005c2a57 has its CatchHandler @ 005c308c */
                    FUN_005be370("          name",&local_1d0,&local_e0,0);
                    /* try { // try from 005c2a5c to 005c2a73 has its CatchHandler @ 005c318c */
                    FUN_005c39a0("          weight",puVar50[2],&local_e0);
                    FUN_005c3aa0(&local_e0);
                    uVar51 = uVar51 - 1;
                    plVar52 = plVar52 + 1;
                  } while (uVar51 != 0);
                }
                    /* try { // try from 005c2a84 to 005c2aa7 has its CatchHandler @ 005c2fdc */
                FUN_005c39a0("        total_weight",*(undefined8 *)(lVar54 + 0x10),&local_e0);
                FUN_005c3c60(&local_e0);
              }
              else if (iVar16 == 2) {
                pppppppbStack_1c8 = *(byte ********)(lVar54 + 0xb8);
                local_1d0 = *(char **)(lVar54 + 0xb0);
                    /* try { // try from 005c27b0 to 005c27c7 has its CatchHandler @ 005c2f9c */
                FUN_005be370("      cluster_header",&local_1d0,&local_e0,0);
              }
              else if (iVar16 == 1) {
                pppppppbStack_1c8 = *(byte ********)(lVar54 + 0xb8);
                local_1d0 = *(char **)(lVar54 + 0xb0);
                    /* try { // try from 005c2620 to 005c2637 has its CatchHandler @ 005c2f8c */
                FUN_005be370("      cluster",&local_1d0,&local_e0,0);
              }
                    /* try { // try from 005c2aa8 to 005c2aaf has its CatchHandler @ 005c3054 */
              FUN_005bf810(&local_e0);
              break;
            case 3:
              FUN_005c3e28(&local_e0,"    redirect: <not printed>");
              break;
            case 7:
                    /* try { // try from 005c263c to 005c265f has its CatchHandler @ 005c3104 */
              FUN_005c33f4(&local_e0,"    direct_response: <not printed>");
              break;
            case 0x11:
              if (local_d8 < local_d0) {
                local_d8[0] = 0;
                local_d8[1] = 0;
                local_d8[2] = 0;
                local_d8[3] = 0;
                local_d8[4] = 0;
                local_d8[5] = 0;
                local_d8[6] = 0;
                local_d8[7] = 0;
                local_d8[8] = 0;
                local_d8[9] = 0;
                local_d8[10] = 0;
                local_d8[0xb] = 0;
                local_d8[0xc] = 0;
                local_d8[0xd] = 0;
                local_d8[0xe] = 0;
                local_d8[0xf] = 0;
                local_d8[0x10] = 0;
                local_d8[0x11] = 0;
                local_d8[0x12] = 0;
                local_d8[0x13] = 0;
                local_d8[0x14] = 0;
                local_d8[0x15] = 0;
                local_d8[0x16] = 0;
                local_d8[0x17] = 0;
                pcVar23 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
                *(char **)(pbVar26 + 0x10) = pcVar23;
                *(undefined8 *)(pbVar26 + 8) = uVar9;
                *(undefined8 *)pbVar26 = uVar8;
                uVar10 = s_filter_action__<not_printed>_038fb462._24_8_;
                uVar66 = s_filter_action__<not_printed>_038fb462._16_8_;
                uVar63 = s_filter_action__<not_printed>_038fb462._0_8_;
                *(undefined8 *)(pcVar23 + 8) = s_filter_action__<not_printed>_038fb462._8_8_;
                *(undefined8 *)pcVar23 = uVar63;
                *(undefined8 *)(pcVar23 + 0x18) = uVar10;
                *(undefined8 *)(pcVar23 + 0x10) = uVar66;
                pcVar23[0x20] = '\0';
                local_d8 = local_d8 + 0x18;
              }
              else {
                uVar35 = 0xaaaaaaaaaaaaaaa;
                lVar54 = (long)local_d8 - (long)local_e0 >> 3;
                uVar51 = lVar54 * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar51) {
                    /* try { // try from 005c2e00 to 005c2e0f has its CatchHandler @ 005c2e28 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar30 = (long)local_d0 - (long)local_e0 >> 3;
                if ((ulong)(lVar30 * -0x5555555555555555) < 0x555555555555555) {
                  uVar39 = lVar30 * 0x5555555555555556;
                  uVar35 = uVar51;
                  if (uVar51 <= uVar39) {
                    uVar35 = uVar39;
                  }
                  if (uVar35 != 0) goto LAB_005c2718;
                  lVar30 = 0;
                }
                else {
LAB_005c2718:
                  lVar30 = FUN_002e2e80(PTR_FUN_04373078,uVar35 * 0x18);
                }
                pbVar61 = (byte *)(lVar30 + lVar54 * 8);
                pbVar47 = (byte *)(lVar30 + uVar35 * 0x18);
                pbVar61[0x10] = 0;
                pbVar61[0x11] = 0;
                pbVar61[0x12] = 0;
                pbVar61[0x13] = 0;
                pbVar61[0x14] = 0;
                pbVar61[0x15] = 0;
                pbVar61[0x16] = 0;
                pbVar61[0x17] = 0;
                pbVar61[0] = 0;
                pbVar61[1] = 0;
                pbVar61[2] = 0;
                pbVar61[3] = 0;
                pbVar61[4] = 0;
                pbVar61[5] = 0;
                pbVar61[6] = 0;
                pbVar61[7] = 0;
                pbVar61[8] = 0;
                pbVar61[9] = 0;
                pbVar61[10] = 0;
                pbVar61[0xb] = 0;
                pbVar61[0xc] = 0;
                pbVar61[0xd] = 0;
                pbVar61[0xe] = 0;
                pbVar61[0xf] = 0;
                pcVar23 = (char *)FUN_002e2e80(puVar12,0x30);
                pbVar19 = local_e0;
                *(char **)(pbVar61 + 0x10) = pcVar23;
                pbVar26 = pbVar61 + 0x18;
                *(undefined8 *)(pbVar61 + 8) = uVar9;
                *(undefined8 *)pbVar61 = uVar8;
                uVar10 = s_filter_action__<not_printed>_038fb462._24_8_;
                uVar66 = s_filter_action__<not_printed>_038fb462._16_8_;
                uVar63 = s_filter_action__<not_printed>_038fb462._0_8_;
                *(undefined8 *)(pcVar23 + 8) = s_filter_action__<not_printed>_038fb462._8_8_;
                *(undefined8 *)pcVar23 = uVar63;
                *(undefined8 *)(pcVar23 + 0x18) = uVar10;
                *(undefined8 *)(pcVar23 + 0x10) = uVar66;
                pcVar23[0x20] = '\0';
                pbVar40 = local_d8;
                if (local_d8 == local_e0) {
                  local_d8 = local_e0;
                }
                else {
                  do {
                    uVar66 = *(undefined8 *)(pbVar40 + -0x10);
                    uVar63 = *(undefined8 *)(pbVar40 + -0x18);
                    *(undefined8 *)(pbVar61 + -8) = *(undefined8 *)(pbVar40 + -8);
                    *(undefined8 *)(pbVar61 + -0x10) = uVar66;
                    *(undefined8 *)(pbVar61 + -0x18) = uVar63;
                    pbVar40[-0x18] = 0;
                    pbVar40[-0x17] = 0;
                    pbVar40[-0x16] = 0;
                    pbVar40[-0x15] = 0;
                    pbVar40[-0x14] = 0;
                    pbVar40[-0x13] = 0;
                    pbVar40[-0x12] = 0;
                    pbVar40[-0x11] = 0;
                    pbVar40[-0x10] = 0;
                    pbVar40[-0xf] = 0;
                    pbVar40[-0xe] = 0;
                    pbVar40[-0xd] = 0;
                    pbVar40[-0xc] = 0;
                    pbVar40[-0xb] = 0;
                    pbVar40[-10] = 0;
                    pbVar40[-9] = 0;
                    pbVar40[-8] = 0;
                    pbVar40[-7] = 0;
                    pbVar40[-6] = 0;
                    pbVar40[-5] = 0;
                    pbVar40[-4] = 0;
                    pbVar40[-3] = 0;
                    pbVar40[-2] = 0;
                    pbVar40[-1] = 0;
                    pbVar40 = pbVar40 + -0x18;
                    pbVar61 = pbVar61 + -0x18;
                  } while (local_e0 != pbVar40);
                }
                bVar15 = local_d8 != local_e0;
                local_e0 = pbVar61;
                local_d0 = pbVar47;
                if (bVar15) {
                  bVar4 = local_d8[-0x18];
                  pbVar47 = local_d8 + -0x18;
                  pbVar40 = local_d8;
                  while( true ) {
                    pbVar61 = pbVar47;
                    local_d8 = pbVar26;
                    if ((bVar4 & 1) != 0) {
                      FUN_002e2ea0(puVar13,*(undefined8 *)(pbVar40 + -8));
                    }
                    pbVar26 = local_d8;
                    if (pbVar19 == pbVar61) break;
                    bVar4 = pbVar61[-0x18];
                    pbVar47 = pbVar61 + -0x18;
                    pbVar40 = pbVar61;
                  }
                }
                local_d8 = pbVar26;
                if (pbVar19 != (byte *)0x0) {
                  FUN_002e2ea0(puVar13,pbVar19);
                }
              }
            }
            pppppppbStack_1c8 = (byte *******)0x0;
            pppppppbStack_1c0 = (byte *******)0x0;
            pcVar59[2] = '}';
            pcVar59[0] = ' ';
            pcVar59[1] = ' ';
            local_1d0 = (char *)0x6;
                    /* try { // try from 005c2ad0 to 005c2adb has its CatchHandler @ 005c30cc */
            FUN_005b7b7c(&local_e0,&local_1d0);
            if (((ulong)local_1d0 & 1) != 0) {
              FUN_002e2ea0(puVar13,pppppppbStack_1c0);
            }
            uVar43 = uVar43 + 1;
          } while (uVar43 != unaff_x23);
        }
        pppppppbStack_1c8 = (byte *******)0x0;
        pppppppbStack_1c0 = (byte *******)0x0;
        local_1d0 = (char *)0x7d02;
                    /* try { // try from 005c2b10 to 005c2b1b has its CatchHandler @ 005c2fac */
        FUN_005b7b7c(&local_e0,&local_1d0);
        if (((ulong)local_1d0 & 1) != 0) {
          FUN_002e2ea0(puVar13,pppppppbStack_1c0);
        }
        uVar56 = uVar56 + 1;
      } while (uVar56 != uVar49);
    }
                    /* try { // try from 005c2b3c to 005c2b53 has its CatchHandler @ 005c2f6c */
    FUN_002e5790(&local_1d0,local_e0,local_d8,&DAT_0396725e,1);
    pppppppbVar33 = (byte *******)((ulong)&local_1d0 | 1);
    if (((ulong)local_1d0 & 1) != 0) {
      pppppppbVar33 = pppppppbStack_1c0;
    }
                    /* try { // try from 005c2b68 to 005c2b87 has its CatchHandler @ 005c2f5c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc",
                 0x2e5,0,"[xds_client %p] RouteConfiguration: %s",param_1,pppppppbVar33);
    if (((ulong)local_1d0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,pppppppbStack_1c0);
    }
    pbVar26 = local_e0;
    puVar13 = PTR_LAB_04373088;
    if (local_e0 == (byte *)0x0) goto LAB_005c0220;
    if (local_d8 != local_e0) {
      bVar4 = local_d8[-0x18];
      pbVar40 = local_d8 + -0x18;
      pbVar19 = local_d8;
      while( true ) {
        pbVar47 = pbVar40;
        if ((bVar4 & 1) != 0) {
          FUN_002e2ea0(puVar13,*(undefined8 *)(pbVar19 + -8));
        }
        if (pbVar26 == pbVar47) break;
        bVar4 = pbVar47[-0x18];
        pbVar40 = pbVar47 + -0x18;
        pbVar19 = pbVar47;
      }
    }
    local_d8 = pbVar26;
    FUN_002e2ea0(PTR_LAB_04373088,local_e0);
    puVar25 = *(ulong **)(param_3 + 0x28);
  }
  if ((puVar25 != (ulong *)0x0) && (local_208 = *(ulong *)((long)puVar25 + 8), local_208 != 0)) {
    pppppppbVar33 = (byte *******)((ulong)&local_b8 | 1);
    pppppppbVar34 = (byte *******)((ulong)local_130 | 1);
    local_200 = (byte ******)(*puVar25 & 0xfffffffffffffff8);
    pbVar26 = (byte *)((ulong)&local_150 | 1);
    uVar49 = 0;
    local_240 = (byte *****)0x0;
    local_1e8 = (byte *******)0x0;
    uVar24 = 4;
    do {
      ppppbVar27 = local_200[uVar49][9];
      if ((ppppbVar27 != (byte ****)0x0) && (pppbVar55 = ppppbVar27[1], pppbVar55 != (byte ***)0x0))
      {
        pppbVar28 = *ppppbVar27;
        pppbVar53 = (byte ***)0x0;
        do {
          puVar50 = (undefined8 *)(((ulong)pppbVar28 & 0xfffffffffffffff8) + (long)pppbVar53 * 0x10)
          ;
          pvVar18 = (void *)*puVar50;
          pppppppbVar45 = (byte *******)puVar50[1];
          local_a8 = (byte *******)0x0;
          pppppppbStack_b0 = (byte *******)0x0;
          local_b8 = (byte *******)0x0;
          if ((byte *******)0xffffffffffffffef < pppppppbVar45) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (&DAT_00000016 < pppppppbVar45) {
            pppppppbVar17 =
                 (byte *******)
                 FUN_002e2e80(PTR_FUN_04373078,(ulong)(pppppppbVar45 + 2) & 0xfffffffffffffff0);
            local_b8 = (byte *******)((ulong)(pppppppbVar45 + 2) & 0xfffffffffffffff0 | 1);
            pppppppbStack_b0 = pppppppbVar45;
            local_a8 = pppppppbVar17;
LAB_005c0310:
            memcpy(pppppppbVar17,pvVar18,(size_t)pppppppbVar45);
          }
          else {
            local_b8 = (byte *******)(ulong)(byte)((int)pppppppbVar45 << 1);
            pppppppbVar17 = pppppppbVar33;
            if (pppppppbVar45 != (byte *******)0x0) goto LAB_005c0310;
          }
          pppppppbVar62 = local_a8;
          pppppppbVar14 = pppppppbStack_b0;
          pppppppbVar46 = local_b8;
          *(byte *)((long)pppppppbVar17 + (long)pppppppbVar45) = 0;
          pppppppbVar45 = (byte *******)((ulong)local_b8 >> 1 & 0x7f);
          if (((ulong)local_b8 & 1) != 0) {
            pppppppbVar45 = pppppppbStack_b0;
          }
          if (pppppppbVar45 == (byte *******)0x0) {
LAB_005c03e4:
                    /* try { // try from 005c03e4 to 005c040f has its CatchHandler @ 005c32d8 */
            FUN_002f2c60(&local_1d0,"Invalid domain pattern.");
            unaff_x23 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                     ,0x50a,&local_1d0,0,0);
            iVar16 = 1;
          }
          else {
            pppppppbVar17 = pppppppbVar33;
            if (((ulong)local_b8 & 1) != 0) {
              pppppppbVar17 = local_a8;
            }
            pvVar18 = memchr(pppppppbVar17,0x2a,(size_t)pppppppbVar45);
            uVar32 = 0;
            if ((pvVar18 != (void *)0x0) && ((long)pvVar18 - (long)pppppppbVar17 != -1)) {
              uVar32 = 3;
              if (pppppppbVar45 != (byte *******)0x1) {
                uVar32 = 1;
              }
              if (*(byte *)pppppppbVar17 != 0x2a) {
                if (((byte *)((long)pppppppbVar45 + (long)pppppppbVar17))[-1] != 0x2a)
                goto LAB_005c03e4;
                uVar32 = 2;
              }
            }
            if ((uVar32 <= uVar24) && ((local_1e8 < pppppppbVar45 || (uVar32 != uVar24)))) {
              pppppppbStack_128 = (byte *******)0x0;
              local_120 = (byte *******)0x0;
              local_130 = (undefined1  [8])0x0;
              if (((ulong)pppppppbVar46 & 1) == 0) {
                local_120 = local_a8;
                pppppppbStack_128 = pppppppbStack_b0;
                local_130 = (undefined1  [8])local_b8;
              }
              else {
                if ((byte *******)0xffffffffffffffef < pppppppbVar14) {
                    /* try { // try from 005c2c74 to 005c2c7b has its CatchHandler @ 005c2ef4 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (&DAT_00000016 < pppppppbVar14) {
                  pppppppbVar45 =
                       (byte *******)
                       FUN_002e2e80(PTR_FUN_04373078,(ulong)(pppppppbVar14 + 2) & 0xfffffffffffffff0
                                   );
                  local_130 = (undefined1  [8])((ulong)(pppppppbVar14 + 2) & 0xfffffffffffffff0 | 1)
                  ;
                  pppppppbStack_128 = pppppppbVar14;
                  local_120 = pppppppbVar45;
LAB_005c0470:
                  memcpy(pppppppbVar45,pppppppbVar62,(size_t)pppppppbVar14);
                }
                else {
                  local_130._1_7_ = 0;
                  local_130[0] = (byte)((int)pppppppbVar14 << 1);
                  pppppppbVar45 = pppppppbVar34;
                  if (pppppppbVar14 != (byte *******)0x0) goto LAB_005c0470;
                }
                *(byte *)((long)pppppppbVar45 + (long)pppppppbVar14) = 0;
              }
              pppppppbStack_148 = (byte *******)0x0;
              local_140 = (byte *)0x0;
              local_150 = 0;
              if ((*param_4 & 1) == 0) {
                pppppppbStack_148 = (byte *******)param_4[1];
                local_150 = *param_4;
                local_140 = (byte *)param_4[2];
                if (((ulong)(byte)local_130[0] & 1) != 0) goto LAB_005c0500;
LAB_005c04b0:
                pppppppbVar45 = (byte *******)(local_130 + ((ulong)(byte)local_130[0] >> 1) + 1);
                pppppppbVar17 = pppppppbVar34;
                if (pppppppbVar34 != pppppppbVar45) {
LAB_005c0510:
                  do {
                    iVar16 = tolower((uint)*(byte *)pppppppbVar17);
                    pppppppbVar46 = (byte *******)((long)pppppppbVar17 + 1);
                    *(byte *)pppppppbVar17 = (byte)iVar16;
                    pppppppbVar17 = pppppppbVar46;
                  } while (pppppppbVar45 != pppppppbVar46);
                }
              }
              else {
                pppppppbVar45 = (byte *******)param_4[1];
                if ((byte *******)0xffffffffffffffef < pppppppbVar45) {
                    /* try { // try from 005c2c7c to 005c2c83 has its CatchHandler @ 005c2ee4 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                pvVar18 = (void *)param_4[2];
                if (&DAT_00000016 < pppppppbVar45) {
                  pbVar19 = (byte *)FUN_002e2e80(PTR_FUN_04373078,
                                                 (ulong)(pppppppbVar45 + 2) & 0xfffffffffffffff0);
                  local_150 = (ulong)(pppppppbVar45 + 2) & 0xfffffffffffffff0 | 1;
                  pppppppbStack_148 = pppppppbVar45;
                  local_140 = pbVar19;
LAB_005c0754:
                  memcpy(pbVar19,pvVar18,(size_t)pppppppbVar45);
                  pbVar19[(long)pppppppbVar45] = 0;
                }
                else {
                  local_150 = (ulong)(byte)((int)pppppppbVar45 << 1);
                  pbVar19 = pbVar26;
                  if (pppppppbVar45 != (byte *******)0x0) goto LAB_005c0754;
                  *pbVar26 = 0;
                }
                if (((ulong)local_130 & 1) == 0) goto LAB_005c04b0;
LAB_005c0500:
                pppppppbVar45 = (byte *******)((long)local_120 + (long)pppppppbStack_128);
                pppppppbVar17 = local_120;
                if (local_120 != pppppppbVar45) goto LAB_005c0510;
              }
              if ((local_150 & 1) == 0) {
                pbVar19 = (byte *)((long)&local_150 + (local_150 >> 1 & 0x7f) + 1);
                pbVar40 = pbVar26;
                if (pbVar26 != pbVar19) goto LAB_005c0558;
              }
              else {
                pbVar19 = local_140 + (long)pppppppbStack_148;
                pbVar40 = local_140;
                if (local_140 != pbVar19) {
LAB_005c0558:
                  do {
                    iVar16 = tolower((uint)*pbVar40);
                    pbVar47 = pbVar40 + 1;
                    *pbVar40 = (byte)iVar16;
                    pbVar40 = pbVar47;
                  } while (pbVar19 != pbVar47);
                }
              }
              uVar56 = local_150;
              switch(uVar32) {
              case 0:
                pppppppbVar17 = (byte *******)(ulong)(local_130[0] >> 1);
                pppppppbVar45 = pppppppbVar17;
                if (((ulong)(byte)local_130[0] & 1) != 0) {
                  pppppppbVar45 = pppppppbStack_128;
                }
                pppppppbVar46 = (byte *******)(ulong)((byte)local_150 >> 1);
                if ((local_150 & 1) != 0) {
                  pppppppbVar46 = pppppppbStack_148;
                }
                if (pppppppbVar45 != pppppppbVar46) goto LAB_005c0850;
                pppppppbVar46 = pppppppbVar34;
                if (((ulong)(byte)local_130[0] & 1) != 0) {
                  pppppppbVar46 = local_120;
                }
                pbVar19 = pbVar26;
                if ((local_150 & 1) != 0) {
                  pbVar19 = local_140;
                }
                if (((ulong)(byte)local_130[0] & 1) == 0) {
                  pppppppbVar46 = pppppppbVar34;
                  if (pppppppbVar45 != (byte *******)0x0) {
                    do {
                      if (*(byte *)pppppppbVar46 != *pbVar19) goto LAB_005c0850;
                      pppppppbVar17 = (byte *******)((long)pppppppbVar17 + -1);
                      pppppppbVar46 = (byte *******)((long)pppppppbVar46 + 1);
                      pbVar19 = pbVar19 + 1;
                    } while (pppppppbVar17 != (byte *******)0x0);
                    goto LAB_005c068c;
                  }
                }
                else if (pppppppbVar45 != (byte *******)0x0) {
                  iVar16 = memcmp(pppppppbVar46,pbVar19,(size_t)pppppppbVar45);
                  bVar15 = iVar16 == 0;
                  break;
                }
LAB_005c0838:
                bVar15 = true;
                break;
              case 1:
                uVar29 = local_150 & 1;
                pppppppbVar45 = (byte *******)(ulong)((byte)local_150 >> 1);
                if ((local_150 & 1) != 0) {
                  pppppppbVar45 = pppppppbStack_148;
                }
                pppppppbVar17 = (byte *******)(ulong)(local_130[0] >> 1);
                if (((ulong)(byte)local_130[0] & 1) != 0) {
                  pppppppbVar17 = pppppppbStack_128;
                }
                if (pppppppbVar17 <= pppppppbVar45) {
                  pppppppbVar17 = pppppppbVar34;
                  if (((ulong)(byte)local_130[0] & 1) != 0) {
                    pppppppbVar17 = local_120;
                  }
                  __n = strlen((char *)((long)pppppppbVar17 + 1));
                  if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("false && \"len <= kMaxSize\"",
                                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                  "operator()");
                  }
                  pbVar19 = pbVar26;
                  if (uVar29 != 0) {
                    pbVar19 = local_140;
                  }
                  pbVar19 = pbVar19 + (long)pppppppbVar45 + -__n;
                  if (pbVar19 == (byte *)0x0) {
                    if (__n == 0) goto LAB_005c07fc;
                  }
                  else {
                    sVar20 = strlen((char *)pbVar19);
                    if ((long)sVar20 < 0) {
                    /* WARNING: Subroutine does not return */
                      __assert_fail("false && \"len <= kMaxSize\"",
                                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                    "operator()");
                    }
                    if (__n == sVar20) {
LAB_005c07fc:
                      if (__n == 0) goto LAB_005c0838;
                      iVar16 = memcmp((byte *)((long)pppppppbVar17 + 1),pbVar19,__n);
                      bVar15 = iVar16 == 0;
                      break;
                    }
                  }
                }
LAB_005c0850:
                bVar15 = false;
                break;
              case 2:
                pppppppbVar45 = (byte *******)(ulong)((byte)local_150 >> 1);
                if ((local_150 & 1) != 0) {
                  pppppppbVar45 = pppppppbStack_148;
                }
                pppppppbVar17 = (byte *******)(ulong)(local_130[0] >> 1);
                if (((ulong)(byte)local_130[0] & 1) != 0) {
                  pppppppbVar17 = pppppppbStack_128;
                }
                if (pppppppbVar45 < pppppppbVar17) goto LAB_005c0850;
                pppppppbVar45 = pppppppbVar34;
                if (((ulong)(byte)local_130[0] & 1) != 0) {
                  pppppppbVar45 = local_120;
                }
                pbVar19 = (byte *)((long)pppppppbVar17 + -1);
                if ((long)pbVar19 < 0) {
                    /* try { // try from 005c2c84 to 005c2ce3 has its CatchHandler @ 005c2f08 */
                    /* WARNING: Subroutine does not return */
                  __assert_fail("false && \"len <= kMaxSize\"",
                                "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                "operator()");
                }
                if (pbVar19 == (byte *)0x0) goto LAB_005c0838;
                pbVar40 = pbVar26;
                if ((local_150 & 1) != 0) {
                  pbVar40 = local_140;
                }
                iVar16 = memcmp(pppppppbVar45,pbVar40,(size_t)pbVar19);
                bVar15 = iVar16 == 0;
                break;
              case 3:
LAB_005c068c:
                bVar15 = true;
              }
              if ((uVar56 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_140);
              }
              if (((ulong)(byte)local_130[0] & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_120);
              }
              if (bVar15) {
                local_240 = local_200[uVar49];
                local_1e8 = (byte *******)((ulong)local_b8 >> 1 & 0x7f);
                if (((ulong)local_b8 & 1) != 0) {
                  local_1e8 = pppppppbStack_b0;
                }
                iVar16 = 5;
                uVar24 = uVar32;
                if (uVar32 != 0) {
                  iVar16 = 0;
                }
                goto joined_r0x005c041c;
              }
            }
            iVar16 = 7;
          }
joined_r0x005c041c:
          if (((ulong)local_b8 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_a8);
          }
          if ((iVar16 != 7) && (iVar16 != 0)) {
            if (iVar16 != 5) goto LAB_005c086c;
            break;
          }
          pppbVar53 = (byte ***)((long)pppbVar53 + 1);
        } while (pppbVar53 != pppbVar55);
      }
      iVar16 = (uint)(uVar24 == 0) << 1;
LAB_005c086c:
      if (iVar16 != 0) {
        if (iVar16 != 2) {
          return unaff_x23;
        }
        break;
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 != local_208);
    if (local_240 != (byte *****)0x0) {
      ppppbVar27 = local_240[10];
      if ((ppppbVar27 == (byte ****)0x0) || (pppbVar55 = ppppbVar27[1], pppbVar55 == (byte ***)0x0))
      {
        FUN_002f2c60(&local_1d0,"No route found in the virtual host.");
        uVar44 = 0x526;
      }
      else {
        pppbVar28 = *ppppbVar27;
        pppppppbVar33 = (byte *******)((ulong)&local_b8 | 1);
        pppbVar53 = (byte ***)0x0;
        do {
          lVar54 = *(long *)(((ulong)pppbVar28 & 0xfffffffffffffff8) + (long)pppbVar53 * 8);
          puVar50 = *(undefined8 **)(lVar54 + 0x10);
          if ((puVar50[5] == 0) || (*(long *)(puVar50[5] + 8) == 0)) {
            uStack_190 = uStack_190 & 0xffffffffffffff00;
            pppppppbStack_198 = (byte *******)((ulong)pppppppbStack_198 & 0xffffffffffffff00);
            lStack_1b0 = 0;
            local_1b8 = (byte *******)0x0;
            pppppppbStack_1a0 = (byte *******)0x0;
            local_1a8 = (byte *******)0x0;
            pppppppbStack_1c0 = (byte *******)0x0;
            pppppppbStack_1c8 = (byte *******)0x0;
            pppppppbStack_180 = (byte *******)0x0;
            local_188 = (byte *******)0x0;
            pbStack_170 = (byte *)0x0;
            local_178 = (byte *******)0x0;
            local_160 = (byte *)0x0;
            local_168 = (byte *)0x0;
            iVar16 = *(int *)(puVar50 + 8);
            if (iVar16 == 10) {
              puVar60 = (undefined8 *)puVar50[6];
              if (puVar60 == (undefined8 *)0x0) {
                    /* try { // try from 005c2d58 to 005c2d87 has its CatchHandler @ 005c2e9c */
                FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                             ,0x42a,2,"assertion failed: %s","regex_matcher != nullptr");
                    /* WARNING: Subroutine does not return */
                abort();
              }
              pvVar18 = (void *)*puVar60;
              uVar49 = puVar60[1];
              local_70 = (void *)0x0;
              local_78 = 0;
              local_80 = 0;
              if (0xffffffffffffffef < uVar49) {
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar49 < 0x17) {
                local_80 = (ulong)(byte)((int)uVar49 << 1);
                pvVar21 = (void *)((ulong)&local_80 | 1);
                if (uVar49 != 0) goto LAB_005c0c9c;
              }
              else {
                uVar56 = uVar49 + 0x10 & 0xfffffffffffffff0;
                pvVar21 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar56);
                local_80 = uVar56 | 1;
                local_78 = uVar49;
                local_70 = pvVar21;
LAB_005c0c9c:
                memcpy(pvVar21,pvVar18,uVar49);
              }
              *(undefined1 *)((long)pvVar21 + uVar49) = 0;
              lVar30 = FUN_002e2e80(PTR_FUN_04373078,200);
              if (lVar30 != 0) {
                    /* try { // try from 005c0cc8 to 005c0cd3 has its CatchHandler @ 005c31f8 */
                FUN_0054ee04(lVar30,&local_80);
              }
              lVar37 = lStack_1b0;
              if (*(int *)(lVar30 + 0x40) == 0) {
                local_1d0 = (char *)CONCAT44(local_1d0._4_4_,2);
                if (lStack_1b0 != 0) {
                  lStack_1b0 = lVar30;
                  FUN_0054f474(lVar37);
                  bVar15 = true;
                  goto LAB_005c0d68;
                }
                bVar15 = true;
                lStack_1b0 = lVar30;
              }
              else {
                    /* try { // try from 005c0cdc to 005c0d0b has its CatchHandler @ 005c321c */
                FUN_002f2c60(&local_b8,"Invalid regex string specified in path matcher.");
                local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x430,&local_b8,0,0);
                FUN_0054f474(lVar30);
                bVar15 = false;
                lVar37 = lVar30;
LAB_005c0d68:
                FUN_002e2ea0(PTR_LAB_04373088,lVar37);
              }
              if ((local_80 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_70);
              }
              if (!bVar15) goto LAB_005c0d9c;
LAB_005c0f78:
              puVar25 = (ulong *)puVar50[4];
              if ((puVar25 != (ulong *)0x0) && (uVar49 = puVar25[1], uVar49 != 0)) {
                uVar29 = *puVar25;
                uVar56 = 0;
LAB_005c100c:
                pbVar26 = *(byte **)((uVar29 & 0xfffffffffffffff8) + uVar56 * 8);
                pvVar18 = *(void **)(pbVar26 + 8);
                pppppppbVar34 = *(byte ********)(pbVar26 + 0x10);
                local_a8 = (byte *******)0x0;
                pppppppbStack_b0 = (byte *******)0x0;
                local_b8 = (byte *******)0x0;
                if ((byte *******)0xffffffffffffffef < pppppppbVar34) {
                    /* try { // try from 005c2c6c to 005c2c73 has its CatchHandler @ 005c2f04 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (&DAT_00000016 < pppppppbVar34) {
                  pppppppbVar45 =
                       (byte *******)
                       FUN_002e2e80(PTR_FUN_04373078,(ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0
                                   );
                  local_b8 = (byte *******)((ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0 | 1);
                  pppppppbStack_b0 = pppppppbVar34;
                  local_a8 = pppppppbVar45;
LAB_005c1074:
                  memcpy(pppppppbVar45,pvVar18,(size_t)pppppppbVar34);
                }
                else {
                  local_b8 = (byte *******)(ulong)(byte)((int)pppppppbVar34 << 1);
                  pppppppbVar45 = pppppppbVar33;
                  if (pppppppbVar34 != (byte *******)0x0) goto LAB_005c1074;
                }
                pppppppbVar14 = local_a8;
                pppppppbVar46 = pppppppbStack_b0;
                pppppppbVar17 = local_b8;
                *(byte *)((long)pppppppbVar45 + (long)pppppppbVar34) = 0;
                switch(*(undefined4 *)(pbVar26 + 0x28)) {
                case 4:
                  pvVar18 = *(void **)(pbVar26 + 0x18);
                  pppppppbVar34 = *(byte ********)(pbVar26 + 0x20);
                  local_a8 = (byte *******)0x0;
                  pppppppbStack_b0 = (byte *******)0x0;
                  local_b8 = (byte *******)0x0;
                  if ((byte *******)0xffffffffffffffef < pppppppbVar34) {
                    /* try { // try from 005c2d44 to 005c2d4f has its CatchHandler @ 005c2e5c */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  if (&DAT_00000016 < pppppppbVar34) {
                    pppppppbVar45 =
                         (byte *******)
                         FUN_002e2e80(PTR_FUN_04373078,
                                      (ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0);
                    local_b8 = (byte *******)((ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0 | 1);
                    pppppppbStack_b0 = pppppppbVar34;
                    local_a8 = pppppppbVar45;
LAB_005c131c:
                    memcpy(pppppppbVar45,pvVar18,(size_t)pppppppbVar34);
                  }
                  else {
                    local_b8 = (byte *******)(ulong)(byte)((int)pppppppbVar34 << 1);
                    pppppppbVar45 = pppppppbVar33;
                    if (pppppppbVar34 != (byte *******)0x0) goto LAB_005c131c;
                  }
                  *(byte *)((long)pppppppbVar45 + (long)pppppppbVar34) = 0;
                  ppppppbVar22 = (byte ******)0x0;
                  uVar24 = 0;
                  uVar31 = (ulong)local_b8 >> 8;
                  uVar43 = (ulong)local_b8 >> 0x10;
                  uVar58 = (ushort)*pbVar26;
                  uVar57 = (ushort)*pbVar26;
                  pppppppbVar34 = local_b8;
                  pppppppbVar45 = local_a8;
                  pppppppbVar62 = pppppppbStack_b0;
                  if (pppppppbStack_1a0 < pppppppbStack_198) goto LAB_005c0fa4;
                  goto LAB_005c1430;
                default:
                    /* try { // try from 005c167c to 005c16ab has its CatchHandler @ 005c3208 */
                  FUN_002f2c60(&local_b8,"Invalid route header matcher specified.");
                  local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                           ,0x476,&local_b8,0,0);
                  break;
                case 6:
                  local_1e8 = (byte *******)**(undefined8 **)(pbVar26 + 0x18);
                  local_200 = (byte ******)(*(undefined8 **)(pbVar26 + 0x18))[1];
                  if ((long)local_1e8 <= (long)local_200) {
                    pppppppbVar45 = (byte *******)0x0;
                    pppppppbVar62 = (byte *******)0x0;
                    uVar43 = 0;
                    uVar31 = 0;
                    pppppppbVar34 = (byte *******)0x0;
                    uVar24 = 2;
                    goto LAB_005c141c;
                  }
                    /* try { // try from 005c1ee4 to 005c1f13 has its CatchHandler @ 005c3088 */
                  FUN_002f2c60(&local_b8,
                               "Invalid range header matcher specifier specified: end cannot be smaller than start."
                              );
                  local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                           ,0x463,&local_b8,0,0);
                  break;
                case 7:
                  pppppppbVar45 = (byte *******)0x0;
                  pppppppbVar62 = (byte *******)0x0;
                  uVar43 = 0;
                  local_208 = (ulong)pbVar26[0x18];
                  uVar31 = 0;
                  pppppppbVar34 = (byte *******)0x0;
                  uVar24 = 3;
                  goto LAB_005c141c;
                case 9:
                  pvVar18 = *(void **)(pbVar26 + 0x18);
                  pppppppbVar34 = *(byte ********)(pbVar26 + 0x20);
                  local_a8 = (byte *******)0x0;
                  pppppppbStack_b0 = (byte *******)0x0;
                  local_b8 = (byte *******)0x0;
                  if ((byte *******)0xffffffffffffffef < pppppppbVar34) {
                    /* try { // try from 005c2d2c to 005c2d37 has its CatchHandler @ 005c2e7c */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  if (&DAT_00000016 < pppppppbVar34) {
                    pppppppbVar45 =
                         (byte *******)
                         FUN_002e2e80(PTR_FUN_04373078,
                                      (ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0);
                    local_b8 = (byte *******)((ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0 | 1);
                    pppppppbStack_b0 = pppppppbVar34;
                    local_a8 = pppppppbVar45;
LAB_005c138c:
                    memcpy(pppppppbVar45,pvVar18,(size_t)pppppppbVar34);
                  }
                  else {
                    local_b8 = (byte *******)(ulong)(byte)((int)pppppppbVar34 << 1);
                    pppppppbVar45 = pppppppbVar33;
                    if (pppppppbVar34 != (byte *******)0x0) goto LAB_005c138c;
                  }
                  *(byte *)((long)pppppppbVar45 + (long)pppppppbVar34) = 0;
                  uVar31 = (ulong)local_b8 >> 8;
                  uVar43 = (ulong)local_b8 >> 0x10;
                  uVar24 = 4;
                  pppppppbVar34 = local_b8;
                  pppppppbVar45 = local_a8;
                  pppppppbVar62 = pppppppbStack_b0;
                  goto LAB_005c141c;
                case 10:
                  pvVar18 = *(void **)(pbVar26 + 0x18);
                  pppppppbVar34 = *(byte ********)(pbVar26 + 0x20);
                  local_a8 = (byte *******)0x0;
                  pppppppbStack_b0 = (byte *******)0x0;
                  local_b8 = (byte *******)0x0;
                  if ((byte *******)0xffffffffffffffef < pppppppbVar34) {
                    /* try { // try from 005c2d38 to 005c2d43 has its CatchHandler @ 005c2e6c */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  if (&DAT_00000016 < pppppppbVar34) {
                    pppppppbVar45 =
                         (byte *******)
                         FUN_002e2e80(PTR_FUN_04373078,
                                      (ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0);
                    local_b8 = (byte *******)((ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0 | 1);
                    pppppppbStack_b0 = pppppppbVar34;
                    local_a8 = pppppppbVar45;
LAB_005c13ec:
                    memcpy(pppppppbVar45,pvVar18,(size_t)pppppppbVar34);
                  }
                  else {
                    local_b8 = (byte *******)(ulong)(byte)((int)pppppppbVar34 << 1);
                    pppppppbVar45 = pppppppbVar33;
                    if (pppppppbVar34 != (byte *******)0x0) goto LAB_005c13ec;
                  }
                  *(byte *)((long)pppppppbVar45 + (long)pppppppbVar34) = 0;
                  uVar31 = (ulong)local_b8 >> 8;
                  uVar43 = (ulong)local_b8 >> 0x10;
                  uVar24 = 5;
                  pppppppbVar34 = local_b8;
                  pppppppbVar45 = local_a8;
                  pppppppbVar62 = pppppppbStack_b0;
LAB_005c141c:
                  ppppppbVar22 = (byte ******)0x0;
                  uVar58 = (ushort)*pbVar26;
                  uVar57 = (ushort)*pbVar26;
                  if (pppppppbStack_1a0 < pppppppbStack_198) {
LAB_005c0fa4:
                    *pppppppbStack_1a0 = (byte ******)pppppppbVar17;
                    pppppppbStack_1a0[1] = (byte ******)pppppppbVar46;
                    *(uint *)(pppppppbStack_1a0 + 3) = uVar24;
                    pppppppbStack_1a0[4] = (byte ******)local_1e8;
                    pppppppbStack_1a0[5] = local_200;
                    pppppppbStack_1a0[2] = (byte ******)pppppppbVar14;
                    pppppppbStack_1a0[8] = (byte ******)pppppppbVar45;
                    pppppppbStack_1a0[9] = ppppppbVar22;
                    pppppppbStack_1a0[6] =
                         (byte ******)
                         (uVar43 << 0x10 | (uVar31 & 0xff) << 8 | (ulong)pppppppbVar34 & 0xff);
                    pppppppbStack_1a0[7] = (byte ******)pppppppbVar62;
                    *(ushort *)(pppppppbStack_1a0 + 10) = (ushort)local_208 & 0xff | uVar57 << 8;
                    pppppppbStack_1a0 = pppppppbStack_1a0 + 0xb;
                  }
                  else {
LAB_005c1430:
                    lVar30 = (long)pppppppbStack_1a0 - (long)local_1a8 >> 3;
                    uVar51 = lVar30 * 0x2e8ba2e8ba2e8ba3 + 1;
                    if (0x2e8ba2e8ba2e8ba < uVar51) {
                    /* try { // try from 005c2ce4 to 005c2cf3 has its CatchHandler @ 005c2eb0 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar37 = (long)pppppppbStack_198 - (long)local_1a8 >> 3;
                    local_98 = (byte *******)&pppppppbStack_198;
                    if ((ulong)(lVar37 * 0x2e8ba2e8ba2e8ba3) < 0x1745d1745d1745d) {
                      uVar35 = lVar37 * 0x5d1745d1745d1746;
                      if (uVar51 <= uVar35) {
                        uVar51 = uVar35;
                      }
                      if (uVar51 != 0) goto LAB_005c14c8;
                      lVar37 = 0;
                    }
                    else {
                      uVar51 = 0x2e8ba2e8ba2e8ba;
LAB_005c14c8:
                      local_a0 = (byte *******)0x0;
                      lVar37 = FUN_002e2e80(PTR_FUN_04373078,uVar51 * 0x58);
                    }
                    pppppppbStack_b0 = (byte *******)(lVar37 + lVar30 * 8);
                    *pppppppbStack_b0 = (byte ******)pppppppbVar17;
                    pppppppbStack_b0[1] = (byte ******)pppppppbVar46;
                    pppppppbStack_b0[2] = (byte ******)pppppppbVar14;
                    *(uint *)(pppppppbStack_b0 + 3) = uVar24;
                    pppppppbStack_b0[4] = (byte ******)local_1e8;
                    pppppppbStack_b0[5] = local_200;
                    pppppppbStack_b0[6] =
                         (byte ******)
                         (uVar43 << 0x10 | (uVar31 & 0xff) << 8 | (ulong)pppppppbVar34 & 0xff);
                    pppppppbStack_b0[7] = (byte ******)pppppppbVar62;
                    pppppppbStack_b0[8] = (byte ******)pppppppbVar45;
                    pppppppbStack_b0[9] = ppppppbVar22;
                    *(ushort *)(pppppppbStack_b0 + 10) = (ushort)local_208 & 0xff | uVar58 << 8;
                    pppppppbVar34 = pppppppbStack_b0 + 0xb;
                    if (pppppppbStack_1a0 == local_1a8) {
                      pppppppbStack_1a0 = local_1a8;
                    }
                    else {
                      pppppppbVar45 = pppppppbStack_1a0;
                      do {
                        ppppppbVar64 = pppppppbVar45[-10];
                        ppppppbVar22 = pppppppbVar45[-0xb];
                        pppppppbStack_b0[-9] = pppppppbVar45[-9];
                        pppppppbStack_b0[-10] = ppppppbVar64;
                        pppppppbStack_b0[-0xb] = ppppppbVar22;
                        ppppppbVar64 = pppppppbVar45[-7];
                        ppppppbVar22 = pppppppbVar45[-8];
                        pppppppbVar45[-10] = (byte ******)0x0;
                        pppppppbVar45[-9] = (byte ******)0x0;
                        pppppppbVar45[-0xb] = (byte ******)0x0;
                        pppppppbStack_b0[-6] = pppppppbVar45[-6];
                        pppppppbStack_b0[-7] = ppppppbVar64;
                        pppppppbStack_b0[-8] = ppppppbVar22;
                        ppppppbVar64 = pppppppbVar45[-4];
                        ppppppbVar22 = pppppppbVar45[-5];
                        pppppppbStack_b0[-3] = pppppppbVar45[-3];
                        pppppppbStack_b0[-4] = ppppppbVar64;
                        pppppppbStack_b0[-5] = ppppppbVar22;
                        ppppppbVar22 = pppppppbVar45[-2];
                        pppppppbVar45[-4] = (byte ******)0x0;
                        pppppppbVar45[-3] = (byte ******)0x0;
                        pppppppbVar45[-5] = (byte ******)0x0;
                        pppppppbVar45[-2] = (byte ******)0x0;
                        pppppppbStack_b0[-2] = ppppppbVar22;
                        *(undefined2 *)(pppppppbStack_b0 + -1) = *(undefined2 *)(pppppppbVar45 + -1)
                        ;
                        pppppppbVar45 = pppppppbVar45 + -0xb;
                        pppppppbStack_b0 = pppppppbStack_b0 + -0xb;
                      } while (local_1a8 != pppppppbVar45);
                    }
                    pppppppbVar45 = pppppppbStack_b0;
                    pppppppbStack_b0 = local_1a8;
                    local_a0 = pppppppbStack_198;
                    local_b8 = local_1a8;
                    local_1a8 = pppppppbVar45;
                    local_a8 = pppppppbStack_1a0;
                    pppppppbStack_1a0 = pppppppbVar34;
                    pppppppbStack_198 = (byte *******)(lVar37 + uVar51 * 0x58);
                    FUN_005c46e4(&local_b8);
                  }
                  uVar56 = uVar56 + 1;
                  if (uVar56 == uVar49) goto LAB_005c16c8;
                  goto LAB_005c100c;
                case 0xb:
                  puVar60 = *(undefined8 **)(pbVar26 + 0x18);
                  if (puVar60 == (undefined8 *)0x0) {
                    /* try { // try from 005c2cf4 to 005c2d1f has its CatchHandler @ 005c2ea0 */
                    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                 ,0x44e,2,"assertion failed: %s","regex_matcher != nullptr");
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  pvVar18 = (void *)*puVar60;
                  uVar43 = puVar60[1];
                  local_110 = (char *)0x0;
                  local_108 = 0;
                  local_100 = (void *)0x0;
                  if (0xffffffffffffffef < uVar43) {
                    /* try { // try from 005c2d20 to 005c2d2b has its CatchHandler @ 005c2e8c */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uVar43 < 0x17) {
                    local_110 = (char *)(ulong)(byte)((int)uVar43 << 1);
                    pvVar21 = (void *)((ulong)&local_110 | 1);
                    if (uVar43 != 0) goto LAB_005c121c;
                  }
                  else {
                    uVar31 = uVar43 + 0x10 & 0xfffffffffffffff0;
                    pvVar21 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar31);
                    local_110 = (char *)(uVar31 | 1);
                    local_108 = uVar43;
                    local_100 = pvVar21;
LAB_005c121c:
                    memcpy(pvVar21,pvVar18,uVar43);
                  }
                  *(undefined1 *)((long)pvVar21 + uVar43) = 0;
                  ppppppbVar22 = (byte ******)FUN_002e2e80(PTR_FUN_04373078,200);
                  if (ppppppbVar22 != (byte ******)0x0) {
                    /* try { // try from 005c1248 to 005c1253 has its CatchHandler @ 005c3250 */
                    FUN_0054ee04(ppppppbVar22,&local_110);
                  }
                  iVar16 = *(int *)(ppppppbVar22 + 8);
                  if (iVar16 == 0) {
                    uVar24 = 1;
                  }
                  else {
                    /* try { // try from 005c125c to 005c128b has its CatchHandler @ 005c3264 */
                    FUN_002f2c60(&local_b8,"Invalid regex string specified in header matcher.");
                    local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                             ,0x454,&local_b8,0,0);
                    FUN_0054f474(ppppppbVar22);
                    FUN_002e2ea0(PTR_LAB_04373088,ppppppbVar22);
                    ppppppbVar22 = (byte ******)0x0;
                  }
                  if (((ulong)local_110 & 1) != 0) {
                    FUN_002e2ea0(PTR_LAB_04373088,local_100);
                  }
                  if (iVar16 == 0) {
                    uVar43 = 0;
                    uVar31 = 0;
                    uVar58 = (ushort)*pbVar26;
                    uVar57 = (ushort)*pbVar26;
                    pppppppbVar34 = (byte *******)0x0;
                    pppppppbVar45 = (byte *******)0x0;
                    pppppppbVar62 = (byte *******)0x0;
                    if (pppppppbStack_1a0 < pppppppbStack_198) goto LAB_005c0fa4;
                    goto LAB_005c1430;
                  }
                  if (ppppppbVar22 != (byte ******)0x0) {
                    FUN_0054f474(ppppppbVar22);
                    FUN_002e2ea0(PTR_LAB_04373088,ppppppbVar22);
                  }
                }
                if (((ulong)pppppppbVar17 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,pppppppbVar14);
                }
                if (local_250 != 0) goto LAB_005c2064;
              }
LAB_005c16c8:
              if ((puVar50[2] == 0) ||
                 (piVar36 = *(int **)(puVar50[2] + 0x10), piVar36 == (int *)0x0)) {
LAB_005c19d8:
                if (*(int *)(lVar54 + 0x70) != 2) goto LAB_005c1724;
LAB_005c19e8:
                lVar54 = *(long *)(lVar54 + 0x68);
                if (*(int *)(lVar54 + 0xc0) == 3) {
                  lVar54 = *(long *)(lVar54 + 0xb0);
                  if (*(int **)(lVar54 + 0x10) == (int *)0x0) {
                    iVar16 = 100;
                    puVar25 = *(ulong **)(lVar54 + 0x18);
                    if (puVar25 != (ulong *)0x0) goto LAB_005c1a50;
LAB_005c1d90:
                    iVar48 = 0;
LAB_005c1d94:
                    if (iVar16 != iVar48) {
LAB_005c1e9c:
                    /* try { // try from 005c1e9c to 005c1edf has its CatchHandler @ 005c32c4 */
                      FUN_002f2c60(&local_b8,
                                   "RouteAction weighted_cluster has incorrect total weight");
                      local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                               ,0x4db,&local_b8,0,0);
                      goto joined_r0x005c1fd0;
                    }
                  }
                  else {
                    iVar16 = **(int **)(lVar54 + 0x10);
                    puVar25 = *(ulong **)(lVar54 + 0x18);
                    if (puVar25 == (ulong *)0x0) goto LAB_005c1d90;
LAB_005c1a50:
                    uVar49 = puVar25[1];
                    if (uVar49 != 0) {
                      uVar29 = *puVar25;
                      uVar56 = 0;
                      iVar48 = 0;
LAB_005c1a94:
                      do {
                        puVar60 = *(undefined8 **)((uVar29 & 0xfffffffffffffff8) + uVar56 * 8);
                        pvVar18 = (void *)*puVar60;
                        pppppppbVar34 = (byte *******)puVar60[1];
                        local_a8 = (byte *******)0x0;
                        pppppppbStack_b0 = (byte *******)0x0;
                        local_b8 = (byte *******)0x0;
                        if ((byte *******)0xffffffffffffffef < pppppppbVar34) {
                    /* try { // try from 005c2d50 to 005c2d57 has its CatchHandler @ 005c2e58 */
                    /* WARNING: Subroutine does not return */
                          std::__basic_string_common<true>::__throw_length_error();
                        }
                        if (&DAT_00000016 < pppppppbVar34) {
                          pppppppbVar45 =
                               (byte *******)
                               FUN_002e2e80(PTR_FUN_04373078,
                                            (ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0);
                          local_b8 = (byte *******)
                                     ((ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0 | 1);
                          pppppppbStack_b0 = pppppppbVar34;
                          local_a8 = pppppppbVar45;
LAB_005c1af8:
                          memcpy(pppppppbVar45,pvVar18,(size_t)pppppppbVar34);
                        }
                        else {
                          local_b8 = (byte *******)(ulong)(byte)((int)pppppppbVar34 << 1);
                          pppppppbVar45 = pppppppbVar33;
                          if (pppppppbVar34 != (byte *******)0x0) goto LAB_005c1af8;
                        }
                        pppppppbVar14 = local_a8;
                        pppppppbVar46 = pppppppbStack_b0;
                        pppppppbVar17 = local_b8;
                        *(byte *)((long)pppppppbVar45 + (long)pppppppbVar34) = 0;
                        pppppppbVar34 = (byte *******)((ulong)local_b8 >> 1 & 0x7f);
                        if (((ulong)local_b8 & 1) != 0) {
                          pppppppbVar34 = pppppppbStack_b0;
                        }
                        if (pppppppbVar34 == (byte *******)0x0) {
                    /* try { // try from 005c1f40 to 005c1f6f has its CatchHandler @ 005c3070 */
                          FUN_002f2c60(&local_b8,
                                       "RouteAction weighted_cluster cluster contains empty cluster name."
                                      );
                          local_250 = FUN_002f0690(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x4cc,&local_b8,0,0);
LAB_005c1fa4:
                          if (((ulong)pppppppbVar17 & 1) != 0) {
                            FUN_002e2ea0(PTR_LAB_04373088,pppppppbVar14);
                          }
                          goto joined_r0x005c1fd0;
                        }
                        if ((int *)puVar60[2] == (int *)0x0) {
                    /* try { // try from 005c1f74 to 005c1fa3 has its CatchHandler @ 005c3064 */
                          FUN_002f2c60(&local_b8,
                                       "RouteAction weighted_cluster cluster missing weight");
                          local_250 = FUN_002f0690(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x4d3,&local_b8,0,0);
                          goto LAB_005c1fa4;
                        }
                        iVar2 = *(int *)puVar60[2];
                        if (local_168 < local_160) {
                          *(byte ********)local_168 = local_b8;
                          *(byte ********)(local_168 + 8) = pppppppbStack_b0;
                          *(byte ********)(local_168 + 0x10) = local_a8;
                          *(int *)(local_168 + 0x18) = iVar2;
                          local_168 = local_168 + 0x20;
LAB_005c1a84:
                          uVar56 = uVar56 + 1;
                          iVar48 = iVar2 + iVar48;
                          if (uVar56 == uVar49) break;
                          goto LAB_005c1a94;
                        }
                        lVar54 = (long)local_168 - (long)pbStack_170 >> 5;
                        uVar43 = lVar54 + 1;
                        if (uVar43 >> 0x3b != 0) {
                    /* try { // try from 005c2d90 to 005c2d97 has its CatchHandler @ 005c2e48 */
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        if ((ulong)((long)local_160 - (long)pbStack_170 >> 5) < 0x3ffffffffffffff) {
                          uVar31 = (long)local_160 - (long)pbStack_170 >> 4;
                          if (uVar43 <= uVar31) {
                            uVar43 = uVar31;
                          }
                          if (uVar43 != 0) goto LAB_005c1b84;
                          lVar30 = 0;
                        }
                        else {
                          uVar43 = 0x7ffffffffffffff;
LAB_005c1b84:
                          lVar30 = FUN_002e2e80(PTR_FUN_04373078,uVar43 << 5);
                        }
                        pbVar40 = pbStack_170;
                        pbVar19 = (byte *)(lVar30 + lVar54 * 0x20);
                        *(byte ********)pbVar19 = pppppppbVar17;
                        *(byte ********)(pbVar19 + 8) = pppppppbVar46;
                        *(byte ********)(pbVar19 + 0x10) = pppppppbVar14;
                        local_160 = (byte *)(lVar30 + uVar43 * 0x20);
                        pbVar26 = pbVar19 + 0x20;
                        *(int *)(pbVar19 + 0x18) = iVar2;
                        if ((long)local_168 - (long)pbStack_170 == 0) {
                          pbStack_170 = pbVar19;
                        }
                        else {
                          uVar43 = ((long)local_168 - (long)pbStack_170) - 0x20;
                          uVar32 = ((uint)(uVar43 >> 5) & 0x7ffffff) + 1;
                          pbVar47 = local_168;
                          if ((uVar32 & 3) != 0) {
                            lVar54 = -((ulong)uVar32 & 3);
                            lVar30 = 0;
                            do {
                              uVar65 = *(undefined8 *)(local_168 + lVar30 + -0x18);
                              uVar44 = *(undefined8 *)(local_168 + lVar30 + -0x20);
                              lVar37 = lVar30 + -0x20;
                              *(undefined8 *)(pbVar19 + lVar30 + -0x10) =
                                   *(undefined8 *)(local_168 + lVar30 + -0x10);
                              *(undefined8 *)(pbVar19 + lVar30 + -0x18) = uVar65;
                              *(undefined8 *)(pbVar19 + lVar30 + -0x20) = uVar44;
                              pbVar47 = local_168 + lVar30 + -0x20;
                              pbVar47[0] = 0;
                              pbVar47[1] = 0;
                              pbVar47[2] = 0;
                              pbVar47[3] = 0;
                              pbVar47[4] = 0;
                              pbVar47[5] = 0;
                              pbVar47[6] = 0;
                              pbVar47[7] = 0;
                              pbVar47 = local_168 + lVar30 + -0x18;
                              pbVar47[0] = 0;
                              pbVar47[1] = 0;
                              pbVar47[2] = 0;
                              pbVar47[3] = 0;
                              pbVar47[4] = 0;
                              pbVar47[5] = 0;
                              pbVar47[6] = 0;
                              pbVar47[7] = 0;
                              pbVar47 = local_168 + lVar30 + -0x10;
                              pbVar47[0] = 0;
                              pbVar47[1] = 0;
                              pbVar47[2] = 0;
                              pbVar47[3] = 0;
                              pbVar47[4] = 0;
                              pbVar47[5] = 0;
                              pbVar47[6] = 0;
                              pbVar47[7] = 0;
                              bVar15 = lVar54 != -1;
                              lVar54 = lVar54 + 1;
                              *(undefined4 *)(pbVar19 + lVar30 + -8) =
                                   *(undefined4 *)(local_168 + lVar30 + -8);
                              lVar30 = lVar37;
                            } while (bVar15);
                            pbVar19 = pbVar19 + lVar37;
                            pbVar47 = local_168 + lVar37;
                          }
                          if (0x5f < uVar43) {
                            lVar54 = 0;
                            do {
                              uVar65 = *(undefined8 *)(pbVar47 + lVar54 + -0x18);
                              uVar44 = *(undefined8 *)(pbVar47 + lVar54 + -0x20);
                              lVar30 = lVar54 + -0x80;
                              *(undefined8 *)(pbVar19 + lVar54 + -0x10) =
                                   *(undefined8 *)(pbVar47 + lVar54 + -0x10);
                              *(undefined8 *)(pbVar19 + lVar54 + -0x18) = uVar65;
                              *(undefined8 *)(pbVar19 + lVar54 + -0x20) = uVar44;
                              uVar3 = *(undefined4 *)(pbVar47 + lVar54 + -8);
                              pbVar61 = pbVar47 + lVar54 + -0x18;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              pbVar61 = pbVar47 + lVar54 + -0x10;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              pbVar61 = pbVar47 + lVar54 + -0x20;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              *(undefined4 *)(pbVar19 + lVar54 + -8) = uVar3;
                              uVar65 = *(undefined8 *)(pbVar47 + lVar54 + -0x38);
                              uVar44 = *(undefined8 *)(pbVar47 + lVar54 + -0x40);
                              *(undefined8 *)(pbVar19 + lVar54 + -0x30) =
                                   *(undefined8 *)(pbVar47 + lVar54 + -0x30);
                              *(undefined8 *)(pbVar19 + lVar54 + -0x38) = uVar65;
                              *(undefined8 *)(pbVar19 + lVar54 + -0x40) = uVar44;
                              uVar3 = *(undefined4 *)(pbVar47 + lVar54 + -0x28);
                              pbVar61 = pbVar47 + lVar54 + -0x38;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              pbVar61 = pbVar47 + lVar54 + -0x30;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              pbVar61 = pbVar47 + lVar54 + -0x40;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              *(undefined4 *)(pbVar19 + lVar54 + -0x28) = uVar3;
                              uVar65 = *(undefined8 *)(pbVar47 + lVar54 + -0x58);
                              uVar44 = *(undefined8 *)(pbVar47 + lVar54 + -0x60);
                              *(undefined8 *)(pbVar19 + lVar54 + -0x50) =
                                   *(undefined8 *)(pbVar47 + lVar54 + -0x50);
                              *(undefined8 *)(pbVar19 + lVar54 + -0x58) = uVar65;
                              *(undefined8 *)(pbVar19 + lVar54 + -0x60) = uVar44;
                              uVar3 = *(undefined4 *)(pbVar47 + lVar54 + -0x48);
                              pbVar61 = pbVar47 + lVar54 + -0x58;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              pbVar61 = pbVar47 + lVar54 + -0x50;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              pbVar61 = pbVar47 + lVar54 + -0x60;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              *(undefined4 *)(pbVar19 + lVar54 + -0x48) = uVar3;
                              uVar65 = *(undefined8 *)(pbVar47 + lVar54 + -0x78);
                              uVar44 = *(undefined8 *)(pbVar47 + lVar54 + -0x80);
                              *(undefined8 *)(pbVar19 + lVar54 + -0x70) =
                                   *(undefined8 *)(pbVar47 + lVar54 + -0x70);
                              *(undefined8 *)(pbVar19 + lVar54 + -0x78) = uVar65;
                              *(undefined8 *)(pbVar19 + lVar54 + -0x80) = uVar44;
                              uVar3 = *(undefined4 *)(pbVar47 + lVar54 + -0x68);
                              pbVar61 = pbVar47 + lVar54 + -0x78;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              pbVar61 = pbVar47 + lVar54 + -0x70;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              pbVar61 = pbVar47 + lVar54 + -0x80;
                              pbVar61[0] = 0;
                              pbVar61[1] = 0;
                              pbVar61[2] = 0;
                              pbVar61[3] = 0;
                              pbVar61[4] = 0;
                              pbVar61[5] = 0;
                              pbVar61[6] = 0;
                              pbVar61[7] = 0;
                              *(undefined4 *)(pbVar19 + lVar54 + -0x68) = uVar3;
                              lVar54 = lVar30;
                            } while ((long)pbStack_170 - (long)pbVar47 != lVar30);
                            pbVar19 = pbVar19 + lVar30;
                          }
                          bVar15 = local_168 != pbStack_170;
                          pbStack_170 = pbVar19;
                          if (bVar15) {
                            bVar4 = local_168[-0x20];
                            pbVar47 = local_168 + -0x20;
                            pbVar19 = local_168;
                            while( true ) {
                              pbVar61 = pbVar47;
                              local_168 = pbVar26;
                              if ((bVar4 & 1) != 0) {
                                FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar19 + -0x10));
                              }
                              pbVar26 = local_168;
                              if (pbVar40 == pbVar61) break;
                              bVar4 = pbVar61[-0x20];
                              pbVar47 = pbVar61 + -0x20;
                              pbVar19 = pbVar61;
                            }
                          }
                        }
                        local_168 = pbVar26;
                        if (pbVar40 == (byte *)0x0) goto LAB_005c1a84;
                        FUN_002e2ea0(PTR_LAB_04373088,pbVar40);
                        uVar56 = uVar56 + 1;
                        iVar48 = iVar2 + iVar48;
                      } while (uVar56 != uVar49);
                      goto LAB_005c1d94;
                    }
                    if (iVar16 != 0) goto LAB_005c1e9c;
                  }
                  if (pbStack_170 == local_168) {
                    FUN_002f2c60(&local_b8,
                                 "RouteAction weighted_cluster has no valid clusters specified.");
                    local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                             ,0x4df,&local_b8,0,0);
                    goto joined_r0x005c1fd0;
                  }
                  goto LAB_005c175c;
                }
                if (*(int *)(lVar54 + 0xc0) != 1) goto LAB_005c09d8;
                pppppppbVar34 = *(byte ********)(lVar54 + 0xb8);
                if (pppppppbVar34 == (byte *******)0x0) {
                    /* try { // try from 005c1d50 to 005c1deb has its CatchHandler @ 005c32c4 */
                  FUN_002f2c60(&local_b8,"RouteAction cluster contains empty cluster name.");
                  local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                           ,0x4b0,&local_b8,0,0);
                  goto joined_r0x005c1fd0;
                }
                pvVar18 = *(void **)(lVar54 + 0xb0);
                local_a8 = (byte *******)0x0;
                pppppppbStack_b0 = (byte *******)0x0;
                local_b8 = (byte *******)0x0;
                if ((byte *******)0xffffffffffffffef < pppppppbVar34) {
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (&DAT_00000016 < pppppppbVar34) {
                  pppppppbVar45 =
                       (byte *******)
                       FUN_002e2e80(PTR_FUN_04373078,(ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0
                                   );
                  local_b8 = (byte *******)((ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0 | 1);
                  pppppppbStack_b0 = pppppppbVar34;
                  local_a8 = pppppppbVar45;
                }
                else {
                  local_b8 = (byte *******)(ulong)(byte)((int)pppppppbVar34 << 1);
                  pppppppbVar45 = pppppppbVar33;
                }
                memcpy(pppppppbVar45,pvVar18,(size_t)pppppppbVar34);
                *(byte *)((long)pppppppbVar45 + (long)pppppppbVar34) = 0;
                if (((ulong)local_188 & 1) != 0) {
                  *(byte *)local_178 = 0;
                  pppppppbStack_180 = (byte *******)0x0;
                  if (((ulong)local_188 & 1) != 0) {
                    FUN_002e2ea0(PTR_LAB_04373088,local_178);
                  }
                }
                pcVar59 = (char *)*puVar50;
                lVar54 = lStack_1b0;
                local_188 = local_b8;
                pppppppbStack_180 = pppppppbStack_b0;
                local_178 = local_a8;
              }
              else {
                uVar32 = piVar36[2];
                iVar16 = *piVar36;
                if (iVar16 != 2) {
                  if (iVar16 == 1) {
                    iVar16 = 100;
                  }
                  else {
                    if (iVar16 != 0) {
                      FUN_002f2c60(&local_b8,"Unknown denominator type");
                      local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                               ,0x499,&local_b8,0,0);
                      if (local_250 != 0) goto LAB_005c2064;
                      goto LAB_005c19d8;
                    }
                    iVar16 = 10000;
                  }
                  uVar32 = uVar32 * iVar16;
                }
                uStack_190 = (ulong)uVar32 << 0x20 | 1;
                if (*(int *)(lVar54 + 0x70) == 2) goto LAB_005c19e8;
LAB_005c1724:
                    /* try { // try from 005c1724 to 005c19cf has its CatchHandler @ 005c32c4 */
                FUN_002f2c60(&local_b8,"No RouteAction found in route.");
                local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x4a6,&local_b8,0,0);
joined_r0x005c1fd0:
                if (local_250 != 0) goto LAB_005c2064;
LAB_005c175c:
                pcVar59 = (char *)*puVar50;
                lVar54 = lStack_1b0;
              }
              lStack_1b0 = lVar54;
              if ((pcVar59 != (char *)0x0) && (*pcVar59 == '\0')) {
                    /* try { // try from 005c2034 to 005c2063 has its CatchHandler @ 005c3050 */
                FUN_002f2c60(&local_b8,"case_sensitive if set must be set to true.");
                local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x544,&local_b8,0,0);
LAB_005c2064:
                FUN_005c32fc(&local_1d0);
                return local_250;
              }
              puVar38 = (undefined4 *)param_5[1];
              if (puVar38 < (undefined4 *)param_5[2]) {
                *puVar38 = local_1d0._0_4_;
                *(byte ********)(puVar38 + 6) = local_1b8;
                *(byte ********)(puVar38 + 4) = pppppppbStack_1c0;
                *(byte ********)(puVar38 + 2) = pppppppbStack_1c8;
                pppppppbStack_1c8 = (byte *******)0x0;
                pppppppbStack_1c0 = (byte *******)0x0;
                lStack_1b0 = 0;
                *(long *)(puVar38 + 8) = lVar54;
                *(undefined8 *)(puVar38 + 10) = 0;
                *(undefined8 *)(puVar38 + 0xc) = 0;
                *(undefined8 *)(puVar38 + 0xe) = 0;
                *(byte ********)(puVar38 + 0xc) = pppppppbStack_1a0;
                *(byte ********)(puVar38 + 10) = local_1a8;
                *(byte ********)(puVar38 + 0xe) = pppppppbStack_198;
                local_1a8 = (byte *******)0x0;
                pppppppbStack_1a0 = (byte *******)0x0;
                pppppppbStack_198 = (byte *******)0x0;
                *(ulong *)(puVar38 + 0x10) = uStack_190;
                *(byte ********)(puVar38 + 0x16) = local_178;
                *(undefined8 *)(puVar38 + 0x18) = 0;
                *(byte ********)(puVar38 + 0x14) = pppppppbStack_180;
                *(byte ********)(puVar38 + 0x12) = local_188;
                local_188 = (byte *******)0x0;
                pppppppbStack_180 = (byte *******)0x0;
                *(undefined8 *)(puVar38 + 0x1a) = 0;
                *(undefined8 *)(puVar38 + 0x1c) = 0;
                *(byte **)(puVar38 + 0x1a) = local_168;
                *(byte **)(puVar38 + 0x18) = pbStack_170;
                *(byte **)(puVar38 + 0x1c) = local_160;
                pbStack_170 = (byte *)0x0;
                local_168 = (byte *)0x0;
                local_160 = (byte *)0x0;
                param_5[1] = param_5[1] + 0x78;
              }
              else {
                lVar30 = (long)puVar38 - *param_5 >> 3;
                uVar56 = 0x222222222222222;
                uVar49 = lVar30 * -0x1111111111111111 + 1;
                if (0x222222222222222 < uVar49) {
                    /* try { // try from 005c2d88 to 005c2d8f has its CatchHandler @ 005c2e54 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar37 = param_5[2] - *param_5 >> 3;
                if ((ulong)(lVar37 * -0x1111111111111111) < 0x111111111111111) {
                  uVar29 = lVar37 * -0x2222222222222222;
                  uVar56 = uVar49;
                  if (uVar49 <= uVar29) {
                    uVar56 = uVar29;
                  }
                  if (uVar56 != 0) goto LAB_005c17dc;
                  lVar37 = 0;
                }
                else {
LAB_005c17dc:
                  lVar37 = FUN_002e2e80(PTR_FUN_04373078,uVar56 * 0x78);
                }
                lVar54 = lStack_1b0;
                puVar38 = (undefined4 *)(lVar37 + lVar30 * 8);
                lVar37 = lVar37 + uVar56 * 0x78;
                *puVar38 = local_1d0._0_4_;
                *(byte ********)(puVar38 + 6) = local_1b8;
                *(byte ********)(puVar38 + 4) = pppppppbStack_1c0;
                *(byte ********)(puVar38 + 2) = pppppppbStack_1c8;
                pppppppbStack_1c8 = (byte *******)0x0;
                pppppppbStack_1c0 = (byte *******)0x0;
                lStack_1b0 = 0;
                *(long *)(puVar38 + 8) = lVar54;
                *(undefined8 *)(puVar38 + 10) = 0;
                *(undefined8 *)(puVar38 + 0xc) = 0;
                *(undefined8 *)(puVar38 + 0xe) = 0;
                *(byte ********)(puVar38 + 0xc) = pppppppbStack_1a0;
                *(byte ********)(puVar38 + 10) = local_1a8;
                *(byte ********)(puVar38 + 0xe) = pppppppbStack_198;
                local_1a8 = (byte *******)0x0;
                pppppppbStack_1a0 = (byte *******)0x0;
                pppppppbStack_198 = (byte *******)0x0;
                *(ulong *)(puVar38 + 0x10) = uStack_190;
                *(byte ********)(puVar38 + 0x16) = local_178;
                *(byte ********)(puVar38 + 0x14) = pppppppbStack_180;
                *(byte ********)(puVar38 + 0x12) = local_188;
                local_188 = (byte *******)0x0;
                pppppppbStack_180 = (byte *******)0x0;
                *(undefined8 *)(puVar38 + 0x1c) = 0;
                *(undefined8 *)(puVar38 + 0x18) = 0;
                *(undefined8 *)(puVar38 + 0x1a) = 0;
                *(byte **)(puVar38 + 0x1a) = local_168;
                *(byte **)(puVar38 + 0x18) = pbStack_170;
                *(byte **)(puVar38 + 0x1c) = local_160;
                pbStack_170 = (byte *)0x0;
                local_168 = (byte *)0x0;
                local_160 = (byte *)0x0;
                lVar54 = *param_5;
                lVar30 = param_5[1];
                if (lVar30 == lVar54) {
                  *param_5 = (long)puVar38;
                  param_5[1] = (long)(puVar38 + 0x1e);
                  param_5[2] = lVar37;
                }
                else {
                  lVar41 = 0;
                  do {
                    lVar1 = lVar30 + lVar41;
                    lVar42 = lVar41 + -0x78;
                    *(undefined4 *)((long)puVar38 + lVar41 + -0x78) = *(undefined4 *)(lVar1 + -0x78)
                    ;
                    uVar65 = *(undefined8 *)(lVar1 + -0x68);
                    uVar44 = *(undefined8 *)(lVar1 + -0x70);
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x60) = *(undefined8 *)(lVar1 + -0x60)
                    ;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x68) = uVar65;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x70) = uVar44;
                    uVar44 = *(undefined8 *)(lVar1 + -0x58);
                    *(undefined8 *)(lVar1 + -0x68) = 0;
                    *(undefined8 *)(lVar1 + -0x60) = 0;
                    *(undefined8 *)(lVar1 + -0x70) = 0;
                    *(undefined8 *)(lVar1 + -0x58) = 0;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x58) = uVar44;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x50) = 0;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x48) = 0;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x40) = 0;
                    uVar44 = *(undefined8 *)(lVar1 + -0x50);
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x48) = *(undefined8 *)(lVar1 + -0x48)
                    ;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x50) = uVar44;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x40) = *(undefined8 *)(lVar1 + -0x40)
                    ;
                    *(undefined8 *)(lVar1 + -0x40) = 0;
                    *(undefined8 *)(lVar1 + -0x50) = 0;
                    *(undefined8 *)(lVar1 + -0x48) = 0;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x38) = *(undefined8 *)(lVar1 + -0x38)
                    ;
                    uVar65 = *(undefined8 *)(lVar1 + -0x28);
                    uVar44 = *(undefined8 *)(lVar1 + -0x30);
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x20) = *(undefined8 *)(lVar1 + -0x20)
                    ;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x28) = uVar65;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x30) = uVar44;
                    *(undefined8 *)(lVar1 + -0x30) = 0;
                    *(undefined8 *)(lVar1 + -0x28) = 0;
                    *(undefined8 *)(lVar1 + -0x20) = 0;
                    *(undefined8 *)((long)puVar38 + lVar41 + -8) = 0;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x18) = 0;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x10) = 0;
                    uVar44 = *(undefined8 *)(lVar1 + -0x18);
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x10) = *(undefined8 *)(lVar1 + -0x10)
                    ;
                    *(undefined8 *)((long)puVar38 + lVar41 + -0x18) = uVar44;
                    *(undefined8 *)((long)puVar38 + lVar41 + -8) = *(undefined8 *)(lVar1 + -8);
                    *(undefined8 *)(lVar1 + -0x18) = 0;
                    *(undefined8 *)(lVar1 + -0x10) = 0;
                    *(undefined8 *)(lVar1 + -8) = 0;
                    lVar41 = lVar42;
                  } while (lVar54 - lVar30 != lVar42);
                  lVar54 = *param_5;
                  lVar30 = param_5[1];
                  *param_5 = (long)puVar38 + lVar42;
                  param_5[1] = (long)(puVar38 + 0x1e);
                  param_5[2] = lVar37;
                  while (lVar30 != lVar54) {
                    lVar30 = lVar30 + -0x78;
                    FUN_005c32fc(lVar30);
                  }
                }
                if (lVar54 != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,lVar54);
                }
              }
            }
            else {
              if (iVar16 != 2) {
                if (iVar16 == 1) {
                  pppppppbVar45 = (byte *******)puVar50[7];
                  pppppppbVar34 = pppppppbVar33;
                  if (pppppppbVar45 == (byte *******)0x0) {
                    local_1d0 = (char *)CONCAT44(local_1d0._4_4_,1);
                    local_a8 = (byte *******)0x0;
                    pppppppbStack_b0 = (byte *******)0x0;
                    local_b8 = (byte *******)0x0;
LAB_005c0e64:
                    *(byte *)((long)pppppppbVar34 + (long)pppppppbVar45) = 0;
                    if (((ulong)pppppppbStack_1c8 & 1) != 0) {
                      *(byte *)local_1b8 = 0;
                      pppppppbStack_1c0 = (byte *******)0x0;
                      if (((ulong)pppppppbStack_1c8 & 1) != 0) {
                        FUN_002e2ea0(PTR_LAB_04373088,local_1b8);
                      }
                    }
                    local_1b8 = local_a8;
                    pppppppbStack_1c0 = pppppppbStack_b0;
                    pppppppbStack_1c8 = local_b8;
                    goto LAB_005c0f78;
                  }
                  pcVar59 = (char *)puVar50[6];
                  if (*pcVar59 == '/') {
                    if ((long)pppppppbVar45 < 0) {
                    /* try { // try from 005c2d98 to 005c2ddf has its CatchHandler @ 005c2e9c */
                    /* WARNING: Subroutine does not return */
                      __assert_fail("false && \"len <= kMaxSize\"",
                                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                    "operator()");
                    }
                    pbStack_f0 = (byte *)((long)pppppppbVar45 + -1);
                    local_f8 = pcVar59 + 1;
                    local_110 = (char *)0x0;
                    local_108 = 0;
                    local_100 = (void *)0x0;
                    /* try { // try from 005c0a80 to 005c0a97 has its CatchHandler @ 005c3178 */
                    FUN_005c4100(&local_b8,&local_110,0x20000002f,0);
                    /* try { // try from 005c0a98 to 005c0aa7 has its CatchHandler @ 005c3150 */
                    FUN_005c41d4(&local_80,auStack_68,&local_b8);
                    if (((ulong)local_b8 & 1) != 0) {
                      FUN_002e2ea0(PTR_LAB_04373088,local_a8);
                    }
                    if (((ulong)local_110 & 1) != 0) {
                      FUN_002e2ea0(PTR_LAB_04373088,local_100);
                    }
                    if ((ulong)((long)(local_78 - local_80) >> 4) < 3) {
                      if (local_78 - local_80 == 0x20) {
                        bVar15 = *(long *)(local_80 + 8) == 0;
                      }
                      else {
                        bVar15 = false;
                      }
                    }
                    else {
                      bVar15 = true;
                    }
                    if (local_80 != 0) {
                      local_78 = local_80;
                      FUN_002e2ea0(PTR_LAB_04373088);
                    }
                    if (!bVar15) {
                      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,1);
                      local_a8 = (byte *******)0x0;
                      pppppppbStack_b0 = (byte *******)0x0;
                      local_b8 = (byte *******)0x0;
                      if (&DAT_00000016 < pppppppbVar45) {
                        pppppppbVar34 =
                             (byte *******)
                             FUN_002e2e80(PTR_FUN_04373078,
                                          (ulong)(pppppppbVar45 + 2) & 0xfffffffffffffff0);
                        local_b8 = (byte *******)
                                   ((ulong)(pppppppbVar45 + 2) & 0xfffffffffffffff0 | 1);
                        pppppppbStack_b0 = pppppppbVar45;
                        local_a8 = pppppppbVar34;
                      }
                      else {
                        local_b8 = (byte *******)(ulong)(byte)((int)pppppppbVar45 << 1);
                      }
                      memcpy(pppppppbVar34,pcVar59,(size_t)pppppppbVar45);
                      goto LAB_005c0e64;
                    }
                  }
                  goto LAB_005c09d8;
                }
                    /* try { // try from 005c0c34 to 005c0c6b has its CatchHandler @ 005c32c4 */
                FUN_002f2c60(&local_b8,"Invalid route path specifier specified.");
                local_250 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x437,&local_b8,0,0);
LAB_005c0d9c:
                if (local_250 != 0) goto LAB_005c2064;
                goto LAB_005c0f78;
              }
              pppppppbVar34 = (byte *******)puVar50[7];
              if ((pppppppbVar34 == (byte *******)0x0) ||
                 (pcVar59 = (char *)puVar50[6], *pcVar59 != '/')) goto LAB_005c09d8;
              if ((long)pppppppbVar34 < 0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("false && \"len <= kMaxSize\"",
                              "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                              "operator()");
              }
              pbStack_c0 = (byte *)((long)pppppppbVar34 + -1);
              local_c8 = pcVar59 + 1;
              local_e0 = (byte *)0x0;
              local_d8 = (byte *)0x0;
              local_d0 = (byte *)0x0;
                    /* try { // try from 005c0b4c to 005c0b63 has its CatchHandler @ 005c313c */
              FUN_005c4100(&local_b8,&local_e0,0x20000002f,0);
                    /* try { // try from 005c0b64 to 005c0b73 has its CatchHandler @ 005c3114 */
              FUN_005c41d4(&local_80,auStack_68,&local_b8);
              if (((ulong)local_b8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_a8);
              }
              if (((ulong)local_e0 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_d0);
              }
              if (local_78 - local_80 == 0x20) {
                if ((*(long *)(local_80 + 8) == 0) || (*(long *)(local_80 + 0x18) == 0)) {
                  bVar15 = true;
                }
                else {
                  local_1d0 = (char *)((ulong)local_1d0 & 0xffffffff00000000);
                  local_a8 = (byte *******)0x0;
                  pppppppbStack_b0 = (byte *******)0x0;
                  local_b8 = (byte *******)0x0;
                  if (&DAT_00000016 < pppppppbVar34) {
                    pppppppbVar45 =
                         (byte *******)
                         FUN_002e2e80(PTR_FUN_04373078,
                                      (ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0);
                    local_b8 = (byte *******)((ulong)(pppppppbVar34 + 2) & 0xfffffffffffffff0 | 1);
                    pppppppbStack_b0 = pppppppbVar34;
                    local_a8 = pppppppbVar45;
                  }
                  else {
                    local_b8 = (byte *******)(ulong)(byte)((int)pppppppbVar34 << 1);
                    pppppppbVar45 = pppppppbVar33;
                  }
                  memcpy(pppppppbVar45,pcVar59,(size_t)pppppppbVar34);
                  *(byte *)((long)pppppppbVar45 + (long)pppppppbVar34) = 0;
                  if (((ulong)pppppppbStack_1c8 & 1) != 0) {
                    *(byte *)local_1b8 = 0;
                    pppppppbStack_1c0 = (byte *******)0x0;
                    if (((ulong)pppppppbStack_1c8 & 1) != 0) {
                      FUN_002e2ea0(PTR_LAB_04373088,local_1b8);
                    }
                  }
                  bVar15 = false;
                  local_1b8 = local_a8;
                  pppppppbStack_1c0 = pppppppbStack_b0;
                  pppppppbStack_1c8 = local_b8;
                  if (local_80 == 0) goto LAB_005c0f74;
                }
LAB_005c0f64:
                local_78 = local_80;
                FUN_002e2ea0(PTR_LAB_04373088);
              }
              else {
                bVar15 = true;
                if (local_80 != 0) goto LAB_005c0f64;
              }
LAB_005c0f74:
              if (!bVar15) goto LAB_005c0f78;
            }
LAB_005c09d8:
            FUN_005c32fc(&local_1d0);
          }
          pppbVar53 = (byte ***)((long)pppbVar53 + 1);
        } while (pppbVar53 != pppbVar55);
        if (*param_5 != param_5[1]) {
          return 0;
        }
        FUN_002f2c60(&local_1d0,"No valid routes specified.");
        uVar44 = 0x549;
      }
      goto LAB_005c2c34;
    }
  }
  FUN_002f2c60(&local_1d0,"No matched virtual host found in the route config.");
  uVar44 = 0x51f;
LAB_005c2c34:
  uVar49 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                        ,uVar44,&local_1d0,0,0);
  return uVar49;
}


