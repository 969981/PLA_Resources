/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b8bc4; name: FUN_005b8bc4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005b8bc4(undefined8 *param_1,long *param_2,byte *param_3,long param_4,long param_5,
                   long param_6,char *param_7,char *param_8,long *param_9,undefined8 param_10,
                   ulong *param_11,byte *param_12,ulong *param_13)

{
  byte *****pppppbVar1;
  long *plVar2;
  byte *****pppppbVar3;
  uint uVar4;
  byte *****pppppbVar5;
  byte bVar6;
  char cVar7;
  byte ***pppbVar8;
  undefined6 uVar9;
  byte *pbVar10;
  byte *****pppppbVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  undefined1 uVar19;
  byte *pbVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  size_t sVar27;
  __tree_node_base *p_Var28;
  size_t sVar29;
  ulong uVar30;
  byte *******pppppppbVar31;
  void *pvVar32;
  undefined8 ******ppppppuVar33;
  byte ******ppppppbVar34;
  byte ****ppppbVar35;
  byte *******pppppppbVar36;
  undefined8 uVar37;
  undefined8 extraout_x1;
  undefined8 *******pppppppuVar38;
  void *pvVar39;
  byte *pbVar40;
  ulong *puVar41;
  ulong uVar42;
  byte *****pppppbVar43;
  ulong uVar44;
  undefined8 *puVar45;
  byte ******ppppppbVar46;
  byte *****pppppbVar47;
  uint *puVar48;
  ulong uVar49;
  undefined8 *******pppppppuVar50;
  byte *******pppppppbVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  byte *****pppppbVar55;
  ulong uVar56;
  ulong uVar57;
  undefined8 *puVar58;
  ulong uVar59;
  byte *pbVar60;
  undefined8 uVar61;
  long lVar62;
  byte *******pppppppbVar63;
  byte *****pppppbVar64;
  byte *****pppppbVar65;
  size_t sVar66;
  long *plVar67;
  byte ******ppppppbVar68;
  byte *******pppppppbVar69;
  undefined8 *puVar70;
  long *plVar71;
  byte ******ppppppbVar72;
  void *pvVar73;
  byte ******ppppppbVar74;
  undefined *puVar75;
  int *piVar76;
  byte *******pppppppbVar77;
  ulong uVar78;
  uint uVar79;
  byte *****pppppbVar80;
  int *piVar81;
  ulong uVar82;
  char *pcVar83;
  undefined4 *puVar84;
  ulong uVar85;
  undefined8 uVar86;
  byte *******local_320;
  undefined8 *******local_2e8;
  ulong local_2e0;
  undefined8 *******local_2d8 [18];
  uint local_244;
  byte ******local_240;
  byte ******ppppppbStack_238;
  byte *******local_230;
  uint local_228;
  int local_1a0;
  undefined4 local_19c;
  byte *******local_190;
  byte *******local_188;
  undefined8 local_180;
  long local_158;
  ulong local_150;
  ulong local_148;
  byte *****local_140;
  byte local_138;
  undefined5 uStack_137;
  undefined2 uStack_132;
  undefined6 local_130;
  undefined2 uStack_12a;
  byte *****local_128;
  byte ******local_120;
  byte *******local_118;
  byte *******pppppppbStack_110;
  byte *******local_108 [15];
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined7 uStack_70;
  undefined1 local_69;
  undefined7 uStack_68;
  
  lVar24 = FUN_0053f520(0,0,PTR_PTR_04374c10);
  lVar62 = (long)param_2 + 9;
  if (*param_2 != 0) {
    lVar62 = param_2[2];
  }
  uVar26 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar26 = param_2[1];
  }
                    /* try { // try from 005b8c30 to 005b8cd7 has its CatchHandler @ 005bccdc */
  lVar25 = FUN_0053ee00(PTR_PTR_04375020,lVar24);
  if ((lVar25 == 0) ||
     (uVar26 = FUN_005403e0(lVar62,uVar26,lVar25,PTR_PTR_04375020,lVar24), (uVar26 & 1) == 0)) {
    FUN_00291910(param_13,&DAT_03996322,0);
                    /* try { // try from 005b8cd8 to 005b8d03 has its CatchHandler @ 005bccd4 */
    FUN_002f2c60(&local_240,"Can\'t decode the whole response.");
    param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                    ,0x6f2,&local_240,0,0);
    goto joined_r0x005bb948;
  }
  if (*(char *)(param_1[1] + 0x10) != '\0') {
    uVar61 = *param_1;
                    /* try { // try from 005bbc38 to 005bbc3f has its CatchHandler @ 005bccdc */
    iVar22 = FUN_002ec180(0);
    if (iVar22 != 0) {
      local_180 = 0;
      local_188 = (byte *******)0x0;
      local_190 = (byte *******)0x0;
      ppppppbStack_238 = *(byte *******)(lVar25 + 0x10);
      local_240 = *(byte *******)(lVar25 + 8);
                    /* try { // try from 005bbc58 to 005bbc6f has its CatchHandler @ 005bc6e4 */
      FUN_005be370("version_info",&local_240,&local_190,0);
      if (*(long *)(lVar25 + 0x40) == 0) {
        uVar37 = 0;
      }
      else {
        uVar37 = *(undefined8 *)(*(long *)(lVar25 + 0x40) + 8);
      }
      local_240 = (byte ******)0x397b821;
      ppppppbStack_238 = (byte ******)0xc;
                    /* try { // try from 005bbd88 to 005bbd8f has its CatchHandler @ 005bc6d4 */
      lVar62 = FUN_002ed6c0(uVar37,local_2d8);
      local_2e0 = lVar62 - (long)local_2d8;
      local_2e8 = local_2d8;
      if ((long)local_2e0 < 0) {
                    /* try { // try from 005bc330 to 005bc34f has its CatchHandler @ 005bc6d4 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      pppppppbStack_110 = (byte *******)0xc;
      local_118 = (byte *******)0x38c9f28;
                    /* try { // try from 005bbdb4 to 005bbdc7 has its CatchHandler @ 005bc6c4 */
      FUN_002ecfd0(&local_138,&local_240,&local_2e8,&local_118);
                    /* try { // try from 005bbdc8 to 005bbdd3 has its CatchHandler @ 005bc69c */
      FUN_005bef00(&local_190,&local_138);
      if ((local_138 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_128);
      }
      ppppppbStack_238 = *(byte *******)(lVar25 + 0x20);
      local_240 = *(byte *******)(lVar25 + 0x18);
                    /* try { // try from 005bbdf8 to 005bbe0f has its CatchHandler @ 005bc68c */
      FUN_005be370("type_url",&local_240,&local_190,0);
      ppppppbStack_238 = *(byte *******)(lVar25 + 0x30);
      local_240 = *(byte *******)(lVar25 + 0x28);
                    /* try { // try from 005bbe18 to 005bbe2f has its CatchHandler @ 005bc67c */
      FUN_005be370("nonce",&local_240,&local_190,0);
                    /* try { // try from 005bbe38 to 005bbe4f has its CatchHandler @ 005bc66c */
      FUN_002e5790(&local_240,local_190,local_188,&DAT_0396725e,1);
      pppppppbVar69 = (byte *******)((ulong)&local_240 | 1);
      if (((ulong)local_240 & 1) != 0) {
        pppppppbVar69 = local_230;
      }
                    /* try { // try from 005bbe64 to 005bbe83 has its CatchHandler @ 005bc658 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                   ,0x260,0,"[xds_client %p] received response: %s",uVar61,pppppppbVar69);
      if (((ulong)local_240 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_230);
      }
      pppppppbVar69 = local_190;
      puVar75 = PTR_LAB_04373088;
      if (local_190 != (byte *******)0x0) {
        if (local_188 != local_190) {
          bVar6 = *(byte *)(local_188 + -3);
          pppppppbVar36 = local_188 + -3;
          pppppppbVar63 = local_188;
          while( true ) {
            pppppppbVar51 = pppppppbVar36;
            if ((bVar6 & 1) != 0) {
              FUN_002e2ea0(puVar75,pppppppbVar63[-1]);
            }
            if (pppppppbVar69 == pppppppbVar51) break;
            bVar6 = *(byte *)(pppppppbVar51 + -3);
            pppppppbVar36 = pppppppbVar51 + -3;
            pppppppbVar63 = pppppppbVar51;
          }
        }
        local_188 = pppppppbVar69;
        FUN_002e2ea0(PTR_LAB_04373088,local_190);
      }
    }
  }
  pvVar73 = *(void **)(lVar25 + 0x18);
  pppppbVar5 = *(byte ******)(lVar25 + 0x20);
  local_240 = (byte ******)0x0;
  ppppppbStack_238 = (byte ******)0x0;
  local_230 = (byte *******)0x0;
  if ((byte *****)0xffffffffffffffef < pppppbVar5) {
                    /* try { // try from 005bc0c0 to 005bc0c7 has its CatchHandler @ 005bc4a4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (pppppbVar5 < (byte *****)0x17) {
    local_240 = (byte ******)(ulong)(byte)((int)pppppbVar5 << 1);
    ppppppbVar68 = (byte ******)((ulong)&local_240 | 1);
    if (pppppbVar5 != (byte *****)0x0) goto LAB_005b8d60;
    *(undefined1 *)ppppppbVar68 = 0;
    if ((*param_13 & 1) == 0) goto LAB_005b8cbc;
LAB_005b8d7c:
    *(undefined1 *)param_13[2] = 0;
    param_13[1] = 0;
    if ((*param_13 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_13[2]);
      *param_13 = 0;
    }
  }
  else {
    ppppppbVar68 = (byte ******)
                   FUN_002e2e80(PTR_FUN_04373078,(ulong)(pppppbVar5 + 2) & 0xfffffffffffffff0);
    local_240 = (byte ******)((ulong)(pppppbVar5 + 2) & 0xfffffffffffffff0 | 1);
    ppppppbStack_238 = (byte ******)pppppbVar5;
    local_230 = (byte *******)ppppppbVar68;
LAB_005b8d60:
    memcpy(ppppppbVar68,pvVar73,(size_t)pppppbVar5);
    *(undefined1 *)((long)ppppppbVar68 + (long)pppppbVar5) = 0;
    if ((*param_13 & 1) != 0) goto LAB_005b8d7c;
LAB_005b8cbc:
    *(undefined2 *)param_13 = 0;
  }
  param_13[2] = (ulong)local_230;
  param_13[1] = (ulong)ppppppbStack_238;
  *param_13 = (ulong)local_240;
  pvVar73 = *(void **)(lVar25 + 8);
  pppppbVar5 = *(byte ******)(lVar25 + 0x10);
  local_240 = (byte ******)0x0;
  ppppppbStack_238 = (byte ******)0x0;
  local_230 = (byte *******)0x0;
  if ((byte *****)0xffffffffffffffef < pppppbVar5) {
                    /* try { // try from 005bc0c8 to 005bc0cf has its CatchHandler @ 005bc4a0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (pppppbVar5 < (byte *****)0x17) {
    local_240 = (byte ******)(ulong)(byte)((int)pppppbVar5 << 1);
    ppppppbVar68 = (byte ******)((ulong)&local_240 | 1);
    if (pppppbVar5 != (byte *****)0x0) goto LAB_005b8e24;
    *(undefined1 *)ppppppbVar68 = 0;
    if ((*param_11 & 1) == 0) goto LAB_005b8df4;
LAB_005b8e40:
    *(undefined1 *)param_11[2] = 0;
    param_11[1] = 0;
    if ((*param_11 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_11[2]);
      *param_11 = 0;
    }
  }
  else {
    ppppppbVar68 = (byte ******)
                   FUN_002e2e80(PTR_FUN_04373078,(ulong)(pppppbVar5 + 2) & 0xfffffffffffffff0);
    local_240 = (byte ******)((ulong)(pppppbVar5 + 2) & 0xfffffffffffffff0 | 1);
    ppppppbStack_238 = (byte ******)pppppbVar5;
    local_230 = (byte *******)ppppppbVar68;
LAB_005b8e24:
    memcpy(ppppppbVar68,pvVar73,(size_t)pppppbVar5);
    *(undefined1 *)((long)ppppppbVar68 + (long)pppppbVar5) = 0;
    if ((*param_11 & 1) != 0) goto LAB_005b8e40;
LAB_005b8df4:
    *(undefined2 *)param_11 = 0;
  }
  param_11[2] = (ulong)local_230;
  param_11[1] = (ulong)ppppppbStack_238;
  *param_11 = (ulong)local_240;
  pvVar73 = *(void **)(lVar25 + 0x28);
  ppppppbVar68 = *(byte *******)(lVar25 + 0x30);
  local_240 = (byte ******)0x0;
  ppppppbStack_238 = (byte ******)0x0;
  local_230 = (byte *******)0x0;
  if ((byte ******)0xffffffffffffffef < ppppppbVar68) {
                    /* try { // try from 005bc0d0 to 005bc0d7 has its CatchHandler @ 005bc49c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (&DAT_00000016 < ppppppbVar68) {
    pppppppbVar69 =
         (byte *******)FUN_002e2e80(PTR_FUN_04373078,(ulong)(ppppppbVar68 + 2) & 0xfffffffffffffff0)
    ;
    local_240 = (byte ******)((ulong)(ppppppbVar68 + 2) & 0xfffffffffffffff0 | 1);
    ppppppbStack_238 = ppppppbVar68;
    local_230 = pppppppbVar69;
LAB_005b8eec:
    memcpy(pppppppbVar69,pvVar73,(size_t)ppppppbVar68);
    *(byte *)((long)pppppppbVar69 + (long)ppppppbVar68) = 0;
    if ((*param_12 & 1) == 0) goto LAB_005b8ebc;
LAB_005b8f08:
    **(undefined1 **)(param_12 + 0x10) = 0;
    bVar6 = *param_12;
    param_12[8] = 0;
    param_12[9] = 0;
    param_12[10] = 0;
    param_12[0xb] = 0;
    param_12[0xc] = 0;
    param_12[0xd] = 0;
    param_12[0xe] = 0;
    param_12[0xf] = 0;
    if ((bVar6 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_12 + 0x10));
      param_12[0] = 0;
      param_12[1] = 0;
      param_12[2] = 0;
      param_12[3] = 0;
      param_12[4] = 0;
      param_12[5] = 0;
      param_12[6] = 0;
      param_12[7] = 0;
    }
  }
  else {
    local_240 = (byte ******)(ulong)(byte)((int)ppppppbVar68 << 1);
    pppppppbVar69 = (byte *******)((ulong)&local_240 | 1);
    if (ppppppbVar68 != (byte ******)0x0) goto LAB_005b8eec;
    *(byte *)pppppppbVar69 = 0;
    if ((*param_12 & 1) != 0) goto LAB_005b8f08;
LAB_005b8ebc:
    param_12[0] = 0;
    param_12[1] = 0;
  }
  *(byte ********)(param_12 + 0x10) = local_230;
  *(byte *******)(param_12 + 8) = ppppppbStack_238;
  *(byte *******)param_12 = local_240;
  puVar75 = PTR_PTR_04374a58;
  pcVar83 = *(char **)PTR_PTR_04374a58;
  bVar6 = (byte)*param_13;
  sVar66 = param_13[1];
  sVar27 = strlen(pcVar83);
  sVar29 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar29 = sVar66;
  }
  if (sVar27 == sVar29) {
    if (sVar27 != 0) {
      if (sVar27 == 0xffffffffffffffff) {
                    /* try { // try from 005bc0d8 to 005bc0df has its CatchHandler @ 005bc498 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar40 = (byte *)param_13[2];
      if ((bVar6 & 1) == 0) {
        pbVar40 = (byte *)((long)param_13 + 1);
      }
      iVar22 = memcmp(pbVar40,pcVar83,sVar27);
      if (iVar22 != 0) goto LAB_005b8f9c;
    }
    puVar41 = *(ulong **)(lVar25 + 0x40);
    if ((puVar41 != (ulong *)0x0) && (uVar26 = puVar41[1], uVar26 != 0)) {
      puVar45 = (undefined8 *)(*puVar41 & 0xfffffffffffffff8);
      uVar61 = *param_1;
      lVar62 = param_1[1];
      puVar70 = (undefined8 *)*puVar45;
      sVar27 = puVar70[1];
      sVar29 = strlen(pcVar83);
      puVar16 = PTR_PTR_04375028;
      if (sVar27 != sVar29) {
LAB_005b9194:
                    /* try { // try from 005b9194 to 005b91c3 has its CatchHandler @ 005bcc30 */
        FUN_002f2c60(&local_240,"Resource is not LDS.");
        param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                        ,0x55b,&local_240,0,0);
        goto joined_r0x005bb948;
      }
LAB_005b90ec:
      puVar45 = puVar45 + 1;
      uVar26 = uVar26 - 1;
      iVar22 = memcmp((void *)*puVar70,pcVar83,sVar27);
      if (iVar22 != 0) goto LAB_005b9194;
      uVar37 = puVar70[2];
      uVar86 = puVar70[3];
                    /* try { // try from 005b9104 to 005b912f has its CatchHandler @ 005bcc38 */
      lVar25 = FUN_0053ee00(puVar16,lVar24);
      if ((lVar25 == 0) ||
         (uVar59 = FUN_005403e0(uVar37,uVar86,lVar25,puVar16,lVar24), (uVar59 & 1) == 0)) {
                    /* try { // try from 005bb810 to 005bb873 has its CatchHandler @ 005bcc30 */
        FUN_002f2c60(&local_240,"Can\'t decode listener.");
        param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                        ,0x563,&local_240,0,0);
        goto joined_r0x005bb948;
      }
      sVar29 = *(size_t *)(lVar25 + 0x20);
      pbVar40 = param_3 + 1;
      if ((*param_3 & 1) != 0) {
        pbVar40 = *(byte **)(param_3 + 0x10);
      }
      sVar27 = strlen((char *)pbVar40);
      if ((sVar29 != sVar27) ||
         (iVar22 = memcmp(*(void **)(lVar25 + 0x18),pbVar40,sVar29), iVar22 != 0)) {
        if (uVar26 != 0) goto code_r0x005b9174;
        goto LAB_005b937c;
      }
      if (*(long **)(lVar25 + 0x78) == (long *)0x0) {
                    /* try { // try from 005bba7c to 005bbb4b has its CatchHandler @ 005bcc30 */
        FUN_002f2c60(&local_240,"Listener has no ApiListener.");
        param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                        ,0x56f,&local_240,0,0);
        goto joined_r0x005bb948;
      }
      lVar25 = **(long **)(lVar25 + 0x78);
      uVar37 = *(undefined8 *)(lVar25 + 0x10);
      uVar86 = *(undefined8 *)(lVar25 + 0x18);
                    /* try { // try from 005bb960 to 005bb997 has its CatchHandler @ 005bcc30 */
      lVar25 = FUN_0053ee00(PTR_PTR_04375058,lVar24);
      if (lVar25 == 0) {
        lVar25 = 0;
        iVar22 = _DAT_00000100;
      }
      else {
        uVar26 = FUN_005403e0(uVar37,uVar86,lVar25,PTR_PTR_04375058,lVar24);
        if ((uVar26 & 1) == 0) {
          lVar25 = 0;
        }
        iVar22 = *(int *)(lVar25 + 0x100);
      }
      if (iVar22 == 3) {
        puVar45 = *(undefined8 **)(lVar25 + 0xf8);
        if (puVar45[2] == 0) {
                    /* try { // try from 005bbc80 to 005bbd1f has its CatchHandler @ 005bcc30 */
          FUN_002f2c60(&local_240,"HttpConnectionManager missing config_source for RDS.");
          param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                          ,0x594,&local_240,0,0);
        }
        else if (*(int *)(puVar45[2] + 0x20) == 3) {
          if (*param_7 != '\0') {
            if (param_7[0x20] != '\0') {
              lVar62 = *(long *)(param_7 + 0x28);
              if (lVar62 != 0) {
                lVar25 = *(long *)(param_7 + 0x30);
                if (lVar25 == lVar62) {
                  lVar25 = lVar62;
                }
                else {
                  do {
                    lVar25 = lVar25 + -0x78;
                    FUN_005c32fc(lVar25);
                  } while (lVar62 != lVar25);
                  lVar25 = *(long *)(param_7 + 0x28);
                }
                *(long *)(param_7 + 0x30) = lVar62;
                FUN_002e2ea0(PTR_LAB_04373088,lVar25);
              }
              param_7[0x20] = '\0';
            }
            if ((param_7[8] & 1U) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_7 + 0x18));
            }
            *param_7 = '\0';
          }
          param_7[0x38] = '\0';
          param_7[0x39] = '\0';
          param_7[0x3a] = '\0';
          param_7[0x3b] = '\0';
          param_7[0x3c] = '\0';
          param_7[0x3d] = '\0';
          param_7[0x3e] = '\0';
          param_7[0x3f] = '\0';
          param_7[0x30] = '\0';
          param_7[0x31] = '\0';
          param_7[0x32] = '\0';
          param_7[0x33] = '\0';
          param_7[0x34] = '\0';
          param_7[0x35] = '\0';
          param_7[0x36] = '\0';
          param_7[0x37] = '\0';
          param_7[0x28] = '\0';
          param_7[0x29] = '\0';
          param_7[0x2a] = '\0';
          param_7[0x2b] = '\0';
          param_7[0x2c] = '\0';
          param_7[0x2d] = '\0';
          param_7[0x2e] = '\0';
          param_7[0x2f] = '\0';
          *param_7 = '\x01';
          param_7[0x20] = '\0';
          param_7[0x21] = '\0';
          param_7[0x22] = '\0';
          param_7[0x23] = '\0';
          param_7[0x24] = '\0';
          param_7[0x25] = '\0';
          param_7[0x26] = '\0';
          param_7[0x27] = '\0';
          param_7[0x18] = '\0';
          param_7[0x19] = '\0';
          param_7[0x1a] = '\0';
          param_7[0x1b] = '\0';
          param_7[0x1c] = '\0';
          param_7[0x1d] = '\0';
          param_7[0x1e] = '\0';
          param_7[0x1f] = '\0';
          param_7[0x10] = '\0';
          param_7[0x11] = '\0';
          param_7[0x12] = '\0';
          param_7[0x13] = '\0';
          param_7[0x14] = '\0';
          param_7[0x15] = '\0';
          param_7[0x16] = '\0';
          param_7[0x17] = '\0';
          param_7[8] = '\0';
          param_7[9] = '\0';
          param_7[10] = '\0';
          param_7[0xb] = '\0';
          param_7[0xc] = '\0';
          param_7[0xd] = '\0';
          param_7[0xe] = '\0';
          param_7[0xf] = '\0';
          pvVar73 = (void *)*puVar45;
          ppppppbVar68 = (byte ******)puVar45[1];
          ppppppbStack_238 = (byte ******)0x0;
          local_230 = (byte *******)0x0;
          local_240 = (byte ******)0x0;
          if ((byte ******)0xffffffffffffffef < ppppppbVar68) {
                    /* try { // try from 005bc308 to 005bc30f has its CatchHandler @ 005bcc30 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (&DAT_00000016 < ppppppbVar68) {
            pppppppbVar69 =
                 (byte *******)
                 FUN_002e2e80(PTR_FUN_04373078,(ulong)(ppppppbVar68 + 2) & 0xfffffffffffffff0);
            local_240 = (byte ******)((ulong)(ppppppbVar68 + 2) & 0xfffffffffffffff0 | 1);
            ppppppbStack_238 = ppppppbVar68;
            local_230 = pppppppbVar69;
LAB_005bc03c:
            memcpy(pppppppbVar69,pvVar73,(size_t)ppppppbVar68);
          }
          else {
            local_240 = (byte ******)(ulong)(byte)((int)ppppppbVar68 << 1);
            pppppppbVar69 = (byte *******)((ulong)&local_240 | 1);
            if (ppppppbVar68 != (byte ******)0x0) goto LAB_005bc03c;
          }
          *(byte *)((long)pppppppbVar69 + (long)ppppppbVar68) = 0;
          if (*param_7 == '\0') {
                    /* try { // try from 005bc310 to 005bc32f has its CatchHandler @ 005bc350 */
                    /* WARNING: Subroutine does not return */
            __assert_fail("this->engaged_","external/com_google_absl\\absl/types/optional.h",0x1a3,
                          "operator->");
          }
          pbVar40 = (byte *)(param_7 + 8);
          if ((*pbVar40 & 1) == 0) {
            pbVar40[0] = 0;
            pbVar40[1] = 0;
          }
          else {
            **(undefined1 **)(param_7 + 0x18) = 0;
            param_7[0x10] = '\0';
            param_7[0x11] = '\0';
            param_7[0x12] = '\0';
            param_7[0x13] = '\0';
            param_7[0x14] = '\0';
            param_7[0x15] = '\0';
            param_7[0x16] = '\0';
            param_7[0x17] = '\0';
            if ((param_7[8] & 1U) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_7 + 0x18));
              param_7[8] = '\0';
              param_7[9] = '\0';
              param_7[10] = '\0';
              param_7[0xb] = '\0';
              param_7[0xc] = '\0';
              param_7[0xd] = '\0';
              param_7[0xe] = '\0';
              param_7[0xf] = '\0';
            }
          }
          param_12 = (byte *)0x0;
          *(byte ********)(param_7 + 0x18) = local_230;
          *(byte *******)(param_7 + 0x10) = ppppppbStack_238;
          *(byte *******)pbVar40 = local_240;
        }
        else {
          FUN_002f2c60(&local_240,"HttpConnectionManager ConfigSource for RDS does not specify ADS."
                      );
          param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                          ,0x598,&local_240,0,0);
        }
        goto joined_r0x005bb948;
      }
      if (iVar22 != 4) {
        FUN_002f2c60(&local_240,"HttpConnectionManager neither has inlined route_config nor RDS.");
        param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                        ,0x589,&local_240,0,0);
        goto joined_r0x005bb948;
      }
      ppppppbStack_238 = (byte ******)0x0;
      local_230 = (byte *******)0x0;
      local_240 = (byte ******)0x0;
                    /* try { // try from 005bb9c4 to 005bb9cf has its CatchHandler @ 005bc824 */
      param_12 = (byte *)FUN_005c01f0(uVar61,*(undefined1 *)(lVar62 + 0x10),
                                      *(undefined8 *)(lVar25 + 0xf8),param_3,&local_240);
      ppppppbVar68 = local_240;
      if (param_12 == (byte *)0x0) {
        if (*param_7 != '\0') {
          if (param_7[0x20] != '\0') {
            lVar62 = *(long *)(param_7 + 0x28);
            if (lVar62 != 0) {
              lVar25 = *(long *)(param_7 + 0x30);
              if (lVar25 == lVar62) {
                lVar25 = lVar62;
              }
              else {
                do {
                  lVar25 = lVar25 + -0x78;
                  FUN_005c32fc(lVar25);
                } while (lVar62 != lVar25);
                lVar25 = *(long *)(param_7 + 0x28);
              }
              *(long *)(param_7 + 0x30) = lVar62;
              FUN_002e2ea0(PTR_LAB_04373088,lVar25);
            }
            param_7[0x20] = '\0';
          }
          if ((param_7[8] & 1U) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_7 + 0x18));
          }
          *param_7 = '\0';
        }
        *param_7 = '\x01';
        param_7[0x20] = '\0';
        param_7[0x21] = '\0';
        param_7[0x22] = '\0';
        param_7[0x23] = '\0';
        param_7[0x24] = '\0';
        param_7[0x25] = '\0';
        param_7[0x26] = '\0';
        param_7[0x27] = '\0';
        param_7[0x18] = '\0';
        param_7[0x19] = '\0';
        param_7[0x1a] = '\0';
        param_7[0x1b] = '\0';
        param_7[0x1c] = '\0';
        param_7[0x1d] = '\0';
        param_7[0x1e] = '\0';
        param_7[0x1f] = '\0';
        param_7[0x10] = '\0';
        param_7[0x11] = '\0';
        param_7[0x12] = '\0';
        param_7[0x13] = '\0';
        param_7[0x14] = '\0';
        param_7[0x15] = '\0';
        param_7[0x16] = '\0';
        param_7[0x17] = '\0';
        param_7[8] = '\0';
        param_7[9] = '\0';
        param_7[10] = '\0';
        param_7[0xb] = '\0';
        param_7[0xc] = '\0';
        param_7[0xd] = '\0';
        param_7[0xe] = '\0';
        param_7[0xf] = '\0';
        *(byte *******)(param_7 + 0x30) = ppppppbStack_238;
        *(byte *******)(param_7 + 0x28) = local_240;
        *(byte ********)(param_7 + 0x38) = local_230;
        local_240 = (byte ******)0x0;
        ppppppbStack_238 = (byte ******)0x0;
        local_230 = (byte *******)0x0;
        param_7[0x20] = '\x01';
        goto joined_r0x005bbf84;
      }
      ppppppbVar34 = ppppppbStack_238;
      if (local_240 == (byte ******)0x0) goto joined_r0x005bb948;
      for (; ppppppbVar34 != ppppppbVar68; ppppppbVar34 = ppppppbVar34 + -0xf) {
        FUN_005c32fc(ppppppbVar34 + -0xf);
      }
