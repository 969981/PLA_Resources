/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030683d8; name: FUN_030683d8
 */


/* WARNING: Removing unreachable block (ram,0x0306ad4c) */

void FUN_030683d8(long param_1,long *param_2,undefined8 param_3,long *param_4,uint param_5,
                 long *param_6,uint param_7,long param_8,long param_9,long param_10,long param_11,
                 long param_12,long *param_13,long param_14)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long **pplVar32;
  uint **ppuVar33;
  uint5 uVar34;
  ushort uVar35;
  bool bVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  undefined8 *puVar40;
  undefined8 uVar41;
  int iVar42;
  undefined4 *puVar43;
  long *plVar44;
  undefined1 (*pauVar45) [16];
  ulong uVar46;
  long lVar47;
  long lVar48;
  uint *puVar49;
  uint *puVar50;
  long lVar51;
  long lVar52;
  int iVar53;
  undefined1 (*pauVar54) [16];
  long lVar55;
  uint uVar56;
  uint uVar57;
  long lVar58;
  short sVar59;
  uint uVar60;
  long lVar61;
  undefined4 *puVar62;
  long lVar63;
  long lVar64;
  uint *puVar65;
  ulong uVar66;
  long *plVar67;
  uint *puVar68;
  uint *puVar69;
  int *piVar70;
  undefined1 (*pauVar71) [16];
  ulong uVar72;
  long lVar73;
  ulong uVar74;
  long *plVar75;
  undefined8 *puVar76;
  ulong uVar77;
  uint *puVar78;
  long lVar79;
  undefined1 (*pauVar80) [16];
  byte bVar81;
  ushort uVar82;
  int iVar83;
  uint uVar84;
  float fVar85;
  undefined8 uVar86;
  int iVar91;
  int iVar93;
  undefined1 auVar87 [12];
  float fVar92;
  float fVar94;
  undefined1 auVar88 [16];
  float fVar95;
  float fVar96;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined4 uVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  long local_330;
  uint *local_2c8;
  uint *local_2c0;
  long local_2b8;
  uint local_2ac;
  long *local_2a8;
  long local_2a0;
  long local_298;
  long *local_290;
  long *local_288;
  uint local_280;
  uint local_27c;
  long local_278;
  ulong local_270;
  undefined1 (*pauStack_268) [16];
  long *local_260;
  long local_258;
  uint *local_250;
  uint *local_248;
  ulong local_240;
  long local_238;
  long local_230;
  long local_228;
  undefined1 (*local_220) [16];
  ulong local_218;
  uint *local_210;
  undefined8 uStack_208;
  undefined1 (*local_1f8) [16];
  undefined8 local_1f0;
  ulong local_1e8;
  long local_1e0;
  long *local_1d8;
  long local_1d0;
  long local_1c8 [2];
  undefined8 *local_1b8;
  uint *local_1b0;
  uint local_1a8;
  int local_1a4;
  undefined4 local_1a0 [2];
  uint local_198 [2];
  undefined1 (*local_190) [16];
  long local_188;
  long local_180;
  uint local_178;
  long local_170;
  long local_168;
  undefined1 (*local_160) [16];
  undefined1 (*local_158) [16];
  long local_150;
  long local_148;
  uint local_140;
  long local_138;
  long local_130;
  undefined1 (*local_128) [16];
  long local_120 [2];
  undefined8 *local_110;
  uint *local_108;
  uint local_100;
  int local_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  float local_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  uint *local_90;
  undefined8 local_88;
  long local_80;
  
  local_1b8 = *(undefined8 **)(param_1 + 0x4e0);
  local_1c8[0] = *param_2;
  local_1a4 = 0;
  local_1b0 = (uint *)0x0;
  puVar43 = *(undefined4 **)(param_1 + 0x4b0);
  *puVar43 = 0xffffff;
  *(undefined2 *)(puVar43 + 1) = 0;
  puVar43[2] = 0;
  puVar43[0x1d] = 0;
  *(long **)(puVar43 + 4) = local_1c8;
  local_1e0 = param_14;
  *(long *)(puVar43 + 8) = param_14;
  *(long **)(puVar43 + 0x12) = param_13;
  *(long **)(puVar43 + 0xe) = param_13;
  *(undefined8 *)(puVar43 + 0x10) = 0;
  if (param_13 != (long *)0x0) {
    iVar42 = *(int *)(*param_13 + 8);
    lVar39 = param_13[3];
    iVar53 = *(int *)((long)param_13 + 0x1c);
    *(long *)(puVar43 + 0x14) = param_13[2];
    *(short *)(puVar43 + 0x16) = (short)lVar39;
    *(short *)((long)puVar43 + 0x5a) = (short)iVar53;
    puVar43[0x17] = -(iVar53 + iVar42);
  }
  *(long **)(puVar43 + 0x10) = param_13;
  local_110 = *(undefined8 **)(param_1 + 0x4e0);
  local_120[0] = *param_2;
  local_108 = (uint *)0x0;
  local_fc = 0;
  local_2ac = *(uint *)(*(long *)(param_1 + 8) + 0x5c);
  puVar69 = *(uint **)(param_1 + 0x4b0);
  *(undefined1 (***) [16])(puVar69 + 10) = &local_158;
  *(undefined1 (***) [16])(puVar69 + 0xc) = &local_190;
  plVar44 = *(long **)(*(long *)(param_1 + 8) + 0x4b8);
  local_230 = param_2[2];
  pauVar54 = (undefined1 (*) [16])param_4[1];
  local_2a8 = param_4;
  local_2a0 = param_8;
  local_280 = param_5;
  local_27c = param_7;
  local_1d8 = param_2;
  local_1d0 = param_1;
  if (*(int *)(param_1 + 0x760) == 0) {
    lVar39 = 0;
    local_2b8 = 0;
joined_r0x030684f0:
    if (pauVar54 != (undefined1 (*) [16])0x0) goto LAB_030684f4;
LAB_030686e4:
    uVar77 = 0xff000000ff000000;
  }
  else {
    lVar39 = tpidr_el0;
    lVar52 = *(long *)(lVar39 + 0x38d490);
    if (lVar52 == 0) {
      lVar52 = FUN_0333d16c(0,1);
      *(long *)(lVar39 + 0x38d490) = lVar52;
    }
    lVar39 = *(long *)(lVar52 + 0x10);
    puVar76 = *(undefined8 **)(lVar39 + 8);
    if (puVar76 < *(undefined8 **)(lVar39 + 0x18)) {
      if (*(int *)(local_1d0 + 0x760) == 0) {
        local_2b8 = 1;
      }
      else {
        if (lVar39 == 0) {
          local_2b8 = 1;
          goto joined_r0x030684f0;
        }
        lVar52 = (long)*(int *)(local_1d0 + 0x760) * 4;
        local_2b8 = 1;
        puVar43 = *(undefined4 **)(local_1d0 + 0x758);
        while( true ) {
          lVar52 = lVar52 + -4;
          if (puVar76 != (undefined8 *)0x0) {
            puVar62 = (undefined4 *)((long)puVar76 + 0x13U & 0xfffffffffffffffc);
            uVar77 = (long)puVar62 + 0xbU & 0xfffffffffffffff8;
            if (uVar77 <= *(ulong *)(lVar39 + 0x10)) {
              uVar113 = *puVar43;
              *(ulong *)(lVar39 + 8) = uVar77;
              *puVar76 = &DAT_038f7b98;
              puVar76[1] = &DAT_04356710;
              if (puVar62 != (undefined4 *)0x0) {
                *puVar62 = uVar113;
              }
            }
          }
          if (lVar52 == 0) break;
          puVar76 = *(undefined8 **)(lVar39 + 8);
          puVar43 = puVar43 + 1;
        }
      }
    }
    else {
      local_2b8 = 0;
    }
    if (pauVar54 == (undefined1 (*) [16])0x0) goto LAB_030686e4;
LAB_030684f4:
    uVar77 = (ulong)*(uint *)*pauVar54 & 0xffffff |
             (ulong)(*(uint *)((long)*pauVar54 + 4) & 0xffffff) << 0x20;
  }
  uVar46 = 0xff000000ff000000;
  pauVar80 = (undefined1 (*) [16])param_6[1];
  if (pauVar80 != (undefined1 (*) [16])0x0) {
    uVar46 = (ulong)*(uint *)*pauVar80 & 0xffffff |
             (ulong)(*(uint *)((long)*pauVar80 + 4) & 0xffffff) << 0x20;
  }
  if ((uVar46 | uVar77) != 0xff000000ff000000) {
    local_238 = param_12;
    local_288 = local_2a8 + 7;
    local_250 = puVar69 + 0x18;
    local_298 = param_11;
    puVar68 = puVar69 + 0x14;
    local_2c0 = puVar69 + 0xe;
    local_2c8 = puVar69 + 0x10;
    bVar36 = local_2b8 != 0;
    lVar52 = local_1e0 + 0x58;
    uVar38 = 0xffffff;
    uVar66 = 0xffffffffffffffff;
    local_278 = param_10;
    local_290 = param_6 + 7;
    puVar1 = (uint *)(param_10 + 0x1c);
    lVar63 = local_2a0;
    plVar67 = local_2a8;
    uVar57 = local_2ac;
    do {
      uVar60 = local_280;
      pauVar71 = pauVar54;
      if (uVar46 <= uVar77) {
        uVar60 = local_27c;
        pauVar71 = pauVar80;
      }
      uVar72 = (ulong)*(byte *)((long)*pauVar71 + 9);
      pplVar32 = &local_288;
      local_1f0 = uVar77;
      if (uVar46 <= uVar77) {
        pplVar32 = &local_290;
        local_1f0 = uVar46;
      }
      plVar75 = *pplVar32;
      uVar74 = uVar72;
      local_270 = uVar77;
      pauStack_268 = pauVar54;
      local_260 = plVar75;
      local_218 = uVar46;
      local_1e8 = uVar72;
      if (local_1f0 == uVar66) {
        local_f0 = CONCAT44(local_f0._4_4_,*(uint *)((long)*pauVar71 + 4));
        local_f8 = *(uint *)*pauVar71;
        if (*(long *)(puVar69 + 0x18) != 0) {
          if (*(char *)((long)puVar69 + 0x7a) == '\0') {
            FUN_0301e778(puVar69,local_1d0,local_1d8);
          }
          else {
            uVar41 = **(undefined8 **)(puVar69 + 0x12);
            *(undefined4 *)(*(long *)(puVar69 + 0x18) + 8) = 0x7777;
            plVar67 = *(long **)(puVar69 + 0x12);
            uVar60 = *(uint *)((long)plVar67 + 0x1c);
            uVar57 = uVar60 + *(int *)(*plVar67 + 8) + puVar69[0x17];
            if (uVar57 != 0) {
              puVar65 = *(uint **)puVar68;
              puVar78 = (uint *)plVar67[2];
              if (puVar65 == puVar78) {
                uVar82 = *(ushort *)((long)puVar69 + 0x5a);
              }
              else {
                uVar82 = *(ushort *)((long)puVar69 + 0x5a);
                if ((uint)uVar82 == (*puVar65 & 0xffff)) {
                  puVar65 = *(uint **)(puVar65 + 2);
                  puVar69[0x16] = 0;
                  uVar82 = 0;
                  puVar78 = (uint *)plVar67[2];
                  uVar35 = 0;
                  if (puVar65 == (uint *)plVar67[2]) goto LAB_0306aee8;
                }
                else {
                  uVar35 = uVar82;
                  if (puVar65 == puVar78) {
LAB_0306aee8:
                    puVar65 = puVar78;
                    uVar60 = *(uint *)((long)plVar67 + 0x1c);
                    goto LAB_03069bf0;
                  }
                }
                uVar82 = uVar35;
                uVar60 = *puVar65;
              }
LAB_03069bf0:
              *(ushort *)((long)puVar69 + 0x5a) = (short)uVar60 - uVar82;
              *(uint **)(puVar69 + 0x14) = puVar65;
            }
            puVar69[0x17] = uVar57;
            uVar57 = *(uint *)((long)plVar67 + 0x1c);
            lVar63 = *plVar67;
            if (uVar57 == 0) {
              piVar70 = (int *)(lVar63 + 0x18);
              iVar53 = *piVar70;
              if (iVar53 < 2) goto LAB_03069c1c;
              puVar76 = (undefined8 *)plVar67[1];
              lVar55 = *(long *)(*(long *)(lVar63 + 0x10) + (long)(iVar53 + -2) * 8);
              iVar42 = *(int *)(puVar76 + 0xb);
              lVar73 = puVar76[1];
              *(undefined8 *)(lVar73 + (long)iVar42 * 8) =
                   *(undefined8 *)(*(long *)(lVar63 + 0x10) + (long)(iVar53 + -1) * 8);
              *(int *)(puVar76 + 0xb) = iVar42 + 1;
              if (*(int *)((long)puVar76 + 0x5c) <= iVar42 + 1) {
                uVar77 = local_1f0 >> 0x20;
                local_1f0 = CONCAT44((int)uVar77,iVar42 + -5);
                (**(code **)(*(long *)*puVar76 + 0x28))
                          ((long *)*puVar76,lVar73 + (long)(iVar42 + -5) * 8,6);
                *(undefined4 *)(puVar76 + 0xb) = (undefined4)local_1f0;
              }
              *(undefined8 *)(lVar55 + 8) = 0;
              uVar57 = 0xffffffff;
            }
            else {
LAB_03069c1c:
              puVar78 = (uint *)plVar67[2];
              piVar70 = (int *)(lVar63 + 8);
              lVar63 = plVar67[3];
              puVar78[2] = 0;
              puVar78[3] = 0;
              *puVar78 = *puVar78 & 0xffff0000 | uVar57 & 0xffff;
              *puVar78 = *puVar78 & 0xffff | (int)lVar63 << 0x10;
            }
            plVar75 = local_260;
            *piVar70 = *piVar70 + uVar57;
            *plVar67 = 0;
            plVar67[2] = 0;
            FUN_032bf658(*(undefined8 *)(puVar69 + 0x12),uVar41,puVar68);
            plVar67 = *(long **)(puVar69 + 0x12);
            lVar63 = plVar67[3];
            iVar53 = *(int *)((long)plVar67 + 0x1c);
            iVar42 = *(int *)(*plVar67 + 8);
            *(long *)(puVar69 + 0x14) = plVar67[2];
            *(short *)(puVar69 + 0x16) = (short)lVar63;
            *(short *)((long)puVar69 + 0x5a) = (short)iVar53;
            puVar69[0x17] = -(iVar53 + iVar42);
            local_250[0] = 0;
            local_250[1] = 0;
            local_250[2] = 0;
            local_250[3] = 0;
            uVar74 = local_1e8;
          }
        }
        local_198[0] = 0xffffffff;
        local_1a0[0] = 0xffffffff;
        plVar67 = *(long **)(*(long *)(local_1d0 + 0x40) +
                             (ulong)(byte)*(uint *)((long)*pauVar71 + 8) * 8 + 0x13b8);
        (**(code **)(*plVar67 + 0x18))
                  (plVar67,local_1d0,local_1d8,pauVar71,plVar75,&local_f0,&local_f8,local_198,
                   local_1a0);
        lVar63 = local_2a0;
        plVar67 = local_2a8;
        uVar57 = local_2ac;
        goto LAB_030691fc;
      }
      local_1f8 = pauVar80;
      if (*(int *)(lVar63 + 0x18) < 0xe01) {
        puVar78 = (uint *)(*(long *)(lVar63 + 0x10) + (long)*(int *)(lVar63 + 0x18) + 0x20);
        uVar77 = uVar72;
      }
      else {
        puVar78 = (uint *)FUN_032bf82c(local_2a0);
        uVar77 = (ulong)*(byte *)((long)*pauVar71 + 9);
        lVar63 = local_2a0;
        plVar67 = local_2a8;
        uVar57 = local_2ac;
      }
      uVar74 = local_1e8;
      pauVar54 = pauVar71;
      pauVar80 = pauVar71;
      pauVar45 = pauVar71;
      puVar65 = puVar78;
      puVar49 = puVar78;
      puVar50 = puVar78;
      switch((int)uVar77) {
      case 0xe:
        pauVar80 = pauVar71 + 1;
        uVar41 = *(undefined8 *)*pauVar71;
        puVar49 = puVar78 + 4;
        *(undefined8 *)(puVar78 + 2) = *(undefined8 *)((long)*pauVar71 + 8);
        *(undefined8 *)puVar78 = uVar41;
      case 0xd:
        pauVar54 = pauVar80 + 1;
        uVar41 = *(undefined8 *)*pauVar80;
        puVar65 = puVar49 + 4;
        *(undefined8 *)(puVar49 + 2) = *(undefined8 *)((long)*pauVar80 + 8);
        *(undefined8 *)puVar49 = uVar41;
      case 0xc:
        pauVar45 = pauVar54 + 1;
        uVar41 = *(undefined8 *)*pauVar54;
        puVar50 = puVar65 + 4;
        *(undefined8 *)(puVar65 + 2) = *(undefined8 *)((long)*pauVar54 + 8);
        *(undefined8 *)puVar65 = uVar41;
      case 0xb:
        pauVar80 = pauVar45 + 1;
        uVar41 = *(undefined8 *)*pauVar45;
        puVar49 = puVar50 + 4;
        *(undefined8 *)(puVar50 + 2) = *(undefined8 *)((long)*pauVar45 + 8);
        *(undefined8 *)puVar50 = uVar41;
      case 10:
        pauVar54 = pauVar80 + 1;
        uVar41 = *(undefined8 *)*pauVar80;
        puVar65 = puVar49 + 4;
        *(undefined8 *)(puVar49 + 2) = *(undefined8 *)((long)*pauVar80 + 8);
        *(undefined8 *)puVar49 = uVar41;
      case 9:
        pauVar80 = pauVar54 + 1;
        uVar41 = *(undefined8 *)*pauVar54;
        puVar49 = puVar65 + 4;
        *(undefined8 *)(puVar65 + 2) = *(undefined8 *)((long)*pauVar54 + 8);
        *(undefined8 *)puVar65 = uVar41;
      case 8:
        pauVar54 = pauVar80 + 1;
        uVar41 = *(undefined8 *)*pauVar80;
        puVar65 = puVar49 + 4;
        *(undefined8 *)(puVar49 + 2) = *(undefined8 *)((long)*pauVar80 + 8);
        *(undefined8 *)puVar49 = uVar41;
      case 7:
        pauVar80 = pauVar54 + 1;
        uVar41 = *(undefined8 *)*pauVar54;
        puVar49 = puVar65 + 4;
        *(undefined8 *)(puVar65 + 2) = *(undefined8 *)((long)*pauVar54 + 8);
        *(undefined8 *)puVar65 = uVar41;
      case 6:
        pauVar54 = pauVar80 + 1;
        uVar41 = *(undefined8 *)*pauVar80;
        puVar65 = puVar49 + 4;
        *(undefined8 *)(puVar49 + 2) = *(undefined8 *)((long)*pauVar80 + 8);
        *(undefined8 *)puVar49 = uVar41;
      case 5:
        pauVar80 = pauVar54 + 1;
        uVar41 = *(undefined8 *)*pauVar54;
        puVar49 = puVar65 + 4;
        *(undefined8 *)(puVar65 + 2) = *(undefined8 *)((long)*pauVar54 + 8);
        *(undefined8 *)puVar65 = uVar41;
      case 4:
        pauVar54 = pauVar80 + 1;
        uVar41 = *(undefined8 *)*pauVar80;
        puVar65 = puVar49 + 4;
        *(undefined8 *)(puVar49 + 2) = *(undefined8 *)((long)*pauVar80 + 8);
        *(undefined8 *)puVar49 = uVar41;
      case 3:
        pauVar80 = pauVar54 + 1;
        uVar41 = *(undefined8 *)*pauVar54;
        puVar49 = puVar65 + 4;
        *(undefined8 *)(puVar65 + 2) = *(undefined8 *)((long)*pauVar54 + 8);
        *(undefined8 *)puVar65 = uVar41;
      case 2:
        pauVar54 = pauVar80 + 1;
        uVar41 = *(undefined8 *)*pauVar80;
        puVar65 = puVar49 + 4;
        *(undefined8 *)(puVar49 + 2) = *(undefined8 *)((long)*pauVar80 + 8);
        *(undefined8 *)puVar49 = uVar41;
      case 1:
        auVar90 = *pauVar54;
        *(long *)(puVar65 + 2) = auVar90._8_8_;
        *(long *)puVar65 = auVar90._0_8_;
      }
      local_f8 = puVar78[1];
      uVar77 = (ulong)local_f8 & 0xffffff;
      local_198[0] = *puVar78;
      if (uVar57 < (uint)uVar77) {
LAB_0306999c:
        uVar74 = uVar72;
        if (*(long *)(puVar69 + 0x18) != 0) {
          if (*(char *)((long)puVar69 + 0x7a) == '\0') {
            FUN_0301e778(puVar69,local_1d0,local_1d8);
          }
          else {
            uVar41 = **(undefined8 **)(puVar69 + 0x12);
            *(undefined4 *)(*(long *)(puVar69 + 0x18) + 8) = 0x7777;
            plVar67 = *(long **)(puVar69 + 0x12);
            uVar60 = *(uint *)((long)plVar67 + 0x1c);
            uVar57 = uVar60 + *(int *)(*plVar67 + 8) + puVar69[0x17];
            if (uVar57 != 0) {
              puVar49 = *(uint **)puVar68;
              puVar65 = (uint *)plVar67[2];
              if (puVar49 == puVar65) {
                uVar82 = *(ushort *)((long)puVar69 + 0x5a);
              }
              else {
                uVar82 = *(ushort *)((long)puVar69 + 0x5a);
                if ((uint)uVar82 == (*puVar49 & 0xffff)) {
                  puVar49 = *(uint **)(puVar49 + 2);
                  puVar69[0x16] = 0;
                  uVar82 = 0;
                  puVar65 = (uint *)plVar67[2];
                  uVar35 = 0;
                  if (puVar49 == (uint *)plVar67[2]) goto LAB_0306adac;
                }
                else {
                  uVar35 = uVar82;
                  if (puVar49 == puVar65) {
LAB_0306adac:
                    puVar49 = puVar65;
                    uVar60 = *(uint *)((long)plVar67 + 0x1c);
                    goto LAB_030699fc;
                  }
                }
                uVar82 = uVar35;
                uVar60 = *puVar49;
              }
LAB_030699fc:
              *(ushort *)((long)puVar69 + 0x5a) = (short)uVar60 - uVar82;
              *(uint **)(puVar69 + 0x14) = puVar49;
            }
            puVar69[0x17] = uVar57;
            uVar57 = *(uint *)((long)plVar67 + 0x1c);
            lVar63 = *plVar67;
            if (uVar57 == 0) {
              piVar70 = (int *)(lVar63 + 0x18);
              iVar53 = *piVar70;
              if (iVar53 < 2) goto LAB_03069a28;
              puVar76 = (undefined8 *)plVar67[1];
              iVar42 = *(int *)(puVar76 + 0xb);
              lVar55 = *(long *)(*(long *)(lVar63 + 0x10) + (long)(iVar53 + -2) * 8);
              lVar73 = puVar76[1];
              *(undefined8 *)(lVar73 + (long)iVar42 * 8) =
                   *(undefined8 *)(*(long *)(lVar63 + 0x10) + (long)(iVar53 + -1) * 8);
              *(int *)(puVar76 + 0xb) = iVar42 + 1;
              if (*(int *)((long)puVar76 + 0x5c) <= iVar42 + 1) {
                (**(code **)(*(long *)*puVar76 + 0x28))
                          ((long *)*puVar76,lVar73 + (long)(iVar42 + -5) * 8,6);
                *(int *)(puVar76 + 0xb) = iVar42 + -5;
              }
              *(undefined8 *)(lVar55 + 8) = 0;
              uVar57 = 0xffffffff;
            }
            else {
LAB_03069a28:
              puVar65 = (uint *)plVar67[2];
              piVar70 = (int *)(lVar63 + 8);
              lVar63 = plVar67[3];
              puVar65[2] = 0;
              puVar65[3] = 0;
              *puVar65 = *puVar65 & 0xffff0000 | uVar57 & 0xffff;
              *puVar65 = *puVar65 & 0xffff | (int)lVar63 << 0x10;
            }
            *piVar70 = *piVar70 + uVar57;
            *plVar67 = 0;
            plVar67[2] = 0;
            FUN_032bf658(*(undefined8 *)(puVar69 + 0x12),uVar41,puVar68);
            plVar67 = *(long **)(puVar69 + 0x12);
            lVar63 = plVar67[3];
            iVar53 = *(int *)((long)plVar67 + 0x1c);
            iVar42 = *(int *)(*plVar67 + 8);
            *(long *)(puVar69 + 0x14) = plVar67[2];
            *(short *)(puVar69 + 0x16) = (short)lVar63;
            *(short *)((long)puVar69 + 0x5a) = (short)iVar53;
            puVar69[0x17] = -(iVar53 + iVar42);
            local_250[0] = 0;
            local_250[1] = 0;
            local_250[2] = 0;
            local_250[3] = 0;
            uVar74 = local_1e8;
          }
        }
        lVar63 = *(long *)(local_1d0 + 0x40);
LAB_0306953c:
        local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
        local_1a0[0] = 0xffffffff;
        plVar67 = *(long **)(lVar63 + (ulong)(byte)puVar78[2] * 8 + 0x13b8);
        (**(code **)(*plVar67 + 0x18))
                  (plVar67,local_1d0,local_1d8,puVar78,local_260,&local_f8,local_198,&local_f0,
                   local_1a0);
        lVar63 = local_2a0;
        plVar67 = local_2a8;
        uVar66 = local_1f0;
        pauVar80 = local_1f8;
        uVar57 = local_2ac;
      }
      else {
        uVar46 = (ulong)local_198[0] & 0xffffff;
        if (uVar57 < (uint)uVar46) goto LAB_0306999c;
        pauVar80 = (undefined1 (*) [16])(local_230 + uVar77 * 0xc0);
        uVar2 = *(uint *)pauVar80[8];
        pauVar54 = (undefined1 (*) [16])(local_230 + uVar46 * 0xc0);
        uVar3 = *(uint *)pauVar54[8];
        lVar73 = local_1d8[3] + (ulong)uVar2 * 0x80;
        lVar55 = local_1d8[3] + (ulong)uVar3 * 0x80;
        Hint_Prefetch(lVar73,0,0,0);
        Hint_Prefetch(lVar73 + 0x40,0,0,0);
        Hint_Prefetch(lVar55,0,0,0);
        Hint_Prefetch(lVar55 + 0x40,0,0,0);
        uVar4 = *(uint *)(pauVar80[5] + 4);
        uVar82 = *(ushort *)(pauVar54[5] + 8) | *(ushort *)(pauVar80[5] + 8);
        uVar37 = (uint)uVar82;
        puVar65 = (uint *)(pauVar54[5] + 4);
        uVar56 = *puVar65 & uVar4;
        uVar4 = *puVar65 | uVar4;
        lVar51 = local_230;
        lVar79 = local_238;
        local_220 = pauVar71;
        local_210 = puVar78;
        if ((uVar82 & 0xfbfd) != 0) {
          lVar47 = local_230 + uVar77 * 0xc0;
          lVar48 = local_230 + uVar46 * 0xc0;
          iVar53 = -(uint)((float)*(undefined8 *)(lVar47 + 0x70) <=
                          (float)*(undefined8 *)(lVar48 + 0x60));
          iVar42 = -(uint)((float)((ulong)*(undefined8 *)(lVar47 + 0x70) >> 0x20) <=
                          (float)((ulong)*(undefined8 *)(lVar48 + 0x60) >> 0x20));
          iVar20 = -(uint)(*(float *)(lVar47 + 0x6c) <= (float)*(undefined8 *)(lVar48 + 0x68));
          iVar83 = -(uint)((float)*(undefined8 *)(lVar48 + 0x70) <= *(float *)(lVar47 + 0x60));
          iVar91 = -(uint)((float)((ulong)*(undefined8 *)(lVar48 + 0x70) >> 0x20) <=
                          *(float *)(lVar47 + 100));
          iVar93 = -(uint)((float)((ulong)*(undefined8 *)(lVar48 + 0x68) >> 0x20) <=
                          *(float *)(lVar47 + 0x68));
          uVar84 = CONCAT13((byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar53 >> 0x18),
                            CONCAT12((byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar53 >> 0x10),
                                     CONCAT11((byte)((uint)iVar83 >> 8) & (byte)((uint)iVar53 >> 8),
                                              (byte)iVar83 & (byte)iVar53)));
          auVar87._0_8_ =
               CONCAT17((byte)((uint)iVar91 >> 0x18) & (byte)((uint)iVar42 >> 0x18),
                        CONCAT16((byte)((uint)iVar91 >> 0x10) & (byte)((uint)iVar42 >> 0x10),
                                 CONCAT15((byte)((uint)iVar91 >> 8) & (byte)((uint)iVar42 >> 8),
                                          CONCAT14((byte)iVar91 & (byte)iVar42,uVar84))));
          auVar87[8] = (byte)iVar93 & (byte)iVar20;
          auVar87[9] = (byte)((uint)iVar93 >> 8) & (byte)((uint)iVar20 >> 8);
          auVar87[10] = (byte)((uint)iVar93 >> 0x10) & (byte)((uint)iVar20 >> 0x10);
          auVar87[0xb] = (byte)((uint)iVar93 >> 0x18) & (byte)((uint)iVar20 >> 0x18);
          if ((uVar60 & uVar37 & 1) == 0 &&
              (uVar84 & (uint)((ulong)auVar87._0_8_ >> 0x20) & auVar87._8_4_) != 0) {
            if ((uVar4 >> 3 & 1) == 0) {
              if (*(short *)((long)puVar78 + 10) < 0) {
                local_248 = puVar65;
                if (*(int *)(param_9 + 0x18) < 0xe01) {
                  local_210 = (uint *)(*(long *)(param_9 + 0x10) + (long)*(int *)(param_9 + 0x18) +
                                      0x20);
                }
                else {
                  local_210 = (uint *)FUN_032bf82c(param_9);
                }
                bVar81 = *(byte *)((long)*pauVar71 + 9);
                uVar60 = (uint)bVar81;
                puVar78 = local_210;
                pauVar45 = pauVar71;
                uVar57 = uVar60;
                if ((bVar81 + (bVar81 == 0) & 1) != 0) {
                  uVar57 = *(uint *)((long)*pauVar71 + 8);
                  uVar56 = *(uint *)((long)*pauVar71 + 0xc);
                  *(undefined8 *)local_210 = *(undefined8 *)*pauVar71;
                  local_210[2] = uVar57;
                  local_210[3] = uVar56;
                  puVar78 = local_210 + 4;
                  pauVar45 = pauVar71 + 1;
                  uVar57 = uVar60 - 1;
                }
                if (uVar60 != (bVar81 != 0)) {
                  do {
                    uVar57 = uVar57 - 2;
                    uVar60 = *(uint *)((long)*pauVar45 + 8);
                    uVar56 = *(uint *)((long)*pauVar45 + 0xc);
                    *(undefined8 *)puVar78 = *(undefined8 *)*pauVar45;
                    puVar78[2] = uVar60;
                    puVar78[3] = uVar56;
                    uVar60 = *(uint *)((long)pauVar45[1] + 8);
                    uVar56 = *(uint *)((long)pauVar45[1] + 0xc);
                    *(undefined8 *)(puVar78 + 4) = *(undefined8 *)pauVar45[1];
                    puVar78[6] = uVar60;
                    puVar78[7] = uVar56;
                    pauVar45 = pauVar45 + 2;
                    puVar78 = puVar78 + 8;
                  } while (0 < (int)uVar57);
                }
                lVar79 = 0;
                puVar65 = local_248;
                lVar63 = local_2a0;
                plVar67 = local_2a8;
                lVar51 = local_230;
                lVar47 = param_9;
                uVar57 = local_2ac;
                if ((uVar82 >> 6 & 1) != 0) goto LAB_03069d38;
                goto LAB_03068994;
              }
              lVar63 = *(long *)(local_1d0 + 0x40);
              if (((ulong)(byte)puVar78[2] == 2) && (2 < *(byte *)((long)puVar78 + 9))) {
                if (*(long *)(puVar78 + 8) != 0) {
                  *(byte *)((long)puVar78 + 0xf) = *(byte *)((long)puVar78 + 0xf) | 8;
                }
                puVar78[8] = 0;
                puVar78[9] = 0;
                *(undefined2 *)(puVar78 + 10) = 0;
              }
              plVar67 = *(long **)(lVar63 + (ulong)(byte)puVar78[2] * 8 + 0x13b8);
              if ((int)plVar67[1] != 0) {
                (**(code **)(*plVar67 + 0x30))(plVar67,puVar78,local_260,param_9 + 0x28);
              }
              bVar81 = *(byte *)((long)puVar78 + 9);
              uVar57 = (uint)bVar81;
              if ((int)(uVar57 * 0x10 + *(int *)(param_9 + 0x18)) < 0xee1) {
                puVar76 = (undefined8 *)
                          (*(long *)(param_9 + 0x10) + (long)*(int *)(param_9 + 0x18) + 0x20);
              }
              else {
                puVar76 = (undefined8 *)FUN_032bf82c(param_9);
              }
              uVar60 = (uint)bVar81;
              if (((uint)bVar81 + (uint)(uVar57 == 0) & 1) != 0) {
                uVar60 = puVar78[2];
                uVar56 = puVar78[3];
                *puVar76 = *(undefined8 *)puVar78;
                *(uint *)(puVar76 + 1) = uVar60;
                *(uint *)((long)puVar76 + 0xc) = uVar56;
                puVar76 = puVar76 + 2;
                puVar78 = puVar78 + 4;
                uVar60 = bVar81 - 1;
              }
              if ((bool)bVar81 != (uVar57 != 0)) {
                do {
                  uVar60 = uVar60 - 2;
                  uVar56 = puVar78[2];
                  uVar2 = puVar78[3];
                  *puVar76 = *(undefined8 *)puVar78;
                  *(uint *)(puVar76 + 1) = uVar56;
                  *(uint *)((long)puVar76 + 0xc) = uVar2;
                  uVar56 = puVar78[6];
                  uVar2 = puVar78[7];
                  puVar76[2] = *(undefined8 *)(puVar78 + 4);
                  *(uint *)(puVar76 + 3) = uVar56;
                  *(uint *)((long)puVar76 + 0x1c) = uVar2;
                  puVar78 = puVar78 + 8;
                  puVar76 = puVar76 + 4;
                } while (0 < (int)uVar60);
              }
              *(uint *)(param_9 + 0x18) = *(int *)(param_9 + 0x18) + uVar57 * 0x10;
              *(int *)(param_9 + 0x1c) = *(int *)(param_9 + 0x1c) + 1;
              lVar63 = local_2a0;
              plVar67 = local_2a8;
              uVar66 = local_1f0;
              pauVar80 = local_1f8;
              uVar57 = local_2ac;
            }
            else {
              if ((uVar56 >> 1 & 1) != 0) {
                if ((*(byte *)((long)*pauVar71 + 0xf) >> 1 & 1) != 0) {
                  puVar76 = *(undefined8 **)(local_1d0 + 0x4e0);
                  puVar78 = *(uint **)(*(long *)(local_278 + 0x10) +
                                       (long)*(int *)(local_278 + 0x18) * 8 + -8);
                  uVar60 = *puVar78;
                  lVar79 = local_278;
                  if (uVar60 >> 0x13 < 0x1db) {
                  }
                  else {
                    local_240 = CONCAT44(local_240._4_4_,uVar37);
                    puVar49 = puVar78;
                    do {
                      iVar53 = *(int *)(puVar76 + 0xb) + -1;
                      if (*(int *)(puVar76 + 0xb) < 1) {
                        local_228 = puVar76[1];
                        local_258 = CONCAT44(local_258._4_4_,uVar38);
                        local_248 = puVar65;
                        (**(code **)(*(long *)*puVar76 + 0x20))((long *)*puVar76,local_228,6);
                        *(undefined4 *)(puVar76 + 0xb) = 5;
                        puVar40 = (undefined8 *)(local_228 + 0x28);
                        puVar65 = local_248;
                        lVar79 = local_278;
                        lVar51 = local_230;
                        uVar38 = (uint)local_258;
                      }
                      else {
                        *(int *)(puVar76 + 0xb) = iVar53;
                        puVar40 = (undefined8 *)(puVar76[1] + (long)iVar53 * 8);
                      }
                      puVar78 = (uint *)*puVar40;
                      puVar78[4] = 0;
                      puVar78[5] = 0;
                      puVar78[6] = 0;
                      puVar78[7] = 0;
                      puVar78[0] = 0;
                      puVar78[1] = 0;
                      puVar78[2] = 0;
                      puVar78[3] = 0;
                      puVar78[1] = *(uint *)(lVar79 + 0x18);
                      iVar53 = *(int *)(lVar79 + 0x18);
                      uVar60 = *(uint *)(lVar79 + 0x1c);
                      uVar57 = iVar53 + 1;
                      if (iVar53 < (int)(uVar60 & 0x3fffffff)) {
                        lVar63 = *(long *)(lVar79 + 0x10);
                      }
                      else {
                        uVar41 = *(undefined8 *)(lVar79 + 0x10);
                        local_258 = CONCAT44(local_258._4_4_,uVar38);
                        local_248 = puVar65;
                        if (0x3ffffffe < iVar53) {
                          FUN_032bd0a8(uVar57);
                          uVar60 = *puVar1;
                        }
                        uVar38 = (uVar60 & 0x3fffffff) << 1;
                        if (0x3ffffffe < uVar38) {
                          uVar38 = 0x3fffffff;
                        }
                        uVar60 = uVar57;
                        if ((int)uVar57 <= (int)uVar38) {
                          uVar60 = uVar38;
                        }
                        lVar63 = FUN_032bd1d4(PTR_PTR_0434a080,uVar60,8,uVar41,iVar53,puVar1);
                        *(long *)(local_278 + 0x10) = lVar63;
                        iVar53 = *(int *)(local_278 + 0x18);
                        puVar65 = local_248;
                        lVar79 = local_278;
                        lVar51 = local_230;
                        uVar38 = (uint)local_258;
                      }
                      *(uint **)(lVar63 + (long)iVar53 * 8) = puVar78;
                      *(uint *)(lVar79 + 0x18) = uVar57;
                      *(uint **)(puVar49 + 2) = puVar78;
                      uVar60 = *puVar78;
                      lVar63 = local_2a0;
                      plVar67 = local_2a8;
                      puVar49 = puVar78;
                      uVar57 = local_2ac;
                      uVar37 = (uint)local_240;
                    } while (0x1da < uVar60 >> 0x13);
                  }
                  do {
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(puVar78,0x10);
                    if (bVar8) {
                      *puVar78 = *puVar78 + 0x80001;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  *(int *)(lVar79 + 8) = *(int *)(lVar79 + 8) + 1;
                  *(uint *)((long)puVar78 + (ulong)(uVar60 >> 0x10) + 0x20) = uVar2;
                  *(uint *)((long)puVar78 + (ulong)(uVar60 >> 0x10) + 0x24) = uVar3;
                }
                lVar79 = local_298;
              }
              pauVar71 = local_220;
              lVar47 = lVar63;
              if ((uVar37 >> 6 & 1) == 0) {
LAB_03068994:
                goto LAB_03068998;
              }
LAB_03069d38:
              local_248 = puVar65;
              if (plVar44 == (long *)0x0) {
                uVar66 = 0x24;
              }
              else {
                uVar66 = (**(code **)(*plVar44 + 0x48))(plVar44,pauVar80,pauVar54);
                lVar63 = local_2a0;
                plVar67 = local_2a8;
                lVar51 = local_230;
                uVar57 = local_2ac;
              }
              uVar60 = (uint)uVar66 >> 5;
              uVar56 = uVar60 & 7;
              if ((uVar56 == *(byte *)((long)local_210 + 0xe) >> 5) &&
                 ((((uint)*(byte *)((long)local_210 + 0xe) ^ (uint)uVar66) & 0x1c) == 0)) {
                pauVar71 = local_220;
                goto LAB_03068998;
              }
              local_258 = CONCAT44(local_258._4_4_,uVar38);
              if (*(long *)(puVar69 + 0x18) != 0) {
                if (*(char *)((long)puVar69 + 0x7a) == '\0') {
                  FUN_0301e778(puVar69,local_1d0,local_1d8);
                }
                else {
                  uVar41 = **(undefined8 **)(puVar69 + 0x12);
                  *(undefined4 *)(*(long *)(puVar69 + 0x18) + 8) = 0x7777;
                  plVar67 = *(long **)(puVar69 + 0x12);
                  uVar57 = *(uint *)((long)plVar67 + 0x1c);
                  uVar38 = uVar57 + *(int *)(*plVar67 + 8) + puVar69[0x17];
                  if (uVar38 != 0) {
                    puVar65 = *(uint **)puVar68;
                    puVar78 = (uint *)plVar67[2];
                    if (puVar65 == puVar78) {
                      uVar82 = *(ushort *)((long)puVar69 + 0x5a);
                    }
                    else {
                      uVar82 = *(ushort *)((long)puVar69 + 0x5a);
                      if ((uint)uVar82 == (*puVar65 & 0xffff)) {
                        puVar65 = *(uint **)(puVar65 + 2);
                        puVar69[0x16] = 0;
                        uVar82 = 0;
                        puVar78 = (uint *)plVar67[2];
                        uVar35 = 0;
                        if (puVar65 == (uint *)plVar67[2]) goto LAB_0306af0c;
                      }
                      else {
                        uVar35 = uVar82;
                        if (puVar65 == puVar78) {
LAB_0306af0c:
                          puVar65 = puVar78;
                          uVar57 = *(uint *)((long)plVar67 + 0x1c);
                          goto LAB_03069e48;
                        }
                      }
                      uVar82 = uVar35;
                      uVar57 = *puVar65;
                    }
LAB_03069e48:
                    *(ushort *)((long)puVar69 + 0x5a) = (short)uVar57 - uVar82;
                    *(uint **)(puVar69 + 0x14) = puVar65;
                  }
                  puVar69[0x17] = uVar38;
                  uVar38 = *(uint *)((long)plVar67 + 0x1c);
                  lVar63 = *plVar67;
                  local_240 = uVar66;
                  if (uVar38 == 0) {
                    piVar70 = (int *)(lVar63 + 0x18);
                    iVar53 = *piVar70;
                    if (iVar53 < 2) goto LAB_03069e74;
                    puVar76 = (undefined8 *)plVar67[1];
                    lVar48 = *(long *)(*(long *)(lVar63 + 0x10) + (long)(iVar53 + -2) * 8);
                    iVar42 = *(int *)(puVar76 + 0xb);
                    lVar51 = puVar76[1];
                    *(undefined8 *)(lVar51 + (long)iVar42 * 8) =
                         *(undefined8 *)(*(long *)(lVar63 + 0x10) + (long)(iVar53 + -1) * 8);
                    *(int *)(puVar76 + 0xb) = iVar42 + 1;
                    local_228 = lVar47;
                    if (*(int *)((long)puVar76 + 0x5c) <= iVar42 + 1) {
                      (**(code **)(*(long *)*puVar76 + 0x28))
                                ((long *)*puVar76,lVar51 + (long)(iVar42 + -5) * 8,6);
                      *(int *)(puVar76 + 0xb) = iVar42 + -5;
                    }
                    *(undefined8 *)(lVar48 + 8) = 0;
                    uVar38 = 0xffffffff;
                    lVar47 = local_228;
                  }
                  else {
LAB_03069e74:
                    puVar78 = (uint *)plVar67[2];
                    piVar70 = (int *)(lVar63 + 8);
                    lVar63 = plVar67[3];
                    puVar78[2] = 0;
                    puVar78[3] = 0;
                    *puVar78 = *puVar78 & 0xffff0000 | uVar38 & 0xffff;
                    *puVar78 = *puVar78 & 0xffff | (int)lVar63 << 0x10;
                  }
                  *piVar70 = *piVar70 + uVar38;
                  *plVar67 = 0;
                  plVar67[2] = 0;
                  FUN_032bf658(*(undefined8 *)(puVar69 + 0x12),uVar41,puVar68);
                  plVar67 = *(long **)(puVar69 + 0x12);
                  lVar63 = plVar67[3];
                  iVar53 = *(int *)((long)plVar67 + 0x1c);
                  iVar42 = *(int *)(*plVar67 + 8);
                  *(long *)(puVar69 + 0x14) = plVar67[2];
                  *(short *)(puVar69 + 0x16) = (short)lVar63;
                  *(short *)((long)puVar69 + 0x5a) = (short)iVar53;
                  puVar69[0x17] = -(iVar53 + iVar42);
                  local_250[0] = 0;
                  local_250[1] = 0;
                  local_250[2] = 0;
                  local_250[3] = 0;
                  uVar66 = local_240;
                }
              }
              uVar38 = (uint)uVar66;
              local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
              local_1a0[0] = 0xffffffff;
              plVar67 = *(long **)(*(long *)(local_1d0 + 0x40) + (ulong)(byte)local_210[2] * 8 +
                                  0x13b8);
              (**(code **)(*plVar67 + 0x18))
                        (plVar67,local_1d0,local_1d8,local_210,local_260,&local_f8,local_198,
                         &local_f0,local_1a0);
              lVar48 = local_238;
              local_138 = *(long *)(local_230 + uVar77 * 0xc0 + 0x78);
              if ((local_138 == 0) || (*(char *)(local_138 + 0x18) != '\x15')) {
                local_140 = 0xffffffff;
              }
              else {
                plVar67 = (long *)(local_138 + (ulong)uVar56 * 8 + 0x48);
                local_138 = *plVar67;
                if (local_138 == 0) {
                  local_138 = 0;
                }
                else {
                  local_138 = local_138 + (long)plVar67;
                }
                local_140 = uVar60 << 0x1d | 0x1fffffff;
              }
              local_170 = *(long *)(local_230 + uVar46 * 0xc0 + 0x78);
              if ((local_170 == 0) || (*(char *)(local_170 + 0x18) != '\x15')) {
                local_178 = 0xffffffff;
              }
              else {
                plVar67 = (long *)(local_170 + (ulong)(uVar38 >> 2 & 7) * 8 + 0x48);
                local_170 = *plVar67;
                if (local_170 == 0) {
                  local_170 = 0;
                }
                else {
                  local_170 = local_170 + (long)plVar67;
                }
                local_178 = (uVar38 >> 2) << 0x1d | 0x1fffffff;
              }
              local_d8 = *(long *)(local_1d0 + 8);
              local_f0 = *(undefined8 *)(local_d8 + 0x8a8);
              local_e8 = *(undefined8 *)(local_d8 + 0x898);
              local_e0 = *(long *)(local_d8 + 0x508);
              local_d8 = local_d8 + 0x530;
              bVar6 = (byte)uVar66;
              local_d0 = (float)CONCAT31(local_d0._1_3_,1);
              bVar5 = *(byte *)(local_138 + 0x19);
              bVar81 = *(byte *)(local_170 + 0x19);
              uVar57 = (uint)bVar81;
              uVar34 = CONCAT14(bVar81,(uint)bVar5);
              if (((*(uint *)(pauVar80[5] + 4) & 1) == 0) &&
                 (((uint)uVar77 <= (uint)uVar46 || ((*local_248 >> 1 & 1) == 0)))) {
                uVar57 = (uint)bVar5;
                uStack_c8 = pauVar80;
                local_c0 = pauVar54;
                local_b0 = local_138;
                uStack_a8 = local_170;
                bVar5 = bVar81;
              }
              else {
                bVar6 = (byte)(uVar38 >> 3) & 0x1c | bVar6 & 3 | (byte)((uVar38 >> 2 & 7) << 5);
                uVar34 = CONCAT14(bVar5,uVar57);
                uStack_c8 = pauVar54;
                local_c0 = pauVar80;
                local_b0 = local_170;
                uStack_a8 = local_138;
              }
              local_a0 = (ulong)uVar34;
              fStack_b8 = (float)CONCAT31(fStack_b8._1_3_,bVar6);
              local_190 = pauVar54;
              local_158 = pauVar80;
              puVar78 = (uint *)(**(code **)(local_e0 + (ulong)uVar57 * 0x68 + (ulong)bVar5 * 8 + 8)
                                )(&local_f0,local_2a0);
              if (puVar78 != (uint *)0x0) {
                if (*(byte *)((long)puVar78 + 9) != 0) {
                  *(uint *)(local_2a0 + 0x18) =
                       *(int *)(local_2a0 + 0x18) + (uint)*(byte *)((long)puVar78 + 9) * -0x10;
                  *(int *)(local_2a0 + 0x1c) = *(int *)(local_2a0 + 0x1c) + -1;
                }
                *(undefined2 *)(puVar78 + 3) = 0;
                lVar51 = local_230;
                local_228 = lVar47;
                goto LAB_030689a4;
              }
              lVar63 = local_2a0;
              plVar67 = local_2a8;
              uVar66 = local_1f0;
              pauVar71 = local_220;
              uVar74 = local_1e8;
              pauVar80 = local_1f8;
              uVar57 = local_2ac;
              uVar38 = (uint)local_258;
            }
            goto LAB_030691fc;
          }
          if (*(long *)(puVar69 + 0x18) != 0) {
            if (*(char *)((long)puVar69 + 0x7a) == '\0') {
              FUN_0301e778(puVar69,local_1d0,local_1d8);
            }
            else {
              uVar41 = **(undefined8 **)(puVar69 + 0x12);
              *(undefined4 *)(*(long *)(puVar69 + 0x18) + 8) = 0x7777;
              plVar67 = *(long **)(puVar69 + 0x12);
              uVar60 = *(uint *)((long)plVar67 + 0x1c);
              uVar57 = uVar60 + *(int *)(*plVar67 + 8) + puVar69[0x17];
              if (uVar57 != 0) {
                puVar65 = *(uint **)puVar68;
                puVar78 = (uint *)plVar67[2];
                if (puVar65 == puVar78) {
                  uVar82 = *(ushort *)((long)puVar69 + 0x5a);
                }
                else {
                  uVar82 = *(ushort *)((long)puVar69 + 0x5a);
                  if ((uint)uVar82 == (*puVar65 & 0xffff)) {
                    puVar65 = *(uint **)(puVar65 + 2);
                    puVar69[0x16] = 0;
                    uVar82 = 0;
                    puVar78 = (uint *)plVar67[2];
                    uVar35 = 0;
                    if (puVar65 == (uint *)plVar67[2]) goto LAB_0306aacc;
                  }
                  else {
                    uVar35 = uVar82;
                    if (puVar65 == puVar78) {
LAB_0306aacc:
                      puVar65 = puVar78;
                      uVar60 = *(uint *)((long)plVar67 + 0x1c);
                      goto LAB_03069474;
                    }
                  }
                  uVar82 = uVar35;
                  uVar60 = *puVar65;
                }
LAB_03069474:
                *(ushort *)((long)puVar69 + 0x5a) = (short)uVar60 - uVar82;
                *(uint **)(puVar69 + 0x14) = puVar65;
              }
              puVar69[0x17] = uVar57;
              uVar57 = *(uint *)((long)plVar67 + 0x1c);
              lVar63 = *plVar67;
              if (uVar57 == 0) {
                piVar70 = (int *)(lVar63 + 0x18);
                iVar53 = *piVar70;
                if (iVar53 < 2) goto LAB_030694a0;
                puVar76 = (undefined8 *)plVar67[1];
                iVar42 = *(int *)(puVar76 + 0xb);
                lVar55 = *(long *)(*(long *)(lVar63 + 0x10) + (long)(iVar53 + -2) * 8);
                lVar73 = puVar76[1];
                *(undefined8 *)(lVar73 + (long)iVar42 * 8) =
                     *(undefined8 *)(*(long *)(lVar63 + 0x10) + (long)(iVar53 + -1) * 8);
                *(int *)(puVar76 + 0xb) = iVar42 + 1;
                if (*(int *)((long)puVar76 + 0x5c) <= iVar42 + 1) {
                  (**(code **)(*(long *)*puVar76 + 0x28))
                            ((long *)*puVar76,lVar73 + (long)(iVar42 + -5) * 8,6);
                  *(int *)(puVar76 + 0xb) = iVar42 + -5;
                }
                *(undefined8 *)(lVar55 + 8) = 0;
                uVar57 = 0xffffffff;
              }
              else {
LAB_030694a0:
                puVar78 = (uint *)plVar67[2];
                piVar70 = (int *)(lVar63 + 8);
                lVar63 = plVar67[3];
                puVar78[2] = 0;
                puVar78[3] = 0;
                *puVar78 = *puVar78 & 0xffff0000 | uVar57 & 0xffff;
                *puVar78 = *puVar78 & 0xffff | (int)lVar63 << 0x10;
              }
              *piVar70 = *piVar70 + uVar57;
              *plVar67 = 0;
              plVar67[2] = 0;
              FUN_032bf658(*(undefined8 *)(puVar69 + 0x12),uVar41,puVar68);
              plVar67 = *(long **)(puVar69 + 0x12);
              lVar63 = plVar67[3];
              iVar53 = *(int *)((long)plVar67 + 0x1c);
              iVar42 = *(int *)(*plVar67 + 8);
              *(long *)(puVar69 + 0x14) = plVar67[2];
              *(short *)(puVar69 + 0x16) = (short)lVar63;
              *(short *)((long)puVar69 + 0x5a) = (short)iVar53;
              puVar69[0x17] = -(iVar53 + iVar42);
              local_250[0] = 0;
              local_250[1] = 0;
              local_250[2] = 0;
              local_250[3] = 0;
              uVar74 = local_1e8;
            }
          }
          lVar63 = *(long *)(local_1d0 + 0x40);
          puVar78 = local_210;
          goto LAB_0306953c;
        }
        if ((uVar56 >> 1 & 1) == 0) {
          lVar47 = lVar63;
          goto LAB_03068994;
        }
        if ((*(byte *)((long)puVar78 + 0xf) >> 1 & 1) != 0) {
          puVar76 = *(undefined8 **)(local_1d0 + 0x4e0);
          puVar78 = *(uint **)(*(long *)(local_278 + 0x10) + (long)*(int *)(local_278 + 0x18) * 8 +
                              -8);
          uVar60 = *puVar78;
          if (uVar60 >> 0x13 < 0x1db) {
          }
          else {
            local_258 = CONCAT44(local_258._4_4_,uVar38);
            local_240 = CONCAT44(local_240._4_4_,uVar37);
            puVar65 = puVar78;
            do {
              iVar53 = *(int *)(puVar76 + 0xb) + -1;
              if (*(int *)(puVar76 + 0xb) < 1) {
                lVar63 = puVar76[1];
                (**(code **)(*(long *)*puVar76 + 0x20))((long *)*puVar76,lVar63,6);
                *(undefined4 *)(puVar76 + 0xb) = 5;
                puVar40 = (undefined8 *)(lVar63 + 0x28);
              }
              else {
                *(int *)(puVar76 + 0xb) = iVar53;
                puVar40 = (undefined8 *)(puVar76[1] + (long)iVar53 * 8);
              }
              puVar78 = (uint *)*puVar40;
              puVar78[4] = 0;
              puVar78[5] = 0;
              puVar78[6] = 0;
              puVar78[7] = 0;
              puVar78[0] = 0;
              puVar78[1] = 0;
              puVar78[2] = 0;
              puVar78[3] = 0;
              puVar78[1] = *(uint *)(local_278 + 0x18);
              iVar53 = *(int *)(local_278 + 0x18);
              uVar57 = *(uint *)(local_278 + 0x1c);
              uVar38 = iVar53 + 1;
              if (iVar53 < (int)(uVar57 & 0x3fffffff)) {
                lVar63 = *(long *)(local_278 + 0x10);
              }
              else {
                uVar41 = *(undefined8 *)(local_278 + 0x10);
                if (0x3ffffffe < iVar53) {
                  FUN_032bd0a8(uVar38);
                  uVar57 = *puVar1;
                }
                uVar57 = (uVar57 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar57) {
                  uVar57 = 0x3fffffff;
                }
                uVar60 = uVar38;
                if ((int)uVar38 <= (int)uVar57) {
                  uVar60 = uVar57;
                }
                lVar63 = FUN_032bd1d4(PTR_PTR_0434a080,uVar60,8,uVar41,iVar53,puVar1);
                *(long *)(local_278 + 0x10) = lVar63;
                iVar53 = *(int *)(local_278 + 0x18);
              }
              *(uint **)(lVar63 + (long)iVar53 * 8) = puVar78;
              *(uint *)(local_278 + 0x18) = uVar38;
              *(uint **)(puVar65 + 2) = puVar78;
              uVar60 = *puVar78;
              lVar63 = local_2a0;
              plVar67 = local_2a8;
              puVar65 = puVar78;
              uVar57 = local_2ac;
              uVar37 = (uint)local_240;
              uVar38 = (uint)local_258;
            } while (0x1da < uVar60 >> 0x13);
          }
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar78,0x10);
            if (bVar8) {
              *puVar78 = *puVar78 + 0x80001;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          *(int *)(local_278 + 8) = *(int *)(local_278 + 8) + 1;
          *(uint *)((long)puVar78 + (ulong)(uVar60 >> 0x10) + 0x20) = uVar2;
          *(uint *)((long)puVar78 + (ulong)(uVar60 >> 0x10) + 0x24) = uVar3;
        }
        lVar51 = local_230;
        pauVar71 = local_220;
        lVar47 = lVar63;
        lVar79 = local_298;
LAB_03068998:
        lVar48 = local_238;
        puVar78 = local_210;
        local_228 = lVar47;
        if ((ushort)local_210[3] == 0) {
LAB_030689a4:
          puVar65 = (uint *)(ulong)*(ushort *)(lVar51 + uVar77 * 0xc0 + 0x8a);
          lVar63 = *(long *)(local_1d0 + 0x20);
          uVar66 = (ulong)*(ushort *)(lVar51 + uVar46 * 0xc0 + 0x8a);
          if (*(long *)local_250 != 0) {
            local_258 = lVar63;
            local_248 = puVar65;
            local_240 = uVar66;
            if (*(char *)((long)puVar69 + 0x7a) == '\0') {
              FUN_0301e778(puVar69,local_1d0,local_1d8);
              lVar63 = local_258;
              uVar66 = local_240;
              puVar65 = local_248;
              lVar51 = local_230;
              lVar48 = local_238;
            }
            else {
              uVar41 = **(undefined8 **)(puVar69 + 0x12);
              *(undefined4 *)(*(long *)local_250 + 8) = 0x7777;
              plVar67 = *(long **)(puVar69 + 0x12);
              uVar57 = *(uint *)((long)plVar67 + 0x1c);
              uVar38 = uVar57 + *(int *)(*plVar67 + 8) + puVar69[0x17];
              if (uVar38 != 0) {
                puVar49 = *(uint **)puVar68;
                puVar65 = (uint *)plVar67[2];
                if (puVar49 == puVar65) {
                  uVar82 = *(ushort *)((long)puVar69 + 0x5a);
                }
                else {
                  uVar82 = *(ushort *)((long)puVar69 + 0x5a);
                  if ((uint)uVar82 == (*puVar49 & 0xffff)) {
                    puVar49 = *(uint **)(puVar49 + 2);
                    puVar69[0x16] = 0;
                    uVar82 = 0;
                    puVar65 = (uint *)plVar67[2];
                    if (puVar49 == (uint *)plVar67[2]) goto LAB_0306a318;
                  }
                  else if (puVar49 == puVar65) {
LAB_0306a318:
                    puVar49 = puVar65;
                    uVar57 = *(uint *)((long)plVar67 + 0x1c);
                    goto LAB_03068a20;
                  }
                  uVar57 = *puVar49;
                }
LAB_03068a20:
                *(ushort *)((long)puVar69 + 0x5a) = (short)uVar57 - uVar82;
                *(uint **)(puVar69 + 0x14) = puVar49;
              }
              puVar69[0x17] = uVar38;
              uVar38 = *(uint *)((long)plVar67 + 0x1c);
              lVar63 = *plVar67;
              if (uVar38 == 0) {
                piVar70 = (int *)(lVar63 + 0x18);
                iVar53 = *piVar70;
                if (iVar53 < 2) goto LAB_03068a58;
                puVar76 = (undefined8 *)plVar67[1];
                iVar42 = *(int *)(puVar76 + 0xb);
                lVar47 = *(long *)(*(long *)(lVar63 + 0x10) + (long)(iVar53 + -2) * 8);
                lVar51 = puVar76[1];
                *(undefined8 *)(lVar51 + (long)iVar42 * 8) =
                     *(undefined8 *)(*(long *)(lVar63 + 0x10) + (long)(iVar53 + -1) * 8);
                *(int *)(puVar76 + 0xb) = iVar42 + 1;
                if (*(int *)((long)puVar76 + 0x5c) <= iVar42 + 1) {
                  local_210 = puVar78;
                  (**(code **)(*(long *)*puVar76 + 0x28))
                            ((long *)*puVar76,lVar51 + (long)(iVar42 + -5) * 8,6);
                  *(int *)(puVar76 + 0xb) = iVar42 + -5;
                  puVar78 = local_210;
                }
                *(undefined8 *)(lVar47 + 8) = 0;
                uVar38 = 0xffffffff;
              }
              else {
LAB_03068a58:
                puVar65 = (uint *)plVar67[2];
                lVar51 = plVar67[3];
                puVar65[2] = 0;
                puVar65[3] = 0;
                *puVar65 = *puVar65 & 0xffff0000 | uVar38 & 0xffff;
                piVar70 = (int *)(lVar63 + 8);
                *puVar65 = *puVar65 & 0xffff | (int)lVar51 << 0x10;
              }
              *piVar70 = *piVar70 + uVar38;
              *plVar67 = 0;
              plVar67[2] = 0;
              FUN_032bf658(*(undefined8 *)(puVar69 + 0x12),uVar41,puVar68);
              plVar67 = *(long **)(puVar69 + 0x12);
              lVar63 = plVar67[3];
              iVar53 = *(int *)((long)plVar67 + 0x1c);
              iVar42 = *(int *)(*plVar67 + 8);
              *(long *)(puVar69 + 0x14) = plVar67[2];
              *(short *)(puVar69 + 0x16) = (short)lVar63;
              *(short *)((long)puVar69 + 0x5a) = (short)iVar53;
              puVar69[0x17] = -(iVar53 + iVar42);
              local_250[0] = 0;
              local_250[1] = 0;
              local_250[2] = 0;
              local_250[3] = 0;
              lVar63 = local_258;
              uVar66 = local_240;
              puVar65 = local_248;
              lVar51 = local_230;
              lVar48 = local_238;
            }
          }
          *(long *)(puVar69 + 6) = lVar79;
          *(bool *)((long)puVar69 + 5) = lVar79 == lVar48;
          ppuVar33 = &local_2c0;
          if (lVar79 != lVar48) {
            ppuVar33 = &local_2c8;
          }
          plVar67 = *(long **)*ppuVar33;
          *(long **)(puVar69 + 0x12) = plVar67;
          if ((puVar69[2] & uVar4) == 0) {
            lVar51 = local_230;
            if (lVar79 == lVar48) {
              *(bool *)(puVar69 + 0x1e) = (*(ushort *)((long)puVar78 + 10) & 0x90) != 0;
              lVar48 = local_238;
              goto LAB_030692c4;
            }
            *(undefined1 *)(puVar69 + 0x1e) = 0;
            bVar81 = 0;
            lVar48 = local_238;
          }
          else {
            *(undefined1 *)(puVar69 + 0x1e) = 1;
            if (lVar79 == lVar48) {
LAB_030692c4:
              bVar81 = *(byte *)((long)puVar78 + 10) >> 4 & 1;
            }
            else {
              bVar81 = 0;
            }
          }
          *(byte *)((long)puVar69 + 0x79) = bVar81;
          iVar42 = *(int *)(*plVar67 + 8);
          lVar47 = plVar67[3];
          iVar53 = *(int *)((long)plVar67 + 0x1c);
          *(long *)(puVar69 + 0x14) = plVar67[2];
          *(short *)(puVar69 + 0x16) = (short)lVar47;
          *(short *)((long)puVar69 + 0x5a) = (short)iVar53;
          puVar69[0x17] = -(iVar53 + iVar42);
          if ((int)plVar67[3] < 0xdd1) {
            lVar47 = plVar67[2] + (long)(int)plVar67[3] + 0x20;
          }
          else {
            local_248 = puVar65;
            local_240 = uVar66;
            lVar47 = FUN_032bf82c();
            plVar67 = *(long **)(puVar69 + 0x12);
            uVar66 = local_240;
            puVar65 = local_248;
            lVar51 = local_230;
            lVar48 = local_238;
          }
          *(long *)(puVar69 + 0x18) = lVar47;
          *(int *)(plVar67 + 3) = (int)plVar67[3] + 0x10;
          *(int *)((long)plVar67 + 0x1c) = *(int *)((long)plVar67 + 0x1c) + 1;
          *(uint *)(*(long *)(puVar69 + 0x18) + 4) = puVar78[1];
          **(uint **)(puVar69 + 0x18) = *puVar78;
          *(undefined4 *)(*(long *)(puVar69 + 0x18) + 8) = 0;
          *(undefined1 *)(*(long *)(puVar69 + 0x18) + 0xe) = 0;
          *(undefined2 *)(*(long *)(puVar69 + 0x18) + 0xc) = *(undefined2 *)((long)puVar78 + 10);
          puVar69[0x1c] = 0;
          if ((char)puVar69[1] != '\0') {
            plVar67 = *(long **)(*(long *)(local_1d0 + 8) + 0x658);
            local_248 = puVar65;
            local_240 = uVar66;
            (**(code **)(*plVar67 + 0x60))
                      (plVar67,lVar48,
                       *(long *)(local_1d0 + 0x500) + ((ulong)*puVar69 & 0xffffff) * 0x20);
            *(undefined1 *)(puVar69 + 1) = 0;
            uVar66 = local_240;
            puVar65 = local_248;
            lVar51 = local_230;
            lVar48 = local_238;
          }
          uVar38 = puVar78[1];
          if (*puVar69 != uVar38) {
            if (lVar79 == lVar48) {
              plVar67 = *(long **)(*(long *)(local_1d0 + 8) + 0x658);
              local_258 = lVar63;
              local_248 = puVar65;
              local_240 = uVar66;
              (**(code **)(*plVar67 + 0x58))
                        (plVar67,lVar48,
                         *(long *)(local_1d0 + 0x500) + ((ulong)uVar38 & 0xffffff) * 0x20);
              *(undefined1 *)(puVar69 + 1) = 1;
              uVar38 = puVar78[1];
              lVar63 = local_258;
              uVar66 = local_240;
              puVar65 = local_248;
              lVar51 = local_230;
            }
          }
          *puVar69 = uVar38;
          puVar69[0x1d] = uVar4;
          if ((local_2b8 != 0) && (lVar39 != 0)) {
            lVar47 = lVar51 + uVar77 * 0xc0;
            uVar41 = *(undefined8 *)(lVar47 + 0x68);
            uVar105 = (undefined1)uVar41;
            uVar106 = (undefined1)((ulong)uVar41 >> 8);
            uVar107 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar108 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar109 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar110 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar111 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar112 = (undefined1)((ulong)uVar41 >> 0x38);
            puVar49 = *(uint **)(lVar47 + 0x60);
            uVar97 = SUB81(puVar49,0);
            uVar98 = (undefined1)((ulong)puVar49 >> 8);
            uVar99 = (undefined1)((ulong)puVar49 >> 0x10);
            uVar100 = (undefined1)((ulong)puVar49 >> 0x18);
            uVar101 = (undefined1)((ulong)puVar49 >> 0x20);
            uVar102 = (undefined1)((ulong)puVar49 >> 0x28);
            uVar103 = (undefined1)((ulong)puVar49 >> 0x30);
            uVar104 = (undefined1)((ulong)puVar49 >> 0x38);
            uVar86 = *(undefined8 *)(lVar47 + 0x70);
            lVar47 = lVar51 + uVar46 * 0xc0;
            auVar90 = *(undefined1 (*) [16])(lVar47 + 0x60);
            auVar116._0_8_ = *(undefined8 *)(lVar47 + 0x70);
            puVar76 = *(undefined8 **)(lVar39 + 8);
            uVar72 = (ulong)((long)puVar76 + 0x17) & 0xfffffffffffffff8;
            if (*(ulong *)(lVar39 + 0x10) < uVar72) {
joined_r0x0306acc8:
              if (puVar76 == (undefined8 *)0x0) goto LAB_03068c18;
            }
            else {
              *(ulong *)(lVar39 + 8) = uVar72;
              if (puVar76 != (undefined8 *)0x0) {
                *puVar76 = &DAT_0398be87;
                local_258 = lVar63;
                local_248 = puVar65;
                local_240 = uVar66;
                local_210 = puVar49;
                uStack_208 = uVar41;
                uVar41 = nn::os::GetSystemTick();
                uVar105 = (undefined1)uStack_208;
                uVar106 = (undefined1)((ulong)uStack_208 >> 8);
                uVar107 = (undefined1)((ulong)uStack_208 >> 0x10);
                uVar108 = (undefined1)((ulong)uStack_208 >> 0x18);
                uVar109 = (undefined1)((ulong)uStack_208 >> 0x20);
                uVar110 = (undefined1)((ulong)uStack_208 >> 0x28);
                uVar111 = (undefined1)((ulong)uStack_208 >> 0x30);
                uVar112 = (undefined1)((ulong)uStack_208 >> 0x38);
                uVar97 = SUB81(local_210,0);
                uVar98 = (undefined1)((ulong)local_210 >> 8);
                uVar99 = (undefined1)((ulong)local_210 >> 0x10);
                uVar100 = (undefined1)((ulong)local_210 >> 0x18);
                uVar101 = (undefined1)((ulong)local_210 >> 0x20);
                uVar102 = (undefined1)((ulong)local_210 >> 0x28);
                uVar103 = (undefined1)((ulong)local_210 >> 0x30);
                uVar104 = (undefined1)((ulong)local_210 >> 0x38);
                puVar76[1] = uVar41;
                puVar76 = *(undefined8 **)(lVar39 + 8);
                lVar63 = local_258;
                puVar65 = local_248;
                uVar66 = local_240;
                lVar51 = local_230;
                goto joined_r0x0306acc8;
              }
              puVar76 = (undefined8 *)&DAT_00000010;
            }
            puVar40 = (undefined8 *)((ulong)((long)puVar76 + 0x13) & 0xfffffffffffffffc);
            uVar72 = (long)puVar40 + 0x1fU & 0xfffffffffffffff8;
            if (uVar72 <= *(ulong *)(lVar39 + 0x10)) {
              *(ulong *)(lVar39 + 8) = uVar72;
              *puVar76 = &DAT_038f7b98;
              puVar76[1] = &DAT_04356660;
              if (puVar40 != (undefined8 *)0x0) {
                auVar31[9] = uVar110;
                auVar31[8] = uVar109;
                auVar31[10] = uVar111;
                auVar31[0xb] = uVar112;
                auVar116._8_4_ = auVar90._12_4_;
                auVar116._12_4_ = 0;
                auVar31._0_8_ = uVar86;
                auVar31._12_4_ = 0;
                auVar114 = NEON_fmax(auVar31,auVar116,4);
                *puVar40 = auVar114._0_8_;
                *(int *)(puVar40 + 1) = auVar114._8_4_;
                auVar19[1] = uVar98;
                auVar19[0] = uVar97;
                auVar19[2] = uVar99;
                auVar19[3] = uVar100;
                auVar19[4] = uVar101;
                auVar19[5] = uVar102;
                auVar19[6] = uVar103;
                auVar19[7] = uVar104;
                auVar19[8] = uVar105;
                auVar19[9] = uVar106;
                auVar19[10] = uVar107;
                auVar19[0xb] = uVar108;
                auVar19[0xc] = uVar109;
                auVar19[0xd] = uVar110;
                auVar19[0xe] = uVar111;
                auVar19[0xf] = uVar112;
                auVar90 = NEON_fmin(auVar19,auVar90,4);
                *(long *)((long)puVar40 + 0xc) = auVar90._0_8_;
                *(int *)((long)puVar40 + 0x14) = auVar90._8_4_;
              }
            }
          }
LAB_03068c18:
          uVar74 = local_1e8;
          lVar47 = local_228;
          Hint_Prefetch(pauVar80 + 8,0,0,0);
          local_148 = lVar63 + (long)puVar65 * 0x50;
          Hint_Prefetch(pauVar80 + 0xc,0,0,0);
          Hint_Prefetch(pauVar54 + 8,0,0,0);
          Hint_Prefetch(pauVar54 + 0xc,0,0,0);
          bVar81 = *(byte *)((long)puVar78 + 0xe);
          local_138 = *(long *)(lVar51 + uVar77 * 0xc0 + 0x78);
          if ((local_138 == 0) || (*(char *)(local_138 + 0x18) != '\x15')) {
            local_140 = 0xffffffff;
          }
          else {
            plVar67 = (long *)(local_138 + (ulong)(bVar81 >> 5) * 8 + 0x48);
            local_138 = *plVar67;
            if (local_138 == 0) {
              local_138 = 0;
            }
            else {
              local_138 = local_138 + (long)plVar67;
            }
            local_140 = (uint)(bVar81 >> 5) << 0x1d | 0x1fffffff;
            lVar51 = local_230;
          }
          local_180 = lVar63 + uVar66 * 0x50;
          local_170 = *(long *)(lVar51 + uVar46 * 0xc0 + 0x78);
          if ((local_170 == 0) || (*(char *)(local_170 + 0x18) != '\x15')) {
            local_178 = 0xffffffff;
          }
          else {
            plVar67 = (long *)(local_170 + (ulong)(bVar81 >> 2 & 7) * 8 + 0x48);
            local_170 = *plVar67;
            if (local_170 == 0) {
              local_170 = 0;
            }
            else {
              local_170 = local_170 + (long)plVar67;
            }
            local_178 = (uint)(bVar81 >> 2) << 0x1d | 0x1fffffff;
          }
          local_188 = lVar55;
          local_160 = pauVar54;
          local_150 = lVar73;
          local_128 = pauVar80;
          if ((ulong)(byte)puVar78[2] == 2) {
            lVar63 = *(long *)(*(long *)(local_1d0 + 0x40) + 0x13c8);
            iVar53 = *(int *)(local_1e0 + 0x738);
            local_190 = pauVar54;
            local_168 = local_170;
            local_158 = pauVar80;
            local_130 = local_138;
            if (iVar53 != 0) {
              local_330 = nn::os::GetSystemTick();
            }
            if ((((2 < *(byte *)((long)puVar78 + 9)) && (*(long *)(puVar69 + 6) != 0)) &&
                (*(long *)(puVar78 + 8) != 0)) && ((*(byte *)((long)puVar78 + 0xb) >> 2 & 1) != 0))
            {
              uVar57 = (uint)*(byte *)((long)puVar78 + 0x96) * 0x100;
              uVar38 = (uint)(ushort)puVar78[0x25];
              if (uVar57 <= (ushort)puVar78[0x25]) {
                uVar38 = uVar57;
              }
              iVar42 = uVar38 - ((uint)*(ushort *)(local_190[5] + 10) +
                                (uint)*(ushort *)(local_158[5] + 10));
              if (iVar42 < 1) {
                *(int *)(local_1e0 + 0x30) = *(int *)(local_1e0 + 0x30) + 1;
              }
              else {
                uVar82 = *(ushort *)(local_190[5] + 8) | *(ushort *)(local_158[5] + 8);
                if ((uVar82 >> 2 & 1) == 0) {
                  if (((uVar82 >> 10 & 1) != 0) &&
                     (((short)puVar78[0xf] != 0x3f80 ||
                      ((*(byte *)((long)puVar78 + 0x2e) >> 5 & 1) != 0)))) {
                    uVar82 = *(ushort *)((long)puVar78 + 0x86);
                    uVar41 = *(undefined8 *)(local_1d8[1] + 0x48);
                    fVar85 = (float)*(undefined8 *)(local_150 + 0x38) -
                             (float)*(undefined8 *)(local_188 + 0x38);
                    fVar94 = (float)((ulong)*(undefined8 *)(local_150 + 0x38) >> 0x20) -
                             (float)((ulong)*(undefined8 *)(local_188 + 0x38) >> 0x20);
                    fVar95 = *(float *)(local_150 + 0x34) - *(float *)(local_188 + 0x34);
                    fVar85 = fVar85 * fVar85;
                    fVar94 = fVar94 * fVar94;
                    fVar95 = fVar95 * fVar95;
                    fVar92 = fVar85 + fVar94 + fVar95;
                    fVar95 = fVar85 + fVar94 + fVar95;
                    uVar97 = (undefined1)((uint)fVar95 >> 8);
                    uVar98 = (undefined1)((uint)fVar95 >> 0x10);
                    uVar99 = (undefined1)((uint)fVar95 >> 0x18);
                    uVar86 = NEON_frsqrte(CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(
                                                  SUB41(fVar95,0),fVar92)))),4);
                    fVar85 = (float)uVar86;
                    fVar94 = (float)((ulong)uVar86 >> 0x20);
                    uVar86 = NEON_frsqrts(CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(
                                                  SUB41(fVar95,0),fVar92)))),
                                          CONCAT44(fVar94 * fVar94,fVar85 * fVar85),4);
                    iVar20 = -(uint)(fVar92 <= 0.0);
                    fVar92 = fVar85 * (float)uVar86 * fVar92;
                    fVar85 = *(float *)(local_1d8[1] + 0x20);
                    fVar94 = (float)uVar41;
                    if (uVar82 == 0) {
                      fVar95 = (float)((uint)*(ushort *)(local_158[9] + 4) << 0x10) *
                               *(float *)(*(long *)(local_1d0 + 0x10) +
                                          (ulong)(byte)local_158[8][9] * 0x40 + 0x24);
                      fVar96 = (float)((uint)*(ushort *)(local_190[9] + 4) << 0x10) *
                               *(float *)(*(long *)(local_1d0 + 0x10) +
                                          (ulong)(byte)local_190[8][9] * 0x40 + 0x24);
                      uVar86 = NEON_fmin(CONCAT17((char)((uint)fVar95 >> 0x18),
                                                  CONCAT16((char)((uint)fVar95 >> 0x10),
                                                           CONCAT15((char)((uint)fVar95 >> 8),
                                                                    CONCAT14(SUB41(fVar95,0),fVar95)
                                                                   ))),
                                         CONCAT17((char)((uint)fVar96 >> 0x18),
                                                  CONCAT16((char)((uint)fVar96 >> 0x10),
                                                           CONCAT15((char)((uint)fVar96 >> 8),
                                                                    CONCAT14(SUB41(fVar96,0),fVar96)
                                                                   ))),4);
                      auVar89._0_8_ =
                           CONCAT44((int)((float)((ulong)uVar41 >> 0x20) *
                                         (float)((ulong)uVar86 >> 0x20)),
                                    (int)(fVar94 * (float)uVar86));
                      auVar89._8_8_ = auVar89._0_8_;
                      uVar41 = NEON_sqxtun(auVar89._0_8_,auVar89,4);
                      uVar82 = (ushort)uVar41;
                      *(ushort *)((long)puVar78 + 0x86) = uVar82;
                    }
                    iVar20 = ~(int)(fVar85 * fVar94 *
                                   (float)CONCAT13((byte)((uint)fVar92 >> 0x18) &
                                                   ~(byte)((uint)iVar20 >> 0x18),
                                                   CONCAT12((byte)((uint)fVar92 >> 0x10) &
                                                            ~(byte)((uint)iVar20 >> 0x10),
                                                            CONCAT11((byte)((uint)fVar92 >> 8) &
                                                                     ~(byte)((uint)iVar20 >> 8),
                                                                     SUB41(fVar92,0) & ~(byte)iVar20
                                                                    )))) + (uint)uVar82;
                    if (iVar20 < 1) {
                      *(int *)(local_1e0 + 0x34) = *(int *)(local_1e0 + 0x34) + 1;
                      goto LAB_03068d40;
                    }
                    *(short *)((long)puVar78 + 0x86) = (short)iVar20;
                  }
                  *(short *)(puVar78 + 0x25) = (short)iVar42;
                  if (*(char *)((long)puVar69 + 0x79) == '\0') {
                    (**(code **)(**(long **)(*(long *)(local_1d0 + 8) + 0x658) + 0x68))();
                  }
                  else {
                    puVar76 = *(undefined8 **)local_250;
                    if (*(char *)((long)puVar76 + 0xe) == '\0') {
                      puVar40 = puVar76;
                      if (*(int *)(puVar76 + 1) != 0) {
                        lVar63 = *(long *)(puVar69 + 0x12);
                        if (*(int *)(lVar63 + 0x18) < 0xed1) {
                          puVar40 = (undefined8 *)
                                    (*(long *)(lVar63 + 0x10) + (long)*(int *)(lVar63 + 0x18) + 0x20
                                    );
                        }
                        else {
                          puVar40 = (undefined8 *)FUN_032bf82c(lVar63);
                        }
                        uVar41 = puVar76[1];
                        *puVar40 = *puVar76;
                        puVar40[1] = uVar41;
                        *(undefined8 **)local_250 = puVar40;
                        *(int *)(lVar63 + 0x18) = *(int *)(lVar63 + 0x18) + 0x10;
                        *(int *)(lVar63 + 0x1c) = *(int *)(lVar63 + 0x1c) + 1;
                      }
                      *(undefined1 *)((long)puVar40 + 0xe) = 1;
                      *(undefined4 *)(puVar40 + 1) = 1;
                      lVar47 = local_228;
                    }
                    else {
                      *(int *)(puVar76 + 1) = *(int *)(puVar76 + 1) + 1;
                    }
                    *(undefined1 *)((long)puVar69 + 0x7a) = 0;
                    lVar55 = *(long *)(puVar69 + 0x12);
                    lVar63 = local_148 - *(long *)(local_1d0 + 0x20);
                    lVar73 = local_180 - *(long *)(local_1d0 + 0x20);
                    if (*(int *)(lVar55 + 0x18) < 0xed1) {
                      puVar76 = (undefined8 *)
                                (*(long *)(lVar55 + 0x10) + (long)*(int *)(lVar55 + 0x18) + 0x20);
                    }
                    else {
                      puVar76 = (undefined8 *)FUN_032bf82c(lVar55);
                    }
                    *puVar76 = puVar78;
                    *(short *)(puVar76 + 1) = (short)(lVar63 >> 4) * -0x3333;
                    *(short *)((long)puVar76 + 10) = (short)(lVar73 >> 4) * -0x3333;
                    *(int *)(lVar55 + 0x18) = *(int *)(lVar55 + 0x18) + 0x10;
                    *(int *)(lVar55 + 0x1c) = *(int *)(lVar55 + 0x1c) + 1;
                  }
                  uVar74 = local_1e8;
                  pauVar71 = local_220;
                  if (iVar53 != 0) {
                    lVar63 = nn::os::GetSystemTick();
                    *(long *)(local_1e0 + 8) = *(long *)(local_1e0 + 8) + (lVar63 - local_330);
                    *(int *)(local_1e0 + 0x10) = *(int *)(local_1e0 + 0x10) + 1;
                    *(long *)(local_1e0 + 0x40) = *(long *)(local_1e0 + 0x40) + (lVar63 - local_330)
                    ;
                    *(int *)(local_1e0 + 0x48) = *(int *)(local_1e0 + 0x48) + 1;
                  }
                  goto LAB_030691d4;
                }
              }
LAB_03068d40:
              *(undefined2 *)((long)puVar78 + 0x86) = 0;
            }
            puVar76 = *(undefined8 **)(puVar69 + 0x18);
            lVar73 = *(long *)(puVar69 + 0x12);
            iVar42 = *(int *)(lVar73 + 0x18);
            if (*(char *)((long)puVar76 + 0xe) == '\0') {
              if (0xce0 < iVar42) goto LAB_0306a188;
LAB_03068d60:
              lVar55 = *(long *)(lVar73 + 0x10) + (long)iVar42 + 0x20;
            }
            else {
              if (iVar42 < 0xed1) {
                puVar40 = (undefined8 *)(*(long *)(lVar73 + 0x10) + (long)iVar42 + 0x20);
              }
              else {
                puVar40 = (undefined8 *)FUN_032bf82c(lVar73);
              }
              uVar41 = puVar76[1];
              *puVar40 = *puVar76;
              puVar40[1] = uVar41;
              *(undefined8 **)local_250 = puVar40;
              *(undefined4 *)(puVar40 + 1) = 0;
              *(undefined1 *)((long)puVar40 + 0xe) = 0;
              iVar42 = *(int *)(lVar73 + 0x18) + 0x10;
              *(int *)(lVar73 + 0x18) = iVar42;
              *(int *)(lVar73 + 0x1c) = *(int *)(lVar73 + 0x1c) + 1;
              lVar47 = local_228;
              if (iVar42 < 0xce1) goto LAB_03068d60;
LAB_0306a188:
              lVar55 = FUN_032bf82c(lVar73);
            }
            if (*(int *)(local_1e0 + 0x738) != 0) {
              nn::os::GetSystemTick();
            }
            uVar82 = *(ushort *)local_190[9];
            uVar86 = NEON_scvtf((ulong)CONCAT24(*(ushort *)local_158[9],
                                                (uint)*(ushort *)local_158[9]),4);
            uVar41 = NEON_scvtf((ulong)CONCAT15((char)(uVar82 >> 8),
                                                CONCAT14((char)uVar82,(uint)uVar82)),4);
            local_d8 = CONCAT44((float)((ulong)*(undefined8 *)(local_1d8[1] + 0x50) >> 0x20) *
                                ((float)((ulong)uVar86 >> 0x20) + (float)((ulong)uVar41 >> 0x20)),
                                (float)*(undefined8 *)(local_1d8[1] + 0x50) *
                                ((float)uVar86 + (float)uVar41));
            fVar85 = *(float *)(local_130 + 0x20);
            local_f0 = CONCAT44(fVar85,fVar85);
            fVar92 = *(float *)(local_168 + 0x20);
            local_e8 = CONCAT17((char)((uint)fVar92 >> 0x18),
                                CONCAT16((char)((uint)fVar92 >> 0x10),
                                         CONCAT15((char)((uint)fVar92 >> 8),
                                                  CONCAT14(SUB41(fVar92,0),fVar92))));
            local_e0 = CONCAT44(fVar85 + fVar92,fVar85 + fVar92);
            uVar113 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
            uVar41 = *(undefined8 *)(local_160[1] + 8);
            uVar97 = (undefined1)((ulong)uVar41 >> 8);
            uVar98 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar99 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar100 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar101 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar102 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar103 = (undefined1)((ulong)uVar41 >> 0x38);
            auVar9[9] = uVar97;
            auVar9._0_9_ = *(unkbyte9 *)local_160[1];
            auVar9[10] = uVar98;
            auVar9[0xb] = uVar99;
            auVar9[0xc] = uVar100;
            auVar9[0xd] = uVar101;
            auVar9[0xe] = uVar102;
            auVar9[0xf] = uVar103;
            auVar10[9] = uVar97;
            auVar10._0_9_ = *(unkbyte9 *)local_160[1];
            auVar10[10] = uVar98;
            auVar10[0xb] = uVar99;
            auVar10[0xc] = uVar100;
            auVar10[0xd] = uVar101;
            auVar10[0xe] = uVar102;
            auVar10[0xf] = uVar103;
            NEON_ext(auVar9,auVar10,8,1);
            NEON_ext(*local_160,*local_160,8,1);
            auVar21._12_4_ = uVar113;
            auVar21._0_12_ = *(undefined1 (*) [12])local_160[2];
            auVar22._12_4_ = uVar113;
            auVar22._0_12_ = *(undefined1 (*) [12])local_160[2];
            NEON_ext(auVar21,auVar22,8,1);
            auVar90 = *local_160;
            pauVar80 = local_160 + 1;
            uVar41 = *(undefined8 *)(local_160[1] + 8);
            uVar97 = (undefined1)((ulong)uVar41 >> 8);
            uVar98 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar99 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar100 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar101 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar102 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar103 = (undefined1)((ulong)uVar41 >> 0x38);
            pauVar54 = local_160 + 2;
            uVar113 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
            auVar11[9] = uVar97;
            auVar11._0_9_ = *(unkbyte9 *)*pauVar80;
            auVar11[10] = uVar98;
            auVar11[0xb] = uVar99;
            auVar11[0xc] = uVar100;
            auVar11[0xd] = uVar101;
            auVar11[0xe] = uVar102;
            auVar11[0xf] = uVar103;
            auVar12[9] = uVar97;
            auVar12._0_9_ = *(unkbyte9 *)*pauVar80;
            auVar12[10] = uVar98;
            auVar12[0xb] = uVar99;
            auVar12[0xc] = uVar100;
            auVar12[0xd] = uVar101;
            auVar12[0xe] = uVar102;
            auVar12[0xf] = uVar103;
            auVar115 = NEON_ext(auVar11,auVar12,8,1);
            auVar114 = NEON_ext(auVar90,auVar90,8,1);
            auVar23._12_4_ = uVar113;
            auVar23._0_12_ = *(undefined1 (*) [12])*pauVar54;
            auVar24._12_4_ = uVar113;
            auVar24._0_12_ = *(undefined1 (*) [12])*pauVar54;
            auVar116 = NEON_ext(auVar23,auVar24,8,1);
            fVar95 = (float)((ulong)*(undefined8 *)*pauVar54 >> 0x20);
            fVar85 = (float)*(undefined8 *)local_128[2];
            fVar92 = (float)((ulong)*(undefined8 *)local_128[2] >> 0x20);
            fVar94 = (float)*(undefined8 *)(local_128[2] + 8);
            uStack_a8 = CONCAT44(auVar116._4_4_ * fVar94 + fVar95 * fVar85 + auVar116._4_4_ * fVar92
                                 ,auVar116._0_4_ * fVar94 +
                                  (float)*(undefined8 *)*pauVar54 * fVar85 + fVar95 * fVar92);
            local_b0 = CONCAT44(auVar115._0_4_ * fVar94 +
                                (float)*(undefined8 *)*pauVar80 * fVar85 +
                                (float)((ulong)*(undefined8 *)*pauVar80 >> 0x20) * fVar92,
                                auVar114._0_4_ * fVar94 +
                                auVar90._0_4_ * fVar85 + auVar90._4_4_ * fVar92);
            auVar90 = *local_160;
            pauVar80 = local_160 + 1;
            uVar41 = *(undefined8 *)(local_160[1] + 8);
            uVar97 = (undefined1)((ulong)uVar41 >> 8);
            uVar98 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar99 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar100 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar101 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar102 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar103 = (undefined1)((ulong)uVar41 >> 0x38);
            pauVar54 = local_160 + 2;
            uVar113 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
            auVar13[9] = uVar97;
            auVar13._0_9_ = *(unkbyte9 *)*pauVar80;
            auVar13[10] = uVar98;
            auVar13[0xb] = uVar99;
            auVar13[0xc] = uVar100;
            auVar13[0xd] = uVar101;
            auVar13[0xe] = uVar102;
            auVar13[0xf] = uVar103;
            auVar14[9] = uVar97;
            auVar14._0_9_ = *(unkbyte9 *)*pauVar80;
            auVar14[10] = uVar98;
            auVar14[0xb] = uVar99;
            auVar14[0xc] = uVar100;
            auVar14[0xd] = uVar101;
            auVar14[0xe] = uVar102;
            auVar14[0xf] = uVar103;
            auVar115 = NEON_ext(auVar13,auVar14,8,1);
            auVar114 = NEON_ext(auVar90,auVar90,8,1);
            auVar25._12_4_ = uVar113;
            auVar25._0_12_ = *(undefined1 (*) [12])*pauVar54;
            auVar26._12_4_ = uVar113;
            auVar26._0_12_ = *(undefined1 (*) [12])*pauVar54;
            auVar116 = NEON_ext(auVar25,auVar26,8,1);
            fVar95 = (float)((ulong)*(undefined8 *)*pauVar54 >> 0x20);
            fVar85 = (float)*(undefined8 *)local_128[1];
            fVar92 = (float)((ulong)*(undefined8 *)local_128[1] >> 0x20);
            fVar94 = (float)*(undefined8 *)(local_128[1] + 8);
            fStack_b8 = auVar116._0_4_ * fVar94 +
                        (float)*(undefined8 *)*pauVar54 * fVar85 + fVar95 * fVar92;
            fStack_b4 = auVar116._4_4_ * fVar94 + fVar95 * fVar85 + auVar116._4_4_ * fVar92;
            local_c0 = (undefined1 (*) [16])
                       CONCAT44(auVar115._0_4_ * fVar94 +
                                (float)*(undefined8 *)*pauVar80 * fVar85 +
                                (float)((ulong)*(undefined8 *)*pauVar80 >> 0x20) * fVar92,
                                auVar114._0_4_ * fVar94 +
                                auVar90._0_4_ * fVar85 + auVar90._4_4_ * fVar92);
            auVar90 = *local_160;
            pauVar80 = local_160 + 1;
            uVar41 = *(undefined8 *)(local_160[1] + 8);
            uVar97 = (undefined1)((ulong)uVar41 >> 8);
            uVar98 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar99 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar100 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar101 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar102 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar103 = (undefined1)((ulong)uVar41 >> 0x38);
            pauVar54 = local_160 + 2;
            uVar113 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
            auVar15[9] = uVar97;
            auVar15._0_9_ = *(unkbyte9 *)*pauVar80;
            auVar15[10] = uVar98;
            auVar15[0xb] = uVar99;
            auVar15[0xc] = uVar100;
            auVar15[0xd] = uVar101;
            auVar15[0xe] = uVar102;
            auVar15[0xf] = uVar103;
            auVar16[9] = uVar97;
            auVar16._0_9_ = *(unkbyte9 *)*pauVar80;
            auVar16[10] = uVar98;
            auVar16[0xb] = uVar99;
            auVar16[0xc] = uVar100;
            auVar16[0xd] = uVar101;
            auVar16[0xe] = uVar102;
            auVar16[0xf] = uVar103;
            auVar115 = NEON_ext(auVar15,auVar16,8,1);
            auVar114 = NEON_ext(auVar90,auVar90,8,1);
            auVar27._12_4_ = uVar113;
            auVar27._0_12_ = *(undefined1 (*) [12])*pauVar54;
            auVar28._12_4_ = uVar113;
            auVar28._0_12_ = *(undefined1 (*) [12])*pauVar54;
            auVar116 = NEON_ext(auVar27,auVar28,8,1);
            fVar95 = (float)((ulong)*(undefined8 *)*pauVar54 >> 0x20);
            fVar85 = (float)*(undefined8 *)*local_128;
            fVar92 = (float)((ulong)*(undefined8 *)*local_128 >> 0x20);
            fVar94 = (float)*(undefined8 *)(*local_128 + 8);
            local_d0 = auVar114._0_4_ * fVar94 + auVar90._0_4_ * fVar85 + auVar90._4_4_ * fVar92;
            fStack_cc = auVar115._0_4_ * fVar94 +
                        (float)*(undefined8 *)*pauVar80 * fVar85 +
                        (float)((ulong)*(undefined8 *)*pauVar80 >> 0x20) * fVar92;
            uStack_c8 = (undefined1 (*) [16])
                        CONCAT44(auVar116._4_4_ * fVar94 + fVar95 * fVar85 + auVar116._4_4_ * fVar92
                                 ,auVar116._0_4_ * fVar94 +
                                  (float)*(undefined8 *)*pauVar54 * fVar85 + fVar95 * fVar92);
            uVar113 = (undefined4)((ulong)*(undefined8 *)(*local_160 + 8) >> 0x20);
            fVar85 = ((float)*(undefined8 *)local_128[3] - *(float *)local_160[3]) +
                     ((float)*(undefined8 *)local_128[4] - (float)*(undefined8 *)local_160[4]);
            fVar92 = ((float)((ulong)*(undefined8 *)local_128[3] >> 0x20) -
                     *(float *)(local_160[3] + 4)) +
                     ((float)((ulong)*(undefined8 *)local_128[4] >> 0x20) -
                     (float)((ulong)*(undefined8 *)local_160[4] >> 0x20));
            fVar94 = ((float)*(undefined8 *)(local_128[3] + 8) - *(float *)(local_160[3] + 8)) +
                     ((float)*(undefined8 *)(local_128[4] + 8) -
                     (float)*(undefined8 *)(local_160[4] + 8));
            auVar90 = local_160[1];
            pauVar54 = local_160 + 2;
            uVar41 = *(undefined8 *)(local_160[2] + 8);
            uVar97 = (undefined1)((ulong)uVar41 >> 8);
            uVar98 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar99 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar100 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar101 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar102 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar103 = (undefined1)((ulong)uVar41 >> 0x38);
            auVar29._12_4_ = uVar113;
            auVar29._0_12_ = *(undefined1 (*) [12])*local_160;
            auVar30._12_4_ = uVar113;
            auVar30._0_12_ = *(undefined1 (*) [12])*local_160;
            auVar114 = NEON_ext(auVar29,auVar30,8,1);
            auVar115 = NEON_ext(auVar90,auVar90,8,1);
            auVar17[9] = uVar97;
            auVar17._0_9_ = *(unkbyte9 *)*pauVar54;
            auVar17[10] = uVar98;
            auVar17[0xb] = uVar99;
            auVar17[0xc] = uVar100;
            auVar17[0xd] = uVar101;
            auVar17[0xe] = uVar102;
            auVar17[0xf] = uVar103;
            auVar18[9] = uVar97;
            auVar18._0_9_ = *(unkbyte9 *)*pauVar54;
            auVar18[10] = uVar98;
            auVar18[0xb] = uVar99;
            auVar18[0xc] = uVar100;
            auVar18[0xd] = uVar101;
            auVar18[0xe] = uVar102;
            auVar18[0xf] = uVar103;
            auVar116 = NEON_ext(auVar17,auVar18,8,1);
            fVar95 = (float)((ulong)*(undefined8 *)*pauVar54 >> 0x20);
            auVar88._0_8_ =
                 CONCAT44(auVar115._0_4_ * fVar94 + auVar90._0_4_ * fVar85 + auVar90._4_4_ * fVar92,
                          auVar114._0_4_ * fVar94 +
                          (float)*(undefined8 *)*local_160 * fVar85 +
                          (float)((ulong)*(undefined8 *)*local_160 >> 0x20) * fVar92);
            auVar88._8_4_ =
                 auVar116._0_4_ * fVar94 +
                 (float)*(undefined8 *)*pauVar54 * fVar85 + fVar95 * fVar92;
            auVar88._12_4_ = auVar116._4_4_ * fVar94 + fVar95 * fVar85 + auVar116._4_4_ * fVar92;
            uStack_98 = auVar88._8_8_;
            local_88 = *(undefined8 *)(puVar69 + 4);
            plVar67 = *(long **)(lVar63 + (ulong)*(byte *)(local_130 + 0x18) * 0xf8 +
                                 (ulong)*(byte *)(local_168 + 0x18) * 8 + 0x10);
            local_a0 = auVar88._0_8_;
            local_90 = puVar78;
            local_80 = lVar52;
            uVar38 = (**(code **)(*plVar67 + 0x20))
                               (plVar67,local_1d0,local_1d8,&local_f0,&local_158,&local_190,puVar78,
                                lVar55,&local_f8);
            if (iVar53 != 0) {
              lVar63 = CONCAT44(uStack_f4,local_f8);
              lVar55 = nn::os::GetSystemTick();
              *(long *)(lVar63 + 8) = (lVar55 - local_330) + *(long *)(lVar63 + 8);
              *(int *)(lVar63 + 0x10) = *(int *)(lVar63 + 0x10) + 1;
            }
            pauVar71 = local_220;
            if (0 < (int)uVar38) {
              if (*(long *)(puVar69 + 0x1a) == 0) {
                *(long *)(puVar69 + 0x1a) =
                     *(long *)(lVar73 + 0x10) + (long)*(int *)(lVar73 + 0x18) + 0x20;
              }
              if ((int)uVar38 < 1) {
                iVar42 = *(int *)(lVar73 + 0x18);
              }
              else {
                iVar42 = *(int *)(lVar73 + 0x18);
                lVar63 = *(long *)(lVar73 + 0x10) + (long)iVar42;
                uVar57 = *(uint *)(*(long *)(lVar63 + 200) + 0x14) | puVar69[0x1c] |
                         *(uint *)(*(long *)(lVar63 + 0xd0) + 0x14);
                if (uVar38 != 1) {
                  lVar55 = (ulong)uVar38 - 1;
                  plVar67 = (long *)(lVar63 + 0x1d0);
                  do {
                    lVar55 = lVar55 + -1;
                    uVar57 = *(uint *)(plVar67[-1] + 0x14) | uVar57 | *(uint *)(*plVar67 + 0x14);
                    plVar67 = plVar67 + 0x20;
                  } while (lVar55 != 0);
                }
                puVar69[0x1c] = uVar57;
              }
              *(uint *)(lVar73 + 0x18) = iVar42 + uVar38 * 0x100;
              *(int *)(lVar73 + 0x1c) = *(int *)(lVar73 + 0x1c) + 1;
              *(uint *)(*(long *)(puVar69 + 0x18) + 8) =
                   *(int *)(*(long *)(puVar69 + 0x18) + 8) + uVar38;
              *(undefined1 *)((long)puVar69 + 0x7a) = 0;
              if (1 < (int)uVar38) {
                *(uint *)(lVar73 + 0x1c) = uVar38 + *(int *)(lVar73 + 0x1c) + -1;
              }
            }
            *(byte *)((long)puVar78 + 0xf) =
                 *(byte *)((long)puVar78 + 0xf) & 0xf7 | (0 < (int)uVar38) << 3;
            if (iVar53 == 0) {
              uVar74 = local_1e8;
            }
            else {
              lVar63 = nn::os::GetSystemTick();
              *(long *)(local_1e0 + 8) = (lVar63 - local_330) + *(long *)(local_1e0 + 8);
              *(int *)(local_1e0 + 0x10) = *(int *)(local_1e0 + 0x10) + 1;
              uVar74 = local_1e8;
            }
          }
          else {
            plVar67 = *(long **)(*(long *)(local_1d0 + 0x40) + (ulong)(byte)puVar78[2] * 8 + 0x13b8)
            ;
            if ((int)plVar67[1] == 0) {
              local_190 = pauVar54;
              local_158 = pauVar80;
              (**(code **)(*plVar67 + 0x10))
                        (plVar67,local_1d0,local_1d8,&local_158,local_138,&local_190,local_170,
                         puVar78,lVar79);
              pauVar71 = local_220;
            }
            else {
              plVar75 = (long *)(local_228 + 0x28);
              uVar113 = *(undefined4 *)(local_228 + 0x40);
              uVar38 = *(uint *)(local_228 + 0x44);
              iVar53 = uVar38 + *(int *)(*plVar75 + 8);
              puVar65 = *(uint **)(local_228 + 0x38);
              local_190 = pauVar54;
              local_158 = pauVar80;
              (**(code **)(*plVar67 + 0x28))
                        (plVar67,local_1d0,local_1d8,&local_158,&local_190,puVar78,local_260,plVar75
                         ,local_120,lVar79,puVar69,local_1e0,0);
              *(uint **)(puVar78 + 8) = puVar65;
              *(short *)(puVar78 + 10) = (short)uVar113;
              *(short *)((long)puVar78 + 0x2a) = (short)uVar38;
              puVar78[0xb] = -iVar53;
              uVar57 = *(uint *)(lVar47 + 0x44);
              uVar60 = (uVar57 + *(int *)(*plVar75 + 8)) - iVar53;
              if (uVar60 != 0) {
                puVar49 = *(uint **)(local_228 + 0x38);
                if (puVar49 != puVar65) {
                  if ((uVar38 & 0xffff) == (*puVar65 & 0xffff)) {
                    uVar38 = 0;
                    puVar65 = *(uint **)(puVar65 + 2);
                    puVar78[10] = 0;
                    puVar49 = *(uint **)(local_228 + 0x38);
                    if (puVar65 == puVar49) goto LAB_0306b61c;
                  }
                  else if (puVar65 == puVar49) {
LAB_0306b61c:
                    uVar57 = *(uint *)(local_228 + 0x44);
                    puVar65 = puVar49;
                    goto LAB_0306afb8;
                  }
                  uVar57 = *puVar65;
                }
LAB_0306afb8:
                *(short *)((long)puVar78 + 0x2a) = (short)uVar57 - (short)uVar38;
                *(uint **)(puVar78 + 8) = puVar65;
              }
              puVar78[0xb] = uVar60;
              pauVar71 = local_220;
              uVar74 = local_1e8;
              lVar47 = local_228;
            }
          }
