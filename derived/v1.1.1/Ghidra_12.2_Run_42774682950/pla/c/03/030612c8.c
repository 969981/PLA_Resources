/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030612c8; name: FUN_030612c8
 */


void FUN_030612c8(long param_1,long *param_2,uint param_3,uint param_4,char *param_5,long *param_6,
                 long param_7,long *param_8,long *param_9,long param_10,long param_11,
                 undefined8 *param_12,undefined8 *param_13,long param_14,long *param_15,
                 long param_16,ulong param_17,ulong param_18,long param_19)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint **ppuVar29;
  uint5 uVar30;
  unkbyte9 Var31;
  ushort uVar32;
  bool bVar33;
  uint uVar34;
  long *plVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  ulong uVar38;
  undefined8 uVar39;
  short sVar40;
  int iVar41;
  int iVar42;
  undefined4 *puVar43;
  long lVar44;
  long *plVar45;
  ulong uVar46;
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  code *pcVar49;
  ulong uVar50;
  undefined1 (*pauVar51) [16];
  long *plVar52;
  long lVar53;
  long lVar54;
  uint *puVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  ulong uVar58;
  uint *puVar59;
  uint *puVar60;
  long lVar61;
  undefined1 (*pauVar62) [16];
  ushort uVar63;
  uint uVar64;
  uint uVar65;
  undefined4 *puVar66;
  long *plVar67;
  undefined1 (*pauVar68) [16];
  ulong uVar69;
  ulong uVar70;
  long lVar71;
  uint *puVar72;
  long lVar73;
  uint *puVar74;
  int *piVar75;
  long lVar76;
  undefined8 *puVar77;
  uint *puVar78;
  byte bVar79;
  ushort uVar80;
  int iVar81;
  uint uVar82;
  float fVar83;
  undefined8 uVar84;
  int iVar89;
  int iVar91;
  undefined1 auVar85 [12];
  undefined1 auVar86 [16];
  float fVar90;
  float fVar92;
  undefined1 auVar87 [16];
  float fVar93;
  float fVar94;
  undefined1 auVar88 [16];
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined4 uVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  long local_398;
  undefined1 (*local_360) [16];
  undefined1 (*local_350) [16];
  long local_300;
  uint *local_2c0;
  uint *local_2b8;
  long local_2b0;
  long *local_2a8;
  uint *local_2a0;
  ulong local_298;
  ulong local_290;
  long *local_288;
  uint local_27c;
  uint *local_278;
  uint local_270;
  uint local_26c;
  char *local_268;
  long *local_260;
  long local_258;
  undefined1 (*local_250) [16];
  undefined8 *local_248;
  ulong local_240;
  long local_238;
  undefined1 (*local_230) [16];
  long local_228;
  long *local_220;
  long local_218;
  long *local_210;
  undefined8 *local_208;
  long local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  uint local_1e4;
  undefined8 *local_1e0;
  undefined1 (*local_1d8) [16];
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
  long *local_180;
  uint local_178;
  long local_170;
  long local_168;
  undefined1 (*local_160) [16];
  undefined1 (*local_158) [16];
  ulong local_150;
  long *local_148;
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
  undefined1 (*local_90) [16];
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
  *(long *)(puVar43 + 8) = param_19;
  *(long **)(puVar43 + 0x12) = param_15;
  *(long **)(puVar43 + 0xe) = param_15;
  *(long *)(puVar43 + 0x10) = param_16;
  if (param_15 != (long *)0x0) {
    iVar42 = *(int *)(*param_15 + 8);
    lVar44 = param_15[3];
    iVar41 = *(int *)((long)param_15 + 0x1c);
    *(long *)(puVar43 + 0x14) = param_15[2];
    *(short *)(puVar43 + 0x16) = (short)lVar44;
    *(short *)((long)puVar43 + 0x5a) = (short)iVar41;
    puVar43[0x17] = -(iVar41 + iVar42);
  }
  if (param_16 == 0) {
    *(long **)(puVar43 + 0x10) = param_15;
  }
  *(int *)(*(long *)(param_1 + 0x4b0) + 8) = (int)param_2[5];
  local_110 = *(undefined8 **)(param_1 + 0x4e0);
  local_120[0] = *param_2;
  local_108 = (uint *)0x0;
  local_fc = 0;
  lVar44 = *(long *)(param_1 + 8);
  local_1e4 = *(uint *)(lVar44 + 0x5c);
  puVar72 = *(uint **)(param_1 + 0x4b0);
  *(undefined1 (***) [16])(puVar72 + 10) = &local_158;
  *(undefined1 (***) [16])(puVar72 + 0xc) = &local_190;
  local_1d0 = param_2[2];
  plVar45 = *(long **)(*(long *)(param_1 + 8) + 0x4b8);
  local_230 = (undefined1 (*) [16])param_6[1];
  local_27c = param_3;
  local_268 = param_5;
  local_238 = param_1;
  local_220 = param_2;
  local_218 = param_7;
  local_210 = param_6;
  if (*(int *)(param_1 + 0x760) == 0) {
    local_300 = 0;
LAB_03061404:
    local_2b0 = 0;
joined_r0x0306162c:
    if (local_230 != (undefined1 (*) [16])0x0) goto LAB_03061410;
LAB_03061630:
    local_1f0 = (undefined8 *)0xff000000ff000000;
  }
  else {
    lVar61 = tpidr_el0;
    lVar71 = *(long *)(lVar61 + 0x38d490);
    if (lVar71 == 0) {
      lVar71 = FUN_0333d16c(0,1);
      *(long *)(lVar61 + 0x38d490) = lVar71;
    }
    local_300 = *(long *)(lVar71 + 0x10);
    puVar77 = *(undefined8 **)(local_300 + 8);
    if (*(undefined8 **)(local_300 + 0x18) <= puVar77) goto LAB_03061404;
    if (*(int *)(local_238 + 0x760) == 0) {
LAB_03061620:
      local_2b0 = 1;
      goto joined_r0x0306162c;
    }
    if (local_300 == 0) {
      local_300 = 0;
      goto LAB_03061620;
    }
    lVar61 = (long)*(int *)(local_238 + 0x760) * 4;
    local_2b0 = 1;
    puVar43 = *(undefined4 **)(local_238 + 0x758);
    while( true ) {
      lVar61 = lVar61 + -4;
      if (puVar77 != (undefined8 *)0x0) {
        puVar66 = (undefined4 *)((long)puVar77 + 0x13U & 0xfffffffffffffffc);
        uVar46 = (long)puVar66 + 0xbU & 0xfffffffffffffff8;
        if (uVar46 <= *(ulong *)(local_300 + 0x10)) {
          uVar102 = *puVar43;
          *(ulong *)(local_300 + 8) = uVar46;
          *puVar77 = &DAT_038f7b98;
          puVar77[1] = &DAT_04356710;
          if (puVar66 != (undefined4 *)0x0) {
            *puVar66 = uVar102;
          }
        }
      }
      if (lVar61 == 0) break;
      puVar43 = puVar43 + 1;
      puVar77 = *(undefined8 **)(local_300 + 8);
    }
    if (local_230 == (undefined1 (*) [16])0x0) goto LAB_03061630;
LAB_03061410:
    local_1f0 = (undefined8 *)
                ((ulong)*(uint *)*local_230 & 0xffffff |
                (ulong)(*(uint *)((long)*local_230 + 4) & 0xffffff) << 0x20);
  }
  plVar52 = *(long **)(local_218 + 8);
  if (plVar52 == (long *)0x0) {
LAB_03061530:
    local_250 = (undefined1 (*) [16])0x0;
    local_1f8 = (undefined8 *)0xff000000ff000000;
  }
  else {
    local_250 = (undefined1 (*) [16])(*plVar52 + (ulong)*(ushort *)(plVar52 + 1) + 0x20);
    if (local_250 == (undefined1 (*) [16])0x0) goto LAB_03061530;
    local_1f8 = (undefined8 *)
                ((ulong)*(uint *)*local_250 & 0xffffff |
                (ulong)(*(uint *)(*plVar52 + (ulong)*(ushort *)(plVar52 + 1) + 0x24) & 0xffffff) <<
                0x20);
  }
  if (((ulong)local_1f8 | (ulong)local_1f0) != 0xff000000ff000000) {
    local_2a8 = local_210 + 7;
    local_240 = param_18;
    local_278 = puVar72 + 0x18;
    puVar74 = puVar72 + 0x14;
    local_2b8 = puVar72 + 0xe;
    local_2c0 = puVar72 + 0x10;
    bVar33 = local_2b0 != 0;
    local_270 = param_4 & 1;
    local_200 = param_11;
    local_26c = 0xffffff;
    local_1e0 = (undefined8 *)0xffffffffffffffff;
    local_228 = param_10;
    local_260 = param_9;
    local_248 = param_12;
    uVar63 = 1;
    do {
      local_1d8 = local_230;
      puVar77 = local_1f0;
      if (local_1f8 <= local_1f0) {
        local_1d8 = local_250;
        puVar77 = local_1f8;
      }
      uVar46 = (ulong)*(byte *)((long)*local_1d8 + 9);
      local_258 = uVar46 << 4;
      if (puVar77 == local_1e0) {
        plVar52 = local_2a8;
        if (local_1f8 <= local_1f0) {
          plVar52 = local_260;
        }
        local_f0 = CONCAT44(local_f0._4_4_,*(uint *)((long)*local_1d8 + 4));
        local_f8 = *(uint *)*local_1d8;
        if (*(long *)(puVar72 + 0x18) != 0) {
          if (*(char *)((long)puVar72 + 0x7a) == '\0') {
            FUN_0301e778(puVar72,local_238,local_220);
          }
          else {
            uVar39 = **(undefined8 **)(puVar72 + 0x12);
            *(undefined4 *)(*(long *)(puVar72 + 0x18) + 8) = 0x7777;
            plVar67 = *(long **)(puVar72 + 0x12);
            uVar65 = *(uint *)((long)plVar67 + 0x1c);
            uVar34 = uVar65 + *(int *)(*plVar67 + 8) + puVar72[0x17];
            if (uVar34 != 0) {
              puVar55 = *(uint **)puVar74;
              puVar78 = (uint *)plVar67[2];
              if (puVar55 == puVar78) {
                uVar80 = *(ushort *)((long)puVar72 + 0x5a);
              }
              else {
                uVar80 = *(ushort *)((long)puVar72 + 0x5a);
                if ((uint)uVar80 == (*puVar55 & 0xffff)) {
                  uVar80 = 0;
                  puVar55 = *(uint **)(puVar55 + 2);
                  puVar72[0x16] = 0;
                  puVar78 = (uint *)plVar67[2];
                  if (puVar55 != (uint *)plVar67[2]) goto LAB_030635dc;
                }
                else if (puVar55 != puVar78) {
LAB_030635dc:
                  uVar65 = *puVar55;
                  goto LAB_03062cc0;
                }
                puVar55 = puVar78;
                uVar65 = *(uint *)((long)plVar67 + 0x1c);
              }
LAB_03062cc0:
              *(ushort *)((long)puVar72 + 0x5a) = (short)uVar65 - uVar80;
              *(uint **)(puVar72 + 0x14) = puVar55;
            }
            puVar72[0x17] = uVar34;
            uVar34 = *(uint *)((long)plVar67 + 0x1c);
            lVar61 = *plVar67;
            if (uVar34 == 0) {
              piVar75 = (int *)(lVar61 + 0x18);
              iVar41 = *piVar75;
              if (iVar41 < 2) goto LAB_03062cec;
              puVar77 = (undefined8 *)plVar67[1];
              iVar42 = *(int *)(puVar77 + 0xb);
              lVar76 = *(long *)(*(long *)(lVar61 + 0x10) + (long)(iVar41 + -2) * 8);
              lVar71 = puVar77[1];
              *(undefined8 *)(lVar71 + (long)iVar42 * 8) =
                   *(undefined8 *)(*(long *)(lVar61 + 0x10) + (long)(iVar41 + -1) * 8);
              *(int *)(puVar77 + 0xb) = iVar42 + 1;
              if (*(int *)((long)puVar77 + 0x5c) <= iVar42 + 1) {
                (**(code **)(*(long *)*puVar77 + 0x28))
                          ((long *)*puVar77,lVar71 + (long)(iVar42 + -5) * 8,6);
                *(int *)(puVar77 + 0xb) = iVar42 + -5;
              }
              *(undefined8 *)(lVar76 + 8) = 0;
              uVar34 = 0xffffffff;
            }
            else {
LAB_03062cec:
              puVar78 = (uint *)plVar67[2];
              piVar75 = (int *)(lVar61 + 8);
              lVar61 = plVar67[3];
              puVar78[2] = 0;
              puVar78[3] = 0;
              *puVar78 = *puVar78 & 0xffff0000 | uVar34 & 0xffff;
              *puVar78 = *puVar78 & 0xffff | (int)lVar61 << 0x10;
            }
            *piVar75 = *piVar75 + uVar34;
            *plVar67 = 0;
            plVar67[2] = 0;
            FUN_032bf658(*(undefined8 *)(puVar72 + 0x12),uVar39,puVar74);
            plVar67 = *(long **)(puVar72 + 0x12);
            lVar61 = plVar67[3];
            iVar41 = *(int *)((long)plVar67 + 0x1c);
            iVar42 = *(int *)(*plVar67 + 8);
            *(long *)(puVar72 + 0x14) = plVar67[2];
            *(short *)(puVar72 + 0x16) = (short)lVar61;
            *(short *)((long)puVar72 + 0x5a) = (short)iVar41;
            puVar72[0x17] = -(iVar41 + iVar42);
            local_278[0] = 0;
            local_278[1] = 0;
            local_278[2] = 0;
            local_278[3] = 0;
          }
        }
        local_198[0] = 0xffffffff;
        puVar59 = (uint *)&local_f0;
        plVar67 = *(long **)(*(long *)(local_238 + 0x40) +
                             (ulong)(byte)*(uint *)((long)*local_1d8 + 8) * 8 + 0x13b8);
        pcVar49 = *(code **)(*plVar67 + 0x18);
        puVar78 = &local_f8;
        puVar55 = local_198;
        pauVar68 = local_1d8;
LAB_03062874:
        local_1a0[0] = 0xffffffff;
        (*pcVar49)(plVar67,local_238,local_220,pauVar68,plVar52,puVar59,puVar78,puVar55,local_1a0);
LAB_03061ce8:
        if (local_1d8 == (undefined1 (*) [16])local_210[1]) {
          uVar34 = *(int *)((long)local_210 + 0x14) - 1;
          *(uint *)((long)local_210 + 0x14) = uVar34;
          if ((int)uVar34 < 1) {
            uVar65 = *(uint *)(local_210 + 2);
            if (uVar65 == 0) {
              local_230 = (undefined1 (*) [16])0x0;
              local_1f0 = (undefined8 *)0xff000000ff000000;
              *local_210 = 0;
              local_210[1] = 0;
            }
            else {
              puVar78 = *(uint **)(*local_210 + 8);
              *local_210 = (long)puVar78;
              if (puVar78 != (uint *)0x0) {
                uVar64 = *puVar78 & 0xffff;
                if ((int)uVar65 <= (int)(*puVar78 & 0xffff)) {
                  uVar64 = uVar65;
                }
                if ((int)uVar64 < 1) {
                  pauVar68 = (undefined1 (*) [16])0x0;
                  local_210[1] = 0;
                }
                else {
                  pauVar68 = (undefined1 (*) [16])(puVar78 + 8);
                  *(uint *)(local_210 + 2) = uVar65 - uVar64;
                  *(uint *)((long)local_210 + 0x14) = uVar64;
                  local_210[1] = (long)pauVar68;
                  Hint_Prefetch(*(long *)(puVar78 + 2),0,0,0);
                  Hint_Prefetch(*(long *)(puVar78 + 2) + 0x40,0,0,0);
                  Hint_Prefetch(puVar78 + 0x20,0,0,0);
                  Hint_Prefetch(puVar78 + 0x30,0,0,0);
                  uVar34 = uVar64;
                }
                puVar55 = (uint *)local_210[4];
                if (puVar78 != puVar55) {
                  uVar65 = *(uint *)(local_210 + 5);
                  if (uVar65 != 0) {
                    if (uVar65 == (*puVar55 & 0xffff)) {
                      lVar61 = local_210[3];
                      puVar77 = (undefined8 *)local_210[6];
                      *(undefined8 *)(*(long *)(lVar61 + 0x10) + (long)(int)puVar55[1] * 8) = 0;
                      *(undefined1 *)(lVar61 + 0xc) = 1;
                      iVar41 = *(int *)(puVar77 + 0xb);
                      lVar61 = puVar77[1];
                      *(uint **)(lVar61 + (long)iVar41 * 8) = puVar55;
                      *(int *)(puVar77 + 0xb) = iVar41 + 1;
                      if (*(int *)((long)puVar77 + 0x5c) <= iVar41 + 1) {
                        (**(code **)(*(long *)*puVar77 + 0x28))
                                  ((long *)*puVar77,lVar61 + (long)(iVar41 + -5) * 8,6);
                        *(int *)(puVar77 + 0xb) = iVar41 + -5;
                      }
                    }
                    else {
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(puVar55,0x10);
                        if (bVar4) {
                          *puVar55 = *puVar55 - uVar65;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    *(undefined4 *)(local_210 + 5) = 0;
                    *(undefined1 *)(local_210[3] + 0xc) = 1;
                    uVar34 = *(uint *)((long)local_210 + 0x14);
                    puVar78 = (uint *)*local_210;
                    pauVar68 = (undefined1 (*) [16])local_210[1];
                  }
                  local_210[4] = (long)puVar78;
                  *(uint *)(local_210 + 5) = uVar34;
                }
                goto joined_r0x03062978;
              }
              local_230 = (undefined1 (*) [16])0x0;
              local_1f0 = (undefined8 *)0xff000000ff000000;
              local_210[1] = 0;
            }
          }
          else {
            pauVar68 = (undefined1 (*) [16])((long)*(undefined1 (*) [16])local_210[1] + local_258);
            local_210[1] = (long)pauVar68;
joined_r0x03062978:
            local_230 = pauVar68;
            if (local_230 == (undefined1 (*) [16])0x0) {
              local_230 = (undefined1 (*) [16])0x0;
              local_1f0 = (undefined8 *)0xff000000ff000000;
            }
            else {
              local_1f0 = (undefined8 *)
                          ((ulong)*(uint *)*local_230 & 0xffffff |
                          (ulong)(*(uint *)((long)*local_230 + 4) & 0xffffff) << 0x20);
            }
          }
        }
        else {
          puVar55 = (uint *)**(undefined8 **)(local_218 + 8);
          puVar78 = (uint *)param_8[3];
          if (puVar78 == puVar55) {
            iVar41 = (int)param_8[4] + 1;
          }
          else {
            if ((puVar78 != (uint *)0x0) && (lVar61 = *param_8, lVar61 != 0)) {
              uVar34 = *(uint *)(param_8 + 4);
              if (uVar34 == (*puVar78 & 0xffff)) {
                puVar77 = (undefined8 *)param_8[2];
                *(undefined8 *)(*(long *)(lVar61 + 0x10) + (long)(int)puVar78[1] * 8) = 0;
                *(undefined1 *)(lVar61 + 0xc) = 1;
                iVar41 = *(int *)(puVar77 + 0xb);
                lVar61 = puVar77[1];
                *(uint **)(lVar61 + (long)iVar41 * 8) = puVar78;
                *(int *)(puVar77 + 0xb) = iVar41 + 1;
                if (*(int *)((long)puVar77 + 0x5c) <= iVar41 + 1) {
                  (**(code **)(*(long *)*puVar77 + 0x28))
                            ((long *)*puVar77,lVar61 + (long)(iVar41 + -5) * 8,6);
                  *(int *)(puVar77 + 0xb) = iVar41 + -5;
                }
              }
              else {
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar78,0x10);
                  if (bVar4) {
                    *puVar78 = *puVar78 - uVar34;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
            }
            iVar41 = 1;
            param_8[3] = (long)puVar55;
          }
          lVar61 = local_218;
          *(int *)(param_8 + 4) = iVar41;
          iVar41 = *(int *)(local_218 + 0x14) + -1;
          *(int *)(local_218 + 0x14) = iVar41;
          if (iVar41 < 1) {
            FUN_032bfafc(local_218);
            plVar52 = *(long **)(lVar61 + 8);
            if (plVar52 != (long *)0x0) goto LAB_03061e30;
          }
          else {
            plVar52 = (long *)(*(long *)(local_218 + 8) + 0x10);
            *(long **)(local_218 + 8) = plVar52;
            if (plVar52 != (long *)0x0) {
LAB_03061e30:
              local_250 = (undefined1 (*) [16])(*plVar52 + (ulong)*(ushort *)(plVar52 + 1) + 0x20);
              if (local_250 != (undefined1 (*) [16])0x0) {
                local_1f8 = (undefined8 *)
                            ((ulong)*(uint *)*local_250 & 0xffffff |
                            (ulong)(*(uint *)(*plVar52 + (ulong)*(ushort *)(plVar52 + 1) + 0x24) &
                                   0xffffff) << 0x20);
                goto LAB_03061674;
              }
            }
          }
          local_250 = (undefined1 (*) [16])0x0;
          local_1f8 = (undefined8 *)0xff000000ff000000;
        }
LAB_03061674:
        uVar46 = (ulong)local_1f0 | (ulong)local_1f8;
      }
      else {
        if ((*local_268 != '\0') &&
           ((uVar63 != 0 || (*(uint *)((long)*local_1d8 + 4) != local_26c)))) {
          if (local_300 != 0) {
            puVar77 = *(undefined8 **)(local_300 + 8);
            uVar46 = (long)puVar77 + 0x17U & 0xfffffffffffffff8;
            if ((uVar46 <= *(ulong *)(local_300 + 0x10)) &&
               (*(ulong *)(local_300 + 8) = uVar46, puVar77 != (undefined8 *)0x0)) {
              *puVar77 = "TtGenerateWorkItems";
              uVar39 = nn::os::GetSystemTick();
              puVar77[1] = uVar39;
            }
          }
          goto LAB_030621a8;
        }
        if (*(int *)(local_248 + 3) < 0xe01) {
          pauVar68 = (undefined1 (*) [16])(local_248[2] + (long)*(int *)(local_248 + 3) + 0x20);
        }
        else {
          pauVar68 = (undefined1 (*) [16])FUN_032bf82c();
          uVar46 = (ulong)*(byte *)((long)*local_1d8 + 9);
        }
        pauVar47 = local_1d8;
        pauVar51 = local_1d8;
        pauVar48 = local_1d8;
        pauVar56 = pauVar68;
        pauVar62 = pauVar68;
        pauVar57 = pauVar68;
        switch((int)uVar46) {
        case 0xe:
          pauVar51 = local_1d8 + 1;
          uVar39 = *(undefined8 *)*local_1d8;
          pauVar62 = pauVar68 + 1;
          *(undefined8 *)((long)*pauVar68 + 8) = *(undefined8 *)((long)*local_1d8 + 8);
          *(undefined8 *)*pauVar68 = uVar39;
        case 0xd:
          pauVar47 = pauVar51 + 1;
          uVar39 = *(undefined8 *)*pauVar51;
          pauVar56 = pauVar62 + 1;
          *(undefined8 *)((long)*pauVar62 + 8) = *(undefined8 *)((long)*pauVar51 + 8);
          *(undefined8 *)*pauVar62 = uVar39;
        case 0xc:
          pauVar48 = pauVar47 + 1;
          uVar39 = *(undefined8 *)*pauVar47;
          pauVar57 = pauVar56 + 1;
          *(undefined8 *)((long)*pauVar56 + 8) = *(undefined8 *)((long)*pauVar47 + 8);
          *(undefined8 *)*pauVar56 = uVar39;
        case 0xb:
          pauVar51 = pauVar48 + 1;
          uVar39 = *(undefined8 *)*pauVar48;
          pauVar62 = pauVar57 + 1;
          *(undefined8 *)((long)*pauVar57 + 8) = *(undefined8 *)((long)*pauVar48 + 8);
          *(undefined8 *)*pauVar57 = uVar39;
        case 10:
          pauVar47 = pauVar51 + 1;
          uVar39 = *(undefined8 *)*pauVar51;
          pauVar56 = pauVar62 + 1;
          *(undefined8 *)((long)*pauVar62 + 8) = *(undefined8 *)((long)*pauVar51 + 8);
          *(undefined8 *)*pauVar62 = uVar39;
        case 9:
          pauVar51 = pauVar47 + 1;
          uVar39 = *(undefined8 *)*pauVar47;
          pauVar62 = pauVar56 + 1;
          *(undefined8 *)((long)*pauVar56 + 8) = *(undefined8 *)((long)*pauVar47 + 8);
          *(undefined8 *)*pauVar56 = uVar39;
        case 8:
          pauVar47 = pauVar51 + 1;
          uVar39 = *(undefined8 *)*pauVar51;
          pauVar56 = pauVar62 + 1;
          *(undefined8 *)((long)*pauVar62 + 8) = *(undefined8 *)((long)*pauVar51 + 8);
          *(undefined8 *)*pauVar62 = uVar39;
        case 7:
          pauVar51 = pauVar47 + 1;
          uVar39 = *(undefined8 *)*pauVar47;
          pauVar62 = pauVar56 + 1;
          *(undefined8 *)((long)*pauVar56 + 8) = *(undefined8 *)((long)*pauVar47 + 8);
          *(undefined8 *)*pauVar56 = uVar39;
        case 6:
          pauVar47 = pauVar51 + 1;
          uVar39 = *(undefined8 *)*pauVar51;
          pauVar56 = pauVar62 + 1;
          *(undefined8 *)((long)*pauVar62 + 8) = *(undefined8 *)((long)*pauVar51 + 8);
          *(undefined8 *)*pauVar62 = uVar39;
        case 5:
          pauVar51 = pauVar47 + 1;
          uVar39 = *(undefined8 *)*pauVar47;
          pauVar62 = pauVar56 + 1;
          *(undefined8 *)((long)*pauVar56 + 8) = *(undefined8 *)((long)*pauVar47 + 8);
          *(undefined8 *)*pauVar56 = uVar39;
        case 4:
          pauVar47 = pauVar51 + 1;
          uVar39 = *(undefined8 *)*pauVar51;
          pauVar56 = pauVar62 + 1;
          *(undefined8 *)((long)*pauVar62 + 8) = *(undefined8 *)((long)*pauVar51 + 8);
          *(undefined8 *)*pauVar62 = uVar39;
        case 3:
          pauVar51 = pauVar47 + 1;
          uVar39 = *(undefined8 *)*pauVar47;
          pauVar62 = pauVar56 + 1;
          *(undefined8 *)((long)*pauVar56 + 8) = *(undefined8 *)((long)*pauVar47 + 8);
          *(undefined8 *)*pauVar56 = uVar39;
        case 2:
          pauVar47 = pauVar51 + 1;
          uVar39 = *(undefined8 *)*pauVar51;
          pauVar56 = pauVar62 + 1;
          *(undefined8 *)((long)*pauVar62 + 8) = *(undefined8 *)((long)*pauVar51 + 8);
          *(undefined8 *)*pauVar62 = uVar39;
        case 1:
          auVar86 = *pauVar47;
          *(long *)((long)*pauVar56 + 8) = auVar86._8_8_;
          *(long *)*pauVar56 = auVar86._0_8_;
        }
        local_f8 = *(uint *)((long)*pauVar68 + 4);
        uVar46 = (ulong)local_f8 & 0xffffff;
        local_198[0] = *(uint *)*pauVar68;
        plVar52 = local_2a8;
        local_1e0 = puVar77;
        if (local_1e4 < (uint)uVar46) {
LAB_03062be4:
          if (local_1f8 <= local_1f0) {
            plVar52 = local_260;
          }
          lVar61 = *(long *)(puVar72 + 0x18);
          if (lVar61 != 0) {
            if (*(char *)((long)puVar72 + 0x7a) == '\0') {
LAB_03062c08:
              FUN_0301e778(puVar72,local_238,local_220);
            }
            else {
LAB_0306273c:
              uVar39 = **(undefined8 **)(puVar72 + 0x12);
              *(undefined4 *)(lVar61 + 8) = 0x7777;
              plVar67 = *(long **)(puVar72 + 0x12);
              uVar65 = *(uint *)((long)plVar67 + 0x1c);
              uVar34 = uVar65 + *(int *)(*plVar67 + 8) + puVar72[0x17];
              if (uVar34 != 0) {
                puVar55 = *(uint **)puVar74;
                puVar78 = (uint *)plVar67[2];
                if (puVar55 == puVar78) {
                  uVar80 = *(ushort *)((long)puVar72 + 0x5a);
                }
                else {
                  uVar80 = *(ushort *)((long)puVar72 + 0x5a);
                  if ((uint)uVar80 == (*puVar55 & 0xffff)) {
                    puVar55 = *(uint **)(puVar55 + 2);
                    puVar72[0x16] = 0;
                    uVar80 = 0;
                    puVar78 = (uint *)plVar67[2];
                    uVar32 = 0;
                    if (puVar55 == (uint *)plVar67[2]) goto LAB_030636dc;
                  }
                  else {
                    uVar32 = uVar80;
                    if (puVar55 == puVar78) {
LAB_030636dc:
                      puVar55 = puVar78;
                      uVar65 = *(uint *)((long)plVar67 + 0x1c);
                      goto LAB_03062784;
                    }
                  }
                  uVar80 = uVar32;
                  uVar65 = *puVar55;
                }
LAB_03062784:
                *(ushort *)((long)puVar72 + 0x5a) = (short)uVar65 - uVar80;
                *(uint **)(puVar72 + 0x14) = puVar55;
              }
              puVar72[0x17] = uVar34;
              uVar34 = *(uint *)((long)plVar67 + 0x1c);
              lVar61 = *plVar67;
              if (uVar34 == 0) {
                piVar75 = (int *)(lVar61 + 0x18);
                iVar41 = *piVar75;
                if (iVar41 < 2) goto LAB_030627b0;
                puVar77 = (undefined8 *)plVar67[1];
                iVar42 = *(int *)(puVar77 + 0xb);
                lVar76 = *(long *)(*(long *)(lVar61 + 0x10) + (long)(iVar41 + -2) * 8);
                lVar71 = puVar77[1];
                *(undefined8 *)(lVar71 + (long)iVar42 * 8) =
                     *(undefined8 *)(*(long *)(lVar61 + 0x10) + (long)(iVar41 + -1) * 8);
                *(int *)(puVar77 + 0xb) = iVar42 + 1;
                if (*(int *)((long)puVar77 + 0x5c) <= iVar42 + 1) {
                  (**(code **)(*(long *)*puVar77 + 0x28))
                            ((long *)*puVar77,lVar71 + (long)(iVar42 + -5) * 8,6);
                  *(int *)(puVar77 + 0xb) = iVar42 + -5;
                }
                *(undefined8 *)(lVar76 + 8) = 0;
                uVar34 = 0xffffffff;
              }
              else {
LAB_030627b0:
                puVar78 = (uint *)plVar67[2];
                piVar75 = (int *)(lVar61 + 8);
                lVar61 = plVar67[3];
                puVar78[2] = 0;
                puVar78[3] = 0;
                *puVar78 = *puVar78 & 0xffff0000 | uVar34 & 0xffff;
                *puVar78 = *puVar78 & 0xffff | (int)lVar61 << 0x10;
              }
              *piVar75 = *piVar75 + uVar34;
              *plVar67 = 0;
              plVar67[2] = 0;
              FUN_032bf658(*(undefined8 *)(puVar72 + 0x12),uVar39,puVar74);
              plVar67 = *(long **)(puVar72 + 0x12);
              lVar61 = plVar67[3];
              iVar41 = *(int *)((long)plVar67 + 0x1c);
              iVar42 = *(int *)(*plVar67 + 8);
              *(long *)(puVar72 + 0x14) = plVar67[2];
              *(short *)(puVar72 + 0x16) = (short)lVar61;
              *(short *)((long)puVar72 + 0x5a) = (short)iVar41;
              puVar72[0x17] = -(iVar41 + iVar42);
              local_278[0] = 0;
              local_278[1] = 0;
              local_278[2] = 0;
              local_278[3] = 0;
            }
          }
LAB_03062830:
          local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
          plVar67 = *(long **)(*(long *)(local_238 + 0x40) +
                               (ulong)(byte)*(uint *)((long)*pauVar68 + 8) * 8 + 0x13b8);
          pcVar49 = *(code **)(*plVar67 + 0x18);
          puVar59 = &local_f8;
          puVar78 = local_198;
          puVar55 = (uint *)&local_f0;
          goto LAB_03062874;
        }
        puVar78 = (uint *)((ulong)local_198[0] & 0xffffff);
        if (local_1e4 < (uint)puVar78) goto LAB_03062be4;
        lVar71 = local_1d0 + uVar46 * 0xc0;
        lVar76 = local_1d0 + (long)puVar78 * 0xc0;
        uVar65 = *(uint *)(lVar71 + 0x80);
        uVar64 = *(uint *)(lVar76 + 0x80);
        uVar58 = local_220[3] + (ulong)uVar65 * 0x80;
        lVar61 = local_220[3] + (ulong)uVar64 * 0x80;
        Hint_Prefetch(uVar58,0,0,0);
        Hint_Prefetch(uVar58 + 0x40,0,0,0);
        Hint_Prefetch(lVar61,0,0,0);
        Hint_Prefetch(lVar61 + 0x40,0,0,0);
        uVar82 = *(uint *)(lVar71 + 0x54);
        uVar34 = *(uint *)(lVar76 + 0x54);
        uVar2 = uVar34 | uVar82;
        uVar80 = *(ushort *)(lVar76 + 0x58) | *(ushort *)(lVar71 + 0x58);
        uVar34 = uVar34 & uVar82;
        uVar70 = param_17;
        if ((uVar80 & 0xfbfd) == 0) {
          local_350 = (undefined1 (*) [16])(local_1d0 + uVar46 * 0xc0);
          local_360 = (undefined1 (*) [16])(local_1d0 + (long)puVar78 * 0xc0);
          if (local_1f8 <= local_1f0) {
            plVar52 = local_260;
          }
          if ((uVar34 >> 1 & 1) == 0) {
            uVar32 = (ushort)*(uint *)((long)*pauVar68 + 0xc);
            local_208 = local_248;
            uVar70 = local_240;
joined_r0x03062a58:
            uVar34 = (uint)uVar32;
            if (uVar32 != 0) goto LAB_03062a5c;
LAB_030618b0:
            uVar38 = (ulong)*(ushort *)(local_1d0 + uVar46 * 0xc0 + 0x8a);
            plVar67 = *(long **)(local_238 + 0x20);
            uVar69 = (ulong)*(ushort *)(local_1d0 + (long)puVar78 * 0xc0 + 0x8a);
            if (*(long *)local_278 != 0) {
              local_2a0 = puVar78;
              local_298 = uVar38;
              local_290 = uVar69;
              local_288 = plVar67;
              if (*(char *)((long)puVar72 + 0x7a) == '\0') {
                FUN_0301e778(puVar72,local_238,local_220);
                uVar38 = local_298;
                plVar67 = local_288;
                uVar69 = local_290;
                puVar78 = local_2a0;
              }
              else {
                uVar39 = **(undefined8 **)(puVar72 + 0x12);
                *(undefined4 *)(*(long *)local_278 + 8) = 0x7777;
                plVar67 = *(long **)(puVar72 + 0x12);
                uVar65 = *(uint *)((long)plVar67 + 0x1c);
                uVar34 = uVar65 + *(int *)(*plVar67 + 8) + puVar72[0x17];
                if (uVar34 != 0) {
                  puVar55 = *(uint **)puVar74;
                  puVar78 = (uint *)plVar67[2];
                  if (puVar55 == puVar78) {
                    uVar80 = *(ushort *)((long)puVar72 + 0x5a);
                  }
                  else {
                    uVar80 = *(ushort *)((long)puVar72 + 0x5a);
                    if ((uint)uVar80 == (*puVar55 & 0xffff)) {
                      puVar55 = *(uint **)(puVar55 + 2);
                      puVar72[0x16] = 0;
                      uVar80 = 0;
                      puVar78 = (uint *)plVar67[2];
                      uVar32 = 0;
                      if (puVar55 == (uint *)plVar67[2]) goto LAB_03063508;
                    }
                    else {
                      uVar32 = uVar80;
                      if (puVar55 == puVar78) {
LAB_03063508:
                        puVar55 = puVar78;
                        uVar65 = *(uint *)((long)plVar67 + 0x1c);
                        goto LAB_03061934;
                      }
                    }
                    uVar80 = uVar32;
                    uVar65 = *puVar55;
                  }
LAB_03061934:
                  *(ushort *)((long)puVar72 + 0x5a) = (short)uVar65 - uVar80;
                  *(uint **)(puVar72 + 0x14) = puVar55;
                }
                puVar72[0x17] = uVar34;
                uVar34 = *(uint *)((long)plVar67 + 0x1c);
                lVar71 = *plVar67;
                if (uVar34 == 0) {
                  piVar75 = (int *)(lVar71 + 0x18);
                  iVar41 = *piVar75;
                  if (iVar41 < 2) goto LAB_03061964;
                  puVar77 = (undefined8 *)plVar67[1];
                  iVar42 = *(int *)(puVar77 + 0xb);
                  lVar53 = *(long *)(*(long *)(lVar71 + 0x10) + (long)(iVar41 + -2) * 8);
                  lVar76 = puVar77[1];
                  *(undefined8 *)(lVar76 + (long)iVar42 * 8) =
                       *(undefined8 *)(*(long *)(lVar71 + 0x10) + (long)(iVar41 + -1) * 8);
                  *(int *)(puVar77 + 0xb) = iVar42 + 1;
                  if (*(int *)((long)puVar77 + 0x5c) <= iVar42 + 1) {
                    (**(code **)(*(long *)*puVar77 + 0x28))
                              ((long *)*puVar77,lVar76 + (long)(iVar42 + -5) * 8,6);
                    *(int *)(puVar77 + 0xb) = iVar42 + -5;
                  }
                  *(undefined8 *)(lVar53 + 8) = 0;
                  uVar34 = 0xffffffff;
                }
                else {
LAB_03061964:
                  puVar78 = (uint *)plVar67[2];
                  lVar76 = plVar67[3];
                  puVar78[2] = 0;
                  puVar78[3] = 0;
                  *puVar78 = *puVar78 & 0xffff0000 | uVar34 & 0xffff;
                  piVar75 = (int *)(lVar71 + 8);
                  *puVar78 = *puVar78 & 0xffff | (int)lVar76 << 0x10;
                }
                *piVar75 = *piVar75 + uVar34;
                *plVar67 = 0;
                plVar67[2] = 0;
                FUN_032bf658(*(undefined8 *)(puVar72 + 0x12),uVar39,puVar74);
                plVar67 = *(long **)(puVar72 + 0x12);
                lVar71 = plVar67[3];
                iVar41 = *(int *)((long)plVar67 + 0x1c);
                iVar42 = *(int *)(*plVar67 + 8);
                *(long *)(puVar72 + 0x14) = plVar67[2];
                *(short *)(puVar72 + 0x16) = (short)lVar71;
                *(short *)((long)puVar72 + 0x5a) = (short)iVar41;
                puVar72[0x17] = -(iVar41 + iVar42);
                local_278[0] = 0;
                local_278[1] = 0;
                local_278[2] = 0;
                local_278[3] = 0;
                uVar38 = local_298;
                plVar67 = local_288;
                uVar69 = local_290;
                puVar78 = local_2a0;
              }
            }
            *(ulong *)(puVar72 + 6) = uVar70;
            *(bool *)((long)puVar72 + 5) = uVar70 == local_240;
            ppuVar29 = &local_2b8;
            if (uVar70 != local_240) {
              ppuVar29 = &local_2c0;
            }
            plVar35 = *(long **)*ppuVar29;
            *(long **)(puVar72 + 0x12) = plVar35;
            if ((puVar72[2] & uVar2) == 0) {
              if (uVar70 == local_240) {
                *(bool *)(puVar72 + 0x1e) = (*(ushort *)((long)*pauVar68 + 10) & 0x90) != 0;
                goto LAB_03061e64;
              }
              bVar79 = 0;
              *(undefined1 *)(puVar72 + 0x1e) = 0;
            }
            else {
              *(undefined1 *)(puVar72 + 0x1e) = 1;
              if (uVar70 == local_240) {
LAB_03061e64:
                bVar79 = *(byte *)((long)*pauVar68 + 10) >> 4 & 1;
              }
              else {
                bVar79 = 0;
              }
            }
            *(byte *)((long)puVar72 + 0x79) = bVar79;
            iVar42 = *(int *)(*plVar35 + 8);
            lVar71 = plVar35[3];
            iVar41 = *(int *)((long)plVar35 + 0x1c);
            *(long *)(puVar72 + 0x14) = plVar35[2];
            *(short *)(puVar72 + 0x16) = (short)lVar71;
            *(short *)((long)puVar72 + 0x5a) = (short)iVar41;
            puVar72[0x17] = -(iVar41 + iVar42);
            if ((int)plVar35[3] < 0xdd1) {
              lVar71 = plVar35[2] + (long)(int)plVar35[3] + 0x20;
            }
            else {
              local_2a0 = puVar78;
              local_298 = uVar38;
              local_290 = uVar69;
              local_288 = plVar67;
              lVar71 = FUN_032bf82c();
              plVar35 = *(long **)(puVar72 + 0x12);
              uVar38 = local_298;
              plVar67 = local_288;
              uVar69 = local_290;
              puVar78 = local_2a0;
            }
            *(long *)(puVar72 + 0x18) = lVar71;
            *(int *)(plVar35 + 3) = (int)plVar35[3] + 0x10;
            *(int *)((long)plVar35 + 0x1c) = *(int *)((long)plVar35 + 0x1c) + 1;
            *(uint *)(*(long *)(puVar72 + 0x18) + 4) = *(uint *)((long)*pauVar68 + 4);
            **(uint **)(puVar72 + 0x18) = *(uint *)*pauVar68;
            *(undefined4 *)(*(long *)(puVar72 + 0x18) + 8) = 0;
            *(undefined1 *)(*(long *)(puVar72 + 0x18) + 0xe) = 0;
            *(undefined2 *)(*(long *)(puVar72 + 0x18) + 0xc) = *(undefined2 *)((long)*pauVar68 + 10)
            ;
            puVar72[0x1c] = 0;
            if ((char)puVar72[1] != '\0') {
              plVar35 = *(long **)(*(long *)(local_238 + 8) + 0x658);
              local_298 = uVar38;
              local_290 = uVar69;
              local_288 = plVar67;
              (**(code **)(*plVar35 + 0x60))
                        (plVar35,local_240,
                         *(long *)(local_238 + 0x500) + ((ulong)*puVar72 & 0xffffff) * 0x20);
              *(undefined1 *)(puVar72 + 1) = 0;
              uVar38 = local_298;
              plVar67 = local_288;
              uVar69 = local_290;
            }
            uVar34 = *(uint *)((long)*pauVar68 + 4);
            if (*puVar72 != uVar34) {
              if (uVar70 == local_240) {
                plVar35 = *(long **)(*(long *)(local_238 + 8) + 0x658);
                local_298 = uVar38;
                local_290 = uVar69;
                local_288 = plVar67;
                (**(code **)(*plVar35 + 0x58))
                          (plVar35,local_240,
                           *(long *)(local_238 + 0x500) + ((ulong)uVar34 & 0xffffff) * 0x20);
                *(undefined1 *)(puVar72 + 1) = 1;
                uVar34 = *(uint *)((long)*pauVar68 + 4);
                uVar38 = local_298;
                plVar67 = local_288;
                uVar69 = local_290;
              }
            }
            *puVar72 = uVar34;
            puVar72[0x1d] = uVar2;
            if ((local_2b0 != 0) && (local_300 != 0)) {
              lVar71 = local_1d0 + uVar46 * 0xc0;
              uVar39 = *(undefined8 *)(lVar71 + 0x68);
              Var31 = *(unkbyte9 *)(lVar71 + 0x60);
              uVar84 = *(undefined8 *)(lVar71 + 0x70);
              lVar71 = local_1d0 + (long)puVar78 * 0xc0;
              auVar86 = *(undefined1 (*) [16])(lVar71 + 0x60);
              auVar105._0_8_ = *(undefined8 *)(lVar71 + 0x70);
              puVar77 = *(undefined8 **)(local_300 + 8);
              uVar50 = (ulong)((long)puVar77 + 0x17) & 0xfffffffffffffff8;
              if (uVar50 <= *(ulong *)(local_300 + 0x10)) {
                *(ulong *)(local_300 + 8) = uVar50;
                local_298 = uVar38;
                local_290 = uVar69;
                local_288 = plVar67;
                if (puVar77 == (undefined8 *)0x0) {
                  puVar77 = (undefined8 *)&DAT_00000010;
                }
                else {
                  *puVar77 = &DAT_0398be87;
                  uVar36 = nn::os::GetSystemTick();
                  puVar77[1] = uVar36;
                  puVar77 = *(undefined8 **)(local_300 + 8);
                  uVar38 = local_298;
                  uVar69 = local_290;
                  plVar67 = local_288;
                }
              }
              if (puVar77 != (undefined8 *)0x0) {
                puVar37 = (undefined8 *)((ulong)((long)puVar77 + 0x13) & 0xfffffffffffffffc);
                uVar50 = (long)puVar37 + 0x1fU & 0xfffffffffffffff8;
                if (uVar50 <= *(ulong *)(local_300 + 0x10)) {
                  *(ulong *)(local_300 + 8) = uVar50;
                  *puVar77 = &DAT_038f7b98;
                  puVar77[1] = &DAT_04356660;
                  if (puVar37 != (undefined8 *)0x0) {
                    auVar105._8_4_ = auVar86._12_4_;
                    auVar105._12_4_ = 0;
                    auVar28._8_4_ = (int)((ulong)uVar39 >> 0x20);
                    auVar28._0_8_ = uVar84;
                    auVar28._12_4_ = 0;
                    auVar103 = NEON_fmax(auVar28,auVar105,4);
                    *puVar37 = auVar103._0_8_;
                    *(int *)(puVar37 + 1) = auVar103._8_4_;
                    auVar16[9] = (char)((ulong)uVar39 >> 8);
                    auVar16._0_9_ = Var31;
                    auVar16[10] = (char)((ulong)uVar39 >> 0x10);
                    auVar16[0xb] = (char)((ulong)uVar39 >> 0x18);
                    auVar16[0xc] = (char)((ulong)uVar39 >> 0x20);
                    auVar16[0xd] = (char)((ulong)uVar39 >> 0x28);
                    auVar16[0xe] = (char)((ulong)uVar39 >> 0x30);
                    auVar16[0xf] = (char)((ulong)uVar39 >> 0x38);
                    auVar86 = NEON_fmin(auVar16,auVar86,4);
                    *(long *)((long)puVar37 + 0xc) = auVar86._0_8_;
                    *(int *)((long)puVar37 + 0x14) = auVar86._8_4_;
                  }
                }
              }
            }
            puVar77 = local_208;
            Hint_Prefetch(local_350 + 8,0,0,0);
            Hint_Prefetch(local_350 + 0xc,0,0,0);
            local_148 = plVar67 + uVar38 * 10;
            Hint_Prefetch(local_360 + 8,0,0,0);
            Hint_Prefetch(local_360 + 0xc,0,0,0);
            bVar79 = *(byte *)((long)*pauVar68 + 0xe);
            local_138 = *(long *)(local_1d0 + uVar46 * 0xc0 + 0x78);
            if ((local_138 == 0) || (*(char *)(local_138 + 0x18) != '\x15')) {
              local_140 = 0xffffffff;
            }
            else {
              plVar35 = (long *)(local_138 + (ulong)(bVar79 >> 5) * 8 + 0x48);
              local_138 = *plVar35;
              if (local_138 == 0) {
                local_138 = 0;
              }
              else {
                local_138 = local_138 + (long)plVar35;
              }
              local_140 = (uint)(bVar79 >> 5) << 0x1d | 0x1fffffff;
            }
            local_180 = plVar67 + uVar69 * 10;
            local_170 = *(long *)(local_1d0 + (long)puVar78 * 0xc0 + 0x78);
            if ((local_170 == 0) || (*(char *)(local_170 + 0x18) != '\x15')) {
              local_178 = 0xffffffff;
            }
            else {
              plVar67 = (long *)(local_170 + (ulong)(bVar79 >> 2 & 7) * 8 + 0x48);
              local_170 = *plVar67;
              if (local_170 == 0) {
                local_170 = 0;
              }
              else {
                local_170 = local_170 + (long)plVar67;
              }
              local_178 = (uint)(bVar79 >> 2) << 0x1d | 0x1fffffff;
            }
            uVar46 = (ulong)(byte)*(uint *)((long)*pauVar68 + 8);
            local_190 = local_360;
            local_188 = lVar61;
            local_160 = local_360;
            local_158 = local_350;
            local_150 = uVar58;
            local_128 = local_350;
            if (uVar46 == 2) {
              lVar61 = *(long *)(*(long *)(local_238 + 0x40) + 0x13c8);
              iVar41 = *(int *)(param_19 + 0x738);
              local_168 = local_170;
              local_130 = local_138;
              if (iVar41 != 0) {
                local_398 = nn::os::GetSystemTick();
              }
              if ((((2 < *(byte *)((long)*pauVar68 + 9)) && (*(long *)(puVar72 + 6) != 0)) &&
                  (*(long *)pauVar68[2] != 0)) && ((*(byte *)((long)*pauVar68 + 0xb) >> 2 & 1) != 0)
                 ) {
                uVar65 = (uint)*(byte *)((long)pauVar68[9] + 6) * 0x100;
                uVar80 = (ushort)*(uint *)((long)pauVar68[9] + 4);
                uVar34 = (uint)uVar80;
                if (uVar65 <= uVar80) {
                  uVar34 = uVar65;
                }
                iVar42 = uVar34 - ((uint)*(ushort *)(local_190[5] + 10) +
                                  (uint)*(ushort *)(local_158[5] + 10));
                if (iVar42 < 1) {
                  *(int *)(param_19 + 0x30) = *(int *)(param_19 + 0x30) + 1;
                }
                else {
                  uVar80 = *(ushort *)(local_190[5] + 8) | *(ushort *)(local_158[5] + 8);
                  if ((uVar80 >> 2 & 1) == 0) {
                    if (((uVar80 >> 10 & 1) != 0) &&
                       (((short)*(uint *)((long)pauVar68[3] + 0xc) != 0x3f80 ||
                        ((*(byte *)((long)pauVar68[2] + 0xe) >> 5 & 1) != 0)))) {
                      uVar80 = *(ushort *)((long)pauVar68[8] + 6);
                      uVar39 = *(undefined8 *)(local_220[1] + 0x48);
                      fVar83 = (float)*(undefined8 *)(local_150 + 0x38) -
                               (float)*(undefined8 *)(local_188 + 0x38);
                      fVar92 = (float)((ulong)*(undefined8 *)(local_150 + 0x38) >> 0x20) -
                               (float)((ulong)*(undefined8 *)(local_188 + 0x38) >> 0x20);
                      fVar93 = *(float *)(local_150 + 0x34) - *(float *)(local_188 + 0x34);
                      fVar83 = fVar83 * fVar83;
                      fVar92 = fVar92 * fVar92;
                      fVar93 = fVar93 * fVar93;
                      fVar90 = fVar83 + fVar92 + fVar93;
                      fVar93 = fVar83 + fVar92 + fVar93;
                      uVar95 = (undefined1)((uint)fVar93 >> 8);
                      uVar96 = (undefined1)((uint)fVar93 >> 0x10);
                      uVar97 = (undefined1)((uint)fVar93 >> 0x18);
                      uVar84 = NEON_frsqrte(CONCAT17(uVar97,CONCAT16(uVar96,CONCAT15(uVar95,CONCAT14
                                                  (SUB41(fVar93,0),fVar90)))),4);
                      fVar83 = (float)uVar84;
                      fVar92 = (float)((ulong)uVar84 >> 0x20);
                      uVar84 = NEON_frsqrts(CONCAT17(uVar97,CONCAT16(uVar96,CONCAT15(uVar95,CONCAT14
                                                  (SUB41(fVar93,0),fVar90)))),
                                            CONCAT44(fVar92 * fVar92,fVar83 * fVar83),4);
                      iVar17 = -(uint)(fVar90 <= 0.0);
                      fVar90 = fVar83 * (float)uVar84 * fVar90;
                      fVar83 = *(float *)(local_220[1] + 0x20);
                      fVar92 = (float)uVar39;
                      if (uVar80 == 0) {
                        fVar93 = (float)((uint)*(ushort *)(local_158[9] + 4) << 0x10) *
                                 *(float *)(*(long *)(local_238 + 0x10) +
                                            (ulong)(byte)local_158[8][9] * 0x40 + 0x24);
                        fVar94 = (float)((uint)*(ushort *)(local_190[9] + 4) << 0x10) *
                                 *(float *)(*(long *)(local_238 + 0x10) +
                                            (ulong)(byte)local_190[8][9] * 0x40 + 0x24);
                        uVar84 = NEON_fmin(CONCAT17((char)((uint)fVar93 >> 0x18),
                                                    CONCAT16((char)((uint)fVar93 >> 0x10),
                                                             CONCAT15((char)((uint)fVar93 >> 8),
                                                                      CONCAT14(SUB41(fVar93,0),
                                                                               fVar93)))),
                                           CONCAT17((char)((uint)fVar94 >> 0x18),
                                                    CONCAT16((char)((uint)fVar94 >> 0x10),
                                                             CONCAT15((char)((uint)fVar94 >> 8),
                                                                      CONCAT14(SUB41(fVar94,0),
                                                                               fVar94)))),4);
                        auVar88._0_8_ =
                             CONCAT44((int)((float)((ulong)uVar39 >> 0x20) *
                                           (float)((ulong)uVar84 >> 0x20)),
                                      (int)(fVar92 * (float)uVar84));
                        auVar88._8_8_ = auVar88._0_8_;
                        uVar39 = NEON_sqxtun(auVar88._0_8_,auVar88,4);
                        uVar80 = (ushort)uVar39;
                        *(ushort *)((long)pauVar68[8] + 6) = uVar80;
                      }
                      iVar17 = ~(int)(fVar83 * fVar92 *
                                     (float)CONCAT13((byte)((uint)fVar90 >> 0x18) &
                                                     ~(byte)((uint)iVar17 >> 0x18),
                                                     CONCAT12((byte)((uint)fVar90 >> 0x10) &
                                                              ~(byte)((uint)iVar17 >> 0x10),
                                                              CONCAT11((byte)((uint)fVar90 >> 8) &
                                                                       ~(byte)((uint)iVar17 >> 8),
                                                                       SUB41(fVar90,0) &
                                                                       ~(byte)iVar17)))) +
                               (uint)uVar80;
                      if (iVar17 < 1) {
                        *(int *)(param_19 + 0x34) = *(int *)(param_19 + 0x34) + 1;
                        goto LAB_03063c88;
                      }
                      *(short *)((long)pauVar68[8] + 6) = (short)iVar17;
                    }
                    *(short *)((long)pauVar68[9] + 4) = (short)iVar42;
                    if (*(char *)((long)puVar72 + 0x79) == '\0') {
                      (**(code **)(**(long **)(*(long *)(local_238 + 8) + 0x658) + 0x68))();
                    }
                    else {
                      puVar37 = *(undefined8 **)local_278;
                      puVar77 = puVar37;
                      if (*(char *)((long)puVar37 + 0xe) == '\0') {
                        if (*(int *)(puVar37 + 1) != 0) {
                          lVar61 = *(long *)(puVar72 + 0x12);
                          if (*(int *)(lVar61 + 0x18) < 0xed1) {
                            puVar77 = (undefined8 *)
                                      (*(long *)(lVar61 + 0x10) + (long)*(int *)(lVar61 + 0x18) +
                                      0x20);
                          }
                          else {
                            puVar77 = (undefined8 *)FUN_032bf82c(lVar61);
                          }
                          uVar39 = puVar37[1];
                          *puVar77 = *puVar37;
                          puVar77[1] = uVar39;
                          *(undefined8 **)local_278 = puVar77;
                          *(int *)(lVar61 + 0x18) = *(int *)(lVar61 + 0x18) + 0x10;
                          *(int *)(lVar61 + 0x1c) = *(int *)(lVar61 + 0x1c) + 1;
                        }
                        iVar42 = 1;
                        *(undefined1 *)((long)puVar77 + 0xe) = 1;
                      }
                      else {
                        iVar42 = *(int *)(puVar37 + 1) + 1;
                      }
                      *(int *)(puVar77 + 1) = iVar42;
                      *(undefined1 *)((long)puVar72 + 0x7a) = 0;
                      lVar61 = (long)local_148 - *(long *)(local_238 + 0x20);
                      lVar76 = *(long *)(puVar72 + 0x12);
                      lVar71 = (long)local_180 - *(long *)(local_238 + 0x20);
                      if (*(int *)(lVar76 + 0x18) < 0xed1) {
                        puVar77 = (undefined8 *)
                                  (*(long *)(lVar76 + 0x10) + (long)*(int *)(lVar76 + 0x18) + 0x20);
                      }
                      else {
                        puVar77 = (undefined8 *)FUN_032bf82c(lVar76);
                      }
                      *puVar77 = pauVar68;
                      *(short *)(puVar77 + 1) = (short)(lVar61 >> 4) * -0x3333;
                      *(short *)((long)puVar77 + 10) = (short)(lVar71 >> 4) * -0x3333;
                      *(int *)(lVar76 + 0x18) = *(int *)(lVar76 + 0x18) + 0x10;
                      *(int *)(lVar76 + 0x1c) = *(int *)(lVar76 + 0x1c) + 1;
                    }
                    if (iVar41 != 0) {
                      lVar61 = nn::os::GetSystemTick();
                      *(long *)(param_19 + 8) = *(long *)(param_19 + 8) + (lVar61 - local_398);
                      *(int *)(param_19 + 0x10) = *(int *)(param_19 + 0x10) + 1;
                      *(long *)(param_19 + 0x40) = *(long *)(param_19 + 0x40) + (lVar61 - local_398)
                      ;
                      *(int *)(param_19 + 0x48) = *(int *)(param_19 + 0x48) + 1;
                    }
                    goto LAB_03061ca0;
                  }
                }
LAB_03063c88:
                *(undefined2 *)((long)pauVar68[8] + 6) = 0;
              }
              puVar77 = *(undefined8 **)(puVar72 + 0x18);
              lVar71 = *(long *)(puVar72 + 0x12);
              iVar42 = *(int *)(lVar71 + 0x18);
              if (*(char *)((long)puVar77 + 0xe) == '\0') {
                if (0xce0 < iVar42) goto LAB_03064a18;
LAB_03063cac:
                lVar76 = *(long *)(lVar71 + 0x10) + (long)iVar42 + 0x20;
              }
              else {
                if (iVar42 < 0xed1) {
                  puVar37 = (undefined8 *)(*(long *)(lVar71 + 0x10) + (long)iVar42 + 0x20);
                }
                else {
                  puVar37 = (undefined8 *)FUN_032bf82c(lVar71);
                }
                uVar39 = puVar77[1];
                *puVar37 = *puVar77;
                puVar37[1] = uVar39;
                *(undefined8 **)local_278 = puVar37;
                *(undefined4 *)(puVar37 + 1) = 0;
                *(undefined1 *)((long)puVar37 + 0xe) = 0;
                iVar42 = *(int *)(lVar71 + 0x18) + 0x10;
                *(int *)(lVar71 + 0x18) = iVar42;
                *(int *)(lVar71 + 0x1c) = *(int *)(lVar71 + 0x1c) + 1;
                if (iVar42 < 0xce1) goto LAB_03063cac;
LAB_03064a18:
                lVar76 = FUN_032bf82c(lVar71);
              }
              if (*(int *)(param_19 + 0x738) != 0) {
                nn::os::GetSystemTick();
              }
              uVar80 = *(ushort *)local_190[9];
              uVar84 = NEON_scvtf((ulong)CONCAT24(*(ushort *)local_158[9],
                                                  (uint)*(ushort *)local_158[9]),4);
              uVar39 = NEON_scvtf((ulong)CONCAT15((char)(uVar80 >> 8),
                                                  CONCAT14((char)uVar80,(uint)uVar80)),4);
              local_d8 = CONCAT44((float)((ulong)*(undefined8 *)(local_220[1] + 0x50) >> 0x20) *
                                  ((float)((ulong)uVar84 >> 0x20) + (float)((ulong)uVar39 >> 0x20)),
                                  (float)*(undefined8 *)(local_220[1] + 0x50) *
                                  ((float)uVar84 + (float)uVar39));
              fVar83 = *(float *)(local_130 + 0x20);
              local_f0 = CONCAT44(fVar83,fVar83);
              fVar90 = *(float *)(local_168 + 0x20);
              local_e8 = CONCAT17((char)((uint)fVar90 >> 0x18),
                                  CONCAT16((char)((uint)fVar90 >> 0x10),
                                           CONCAT15((char)((uint)fVar90 >> 8),
                                                    CONCAT14(SUB41(fVar90,0),fVar90))));
              local_e0 = CONCAT44(fVar83 + fVar90,fVar83 + fVar90);
              uVar102 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
              uVar39 = *(undefined8 *)(local_160[1] + 8);
              uVar95 = (undefined1)((ulong)uVar39 >> 8);
              uVar96 = (undefined1)((ulong)uVar39 >> 0x10);
              uVar97 = (undefined1)((ulong)uVar39 >> 0x18);
              uVar98 = (undefined1)((ulong)uVar39 >> 0x20);
              uVar99 = (undefined1)((ulong)uVar39 >> 0x28);
              uVar100 = (undefined1)((ulong)uVar39 >> 0x30);
              uVar101 = (undefined1)((ulong)uVar39 >> 0x38);
              auVar6[9] = uVar95;
              auVar6._0_9_ = *(unkbyte9 *)local_160[1];
              auVar6[10] = uVar96;
              auVar6[0xb] = uVar97;
              auVar6[0xc] = uVar98;
              auVar6[0xd] = uVar99;
              auVar6[0xe] = uVar100;
              auVar6[0xf] = uVar101;
              auVar7[9] = uVar95;
              auVar7._0_9_ = *(unkbyte9 *)local_160[1];
              auVar7[10] = uVar96;
              auVar7[0xb] = uVar97;
              auVar7[0xc] = uVar98;
              auVar7[0xd] = uVar99;
              auVar7[0xe] = uVar100;
              auVar7[0xf] = uVar101;
              NEON_ext(auVar6,auVar7,8,1);
              NEON_ext(*local_160,*local_160,8,1);
              auVar18._12_4_ = uVar102;
              auVar18._0_12_ = *(undefined1 (*) [12])local_160[2];
              auVar19._12_4_ = uVar102;
              auVar19._0_12_ = *(undefined1 (*) [12])local_160[2];
              NEON_ext(auVar18,auVar19,8,1);
              auVar86 = *local_160;
              pauVar51 = local_160 + 1;
              uVar39 = *(undefined8 *)(local_160[1] + 8);
              uVar95 = (undefined1)((ulong)uVar39 >> 8);
              uVar96 = (undefined1)((ulong)uVar39 >> 0x10);
              uVar97 = (undefined1)((ulong)uVar39 >> 0x18);
              uVar98 = (undefined1)((ulong)uVar39 >> 0x20);
              uVar99 = (undefined1)((ulong)uVar39 >> 0x28);
              uVar100 = (undefined1)((ulong)uVar39 >> 0x30);
              uVar101 = (undefined1)((ulong)uVar39 >> 0x38);
              pauVar47 = local_160 + 2;
              uVar102 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
              auVar8[9] = uVar95;
              auVar8._0_9_ = *(unkbyte9 *)*pauVar51;
              auVar8[10] = uVar96;
              auVar8[0xb] = uVar97;
              auVar8[0xc] = uVar98;
              auVar8[0xd] = uVar99;
              auVar8[0xe] = uVar100;
              auVar8[0xf] = uVar101;
              auVar9[9] = uVar95;
              auVar9._0_9_ = *(unkbyte9 *)*pauVar51;
              auVar9[10] = uVar96;
              auVar9[0xb] = uVar97;
              auVar9[0xc] = uVar98;
              auVar9[0xd] = uVar99;
              auVar9[0xe] = uVar100;
              auVar9[0xf] = uVar101;
              auVar104 = NEON_ext(auVar8,auVar9,8,1);
              auVar103 = NEON_ext(auVar86,auVar86,8,1);
              auVar20._12_4_ = uVar102;
              auVar20._0_12_ = *(undefined1 (*) [12])*pauVar47;
              auVar21._12_4_ = uVar102;
              auVar21._0_12_ = *(undefined1 (*) [12])*pauVar47;
              auVar105 = NEON_ext(auVar20,auVar21,8,1);
              fVar93 = (float)((ulong)*(undefined8 *)*pauVar47 >> 0x20);
              fVar83 = (float)*(undefined8 *)local_128[2];
              fVar90 = (float)((ulong)*(undefined8 *)local_128[2] >> 0x20);
              fVar92 = (float)*(undefined8 *)(local_128[2] + 8);
              uStack_a8 = CONCAT44(auVar105._4_4_ * fVar92 +
                                   fVar93 * fVar83 + auVar105._4_4_ * fVar90,
                                   auVar105._0_4_ * fVar92 +
                                   (float)*(undefined8 *)*pauVar47 * fVar83 + fVar93 * fVar90);
              local_b0 = CONCAT44(auVar104._0_4_ * fVar92 +
                                  (float)*(undefined8 *)*pauVar51 * fVar83 +
                                  (float)((ulong)*(undefined8 *)*pauVar51 >> 0x20) * fVar90,
                                  auVar103._0_4_ * fVar92 +
                                  auVar86._0_4_ * fVar83 + auVar86._4_4_ * fVar90);
              auVar86 = *local_160;
              pauVar51 = local_160 + 1;
              uVar39 = *(undefined8 *)(local_160[1] + 8);
              uVar95 = (undefined1)((ulong)uVar39 >> 8);
              uVar96 = (undefined1)((ulong)uVar39 >> 0x10);
              uVar97 = (undefined1)((ulong)uVar39 >> 0x18);
              uVar98 = (undefined1)((ulong)uVar39 >> 0x20);
              uVar99 = (undefined1)((ulong)uVar39 >> 0x28);
              uVar100 = (undefined1)((ulong)uVar39 >> 0x30);
              uVar101 = (undefined1)((ulong)uVar39 >> 0x38);
              pauVar47 = local_160 + 2;
              uVar102 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
              auVar10[9] = uVar95;
              auVar10._0_9_ = *(unkbyte9 *)*pauVar51;
              auVar10[10] = uVar96;
              auVar10[0xb] = uVar97;
              auVar10[0xc] = uVar98;
              auVar10[0xd] = uVar99;
              auVar10[0xe] = uVar100;
              auVar10[0xf] = uVar101;
              auVar11[9] = uVar95;
              auVar11._0_9_ = *(unkbyte9 *)*pauVar51;
              auVar11[10] = uVar96;
              auVar11[0xb] = uVar97;
              auVar11[0xc] = uVar98;
              auVar11[0xd] = uVar99;
              auVar11[0xe] = uVar100;
              auVar11[0xf] = uVar101;
              auVar104 = NEON_ext(auVar10,auVar11,8,1);
              auVar103 = NEON_ext(auVar86,auVar86,8,1);
              auVar22._12_4_ = uVar102;
              auVar22._0_12_ = *(undefined1 (*) [12])*pauVar47;
              auVar23._12_4_ = uVar102;
              auVar23._0_12_ = *(undefined1 (*) [12])*pauVar47;
              auVar105 = NEON_ext(auVar22,auVar23,8,1);
              fVar93 = (float)((ulong)*(undefined8 *)*pauVar47 >> 0x20);
              fVar83 = (float)*(undefined8 *)local_128[1];
              fVar90 = (float)((ulong)*(undefined8 *)local_128[1] >> 0x20);
              fVar92 = (float)*(undefined8 *)(local_128[1] + 8);
              fStack_b8 = auVar105._0_4_ * fVar92 +
                          (float)*(undefined8 *)*pauVar47 * fVar83 + fVar93 * fVar90;
              fStack_b4 = auVar105._4_4_ * fVar92 + fVar93 * fVar83 + auVar105._4_4_ * fVar90;
              local_c0 = (undefined1 (*) [16])
                         CONCAT44(auVar104._0_4_ * fVar92 +
                                  (float)*(undefined8 *)*pauVar51 * fVar83 +
                                  (float)((ulong)*(undefined8 *)*pauVar51 >> 0x20) * fVar90,
                                  auVar103._0_4_ * fVar92 +
                                  auVar86._0_4_ * fVar83 + auVar86._4_4_ * fVar90);
              auVar86 = *local_160;
              pauVar51 = local_160 + 1;
              uVar39 = *(undefined8 *)(local_160[1] + 8);
              uVar95 = (undefined1)((ulong)uVar39 >> 8);
              uVar96 = (undefined1)((ulong)uVar39 >> 0x10);
              uVar97 = (undefined1)((ulong)uVar39 >> 0x18);
              uVar98 = (undefined1)((ulong)uVar39 >> 0x20);
              uVar99 = (undefined1)((ulong)uVar39 >> 0x28);
              uVar100 = (undefined1)((ulong)uVar39 >> 0x30);
              uVar101 = (undefined1)((ulong)uVar39 >> 0x38);
              pauVar47 = local_160 + 2;
              uVar102 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
              auVar12[9] = uVar95;
              auVar12._0_9_ = *(unkbyte9 *)*pauVar51;
              auVar12[10] = uVar96;
              auVar12[0xb] = uVar97;
              auVar12[0xc] = uVar98;
              auVar12[0xd] = uVar99;
              auVar12[0xe] = uVar100;
              auVar12[0xf] = uVar101;
              auVar13[9] = uVar95;
              auVar13._0_9_ = *(unkbyte9 *)*pauVar51;
              auVar13[10] = uVar96;
              auVar13[0xb] = uVar97;
              auVar13[0xc] = uVar98;
              auVar13[0xd] = uVar99;
              auVar13[0xe] = uVar100;
              auVar13[0xf] = uVar101;
              auVar104 = NEON_ext(auVar12,auVar13,8,1);
              auVar103 = NEON_ext(auVar86,auVar86,8,1);
              auVar24._12_4_ = uVar102;
              auVar24._0_12_ = *(undefined1 (*) [12])*pauVar47;
              auVar25._12_4_ = uVar102;
              auVar25._0_12_ = *(undefined1 (*) [12])*pauVar47;
              auVar105 = NEON_ext(auVar24,auVar25,8,1);
              fVar93 = (float)((ulong)*(undefined8 *)*pauVar47 >> 0x20);
              fVar83 = (float)*(undefined8 *)*local_128;
              fVar90 = (float)((ulong)*(undefined8 *)*local_128 >> 0x20);
              fVar92 = (float)*(undefined8 *)(*local_128 + 8);
              local_d0 = auVar103._0_4_ * fVar92 + auVar86._0_4_ * fVar83 + auVar86._4_4_ * fVar90;
              fStack_cc = auVar104._0_4_ * fVar92 +
                          (float)*(undefined8 *)*pauVar51 * fVar83 +
                          (float)((ulong)*(undefined8 *)*pauVar51 >> 0x20) * fVar90;
              uStack_c8 = (undefined1 (*) [16])
                          CONCAT44(auVar105._4_4_ * fVar92 +
                                   fVar93 * fVar83 + auVar105._4_4_ * fVar90,
                                   auVar105._0_4_ * fVar92 +
                                   (float)*(undefined8 *)*pauVar47 * fVar83 + fVar93 * fVar90);
              uVar102 = (undefined4)((ulong)*(undefined8 *)(*local_160 + 8) >> 0x20);
              fVar83 = ((float)*(undefined8 *)local_128[3] - *(float *)local_160[3]) +
                       ((float)*(undefined8 *)local_128[4] - (float)*(undefined8 *)local_160[4]);
              fVar90 = ((float)((ulong)*(undefined8 *)local_128[3] >> 0x20) -
                       *(float *)(local_160[3] + 4)) +
                       ((float)((ulong)*(undefined8 *)local_128[4] >> 0x20) -
                       (float)((ulong)*(undefined8 *)local_160[4] >> 0x20));
              fVar92 = ((float)*(undefined8 *)(local_128[3] + 8) - *(float *)(local_160[3] + 8)) +
                       ((float)*(undefined8 *)(local_128[4] + 8) -
                       (float)*(undefined8 *)(local_160[4] + 8));
              auVar86 = local_160[1];
              pauVar47 = local_160 + 2;
              uVar39 = *(undefined8 *)(local_160[2] + 8);
              uVar95 = (undefined1)((ulong)uVar39 >> 8);
              uVar96 = (undefined1)((ulong)uVar39 >> 0x10);
              uVar97 = (undefined1)((ulong)uVar39 >> 0x18);
              uVar98 = (undefined1)((ulong)uVar39 >> 0x20);
              uVar99 = (undefined1)((ulong)uVar39 >> 0x28);
              uVar100 = (undefined1)((ulong)uVar39 >> 0x30);
              uVar101 = (undefined1)((ulong)uVar39 >> 0x38);
              auVar26._12_4_ = uVar102;
              auVar26._0_12_ = *(undefined1 (*) [12])*local_160;
              auVar27._12_4_ = uVar102;
              auVar27._0_12_ = *(undefined1 (*) [12])*local_160;
              auVar103 = NEON_ext(auVar26,auVar27,8,1);
              auVar104 = NEON_ext(auVar86,auVar86,8,1);
              auVar14[9] = uVar95;
              auVar14._0_9_ = *(unkbyte9 *)*pauVar47;
              auVar14[10] = uVar96;
              auVar14[0xb] = uVar97;
              auVar14[0xc] = uVar98;
              auVar14[0xd] = uVar99;
              auVar14[0xe] = uVar100;
              auVar14[0xf] = uVar101;
              auVar15[9] = uVar95;
              auVar15._0_9_ = *(unkbyte9 *)*pauVar47;
              auVar15[10] = uVar96;
              auVar15[0xb] = uVar97;
              auVar15[0xc] = uVar98;
              auVar15[0xd] = uVar99;
              auVar15[0xe] = uVar100;
              auVar15[0xf] = uVar101;
              auVar105 = NEON_ext(auVar14,auVar15,8,1);
              fVar93 = (float)((ulong)*(undefined8 *)*pauVar47 >> 0x20);
              local_80 = param_19 + 0x58;
              auVar87._0_8_ =
                   CONCAT44(auVar104._0_4_ * fVar92 +
                            auVar86._0_4_ * fVar83 + auVar86._4_4_ * fVar90,
                            auVar103._0_4_ * fVar92 +
                            (float)*(undefined8 *)*local_160 * fVar83 +
                            (float)((ulong)*(undefined8 *)*local_160 >> 0x20) * fVar90);
              auVar87._8_4_ =
                   auVar105._0_4_ * fVar92 +
                   (float)*(undefined8 *)*pauVar47 * fVar83 + fVar93 * fVar90;
              auVar87._12_4_ = auVar105._4_4_ * fVar92 + fVar93 * fVar83 + auVar105._4_4_ * fVar90;
              uStack_98 = auVar87._8_8_;
              local_88 = *(undefined8 *)(puVar72 + 4);
              plVar52 = *(long **)(lVar61 + (ulong)*(byte *)(local_130 + 0x18) * 0xf8 +
                                   (ulong)*(byte *)(local_168 + 0x18) * 8 + 0x10);
              local_a0 = auVar87._0_8_;
              local_90 = pauVar68;
              uVar34 = (**(code **)(*plVar52 + 0x20))
                                 (plVar52,local_238,local_220,&local_f0,&local_158,&local_190,
                                  pauVar68,lVar76,&local_f8);
              if (iVar41 != 0) {
                lVar61 = CONCAT44(uStack_f4,local_f8);
                lVar76 = nn::os::GetSystemTick();
                *(long *)(lVar61 + 8) = (lVar76 - local_398) + *(long *)(lVar61 + 8);
                *(int *)(lVar61 + 0x10) = *(int *)(lVar61 + 0x10) + 1;
              }
              if (0 < (int)uVar34) {
                if (*(long *)(puVar72 + 0x1a) == 0) {
                  *(long *)(puVar72 + 0x1a) =
                       *(long *)(lVar71 + 0x10) + (long)*(int *)(lVar71 + 0x18) + 0x20;
                }
                if ((int)uVar34 < 1) {
                  iVar42 = *(int *)(lVar71 + 0x18);
                }
                else {
                  iVar42 = *(int *)(lVar71 + 0x18);
                  lVar61 = *(long *)(lVar71 + 0x10) + (long)iVar42;
                  uVar65 = *(uint *)(*(long *)(lVar61 + 200) + 0x14) | puVar72[0x1c] |
                           *(uint *)(*(long *)(lVar61 + 0xd0) + 0x14);
                  if (uVar34 != 1) {
                    lVar76 = (ulong)uVar34 - 1;
                    plVar52 = (long *)(lVar61 + 0x1d0);
                    do {
                      lVar76 = lVar76 + -1;
                      uVar65 = *(uint *)(plVar52[-1] + 0x14) | uVar65 | *(uint *)(*plVar52 + 0x14);
                      plVar52 = plVar52 + 0x20;
                    } while (lVar76 != 0);
                  }
                  puVar72[0x1c] = uVar65;
                }
                *(uint *)(lVar71 + 0x18) = iVar42 + uVar34 * 0x100;
                *(int *)(lVar71 + 0x1c) = *(int *)(lVar71 + 0x1c) + 1;
                *(uint *)(*(long *)(puVar72 + 0x18) + 8) =
                     *(int *)(*(long *)(puVar72 + 0x18) + 8) + uVar34;
                *(undefined1 *)((long)puVar72 + 0x7a) = 0;
                if (1 < (int)uVar34) {
                  *(uint *)(lVar71 + 0x1c) = uVar34 + *(int *)(lVar71 + 0x1c) + -1;
                }
              }
              *(byte *)((long)*pauVar68 + 0xf) =
                   *(byte *)((long)*pauVar68 + 0xf) & 0xf7 | (0 < (int)uVar34) << 3;
              if (iVar41 != 0) {
                lVar61 = nn::os::GetSystemTick();
                *(long *)(param_19 + 8) = (lVar61 - local_398) + *(long *)(param_19 + 8);
                *(int *)(param_19 + 0x10) = *(int *)(param_19 + 0x10) + 1;
              }
            }
            else {
              plVar67 = *(long **)(*(long *)(local_238 + 0x40) + uVar46 * 8 + 0x13b8);
              if ((int)plVar67[1] == 0) {
                (**(code **)(*plVar67 + 0x10))
                          (plVar67,local_238,local_220,&local_158,local_138,&local_190,local_170,
                           pauVar68,uVar70);
              }
              else {
                plVar35 = local_208 + 5;
                uVar102 = *(undefined4 *)(local_208 + 8);
                uVar34 = *(uint *)((long)local_208 + 0x44);
                iVar41 = uVar34 + *(int *)(*plVar35 + 8);
                puVar78 = (uint *)local_208[7];
                (**(code **)(*plVar67 + 0x28))
                          (plVar67,local_238,local_220,&local_158,&local_190,pauVar68,plVar52,
                           plVar35,local_120,uVar70,puVar72,param_19,0);
                *(uint **)pauVar68[2] = puVar78;
                *(short *)((long)pauVar68[2] + 8) = (short)uVar102;
                *(short *)((long)pauVar68[2] + 10) = (short)uVar34;
                *(int *)((long)pauVar68[2] + 0xc) = -iVar41;
                uVar65 = *(uint *)((long)puVar77 + 0x44);
                uVar64 = (uVar65 + *(int *)(*plVar35 + 8)) - iVar41;
                if (uVar64 != 0) {
                  puVar55 = (uint *)local_208[7];
                  if (puVar55 != puVar78) {
                    if ((uVar34 & 0xffff) == (*puVar78 & 0xffff)) {
                      uVar34 = 0;
                      puVar78 = *(uint **)(puVar78 + 2);
                      *(uint *)((long)pauVar68[2] + 8) = 0;
                      puVar55 = (uint *)local_208[7];
                    }
                    if (puVar78 == puVar55) {
                      uVar65 = *(uint *)((long)local_208 + 0x44);
                      puVar78 = puVar55;
                    }
                    else {
                      uVar65 = *puVar78;
                    }
                  }
                  *(short *)((long)pauVar68[2] + 10) = (short)uVar65 - (short)uVar34;
                  *(uint **)pauVar68[2] = puVar78;
                }
                *(uint *)((long)pauVar68[2] + 0xc) = uVar64;
              }
            }
LAB_03061ca0:
            if (*(uint *)((long)*pauVar68 + 4) != local_26c) {
              uVar63 = (*(ushort *)((long)*pauVar68 + 10) >> 7 ^ 0xffff) & 1;
              local_26c = *(uint *)((long)*pauVar68 + 4);
            }
            if (local_300 != 0 && bVar33) {
              FUN_032d5b34(local_300,&DAT_0390f40e);
            }
          }
          else {
            if ((*(byte *)((long)*pauVar68 + 0xf) >> 1 & 1) == 0) {
              uVar32 = (ushort)*(uint *)((long)*pauVar68 + 0xc);
              local_208 = local_248;
            }
            else {
              puVar77 = *(undefined8 **)(local_238 + 0x4e0);
              puVar55 = *(uint **)(*(long *)(param_14 + 0x10) + (long)*(int *)(param_14 + 0x18) * 8
                                  + -8);
              uVar34 = *puVar55;
              local_288 = plVar52;
              if (uVar34 >> 0x13 < 0x1db) {
                local_290 = uVar58;
              }
              else {
                local_2a0 = (uint *)(param_14 + 0x1c);
                puVar59 = puVar55;
                local_290 = uVar58;
                do {
                  iVar41 = *(int *)(puVar77 + 0xb) + -1;
                  if (*(int *)(puVar77 + 0xb) < 1) {
                    lVar71 = puVar77[1];
                    (**(code **)(*(long *)*puVar77 + 0x20))((long *)*puVar77,lVar71,6);
                    *(undefined4 *)(puVar77 + 0xb) = 5;
                    puVar37 = (undefined8 *)(lVar71 + 0x28);
                  }
                  else {
                    *(int *)(puVar77 + 0xb) = iVar41;
                    puVar37 = (undefined8 *)(puVar77[1] + (long)iVar41 * 8);
                  }
                  puVar55 = (uint *)*puVar37;
                  puVar55[4] = 0;
                  puVar55[5] = 0;
                  puVar55[6] = 0;
                  puVar55[7] = 0;
                  puVar55[0] = 0;
                  puVar55[1] = 0;
                  puVar55[2] = 0;
                  puVar55[3] = 0;
                  puVar55[1] = *(uint *)(param_14 + 0x18);
                  iVar41 = *(int *)(param_14 + 0x18);
                  uVar34 = *(uint *)(param_14 + 0x1c);
                  local_298 = CONCAT44(local_298._4_4_,iVar41 + 1);
                  local_208 = (undefined8 *)CONCAT44(local_208._4_4_,iVar41);
                  if (iVar41 < (int)(uVar34 & 0x3fffffff)) {
                    lVar71 = *(long *)(param_14 + 0x10);
                  }
                  else {
                    uVar39 = *(undefined8 *)(param_14 + 0x10);
                    if (0x3ffffffe < iVar41) {
                      FUN_032bd0a8(iVar41 + 1);
                      uVar34 = *local_2a0;
                    }
                    uVar34 = (uVar34 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar34) {
                      uVar34 = 0x3fffffff;
                    }
                    uVar82 = (uint)local_298;
                    if ((int)(uint)local_298 <= (int)uVar34) {
                      uVar82 = uVar34;
                    }
                    lVar71 = FUN_032bd1d4(PTR_PTR_0434a080,uVar82,8,uVar39,
                                          (ulong)local_208 & 0xffffffff,local_2a0);
                    *(long *)(param_14 + 0x10) = lVar71;
                    local_208 = (undefined8 *)
                                CONCAT44(local_208._4_4_,*(undefined4 *)(param_14 + 0x18));
                  }
                  *(uint **)(lVar71 + (long)(int)local_208 * 8) = puVar55;
                  *(uint *)(param_14 + 0x18) = (uint)local_298;
                  *(uint **)(puVar59 + 2) = puVar55;
                  uVar34 = *puVar55;
                  puVar59 = puVar55;
                } while (0x1da < uVar34 >> 0x13);
              }
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar55,0x10);
                if (bVar4) {
                  *puVar55 = *puVar55 + 0x80001;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              *(int *)(param_14 + 8) = *(int *)(param_14 + 8) + 1;
              *(uint *)((long)puVar55 + (ulong)(uVar34 >> 0x10) + 0x20) = uVar65;
              *(uint *)((long)puVar55 + (ulong)(uVar34 >> 0x10) + 0x24) = uVar64;
              local_208 = local_248;
              uVar58 = local_290;
LAB_03063ba8:
              uVar32 = (ushort)*(uint *)((long)*pauVar68 + 0xc);
              plVar52 = local_288;
            }
            uVar34 = (uint)uVar32;
            if (uVar34 == 0) goto LAB_030618b0;
LAB_03062a5c:
            if (((char)*(uint *)((long)*pauVar68 + 8) == '\x02') &&
               ((*(uint *)((long)pauVar68[1] + 8) & 0xffffff) != 0x7f7f7f)) {
              uVar39 = *(undefined8 *)((long)pauVar68[1] + 8);
              bVar79 = (byte)((ulong)uVar39 >> 8);
              auVar86._0_4_ = (CONCAT12(bVar79,(ushort)(byte)uVar39) & 0xffff) - 0x7f;
              auVar86._4_4_ = bVar79 - 0x7f;
              auVar86._8_4_ = (byte)((ulong)uVar39 >> 0x10) - 0x7f;
              auVar86._12_4_ = (byte)((ulong)uVar39 >> 0x18) - 0x7f;
              auVar86 = NEON_scvtf(auVar86,4);
              lVar71 = local_220[1];
              fVar90 = auVar86._0_4_ * 0.007874016;
              fVar92 = auVar86._4_4_ * 0.007874016;
              fVar93 = auVar86._8_4_ * 0.007874016;
              fVar94 = auVar86._12_4_ * 0.007874016;
              auVar104._0_4_ = fVar90 * (*(float *)(lVar61 + 0x60) - *(float *)(uVar58 + 0x60));
              auVar104._4_4_ = fVar92 * (*(float *)(lVar61 + 100) - *(float *)(uVar58 + 100));
              auVar104._8_4_ = fVar93 * (*(float *)(lVar61 + 0x68) - *(float *)(uVar58 + 0x68));
              auVar104._12_4_ = fVar94 * (*(float *)(lVar61 + 0x6c) - *(float *)(uVar58 + 0x6c));
              fVar83 = (float)*(undefined8 *)(lVar71 + 0x48);
              auVar103._0_4_ =
                   fVar90 * ((float)*(undefined8 *)(lVar61 + 0x38) -
                            (float)*(undefined8 *)(uVar58 + 0x38));
              auVar103._4_4_ =
                   fVar92 * ((float)((ulong)*(undefined8 *)(lVar61 + 0x38) >> 0x20) -
                            (float)((ulong)*(undefined8 *)(uVar58 + 0x38) >> 0x20));
              auVar103._8_4_ =
                   fVar93 * ((float)((ulong)*(undefined8 *)(lVar61 + 0x30) >> 0x20) -
                            (float)((ulong)*(undefined8 *)(uVar58 + 0x30) >> 0x20));
              auVar103._12_4_ = fVar94 * 0.0;
              auVar105 = NEON_ext(auVar103,auVar103,8,1);
              lVar76 = local_1d0 + uVar46 * 0xc0;
              lVar53 = local_1d0 + (long)puVar78 * 0xc0;
              auVar86 = NEON_ext(auVar104,auVar104,8,1);
              iVar41 = (uint)*(ushort *)(lVar53 + 0x5e) + (uint)*(ushort *)(lVar76 + 0x5e) +
                       (int)((float)*(undefined8 *)(lVar71 + 0x20) * fVar83 *
                            (auVar103._0_4_ + auVar103._4_4_ + auVar105._0_4_));
              uVar65 = (uint)*(ushort *)(lVar53 + 0x92) + (uint)*(ushort *)(lVar76 + 0x92);
              uVar64 = (uint)((float)*(undefined8 *)(lVar71 + 0x10) *
                              (auVar104._0_4_ + auVar104._4_4_ + auVar86._0_4_) * fVar83);
            }
            else {
              lVar71 = local_1d0 + uVar46 * 0xc0;
              lVar76 = local_1d0 + (long)puVar78 * 0xc0;
              uVar64 = (uint)*(ushort *)(lVar71 + 0x90);
              uVar65 = (uint)*(ushort *)(lVar76 + 0x90);
              iVar41 = (uint)*(ushort *)(lVar76 + 0x5c) + (uint)*(ushort *)(lVar71 + 0x5c);
            }
            iVar41 = (uVar34 - iVar41) - (uVar80 >> 10 & 1);
            if (iVar41 <= (int)(uVar65 + uVar64)) goto LAB_030618b0;
            *(short *)((long)*pauVar68 + 0xc) = (short)iVar41;
          }
          *(uint *)(local_208 + 3) =
               *(int *)(local_208 + 3) + (uint)*(byte *)((long)*pauVar68 + 9) * 0x10;
          *(int *)((long)local_208 + 0x1c) = *(int *)((long)local_208 + 0x1c) + 1;
          goto LAB_03061ce8;
        }
        lVar53 = local_1d0 + uVar46 * 0xc0;
        lVar54 = local_1d0 + (long)puVar78 * 0xc0;
        iVar41 = -(uint)((float)*(undefined8 *)(lVar53 + 0x70) <=
                        (float)*(undefined8 *)(lVar54 + 0x60));
        iVar42 = -(uint)((float)((ulong)*(undefined8 *)(lVar53 + 0x70) >> 0x20) <=
                        (float)((ulong)*(undefined8 *)(lVar54 + 0x60) >> 0x20));
        iVar17 = -(uint)(*(float *)(lVar53 + 0x6c) <= (float)*(undefined8 *)(lVar54 + 0x68));
        iVar81 = -(uint)((float)*(undefined8 *)(lVar54 + 0x70) <= *(float *)(lVar53 + 0x60));
        iVar89 = -(uint)((float)((ulong)*(undefined8 *)(lVar54 + 0x70) >> 0x20) <=
                        *(float *)(lVar53 + 100));
        iVar91 = -(uint)((float)((ulong)*(undefined8 *)(lVar54 + 0x68) >> 0x20) <=
                        *(float *)(lVar53 + 0x68));
        uVar82 = CONCAT13((byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar41 >> 0x18),
                          CONCAT12((byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar41 >> 0x10),
                                   CONCAT11((byte)((uint)iVar81 >> 8) & (byte)((uint)iVar41 >> 8),
                                            (byte)iVar81 & (byte)iVar41)));
        auVar85._0_8_ =
             CONCAT17((byte)((uint)iVar89 >> 0x18) & (byte)((uint)iVar42 >> 0x18),
                      CONCAT16((byte)((uint)iVar89 >> 0x10) & (byte)((uint)iVar42 >> 0x10),
                               CONCAT15((byte)((uint)iVar89 >> 8) & (byte)((uint)iVar42 >> 8),
                                        CONCAT14((byte)iVar89 & (byte)iVar42,uVar82))));
        auVar85[8] = (byte)iVar91 & (byte)iVar17;
        auVar85[9] = (byte)((uint)iVar91 >> 8) & (byte)((uint)iVar17 >> 8);
        auVar85[10] = (byte)((uint)iVar91 >> 0x10) & (byte)((uint)iVar17 >> 0x10);
        auVar85[0xb] = (byte)((uint)iVar91 >> 0x18) & (byte)((uint)iVar17 >> 0x18);
        if ((local_270 & uVar80) != 0 ||
            (uVar82 & (uint)((ulong)auVar85._0_8_ >> 0x20) & auVar85._8_4_) == 0) {
          if (local_1f8 <= local_1f0) {
            plVar52 = local_260;
          }
          lVar61 = *(long *)(puVar72 + 0x18);
          if (lVar61 != 0) {
            if (*(char *)((long)puVar72 + 0x7a) == '\0') goto LAB_03062c08;
            goto LAB_0306273c;
          }
          goto LAB_03062830;
        }
        if (local_200 == 0) {
          if ((uVar2 >> 3 & 1) != 0) goto LAB_03061850;
          if (local_1f8 <= local_1f0) {
            plVar52 = local_260;
          }
          if (*(short *)((long)*pauVar68 + 10) < 0) {
            if (*(int *)(param_13 + 3) < 0xe01) {
              pauVar68 = (undefined1 (*) [16])(param_13[2] + (long)*(int *)(param_13 + 3) + 0x20);
            }
            else {
              pauVar68 = (undefined1 (*) [16])FUN_032bf82c(param_13);
            }
            bVar79 = *(byte *)((long)*local_1d8 + 9);
            uVar65 = (uint)bVar79;
            pauVar51 = pauVar68;
            pauVar47 = local_1d8;
            uVar34 = uVar65;
            if ((bVar79 + (bVar79 == 0) & 1) != 0) {
              uVar34 = *(uint *)((long)*local_1d8 + 8);
              uVar64 = *(uint *)((long)*local_1d8 + 0xc);
              *(undefined8 *)*pauVar68 = *(undefined8 *)*local_1d8;
              *(uint *)((long)*pauVar68 + 8) = uVar34;
              *(uint *)((long)*pauVar68 + 0xc) = uVar64;
              pauVar51 = pauVar68 + 1;
              pauVar47 = local_1d8 + 1;
              uVar34 = uVar65 - 1;
            }
            if (uVar65 != (bVar79 != 0)) {
              do {
                uVar34 = uVar34 - 2;
                uVar65 = *(uint *)((long)*pauVar47 + 8);
                uVar64 = *(uint *)((long)*pauVar47 + 0xc);
                *(undefined8 *)*pauVar51 = *(undefined8 *)*pauVar47;
                *(uint *)((long)*pauVar51 + 8) = uVar65;
                *(uint *)((long)*pauVar51 + 0xc) = uVar64;
                uVar65 = *(uint *)((long)pauVar47[1] + 8);
                uVar64 = *(uint *)((long)pauVar47[1] + 0xc);
                *(undefined8 *)pauVar51[1] = *(undefined8 *)pauVar47[1];
                *(uint *)((long)pauVar51[1] + 8) = uVar65;
                *(uint *)((long)pauVar51[1] + 0xc) = uVar64;
                pauVar47 = pauVar47 + 2;
                pauVar51 = pauVar51 + 2;
              } while (0 < (int)uVar34);
            }
            uVar70 = 0;
            local_208 = param_13;
            goto LAB_03061890;
          }
          uVar46 = (ulong)(byte)*(uint *)((long)*pauVar68 + 8);
          lVar61 = *(long *)(local_238 + 0x40);
          if ((uVar46 == 2) && (2 < *(byte *)((long)*pauVar68 + 9))) {
            if (*(long *)pauVar68[2] != 0) {
              *(byte *)((long)*pauVar68 + 0xf) = *(byte *)((long)*pauVar68 + 0xf) | 8;
            }
            *(uint *)((long)(pauVar68 + 2) + 0) = 0;
            *(uint *)((long)(pauVar68 + 2) + 4) = 0;
            *(undefined2 *)((long)pauVar68[2] + 8) = 0;
          }
          plVar67 = *(long **)(lVar61 + uVar46 * 8 + 0x13b8);
          if ((int)plVar67[1] != 0) {
            (**(code **)(*plVar67 + 0x30))(plVar67,pauVar68,plVar52,param_13 + 5);
          }
          bVar79 = *(byte *)((long)*pauVar68 + 9);
          uVar34 = (uint)bVar79;
          if ((int)(uVar34 * 0x10 + *(int *)(param_13 + 3)) < 0xee1) {
            puVar77 = (undefined8 *)(param_13[2] + (long)*(int *)(param_13 + 3) + 0x20);
          }
          else {
            puVar77 = (undefined8 *)FUN_032bf82c(param_13);
          }
          uVar65 = (uint)bVar79;
          if (((uint)bVar79 + (uint)(uVar34 == 0) & 1) != 0) {
            uVar65 = *(uint *)((long)*pauVar68 + 8);
            uVar64 = *(uint *)((long)*pauVar68 + 0xc);
            *puVar77 = *(undefined8 *)*pauVar68;
            *(uint *)(puVar77 + 1) = uVar65;
            *(uint *)((long)puVar77 + 0xc) = uVar64;
            puVar77 = puVar77 + 2;
            pauVar68 = pauVar68 + 1;
            uVar65 = bVar79 - 1;
          }
          if ((bool)bVar79 != (uVar34 != 0)) {
            do {
              uVar65 = uVar65 - 2;
              uVar64 = *(uint *)((long)*pauVar68 + 8);
              uVar82 = *(uint *)((long)*pauVar68 + 0xc);
              *puVar77 = *(undefined8 *)*pauVar68;
              *(uint *)(puVar77 + 1) = uVar64;
              *(uint *)((long)puVar77 + 0xc) = uVar82;
              uVar64 = *(uint *)((long)pauVar68[1] + 8);
              uVar82 = *(uint *)((long)pauVar68[1] + 0xc);
              puVar77[2] = *(undefined8 *)pauVar68[1];
              *(uint *)(puVar77 + 3) = uVar64;
              *(uint *)((long)puVar77 + 0x1c) = uVar82;
              pauVar68 = pauVar68 + 2;
              puVar77 = puVar77 + 4;
            } while (0 < (int)uVar65);
          }
          *(uint *)(param_13 + 3) = *(int *)(param_13 + 3) + uVar34 * 0x10;
          *(int *)((long)param_13 + 0x1c) = *(int *)((long)param_13 + 0x1c) + 1;
          goto LAB_03061ce8;
        }
        if ((uVar80 & 0x808) == 0) {
LAB_03061850:
          uVar70 = local_240;
          if (((uVar34 >> 1 & 1) != 0) &&
             (uVar70 = param_17, (*(byte *)((long)*local_1d8 + 0xf) >> 1 & 1) != 0)) {
            local_208 = *(undefined8 **)(local_238 + 0x4e0);
            puVar55 = *(uint **)(*(long *)(param_14 + 0x10) + (long)*(int *)(param_14 + 0x18) * 8 +
                                -8);
            uVar34 = *puVar55;
            if (uVar34 >> 0x13 < 0x1db) {
              local_290 = uVar58;
            }
            else {
              local_2a0 = (uint *)(param_14 + 0x1c);
              puVar59 = puVar55;
              local_290 = uVar58;
              do {
                puVar77 = local_208;
                iVar41 = *(int *)(local_208 + 0xb) + -1;
                if (*(int *)(local_208 + 0xb) < 1) {
                  local_288 = (long *)local_208[1];
                  (**(code **)(*(long *)*local_208 + 0x20))((long *)*local_208,local_288,6);
                  *(undefined4 *)(puVar77 + 0xb) = 5;
                  plVar52 = local_288 + 5;
                }
                else {
                  *(int *)(local_208 + 0xb) = iVar41;
                  plVar52 = (long *)(local_208[1] + (long)iVar41 * 8);
                }
                puVar55 = (uint *)*plVar52;
                puVar55[4] = 0;
                puVar55[5] = 0;
                puVar55[6] = 0;
                puVar55[7] = 0;
                puVar55[0] = 0;
                puVar55[1] = 0;
                puVar55[2] = 0;
                puVar55[3] = 0;
                puVar55[1] = *(uint *)(param_14 + 0x18);
                iVar41 = *(int *)(param_14 + 0x18);
                uVar34 = *(uint *)(param_14 + 0x1c);
                local_298 = CONCAT44(local_298._4_4_,iVar41 + 1);
                local_288 = (long *)CONCAT44(local_288._4_4_,iVar41);
                if (iVar41 < (int)(uVar34 & 0x3fffffff)) {
                  lVar53 = *(long *)(param_14 + 0x10);
                }
                else {
                  uVar39 = *(undefined8 *)(param_14 + 0x10);
                  if (0x3ffffffe < iVar41) {
                    FUN_032bd0a8(iVar41 + 1);
                    uVar34 = *local_2a0;
                  }
                  uVar34 = (uVar34 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar34) {
                    uVar34 = 0x3fffffff;
                  }
                  uVar82 = (uint)local_298;
                  if ((int)(uint)local_298 <= (int)uVar34) {
                    uVar82 = uVar34;
                  }
                  lVar53 = FUN_032bd1d4(PTR_PTR_0434a080,uVar82,8,uVar39,
                                        (ulong)local_288 & 0xffffffff,local_2a0);
                  *(long *)(param_14 + 0x10) = lVar53;
                  local_288 = (long *)CONCAT44(local_288._4_4_,*(undefined4 *)(param_14 + 0x18));
                }
                *(uint **)(lVar53 + (long)(int)local_288 * 8) = puVar55;
                *(uint *)(param_14 + 0x18) = (uint)local_298;
                *(uint **)(puVar59 + 2) = puVar55;
                uVar34 = *puVar55;
                puVar59 = puVar55;
              } while (0x1da < uVar34 >> 0x13);
            }
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar55,0x10);
              if (bVar4) {
                *puVar55 = *puVar55 + 0x80001;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            *(int *)(param_14 + 8) = *(int *)(param_14 + 8) + 1;
            *(uint *)((long)puVar55 + (ulong)(uVar34 >> 0x10) + 0x20) = uVar65;
            *(uint *)((long)puVar55 + (ulong)(uVar34 >> 0x10) + 0x24) = uVar64;
            uVar58 = local_290;
          }
          if (((local_200 == 0) || ((uVar80 >> 5 & 1) == 0)) ||
             (*(ushort *)
               (DAT_04434b38 +
                (((ulong)(*(byte *)(*(long *)(lVar44 + 0xf8) + ((ulong)local_198[0] & 0xffffff)) + 1
                         ) & 0xff) * 0x21 +
                (ulong)(byte)(*(char *)(*(long *)(lVar44 + 0xf8) + ((ulong)local_f8 & 0xffffff)) + 1
                             )) * 2 + 0x18) == local_27c)) {
            plVar52 = local_2a8;
            if (local_1f8 <= local_1f0) {
              plVar52 = local_260;
            }
            local_208 = local_248;
LAB_03061890:
            local_360 = (undefined1 (*) [16])(local_1d0 + (long)puVar78 * 0xc0);
            local_350 = (undefined1 (*) [16])(local_1d0 + uVar46 * 0xc0);
            if ((uVar80 >> 6 & 1) == 0) {
              uVar32 = (ushort)*(uint *)((long)*pauVar68 + 0xc);
              goto joined_r0x03062a58;
            }
            local_288 = plVar52;
            if (plVar45 == (long *)0x0) {
              puVar55 = (uint *)&DAT_00000024;
            }
            else {
              puVar55 = (uint *)(**(code **)(*plVar45 + 0x48))();
            }
            bVar79 = *(byte *)((long)*pauVar68 + 0xe);
            uVar34 = (uint)puVar55 >> 5;
            if ((uVar34 & 7) == (uint)(bVar79 >> 5)) {
              if ((((uint)bVar79 ^ (uint)puVar55) & 0x1c) == 0) goto LAB_03063ba8;
            }
            local_298 = uVar70;
            local_290 = uVar58;
            if (*(long *)(puVar72 + 0x18) != 0) {
              if (*(char *)((long)puVar72 + 0x7a) == '\0') {
                FUN_0301e778(puVar72,local_238,local_220);
              }
              else {
                uVar39 = **(undefined8 **)(puVar72 + 0x12);
                *(undefined4 *)(*(long *)(puVar72 + 0x18) + 8) = 0x7777;
                plVar52 = *(long **)(puVar72 + 0x12);
                uVar64 = *(uint *)((long)plVar52 + 0x1c);
                uVar65 = uVar64 + *(int *)(*plVar52 + 8) + puVar72[0x17];
                if (uVar65 != 0) {
                  puVar60 = *(uint **)puVar74;
                  puVar59 = (uint *)plVar52[2];
                  if (puVar60 == puVar59) {
                    uVar80 = *(ushort *)((long)puVar72 + 0x5a);
                  }
                  else {
                    uVar80 = *(ushort *)((long)puVar72 + 0x5a);
                    if ((uint)uVar80 == (*puVar60 & 0xffff)) {
                      uVar80 = 0;
                      puVar60 = *(uint **)(puVar60 + 2);
                      puVar72[0x16] = 0;
                      puVar59 = (uint *)plVar52[2];
                      if (puVar60 != (uint *)plVar52[2]) goto LAB_03063600;
                    }
                    else if (puVar60 != puVar59) {
LAB_03063600:
                      uVar64 = *puVar60;
                      goto LAB_0306307c;
                    }
                    puVar60 = puVar59;
                    uVar64 = *(uint *)((long)plVar52 + 0x1c);
                  }
LAB_0306307c:
                  *(ushort *)((long)puVar72 + 0x5a) = (short)uVar64 - uVar80;
                  *(uint **)(puVar72 + 0x14) = puVar60;
                }
                puVar72[0x17] = uVar65;
                uVar65 = *(uint *)((long)plVar52 + 0x1c);
                lVar53 = *plVar52;
                local_2a0 = puVar55;
                if (uVar65 == 0) {
                  piVar75 = (int *)(lVar53 + 0x18);
                  iVar41 = *piVar75;
                  if (iVar41 < 2) goto LAB_030630ac;
                  puVar77 = (undefined8 *)plVar52[1];
                  lVar73 = *(long *)(*(long *)(lVar53 + 0x10) + (long)(iVar41 + -2) * 8);
                  iVar42 = *(int *)(puVar77 + 0xb);
                  lVar54 = puVar77[1];
                  *(undefined8 *)(lVar54 + (long)iVar42 * 8) =
                       *(undefined8 *)(*(long *)(lVar53 + 0x10) + (long)(iVar41 + -1) * 8);
                  *(int *)(puVar77 + 0xb) = iVar42 + 1;
                  if (*(int *)((long)puVar77 + 0x5c) <= iVar42 + 1) {
                    (**(code **)(*(long *)*puVar77 + 0x28))
                              ((long *)*puVar77,lVar54 + (long)(iVar42 + -5) * 8,6);
                    *(int *)(puVar77 + 0xb) = iVar42 + -5;
                  }
                  *(undefined8 *)(lVar73 + 8) = 0;
                  uVar65 = 0xffffffff;
                }
                else {
LAB_030630ac:
                  puVar55 = (uint *)plVar52[2];
                  piVar75 = (int *)(lVar53 + 8);
                  lVar53 = plVar52[3];
                  puVar55[2] = 0;
                  puVar55[3] = 0;
                  *puVar55 = *puVar55 & 0xffff0000 | uVar65 & 0xffff;
                  *puVar55 = *puVar55 & 0xffff | (int)lVar53 << 0x10;
                }
                *piVar75 = *piVar75 + uVar65;
                *plVar52 = 0;
                plVar52[2] = 0;
                FUN_032bf658(*(undefined8 *)(puVar72 + 0x12),uVar39,puVar74);
                plVar52 = *(long **)(puVar72 + 0x12);
                lVar53 = plVar52[3];
                iVar41 = *(int *)((long)plVar52 + 0x1c);
                iVar42 = *(int *)(*plVar52 + 8);
                *(long *)(puVar72 + 0x14) = plVar52[2];
                *(short *)(puVar72 + 0x16) = (short)lVar53;
                *(short *)((long)puVar72 + 0x5a) = (short)iVar41;
                puVar72[0x17] = -(iVar41 + iVar42);
                local_278[0] = 0;
                local_278[1] = 0;
                local_278[2] = 0;
                local_278[3] = 0;
                puVar55 = local_2a0;
              }
            }
            uVar65 = (uint)puVar55;
            local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
            local_1a0[0] = 0xffffffff;
            plVar52 = *(long **)(*(long *)(local_238 + 0x40) +
                                 (ulong)(byte)*(uint *)((long)*pauVar68 + 8) * 8 + 0x13b8);
            (**(code **)(*plVar52 + 0x18))
                      (plVar52,local_238,local_220,pauVar68,local_288,&local_f8,local_198,&local_f0,
                       local_1a0);
            local_138 = *(long *)(local_1d0 + uVar46 * 0xc0 + 0x78);
            if ((local_138 == 0) || (*(char *)(local_138 + 0x18) != '\x15')) {
              local_140 = 0xffffffff;
            }
            else {
              plVar52 = (long *)(local_138 + ((ulong)uVar34 & 7) * 8 + 0x48);
              local_138 = *plVar52;
              if (local_138 == 0) {
                local_138 = 0;
              }
              else {
                local_138 = local_138 + (long)plVar52;
              }
              local_140 = uVar34 << 0x1d | 0x1fffffff;
            }
            local_170 = *(long *)(local_1d0 + (long)puVar78 * 0xc0 + 0x78);
            if ((local_170 == 0) || (*(char *)(local_170 + 0x18) != '\x15')) {
              local_178 = 0xffffffff;
            }
            else {
              plVar52 = (long *)(local_170 + (ulong)(uVar65 >> 2 & 7) * 8 + 0x48);
              local_170 = *plVar52;
              if (local_170 == 0) {
                local_170 = 0;
              }
              else {
                local_170 = local_170 + (long)plVar52;
              }
              local_178 = (uVar65 >> 2) << 0x1d | 0x1fffffff;
            }
            local_d8 = *(long *)(local_238 + 8);
            local_f0 = *(undefined8 *)(local_d8 + 0x8a8);
            local_e8 = *(undefined8 *)(local_d8 + 0x898);
            local_e0 = *(long *)(local_d8 + 0x508);
            local_d8 = local_d8 + 0x530;
            bVar5 = (byte)puVar55;
            local_d0 = (float)CONCAT31(local_d0._1_3_,1);
            bVar1 = *(byte *)(local_138 + 0x19);
            bVar79 = *(byte *)(local_170 + 0x19);
            uVar34 = (uint)bVar79;
            uVar30 = CONCAT14(bVar79,(uint)bVar1);
            if (((*(byte *)(lVar71 + 0x54) & 1) == 0) &&
               (((uint)uVar46 <= (uint)puVar78 || ((*(uint *)(lVar76 + 0x54) >> 1 & 1) == 0)))) {
              uVar34 = (uint)bVar1;
              uStack_c8 = local_350;
              local_c0 = local_360;
              local_b0 = local_138;
              uStack_a8 = local_170;
              bVar1 = bVar79;
            }
            else {
              bVar5 = (byte)(uVar65 >> 3) & 0x1c | bVar5 & 3 | (byte)((uVar65 >> 2 & 7) << 5);
              uVar30 = CONCAT14(bVar1,uVar34);
              uStack_c8 = local_360;
              local_c0 = local_350;
              local_b0 = local_170;
              uStack_a8 = local_138;
            }
            local_a0 = (ulong)uVar30;
            fStack_b8 = (float)CONCAT31(fStack_b8._1_3_,bVar5);
            local_190 = local_360;
            local_158 = local_350;
            pauVar68 = (undefined1 (*) [16])
                       (**(code **)(local_e0 + (ulong)uVar34 * 0x68 + (ulong)bVar1 * 8 + 8))
                                 (&local_f0,local_248);
            if (pauVar68 != (undefined1 (*) [16])0x0) {
              uVar34 = (uint)*(byte *)((long)*pauVar68 + 9);
              if (uVar34 != 0) {
                *(uint *)(local_248 + 3) = *(int *)(local_248 + 3) + uVar34 * -0x10;
                *(int *)((long)local_248 + 0x1c) = *(int *)((long)local_248 + 0x1c) + -1;
              }
              *(undefined2 *)((long)*pauVar68 + 0xc) = 0;
              uVar58 = local_290;
              plVar52 = local_288;
              uVar70 = local_298;
              goto LAB_030618b0;
            }
            goto LAB_03061ce8;
          }
        }
        if (*(int *)(local_228 + 0x18) < 0xed1) {
          plVar52 = (long *)(*(long *)(local_228 + 0x10) + (long)*(int *)(local_228 + 0x18) + 0x20);
        }
        else {
          plVar52 = (long *)FUN_032bf82c();
        }
        lVar61 = local_200;
        if (local_1d8 == (undefined1 (*) [16])local_210[1]) {
          sVar40 = ((short)local_1d8 - (short)*local_210) + -0x20;
          *plVar52 = *local_210;
        }
        else {
          plVar67 = *(long **)(local_218 + 8);
          *plVar52 = *plVar67;
          sVar40 = (short)plVar67[1];
        }
        *(short *)(plVar52 + 1) = sVar40;
        *(undefined1 *)((long)plVar52 + 0xb) = 2;
        *(uint *)((long)plVar52 + 0xc) = local_27c;
        uVar34 = *(uint *)(local_200 + 0x1000);
        if (uVar34 == 0x100) {
          FUN_030600f0(*(undefined8 *)(local_200 + 0x1008),local_200,0x100);
          uVar34 = 0;
          *(undefined4 *)(lVar61 + 0x1000) = 0;
        }
        lVar71 = local_218;
        puVar77 = (undefined8 *)(lVar61 + (ulong)uVar34 * 0x10);
        *(uint *)(lVar61 + 0x1000) = uVar34 + 1;
        *puVar77 = *(undefined8 *)(local_228 + 0x10);
        *(short *)(puVar77 + 1) = (short)*(undefined4 *)(local_228 + 0x18);
        *(int *)(local_228 + 0x18) = *(int *)(local_228 + 0x18) + 0x10;
        *(int *)(local_228 + 0x1c) = *(int *)(local_228 + 0x1c) + 1;
        if (local_1d8 == (undefined1 (*) [16])local_210[1]) {
          uVar34 = *(int *)((long)local_210 + 0x14) - 1;
          *(uint *)((long)local_210 + 0x14) = uVar34;
          uVar65 = (int)local_210[5] - 1;
          *(uint *)(local_210 + 5) = uVar65;
          if ((int)uVar34 < 1) {
            uVar64 = *(uint *)(local_210 + 2);
            if (uVar64 == 0) {
              local_230 = (undefined1 (*) [16])0x0;
              local_1f0 = (undefined8 *)0xff000000ff000000;
              *local_210 = 0;
              local_210[1] = 0;
              goto LAB_03062038;
            }
            puVar78 = *(uint **)(*local_210 + 8);
            *local_210 = (long)puVar78;
            if (puVar78 == (uint *)0x0) {
              local_210[1] = 0;
            }
            else {
              uVar82 = *puVar78 & 0xffff;
              if ((int)uVar64 <= (int)(*puVar78 & 0xffff)) {
                uVar82 = uVar64;
              }
              if ((int)uVar82 < 1) {
                pauVar68 = (undefined1 (*) [16])0x0;
                local_210[1] = 0;
              }
              else {
                pauVar68 = (undefined1 (*) [16])(puVar78 + 8);
                *(uint *)(local_210 + 2) = uVar64 - uVar82;
                *(uint *)((long)local_210 + 0x14) = uVar82;
                local_210[1] = (long)pauVar68;
                Hint_Prefetch(*(long *)(puVar78 + 2),0,0,0);
                Hint_Prefetch(*(long *)(puVar78 + 2) + 0x40,0,0,0);
                Hint_Prefetch(puVar78 + 0x20,0,0,0);
                Hint_Prefetch(puVar78 + 0x30,0,0,0);
                uVar34 = uVar82;
              }
              puVar55 = (uint *)local_210[4];
              if (puVar78 == puVar55) goto LAB_0306266c;
              if (uVar65 != 0) {
                if (uVar65 == (*puVar55 & 0xffff)) {
                  lVar61 = local_210[3];
                  puVar77 = (undefined8 *)local_210[6];
                  *(undefined8 *)(*(long *)(lVar61 + 0x10) + (long)(int)puVar55[1] * 8) = 0;
                  *(undefined1 *)(lVar61 + 0xc) = 1;
                  iVar41 = *(int *)(puVar77 + 0xb);
                  lVar61 = puVar77[1];
                  *(uint **)(lVar61 + (long)iVar41 * 8) = puVar55;
                  *(int *)(puVar77 + 0xb) = iVar41 + 1;
                  if (*(int *)((long)puVar77 + 0x5c) <= iVar41 + 1) {
                    (**(code **)(*(long *)*puVar77 + 0x28))
                              ((long *)*puVar77,lVar61 + (long)(iVar41 + -5) * 8,6);
                    *(int *)(puVar77 + 0xb) = iVar41 + -5;
                  }
                }
                else {
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar55,0x10);
                    if (bVar4) {
                      *puVar55 = *puVar55 - uVar65;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                *(undefined4 *)(local_210 + 5) = 0;
                *(undefined1 *)(local_210[3] + 0xc) = 1;
                uVar34 = *(uint *)((long)local_210 + 0x14);
                puVar78 = (uint *)*local_210;
                pauVar68 = (undefined1 (*) [16])local_210[1];
              }
              local_210[4] = (long)puVar78;
              *(uint *)(local_210 + 5) = uVar34;
              if (pauVar68 != (undefined1 (*) [16])0x0) goto LAB_03062670;
            }
          }
          else {
            pauVar68 = (undefined1 (*) [16])((long)*(undefined1 (*) [16])local_210[1] + local_258);
            local_210[1] = (long)pauVar68;
LAB_0306266c:
            if (pauVar68 != (undefined1 (*) [16])0x0) {
LAB_03062670:
              local_1f0 = (undefined8 *)
                          ((ulong)*(uint *)*pauVar68 & 0xffffff |
                          (ulong)(*(uint *)((long)*pauVar68 + 4) & 0xffffff) << 0x20);
              local_230 = pauVar68;
              goto LAB_03062038;
            }
          }
          local_230 = (undefined1 (*) [16])0x0;
          local_1f0 = (undefined8 *)0xff000000ff000000;
        }
        else {
          iVar41 = *(int *)(local_218 + 0x14) + -1;
          *(int *)(local_218 + 0x14) = iVar41;
          if (iVar41 < 1) {
            FUN_032bfafc(local_218);
            plVar52 = *(long **)(lVar71 + 8);
          }
          else {
            plVar52 = (long *)(*(long *)(local_218 + 8) + 0x10);
            *(long **)(local_218 + 8) = plVar52;
          }
          if (plVar52 != (long *)0x0) {
            local_250 = (undefined1 (*) [16])(*plVar52 + (ulong)*(ushort *)(plVar52 + 1) + 0x20);
            if (local_250 != (undefined1 (*) [16])0x0) {
              local_1f8 = (undefined8 *)
                          ((ulong)*(uint *)*local_250 & 0xffffff |
                          (ulong)(*(uint *)(*plVar52 + (ulong)*(ushort *)(plVar52 + 1) + 0x24) &
                                 0xffffff) << 0x20);
              goto LAB_03062038;
            }
          }
          local_250 = (undefined1 (*) [16])0x0;
          local_1f8 = (undefined8 *)0xff000000ff000000;
        }
LAB_03062038:
        uVar46 = (ulong)local_1f0 | (ulong)local_1f8;
      }
    } while (uVar46 != 0xff000000ff000000);
    goto LAB_030623a4;
  }
LAB_030623bc:
  puVar74 = puVar72 + 0x18;
  puVar77 = local_110;
  if (*(long *)puVar74 == 0) goto joined_r0x030624c8;
  if (*(char *)((long)puVar72 + 0x7a) == '\0') {
    FUN_0301e778(puVar72,local_238,local_220);
    puVar77 = local_110;
    goto joined_r0x030624c8;
  }
  puVar78 = puVar72 + 0x14;
  uVar39 = **(undefined8 **)(puVar72 + 0x12);
  *(undefined4 *)(*(long *)puVar74 + 8) = 0x7777;
  plVar45 = *(long **)(puVar72 + 0x12);
  iVar41 = *(int *)((long)plVar45 + 0x1c);
  uVar34 = iVar41 + *(int *)(*plVar45 + 8) + puVar72[0x17];
  if (uVar34 != 0) {
    puVar59 = *(uint **)puVar78;
    puVar55 = (uint *)plVar45[2];
    if (puVar59 == puVar55) {
      uVar63 = *(ushort *)((long)puVar72 + 0x5a);
LAB_03062418:
      sVar40 = (short)iVar41;
    }
    else {
      uVar63 = *(ushort *)((long)puVar72 + 0x5a);
      if ((uint)uVar63 == (*puVar59 & 0xffff)) {
        puVar59 = *(uint **)(puVar59 + 2);
        puVar72[0x16] = 0;
        uVar63 = 0;
        puVar55 = (uint *)plVar45[2];
        uVar80 = 0;
        if (puVar59 == (uint *)plVar45[2]) goto LAB_030635b8;
      }
      else {
        uVar80 = uVar63;
        if (puVar59 == puVar55) {
LAB_030635b8:
          uVar63 = uVar80;
          puVar59 = puVar55;
          iVar41 = *(int *)((long)plVar45 + 0x1c);
          goto LAB_03062418;
        }
      }
      sVar40 = (short)*puVar59;
    }
    *(ushort *)((long)puVar72 + 0x5a) = sVar40 - uVar63;
    *(uint **)puVar78 = puVar59;
  }
  puVar72[0x17] = uVar34;
  uVar34 = *(uint *)((long)plVar45 + 0x1c);
  lVar44 = *plVar45;
  if (uVar34 == 0) {
    piVar75 = (int *)(lVar44 + 0x18);
    iVar41 = *piVar75;
    if (iVar41 < 2) goto LAB_03062448;
    puVar77 = (undefined8 *)plVar45[1];
    iVar42 = *(int *)(puVar77 + 0xb);
    lVar71 = *(long *)(*(long *)(lVar44 + 0x10) + (long)(iVar41 + -2) * 8);
    lVar61 = puVar77[1];
    *(undefined8 *)(lVar61 + (long)iVar42 * 8) =
         *(undefined8 *)(*(long *)(lVar44 + 0x10) + (long)(iVar41 + -1) * 8);
    *(int *)(puVar77 + 0xb) = iVar42 + 1;
    if (*(int *)((long)puVar77 + 0x5c) <= iVar42 + 1) {
      (**(code **)(*(long *)*puVar77 + 0x28))((long *)*puVar77,lVar61 + (long)(iVar42 + -5) * 8,6);
      *(int *)(puVar77 + 0xb) = iVar42 + -5;
    }
    *(undefined8 *)(lVar71 + 8) = 0;
    uVar34 = 0xffffffff;
  }
  else {
LAB_03062448:
    puVar55 = (uint *)plVar45[2];
    piVar75 = (int *)(lVar44 + 8);
    lVar44 = plVar45[3];
    puVar55[2] = 0;
    puVar55[3] = 0;
    *puVar55 = *puVar55 & 0xffff0000 | uVar34 & 0xffff;
    *puVar55 = *puVar55 & 0xffff | (int)lVar44 << 0x10;
  }
  *piVar75 = *piVar75 + uVar34;
  *plVar45 = 0;
  plVar45[2] = 0;
  FUN_032bf658(*(undefined8 *)(puVar72 + 0x12),uVar39,puVar78);
  plVar45 = *(long **)(puVar72 + 0x12);
  lVar44 = plVar45[3];
  iVar41 = *(int *)((long)plVar45 + 0x1c);
  iVar42 = *(int *)(*plVar45 + 8);
  *(long *)(puVar72 + 0x14) = plVar45[2];
  *(short *)(puVar72 + 0x16) = (short)lVar44;
  *(short *)((long)puVar72 + 0x5a) = (short)iVar41;
  puVar72[0x17] = -(iVar41 + iVar42);
  puVar74[0] = 0;
  puVar74[1] = 0;
  puVar72[0x1a] = 0;
  puVar72[0x1b] = 0;
  puVar77 = local_110;
joined_r0x030624c8:
  local_110 = puVar77;
  if ((local_108 != (uint *)0x0) && (local_120[0] != 0)) {
    if (local_100 == (*local_108 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_120[0] + 0x10) + (long)(int)local_108[1] * 8) = 0;
      *(undefined1 *)(local_120[0] + 0xc) = 1;
      iVar41 = *(int *)(puVar77 + 0xb);
      lVar44 = puVar77[1];
      *(uint **)(lVar44 + (long)iVar41 * 8) = local_108;
      *(int *)(puVar77 + 0xb) = iVar41 + 1;
      if (*(int *)((long)puVar77 + 0x5c) <= iVar41 + 1) {
        (**(code **)(*(long *)*puVar77 + 0x28))((long *)*puVar77,lVar44 + (long)(iVar41 + -5) * 8,6)
        ;
        *(int *)(puVar77 + 0xb) = iVar41 + -5;
      }
    }
    else {
      do {
        cVar3 = '\x01';
        bVar33 = (bool)ExclusiveMonitorPass(local_108,0x10);
        if (bVar33) {
          *local_108 = *local_108 - local_100;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  local_108 = (uint *)0x0;
  if ((local_fc != 0) && (*(char *)(local_120[0] + 0xc) == '\0')) {
    FUN_032bff9c(local_120);
  }
  puVar77 = local_1b8;
  lVar44 = *(long *)(local_238 + 0x4b0);
  *(undefined8 *)(lVar44 + 0x10) = 0;
  *(undefined8 *)(lVar44 + 0x20) = 0;
  *(undefined8 *)(lVar44 + 0x38) = 0;
  *(undefined8 *)(lVar44 + 0x40) = 0;
  if ((local_1b0 != (uint *)0x0) && (local_1c8[0] != 0)) {
    if (local_1a8 == (*local_1b0 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_1c8[0] + 0x10) + (long)(int)local_1b0[1] * 8) = 0;
      *(undefined1 *)(local_1c8[0] + 0xc) = 1;
      iVar41 = *(int *)(local_1b8 + 0xb);
      lVar44 = local_1b8[1];
      *(uint **)(lVar44 + (long)iVar41 * 8) = local_1b0;
      *(int *)(local_1b8 + 0xb) = iVar41 + 1;
      if (*(int *)((long)local_1b8 + 0x5c) <= iVar41 + 1) {
        (**(code **)(*(long *)*local_1b8 + 0x28))
                  ((long *)*local_1b8,lVar44 + (long)(iVar41 + -5) * 8,6);
        *(int *)(puVar77 + 0xb) = iVar41 + -5;
      }
    }
    else {
      do {
        cVar3 = '\x01';
        bVar33 = (bool)ExclusiveMonitorPass(local_1b0,0x10);
        if (bVar33) {
          *local_1b0 = *local_1b0 - local_1a8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  if ((local_1a4 != 0) && (local_1b0 = (uint *)0x0, *(char *)(local_1c8[0] + 0xc) == '\0')) {
    FUN_032bff9c(local_1c8);
  }
  return;
LAB_030621a8:
  puVar78 = (uint *)local_210[1];
  plVar45 = *(long **)(local_218 + 8);
  if (*(int *)(local_228 + 0x18) < 0xed1) {
    plVar52 = (long *)(*(long *)(local_228 + 0x10) + (long)*(int *)(local_228 + 0x18) + 0x20);
    if (puVar78 != (uint *)0x0) goto LAB_030622e8;
LAB_030621d8:
    if (plVar45 == (long *)0x0) goto LAB_0306239c;
    lVar61 = *plVar45;
    puVar55 = (uint *)(lVar61 + (ulong)*(ushort *)(plVar45 + 1) + 0x20);
LAB_030621ec:
    *plVar52 = lVar61;
    *(short *)(plVar52 + 1) = (short)plVar45[1];
    iVar41 = *(int *)(local_218 + 0x14) + -1;
    *(int *)(local_218 + 0x14) = iVar41;
    if (iVar41 < 1) {
      FUN_032bfafc();
    }
    else {
      *(long *)(local_218 + 8) = *(long *)(local_218 + 8) + 0x10;
    }
    puVar78 = puVar55;
    plVar45 = local_260;
  }
  else {
    plVar52 = (long *)FUN_032bf82c();
    if (puVar78 == (uint *)0x0) goto LAB_030621d8;
LAB_030622e8:
    if (plVar45 != (long *)0x0) {
      lVar61 = *plVar45;
      puVar55 = (uint *)(lVar61 + (ulong)*(ushort *)(plVar45 + 1) + 0x20);
      if (((ulong)*puVar78 & 0xffffff | (ulong)(puVar78[1] & 0xffffff) << 0x20) <
          ((ulong)*puVar55 & 0xffffff |
          (ulong)(*(uint *)(lVar61 + (ulong)*(ushort *)(plVar45 + 1) + 0x24) & 0xffffff) << 0x20))
      goto LAB_03062324;
      goto LAB_030621ec;
    }
LAB_03062324:
    lVar71 = *local_210;
    lVar61 = local_210[1];
    *plVar52 = lVar71;
    *(short *)(plVar52 + 1) = ((short)lVar61 - (short)lVar71) + -0x20;
    uVar34 = *(int *)((long)local_210 + 0x14) - 1;
    bVar79 = *(byte *)((long)puVar78 + 9);
    uVar65 = (int)local_210[5] - 1;
    *(uint *)((long)local_210 + 0x14) = uVar34;
    *(uint *)(local_210 + 5) = uVar65;
    plVar45 = local_2a8;
    if ((int)uVar34 < 1) {
      uVar64 = *(uint *)(local_210 + 2);
      if (uVar64 == 0) {
        *local_210 = 0;
        local_210[1] = 0;
      }
      else {
        puVar55 = *(uint **)(*local_210 + 8);
        *local_210 = (long)puVar55;
        if (puVar55 == (uint *)0x0) {
          local_210[1] = 0;
        }
        else {
          uVar82 = *puVar55 & 0xffff;
          if ((int)uVar64 <= (int)(*puVar55 & 0xffff)) {
            uVar82 = uVar64;
          }
          if ((int)uVar82 < 1) {
            local_210[1] = 0;
          }
          else {
            *(uint *)(local_210 + 2) = uVar64 - uVar82;
            *(uint *)((long)local_210 + 0x14) = uVar82;
            local_210[1] = (long)(puVar55 + 8);
            Hint_Prefetch(*(long *)(puVar55 + 2),0,0,0);
            Hint_Prefetch(*(long *)(puVar55 + 2) + 0x40,0,0,0);
            Hint_Prefetch(puVar55 + 0x20,0,0,0);
            Hint_Prefetch(puVar55 + 0x30,0,0,0);
            uVar34 = uVar82;
          }
          puVar59 = (uint *)local_210[4];
          if (puVar55 != puVar59) {
            if (uVar65 != 0) {
              if (uVar65 == (*puVar59 & 0xffff)) {
                lVar61 = local_210[3];
                puVar77 = (undefined8 *)local_210[6];
                *(undefined8 *)(*(long *)(lVar61 + 0x10) + (long)(int)puVar59[1] * 8) = 0;
                *(undefined1 *)(lVar61 + 0xc) = 1;
                iVar41 = *(int *)(puVar77 + 0xb);
                lVar61 = puVar77[1];
                *(uint **)(lVar61 + (long)iVar41 * 8) = puVar59;
                *(int *)(puVar77 + 0xb) = iVar41 + 1;
                if (*(int *)((long)puVar77 + 0x5c) <= iVar41 + 1) {
                  (**(code **)(*(long *)*puVar77 + 0x28))
                            ((long *)*puVar77,lVar61 + (long)(iVar41 + -5) * 8,6);
                  *(int *)(puVar77 + 0xb) = iVar41 + -5;
                }
              }
              else {
                do {
                  cVar3 = '\x01';
                  bVar33 = (bool)ExclusiveMonitorPass(puVar59,0x10);
                  if (bVar33) {
                    *puVar59 = *puVar59 - uVar65;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              *(undefined4 *)(local_210 + 5) = 0;
              *(undefined1 *)(local_210[3] + 0xc) = 1;
              puVar55 = (uint *)*local_210;
              uVar34 = *(uint *)((long)local_210 + 0x14);
            }
            local_210[4] = (long)puVar55;
            *(uint *)(local_210 + 5) = uVar34;
            plVar45 = local_2a8;
          }
        }
      }
    }
    else {
      local_210[1] = local_210[1] + (ulong)bVar79 * 0x10;
    }
  }
  lVar61 = local_200;
  puVar77 = (undefined8 *)((ulong)*puVar78 & 0xffffff | (ulong)(puVar78[1] & 0xffffff) << 0x20);
  if (local_1e0 == puVar77) {
    if (*(long *)(puVar72 + 0x18) != 0) {
      if (*(char *)((long)puVar72 + 0x7a) == '\0') {
        FUN_0301e778(puVar72,local_238,local_220);
      }
      else {
        local_1d8 = (undefined1 (*) [16])**(long **)(puVar72 + 0x12);
        *(undefined4 *)(*(long *)(puVar72 + 0x18) + 8) = 0x7777;
        plVar52 = *(long **)(puVar72 + 0x12);
        uVar65 = *(uint *)((long)plVar52 + 0x1c);
        uVar34 = uVar65 + *(int *)(*plVar52 + 8) + puVar72[0x17];
        if (uVar34 != 0) {
          puVar59 = *(uint **)puVar74;
          puVar55 = (uint *)plVar52[2];
          if (puVar59 == puVar55) {
            uVar63 = *(ushort *)((long)puVar72 + 0x5a);
          }
          else {
            uVar63 = *(ushort *)((long)puVar72 + 0x5a);
            if ((uint)uVar63 == (*puVar59 & 0xffff)) {
              uVar63 = 0;
              puVar59 = *(uint **)(puVar59 + 2);
              puVar72[0x16] = 0;
              puVar55 = (uint *)plVar52[2];
              uVar80 = 0;
              if (puVar59 == (uint *)plVar52[2]) goto LAB_03064824;
            }
            else {
              uVar80 = uVar63;
              if (puVar59 == puVar55) {
LAB_03064824:
                puVar59 = puVar55;
                uVar65 = *(uint *)((long)plVar52 + 0x1c);
                goto LAB_0306384c;
              }
            }
            uVar63 = uVar80;
            uVar65 = *puVar59;
          }
LAB_0306384c:
          *(ushort *)((long)puVar72 + 0x5a) = (short)uVar65 - uVar63;
          *(uint **)(puVar72 + 0x14) = puVar59;
        }
        puVar72[0x17] = uVar34;
        uVar34 = *(uint *)((long)plVar52 + 0x1c);
        lVar61 = *plVar52;
        if (uVar34 == 0) {
          piVar75 = (int *)(lVar61 + 0x18);
          iVar41 = *piVar75;
          if (iVar41 < 2) goto LAB_03063880;
          puVar77 = (undefined8 *)plVar52[1];
          iVar42 = *(int *)(puVar77 + 0xb);
          lVar76 = *(long *)(*(long *)(lVar61 + 0x10) + (long)(iVar41 + -2) * 8);
          lVar71 = puVar77[1];
          *(undefined8 *)(lVar71 + (long)iVar42 * 8) =
               *(undefined8 *)(*(long *)(lVar61 + 0x10) + (long)(iVar41 + -1) * 8);
          *(int *)(puVar77 + 0xb) = iVar42 + 1;
          if (*(int *)((long)puVar77 + 0x5c) <= iVar42 + 1) {
            local_1f8 = (undefined8 *)CONCAT44(local_1f8._4_4_,iVar42 + -5);
            local_1f0 = puVar77;
            (**(code **)(*(long *)*puVar77 + 0x28))
                      ((long *)*puVar77,lVar71 + (long)(iVar42 + -5) * 8,6);
            *(undefined4 *)(local_1f0 + 0xb) = local_1f8._0_4_;
          }
          *(undefined8 *)(lVar76 + 8) = 0;
          uVar34 = 0xffffffff;
        }
        else {
LAB_03063880:
          puVar55 = (uint *)plVar52[2];
          piVar75 = (int *)(lVar61 + 8);
          lVar61 = plVar52[3];
          puVar55[2] = 0;
          puVar55[3] = 0;
          *puVar55 = *puVar55 & 0xffff0000 | uVar34 & 0xffff;
          *puVar55 = *puVar55 & 0xffff | (int)lVar61 << 0x10;
        }
        *piVar75 = *piVar75 + uVar34;
        *plVar52 = 0;
        plVar52[2] = 0;
        FUN_032bf658(*(undefined8 *)(puVar72 + 0x12),local_1d8,puVar74);
        plVar52 = *(long **)(puVar72 + 0x12);
        lVar61 = plVar52[3];
        iVar41 = *(int *)((long)plVar52 + 0x1c);
        iVar42 = *(int *)(*plVar52 + 8);
        *(long *)(puVar72 + 0x14) = plVar52[2];
        *(short *)(puVar72 + 0x16) = (short)lVar61;
        *(short *)((long)puVar72 + 0x5a) = (short)iVar41;
        puVar72[0x17] = -(iVar41 + iVar42);
        local_278[0] = 0;
        local_278[1] = 0;
        local_278[2] = 0;
        local_278[3] = 0;
      }
    }
    local_f0 = CONCAT44(local_f0._4_4_,puVar78[1]);
    local_f8 = *puVar78;
    local_198[0] = 0xffffffff;
    local_1a0[0] = 0xffffffff;
    plVar52 = *(long **)(*(long *)(local_238 + 0x40) + (ulong)(byte)puVar78[2] * 8 + 0x13b8);
    (**(code **)(*plVar52 + 0x18))
              (plVar52,local_238,local_220,puVar78,plVar45,&local_f0,&local_f8,local_198,local_1a0);
  }
  else {
    *(uint *)((long)plVar52 + 0xc) = local_27c;
    *(undefined1 *)((long)plVar52 + 0xb) = 1;
    uVar46 = (ulong)puVar78[1] & 0xffffff;
    if ((((uint)uVar46 <= local_1e4) &&
        (uVar58 = (ulong)*puVar78 & 0xffffff, (uint)uVar58 <= local_1e4)) &&
       ((uVar63 = *(ushort *)(local_1d0 + uVar58 * 0xc0 + 0x58) |
                  *(ushort *)(local_1d0 + uVar46 * 0xc0 + 0x58), (uVar63 & 0x809) != 0 ||
        (((uVar63 >> 5 & 1) != 0 &&
         (*(ushort *)
           (DAT_04434b38 +
            (((ulong)(*(byte *)(*(long *)(lVar44 + 0xf8) + uVar58) + 1) & 0xff) * 0x21 +
            (ulong)(byte)(*(char *)(*(long *)(lVar44 + 0xf8) + uVar46) + 1)) * 2 + 0x18) !=
          local_27c)))))) {
      *(undefined1 *)((long)plVar52 + 0xb) = 2;
    }
    uVar34 = *(uint *)(local_200 + 0x1000);
    if (uVar34 == 0x100) {
      FUN_030600f0(*(undefined8 *)(local_200 + 0x1008),local_200,0x100);
      uVar34 = 0;
      *(undefined4 *)(lVar61 + 0x1000) = 0;
    }
    puVar37 = (undefined8 *)(lVar61 + (ulong)uVar34 * 0x10);
    *(uint *)(lVar61 + 0x1000) = uVar34 + 1;
    *puVar37 = *(undefined8 *)(local_228 + 0x10);
    *(short *)(puVar37 + 1) = (short)*(undefined4 *)(local_228 + 0x18);
    *(int *)(local_228 + 0x18) = *(int *)(local_228 + 0x18) + 0x10;
    *(int *)(local_228 + 0x1c) = *(int *)(local_228 + 0x1c) + 1;
    local_1e0 = puVar77;
  }
  goto LAB_030621a8;
LAB_0306239c:
  if (local_300 != 0) {
    FUN_032d5b34(local_300,&DAT_0390f40e);
  }
LAB_030623a4:
  if ((((~local_26c & 0xffffff) != 0) && ((char)puVar72[1] != '\0')) &&
     (*(char *)((long)puVar72 + 5) != '\0')) {
    plVar45 = *(long **)(*(long *)(local_238 + 8) + 0x658);
    (**(code **)(*plVar45 + 0x60))
              (plVar45,local_240,*(long *)(local_238 + 0x500) + ((ulong)*puVar72 & 0xffffff) * 0x20)
    ;
    *(undefined1 *)(puVar72 + 1) = 0;
  }
  goto LAB_030623bc;
}