LAB_005bbc1c:
      ppppppbStack_238 = ppppppbVar68;
      FUN_002e2ea0(PTR_LAB_04373088,local_240);
      goto joined_r0x005bb948;
    }
  }
  else {
LAB_005b8f9c:
    puVar75 = PTR_PTR_04374a60;
    pcVar83 = *(char **)PTR_PTR_04374a60;
    sVar27 = strlen(pcVar83);
    if (sVar27 != sVar29) {
LAB_005b8fe0:
      puVar75 = PTR_PTR_04374a68;
      pcVar83 = *(char **)PTR_PTR_04374a68;
      sVar27 = strlen(pcVar83);
      if (sVar27 == sVar29) {
        if (sVar29 != 0) {
          if (sVar29 == 0xffffffffffffffff) {
                    /* try { // try from 005bc108 to 005bc10f has its CatchHandler @ 005bc490 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_out_of_range();
          }
          pbVar40 = (byte *)param_13[2];
          if ((bVar6 & 1) == 0) {
            pbVar40 = (byte *)((long)param_13 + 1);
          }
          iVar22 = memcmp(pbVar40,pcVar83,sVar29);
          if (iVar22 != 0) goto LAB_005b9028;
        }
        puVar41 = *(ulong **)(lVar25 + 0x40);
        if ((puVar41 != (ulong *)0x0) && (uVar26 = puVar41[1], uVar26 != 0)) {
          uVar61 = *param_1;
          lVar62 = param_1[1];
          uVar59 = *puVar41;
          local_130 = 0;
          local_138 = 0;
          uStack_137 = 0;
          uStack_132 = 0;
          puVar45 = *(undefined8 **)(uVar59 & 0xfffffffffffffff8);
          sVar27 = puVar45[1];
          sVar29 = strlen(pcVar83);
          ppppppbVar34 = _UNK_03889b78;
          ppppppbVar68 = _DAT_03889b70;
          if (sVar27 == sVar29) {
            pppppppbVar69 = (byte *******)((ulong)&local_240 | 1);
            plVar2 = (long *)(param_5 + 8);
            uVar42 = 0;
            do {
              iVar22 = memcmp((void *)*puVar45,pcVar83,sVar27);
              puVar16 = PTR_PTR_04375038;
              if (iVar22 != 0) break;
              uVar37 = puVar45[2];
              uVar86 = puVar45[3];
                    /* try { // try from 005b9434 to 005b9467 has its CatchHandler @ 005bcc28 */
              piVar76 = (int *)FUN_0053ee00(PTR_PTR_04375038,lVar24);
              if ((piVar76 == (int *)0x0) ||
                 (uVar30 = FUN_005403e0(uVar37,uVar86,piVar76,puVar16,lVar24), (uVar30 & 1) == 0)) {
                    /* try { // try from 005bb878 to 005bb8a3 has its CatchHandler @ 005bcb00 */
                FUN_002f2c60(&local_240,"Can\'t decode cluster.");
                param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                ,0x5e7,&local_240,0,0);
                goto joined_r0x005bb948;
              }
                    /* try { // try from 005b987c to 005b9883 has its CatchHandler @ 005bcc28 */
              if ((*(char *)(lVar62 + 0x10) == '\0') || (iVar22 = FUN_002ec180(0), iVar22 == 0)) {
                ppppppbVar74 = *(byte *******)(piVar76 + 10);
              }
              else {
                local_108[0] = (byte *******)0x0;
                pppppppbStack_110 = (byte *******)0x0;
                local_118 = (byte *******)0x0;
                ppppppbStack_238 = *(byte *******)(piVar76 + 10);
                local_240 = *(byte *******)(piVar76 + 8);
                    /* try { // try from 005b98a4 to 005b98bb has its CatchHandler @ 005bc5a8 */
                FUN_005be370(&DAT_038f8fce,&local_240,&local_118,0);
                if (piVar76[0x4e] == 0x26) {
                    /* try { // try from 005b9944 to 005b9967 has its CatchHandler @ 005bc588 */
                  FUN_005c3e28(&local_118,"cluster_type: <not printed>");
LAB_005b9968:
                  puVar45 = *(undefined8 **)(piVar76 + 0x10);
                }
                else {
                  if (piVar76[0x4e] != 2) {
                    FUN_005bec2c(&local_118,"<unknown type>");
                    goto LAB_005b9968;
                  }
                  ppppppbStack_238 = (byte ******)0x6;
                  local_240 = (byte ******)0x3906a6c;
                    /* try { // try from 005b98e8 to 005b9913 has its CatchHandler @ 005bc598 */
                  lVar25 = FUN_002ed6a0(piVar76[0x4c],local_2d8);
                  uVar30 = lVar25 - (long)local_2d8;
                  if ((long)uVar30 < 0) {
                    local_2e8 = local_2d8;
                    /* try { // try from 005bc168 to 005bc187 has its CatchHandler @ 005bc450 */
                    /* WARNING: Subroutine does not return */
                    __assert_fail("false && \"len <= kMaxSize\"",
                                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                  "operator()");
                  }
                  local_2e8 = local_2d8;
                  local_2e0 = uVar30;
                  FUN_002eced0(&local_190,&local_240,&local_2e8);
                    /* try { // try from 005b9914 to 005b991f has its CatchHandler @ 005bc4e8 */
                  FUN_005bef00(&local_118,&local_190);
                  if (((ulong)local_190 & 1) == 0) goto LAB_005b9968;
                  FUN_002e2ea0(PTR_LAB_04373088,local_180);
                  puVar45 = *(undefined8 **)(piVar76 + 0x10);
                }
                if (puVar45 != (undefined8 *)0x0) {
                    /* try { // try from 005b9970 to 005b997f has its CatchHandler @ 005bc4d8 */
                  FUN_005c4894(&local_118,"eds_cluster_config {");
                  pppppppbVar63 = pppppppbStack_110;
                  if (puVar45[2] != 0) {
                    if (*(int *)(puVar45[2] + 0x20) == 3) {
                      if (pppppppbStack_110 < local_108[0]) {
                        *pppppppbStack_110 = (byte ******)0x0;
                        pppppppbStack_110[1] = (byte ******)0x0;
                        pppppppbStack_110[2] = (byte ******)0x0;
                        ppppppbVar74 = (byte ******)FUN_002e2e80(PTR_FUN_04373078,0x20);
                        pppppppbVar63[2] = ppppppbVar74;
                        pppppppbVar63[1] = ppppppbVar34;
                        *pppppppbVar63 = ppppppbVar68;
                        uVar37 = s_eds_config___ads______038ac84f._0_8_;
                        pppppbVar5 = (byte *****)
                                     CONCAT17(s_eds_config___ads______038ac84f[0xf],
                                              s_eds_config___ads______038ac84f._8_7_);
                        *(ulong *)((long)ppppppbVar74 + 0xf) =
                             CONCAT71(s_eds_config___ads______038ac84f._16_7_,
                                      s_eds_config___ads______038ac84f[0xf]);
                        ppppppbVar74[1] = pppppbVar5;
                        *ppppppbVar74 = (byte *****)uVar37;
                        *(char *)((long)ppppppbVar74 + 0x17) = '\0';
                        pppppppbStack_110 = pppppppbStack_110 + 3;
                      }
                      else {
                        lVar25 = (long)pppppppbStack_110 - (long)local_118 >> 3;
                        uVar30 = lVar25 * -0x5555555555555555 + 1;
                        if (0xaaaaaaaaaaaaaaa < uVar30) {
                    /* try { // try from 005bc188 to 005bc18f has its CatchHandler @ 005bc440 */
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        lVar54 = (long)local_108[0] - (long)local_118 >> 3;
                        uVar78 = 0xaaaaaaaaaaaaaaa;
                        if ((ulong)(lVar54 * -0x5555555555555555) < 0x555555555555555) {
                          uVar44 = lVar54 * 0x5555555555555556;
                          uVar78 = uVar30;
                          if (uVar30 <= uVar44) {
                            uVar78 = uVar44;
                          }
                          if (uVar78 != 0) goto LAB_005b9a70;
                          lVar54 = 0;
                        }
                        else {
LAB_005b9a70:
                          lVar54 = FUN_002e2e80(PTR_FUN_04373078,uVar78 * 0x18);
                        }
                        pppppppbVar77 = (byte *******)(lVar54 + lVar25 * 8);
                        pppppppbVar31 = (byte *******)(lVar54 + uVar78 * 0x18);
                        *pppppppbVar77 = (byte ******)0x0;
                        pppppppbVar77[1] = (byte ******)0x0;
                        pppppppbVar77[2] = (byte ******)0x0;
                        ppppppbVar74 = (byte ******)FUN_002e2e80(PTR_FUN_04373078,0x20);
                        pppppppbVar36 = local_118;
                        pppppppbVar77[2] = ppppppbVar74;
                        pppppppbVar63 = pppppppbVar77 + 3;
                        pppppppbVar77[1] = ppppppbVar34;
                        *pppppppbVar77 = ppppppbVar68;
                        uVar37 = s_eds_config___ads______038ac84f._0_8_;
                        pppppbVar5 = (byte *****)
                                     CONCAT17(s_eds_config___ads______038ac84f[0xf],
                                              s_eds_config___ads______038ac84f._8_7_);
                        *(ulong *)((long)ppppppbVar74 + 0xf) =
                             CONCAT71(s_eds_config___ads______038ac84f._16_7_,
                                      s_eds_config___ads______038ac84f[0xf]);
                        ppppppbVar74[1] = pppppbVar5;
                        *ppppppbVar74 = (byte *****)uVar37;
                        *(char *)((long)ppppppbVar74 + 0x17) = '\0';
                        pppppppbVar51 = pppppppbStack_110;
                        if (pppppppbStack_110 == local_118) {
                          pppppppbStack_110 = local_118;
                        }
                        else {
                          do {
                            ppppppbVar46 = pppppppbVar51[-2];
                            ppppppbVar74 = pppppppbVar51[-3];
                            pppppppbVar77[-1] = pppppppbVar51[-1];
                            pppppppbVar77[-2] = ppppppbVar46;
                            pppppppbVar77[-3] = ppppppbVar74;
                            pppppppbVar51[-3] = (byte ******)0x0;
                            pppppppbVar51[-2] = (byte ******)0x0;
                            pppppppbVar51[-1] = (byte ******)0x0;
                            pppppppbVar51 = pppppppbVar51 + -3;
                            pppppppbVar77 = pppppppbVar77 + -3;
                          } while (local_118 != pppppppbVar51);
                        }
                        bVar21 = pppppppbStack_110 != local_118;
                        local_118 = pppppppbVar77;
                        local_108[0] = pppppppbVar31;
                        if (bVar21) {
                          bVar6 = *(byte *)(pppppppbStack_110 + -3);
                          pppppppbVar31 = pppppppbStack_110 + -3;
                          pppppppbVar51 = pppppppbStack_110;
                          while( true ) {
                            pppppppbVar77 = pppppppbVar31;
                            pppppppbStack_110 = pppppppbVar63;
                            if ((bVar6 & 1) != 0) {
                              FUN_002e2ea0(PTR_LAB_04373088,pppppppbVar51[-1]);
                            }
                            pppppppbVar63 = pppppppbStack_110;
                            if (pppppppbVar36 == pppppppbVar77) break;
                            bVar6 = *(byte *)(pppppppbVar77 + -3);
                            pppppppbVar31 = pppppppbVar77 + -3;
                            pppppppbVar51 = pppppppbVar77;
                          }
                        }
                        pppppppbStack_110 = pppppppbVar63;
                        if (pppppppbVar36 != (byte *******)0x0) {
                          FUN_002e2ea0(PTR_LAB_04373088,pppppppbVar36);
                        }
                      }
                    }
                    else {
                    /* try { // try from 005b99f4 to 005b9a03 has its CatchHandler @ 005bc578 */
                      FUN_005c4b68(&local_118,"  eds_config: <non-ADS type>");
                    }
                  }
                  ppppppbStack_238 = (byte ******)puVar45[1];
                  local_240 = (byte ******)*puVar45;
                    /* try { // try from 005b9b8c to 005b9ba3 has its CatchHandler @ 005bc4c8 */
                  FUN_005be370("  service_name",&local_240,&local_118,0);
                    /* try { // try from 005b9ba4 to 005b9bab has its CatchHandler @ 005bc578 */
                  FUN_005bf0c0(&local_118);
                }
                ppppppbStack_238 = (byte ******)0xb;
                local_240 = (byte ******)0x38c00c6;
                    /* try { // try from 005b9bc4 to 005b9bef has its CatchHandler @ 005bc5b8 */
                lVar25 = FUN_002ed6a0(*piVar76,local_2d8);
                uVar30 = lVar25 - (long)local_2d8;
                if ((long)uVar30 < 0) {
                  local_2e8 = local_2d8;
                    /* try { // try from 005bc190 to 005bc1af has its CatchHandler @ 005bc430 */
                    /* WARNING: Subroutine does not return */
                  __assert_fail("false && \"len <= kMaxSize\"",
                                "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                "operator()");
                }
                local_2e8 = local_2d8;
                local_2e0 = uVar30;
                FUN_002eced0(&local_190,&local_240,&local_2e8);
                    /* try { // try from 005b9bf0 to 005b9bfb has its CatchHandler @ 005bc550 */
                FUN_005bef00(&local_118,&local_190);
                if (((ulong)local_190 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_180);
                }
                if (*(long *)(piVar76 + 0x38) != 0) {
                  if (*(int *)(*(long *)(piVar76 + 0x38) + 0x20) == 5) {
                    if (pppppppbStack_110 < local_108[0]) {
                      pppppppbStack_110[1] = (byte ******)0x0;
                      pppppppbStack_110[2] = (byte ******)0x0;
                      *pppppppbStack_110 = (byte ******)0x2c;
                      uVar86 = s_lrs_server___self______038ac884._0_8_;
                      uVar37 = CONCAT26(s_lrs_server___self______038ac884._14_2_,
                                        s_lrs_server___self______038ac884._8_6_);
                      *(ulong *)((long)pppppppbStack_110 + 0xf) =
                           CONCAT62(s_lrs_server___self______038ac884._16_6_,
                                    s_lrs_server___self______038ac884._14_2_);
                      *(undefined8 *)((long)pppppppbStack_110 + 9) = uVar37;
                      *(undefined8 *)((long)pppppppbStack_110 + 1) = uVar86;
                      *(byte *)((long)pppppppbStack_110 + 0x17) = 0;
                      pppppppbStack_110 = pppppppbStack_110 + 3;
                    }
                    else {
                      lVar25 = (long)pppppppbStack_110 - (long)local_118 >> 3;
                      uVar30 = lVar25 * -0x5555555555555555 + 1;
                      if (0xaaaaaaaaaaaaaaa < uVar30) {
                    /* try { // try from 005bc1b0 to 005bc1b7 has its CatchHandler @ 005bc420 */
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_length_error();
                      }
                      lVar54 = (long)local_108[0] - (long)local_118 >> 3;
                      uVar78 = 0xaaaaaaaaaaaaaaa;
                      if ((ulong)(lVar54 * -0x5555555555555555) < 0x555555555555555) {
                        uVar44 = lVar54 * 0x5555555555555556;
                        uVar78 = uVar30;
                        if (uVar30 <= uVar44) {
                          uVar78 = uVar44;
                        }
                        if (uVar78 != 0) goto LAB_005b9cec;
                        lVar54 = 0;
                      }
                      else {
LAB_005b9cec:
                        lVar54 = FUN_002e2e80(PTR_FUN_04373078,uVar78 * 0x18);
                      }
                      pppppppbVar36 = local_118;
                      pppppppbVar31 = (byte *******)(lVar54 + lVar25 * 8);
                      pppppppbVar31[1] = (byte ******)0x0;
                      pppppppbVar31[2] = (byte ******)0x0;
                      *pppppppbVar31 = (byte ******)0x2c;
                      uVar86 = s_lrs_server___self______038ac884._0_8_;
                      uVar37 = CONCAT26(s_lrs_server___self______038ac884._14_2_,
                                        s_lrs_server___self______038ac884._8_6_);
                      *(ulong *)((long)pppppppbVar31 + 0xf) =
                           CONCAT62(s_lrs_server___self______038ac884._16_6_,
                                    s_lrs_server___self______038ac884._14_2_);
                      *(byte *)((long)pppppppbVar31 + 0x17) = 0;
                      *(undefined8 *)((long)pppppppbVar31 + 9) = uVar37;
                      *(undefined8 *)((long)pppppppbVar31 + 1) = uVar86;
                      local_108[0] = (byte *******)(lVar54 + uVar78 * 0x18);
                      pppppppbVar63 = pppppppbVar31 + 3;
                      pppppppbVar51 = pppppppbStack_110;
                      if (pppppppbStack_110 == local_118) {
                        pppppppbStack_110 = local_118;
                      }
                      else {
                        do {
                          ppppppbVar46 = pppppppbVar51[-2];
                          ppppppbVar74 = pppppppbVar51[-3];
                          pppppppbVar31[-1] = pppppppbVar51[-1];
                          pppppppbVar31[-2] = ppppppbVar46;
                          pppppppbVar31[-3] = ppppppbVar74;
                          pppppppbVar51[-3] = (byte ******)0x0;
                          pppppppbVar51[-2] = (byte ******)0x0;
                          pppppppbVar51[-1] = (byte ******)0x0;
                          pppppppbVar51 = pppppppbVar51 + -3;
                          pppppppbVar31 = pppppppbVar31 + -3;
                        } while (local_118 != pppppppbVar51);
                      }
                      bVar21 = pppppppbStack_110 != local_118;
                      local_118 = pppppppbVar31;
                      if (bVar21) {
                        bVar6 = *(byte *)(pppppppbStack_110 + -3);
                        pppppppbVar31 = pppppppbStack_110 + -3;
                        pppppppbVar51 = pppppppbStack_110;
                        while( true ) {
                          pppppppbVar77 = pppppppbVar31;
                          pppppppbStack_110 = pppppppbVar63;
                          if ((bVar6 & 1) != 0) {
                            FUN_002e2ea0(PTR_LAB_04373088,pppppppbVar51[-1]);
                          }
                          pppppppbVar63 = pppppppbStack_110;
                          if (pppppppbVar36 == pppppppbVar77) break;
                          bVar6 = *(byte *)(pppppppbVar77 + -3);
                          pppppppbVar31 = pppppppbVar77 + -3;
                          pppppppbVar51 = pppppppbVar77;
                        }
                      }
                      pppppppbStack_110 = pppppppbVar63;
                      if (pppppppbVar36 != (byte *******)0x0) {
                        FUN_002e2ea0(PTR_LAB_04373088,pppppppbVar36);
                      }
                    }
                  }
                  else {
                    /* try { // try from 005b9c70 to 005b9c7f has its CatchHandler @ 005bc4b8 */
                    FUN_005c3e28(&local_118,"lrs_server: <non-self type>");
                  }
                }
                    /* try { // try from 005b9dec to 005b9dff has its CatchHandler @ 005bc540 */
                FUN_002e5790(&local_240,local_118,pppppppbStack_110,&DAT_0396725e,1);
                pppppppbVar63 = pppppppbVar69;
                if (((ulong)local_240 & 1) != 0) {
                  pppppppbVar63 = local_230;
                }
                    /* try { // try from 005b9e14 to 005b9e33 has its CatchHandler @ 005bc52c */
                FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                             ,799,0,"[xds_client %p] Cluster: %s",uVar61,pppppppbVar63);
                if (((ulong)local_240 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_230);
                }
                pppppppbVar63 = local_118;
                if (local_118 != (byte *******)0x0) {
                  if (pppppppbStack_110 != local_118) {
                    bVar6 = *(byte *)(pppppppbStack_110 + -3);
                    pppppppbVar51 = pppppppbStack_110 + -3;
                    pppppppbVar36 = pppppppbStack_110;
                    while( true ) {
                      pppppppbVar31 = pppppppbVar51;
                      if ((bVar6 & 1) != 0) {
                        FUN_002e2ea0(PTR_LAB_04373088,pppppppbVar36[-1]);
                      }
                      if (pppppppbVar63 == pppppppbVar31) break;
                      bVar6 = *(byte *)(pppppppbVar31 + -3);
                      pppppppbVar51 = pppppppbVar31 + -3;
                      pppppppbVar36 = pppppppbVar31;
                    }
                  }
                  pppppppbStack_110 = pppppppbVar63;
                  FUN_002e2ea0(PTR_LAB_04373088,local_118);
                }
                ppppppbVar74 = *(byte *******)(piVar76 + 10);
              }
              if ((long)ppppppbVar74 < 0) {
                    /* try { // try from 005bc110 to 005bc12f has its CatchHandler @ 005bc48c */
                    /* WARNING: Subroutine does not return */
                __assert_fail("false && \"len <= kMaxSize\"",
                              "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                              "operator()");
              }
              plVar71 = (long *)*plVar2;
              if (plVar71 != (long *)0x0) {
                pvVar73 = *(void **)(piVar76 + 8);
                ppppppbVar72 = (byte ******)plVar71[5];
                ppppppbVar46 = ppppppbVar72;
                if (ppppppbVar74 <= ppppppbVar72) {
                  ppppppbVar46 = ppppppbVar74;
                }
                plVar67 = plVar2;
                if (ppppppbVar46 != (byte ******)0x0) goto LAB_005b94d8;
LAB_005b94a4:
                do {
                  iVar22 = (uint)(ppppppbVar74 < ppppppbVar72) - (uint)(ppppppbVar72 < ppppppbVar74)
                  ;
LAB_005b94b4:
                  if (iVar22 >= 0) {
                    plVar67 = plVar71;
                  }
                  plVar71 = (long *)plVar71[iVar22 < 0];
                  if (plVar71 == (long *)0x0) {
                    if (plVar67 == plVar2) goto LAB_005b96bc;
                    ppppppbVar72 = (byte ******)plVar67[5];
                    ppppppbVar46 = ppppppbVar74;
                    if (ppppppbVar72 <= ppppppbVar74) {
                      ppppppbVar46 = ppppppbVar72;
                    }
                    if ((ppppppbVar46 == (byte ******)0x0) ||
                       (iVar22 = memcmp(pvVar73,(void *)plVar67[4],(size_t)ppppppbVar46),
                       iVar22 == 0)) {
                      if (ppppppbVar74 < ppppppbVar72) goto LAB_005b96bc;
                    }
                    else if (iVar22 < 0) goto LAB_005b96bc;
                    if (piVar76[0x4e] != 2) {
                    /* try { // try from 005bbb88 to 005bbbb3 has its CatchHandler @ 005bc85c */
                      FUN_002f2c60(&local_240,"DiscoveryType not found.");
                      param_12 = (byte *)FUN_002f0690(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x5f4,&local_240,0,0);
                      goto joined_r0x005bb948;
                    }
                    if (piVar76[0x4c] != 3) {
                    /* try { // try from 005bbbb8 to 005bbbe3 has its CatchHandler @ 005bc858 */
                      FUN_002f2c60(&local_240,"DiscoveryType is not EDS.");
                      param_12 = (byte *)FUN_002f0690(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x5f7,&local_240,0,0);
                      goto joined_r0x005bb948;
                    }
                    puVar45 = *(undefined8 **)(piVar76 + 0x10);
                    if (*(int *)(puVar45[2] + 0x20) != 3) {
                    /* try { // try from 005bbbe8 to 005bbc13 has its CatchHandler @ 005bc854 */
                      FUN_002f2c60(&local_240,"EDS ConfigSource is not ADS.");
                      param_12 = (byte *)FUN_002f0690(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x600,&local_240,0,0);
                      goto joined_r0x005bb948;
                    }
                    ppppppbVar46 = (byte ******)puVar45[1];
                    if (ppppppbVar46 == (byte ******)0x0) {
                      local_320 = (byte *******)0x0;
                      ppppppbVar46 = (byte ******)0x0;
                      uVar30 = 0;
                      uVar78 = 0;
                      ppppppbVar72 = (byte ******)0x0;
                      if (*piVar76 != 0) goto LAB_005b966c;
LAB_005b95b4:
                      bVar21 = false;
                      if (*(long *)(piVar76 + 0x38) != 0) {
                        if (*(int *)(*(long *)(piVar76 + 0x38) + 0x20) != 5) {
                    /* try { // try from 005b984c to 005b9877 has its CatchHandler @ 005bc900 */
                          FUN_002f2c60(&local_240,"LRS ConfigSource is not self.");
                          param_12 = (byte *)FUN_002f0690(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x614,&local_240,0,0);
                          goto LAB_005b9698;
                        }
                        local_130 = 0;
                        bVar21 = true;
                        local_138 = 0;
                        uStack_137 = 0;
                        uStack_132 = 0;
                      }
                      ppppppbStack_238 = (byte ******)0x0;
                      local_230 = (byte *******)0x0;
                      local_240 = (byte ******)0x0;
                      if ((byte ******)0xffffffffffffffef < ppppppbVar74) {
                    /* try { // try from 005bc1c0 to 005bc1c7 has its CatchHandler @ 005bc40c */
                    /* WARNING: Subroutine does not return */
                        std::__basic_string_common<true>::__throw_length_error();
                      }
                      if (&DAT_00000016 < ppppppbVar74) {
                        pppppppbVar63 =
                             (byte *******)
                             FUN_002e2e80(PTR_FUN_04373078,
                                          (ulong)(ppppppbVar74 + 2) & 0xfffffffffffffff0);
                        local_240 = (byte ******)
                                    ((ulong)(ppppppbVar74 + 2) & 0xfffffffffffffff0 | 1);
                        ppppppbStack_238 = ppppppbVar74;
                        local_230 = pppppppbVar63;
LAB_005b9728:
                        memcpy(pppppppbVar63,pvVar73,(size_t)ppppppbVar74);
                      }
                      else {
                        local_240 = (byte ******)(ulong)(byte)((int)ppppppbVar74 << 1);
                        pppppppbVar63 = pppppppbVar69;
                        if (ppppppbVar74 != (byte ******)0x0) goto LAB_005b9728;
                      }
                      *(byte *)((long)pppppppbVar63 + (long)ppppppbVar74) = 0;
                    /* try { // try from 005b973c to 005b974b has its CatchHandler @ 005bc90c */
                      plVar71 = (long *)FUN_005c4e3c(param_9,&local_2e8,&local_240);
                      if (*plVar71 == 0) {
                        p_Var28 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x70);
                        *(byte ********)(p_Var28 + 0x30) = local_230;
                        *(byte *******)(p_Var28 + 0x28) = ppppppbStack_238;
                        *(byte *******)(p_Var28 + 0x20) = local_240;
                        ppppppbStack_238 = (byte ******)0x0;
                        local_230 = (byte *******)0x0;
                        local_240 = (byte ******)0x0;
                        *(ulong *)(p_Var28 + 0x38) =
                             uVar78 & 0xff00 | uVar30 | (ulong)ppppppbVar72 & 0xff;
                        *(byte *******)(p_Var28 + 0x40) = ppppppbVar46;
                        *(byte ********)(p_Var28 + 0x48) = local_320;
                        *(undefined8 *)(p_Var28 + 0x58) = 0;
                        *(undefined8 *)(p_Var28 + 0x50) = 0;
                        *(undefined8 *)(p_Var28 + 0x68) = 0;
                        *(undefined8 *)(p_Var28 + 0x60) = 0;
                        if (bVar21) {
                          *(undefined2 *)(p_Var28 + 0x58) = 0;
                          *(ulong *)(p_Var28 + 0x60) = CONCAT62(local_130,uStack_132);
                          *(undefined8 *)(p_Var28 + 0x68) = 0;
                          *(ulong *)(p_Var28 + 0x5a) =
                               CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                          local_130 = 0;
                          local_138 = 0;
                          uStack_137 = 0;
                          uStack_132 = 0;
                          p_Var28[0x50] = (__tree_node_base)0x1;
                        }
                        *(undefined8 *)p_Var28 = 0;
                        *(undefined8 *)(p_Var28 + 8) = 0;
                        *(undefined8 ********)(p_Var28 + 0x10) = local_2e8;
                        *plVar71 = (long)p_Var28;
                        if (*(long *)*param_9 != 0) {
                          *param_9 = *(long *)*param_9;
                          p_Var28 = (__tree_node_base *)*plVar71;
                        }
                        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                                  ((__tree_node_base *)param_9[1],p_Var28);
                        ppppppbVar72 = (byte ******)0x0;
                        local_320 = (byte *******)0x0;
                        param_9[2] = param_9[2] + 1;
                      }
                      if (((ulong)local_240 & 1) != 0) {
                        FUN_002e2ea0(PTR_LAB_04373088,local_230);
                      }
                      bVar21 = false;
                    }
                    else {
                      pvVar39 = (void *)*puVar45;
                      local_240 = (byte ******)0x0;
                      ppppppbStack_238 = (byte ******)0x0;
                      local_230 = (byte *******)0x0;
                      if ((byte ******)0xffffffffffffffef < ppppppbVar46) {
                    /* try { // try from 005bc1b8 to 005bc1bf has its CatchHandler @ 005bc418 */
                    /* WARNING: Subroutine does not return */
                        std::__basic_string_common<true>::__throw_length_error();
                      }
                      if (&DAT_00000016 < ppppppbVar46) {
                        pppppppbVar63 =
                             (byte *******)
                             FUN_002e2e80(PTR_FUN_04373078,
                                          (ulong)(ppppppbVar46 + 2) & 0xfffffffffffffff0);
                        local_240 = (byte ******)
                                    ((ulong)(ppppppbVar46 + 2) & 0xfffffffffffffff0 | 1);
                        ppppppbStack_238 = ppppppbVar46;
                        local_230 = pppppppbVar63;
                      }
                      else {
                        local_240 = (byte ******)(ulong)(byte)((int)ppppppbVar46 << 1);
                        pppppppbVar63 = pppppppbVar69;
                      }
                      memcpy(pppppppbVar63,pvVar39,(size_t)ppppppbVar46);
                      *(byte *)((long)pppppppbVar63 + (long)ppppppbVar46) = 0;
                      uVar78 = (ulong)local_240 & 0xffffffffffffff00;
                      uVar30 = (ulong)local_240 & 0xffffffffffff0000;
                      local_320 = local_230;
                      ppppppbVar46 = ppppppbStack_238;
                      ppppppbVar72 = local_240;
                      if (*piVar76 == 0) goto LAB_005b95b4;
LAB_005b966c:
                    /* try { // try from 005b966c to 005b9697 has its CatchHandler @ 005bcb04 */
                      FUN_002f2c60(&local_240,"LB policy is not ROUND_ROBIN.");
                      param_12 = (byte *)FUN_002f0690(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x60c,&local_240,0,0);
LAB_005b9698:
                      bVar21 = true;
                    }
                    if (((ulong)ppppppbVar72 & 1) != 0) {
                      FUN_002e2ea0(PTR_LAB_04373088,local_320);
                    }
                    if (bVar21) goto joined_r0x005bb948;
                    goto LAB_005b96bc;
                  }
                  ppppppbVar72 = (byte ******)plVar71[5];
                  ppppppbVar46 = ppppppbVar72;
                  if (ppppppbVar74 <= ppppppbVar72) {
                    ppppppbVar46 = ppppppbVar74;
                  }
                } while (ppppppbVar46 == (byte ******)0x0);
LAB_005b94d8:
                iVar23 = memcmp((void *)plVar71[4],pvVar73,(size_t)ppppppbVar46);
                if (iVar23 == 0) goto LAB_005b94a4;
                iVar22 = 1;
                if (iVar23 < 0) {
                  iVar22 = -1;
                }
                goto LAB_005b94b4;
              }
LAB_005b96bc:
              uVar42 = uVar42 + 1;
              if (uVar42 == uVar26) goto joined_r0x005bbf84;
              local_130 = 0;
              local_138 = 0;
              uStack_137 = 0;
              uStack_132 = 0;
              puVar45 = (undefined8 *)((undefined8 *)(uVar59 & 0xfffffffffffffff8))[uVar42];
              pcVar83 = *(char **)puVar75;
              sVar27 = puVar45[1];
              sVar29 = strlen(pcVar83);
            } while (sVar27 == sVar29);
          }
                    /* try { // try from 005bb7e0 to 005bb80b has its CatchHandler @ 005bcc08 */
          FUN_002f2c60(&local_240,"Resource is not CDS.");
          param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                          ,0x5e0,&local_240,0,0);
          goto joined_r0x005bb948;
        }
      }
      else {
LAB_005b9028:
        param_12 = *(byte **)PTR_PTR_04374a70;
        sVar27 = strlen((char *)param_12);
        if (sVar27 != sVar29) {
LAB_005b906c:
                    /* try { // try from 005b906c to 005b9097 has its CatchHandler @ 005bcc2c */
          FUN_002f2c60(&local_240,"Unsupported ADS resource type.");
          param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                          ,0x70f,&local_240,0,0);
          goto joined_r0x005bb948;
        }
        if (sVar29 != 0) {
          if (sVar29 == 0xffffffffffffffff) {
                    /* try { // try from 005bc150 to 005bc157 has its CatchHandler @ 005bc484 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_out_of_range();
          }
          pbVar40 = (byte *)param_13[2];
          if ((bVar6 & 1) == 0) {
            pbVar40 = (byte *)((long)param_13 + 1);
          }
          iVar22 = memcmp(pbVar40,param_12,sVar29);
          if (iVar22 != 0) goto LAB_005b906c;
        }
        ppppbVar13 = _UNK_038897f8;
        ppppbVar12 = _DAT_038897f0;
        pppppbVar11 = _UNK_038894b8;
        pppppbVar5 = _DAT_038894b0;
        puVar41 = *(ulong **)(lVar25 + 0x40);
        if ((puVar41 != (ulong *)0x0) && (uVar26 = puVar41[1], uVar26 != 0)) {
          uVar42 = *puVar41;
          uVar61 = *param_1;
          pppppppbVar69 = (byte *******)((ulong)&local_118 | 1);
          pppppbVar55 = (byte *****)((ulong)&local_138 | 1);
          pppppbVar43 = (byte *****)((ulong)&local_150 | 1);
          lVar62 = param_1[1];
          pppppppbVar63 = (byte *******)((ulong)&local_240 | 1);
          pppppbVar1 = (byte *****)(PTR_DAT_04375048 + 0x10);
          uVar59 = 0;
          plVar2 = (long *)(param_6 + 8);
          pppppbVar3 = (byte *****)(PTR_DAT_04375050 + 0x10);
          puVar75 = PTR_PTR_04375040;
          puVar45 = (undefined8 *)PTR_PTR_04374a70;
LAB_005b9fc8:
          local_158 = 0;
          local_190 = (byte *******)0x0;
          puVar70 = *(undefined8 **)((uVar42 & 0xfffffffffffffff8) + uVar59 * 8);
          pcVar83 = (char *)*puVar45;
          sVar27 = puVar70[1];
          sVar29 = strlen(pcVar83);
          if ((sVar27 == sVar29) && (iVar22 = memcmp((void *)*puVar70,pcVar83,sVar27), iVar22 == 0))
          {
            uVar37 = puVar70[2];
            uVar86 = puVar70[3];
                    /* try { // try from 005ba00c to 005ba037 has its CatchHandler @ 005bcc10 */
            puVar70 = (undefined8 *)FUN_0053ee00(puVar75,lVar24);
            if ((puVar70 == (undefined8 *)0x0) ||
               (uVar30 = FUN_005403e0(uVar37,uVar86,puVar70,puVar75,lVar24), (uVar30 & 1) == 0)) {
                    /* try { // try from 005bb8d8 to 005bb903 has its CatchHandler @ 005bcaf8 */
              FUN_002f2c60(&local_240,"Can\'t parse cluster_load_assignment.");
              pbVar40 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                             ,0x6a5,&local_240,0,0);
              goto LAB_005bb938;
            }
                    /* try { // try from 005baaa8 to 005baaaf has its CatchHandler @ 005bcc10 */
            if ((*(char *)(lVar62 + 0x10) == '\0') || (iVar22 = FUN_002ec180(0), iVar22 == 0)) {
              ppppppbVar68 = (byte ******)puVar70[1];
            }
            else {
              local_128 = (byte *****)0x0;
              local_130 = 0;
              uStack_12a = 0;
              local_138 = 0;
              uStack_137 = 0;
              uStack_132 = 0;
              ppppppbStack_238 = (byte ******)puVar70[1];
              local_240 = (byte ******)*puVar70;
                    /* try { // try from 005baad0 to 005baae7 has its CatchHandler @ 005bc51c */
              FUN_005be370("cluster_name",&local_240,&local_138,0);
              puVar41 = (ulong *)puVar70[3];
              if ((puVar41 != (ulong *)0x0) && (uVar30 = puVar41[1], uVar30 != 0)) {
                uVar44 = *puVar41;
                uVar78 = 0;
                do {
                  piVar76 = *(int **)((uVar44 & 0xfffffffffffffff8) + uVar78 * 8);
                    /* try { // try from 005bab14 to 005bab23 has its CatchHandler @ 005bc7e4 */
                  FUN_005bf53c(&local_138,"endpoints {");
                  lVar25 = *(long *)(piVar76 + 2);
                  if (lVar25 != 0) {
                    /* try { // try from 005bab2c to 005bab53 has its CatchHandler @ 005bc814 */
                    FUN_005bf268(&local_138,"  locality {");
                    FUN_005bfb90(2,lVar25,&local_138);
                    FUN_005bf9d0(&local_138);
                  }
                  puVar41 = *(ulong **)(piVar76 + 8);
                  if ((puVar41 != (ulong *)0x0) && (uVar49 = puVar41[1], uVar49 != 0)) {
                    uVar52 = *puVar41;
                    uVar57 = 0;
                    do {
                      uVar85 = 0xaaaaaaaaaaaaaaa;
                      pppppbVar47 = (byte *****)CONCAT26(uStack_12a,local_130);
                      piVar81 = *(int **)((uVar52 & 0xfffffffffffffff8) + uVar57 * 8);
                      if (pppppbVar47 < local_128) {
                        pppppbVar47[1] = (byte ****)0x0;
                        pppppbVar47[2] = (byte ****)0x0;
                        *pppppbVar47 = (byte ****)0x20;
                        uVar86 = s_lb_endpoints___039b2c4a._8_8_;
                        uVar37 = s_lb_endpoints___039b2c4a._0_8_;
                        *(undefined1 *)((long)pppppbVar47 + 0x11) = 0;
                        *(undefined8 *)((long)pppppbVar47 + 9) = uVar86;
                        *(undefined8 *)((long)pppppbVar47 + 1) = uVar37;
                        lVar25 = CONCAT26(uStack_12a,local_130) + 0x18;
                        local_130 = (undefined6)lVar25;
                        uStack_12a = (undefined2)((ulong)lVar25 >> 0x30);
                        iVar22 = *piVar81;
                      }
                      else {
                        lVar25 = CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                        lVar54 = (long)pppppbVar47 - lVar25 >> 3;
                        uVar82 = lVar54 * -0x5555555555555555 + 1;
                        if (0xaaaaaaaaaaaaaaa < uVar82) {
                    /* try { // try from 005bc200 to 005bc207 has its CatchHandler @ 005bc3f4 */
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        lVar25 = (long)local_128 - lVar25 >> 3;
                        if ((ulong)(lVar25 * -0x5555555555555555) < 0x555555555555555) {
                          uVar56 = lVar25 * 0x5555555555555556;
                          uVar85 = uVar82;
                          if (uVar82 <= uVar56) {
                            uVar85 = uVar56;
                          }
                          if (uVar85 != 0) goto LAB_005bac0c;
                          lVar25 = 0;
                        }
                        else {
LAB_005bac0c:
                          lVar25 = FUN_002e2e80(PTR_FUN_04373078,uVar85 * 0x18);
                        }
                        puVar58 = (undefined8 *)(lVar25 + lVar54 * 8);
                        puVar58[1] = 0;
                        puVar58[2] = 0;
                        *puVar58 = 0x20;
                        uVar37 = s_lb_endpoints___039b2c4a._0_8_;
                        *(undefined8 *)((long)puVar58 + 9) = s_lb_endpoints___039b2c4a._8_8_;
                        *(undefined8 *)((long)puVar58 + 1) = uVar37;
                        *(undefined1 *)((long)puVar58 + 0x11) = 0;
                        local_128 = (byte *****)(lVar25 + uVar85 * 0x18);
                        pbVar60 = (byte *)CONCAT26(uStack_12a,local_130);
                        pbVar40 = (byte *)CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                        puVar45 = puVar58 + 3;
                        if (pbVar60 == pbVar40) {
                          pbVar60 = pbVar40;
                        }
                        else {
                          do {
                            uVar86 = *(undefined8 *)(pbVar60 + -0x10);
                            uVar37 = *(undefined8 *)(pbVar60 + -0x18);
                            puVar58[-1] = *(undefined8 *)(pbVar60 + -8);
                            puVar58[-2] = uVar86;
                            puVar58[-3] = uVar37;
                            pbVar60[-0x18] = 0;
                            pbVar60[-0x17] = 0;
                            pbVar60[-0x16] = 0;
                            pbVar60[-0x15] = 0;
                            pbVar60[-0x14] = 0;
                            pbVar60[-0x13] = 0;
                            pbVar60[-0x12] = 0;
                            pbVar60[-0x11] = 0;
                            pbVar60[-0x10] = 0;
                            pbVar60[-0xf] = 0;
                            pbVar60[-0xe] = 0;
                            pbVar60[-0xd] = 0;
                            pbVar60[-0xc] = 0;
                            pbVar60[-0xb] = 0;
                            pbVar60[-10] = 0;
                            pbVar60[-9] = 0;
                            pbVar60[-8] = 0;
                            pbVar60[-7] = 0;
                            pbVar60[-6] = 0;
                            pbVar60[-5] = 0;
                            pbVar60[-4] = 0;
                            pbVar60[-3] = 0;
                            pbVar60[-2] = 0;
                            pbVar60[-1] = 0;
                            pbVar60 = pbVar60 + -0x18;
                            puVar58 = puVar58 + -3;
                          } while (pbVar40 != pbVar60);
                          pbVar40 = (byte *)CONCAT26(uStack_12a,local_130);
                          pbVar60 = (byte *)CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                        }
                        local_138 = (byte)puVar58;
                        uStack_137 = (undefined5)((ulong)puVar58 >> 8);
                        uStack_132 = (undefined2)((ulong)puVar58 >> 0x30);
                        local_130 = SUB86(puVar45,0);
                        uStack_12a = (undefined2)((ulong)puVar45 >> 0x30);
                        if (pbVar40 != pbVar60) {
                          bVar6 = pbVar40[-0x18];
                          pbVar20 = pbVar40 + -0x18;
                          while( true ) {
                            pbVar10 = pbVar20;
                            if ((bVar6 & 1) != 0) {
                              FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar40 + -8));
                            }
                            if (pbVar60 == pbVar10) break;
                            bVar6 = pbVar10[-0x18];
                            pbVar20 = pbVar10 + -0x18;
                            pbVar40 = pbVar10;
                          }
                        }
                        if (pbVar60 != (byte *)0x0) {
                          FUN_002e2ea0(PTR_LAB_04373088,pbVar60);
                        }
                        iVar22 = *piVar81;
                      }
                      if (iVar22 != 0) {
                        ppppppbStack_238 = (byte ******)0x13;
                        local_240 = (byte ******)0x395f1b4;
                    /* try { // try from 005bad20 to 005bad4b has its CatchHandler @ 005bc930 */
                        lVar25 = FUN_002ed4a0(iVar22,local_108);
                        pppppppbVar36 = (byte *******)(lVar25 - (long)local_108);
                        if ((long)pppppppbVar36 < 0) {
                          local_118 = (byte *******)local_108;
                    /* try { // try from 005bc208 to 005bc227 has its CatchHandler @ 005bc3e4 */
                    /* WARNING: Subroutine does not return */
                          __assert_fail("false && \"len <= kMaxSize\"",
                                        "external/com_google_absl\\absl/strings/string_view.h",0x20a
                                        ,"operator()");
                        }
                        local_118 = (byte *******)local_108;
                        pppppppbStack_110 = pppppppbVar36;
                        FUN_002eced0(&local_150,&local_240,&local_118);
                    /* try { // try from 005bad4c to 005bad57 has its CatchHandler @ 005bc8d8 */
                        FUN_005bef00(&local_138,&local_150);
                        if ((local_150 & 1) != 0) {
                          FUN_002e2ea0(PTR_LAB_04373088,local_140);
                        }
                      }
                      if ((piVar81[10] == 1) && (lVar25 = *(long *)(piVar81 + 6), lVar25 != 0)) {
                    /* try { // try from 005bad84 to 005bad93 has its CatchHandler @ 005bc940 */
                        FUN_005bec2c(&local_138,"    endpoint {");
                        plVar71 = *(long **)(lVar25 + 0x10);
                        if (plVar71 != (long *)0x0) {
                    /* try { // try from 005bad9c to 005badab has its CatchHandler @ 005bc8c4 */
                          FUN_005c503c(&local_138,"      address {");
                          if (((int)plVar71[1] == 1) && (lVar25 = *plVar71, lVar25 != 0)) {
                    /* try { // try from 005badc0 to 005badcf has its CatchHandler @ 005bc8b4 */
                            FUN_005c5310(&local_138,"        socket_address {");
                            ppppppbStack_238 = *(byte *******)(lVar25 + 0x18);
                            local_240 = *(byte *******)(lVar25 + 0x10);
                    /* try { // try from 005baddc to 005badf3 has its CatchHandler @ 005bc794 */
                            FUN_005be370("          address",&local_240,&local_138,0);
                            if (*(int *)(lVar25 + 0x40) == 3) {
                              ppppppbStack_238 = (byte ******)&DAT_00000016;
                              local_240 = (byte ******)0x3911b21;
                    /* try { // try from 005bae18 to 005bae43 has its CatchHandler @ 005bc784 */
                              lVar25 = FUN_002ed4a0(*(undefined4 *)(lVar25 + 0x30),local_108);
                              pppppppbVar36 = (byte *******)(lVar25 - (long)local_108);
                              if ((long)pppppppbVar36 < 0) {
                                local_118 = (byte *******)local_108;
                    /* try { // try from 005bc228 to 005bc247 has its CatchHandler @ 005bc3d4 */
                    /* WARNING: Subroutine does not return */
                                __assert_fail("false && \"len <= kMaxSize\"",
                                              "external/com_google_absl\\absl/strings/string_view.h"
                                              ,0x20a,"operator()");
                              }
                              local_118 = (byte *******)local_108;
                              pppppppbStack_110 = pppppppbVar36;
                              FUN_002eced0(&local_150,&local_240,&local_118);
                    /* try { // try from 005bae44 to 005bae4f has its CatchHandler @ 005bc648 */
                              FUN_005bef00(&local_138,&local_150);
                              if ((local_150 & 1) != 0) {
                                FUN_002e2ea0(PTR_LAB_04373088,local_140);
                              }
                            }
                            else {
                              pppppbVar47 = (byte *****)CONCAT26(uStack_12a,local_130);
                              if (pppppbVar47 < local_128) {
                                *pppppbVar47 = (byte ****)0x0;
                                pppppbVar47[1] = (byte ****)0x0;
                                pppppbVar47[2] = (byte ****)0x0;
                                ppppbVar35 = (byte ****)FUN_002e2e80(PTR_FUN_04373078,0x20);
                                pppppbVar47[2] = ppppbVar35;
                                pppppbVar47[1] = ppppbVar13;
                                *pppppbVar47 = ppppbVar12;
                                uVar14 = s_<non_numeric_port>_0388d093._18_8_;
                                uVar86 = s_<non_numeric_port>_0388d093._0_8_;
                                pppbVar8 = (byte ***)
                                           CONCAT62(s_<non_numeric_port>_0388d093._10_6_,
                                                    s_<non_numeric_port>_0388d093._8_2_);
                                uVar37 = CONCAT26(s_<non_numeric_port>_0388d093._16_2_,
                                                  s_<non_numeric_port>_0388d093._10_6_);
                                *(char *)((long)ppppbVar35 + 0x1a) = '\0';
                                *(undefined8 *)((long)ppppbVar35 + 0x12) = uVar14;
                                *(undefined8 *)((long)ppppbVar35 + 10) = uVar37;
                                ppppbVar35[1] = pppbVar8;
                                *ppppbVar35 = (byte ***)uVar86;
                                lVar25 = CONCAT26(uStack_12a,local_130) + 0x18;
                                local_130 = (undefined6)lVar25;
                                uStack_12a = (undefined2)((ulong)lVar25 >> 0x30);
                              }
                              else {
                                lVar25 = CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                                lVar54 = (long)pppppbVar47 - lVar25 >> 3;
                                uVar85 = lVar54 * -0x5555555555555555 + 1;
                                if (0xaaaaaaaaaaaaaaa < uVar85) {
                    /* try { // try from 005bc248 to 005bc24f has its CatchHandler @ 005bc3c4 */
                    /* WARNING: Subroutine does not return */
                                  std::__vector_base_common<true>::__throw_length_error();
                                }
                                lVar25 = (long)local_128 - lVar25 >> 3;
                                uVar82 = 0xaaaaaaaaaaaaaaa;
                                if ((ulong)(lVar25 * -0x5555555555555555) < 0x555555555555555) {
                                  uVar56 = lVar25 * 0x5555555555555556;
                                  uVar82 = uVar85;
                                  if (uVar85 <= uVar56) {
                                    uVar82 = uVar56;
                                  }
                                  if (uVar82 != 0) goto LAB_005baf50;
                                  lVar25 = 0;
                                }
                                else {
LAB_005baf50:
                                  lVar25 = FUN_002e2e80(PTR_FUN_04373078,uVar82 * 0x18);
                                }
                                puVar58 = (undefined8 *)(lVar25 + lVar54 * 8);
                                pppppbVar47 = (byte *****)(lVar25 + uVar82 * 0x18);
                                *puVar58 = 0;
                                puVar58[1] = 0;
                                puVar58[2] = 0;
                                pcVar83 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
                                puVar58[2] = pcVar83;
                                puVar45 = puVar58 + 3;
                                puVar58[1] = ppppbVar13;
                                *puVar58 = ppppbVar12;
                                uVar15 = s_<non_numeric_port>_0388d093._18_8_;
                                uVar14 = s_<non_numeric_port>_0388d093._0_8_;
                                uVar37 = CONCAT62(s_<non_numeric_port>_0388d093._10_6_,
                                                  s_<non_numeric_port>_0388d093._8_2_);
                                uVar86 = CONCAT26(s_<non_numeric_port>_0388d093._16_2_,
                                                  s_<non_numeric_port>_0388d093._10_6_);
                                pcVar83[0x1a] = '\0';
                                *(undefined8 *)(pcVar83 + 0x12) = uVar15;
                                *(undefined8 *)(pcVar83 + 10) = uVar86;
                                *(undefined8 *)(pcVar83 + 8) = uVar37;
                                *(undefined8 *)pcVar83 = uVar14;
                                pbVar60 = (byte *)CONCAT26(uStack_12a,local_130);
                                pbVar40 = (byte *)CONCAT26(uStack_132,CONCAT51(uStack_137,local_138)
                                                          );
                                if (pbVar60 == pbVar40) {
                                  pbVar60 = pbVar40;
                                }
                                else {
                                  do {
                                    uVar86 = *(undefined8 *)(pbVar60 + -0x10);
                                    uVar37 = *(undefined8 *)(pbVar60 + -0x18);
                                    puVar58[-1] = *(undefined8 *)(pbVar60 + -8);
                                    puVar58[-2] = uVar86;
                                    puVar58[-3] = uVar37;
                                    pbVar60[-0x18] = 0;
                                    pbVar60[-0x17] = 0;
                                    pbVar60[-0x16] = 0;
                                    pbVar60[-0x15] = 0;
                                    pbVar60[-0x14] = 0;
                                    pbVar60[-0x13] = 0;
                                    pbVar60[-0x12] = 0;
                                    pbVar60[-0x11] = 0;
                                    pbVar60[-0x10] = 0;
                                    pbVar60[-0xf] = 0;
                                    pbVar60[-0xe] = 0;
                                    pbVar60[-0xd] = 0;
                                    pbVar60[-0xc] = 0;
                                    pbVar60[-0xb] = 0;
                                    pbVar60[-10] = 0;
                                    pbVar60[-9] = 0;
                                    pbVar60[-8] = 0;
                                    pbVar60[-7] = 0;
                                    pbVar60[-6] = 0;
                                    pbVar60[-5] = 0;
                                    pbVar60[-4] = 0;
                                    pbVar60[-3] = 0;
                                    pbVar60[-2] = 0;
                                    pbVar60[-1] = 0;
                                    pbVar60 = pbVar60 + -0x18;
                                    puVar58 = puVar58 + -3;
                                  } while (pbVar40 != pbVar60);
                                  pbVar40 = (byte *)CONCAT26(uStack_12a,local_130);
                                  pbVar60 = (byte *)CONCAT26(uStack_132,
                                                             CONCAT51(uStack_137,local_138));
                                }
                                local_138 = (byte)puVar58;
                                uStack_137 = (undefined5)((ulong)puVar58 >> 8);
                                uStack_132 = (undefined2)((ulong)puVar58 >> 0x30);
                                local_130 = SUB86(puVar45,0);
                                uStack_12a = (undefined2)((ulong)puVar45 >> 0x30);
                                local_128 = pppppbVar47;
                                if (pbVar40 != pbVar60) {
                                  bVar6 = pbVar40[-0x18];
                                  pbVar20 = pbVar40 + -0x18;
                                  while( true ) {
                                    pbVar10 = pbVar20;
                                    if ((bVar6 & 1) != 0) {
                                      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar40 + -8));
                                    }
                                    if (pbVar60 == pbVar10) break;
                                    bVar6 = pbVar10[-0x18];
                                    pbVar20 = pbVar10 + -0x18;
                                    pbVar40 = pbVar10;
                                  }
                                }
                                if (pbVar60 != (byte *)0x0) {
                                  FUN_002e2ea0(PTR_LAB_04373088,pbVar60);
                                }
                              }
                            }
                            FUN_005c3aa0(&local_138);
                          }
                          else {
                    /* try { // try from 005bae74 to 005bb077 has its CatchHandler @ 005bc8b4 */
                            FUN_005c4b68(&local_138,"        <non-socket address>");
                          }
                          FUN_005c3c60(&local_138);
                        }
                    /* try { // try from 005bb078 to 005bb07f has its CatchHandler @ 005bc8c4 */
                        FUN_005bf810(&local_138);
                      }
                    /* try { // try from 005bb080 to 005bb087 has its CatchHandler @ 005bc940 */
                      FUN_005bf9d0(&local_138);
                      uVar57 = uVar57 + 1;
                    } while (uVar57 != uVar49);
                  }
                    /* try { // try from 005bb0a4 to 005bb0b3 has its CatchHandler @ 005bc7d4 */
                  FUN_005c39a0("  load_balancing_weight",*(undefined8 *)(piVar76 + 4),&local_138);
                  if (*piVar76 != 0) {
                    ppppppbStack_238 = (byte ******)0xc;
                    local_240 = (byte ******)0x3938a45;
                    /* try { // try from 005bb0d0 to 005bb0fb has its CatchHandler @ 005bc804 */
                    lVar25 = FUN_002ed4a0(*piVar76,local_108);
                    pppppppbVar36 = (byte *******)(lVar25 - (long)local_108);
                    if ((long)pppppppbVar36 < 0) {
                      local_118 = (byte *******)local_108;
                    /* try { // try from 005bc250 to 005bc26f has its CatchHandler @ 005bc3b4 */
                    /* WARNING: Subroutine does not return */
                      __assert_fail("false && \"len <= kMaxSize\"",
                                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                    "operator()");
                    }
                    local_118 = (byte *******)local_108;
                    pppppppbStack_110 = pppppppbVar36;
                    FUN_002eced0(&local_150,&local_240,&local_118);
                    /* try { // try from 005bb0fc to 005bb107 has its CatchHandler @ 005bc774 */
                    FUN_005bef00(&local_138,&local_150);
                    if ((local_150 & 1) != 0) {
                      FUN_002e2ea0(PTR_LAB_04373088,local_140);
                    }
                  }
                    /* try { // try from 005bb128 to 005bb12f has its CatchHandler @ 005bc7c4 */
                  FUN_005bf0c0(&local_138);
                  uVar78 = uVar78 + 1;
                } while (uVar78 != uVar30);
              }
              lVar25 = puVar70[2];
              if (lVar25 != 0) {
                pppppbVar47 = (byte *****)CONCAT26(uStack_12a,local_130);
                if (pppppbVar47 < local_128) {
                  *pppppbVar47 = (byte ****)0x0;
                  pppppbVar47[1] = (byte ****)0x0;
                  *(undefined1 *)pppppbVar47 = 0x10;
                  pppppbVar47[2] = (byte ****)0x0;
                  *(undefined8 *)((long)pppppbVar47 + 1) = 0x7b207963696c6f70;
                  *(undefined1 *)((long)pppppbVar47 + 9) = 0;
                  lVar54 = CONCAT26(uStack_12a,local_130) + 0x18;
                  local_130 = (undefined6)lVar54;
                  uStack_12a = (undefined2)((ulong)lVar54 >> 0x30);
                  puVar41 = *(ulong **)(lVar25 + 0x18);
                }
                else {
                  lVar54 = CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                  lVar53 = (long)pppppbVar47 - lVar54 >> 3;
                  uVar30 = lVar53 * -0x5555555555555555 + 1;
                  if (0xaaaaaaaaaaaaaaa < uVar30) {
                    /* try { // try from 005bc270 to 005bc277 has its CatchHandler @ 005bc3a4 */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar54 = (long)local_128 - lVar54 >> 3;
                  uVar78 = 0xaaaaaaaaaaaaaaa;
                  if ((ulong)(lVar54 * -0x5555555555555555) < 0x555555555555555) {
                    uVar44 = lVar54 * 0x5555555555555556;
                    uVar78 = uVar30;
                    if (uVar30 <= uVar44) {
                      uVar78 = uVar44;
                    }
                    if (uVar78 != 0) goto LAB_005bb200;
                    lVar54 = 0;
                  }
                  else {
LAB_005bb200:
                    lVar54 = FUN_002e2e80(PTR_FUN_04373078,uVar78 * 0x18);
                  }
                  puVar58 = (undefined8 *)(lVar54 + lVar53 * 8);
                  *puVar58 = 0;
                  puVar58[1] = 0;
                  *(undefined1 *)puVar58 = 0x10;
                  puVar58[2] = 0;
                  *(undefined1 *)((long)puVar58 + 9) = 0;
                  *(undefined8 *)((long)puVar58 + 1) = 0x7b207963696c6f70;
                  local_128 = (byte *****)(lVar54 + uVar78 * 0x18);
                  pbVar40 = (byte *)CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                  pbVar60 = (byte *)CONCAT26(uStack_12a,local_130);
                  puVar45 = puVar58 + 3;
                  if (pbVar60 == pbVar40) {
                    pbVar60 = pbVar40;
                  }
                  else {
                    do {
                      uVar86 = *(undefined8 *)(pbVar60 + -0x10);
                      uVar37 = *(undefined8 *)(pbVar60 + -0x18);
                      puVar58[-1] = *(undefined8 *)(pbVar60 + -8);
                      puVar58[-2] = uVar86;
                      puVar58[-3] = uVar37;
                      pbVar60[-0x18] = 0;
                      pbVar60[-0x17] = 0;
                      pbVar60[-0x16] = 0;
                      pbVar60[-0x15] = 0;
                      pbVar60[-0x14] = 0;
                      pbVar60[-0x13] = 0;
                      pbVar60[-0x12] = 0;
                      pbVar60[-0x11] = 0;
                      pbVar60[-0x10] = 0;
                      pbVar60[-0xf] = 0;
                      pbVar60[-0xe] = 0;
                      pbVar60[-0xd] = 0;
                      pbVar60[-0xc] = 0;
                      pbVar60[-0xb] = 0;
                      pbVar60[-10] = 0;
                      pbVar60[-9] = 0;
                      pbVar60[-8] = 0;
                      pbVar60[-7] = 0;
                      pbVar60[-6] = 0;
                      pbVar60[-5] = 0;
                      pbVar60[-4] = 0;
                      pbVar60[-3] = 0;
                      pbVar60[-2] = 0;
                      pbVar60[-1] = 0;
                      pbVar60 = pbVar60 + -0x18;
                      puVar58 = puVar58 + -3;
                    } while (pbVar40 != pbVar60);
                    pbVar40 = (byte *)CONCAT26(uStack_12a,local_130);
                    pbVar60 = (byte *)CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                  }
                  local_138 = (byte)puVar58;
                  uStack_137 = (undefined5)((ulong)puVar58 >> 8);
                  uStack_132 = (undefined2)((ulong)puVar58 >> 0x30);
                  local_130 = SUB86(puVar45,0);
                  uStack_12a = (undefined2)((ulong)puVar45 >> 0x30);
                  if (pbVar40 != pbVar60) {
                    bVar6 = pbVar40[-0x18];
                    pbVar20 = pbVar40 + -0x18;
                    while( true ) {
                      pbVar10 = pbVar20;
                      if ((bVar6 & 1) != 0) {
                        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar40 + -8));
                      }
                      if (pbVar60 == pbVar10) break;
                      bVar6 = pbVar10[-0x18];
                      pbVar20 = pbVar10 + -0x18;
                      pbVar40 = pbVar10;
                    }
                  }
                  if (pbVar60 != (byte *)0x0) {
                    FUN_002e2ea0(PTR_LAB_04373088,pbVar60);
                  }
                  puVar41 = *(ulong **)(lVar25 + 0x18);
                }
                if ((puVar41 != (ulong *)0x0) && (uVar30 = puVar41[1], uVar30 != 0)) {
                  uVar44 = *puVar41;
                  uVar78 = 0;
                  do {
                    puVar45 = *(undefined8 **)((uVar44 & 0xfffffffffffffff8) + uVar78 * 8);
                    /* try { // try from 005bb318 to 005bb327 has its CatchHandler @ 005bc764 */
                    FUN_005c36c8(&local_138,"  drop_overloads {");
                    ppppppbStack_238 = (byte ******)puVar45[1];
                    local_240 = (byte ******)*puVar45;
                    /* try { // try from 005bb334 to 005bb34b has its CatchHandler @ 005bc754 */
                    FUN_005be370("    category",&local_240,&local_138,0);
                    puVar84 = (undefined4 *)puVar45[2];
                    if (puVar84 != (undefined4 *)0x0) {
                      pppppbVar47 = (byte *****)CONCAT26(uStack_12a,local_130);
                      if (pppppbVar47 < local_128) {
                        pppppbVar47[1] = (byte ****)0x0;
                        pppppbVar47[2] = (byte ****)0x0;
                        *pppppbVar47 = (byte ****)0x2a;
                        uVar86 = s_drop_percentage___038dcce8._0_8_;
                        uVar37 = CONCAT35(s_drop_percentage___038dcce8._13_3_,
                                          s_drop_percentage___038dcce8._8_5_);
                        *(ulong *)((long)pppppbVar47 + 0xe) =
                             CONCAT53(s_drop_percentage___038dcce8._16_5_,
                                      s_drop_percentage___038dcce8._13_3_);
                        *(undefined8 *)((long)pppppbVar47 + 9) = uVar37;
                        *(undefined8 *)((long)pppppbVar47 + 1) = uVar86;
                        *(undefined1 *)((long)pppppbVar47 + 0x16) = 0;
                        lVar25 = CONCAT26(uStack_12a,local_130) + 0x18;
                        local_130 = (undefined6)lVar25;
                        uStack_12a = (undefined2)((ulong)lVar25 >> 0x30);
                      }
                      else {
                        lVar25 = CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                        lVar54 = (long)pppppbVar47 - lVar25 >> 3;
                        uVar49 = lVar54 * -0x5555555555555555 + 1;
                        if (0xaaaaaaaaaaaaaaa < uVar49) {
                    /* try { // try from 005bc278 to 005bc27f has its CatchHandler @ 005bc394 */
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        lVar25 = (long)local_128 - lVar25 >> 3;
                        uVar57 = 0xaaaaaaaaaaaaaaa;
                        if ((ulong)(lVar25 * -0x5555555555555555) < 0x555555555555555) {
                          uVar52 = lVar25 * 0x5555555555555556;
                          uVar57 = uVar49;
                          if (uVar49 <= uVar52) {
                            uVar57 = uVar52;
                          }
                          if (uVar57 != 0) goto LAB_005bb404;
                          lVar25 = 0;
                        }
                        else {
LAB_005bb404:
                          lVar25 = FUN_002e2e80(PTR_FUN_04373078,uVar57 * 0x18);
                        }
                        puVar58 = (undefined8 *)(lVar25 + lVar54 * 8);
                        puVar58[1] = 0;
                        puVar58[2] = 0;
                        *puVar58 = 0x2a;
                        uVar86 = s_drop_percentage___038dcce8._0_8_;
                        uVar37 = CONCAT35(s_drop_percentage___038dcce8._13_3_,
                                          s_drop_percentage___038dcce8._8_5_);
                        *(ulong *)((long)puVar58 + 0xe) =
                             CONCAT53(s_drop_percentage___038dcce8._16_5_,
                                      s_drop_percentage___038dcce8._13_3_);
                        *(undefined1 *)((long)puVar58 + 0x16) = 0;
                        *(undefined8 *)((long)puVar58 + 9) = uVar37;
                        *(undefined8 *)((long)puVar58 + 1) = uVar86;
                        local_128 = (byte *****)(lVar25 + uVar57 * 0x18);
                        pbVar40 = (byte *)CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                        pbVar60 = (byte *)CONCAT26(uStack_12a,local_130);
                        puVar45 = puVar58 + 3;
                        if (pbVar60 == pbVar40) {
                          pbVar60 = pbVar40;
                        }
                        else {
                          do {
                            uVar86 = *(undefined8 *)(pbVar60 + -0x10);
                            uVar37 = *(undefined8 *)(pbVar60 + -0x18);
                            puVar58[-1] = *(undefined8 *)(pbVar60 + -8);
                            puVar58[-2] = uVar86;
                            puVar58[-3] = uVar37;
                            pbVar60[-0x18] = 0;
                            pbVar60[-0x17] = 0;
                            pbVar60[-0x16] = 0;
                            pbVar60[-0x15] = 0;
                            pbVar60[-0x14] = 0;
                            pbVar60[-0x13] = 0;
                            pbVar60[-0x12] = 0;
                            pbVar60[-0x11] = 0;
                            pbVar60[-0x10] = 0;
                            pbVar60[-0xf] = 0;
                            pbVar60[-0xe] = 0;
                            pbVar60[-0xd] = 0;
                            pbVar60[-0xc] = 0;
                            pbVar60[-0xb] = 0;
                            pbVar60[-10] = 0;
                            pbVar60[-9] = 0;
                            pbVar60[-8] = 0;
                            pbVar60[-7] = 0;
                            pbVar60[-6] = 0;
                            pbVar60[-5] = 0;
                            pbVar60[-4] = 0;
                            pbVar60[-3] = 0;
                            pbVar60[-2] = 0;
                            pbVar60[-1] = 0;
                            pbVar60 = pbVar60 + -0x18;
                            puVar58 = puVar58 + -3;
                          } while (pbVar40 != pbVar60);
                          pbVar40 = (byte *)CONCAT26(uStack_12a,local_130);
                          pbVar60 = (byte *)CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                        }
                        local_138 = (byte)puVar58;
                        uStack_137 = (undefined5)((ulong)puVar58 >> 8);
                        uStack_132 = (undefined2)((ulong)puVar58 >> 0x30);
                        local_130 = SUB86(puVar45,0);
                        uStack_12a = (undefined2)((ulong)puVar45 >> 0x30);
                        if (pbVar40 != pbVar60) {
                          bVar6 = pbVar40[-0x18];
                          pbVar20 = pbVar40 + -0x18;
                          while( true ) {
                            pbVar10 = pbVar20;
                            if ((bVar6 & 1) != 0) {
                              FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar40 + -8));
                            }
                            if (pbVar60 == pbVar10) break;
                            bVar6 = pbVar10[-0x18];
                            pbVar20 = pbVar10 + -0x18;
                            pbVar40 = pbVar10;
                          }
                        }
                        if (pbVar60 != (byte *)0x0) {
                          FUN_002e2ea0(PTR_LAB_04373088,pbVar60);
                        }
                      }
                      ppppppbStack_238 = (byte ******)0x11;
                      local_240 = (byte ******)0x397b8d2;
                    /* try { // try from 005bb514 to 005bb53f has its CatchHandler @ 005bc7b4 */
                      lVar25 = FUN_002ed4a0(puVar84[2],local_108);
                      lVar25 = lVar25 - (long)local_108;
                      if (lVar25 < 0) {
                        local_118 = (byte *******)local_108;
                    /* try { // try from 005bc280 to 005bc29f has its CatchHandler @ 005bc384 */
                    /* WARNING: Subroutine does not return */
                        __assert_fail("false && \"len <= kMaxSize\"",
                                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                      "operator()");
                      }
                      local_118 = (byte *******)local_108;
                      pppppppbStack_110 = (byte *******)lVar25;
                      FUN_002eced0(&local_150,&local_240,&local_118);
                    /* try { // try from 005bb540 to 005bb54b has its CatchHandler @ 005bc638 */
                      FUN_005bef00(&local_138,&local_150);
                      if ((local_150 & 1) != 0) {
                        FUN_002e2ea0(PTR_LAB_04373088,local_140);
                      }
                      ppppppbStack_238 = (byte ******)0x13;
                      local_240 = (byte ******)0x38e70d8;
                    /* try { // try from 005bb57c to 005bb5a7 has its CatchHandler @ 005bc7a4 */
                      lVar25 = FUN_002ed6a0(*puVar84,local_108);
                      pppppppbVar36 = (byte *******)(lVar25 - (long)local_108);
                      if ((long)pppppppbVar36 < 0) {
                        local_118 = (byte *******)local_108;
                    /* try { // try from 005bc2a0 to 005bc2bf has its CatchHandler @ 005bc374 */
                    /* WARNING: Subroutine does not return */
                        __assert_fail("false && \"len <= kMaxSize\"",
                                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                                      "operator()");
                      }
                      local_118 = (byte *******)local_108;
                      pppppppbStack_110 = pppppppbVar36;
                      FUN_002eced0(&local_150,&local_240,&local_118);
                    /* try { // try from 005bb5a8 to 005bb5b3 has its CatchHandler @ 005bc628 */
                      FUN_005bef00(&local_138,&local_150);
                      if ((local_150 & 1) != 0) {
                        FUN_002e2ea0(PTR_LAB_04373088,local_140);
                      }
                    /* try { // try from 005bb5cc to 005bb5db has its CatchHandler @ 005bc7f4 */
                      FUN_005bf810(&local_138);
                    }
                    FUN_005bf9d0(&local_138);
                    uVar78 = uVar78 + 1;
                  } while (uVar78 != uVar30);
                }
                    /* try { // try from 005bb5f4 to 005bb5fb has its CatchHandler @ 005bc4a8 */
                FUN_005bf0c0(&local_138);
              }
                    /* try { // try from 005bb604 to 005bb617 has its CatchHandler @ 005bc50c */
              FUN_002e5790(&local_240,CONCAT26(uStack_132,CONCAT51(uStack_137,local_138)),
                           CONCAT26(uStack_12a,local_130),&DAT_0396725e,1);
              pppppppbVar36 = pppppppbVar63;
              if (((ulong)local_240 & 1) != 0) {
                pppppppbVar36 = local_230;
              }
                    /* try { // try from 005bb62c to 005bb64b has its CatchHandler @ 005bc4f8 */
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                           ,0x3ac,0,"[xds_client %p] ClusterLoadAssignment: %s",uVar61,pppppppbVar36
                          );
              if (((ulong)local_240 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_230);
              }
              uVar18 = uStack_132;
              uVar9 = CONCAT51(uStack_137,local_138);
              pbVar40 = (byte *)CONCAT26(uStack_132,uVar9);
              if (pbVar40 != (byte *)0x0) {
                pbVar60 = (byte *)CONCAT26(uStack_12a,local_130);
                if (pbVar60 != pbVar40) {
                  bVar6 = pbVar60[-0x18];
                  pbVar20 = pbVar60 + -0x18;
                  while( true ) {
                    pbVar10 = pbVar20;
                    if ((bVar6 & 1) != 0) {
                      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar60 + -8));
                    }
                    if (pbVar40 == pbVar10) break;
                    bVar6 = pbVar10[-0x18];
                    pbVar20 = pbVar10 + -0x18;
                    pbVar60 = pbVar10;
                  }
                  pbVar40 = (byte *)CONCAT26(uStack_132,CONCAT51(uStack_137,local_138));
                }
                uStack_12a = uVar18;
                local_130 = uVar9;
                FUN_002e2ea0(PTR_LAB_04373088,pbVar40);
              }
              ppppppbVar68 = (byte ******)puVar70[1];
              puVar45 = (undefined8 *)PTR_PTR_04374a70;
            }
            if ((long)ppppppbVar68 < 0) {
                    /* try { // try from 005bc130 to 005bc14f has its CatchHandler @ 005bc488 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("false && \"len <= kMaxSize\"",
                            "external/com_google_absl\\absl/strings/string_view.h",0x20a,
                            "operator()");
            }
            plVar71 = (long *)*plVar2;
            if (plVar71 != (long *)0x0) {
              pvVar73 = (void *)*puVar70;
              ppppppbVar74 = (byte ******)plVar71[5];
              ppppppbVar34 = ppppppbVar74;
              if (ppppppbVar68 <= ppppppbVar74) {
                ppppppbVar34 = ppppppbVar68;
              }
              plVar67 = plVar2;
              if (ppppppbVar34 != (byte ******)0x0) goto LAB_005ba0ac;
              do {
                iVar22 = (uint)(ppppppbVar68 < ppppppbVar74) - (uint)(ppppppbVar74 < ppppppbVar68);
                while( true ) {
                  if (iVar22 >= 0) {
                    plVar67 = plVar71;
                  }
                  plVar71 = (long *)plVar71[iVar22 < 0];
                  if (plVar71 == (long *)0x0) {
                    if (plVar67 == plVar2) goto LAB_005ba76c;
                    ppppppbVar74 = (byte ******)plVar67[5];
                    ppppppbVar34 = ppppppbVar68;
                    if (ppppppbVar74 <= ppppppbVar68) {
                      ppppppbVar34 = ppppppbVar74;
                    }
                    if ((ppppppbVar34 == (byte ******)0x0) ||
                       (iVar22 = memcmp(pvVar73,(void *)plVar67[4],(size_t)ppppppbVar34),
                       iVar22 == 0)) {
                      if (ppppppbVar68 < ppppppbVar74) goto LAB_005ba76c;
                    }
                    else if (iVar22 < 0) goto LAB_005ba76c;
                    puVar41 = (ulong *)puVar70[3];
                    if ((puVar41 == (ulong *)0x0) || (uVar30 = puVar41[1], uVar30 == 0))
                    goto LAB_005ba794;
                    uVar44 = *puVar41;
                    uVar78 = 0;
                    pbVar40 = param_12;
                    goto LAB_005ba134;
                  }
                  ppppppbVar74 = (byte ******)plVar71[5];
                  ppppppbVar34 = ppppppbVar74;
                  if (ppppppbVar68 <= ppppppbVar74) {
                    ppppppbVar34 = ppppppbVar68;
                  }
                  if (ppppppbVar34 == (byte ******)0x0) break;
LAB_005ba0ac:
                  iVar23 = memcmp((void *)plVar71[4],pvVar73,(size_t)ppppppbVar34);
                  if (iVar23 == 0) break;
                  iVar22 = 1;
                  if (iVar23 < 0) {
                    iVar22 = -1;
                  }
                }
              } while( true );
            }
LAB_005ba76c:
            puVar75 = PTR_PTR_04375040;
            goto LAB_005ba778;
          }
                    /* try { // try from 005bb8a8 to 005bb8d3 has its CatchHandler @ 005bcafc */
          FUN_002f2c60(&local_240,"Resource is not EDS.");
          pbVar40 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x69a,&local_240,0,0);
          goto LAB_005bb938;
        }
      }