LAB_030691d4:
          uVar38 = puVar78[1];
          lVar63 = local_2a0;
          plVar67 = local_2a8;
          uVar57 = local_2ac;
          if (lVar39 != 0 && bVar36) {
            FUN_032d5b34(lVar39,&DAT_0390f40e);
            lVar63 = local_2a0;
            plVar67 = local_2a8;
            uVar57 = local_2ac;
          }
        }
        else {
          if (((char)local_210[2] == '\x02') && ((local_210[6] & 0xffffff) != 0x7f7f7f)) {
            lVar61 = lVar51 + uVar77 * 0xc0;
            uVar41 = *(undefined8 *)(local_210 + 6);
            bVar81 = (byte)((ulong)uVar41 >> 8);
            lVar64 = lVar51 + uVar46 * 0xc0;
            auVar90._0_4_ = (CONCAT12(bVar81,(ushort)(byte)uVar41) & 0xffff) - 0x7f;
            auVar90._4_4_ = bVar81 - 0x7f;
            auVar90._8_4_ = (byte)((ulong)uVar41 >> 0x10) - 0x7f;
            auVar90._12_4_ = (byte)((ulong)uVar41 >> 0x18) - 0x7f;
            auVar90 = NEON_scvtf(auVar90,4);
            lVar58 = local_1d8[1];
            fVar92 = auVar90._0_4_ * 0.007874016;
            fVar94 = auVar90._4_4_ * 0.007874016;
            fVar95 = auVar90._8_4_ * 0.007874016;
            fVar96 = auVar90._12_4_ * 0.007874016;
            auVar115._0_4_ = fVar92 * (*(float *)(lVar55 + 0x60) - *(float *)(lVar73 + 0x60));
            auVar115._4_4_ = fVar94 * (*(float *)(lVar55 + 100) - *(float *)(lVar73 + 100));
            auVar115._8_4_ = fVar95 * (*(float *)(lVar55 + 0x68) - *(float *)(lVar73 + 0x68));
            auVar115._12_4_ = fVar96 * (*(float *)(lVar55 + 0x6c) - *(float *)(lVar73 + 0x6c));
            fVar85 = (float)*(undefined8 *)(lVar58 + 0x48);
            auVar114._0_4_ =
                 fVar92 * ((float)*(undefined8 *)(lVar55 + 0x38) -
                          (float)*(undefined8 *)(lVar73 + 0x38));
            auVar114._4_4_ =
                 fVar94 * ((float)((ulong)*(undefined8 *)(lVar55 + 0x38) >> 0x20) -
                          (float)((ulong)*(undefined8 *)(lVar73 + 0x38) >> 0x20));
            auVar114._8_4_ =
                 fVar95 * ((float)((ulong)*(undefined8 *)(lVar55 + 0x30) >> 0x20) -
                          (float)((ulong)*(undefined8 *)(lVar73 + 0x30) >> 0x20));
            auVar114._12_4_ = fVar96 * 0.0;
            auVar90 = NEON_ext(auVar115,auVar115,8,1);
            auVar116 = NEON_ext(auVar114,auVar114,8,1);
            iVar53 = (uint)*(ushort *)(lVar64 + 0x5e) + (uint)*(ushort *)(lVar61 + 0x5e) +
                     (int)((float)*(undefined8 *)(lVar58 + 0x20) * fVar85 *
                          (auVar114._0_4_ + auVar114._4_4_ + auVar116._0_4_));
            uVar60 = (uint)*(ushort *)(lVar64 + 0x92) + (uint)*(ushort *)(lVar61 + 0x92);
            uVar56 = (uint)((float)*(undefined8 *)(lVar58 + 0x10) *
                            (auVar115._0_4_ + auVar115._4_4_ + auVar90._0_4_) * fVar85);
          }
          else {
            lVar58 = lVar51 + uVar77 * 0xc0;
            lVar61 = lVar51 + uVar46 * 0xc0;
            uVar56 = (uint)*(ushort *)(lVar58 + 0x90);
            uVar60 = (uint)*(ushort *)(lVar61 + 0x90);
            iVar53 = (uint)*(ushort *)(lVar61 + 0x5c) + (uint)*(ushort *)(lVar58 + 0x5c);
          }
          iVar53 = ((uint)(ushort)local_210[3] - iVar53) - (uVar37 >> 10 & 1);
          if (iVar53 <= (int)(uVar60 + uVar56)) goto LAB_030689a4;
          *(short *)(local_210 + 3) = (short)iVar53;
          uVar74 = local_1e8;
        }
        *(uint *)(lVar47 + 0x18) =
             *(int *)(lVar47 + 0x18) + (uint)*(byte *)((long)puVar78 + 9) * 0x10;
        *(int *)(lVar47 + 0x1c) = *(int *)(lVar47 + 0x1c) + 1;
        uVar66 = local_1f0;
        pauVar80 = local_1f8;
      }
