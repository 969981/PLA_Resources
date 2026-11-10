/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00510d48; name: FUN_00510d48
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong **** FUN_00510d48(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong ****ppppuVar10;
  ulong ****ppppuVar11;
  ulong ***pppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined7 uVar21;
  byte *pbVar22;
  bool bVar23;
  void *__dest;
  __tree_node_base *p_Var24;
  long *plVar25;
  ulong ****ppppuVar26;
  __tree_node_base *__dest_00;
  undefined8 *puVar27;
  size_t sVar28;
  char *pcVar29;
  long lVar30;
  ulong *****pppppuVar31;
  ulong uVar32;
  ulong ****ppppuVar33;
  ulong ****ppppuVar34;
  ulong uVar35;
  byte *pbVar36;
  ulong uVar37;
  long lVar38;
  ulong ****ppppuVar39;
  ulong ***pppuVar40;
  void *pvVar41;
  int *piVar42;
  undefined *puVar43;
  undefined *puVar44;
  ulong ***pppuVar45;
  ulong uVar46;
  ulong ****ppppuVar47;
  ulong ***pppuVar48;
  ulong ***pppuVar49;
  ulong ***local_1c8;
  byte local_1c0 [16];
  undefined8 local_1b0;
  byte local_1a8 [16];
  undefined8 local_198;
  ulong ***local_190;
  ulong uStack_188;
  void *local_180;
  __tree_node_base *local_178;
  __tree_node_base *local_170;
  long local_168;
  byte *local_160;
  byte *local_158;
  undefined8 local_150;
  byte *local_148;
  byte *local_140;
  undefined8 uStack_138;
  ulong ***local_130;
  undefined *local_128;
  ulong ***local_120;
  undefined8 local_118;
  undefined8 local_110;
  byte local_108 [16];
  undefined8 local_f8;
  ulong ****local_f0;
  ulong ****ppppuStack_e8;
  ulong ****local_e0;
  ulong ****local_d8;
  ulong ****local_d0;
  ulong ****local_c8;
  byte local_c0;
  undefined7 uStack_bf;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ulong ****local_a0;
  ulong ****ppppuStack_98;
  ulong ****local_90;
  undefined *local_88;
  ulong ****local_80;
  ulong ***pppuStack_78;
  byte *local_70;
  undefined *local_68;
  
  FUN_0051d770();
  puVar20 = PTR_LAB_04373088;
  pppuVar12 = _UNK_03888dc8;
  ppppuVar11 = _DAT_03888dc0;
  local_140 = (byte *)0x0;
  uStack_138 = 0;
  local_150 = 0;
  local_148 = (byte *)0x0;
  local_160 = (byte *)0x0;
  local_158 = (byte *)0x0;
  local_170 = (__tree_node_base *)0x0;
  local_168 = 0;
  piVar42 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  local_178 = (__tree_node_base *)&local_170;
  if (piVar42 != piVar2) {
    pcVar29 = (char *)((ulong)&local_a0 | 1);
    puVar44 = PTR_FUN_043739e0;
    do {
      if (*(long *)(piVar42 + 0x18) == *(long *)(piVar42 + 0x1a)) {
        uStack_188 = 0;
        local_180 = (void *)0x0;
        local_190 = (ulong ***)0x0;
        if ((*(ulong *)(piVar42 + 0x12) & 1) == 0) {
          uStack_188 = *(ulong *)(piVar42 + 0x14);
          local_190 = *(ulong ****)(piVar42 + 0x12);
          local_180 = *(void **)(piVar42 + 0x16);
        }
        else {
          uVar37 = *(ulong *)(piVar42 + 0x14);
          if (0xffffffffffffffef < uVar37) {
                    /* try { // try from 00512244 to 0051224b has its CatchHandler @ 005122b0 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          pvVar41 = *(void **)(piVar42 + 0x16);
          if (uVar37 < 0x17) {
            local_190 = (ulong ***)(ulong)(byte)((int)uVar37 << 1);
            __dest = (void *)((ulong)&local_190 | 1);
            if (uVar37 != 0) goto LAB_00510ebc;
          }
          else {
            uVar46 = uVar37 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar46);
            local_190 = (ulong ***)(uVar46 | 1);
            uStack_188 = uVar37;
            local_180 = __dest;
LAB_00510ebc:
            memcpy(__dest,pvVar41,uVar37);
          }
          *(undefined1 *)((long)__dest + uVar37) = 0;
        }
      }
      else {
                    /* try { // try from 00510e2c to 00510e37 has its CatchHandler @ 00512530 */
        FUN_0051d2e8(&local_190,param_1);
      }
                    /* try { // try from 00510ed8 to 00510ee3 has its CatchHandler @ 00512624 */
      p_Var24 = (__tree_node_base *)FUN_003668d8(&local_178,&local_190);
      if ((__tree_node_base *)&local_170 == p_Var24) {
        plVar25 = (long *)FUN_003667bc(&local_178,&local_a0,&local_190);
        if (*plVar25 == 0) {
          p_Var24 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x38);
          pvVar41 = local_180;
          uVar37 = uStack_188;
          *(undefined8 *)(p_Var24 + 0x20) = 0;
          *(undefined8 *)(p_Var24 + 0x28) = 0;
          *(undefined8 *)(p_Var24 + 0x30) = 0;
          if (((ulong)local_190 & 1) == 0) {
            *(void **)(p_Var24 + 0x30) = local_180;
            *(ulong *)(p_Var24 + 0x28) = uStack_188;
            *(ulong ****)(p_Var24 + 0x20) = local_190;
          }
          else {
            if (0xffffffffffffffef < uStack_188) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0051224c to 0051224f has its CatchHandler @ 00512298 */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_188 < 0x17) {
              __dest_00 = p_Var24 + 0x21;
              p_Var24[0x20] = SUB41((int)uStack_188 << 1,0);
              if (uStack_188 != 0) goto LAB_005112d0;
            }
            else {
              uVar46 = uStack_188 + 0x10 & 0xfffffffffffffff0;
              __dest_00 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,uVar46);
              *(ulong *)(p_Var24 + 0x20) = uVar46 | 1;
              *(ulong *)(p_Var24 + 0x28) = uVar37;
              *(__tree_node_base **)(p_Var24 + 0x30) = __dest_00;
LAB_005112d0:
              memcpy(__dest_00,pvVar41,uVar37);
            }
            __dest_00[uVar37] = (__tree_node_base)0x0;
          }
          *(undefined8 *)p_Var24 = 0;
          *(undefined8 *)(p_Var24 + 8) = 0;
          *(ulong *****)(p_Var24 + 0x10) = local_a0;
          *plVar25 = (long)p_Var24;
          if (*(__tree_node_base **)local_178 != (__tree_node_base *)0x0) {
            p_Var24 = (__tree_node_base *)*plVar25;
            local_178 = *(__tree_node_base **)local_178;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_170,p_Var24);
          local_168 = local_168 + 1;
          if (*(long *)(piVar42 + 0x18) != *(long *)(piVar42 + 0x1a)) goto LAB_00510f14;
LAB_00511330:
          local_a0 = &local_190;
          ppppuStack_98 = (ulong ****)PTR_LAB_04374a18;
          local_88 = PTR_LAB_04374a18;
                    /* try { // try from 00511344 to 0051135f has its CatchHandler @ 00512408 */
          local_90 = local_a0;
          FUN_002e6390(local_108,
                       "      \"cds:%s\":{\n        \"childPolicy\":[ {\n          \"cds_experimental\":{\n            \"cluster\": \"%s\"\n          }\n        } ]\n       }"
                       ,0x86,&local_a0,2);
        }
        else {
          if (*(long *)(piVar42 + 0x18) == *(long *)(piVar42 + 0x1a)) goto LAB_00511330;
LAB_00510f14:
          bStack_b8 = 0;
          uStack_b7 = 0;
          local_b0 = 0;
          uStack_ac = 0;
          local_c0 = 0;
          uStack_bf = 0;
          local_128 = PTR_LAB_04374a18;
          local_130 = (ulong ***)&local_190;
                    /* try { // try from 00510f30 to 00510f4b has its CatchHandler @ 00512470 */
          FUN_002e6390(&local_a0,
                       "      \"weighted:%s\":{\n        \"childPolicy\":[ {\n          \"weighted_target_experimental\":{\n            \"targets\":{\n"
                       ,0x73,&local_130,1);
                    /* try { // try from 00510f54 to 00510f5f has its CatchHandler @ 0051245c */
          FUN_0051de60(&local_c0,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_90);
          }
          local_d0 = (ulong ****)0x0;
          local_c8 = (ulong ****)0x0;
          local_d8 = (ulong ****)0x0;
          if (*(long *)(piVar42 + 0x1a) - *(long *)(piVar42 + 0x18) != 0) {
            lVar30 = *(long *)(piVar42 + 0x1a) - *(long *)(piVar42 + 0x18) >> 5;
            ppppuVar26 = (ulong ****)FUN_002e2e80(PTR_FUN_04373078,lVar30 * 0x18);
            ppppuVar47 = local_d8;
            local_c8 = ppppuVar26 + lVar30 * 3;
            ppppuVar39 = ppppuVar26;
            ppppuVar33 = local_d0;
            if (local_d0 == local_d8) {
              local_d8 = ppppuVar26;
            }
            else {
              do {
                pppuVar49 = ppppuVar33[-2];
                pppuVar48 = ppppuVar33[-3];
                ppppuVar39[-1] = ppppuVar33[-1];
                ppppuVar39[-2] = pppuVar49;
                ppppuVar39[-3] = pppuVar48;
                ppppuVar33[-3] = (ulong ***)0x0;
                ppppuVar33[-2] = (ulong ***)0x0;
                ppppuVar33[-1] = (ulong ***)0x0;
                ppppuVar33 = ppppuVar33 + -3;
                ppppuVar39 = ppppuVar39 + -3;
              } while (local_d8 != ppppuVar33);
              bVar23 = local_d0 != local_d8;
              local_d8 = ppppuVar39;
              if (bVar23) {
                bVar4 = *(byte *)(local_d0 + -3);
                ppppuVar33 = local_d0 + -3;
                ppppuVar39 = local_d0;
                while( true ) {
                  local_d0 = ppppuVar26;
                  ppppuVar34 = ppppuVar33;
                  if ((bVar4 & 1) != 0) {
                    FUN_002e2ea0(puVar20,ppppuVar39[-1]);
                  }
                  ppppuVar26 = local_d0;
                  if (ppppuVar47 == ppppuVar34) break;
                  bVar4 = *(byte *)(ppppuVar34 + -3);
                  ppppuVar33 = ppppuVar34 + -3;
                  ppppuVar39 = ppppuVar34;
                }
              }
            }
            local_d0 = ppppuVar26;
            if (ppppuVar47 != (ulong ****)0x0) {
              FUN_002e2ea0(puVar20,ppppuVar47);
            }
          }
          ppppuVar39 = *(ulong *****)(piVar42 + 0x1a);
          for (ppppuVar47 = *(ulong *****)(piVar42 + 0x18); ppppuVar47 != ppppuVar39;
              ppppuVar47 = ppppuVar47 + 4) {
            local_90 = (ulong ****)(ulong)*(uint *)(ppppuVar47 + 3);
                    /* try { // try from 005110f4 to 0051110f has its CatchHandler @ 00512694 */
            local_a0 = ppppuVar47;
            ppppuStack_98 = (ulong ****)PTR_LAB_04374a18;
            local_88 = puVar44;
            local_80 = ppppuVar47;
            pppuStack_78 = (ulong ***)PTR_LAB_04374a18;
            FUN_002e6390(&local_f0,
                         "              \"%s\":{\n                \"weight\":%d,\n                \"childPolicy\":[ {\n                  \"cds_experimental\":{\n                    \"cluster\": \"%s\"\n                  }\n                } ]\n               }"
                         ,0xd7,&local_a0,3);
                    /* try { // try from 00511110 to 0051111b has its CatchHandler @ 005126a4 */
            FUN_0051de60(&local_d8,&local_f0);
            if (((ulong)local_f0 & 1) != 0) {
              FUN_002e2ea0(puVar20,local_e0);
            }
          }
                    /* try { // try from 00511138 to 0051114b has its CatchHandler @ 0051244c */
          FUN_002e5790(&local_a0,local_d8,local_d0,&DAT_03938439,2);
                    /* try { // try from 0051114c to 00511157 has its CatchHandler @ 00512438 */
          FUN_0051de60(&local_c0,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_90);
          }
          local_90 = (ulong ****)FUN_002e2e80(PTR_FUN_04373078,0x30);
          uVar13 = s_______038e6870._8_8_;
          pppuVar40 = _DAT_038e6862;
          pppuVar45 = _UNK_038e685a;
          pppuVar49 = _DAT_038e6852;
          ppppuStack_98 = (ulong ****)pppuVar12;
          local_a0 = ppppuVar11;
          pppuVar48 = (ulong ***)CONCAT26(s_______038e6870._0_2_,_UNK_038e686a);
          uVar7 = CONCAT62(s_______038e6870._2_6_,s_______038e6870._0_2_);
          *(undefined1 *)((long)local_90 + 0x2e) = 0;
          local_90[1] = pppuVar45;
          *local_90 = pppuVar49;
          local_90[3] = pppuVar48;
          local_90[2] = pppuVar40;
          *(undefined8 *)((long)local_90 + 0x26) = uVar13;
          *(undefined8 *)((long)local_90 + 0x1e) = uVar7;
                    /* try { // try from 005111a4 to 005111af has its CatchHandler @ 00512428 */
          FUN_0051de60(&local_c0,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_90);
          }
                    /* try { // try from 005111c8 to 005111db has its CatchHandler @ 00512418 */
          FUN_002e5790(local_108,CONCAT71(uStack_bf,local_c0),CONCAT71(uStack_b7,bStack_b8),
                       &DAT_03996322,0);
          ppppuVar47 = local_d8;
          if (local_d8 != (ulong ****)0x0) {
            if (local_d0 != local_d8) {
              bVar4 = *(byte *)(local_d0 + -3);
              ppppuVar33 = local_d0 + -3;
              ppppuVar39 = local_d0;
              while( true ) {
                ppppuVar26 = ppppuVar33;
                if ((bVar4 & 1) != 0) {
                  FUN_002e2ea0(puVar20,ppppuVar39[-1]);
                }
                if (ppppuVar47 == ppppuVar26) break;
                bVar4 = *(byte *)(ppppuVar26 + -3);
                ppppuVar33 = ppppuVar26 + -3;
                ppppuVar39 = ppppuVar26;
              }
            }
            local_d0 = ppppuVar47;
            FUN_002e2ea0(puVar20,local_d8);
          }
          uVar21 = uStack_bf;
          bVar4 = local_c0;
          pbVar36 = (byte *)CONCAT71(uStack_bf,local_c0);
          if (pbVar36 != (byte *)0x0) {
            pbVar8 = (byte *)CONCAT71(uStack_b7,bStack_b8);
            if (pbVar8 != pbVar36) {
              bVar5 = pbVar8[-0x18];
              pbVar22 = pbVar8 + -0x18;
              while( true ) {
                pbVar9 = pbVar22;
                if ((bVar5 & 1) != 0) {
                  FUN_002e2ea0(puVar20,*(undefined8 *)(pbVar8 + -8));
                }
                if (pbVar36 == pbVar9) break;
                bVar5 = pbVar9[-0x18];
                pbVar22 = pbVar9 + -0x18;
                pbVar8 = pbVar9;
              }
              pbVar36 = (byte *)CONCAT71(uStack_bf,local_c0);
            }
            bStack_b8 = bVar4;
            uStack_b7 = uVar21;
            FUN_002e2ea0(puVar20,pbVar36);
          }
        }
                    /* try { // try from 00511368 to 00511373 has its CatchHandler @ 005124b0 */
        FUN_0051de60(&local_148,local_108);
        if ((local_108[0] & 1) != 0) {
          FUN_002e2ea0(puVar20,local_f8);
        }
      }
      local_a0 = (ulong ****)&DAT_0389844f;
      if (*(long *)(piVar42 + 0x18) != *(long *)(piVar42 + 0x1a)) {
        local_a0 = (ulong ****)0x39b2549;
      }
      ppppuStack_98 = (ulong ****)PTR_LAB_043737d8;
      local_88 = PTR_LAB_04374a18;
      local_90 = &local_190;
                    /* try { // try from 005113c4 to 005113df has its CatchHandler @ 00512614 */
      FUN_002e6390(local_1c0,"%s:%s",5,&local_a0,2);
      bStack_b8 = 0;
      uStack_b7 = 0;
      local_b0 = 0;
      uStack_ac = 0;
      local_c0 = 0;
      uStack_bf = 0;
      pppuVar48 = *(ulong ****)(piVar42 + 10);
      pppuVar49 = *(ulong ****)(piVar42 + 0xc);
      puVar43 = PTR_LAB_04374a18;
      if (pppuVar48 == pppuVar49) {
        local_d0 = (ulong ****)0x0;
        local_c8 = (ulong ****)0x0;
        local_d8 = (ulong ****)0x0;
        iVar3 = *piVar42;
        puVar44 = PTR_FUN_043739e0;
      }
      else {
        do {
          switch(*(int *)(pppuVar48 + 3)) {
          case 0:
            local_130 = pppuVar48 + 6;
                    /* try { // try from 00511494 to 005114af has its CatchHandler @ 00512634 */
            local_128 = puVar43;
            FUN_002e6390(&local_a0,"             \"exact_match\": \"%s\"",0x20,&local_130,1);
            break;
          case 1:
            local_130 = (ulong ***)pppuVar48[9];
                    /* try { // try from 0051156c to 00511587 has its CatchHandler @ 00512644 */
            local_128 = puVar43;
            FUN_002e6390(&local_a0,"             \"regex_match\": \"%s\"",0x20,&local_130,1);
            break;
          case 2:
            local_a0 = (ulong ****)pppuVar48[4];
            ppppuStack_98 = (ulong ****)PTR_FUN_04373818;
            local_90 = (ulong ****)pppuVar48[5];
            local_88 = PTR_FUN_04373818;
                    /* try { // try from 005114f4 to 0051150f has its CatchHandler @ 00512674 */
            FUN_002e6390(&local_d8,
                         "             \"range_match\":{\n              \"start\":%d,\n              \"end\":%d\n             }"
                         ,0x5c,&local_a0,2);
            pppppuVar31 = &local_d8;
            ppppuVar39 = (ulong ****)&local_d0;
            ppppuVar33 = (ulong ****)&local_c8;
            goto LAB_005115b8;
          case 3:
            local_130 = (ulong ***)0x38d00f8;
            if (*(char *)(pppuVar48 + 10) != '\0') {
              local_130 = (ulong ***)&DAT_03924305;
            }
            local_128 = PTR_LAB_043737d8;
                    /* try { // try from 00511544 to 0051155f has its CatchHandler @ 00512654 */
            FUN_002e6390(&local_a0,"             \"present_match\": %s",0x20,&local_130,1);
            break;
          case 4:
            local_130 = pppuVar48 + 6;
                    /* try { // try from 005114bc to 005114d7 has its CatchHandler @ 00512664 */
            local_128 = puVar43;
            FUN_002e6390(&local_a0,"             \"prefix_match\": \"%s\"",0x21,&local_130,1);
            break;
          case 5:
            local_130 = pppuVar48 + 6;
                    /* try { // try from 00511594 to 005115af has its CatchHandler @ 00512684 */
            local_128 = puVar43;
            FUN_002e6390(&local_a0,"             \"suffix_match\": \"%s\"",0x21,&local_130,1);
            break;
          default:
            local_1c8 = (ulong ***)0x0;
            pppuVar45 = (ulong ***)0x0;
            uVar46 = 0;
            uVar37 = 0;
            ppppuVar47 = (ulong ****)0x0;
            goto LAB_005115d0;
          }
          pppppuVar31 = &local_a0;
          ppppuVar39 = (ulong ****)&ppppuStack_98;
          ppppuVar33 = (ulong ****)&local_90;
LAB_005115b8:
          ppppuVar47 = *pppppuVar31;
          uVar37 = (ulong)ppppuVar47 >> 8;
          pppuVar45 = *ppppuVar39;
          local_1c8 = *ppppuVar33;
          uVar46 = (ulong)ppppuVar47 >> 0x10;
LAB_005115d0:
          ppppuStack_98 = (ulong ****)0x0;
          local_90 = (ulong ****)0x0;
          local_a0 = (ulong ****)0x0;
                    /* try { // try from 005115dc to 005115f7 has its CatchHandler @ 005127cc */
          local_130 = pppuVar48;
          local_128 = puVar43;
          FUN_002e6390(&local_d8,"           { \n             \"name\": \"%s\",\n",0x29,&local_130,1
                      );
                    /* try { // try from 005115f8 to 00511603 has its CatchHandler @ 005127bc */
          FUN_0051de60(&local_a0,&local_d8);
          if (((ulong)local_d8 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_c8);
          }
          ppppuVar39 = ppppuStack_98;
          if (ppppuStack_98 == local_90) {
            lVar30 = (long)ppppuStack_98 - (long)local_a0 >> 3;
            uVar35 = 0xaaaaaaaaaaaaaaa;
            uVar1 = lVar30 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* try { // try from 0051222c to 0051223b has its CatchHandler @ 005122dc */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar38 = (long)local_90 - (long)local_a0 >> 3;
            if ((ulong)(lVar38 * -0x5555555555555555) < 0x555555555555555) {
              uVar32 = lVar38 * 0x5555555555555556;
              uVar35 = uVar1;
              if (uVar1 <= uVar32) {
                uVar35 = uVar32;
              }
              if (uVar35 != 0) goto LAB_005116a4;
              lVar38 = 0;
            }
            else {
LAB_005116a4:
              lVar38 = FUN_002e2e80(PTR_FUN_04373078,uVar35 * 0x18);
            }
            ppppuVar39 = (ulong ****)(lVar38 + lVar30 * 8);
            ppppuVar39[2] = (ulong ***)0x0;
            *ppppuVar39 = (ulong ***)0x0;
            ppppuVar39[1] = (ulong ***)0x0;
            if (((ulong)ppppuVar47 & 1) == 0) {
              *ppppuVar39 = (ulong ***)
                            (uVar46 << 0x10 | (uVar37 & 0xff) << 8 | (ulong)ppppuVar47 & 0xff);
              lVar30 = lVar38 + lVar30 * 8;
              *(ulong ****)(lVar30 + 8) = pppuVar45;
              *(ulong ****)(lVar30 + 0x10) = local_1c8;
              puVar43 = PTR_LAB_04374a18;
            }
            else {
              if ((ulong ***)0xffffffffffffffef < pppuVar45) {
                    /* try { // try from 0051223c to 00512243 has its CatchHandler @ 005122b8 */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (pppuVar45 < (ulong ***)0x17) {
                pbVar36 = (byte *)((long)ppppuVar39 + 1);
                *(byte *)ppppuVar39 = (byte)((int)pppuVar45 << 1);
                puVar43 = PTR_LAB_04374a18;
                if (pppuVar45 != (ulong ***)0x0) goto LAB_005117f4;
              }
              else {
                pbVar36 = (byte *)FUN_002e2e80(PTR_FUN_04373078,
                                               (ulong)(pppuVar45 + 2) & 0xfffffffffffffff0);
                lVar30 = lVar38 + lVar30 * 8;
                *(ulong ****)(lVar30 + 8) = pppuVar45;
                *(byte **)(lVar30 + 0x10) = pbVar36;
                *ppppuVar39 = (ulong ***)((ulong)(pppuVar45 + 2) & 0xfffffffffffffff0 | 1);
LAB_005117f4:
                puVar43 = PTR_LAB_04374a18;
                memcpy(pbVar36,local_1c8,(size_t)pppuVar45);
              }
              pbVar36[(long)pppuVar45] = 0;
            }
            ppppuVar26 = local_a0;
            local_90 = (ulong ****)(lVar38 + uVar35 * 0x18);
            ppppuVar33 = ppppuVar39 + 3;
            ppppuVar34 = ppppuStack_98;
            if (ppppuStack_98 == local_a0) {
              local_a0 = ppppuVar39;
            }
            else {
              do {
                pppuVar40 = ppppuVar34[-2];
                pppuVar45 = ppppuVar34[-3];
                ppppuVar39[-1] = ppppuVar34[-1];
                ppppuVar39[-2] = pppuVar40;
                ppppuVar39[-3] = pppuVar45;
                ppppuVar34[-3] = (ulong ***)0x0;
                ppppuVar34[-2] = (ulong ***)0x0;
                ppppuVar34[-1] = (ulong ***)0x0;
                ppppuVar34 = ppppuVar34 + -3;
                ppppuVar39 = ppppuVar39 + -3;
              } while (local_a0 != ppppuVar34);
              bVar23 = ppppuStack_98 != local_a0;
              local_a0 = ppppuVar39;
              if (bVar23) {
                bVar4 = *(byte *)(ppppuStack_98 + -3);
                ppppuVar34 = ppppuStack_98 + -3;
                ppppuVar39 = ppppuStack_98;
                while( true ) {
                  ppppuVar10 = ppppuVar34;
                  ppppuStack_98 = ppppuVar33;
                  if ((bVar4 & 1) != 0) {
                    FUN_002e2ea0(puVar20,ppppuVar39[-1]);
                  }
                  ppppuVar33 = ppppuStack_98;
                  if (ppppuVar26 == ppppuVar10) break;
                  bVar4 = *(byte *)(ppppuVar10 + -3);
                  ppppuVar34 = ppppuVar10 + -3;
                  ppppuVar39 = ppppuVar10;
                }
              }
            }
            ppppuStack_98 = ppppuVar33;
            if (ppppuVar26 != (ulong ****)0x0) {
              FUN_002e2ea0(puVar20,ppppuVar26);
            }
            cVar6 = *(char *)((long)pppuVar48 + 0x51);
          }
          else {
            *ppppuStack_98 = (ulong ***)0x0;
            ppppuStack_98[1] = (ulong ***)0x0;
            ppppuStack_98[2] = (ulong ***)0x0;
            if (((ulong)ppppuVar47 & 1) == 0) {
              *ppppuStack_98 =
                   (ulong ***)(uVar46 << 0x10 | (uVar37 & 0xff) << 8 | (ulong)ppppuVar47 & 0xff);
              ppppuStack_98[1] = pppuVar45;
              ppppuStack_98[2] = local_1c8;
            }
            else {
              if ((ulong ***)0xffffffffffffffef < pppuVar45) {
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (pppuVar45 < (ulong ***)0x17) {
                pppuVar40 = (ulong ***)((long)ppppuStack_98 + 1);
                *(byte *)ppppuStack_98 = (byte)((int)pppuVar45 << 1);
                if (pppuVar45 != (ulong ***)0x0) goto LAB_00511778;
              }
              else {
                pppuVar40 = (ulong ***)
                            FUN_002e2e80(PTR_FUN_04373078,
                                         (ulong)(pppuVar45 + 2) & 0xfffffffffffffff0);
                ppppuVar39[1] = pppuVar45;
                ppppuVar39[2] = pppuVar40;
                *ppppuVar39 = (ulong ***)((ulong)(pppuVar45 + 2) & 0xfffffffffffffff0 | 1);
LAB_00511778:
                memcpy(pppuVar40,local_1c8,(size_t)pppuVar45);
              }
              *(byte *)((long)pppuVar40 + (long)pppuVar45) = 0;
            }
            ppppuStack_98 = ppppuStack_98 + 3;
            cVar6 = *(char *)((long)pppuVar48 + 0x51);
          }
          if (cVar6 != '\0') {
                    /* try { // try from 005118c4 to 005118df has its CatchHandler @ 0051279c */
            FUN_002e6390(&local_d8,",\n             \"invert_match\": true",0x23,0,0);
                    /* try { // try from 005118e0 to 005118eb has its CatchHandler @ 005127ac */
            FUN_0051de60(&local_a0,&local_d8);
            if (((ulong)local_d8 & 1) != 0) {
              FUN_002e2ea0(puVar20,local_c8);
            }
          }
                    /* try { // try from 00511900 to 0051191b has its CatchHandler @ 005127ec */
          FUN_002e6390(&local_d8,"\n           }",0xd,0,0);
                    /* try { // try from 0051191c to 00511927 has its CatchHandler @ 005127dc */
          FUN_0051de60(&local_a0,&local_d8);
          if (((ulong)local_d8 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_c8);
          }
                    /* try { // try from 00511940 to 00511953 has its CatchHandler @ 00512824 */
          FUN_002e5790(&local_d8,local_a0,ppppuStack_98,&DAT_03996322,0);
                    /* try { // try from 0051195c to 00511967 has its CatchHandler @ 005127fc */
          FUN_0051de60(&local_c0,&local_d8);
          if (((ulong)local_d8 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_c8);
          }
          ppppuVar39 = local_a0;
          if (local_a0 != (ulong ****)0x0) {
            if (ppppuStack_98 != local_a0) {
              bVar4 = *(byte *)(ppppuStack_98 + -3);
              ppppuVar26 = ppppuStack_98 + -3;
              ppppuVar33 = ppppuStack_98;
              while( true ) {
                ppppuVar34 = ppppuVar26;
                if ((bVar4 & 1) != 0) {
                  FUN_002e2ea0(puVar20,ppppuVar33[-1]);
                }
                if (ppppuVar39 == ppppuVar34) break;
                bVar4 = *(byte *)(ppppuVar34 + -3);
                ppppuVar26 = ppppuVar34 + -3;
                ppppuVar33 = ppppuVar34;
              }
            }
            ppppuStack_98 = ppppuVar39;
            FUN_002e2ea0(puVar20,local_a0);
          }
          if (((ulong)ppppuVar47 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_1c8);
          }
          puVar44 = PTR_FUN_043739e0;
          pppuVar48 = pppuVar48 + 0xb;
        } while (pppuVar48 != pppuVar49);
        local_d8 = (ulong ****)0x0;
        local_d0 = (ulong ****)0x0;
        local_c8 = (ulong ****)0x0;
        if (CONCAT71(uStack_bf,local_c0) != CONCAT71(uStack_b7,bStack_b8)) {
          local_a0 = (ulong ****)0x18;
          local_90 = (ulong ****)0x0;
          *(undefined8 *)pcVar29 = s__headers____03906073._0_8_;
          pcVar29[8] = '\"';
          pcVar29[9] = ':';
          pcVar29[10] = '[';
          pcVar29[0xb] = '\n';
          ppppuStack_98 = (ulong ****)0x0;
                    /* try { // try from 00511a4c to 00511a57 has its CatchHandler @ 005124e4 */
          FUN_0051de60(&local_d8,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_90);
          }
                    /* try { // try from 00511a70 to 00511a83 has its CatchHandler @ 005124d4 */
          FUN_002e5790(&local_a0,CONCAT71(uStack_bf,local_c0),CONCAT71(uStack_b7,bStack_b8),
                       &DAT_038ee629,1);
                    /* try { // try from 00511a84 to 00511a8f has its CatchHandler @ 005124c4 */
          FUN_0051de60(&local_d8,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_90);
          }
          local_a0 = (ulong ****)CONCAT71(local_a0._1_7_,0x1c);
          local_90 = (ulong ****)0x0;
          *(undefined8 *)(pcVar29 + 6) = s____03930193._0_8_;
          pcVar29[0] = ' ';
          pcVar29[1] = ' ';
          pcVar29[2] = ' ';
          pcVar29[3] = ' ';
          pcVar29[4] = ' ';
          pcVar29[5] = ' ';
          pcVar29[6] = ' ';
          pcVar29[7] = ' ';
          ppppuStack_98 = (ulong ****)((ulong)ppppuStack_98 & 0xffffffffffffff);
                    /* try { // try from 00511ad0 to 00511adb has its CatchHandler @ 005124f4 */
          FUN_0051de60(&local_d8,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_90);
          }
        }
        iVar3 = *piVar42;
      }
      if (iVar3 == 0) {
        local_e0 = (ulong ****)0x0;
        ppppuStack_e8 = (ulong ****)0x0;
        local_f0 = (ulong ****)0x0;
        local_130 = (ulong ***)(piVar42 + 2);
                    /* try { // try from 00511438 to 00511453 has its CatchHandler @ 00512480 */
        local_128 = PTR_LAB_04374a18;
        FUN_002e6390(&local_a0,"\"path\": \"%s\",\n",0xe,&local_130,1);
LAB_00511b6c:
        if (((ulong)local_f0 & 1) != 0) {
          *(byte *)local_e0 = 0;
          ppppuStack_e8 = (ulong ****)0x0;
          if (((ulong)local_f0 & 1) != 0) {
            FUN_002e2ea0(puVar20,local_e0);
          }
        }
        local_e0 = local_90;
        ppppuStack_e8 = ppppuStack_98;
        local_f0 = local_a0;
      }
      else {
        local_e0 = (ulong ****)0x0;
        ppppuStack_e8 = (ulong ****)0x0;
        local_f0 = (ulong ****)0x0;
        if (iVar3 == 2) {
          local_130 = *(ulong ****)(piVar42 + 8);
                    /* try { // try from 00511b50 to 00511b6b has its CatchHandler @ 00512490 */
          local_128 = PTR_LAB_04374a18;
          FUN_002e6390(&local_a0,"\"regex\": \"%s\",\n",0xf,&local_130,1);
          goto LAB_00511b6c;
        }
        if (iVar3 == 1) {
          local_130 = (ulong ***)(piVar42 + 2);
                    /* try { // try from 00511b20 to 00511b3b has its CatchHandler @ 005124a0 */
          local_128 = PTR_LAB_04374a18;
          FUN_002e6390(&local_a0,"\"prefix\": \"%s\",\n",0x10,&local_130,1);
          goto LAB_00511b6c;
        }
      }
                    /* try { // try from 00511bc4 to 00511bd7 has its CatchHandler @ 00512588 */
      FUN_002e5790(local_108,local_d8,local_d0,&DAT_03996322,0);
      if ((char)piVar42[0x10] == '\0') {
        local_118 = 0;
        local_110 = 0;
        local_120 = (ulong ***)0x0;
      }
      else {
        local_130 = (ulong ***)(ulong)(uint)piVar42[0x11];
                    /* try { // try from 00511be8 to 00511c03 has its CatchHandler @ 00512508 */
        local_128 = puVar44;
        FUN_002e6390(&local_120,"\"match_fraction\":%d,\n",0x15,&local_130,1);
      }
      local_a0 = (ulong ****)&local_f0;
      ppppuStack_98 = (ulong ****)PTR_LAB_04374a18;
      local_90 = (ulong ****)local_108;
      local_88 = PTR_LAB_04374a18;
      local_80 = &local_120;
      pppuStack_78 = (ulong ***)PTR_LAB_04374a18;
      local_68 = PTR_LAB_04374a18;
      local_70 = local_1c0;
                    /* try { // try from 00511c3c to 00511c57 has its CatchHandler @ 0051254c */
      FUN_002e6390(local_1a8,
                   "      { \n           %s           %s           %s           \"action\": \"%s\"\n      }"
                   ,0x51,&local_a0,4);
      if (((ulong)local_120 & 1) != 0) {
        FUN_002e2ea0(puVar20,local_110);
      }
      if ((local_108[0] & 1) != 0) {
        FUN_002e2ea0(puVar20,local_f8);
      }
      ppppuVar47 = local_d8;
      if (((ulong)local_f0 & 1) != 0) {
        FUN_002e2ea0(puVar20,local_e0);
        ppppuVar47 = local_d8;
      }
      local_d8 = ppppuVar47;
      if (ppppuVar47 != (ulong ****)0x0) {
        if (local_d0 != ppppuVar47) {
          bVar4 = *(byte *)(local_d0 + -3);
          ppppuVar33 = local_d0 + -3;
          ppppuVar39 = local_d0;
          while( true ) {
            ppppuVar26 = ppppuVar33;
            if ((bVar4 & 1) != 0) {
              FUN_002e2ea0(puVar20,ppppuVar39[-1]);
            }
            if (ppppuVar47 == ppppuVar26) break;
            bVar4 = *(byte *)(ppppuVar26 + -3);
            ppppuVar33 = ppppuVar26 + -3;
            ppppuVar39 = ppppuVar26;
          }
        }
        local_d0 = ppppuVar47;
        FUN_002e2ea0(puVar20,local_d8);
      }
      uVar21 = uStack_bf;
      bVar4 = local_c0;
      pbVar36 = (byte *)CONCAT71(uStack_bf,local_c0);
      if (pbVar36 != (byte *)0x0) {
        pbVar8 = (byte *)CONCAT71(uStack_b7,bStack_b8);
        if (pbVar8 != pbVar36) {
          bVar5 = pbVar8[-0x18];
          pbVar22 = pbVar8 + -0x18;
          while( true ) {
            pbVar9 = pbVar22;
            if ((bVar5 & 1) != 0) {
              FUN_002e2ea0(puVar20,*(undefined8 *)(pbVar8 + -8));
            }
            if (pbVar36 == pbVar9) break;
            bVar5 = pbVar9[-0x18];
            pbVar22 = pbVar9 + -0x18;
            pbVar8 = pbVar9;
          }
          pbVar36 = (byte *)CONCAT71(uStack_bf,local_c0);
        }
        bStack_b8 = bVar4;
        uStack_b7 = uVar21;
        FUN_002e2ea0(puVar20,pbVar36);
      }
                    /* try { // try from 00511d78 to 00511d83 has its CatchHandler @ 00512538 */
      FUN_0051de60(&local_160,local_1a8);
      if ((local_1a8[0] & 1) != 0) {
        FUN_002e2ea0(puVar20,local_198);
      }
      if ((local_1c0[0] & 1) != 0) {
        FUN_002e2ea0(puVar20,local_1b0);
      }
      if (((ulong)local_190 & 1) != 0) {
        FUN_002e2ea0(puVar20,local_180);
      }
      piVar42 = piVar42 + 0x1e;
    } while (piVar42 != piVar2);
  }
  ppppuStack_98 = (ulong ****)0x0;
  local_90 = (ulong ****)0x0;
  local_a0 = (ulong ****)0x0;
  pcVar29 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x60);
  uVar7 = s____loadBalancingConfig_______xds_03919858._64_8_;
  local_b0 = SUB84(pcVar29,0);
  uStack_ac = (undefined4)((ulong)pcVar29 >> 0x20);
  bStack_b8 = (byte)_UNK_0388a008;
  uStack_b7 = (undefined7)((ulong)_UNK_0388a008 >> 8);
  local_c0 = (byte)_DAT_0388a000;
  uStack_bf = (undefined7)((ulong)_DAT_0388a000 >> 8);
  *(undefined8 *)(pcVar29 + 0x48) = s____loadBalancingConfig_______xds_03919858._72_8_;
  *(undefined8 *)(pcVar29 + 0x40) = uVar7;
  uVar19 = s____loadBalancingConfig_______xds_03919858._56_8_;
  uVar18 = s____loadBalancingConfig_______xds_03919858._48_8_;
  uVar17 = s____loadBalancingConfig_______xds_03919858._40_8_;
  uVar16 = s____loadBalancingConfig_______xds_03919858._32_8_;
  uVar15 = s____loadBalancingConfig_______xds_03919858._24_8_;
  uVar14 = s____loadBalancingConfig_______xds_03919858._16_8_;
  uVar13 = s____loadBalancingConfig_______xds_03919858._8_8_;
  uVar7 = s____loadBalancingConfig_______xds_03919858._0_8_;
  pcVar29[0x51] = '\0';
  pcVar29[0x50] = '\n';
  *(undefined8 *)(pcVar29 + 0x28) = uVar17;
  *(undefined8 *)(pcVar29 + 0x20) = uVar16;
  *(undefined8 *)(pcVar29 + 0x38) = uVar19;
  *(undefined8 *)(pcVar29 + 0x30) = uVar18;
  *(undefined8 *)(pcVar29 + 8) = uVar13;
  *(undefined8 *)pcVar29 = uVar7;
  *(undefined8 *)(pcVar29 + 0x18) = uVar15;
  *(undefined8 *)(pcVar29 + 0x10) = uVar14;
                    /* try { // try from 00511e2c to 00511e37 has its CatchHandler @ 00512384 */
  FUN_0051de60(&local_a0,&local_c0);
  if ((local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_ac,local_b0));
  }
                    /* try { // try from 00511e54 to 00511e67 has its CatchHandler @ 00512374 */
  FUN_002e5790(&local_c0,local_148,local_140,&DAT_03938439,2);
                    /* try { // try from 00511e68 to 00511e73 has its CatchHandler @ 00512364 */
  FUN_0051de60(&local_a0,&local_c0);
  if ((local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_ac,local_b0));
  }
  puVar27 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uVar7 = _DAT_038f055c;
  local_b0 = SUB84(puVar27,0);
  uStack_ac = (undefined4)((ulong)puVar27 >> 0x20);
  bStack_b8 = (byte)_UNK_03889048;
  uStack_b7 = (undefined7)((ulong)_UNK_03889048 >> 8);
  local_c0 = (byte)_DAT_03889040;
  uStack_bf = (undefined7)((ulong)_DAT_03889040 >> 8);
  puVar27[1] = _UNK_038f0564;
  *puVar27 = uVar7;
  puVar27[2] = s_utes____038f056c._0_8_;
  *(undefined1 *)(puVar27 + 3) = 0;
                    /* try { // try from 00511ecc to 00511ed7 has its CatchHandler @ 00512354 */
  FUN_0051de60(&local_a0,&local_c0);
  if ((local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_ac,local_b0));
  }
                    /* try { // try from 00511ef4 to 00511f07 has its CatchHandler @ 00512344 */
  FUN_002e5790(&local_c0,local_160,local_158,&DAT_03938439,2);
                    /* try { // try from 00511f08 to 00511f13 has its CatchHandler @ 00512334 */
  FUN_0051de60(&local_a0,&local_c0);
  if ((local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_ac,local_b0));
  }
  local_c0 = 0x26;
  uStack_b7 = s___________03906013._8_7_;
  local_b0 = CONCAT31(0x7d0a5d,s___________03906013[0xf]);
  uStack_bf = s___________03906013._0_7_;
  bStack_b8 = s___________03906013[7];
  uStack_ac = 0;
                    /* try { // try from 00511f60 to 00511f6b has its CatchHandler @ 00512324 */
  FUN_0051de60(&local_a0,&local_c0);
  if ((local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_ac,local_b0));
  }
                    /* try { // try from 00511f88 to 00511f9b has its CatchHandler @ 00512314 */
  FUN_002e5790(&local_c0,local_a0,ppppuStack_98,&DAT_03996322,0);
  local_d8 = (ulong ****)0x0;
  if ((local_c0 & 1) == 0) {
    pcVar29 = (char *)((ulong)&local_c0 | 1);
    sVar28 = strlen(pcVar29);
  }
  else {
    pcVar29 = (char *)CONCAT44(uStack_ac,local_b0);
    if (pcVar29 == (char *)0x0) {
      sVar28 = 0;
      goto LAB_00511fdc;
    }
    sVar28 = strlen(pcVar29);
  }
  if ((long)sVar28 < 0) {
                    /* try { // try from 00512250 to 0051226f has its CatchHandler @ 00512304 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
LAB_00511fdc:
                    /* try { // try from 00511fdc to 00511feb has its CatchHandler @ 00512304 */
  FUN_00506d98(&local_f0,pcVar29,sVar28,&local_d8);
  ppppuVar11 = local_f0;
  puVar27 = (undefined8 *)*param_3;
  if (puVar27 != (undefined8 *)0x0) {
    lVar30 = puVar27[1];
    plVar25 = puVar27 + 2;
    do {
      lVar38 = *plVar25;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar23) {
        *plVar25 = lVar38 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((lVar30 != 0) && (*(char *)(lVar30 + 0x10) != '\0')) {
                    /* try { // try from 00512024 to 00512043 has its CatchHandler @ 005122ec */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar30 + 8),puVar27 + 1,lVar38);
    }
    if (lVar38 < 1) {
                    /* try { // try from 00512270 to 00512297 has its CatchHandler @ 005122ec */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar38 == 1) {
      (**(code **)*puVar27)(puVar27);
      FUN_002e2ea0(PTR_LAB_04373088,puVar27);
    }
  }
  *param_3 = ppppuVar11;
  local_f0 = (ulong ****)0x0;
  FUN_0050d03c(&local_f0);
  ppppuVar11 = local_d8;
  if ((local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_ac,local_b0));
  }
  ppppuVar47 = local_a0;
  puVar20 = PTR_LAB_04373088;
  if (local_a0 != (ulong ****)0x0) {
    if (ppppuStack_98 != local_a0) {
      bVar4 = *(byte *)(ppppuStack_98 + -3);
      ppppuVar33 = ppppuStack_98 + -3;
      ppppuVar39 = ppppuStack_98;
      while( true ) {
        ppppuVar26 = ppppuVar33;
        if ((bVar4 & 1) != 0) {
          FUN_002e2ea0(puVar20,ppppuVar39[-1]);
        }
        if (ppppuVar47 == ppppuVar26) break;
        bVar4 = *(byte *)(ppppuVar26 + -3);
        ppppuVar33 = ppppuVar26 + -3;
        ppppuVar39 = ppppuVar26;
      }
    }
    ppppuStack_98 = ppppuVar47;
    FUN_002e2ea0(PTR_LAB_04373088,local_a0);
  }
  FUN_0036b9a4(&local_178,local_170);
  pbVar36 = local_160;
  puVar20 = PTR_LAB_04373088;
  if (local_160 != (byte *)0x0) {
    if (local_158 != local_160) {
      bVar4 = local_158[-0x18];
      pbVar22 = local_158 + -0x18;
      pbVar8 = local_158;
      while( true ) {
        pbVar9 = pbVar22;
        if ((bVar4 & 1) != 0) {
          FUN_002e2ea0(puVar20,*(undefined8 *)(pbVar8 + -8));
        }
        if (pbVar36 == pbVar9) break;
        bVar4 = pbVar9[-0x18];
        pbVar22 = pbVar9 + -0x18;
        pbVar8 = pbVar9;
      }
    }
    local_158 = pbVar36;
    FUN_002e2ea0(PTR_LAB_04373088,local_160);
  }
  pbVar36 = local_148;
  puVar20 = PTR_LAB_04373088;
  if (local_148 != (byte *)0x0) {
    if (local_140 != local_148) {
      bVar4 = local_140[-0x18];
      pbVar22 = local_140 + -0x18;
      pbVar8 = local_140;
      while( true ) {
        pbVar9 = pbVar22;
        if ((bVar4 & 1) != 0) {
          FUN_002e2ea0(puVar20,*(undefined8 *)(pbVar8 + -8));
        }
        if (pbVar36 == pbVar9) break;
        bVar4 = pbVar9[-0x18];
        pbVar22 = pbVar9 + -0x18;
        pbVar8 = pbVar9;
      }
    }
    local_140 = pbVar36;
    FUN_002e2ea0(PTR_LAB_04373088,local_148);
  }
  return ppppuVar11;
}