joined_r0x005bbf84:
      param_12 = (byte *)0x0;
      goto joined_r0x005bb948;
    }
    if (sVar29 != 0) {
      if (sVar29 == 0xffffffffffffffff) {
                    /* try { // try from 005bc0e0 to 005bc0e7 has its CatchHandler @ 005bc494 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar40 = (byte *)param_13[2];
      if ((bVar6 & 1) == 0) {
        pbVar40 = (byte *)((long)param_13 + 1);
      }
      iVar22 = memcmp(pbVar40,pcVar83,sVar29);
      if (iVar22 != 0) goto LAB_005b8fe0;
    }
    puVar41 = *(ulong **)(lVar25 + 0x40);
    if ((puVar41 != (ulong *)0x0) && (uVar26 = puVar41[1], uVar26 != 0)) {
      uVar59 = *puVar41;
      uVar61 = *param_1;
      lVar62 = param_1[1];
      puVar45 = *(undefined8 **)(uVar59 & 0xfffffffffffffff8);
      sVar27 = puVar45[1];
      sVar29 = strlen(pcVar83);
      puVar16 = PTR_PTR_04375030;
      if (sVar27 != sVar29) {
LAB_005b9348:
                    /* try { // try from 005b9348 to 005b9377 has its CatchHandler @ 005bcc30 */
        FUN_002f2c60(&local_240,"Resource is not RDS.");
        param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                        ,0x5b2,&local_240,0,0);
        goto joined_r0x005bb948;
      }
      uVar42 = 0;
      plVar2 = (long *)(param_4 + 8);