LAB_030691fc:
      if (pauVar71 == (undefined1 (*) [16])plVar67[1]) {
        uVar60 = *(int *)((long)plVar67 + 0x14) - 1;
        *(uint *)((long)plVar67 + 0x14) = uVar60;
        if ((int)uVar60 < 1) {
          uVar56 = *(uint *)(plVar67 + 2);
          uVar46 = local_218;
          if (uVar56 == 0) {
            *plVar67 = 0;
            plVar67[1] = 0;
            pauVar54 = (undefined1 (*) [16])0x0;
            uVar77 = 0xff000000ff000000;
          }
          else {
            puVar78 = *(uint **)(*plVar67 + 8);
            *plVar67 = (long)puVar78;
            if (puVar78 != (uint *)0x0) {
              uVar2 = *puVar78 & 0xffff;
              if ((int)uVar56 <= (int)(*puVar78 & 0xffff)) {
                uVar2 = uVar56;
              }
              if ((int)uVar2 < 1) {
                pauVar54 = (undefined1 (*) [16])0x0;
                plVar67[1] = 0;
              }
              else {
                pauVar54 = (undefined1 (*) [16])(puVar78 + 8);
                *(uint *)(plVar67 + 2) = uVar56 - uVar2;
                *(uint *)((long)plVar67 + 0x14) = uVar2;
                plVar67[1] = (long)pauVar54;
                Hint_Prefetch(*(long *)(puVar78 + 2),0,0,0);
                Hint_Prefetch(*(long *)(puVar78 + 2) + 0x40,0,0,0);
                Hint_Prefetch(puVar78 + 0x20,0,0,0);
                Hint_Prefetch(puVar78 + 0x30,0,0,0);
                uVar60 = uVar2;
              }
              puVar65 = (uint *)plVar67[4];
              if (puVar78 != puVar65) {
                uVar56 = *(uint *)(plVar67 + 5);
                if (uVar56 != 0) {
                  if (uVar56 == (*puVar65 & 0xffff)) {
                    lVar73 = plVar67[3];
                    puVar76 = (undefined8 *)plVar67[6];
                    *(undefined8 *)(*(long *)(lVar73 + 0x10) + (long)(int)puVar65[1] * 8) = 0;
                    *(undefined1 *)(lVar73 + 0xc) = 1;
                    iVar53 = *(int *)(puVar76 + 0xb);
                    lVar73 = puVar76[1];
                    *(uint **)(lVar73 + (long)iVar53 * 8) = puVar65;
                    *(int *)(puVar76 + 0xb) = iVar53 + 1;
                    if (*(int *)((long)puVar76 + 0x5c) <= iVar53 + 1) {
                      (**(code **)(*(long *)*puVar76 + 0x28))
                                ((long *)*puVar76,lVar73 + (long)(iVar53 + -5) * 8,6);
                      *(int *)(puVar76 + 0xb) = iVar53 + -5;
                      lVar63 = local_2a0;
                      plVar67 = local_2a8;
                      uVar57 = local_2ac;
                    }
                  }
                  else {
                    do {
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(puVar65,0x10);
                      if (bVar8) {
                        *puVar65 = *puVar65 - uVar56;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                  }
                  *(undefined4 *)(plVar67 + 5) = 0;
                  *(undefined1 *)(plVar67[3] + 0xc) = 1;
                  uVar60 = *(uint *)((long)plVar67 + 0x14);
                  puVar78 = (uint *)*plVar67;
                  pauVar54 = (undefined1 (*) [16])plVar67[1];
                }
                plVar67[4] = (long)puVar78;
                *(uint *)(plVar67 + 5) = uVar60;
              }
              goto joined_r0x030696fc;
            }
            plVar67[1] = 0;
            pauVar54 = (undefined1 (*) [16])0x0;
            uVar77 = 0xff000000ff000000;
          }
        }
        else {
          pauVar54 = (undefined1 (*) [16])plVar67[1] + uVar74;
          plVar67[1] = (long)pauVar54;
joined_r0x030696fc:
          uVar46 = local_218;
          if (pauVar54 == (undefined1 (*) [16])0x0) {
            uVar77 = 0xff000000ff000000;
          }
          else {
            uVar77 = (ulong)*(uint *)*pauVar54 & 0xffffff |
                     (ulong)(*(uint *)((long)*pauVar54 + 4) & 0xffffff) << 0x20;
          }
        }
      }
      else {
        uVar60 = *(int *)((long)param_6 + 0x14) - 1;
        *(uint *)((long)param_6 + 0x14) = uVar60;
        if ((int)uVar60 < 1) {
          uVar56 = *(uint *)(param_6 + 2);
          if (uVar56 == 0) {
            *param_6 = 0;
            param_6[1] = 0;
          }
          else {
            puVar78 = *(uint **)(*param_6 + 8);
            *param_6 = (long)puVar78;
            if (puVar78 != (uint *)0x0) {
              uVar2 = *puVar78 & 0xffff;
              if ((int)uVar56 <= (int)(*puVar78 & 0xffff)) {
                uVar2 = uVar56;
              }
              if ((int)uVar2 < 1) {
                pauVar80 = (undefined1 (*) [16])0x0;
                param_6[1] = 0;
              }
              else {
                pauVar80 = (undefined1 (*) [16])(puVar78 + 8);
                *(uint *)(param_6 + 2) = uVar56 - uVar2;
                *(uint *)((long)param_6 + 0x14) = uVar2;
                param_6[1] = (long)pauVar80;
                Hint_Prefetch(*(long *)(puVar78 + 2),0,0,0);
                Hint_Prefetch(*(long *)(puVar78 + 2) + 0x40,0,0,0);
                Hint_Prefetch(puVar78 + 0x20,0,0,0);
                Hint_Prefetch(puVar78 + 0x30,0,0,0);
                uVar60 = uVar2;
              }
              puVar65 = (uint *)param_6[4];
              if (puVar78 != puVar65) {
                uVar56 = *(uint *)(param_6 + 5);
                if (uVar56 != 0) {
                  if (uVar56 == (*puVar65 & 0xffff)) {
                    lVar73 = param_6[3];
                    puVar76 = (undefined8 *)param_6[6];
                    *(undefined8 *)(*(long *)(lVar73 + 0x10) + (long)(int)puVar65[1] * 8) = 0;
                    *(undefined1 *)(lVar73 + 0xc) = 1;
                    iVar53 = *(int *)(puVar76 + 0xb);
                    lVar73 = puVar76[1];
                    *(uint **)(lVar73 + (long)iVar53 * 8) = puVar65;
                    *(int *)(puVar76 + 0xb) = iVar53 + 1;
                    if (*(int *)((long)puVar76 + 0x5c) <= iVar53 + 1) {
                      (**(code **)(*(long *)*puVar76 + 0x28))
                                ((long *)*puVar76,lVar73 + (long)(iVar53 + -5) * 8,6);
                      *(int *)(puVar76 + 0xb) = iVar53 + -5;
                      lVar63 = local_2a0;
                      plVar67 = local_2a8;
                      uVar57 = local_2ac;
                    }
                  }
                  else {
                    do {
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(puVar65,0x10);
                      if (bVar8) {
                        *puVar65 = *puVar65 - uVar56;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                  }
                  *(undefined4 *)(param_6 + 5) = 0;
                  *(undefined1 *)(param_6[3] + 0xc) = 1;
                  uVar60 = *(uint *)((long)param_6 + 0x14);
                  puVar78 = (uint *)*param_6;
                  pauVar80 = (undefined1 (*) [16])param_6[1];
                }
                param_6[4] = (long)puVar78;
                *(uint *)(param_6 + 5) = uVar60;
              }
              goto joined_r0x0306a2cc;
            }
            param_6[1] = 0;
          }
          uVar46 = 0xff000000ff000000;
          pauVar80 = (undefined1 (*) [16])0x0;
          pauVar54 = pauStack_268;
          uVar77 = local_270;
        }
        else {
          pauVar80 = (undefined1 (*) [16])(param_6[1] + uVar74 * 0x10);
          param_6[1] = (long)pauVar80;
joined_r0x0306a2cc:
          pauVar54 = pauStack_268;
          uVar77 = local_270;
          if (pauVar80 == (undefined1 (*) [16])0x0) {
            uVar46 = 0xff000000ff000000;
          }
          else {
            uVar46 = (ulong)*(uint *)*pauVar80 & 0xffffff |
                     (ulong)(*(uint *)((long)*pauVar80 + 4) & 0xffffff) << 0x20;
          }
        }
      }
    } while ((uVar77 | uVar46) != 0xff000000ff000000);
    if ((((~uVar38 & 0xffffff) != 0) && ((char)puVar69[1] != '\0')) &&
       (*(char *)((long)puVar69 + 5) != '\0')) {
      plVar44 = *(long **)(*(long *)(local_1d0 + 8) + 0x658);
      (**(code **)(*plVar44 + 0x60))
                (plVar44,local_238,
                 *(long *)(local_1d0 + 0x500) + ((ulong)*puVar69 & 0xffffff) * 0x20);
      *(undefined1 *)(puVar69 + 1) = 0;
    }
  }
  puVar68 = puVar69 + 0x18;
  puVar76 = local_110;
  if (*(long *)puVar68 == 0) goto joined_r0x0306a45c;
  if (*(char *)((long)puVar69 + 0x7a) == '\0') {
    FUN_0301e778(puVar69,local_1d0,local_1d8);
    puVar76 = local_110;
    goto joined_r0x0306a45c;
  }
  puVar1 = puVar69 + 0x14;
  uVar41 = **(undefined8 **)(puVar69 + 0x12);
  *(undefined4 *)(*(long *)puVar68 + 8) = 0x7777;
  plVar44 = *(long **)(puVar69 + 0x12);
  iVar53 = *(int *)((long)plVar44 + 0x1c);
  uVar38 = iVar53 + *(int *)(*plVar44 + 8) + puVar69[0x17];
  if (uVar38 != 0) {
    puVar65 = *(uint **)puVar1;
    puVar78 = (uint *)plVar44[2];
    if (puVar65 == puVar78) {
      uVar82 = *(ushort *)((long)puVar69 + 0x5a);
LAB_0306a3ac:
      sVar59 = (short)iVar53;
    }
    else {
      uVar82 = *(ushort *)((long)puVar69 + 0x5a);
      if ((uint)uVar82 == (*puVar65 & 0xffff)) {
        puVar65 = *(uint **)(puVar65 + 2);
        puVar69[0x16] = 0;
        uVar82 = 0;
        puVar78 = (uint *)plVar44[2];
        uVar35 = 0;
        if (puVar65 == (uint *)plVar44[2]) goto LAB_0306aec4;
      }
      else {
        uVar35 = uVar82;
        if (puVar65 == puVar78) {
LAB_0306aec4:
          uVar82 = uVar35;
          puVar65 = puVar78;
          iVar53 = *(int *)((long)plVar44 + 0x1c);
          goto LAB_0306a3ac;
        }
      }
      sVar59 = (short)*puVar65;
    }
    *(ushort *)((long)puVar69 + 0x5a) = sVar59 - uVar82;
    *(uint **)puVar1 = puVar65;
  }
  puVar69[0x17] = uVar38;
  uVar38 = *(uint *)((long)plVar44 + 0x1c);
  lVar39 = *plVar44;
  if (uVar38 == 0) {
    piVar70 = (int *)(lVar39 + 0x18);
    iVar53 = *piVar70;
    if (iVar53 < 2) goto LAB_0306a3dc;
    puVar76 = (undefined8 *)plVar44[1];
    iVar42 = *(int *)(puVar76 + 0xb);
    lVar63 = *(long *)(*(long *)(lVar39 + 0x10) + (long)(iVar53 + -2) * 8);
    lVar52 = puVar76[1];
    *(undefined8 *)(lVar52 + (long)iVar42 * 8) =
         *(undefined8 *)(*(long *)(lVar39 + 0x10) + (long)(iVar53 + -1) * 8);
    *(int *)(puVar76 + 0xb) = iVar42 + 1;
    if (*(int *)((long)puVar76 + 0x5c) <= iVar42 + 1) {
      (**(code **)(*(long *)*puVar76 + 0x28))((long *)*puVar76,lVar52 + (long)(iVar42 + -5) * 8,6);
      *(int *)(puVar76 + 0xb) = iVar42 + -5;
    }
    *(undefined8 *)(lVar63 + 8) = 0;
    uVar38 = 0xffffffff;
  }
  else {
LAB_0306a3dc:
    puVar78 = (uint *)plVar44[2];
    piVar70 = (int *)(lVar39 + 8);
    lVar39 = plVar44[3];
    puVar78[2] = 0;
    puVar78[3] = 0;
    *puVar78 = *puVar78 & 0xffff0000 | uVar38 & 0xffff;
    *puVar78 = *puVar78 & 0xffff | (int)lVar39 << 0x10;
  }
  *piVar70 = *piVar70 + uVar38;
  *plVar44 = 0;
  plVar44[2] = 0;
  FUN_032bf658(*(undefined8 *)(puVar69 + 0x12),uVar41,puVar1);
  plVar44 = *(long **)(puVar69 + 0x12);
  lVar39 = plVar44[3];
  iVar53 = *(int *)((long)plVar44 + 0x1c);
  iVar42 = *(int *)(*plVar44 + 8);
  *(long *)(puVar69 + 0x14) = plVar44[2];
  *(short *)(puVar69 + 0x16) = (short)lVar39;
  *(short *)((long)puVar69 + 0x5a) = (short)iVar53;
  puVar69[0x17] = -(iVar53 + iVar42);
  puVar68[0] = 0;
  puVar68[1] = 0;
  puVar69[0x1a] = 0;
  puVar69[0x1b] = 0;
  puVar76 = local_110;
joined_r0x0306a45c:
  local_110 = puVar76;
  if ((local_108 != (uint *)0x0) && (local_120[0] != 0)) {
    if (local_100 == (*local_108 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_120[0] + 0x10) + (long)(int)local_108[1] * 8) = 0;
      *(undefined1 *)(local_120[0] + 0xc) = 1;
      iVar53 = *(int *)(puVar76 + 0xb);
      lVar39 = puVar76[1];
      *(uint **)(lVar39 + (long)iVar53 * 8) = local_108;
      *(int *)(puVar76 + 0xb) = iVar53 + 1;
      if (*(int *)((long)puVar76 + 0x5c) <= iVar53 + 1) {
        (**(code **)(*(long *)*puVar76 + 0x28))((long *)*puVar76,lVar39 + (long)(iVar53 + -5) * 8,6)
        ;
        *(int *)(puVar76 + 0xb) = iVar53 + -5;
      }
    }
    else {
      do {
        cVar7 = '\x01';
        bVar36 = (bool)ExclusiveMonitorPass(local_108,0x10);
        if (bVar36) {
          *local_108 = *local_108 - local_100;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  local_108 = (uint *)0x0;
  if ((local_fc != 0) && (*(char *)(local_120[0] + 0xc) == '\0')) {
    FUN_032bff9c(local_120);
  }
  puVar76 = local_1b8;
  lVar39 = *(long *)(local_1d0 + 0x4b0);
  *(undefined8 *)(lVar39 + 0x10) = 0;
  *(undefined8 *)(lVar39 + 0x20) = 0;
  *(undefined8 *)(lVar39 + 0x38) = 0;
  *(undefined8 *)(lVar39 + 0x40) = 0;
  if ((local_1b0 != (uint *)0x0) && (local_1c8[0] != 0)) {
    if (local_1a8 == (*local_1b0 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_1c8[0] + 0x10) + (long)(int)local_1b0[1] * 8) = 0;
      *(undefined1 *)(local_1c8[0] + 0xc) = 1;
      iVar53 = *(int *)(local_1b8 + 0xb);
      lVar39 = local_1b8[1];
      *(uint **)(lVar39 + (long)iVar53 * 8) = local_1b0;
      *(int *)(local_1b8 + 0xb) = iVar53 + 1;
      if (*(int *)((long)local_1b8 + 0x5c) <= iVar53 + 1) {
        (**(code **)(*(long *)*local_1b8 + 0x28))
                  ((long *)*local_1b8,lVar39 + (long)(iVar53 + -5) * 8,6);
        *(int *)(puVar76 + 0xb) = iVar53 + -5;
      }
    }
    else {
      do {
        cVar7 = '\x01';
        bVar36 = (bool)ExclusiveMonitorPass(local_1b0,0x10);
        if (bVar36) {
          *local_1b0 = *local_1b0 - local_1a8;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  if ((local_1a4 != 0) && (local_1b0 = (uint *)0x0, *(char *)(local_1c8[0] + 0xc) == '\0')) {
    FUN_032bff9c(local_1c8);
  }
  return;
}