LAB_005b9220:
      iVar22 = memcmp((void *)*puVar45,pcVar83,sVar27);
      if (iVar22 != 0) goto LAB_005b9348;
      uVar37 = puVar45[2];
      uVar86 = puVar45[3];
                    /* try { // try from 005b9238 to 005b9263 has its CatchHandler @ 005bcc34 */
      lVar25 = FUN_0053ee00(puVar16,lVar24);
      if ((lVar25 == 0) ||
         (uVar30 = FUN_005403e0(uVar37,uVar86,lVar25,puVar16,lVar24), (uVar30 & 1) == 0)) {
        FUN_002f2c60(&local_240,"Can\'t decode route_config.");
        param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                        ,0x5bb,&local_240,0,0);
        goto joined_r0x005bb948;
      }
      uVar30 = *(ulong *)(lVar25 + 0x10);
      if ((long)uVar30 < 0) {
                    /* try { // try from 005bc0e8 to 005bc107 has its CatchHandler @ 005bcc30 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      plVar71 = (long *)*plVar2;
      if (plVar71 == (long *)0x0) {
LAB_005b9318:
        uVar42 = uVar42 + 1;
        if (uVar42 == uVar26) goto LAB_005b937c;
        puVar45 = (undefined8 *)((undefined8 *)(uVar59 & 0xfffffffffffffff8))[uVar42];
        pcVar83 = *(char **)puVar75;
        sVar27 = puVar45[1];
        sVar29 = strlen(pcVar83);
        if (sVar27 != sVar29) goto LAB_005b9348;
        goto LAB_005b9220;
      }
      pvVar73 = *(void **)(lVar25 + 8);
      uVar78 = plVar71[5];
      plVar67 = plVar2;
      sVar29 = uVar78;
      if (uVar30 <= uVar78) {
        sVar29 = uVar30;
      }
      while( true ) {
        if ((sVar29 == 0) || (iVar22 = memcmp((void *)plVar71[4],pvVar73,sVar29), iVar22 == 0)) {
          iVar23 = (uint)(uVar30 < uVar78) - (uint)(uVar78 < uVar30);
        }
        else {
          iVar23 = 1;
          if (iVar22 < 0) {
            iVar23 = -1;
          }
        }
        if (iVar23 >= 0) {
          plVar67 = plVar71;
        }
        plVar71 = (long *)plVar71[iVar23 < 0];
        if (plVar71 == (long *)0x0) break;
        uVar78 = plVar71[5];
        sVar29 = uVar78;
        if (uVar30 <= uVar78) {
          sVar29 = uVar30;
        }
      }
      if (plVar67 == plVar2) goto LAB_005b9318;
      uVar78 = plVar67[5];
      sVar29 = uVar30;
      if (uVar78 <= uVar30) {
        sVar29 = uVar78;
      }
      if ((sVar29 == 0) || (iVar22 = memcmp(pvVar73,(void *)plVar67[4],sVar29), iVar22 == 0)) {
        if (uVar78 <= uVar30) goto LAB_005bba1c;
        goto LAB_005b9318;
      }
      if (iVar22 < 0) goto LAB_005b9318;
LAB_005bba1c:
      local_240 = (byte ******)0x0;
      ppppppbStack_238 = (byte ******)0x0;
      local_230 = (byte *******)0x0;
                    /* try { // try from 005bba2c to 005bba3b has its CatchHandler @ 005bc860 */
      param_12 = (byte *)FUN_005c01f0(uVar61,*(undefined1 *)(lVar62 + 0x10),lVar25,param_3,
                                      &local_240);
      ppppppbVar68 = local_240;
      if (param_12 == (byte *)0x0) {
        if (*param_8 != '\0') {
          lVar62 = *(long *)(param_8 + 8);
          if (lVar62 != 0) {
            lVar25 = *(long *)(param_8 + 0x10);
            if (lVar25 == lVar62) {
              lVar25 = lVar62;
            }
            else {
              do {
                lVar25 = lVar25 + -0x78;
                FUN_005c32fc(lVar25);
              } while (lVar62 != lVar25);
              lVar25 = *(long *)(param_8 + 8);
            }
            *(long *)(param_8 + 0x10) = lVar62;
            FUN_002e2ea0(PTR_LAB_04373088,lVar25);
          }
          *param_8 = '\0';
        }
        param_12 = (byte *)0x0;
        *(byte *******)(param_8 + 0x10) = ppppppbStack_238;
        *(byte *******)(param_8 + 8) = local_240;
        *(byte ********)(param_8 + 0x18) = local_230;
        local_240 = (byte ******)0x0;
        ppppppbStack_238 = (byte ******)0x0;
        local_230 = (byte *******)0x0;
        *param_8 = '\x01';
        goto joined_r0x005bb948;
      }
      ppppppbVar34 = ppppppbStack_238;
      if (local_240 == (byte ******)0x0) goto joined_r0x005bb948;
      for (; ppppppbVar34 != ppppppbVar68; ppppppbVar34 = ppppppbVar34 + -0xf) {
        FUN_005c32fc(ppppppbVar34 + -0xf);
      }
      goto LAB_005bbc1c;
    }
  }
LAB_005b937c:
  param_12 = (byte *)0x0;
joined_r0x005bb948:
  if (lVar24 != 0) {
                    /* try { // try from 005b8d0c to 005b8d13 has its CatchHandler @ 005bccd0 */
    FUN_0053f5f0(lVar24);
  }
  return param_12;
code_r0x005b9174:
  pcVar83 = *(char **)puVar75;
  puVar70 = (undefined8 *)*puVar45;
  sVar27 = puVar70[1];
  sVar29 = strlen(pcVar83);
  if (sVar27 != sVar29) goto LAB_005b9194;
  goto LAB_005b90ec;
  while( true ) {
    uVar78 = uVar78 + 1;
    pbVar40 = param_12;
    if (uVar78 == uVar30) break;
LAB_005ba134:
    local_240 = (byte ******)0x0;
    ppppppbStack_238 = (byte ******)0x0;
    puVar84 = *(undefined4 **)((uVar44 & 0xfffffffffffffff8) + uVar78 * 8);
    pppppppbVar36 = (byte *******)&local_230;
    if (*(int **)(puVar84 + 4) == (int *)0x0) {
      local_1a0 = 0;
LAB_005ba64c:
      iVar22 = 7;
      param_12 = pbVar40;
LAB_005ba650:
      if (((ulong)ppppppbStack_238 & 1) == 0) goto LAB_005ba6b8;
LAB_005ba6b0:
      pppppppbVar36 = local_230;
      if (local_230 != (byte *******)0x0) goto LAB_005ba6b8;
      pppppppbVar36 = (byte *******)0x0;
LAB_005ba710:
      FUN_002e2ea0(PTR_LAB_04373088,pppppppbVar36);
    }
    else {
      local_1a0 = **(int **)(puVar84 + 4);
      if (local_1a0 == 0) goto LAB_005ba64c;
      puVar45 = *(undefined8 **)(puVar84 + 2);
      pvVar39 = (void *)*puVar45;
      pppppppbVar51 = (byte *******)puVar45[1];
      pvVar32 = (void *)puVar45[4];
      uVar49 = puVar45[5];
      local_108[0] = (byte *******)0x0;
      pppppppbStack_110 = (byte *******)0x0;
      local_118 = (byte *******)0x0;
      if ((byte *******)0xffffffffffffffef < pppppppbVar51) {
                    /* try { // try from 005bc158 to 005bc15f has its CatchHandler @ 005bc474 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      pppppbVar47 = pppppbVar55;
      if (&DAT_00000016 < pppppppbVar51) {
        pppppppbVar31 =
             (byte *******)
             FUN_002e2e80(PTR_FUN_04373078,(ulong)(pppppppbVar51 + 2) & 0xfffffffffffffff0);
        local_118 = (byte *******)((ulong)(pppppppbVar51 + 2) & 0xfffffffffffffff0 | 1);
        pppppppbStack_110 = pppppppbVar51;
        local_108[0] = pppppppbVar31;
LAB_005ba1d8:
        memcpy(pppppppbVar31,pvVar39,(size_t)pppppppbVar51);
        *(byte *)((long)pppppppbVar31 + (long)pppppppbVar51) = 0;
        local_128 = (byte *****)0x0;
        local_130 = 0;
        uStack_12a = 0;
        local_138 = 0;
        uStack_137 = 0;
        uStack_132 = 0;
        if (&DAT_00000016 < pppppppbVar51) {
          uVar57 = (ulong)(pppppppbVar51 + 2) & 0xfffffffffffffff0;
          pppppbVar47 = (byte *****)FUN_002e2e80(PTR_FUN_04373078,uVar57);
          local_138 = (byte)uVar57 | 1;
          uStack_137 = (undefined5)(uVar57 >> 8);
          uStack_132 = (undefined2)(uVar57 >> 0x30);
          local_130 = SUB86(pppppppbVar51,0);
          uStack_12a = (undefined2)((ulong)pppppppbVar51 >> 0x30);
          local_128 = pppppbVar47;
        }
        else {
          local_138 = (byte)((int)pppppppbVar51 << 1);
        }
        memcpy(pppppbVar47,pvVar39,(size_t)pppppppbVar51);
      }
      else {
        local_118 = (byte *******)(ulong)(byte)((int)pppppppbVar51 << 1);
        pppppppbVar31 = pppppppbVar69;
        if (pppppppbVar51 != (byte *******)0x0) goto LAB_005ba1d8;
        local_118 = (byte *******)0x0;
        local_128 = (byte *****)0x0;
        local_130 = 0;
        uStack_12a = 0;
        local_138 = 0;
        uStack_137 = 0;
        uStack_132 = 0;
      }
      *(byte *)((long)pppppbVar47 + (long)pppppppbVar51) = 0;
      local_140 = (byte *****)0x0;
      local_148 = 0;
      local_150 = 0;
      if (0xffffffffffffffef < uVar49) {
                    /* try { // try from 005bc160 to 005bc167 has its CatchHandler @ 005bc464 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar49 < 0x17) {
        local_150 = (ulong)(byte)((int)uVar49 << 1);
        pppppbVar47 = pppppbVar43;
        if (uVar49 != 0) goto LAB_005ba2ac;
      }
      else {
        uVar57 = uVar49 + 0x10 & 0xfffffffffffffff0;
        pppppbVar47 = (byte *****)FUN_002e2e80(PTR_FUN_04373078,uVar57);
        local_150 = uVar57 | 1;
        local_148 = uVar49;
        local_140 = pppppbVar47;
LAB_005ba2ac:
        memcpy(pppppbVar47,pvVar32,uVar49);
      }
      *(undefined1 *)((long)pppppbVar47 + uVar49) = 0;
      ppppppbVar74 = (byte ******)FUN_002e2e80(PTR_FUN_04373078,0x78);
      pppppppbVar51 = local_108[0];
      pppppbVar80 = local_128;
      bVar6 = local_138;
      pppppbVar47 = local_140;
      ppppppbVar34 = local_240;
      if (ppppppbVar74 != (byte ******)0x0) {
        pppppbVar64 = *(byte ******)((long)pppppbVar55 + 7);
        local_130 = 0;
        uStack_12a = 0;
        local_80 = SUB87(*pppppbVar55,0);
        uStack_79 = SUB81(pppppbVar64,0);
        ppppppbVar46 = *pppppppbVar69;
        uVar19 = local_118._0_1_;
        local_108[0] = (byte *******)0x0;
        pppppppbStack_110 = (byte *******)0x0;
        local_118 = (byte *******)0x0;
        local_138 = 0;
        uStack_137 = 0;
        uStack_132 = 0;
        uStack_68 = (undefined7)((ulong)*(undefined8 *)((long)pppppppbVar69 + 7) >> 8);
        local_128 = (byte *****)0x0;
        local_69 = (undefined1)((ulong)ppppppbVar46 >> 0x38);
        uVar17 = (undefined1)local_150;
        local_90 = SUB87(*pppppbVar43,0);
        pppppbVar65 = *(byte ******)((long)pppppbVar43 + 7);
        local_148 = 0;
        local_150 = 0;
        uStack_89 = SUB81(pppppbVar65,0);
        local_140 = (byte *****)0x0;
        *(undefined1 *)(ppppppbVar74 + 3) = uVar19;
        *ppppppbVar74 = pppppbVar3;
        ppppppbVar74[1] = (byte *****)0x0;
        ppppppbVar74[2] = (byte *****)0x1;
        ppppppbVar74[4] = (byte *****)CONCAT71(uStack_68,local_69);
        ppppppbVar74[5] = (byte *****)pppppppbVar51;
        *(byte *******)((long)ppppppbVar74 + 0x19) = ppppppbVar46;
        uStack_68 = 0;
        uStack_70 = 0;
        local_69 = 0;
        *(byte *)(ppppppbVar74 + 6) = bVar6;
        ppppppbVar74[7] = pppppbVar64;
        ppppppbVar74[8] = pppppbVar80;
        *(ulong *)((long)ppppppbVar74 + 0x31) = CONCAT17(uStack_79,local_80);
        uStack_78 = 0;
        local_80 = 0;
        uStack_79 = 0;
        *(undefined1 *)(ppppppbVar74 + 9) = uVar17;
        ppppppbVar74[10] = pppppbVar65;
        ppppppbVar74[0xb] = pppppbVar47;
        *(ulong *)((long)ppppppbVar74 + 0x49) = CONCAT17(uStack_89,local_90);
        uStack_88 = 0;
        local_90 = 0;
        uStack_89 = 0;
        ppppppbVar74[0xe] = (byte *****)0x0;
        ppppppbVar74[0xc] = (byte *****)0x0;
        ppppppbVar74[0xd] = (byte *****)0x0;
      }
      if (local_240 != (byte ******)0x0) {
        pppppbVar47 = local_240[1];
        ppppppbVar46 = local_240 + 2;
        do {
          pppppbVar80 = *ppppppbVar46;
          cVar7 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(ppppppbVar46,0x10);
          if (bVar21) {
            *ppppppbVar46 = (byte *****)((long)pppppbVar80 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        local_120 = ppppppbVar74;
        if ((pppppbVar47 != (byte *****)0x0) && (*(char *)(pppppbVar47 + 2) != '\0')) {
                    /* try { // try from 005ba3f4 to 005ba413 has its CatchHandler @ 005bca7c */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",pppppbVar47[1],local_240 + 1,pppppbVar80);
        }
        if ((long)pppppbVar80 < 1) {
                    /* try { // try from 005bc2c0 to 005bc2e7 has its CatchHandler @ 005bc41c */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (pppppbVar80 == (byte *****)0x1) {
          (*(code *)**ppppppbVar34)(ppppppbVar34);
          FUN_002e2ea0(PTR_LAB_04373088,ppppppbVar34);
        }
      }
      local_120 = (byte ******)0x0;
      local_240 = ppppppbVar74;
      FUN_0051f4ac(&local_120);
      if ((local_150 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_140);
        if ((local_138 & 1) == 0) goto LAB_005ba444;
LAB_005ba470:
        FUN_002e2ea0(PTR_LAB_04373088,local_128);
        if (((ulong)local_118 & 1) == 0) goto LAB_005ba44c;
LAB_005ba488:
        FUN_002e2ea0(PTR_LAB_04373088,local_108[0]);
        puVar41 = *(ulong **)(puVar84 + 8);
        if (puVar41 == (ulong *)0x0) goto LAB_005ba588;
LAB_005ba4a0:
        uVar49 = puVar41[1];
        if (uVar49 == 0) goto LAB_005ba588;
        puVar45 = (undefined8 *)(*puVar41 & 0xfffffffffffffff8);
        puVar48 = (uint *)*puVar45;
        if (*puVar48 < 2) goto LAB_005ba4dc;
        do {
          while( true ) {
            do {
              uVar49 = uVar49 - 1;
              puVar45 = puVar45 + 1;
              if (uVar49 == 0) goto LAB_005ba588;
              puVar48 = (uint *)*puVar45;
            } while (1 < *puVar48);
LAB_005ba4dc:
            lVar25 = **(long **)(*(long *)(puVar48 + 6) + 0x10);
            pvVar39 = *(void **)(lVar25 + 0x10);
            sVar29 = *(size_t *)(lVar25 + 0x18);
            if (*(int *)(lVar25 + 0x40) == 3) break;
            uVar79 = 0;
LAB_005ba53c:
            pvVar32 = (void *)FUN_002ebd50(sVar29 + 1);
            memcpy(pvVar32,pvVar39,sVar29);
            *(undefined1 *)((long)pvVar32 + sVar29) = 0;
                    /* try { // try from 005ba558 to 005ba583 has its CatchHandler @ 005bcc40 */
            FUN_003089e0(&local_118,pvVar32,uVar79);
            free(pvVar32);
            local_138 = 0;
            uStack_137 = 0;
            uStack_132 = 0;
            FUN_005c5728(&ppppppbStack_238,&local_118,&local_138);
          }
          uVar79 = *(uint *)(lVar25 + 0x30);
          if (uVar79 >> 0x10 == 0) goto LAB_005ba53c;
                    /* try { // try from 005ba504 to 005ba543 has its CatchHandler @ 005bcc40 */
          FUN_002f2c60(&local_118,"Invalid port.");
          param_12 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                          ,0x633,&local_118,0,0);
        } while (param_12 == (byte *)0x0);
        iVar22 = 1;
        goto LAB_005ba650;
      }
      if ((local_138 & 1) != 0) goto LAB_005ba470;
LAB_005ba444:
      if (((ulong)local_118 & 1) != 0) goto LAB_005ba488;
LAB_005ba44c:
      puVar41 = *(ulong **)(puVar84 + 8);
      if (puVar41 != (ulong *)0x0) goto LAB_005ba4a0;
LAB_005ba588:
      local_19c = *puVar84;
      if (local_1a0 == 0) goto LAB_005ba64c;
                    /* try { // try from 005ba598 to 005ba5a3 has its CatchHandler @ 005bcb60 */
      FUN_0051f300(&local_2e8,&local_240);
      uVar57 = (ulong)local_190 >> 1;
      uVar49 = (ulong)local_244;
      if (uVar57 <= uVar49) {
                    /* try { // try from 005ba5c4 to 005ba607 has its CatchHandler @ 005bcb70 */
        FUN_005c6100(&local_190,extraout_x1,local_244 + 1);
        uVar57 = (ulong)local_190 >> 1;
        uVar49 = (ulong)local_244;
      }
      if (uVar57 <= uVar49) {
                    /* try { // try from 005bc2e8 to 005bc307 has its CatchHandler @ 005bc364 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136
                      ,"operator[]");
      }
      pppppppbVar51 = (byte *******)&local_188;
      if (((ulong)local_190 & 1) != 0) {
        pppppppbVar51 = local_188;
      }
      FUN_005c6330(pppppppbVar51 + uVar49 * 3,&local_2e8,&local_2e8,&local_2e8);
      pppppppuVar38 = local_2d8;
      if (((local_2e0 & 1) == 0) ||
         (pppppppuVar38 = local_2d8[0], local_2d8[0] != (undefined8 *******)0x0)) {
        uVar49 = local_2e0 >> 1;
        pppppppuVar50 = pppppppuVar38 + uVar49 * 0x12 + -1;
        lVar25 = uVar49 + 1;
        while (lVar25 = lVar25 + -1, lVar25 != 0) {
          ppppppuVar33 = *pppppppuVar50;
          pppppppuVar50 = pppppppuVar50 + -0x12;
                    /* try { // try from 005ba640 to 005ba643 has its CatchHandler @ 005bcc3c */
          FUN_002e4a10(ppppppuVar33);
        }
        memset(pppppppuVar38,0xab,uVar49 * 0x90);
        if ((local_2e0 & 1) != 0) {
          pppppppuVar38 = local_2d8[0];
          goto LAB_005ba68c;
        }
      }
      else {
        pppppppuVar38 = (undefined8 *******)0x0;
LAB_005ba68c:
        FUN_002e2ea0(PTR_LAB_04373088,pppppppuVar38);
      }
      FUN_0051f4ac(&local_2e8);
      iVar22 = 0;
      param_12 = pbVar40;
      if (((ulong)ppppppbStack_238 & 1) != 0) goto LAB_005ba6b0;
LAB_005ba6b8:
      uVar49 = (ulong)ppppppbStack_238 >> 1;
      pppppppbVar51 = pppppppbVar36 + uVar49 * 0x12 + -1;
      lVar25 = uVar49 + 1;
      while (lVar25 = lVar25 + -1, lVar25 != 0) {
        ppppppbVar34 = *pppppppbVar51;
        pppppppbVar51 = pppppppbVar51 + -0x12;
                    /* try { // try from 005ba6dc to 005ba6df has its CatchHandler @ 005bccd8 */
        FUN_002e4a10(ppppppbVar34);
      }
      memset(pppppppbVar36,0xab,uVar49 * 0x90);
      if (((ulong)ppppppbStack_238 & 1) != 0) {
        pppppppbVar36 = local_230;
        goto LAB_005ba710;
      }
    }
    FUN_0051f4ac(&local_240);
    if ((iVar22 != 7) && (iVar22 != 0)) {
      FUN_005151b0(&local_190);
      goto joined_r0x005bb948;
    }
  }
LAB_005ba794:
  if ((byte *******)0x1 < local_190) {
    pppppppbVar36 = (byte *******)&local_188;
    if (((ulong)local_190 & 1) != 0) {
      pppppppbVar36 = local_188;
    }
    uVar30 = 0;
    uVar78 = 1;
    do {
      if ((pppppppbVar36 + uVar30 * 3 == (byte *******)0x0) ||
         (pppppppbVar36[uVar30 * 3 + 2] == (byte ******)0x0)) {
                    /* try { // try from 005bb908 to 005bb933 has its CatchHandler @ 005bca78 */
        FUN_002f2c60(&local_240,"EDS update includes sparse priority list");
        pbVar40 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                       ,0x6c4,&local_240,0,0);
        goto LAB_005bb938;
      }
      bVar21 = uVar78 < (ulong)local_190 >> 1;
      uVar30 = uVar78;
      uVar78 = (ulong)((int)uVar78 + 1);
    } while (bVar21);
  }
  local_240 = (byte ******)FUN_002e2e80(PTR_FUN_04373078,0x68);
  if (local_240 != (byte ******)0x0) {
    local_240[4] = (byte *****)0x0;
    local_240[3] = (byte *****)0x0;
    local_240[2] = (byte *****)0x0;
    local_240[1] = (byte *****)0x0;
    *local_240 = pppppbVar1;
    local_240[0xc] = (byte *****)0x0;
    local_240[0xb] = (byte *****)0x0;
    *(undefined1 *)(local_240 + 0xc) = 0;
    local_240[10] = (byte *****)0x0;
    local_240[9] = (byte *****)0x0;
    local_240[8] = (byte *****)0x0;
    local_240[7] = (byte *****)0x0;
    local_240[6] = (byte *****)0x0;
    local_240[5] = (byte *****)0x0;
    local_240[3] = pppppbVar11;
    local_240[2] = pppppbVar5;
  }
                    /* try { // try from 005ba82c to 005ba837 has its CatchHandler @ 005bc9c4 */
  FUN_005c4f58(&local_158,&local_240);
  ppppppbVar34 = local_240;
  if (local_240 == (byte ******)0x0) {
LAB_005ba89c:
    lVar25 = puVar70[2];
  }
  else {
    pppppbVar47 = local_240[1];
    ppppppbVar74 = local_240 + 2;
    do {
      pppppbVar80 = *ppppppbVar74;
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(ppppppbVar74,0x10);
      if (bVar21) {
        *ppppppbVar74 = (byte *****)((long)pppppbVar80 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((pppppbVar47 != (byte *****)0x0) && (*(char *)(pppppbVar47 + 2) != '\0')) {
                    /* try { // try from 005ba86c to 005ba88b has its CatchHandler @ 005bc8d4 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",pppppbVar47[1],local_240 + 1,pppppbVar80);
    }
    if ((long)pppppbVar80 < 1) {
                    /* try { // try from 005bc1c8 to 005bc1ef has its CatchHandler @ 005bc460 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (pppppbVar80 != (byte *****)0x1) goto LAB_005ba89c;
    (*(code *)**ppppppbVar34)(ppppppbVar34);
    FUN_002e2ea0(PTR_LAB_04373088,ppppppbVar34);
    lVar25 = puVar70[2];
  }
  if (((lVar25 != 0) && (puVar41 = *(ulong **)(lVar25 + 0x18), puVar41 != (ulong *)0x0)) &&
     (uVar30 = puVar41[1], uVar30 != 0)) {
    puVar70 = (undefined8 *)(*puVar41 & 0xfffffffffffffff8);
    puVar45 = (undefined8 *)*puVar70;
    ppppppbVar34 = (byte ******)puVar45[1];
    if (ppppppbVar34 != (byte ******)0x0) goto LAB_005ba8f0;
LAB_005ba920:
                    /* try { // try from 005ba920 to 005ba94b has its CatchHandler @ 005bcc0c */
    FUN_002f2c60(&local_240,"Empty drop category name");
    pbVar40 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                   ,0x66f,&local_240,0,0);
LAB_005ba8d0:
    if (pbVar40 == (byte *)0x0) {
      while (uVar30 = uVar30 - 1, uVar30 != 0) {
        while( true ) {
          puVar70 = puVar70 + 1;
          puVar45 = (undefined8 *)*puVar70;
          ppppppbVar34 = (byte ******)puVar45[1];
          if (ppppppbVar34 == (byte ******)0x0) goto LAB_005ba920;
LAB_005ba8f0:
          lVar25 = local_158;
          pvVar39 = (void *)*puVar45;
          uVar79 = ((int *)puVar45[2])[2];
          iVar22 = *(int *)puVar45[2];
          if (iVar22 != 2) {
            if (iVar22 == 1) {
              iVar22 = 100;
            }
            else {
              if (iVar22 != 0) {
                    /* try { // try from 005baa70 to 005baaa3 has its CatchHandler @ 005bcc0c */
                FUN_002f2c60(&local_240,"Unknown denominator type");
                pbVar40 = (byte *)FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                               ,0x684,&local_240,0,0);
                goto LAB_005ba8d0;
              }
              iVar22 = 10000;
            }
            uVar79 = uVar79 * iVar22;
          }
          local_108[0] = (byte *******)0x0;
          uVar4 = uVar79;
          if (999999 < uVar79) {
            uVar4 = 1000000;
          }
          pppppppbStack_110 = (byte *******)0x0;
          local_118 = (byte *******)0x0;
          if ((byte ******)0xffffffffffffffef < ppppppbVar34) {
                    /* try { // try from 005bc1f0 to 005bc1f7 has its CatchHandler @ 005bc408 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (&DAT_00000016 < ppppppbVar34) {
            pppppppbVar36 =
                 (byte *******)
                 FUN_002e2e80(PTR_FUN_04373078,(ulong)(ppppppbVar34 + 2) & 0xfffffffffffffff0);
            local_118 = (byte *******)((ulong)(ppppppbVar34 + 2) & 0xfffffffffffffff0 | 1);
            pppppppbStack_110 = (byte *******)ppppppbVar34;
            local_108[0] = pppppppbVar36;
          }
          else {
            local_118 = (byte *******)(ulong)(byte)((int)ppppppbVar34 << 1);
            pppppppbVar36 = pppppppbVar69;
          }
          memcpy(pppppppbVar36,pvVar39,(size_t)ppppppbVar34);
          local_230 = local_108[0];
          ppppppbStack_238 = (byte ******)pppppppbStack_110;
          *(byte *)((long)pppppppbVar36 + (long)ppppppbVar34) = 0;
          local_108[0] = (byte *******)0x0;
          pppppppbStack_110 = (byte *******)0x0;
          local_240 = (byte ******)local_118;
          local_118 = (byte *******)0x0;
                    /* try { // try from 005baa04 to 005baa0b has its CatchHandler @ 005bcb28 */
          local_228 = uVar4;
          FUN_005c5a8c(lVar25 + 0x18,&local_240);
          if (((ulong)local_240 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_230);
          }
          if (999999 < uVar79) {
            *(undefined1 *)(lVar25 + 0x60) = 1;
          }
          if (((ulong)local_118 & 1) == 0) break;
          FUN_002e2ea0(PTR_LAB_04373088,local_108[0]);
          uVar30 = uVar30 - 1;
          if (uVar30 == 0) goto LAB_005bb724;
        }
      }
      goto LAB_005bb724;
    }
LAB_005bb938:
    FUN_005151b0(&local_190);
    param_12 = pbVar40;
    goto joined_r0x005bb948;
  }
LAB_005bb724:
  puVar45 = (undefined8 *)PTR_PTR_04374a70;
  ppppppbStack_238 = (byte ******)0x0;
  local_230 = (byte *******)0x0;
  local_240 = (byte ******)0x0;
  if ((byte ******)0xffffffffffffffef < ppppppbVar68) {
                    /* try { // try from 005bc1f8 to 005bc1ff has its CatchHandler @ 005bc404 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (&DAT_00000016 < ppppppbVar68) {
    pppppppbVar36 =
         (byte *******)FUN_002e2e80(PTR_FUN_04373078,(ulong)(ppppppbVar68 + 2) & 0xfffffffffffffff0)
    ;
    local_240 = (byte ******)((ulong)(ppppppbVar68 + 2) & 0xfffffffffffffff0 | 1);
    ppppppbStack_238 = ppppppbVar68;
    local_230 = pppppppbVar36;
  }
  else {
    local_240 = (byte ******)(ulong)(byte)((int)ppppppbVar68 << 1);
    pppppppbVar36 = pppppppbVar63;
    if (ppppppbVar68 == (byte ******)0x0) goto LAB_005bb794;
  }
  memcpy(pppppppbVar36,pvVar73,(size_t)ppppppbVar68);
LAB_005bb794:
  *(byte *)((long)pppppppbVar36 + (long)ppppppbVar68) = 0;
                    /* try { // try from 005bb798 to 005bb7ab has its CatchHandler @ 005bc9b0 */
  FUN_005c5c14(param_10,&local_240,&local_240,&local_190);
  puVar75 = PTR_PTR_04375040;
  if (((ulong)local_240 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_230);
  }
LAB_005ba778:
  FUN_005151b0(&local_190);
  uVar59 = uVar59 + 1;
  if (uVar59 == uVar26) goto joined_r0x005bbf84;
  goto LAB_005b9fc8;
}


