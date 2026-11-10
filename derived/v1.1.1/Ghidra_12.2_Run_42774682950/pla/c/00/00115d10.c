/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00115d10; name: FUN_00115d10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00115d10(ulong *param_1,long param_2,uint *param_3,long param_4,byte *param_5,long param_6,
                 undefined8 *param_7,undefined8 param_8,ulong param_9)

{
  undefined4 *puVar1;
  byte *pbVar2;
  short *psVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  undefined6 uVar28;
  undefined4 uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  wchar16 wVar34;
  wchar16 wVar35;
  wchar16 wVar36;
  wchar16 wVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  bool bVar46;
  uint *puVar47;
  uint *puVar48;
  uint *puVar49;
  uint *puVar50;
  ulong *puVar51;
  uint uVar52;
  byte *pbVar53;
  byte bVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  int iVar58;
  long lVar59;
  long lVar60;
  ulong uVar61;
  ushort uVar62;
  ushort *puVar63;
  byte *pbVar64;
  byte *pbVar65;
  ulong uVar66;
  undefined8 uVar67;
  ulong uVar68;
  uint uVar69;
  long lVar70;
  ulong uVar71;
  undefined8 *puVar72;
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  uint *puVar76;
  ulong *puVar77;
  ulong *puVar78;
  undefined1 auVar79 [8];
  uint uVar80;
  ushort uVar81;
  undefined1 auVar82 [12];
  undefined1 auVar84 [14];
  ushort uVar105;
  ushort uVar106;
  ushort uVar107;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar83 [12];
  undefined1 auVar85 [14];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  ushort uVar108;
  ushort uVar109;
  ushort uVar110;
  ushort uVar111;
  ushort uVar112;
  ushort uVar113;
  ushort uVar114;
  ushort uVar115;
  ushort uVar116;
  ushort uVar117;
  ushort uVar118;
  ushort uVar119;
  ushort uVar120;
  ushort uVar121;
  ushort uVar122;
  wchar16 wVar123;
  wchar16 wVar124;
  wchar16 wVar125;
  wchar16 wVar126;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  ushort uVar146;
  ushort uVar147;
  ushort uVar148;
  undefined2 uVar149;
  ushort uVar150;
  undefined2 uVar151;
  ushort uVar152;
  undefined2 uVar153;
  ushort uVar154;
  undefined2 uVar155;
  ushort uVar156;
  ushort uVar158;
  ushort uVar159;
  ushort uVar160;
  ushort uVar161;
  ushort uVar162;
  ushort uVar163;
  undefined1 auVar157 [16];
  ushort uVar164;
  ushort uVar166;
  ushort uVar167;
  ushort uVar168;
  undefined1 auVar165 [16];
  undefined1 local_e0 [8];
  undefined8 uStack_d8;
  uint *local_d0 [4];
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_88;
  ulong uStack_80;
  uint *local_78;
  
  uVar80 = *(uint *)(param_7 + 2);
  if (0xbfff < uVar80) {
    uVar69 = *(uint *)((long)param_7 + 0x14);
    if (uVar69 >> 0xe < 3) {
      lVar59 = 1;
      uVar52 = uVar69;
    }
    else {
      uVar4 = *(uint *)(param_7 + 3);
      if (uVar4 < 0xc000) {
        lVar59 = 2;
        uVar52 = uVar4;
      }
      else {
        uVar52 = *(uint *)((long)param_7 + 0x1c);
        if (0xbfff < uVar52) {
          *(undefined4 *)(param_7 + 2) = 4;
          *(uint *)((long)param_7 + 0x14) = uVar80;
          *(uint *)(param_7 + 3) = uVar69;
          *(uint *)((long)param_7 + 0x1c) = uVar4;
          goto LAB_00115db8;
        }
        lVar59 = 3;
      }
    }
    puVar1 = (undefined4 *)((long)param_7 + lVar59 * 4 + 0x10);
    uVar5 = puVar1[-1];
    puVar1[-1] = puVar1[-2];
    *puVar1 = uVar5;
    puVar1[-2] = puVar1[-3];
    *(uint *)(param_7 + 2) = uVar52;
  }
LAB_00115db8:
  local_b0 = (undefined1  [8])*param_7;
  uStack_a8 = param_7[1];
  local_a0 = param_7[2];
  local_98 = param_7[3];
  puVar76 = (uint *)(param_4 + -0x20);
  if (param_3 < puVar76) {
    FUN_00117f70(local_e0,param_3);
    puVar49 = local_d0[0];
    puVar50 = (uint *)0x0;
    auVar79 = local_e0;
  }
  else {
    puVar76 = (uint *)local_e0;
    memcpy(local_e0,param_3,param_4 - (long)param_3);
    FUN_00117f70(&local_88,local_e0);
    puVar49 = local_78;
    puVar50 = param_3;
    auVar79 = (undefined1  [8])local_88;
    uStack_d8 = uStack_80;
  }
  uVar113 = _UNK_03889d4e;
  uVar111 = _UNK_03889d4c;
  uVar109 = _UNK_03889d4a;
  uVar81 = _UNK_03889d48;
  uVar57 = _UNK_03889d46;
  uVar107 = _UNK_03889d44;
  uVar106 = _UNK_03889d42;
  uVar105 = _DAT_03889d40;
  uVar45 = _UNK_0388961e;
  uVar44 = _UNK_0388961c;
  uVar43 = _UNK_0388961a;
  uVar42 = _UNK_03889618;
  uVar41 = _UNK_03889616;
  uVar40 = _UNK_03889614;
  uVar39 = _UNK_03889612;
  uVar38 = _DAT_03889610;
  wVar37 = u__HPX_hpx_03889110[3];
  wVar36 = u__HPX_hpx_03889110[2];
  wVar35 = u__HPX_hpx_03889110[1];
  wVar34 = u__HPX_hpx_03889110[0];
  uVar33 = _UNK_03888f16;
  uVar32 = _UNK_03888f14;
  uVar31 = _UNK_03888f12;
  uVar30 = _DAT_03888f10;
  puVar51 = (ulong *)(param_2 + -8);
  if (param_9 == 0) {
    uVar71 = (ulong)auVar79 >> 1;
    if ((ulong)auVar79 >> 0x20 == 0) {
      uVar71 = (ulong)*puVar49 | uVar71 << 0x20;
      puVar49 = puVar49 + 1;
    }
    if (((ulong)auVar79 & 1) == 0) {
      puVar63 = (ushort *)(param_7 + 4);
      uVar56 = *puVar63;
      uVar108 = *(ushort *)((long)param_7 + 0x22);
      uVar110 = *(ushort *)((long)param_7 + 0x24);
      uVar112 = *(ushort *)((long)param_7 + 0x26);
      uVar114 = *(ushort *)(param_7 + 5);
      uVar122 = *(ushort *)((long)param_7 + 0x2a);
      uVar117 = *(ushort *)((long)param_7 + 0x2c);
      uVar119 = *(ushort *)((long)param_7 + 0x2e);
      uVar67 = param_7[7];
      uVar148 = (ushort)uVar67;
      uVar150 = (ushort)((ulong)uVar67 >> 0x10);
      uVar152 = (ushort)((ulong)uVar67 >> 0x20);
      uVar154 = (ushort)((ulong)uVar67 >> 0x30);
      uVar67 = param_7[6];
      uVar62 = (ushort)uVar67;
      uVar121 = (ushort)((ulong)uVar67 >> 0x10);
      uVar146 = (ushort)((ulong)uVar67 >> 0x20);
      uVar147 = (ushort)((ulong)uVar67 >> 0x30);
      uVar80 = (uint)uStack_d8 & 0x7fff;
      uVar73 = 2;
      if (*(ushort *)(param_7 + 5) > uVar80) {
        uVar73 = 1;
      }
      uVar68 = (ulong)(*(ushort *)(param_7 + 5) <= uVar80);
      if (uVar62 <= uVar80) {
        uVar68 = uVar73;
      }
      if (*(ushort *)(param_7 + 7) <= uVar80) {
        uVar68 = uVar68 + 1;
      }
      uVar55 = (ushort)uVar80;
      uVar73 = (ulong)(puVar63[uVar68 * 4 + 1] <= uVar80) | uVar68 << 2;
      uVar115 = (ushort)_UNK_03888f18;
      uVar116 = (ushort)((ulong)_UNK_03888f18 >> 0x10);
      uVar118 = (ushort)((ulong)_UNK_03888f18 >> 0x20);
      uVar120 = (ushort)((ulong)_UNK_03888f18 >> 0x30);
      wVar123 = u__HPX_hpx_03889110[4];
      wVar124 = u__HPX_hpx_03889110[5];
      wVar125 = u__HPX_hpx_03889110[6];
      wVar126 = u__HPX_hpx_03889110[7];
      if (puVar63[uVar68 * 4 + 2] <= uVar80) {
        uVar73 = uVar73 + 1;
      }
      uVar156 = _DAT_03889610 ^ (_DAT_03889610 ^ _DAT_03888f10) & -(ushort)(uVar55 < uVar56);
      uVar158 = _UNK_03889612 ^ (_UNK_03889612 ^ _UNK_03888f12) & -(ushort)(uVar55 < uVar108);
      uVar159 = _UNK_03889614 ^ (_UNK_03889614 ^ _UNK_03888f14) & -(ushort)(uVar55 < uVar110);
      uVar160 = _UNK_03889616 ^ (_UNK_03889616 ^ _UNK_03888f16) & -(ushort)(uVar55 < uVar112);
      uVar161 = _UNK_0388961a ^ (_UNK_0388961a ^ uVar116) & -(ushort)(uVar55 < uVar122);
      uVar162 = _UNK_0388961c ^ (_UNK_0388961c ^ uVar118) & -(ushort)(uVar55 < uVar117);
      uVar163 = _UNK_0388961e ^ (_UNK_0388961e ^ uVar120) & -(ushort)(uVar55 < uVar119);
      if (puVar63[uVar68 * 4 + 3] <= uVar80) {
        uVar73 = uVar73 + 1;
      }
      uVar6 = puVar63[uVar73];
      uVar7 = (puVar63 + uVar73)[1];
      uVar24 = wVar123 ^ _UNK_03889d48;
      uVar25 = wVar124 ^ _UNK_03889d4a;
      uVar26 = wVar125 ^ _UNK_03889d4c;
      uVar27 = wVar126 ^ _UNK_03889d4e;
      uVar164 = u__HPX_hpx_03889110[0] ^
                (u__HPX_hpx_03889110[0] ^ _DAT_03889d40) & -(ushort)(uVar55 < uVar62);
      uVar166 = u__HPX_hpx_03889110[1] ^
                (u__HPX_hpx_03889110[1] ^ _UNK_03889d42) & -(ushort)(uVar55 < uVar121);
      uVar167 = u__HPX_hpx_03889110[2] ^
                (u__HPX_hpx_03889110[2] ^ _UNK_03889d44) & -(ushort)(uVar55 < uVar146);
      uVar168 = u__HPX_hpx_03889110[3] ^
                (u__HPX_hpx_03889110[3] ^ _UNK_03889d46) & -(ushort)(uVar55 < uVar147);
      *(ushort *)(param_7 + 5) =
           uVar114 + ((short)((_UNK_03889618 ^
                              (_UNK_03889618 ^ uVar115) & -(ushort)(uVar55 < uVar114)) - uVar114) >>
                     7);
      *(ushort *)((long)param_7 + 0x2a) = uVar122 + ((short)(uVar161 - uVar122) >> 7);
      *(ushort *)((long)param_7 + 0x2c) = uVar117 + ((short)(uVar162 - uVar117) >> 7);
      *(ushort *)((long)param_7 + 0x2e) = uVar119 + ((short)(uVar163 - uVar119) >> 7);
      *puVar63 = uVar56 + ((short)(uVar156 - uVar56) >> 7);
      *(ushort *)((long)param_7 + 0x22) = uVar108 + ((short)(uVar158 - uVar108) >> 7);
      *(ushort *)((long)param_7 + 0x24) = uVar110 + ((short)(uVar159 - uVar110) >> 7);
      *(ushort *)((long)param_7 + 0x26) = uVar112 + ((short)(uVar160 - uVar112) >> 7);
      param_7[7] = CONCAT26(uVar154 + ((short)((wVar126 ^ uVar27 & -(ushort)(uVar55 < uVar154)) -
                                              uVar154) >> 7),
                            CONCAT24(uVar152 + ((short)((wVar125 ^
                                                        uVar26 & -(ushort)(uVar55 < uVar152)) -
                                                       uVar152) >> 7),
                                     CONCAT22(uVar150 + ((short)((wVar124 ^
                                                                 uVar25 & -(ushort)(uVar55 < uVar150
                                                                                   )) - uVar150) >>
                                                        7),
                                              uVar148 + ((short)((wVar123 ^
                                                                 uVar24 & -(ushort)(uVar55 < uVar148
                                                                                   )) - uVar148) >>
                                                        7))));
      param_7[6] = CONCAT26(uVar147 + ((short)(uVar168 - uVar147) >> 7),
                            CONCAT24(uVar146 + ((short)(uVar167 - uVar146) >> 7),
                                     CONCAT22(uVar121 + ((short)(uVar166 - uVar121) >> 7),
                                              uVar62 + ((short)(uVar164 - uVar62) >> 7))));
      auVar79 = (undefined1  [8])
                (((ulong)((uint)uVar7 - (uint)uVar6) * (uStack_d8 >> 0xf) - (ulong)uVar6) +
                (uStack_d8 & 0x7fff));
      puVar47 = puVar49;
      if ((ulong)auVar79 >> 0x1f == 0) {
        puVar47 = puVar49 + 1;
        auVar79 = (undefined1  [8])((ulong)*puVar49 | (long)auVar79 << 0x20);
      }
      puVar72 = param_7 + 0x48;
      if (uVar73 != 0) {
        puVar72 = (undefined8 *)((long)param_7 + uVar73 * 0x22 + 0x460);
      }
      uVar80 = (uint)uVar71 & 0x7fff;
      uVar67 = puVar72[1];
      uVar150 = (ushort)uVar67;
      uVar152 = (ushort)((ulong)uVar67 >> 0x10);
      uVar154 = (ushort)((ulong)uVar67 >> 0x20);
      uVar55 = (ushort)((ulong)uVar67 >> 0x30);
      uVar67 = *puVar72;
      uVar121 = (ushort)uVar67;
      uVar146 = (ushort)((ulong)uVar67 >> 0x10);
      uVar147 = (ushort)((ulong)uVar67 >> 0x20);
      uVar148 = (ushort)((ulong)uVar67 >> 0x30);
      uVar56 = *(ushort *)(puVar72 + 2);
      uVar108 = *(ushort *)((long)puVar72 + 0x12);
      uVar110 = *(ushort *)((long)puVar72 + 0x14);
      uVar112 = *(ushort *)((long)puVar72 + 0x16);
      uVar114 = *(ushort *)(puVar72 + 3);
      uVar122 = *(ushort *)((long)puVar72 + 0x1a);
      uVar117 = *(ushort *)((long)puVar72 + 0x1c);
      uVar119 = *(ushort *)((long)puVar72 + 0x1e);
      uVar62 = (ushort)uVar80;
      uVar68 = 2;
      if (*(ushort *)(puVar72 + 1) > uVar80) {
        uVar68 = 1;
      }
      uVar66 = (ulong)(*(ushort *)(puVar72 + 1) <= uVar80);
      if (uVar56 <= uVar80) {
        uVar66 = uVar68;
      }
      if (*(ushort *)(puVar72 + 3) <= uVar80) {
        uVar66 = uVar66 + 1;
      }
      uVar68 = (ulong)(*(ushort *)((long)puVar72 + uVar66 * 8 + 2) <= uVar80) | uVar66 << 2;
      if (*(ushort *)((long)puVar72 + uVar66 * 8 + 4) <= uVar80) {
        uVar68 = uVar68 + 1;
      }
      if (*(ushort *)((long)puVar72 + uVar66 * 8 + 6) <= uVar80) {
        uVar68 = uVar68 + 1;
      }
      puVar63 = (ushort *)((long)puVar72 + uVar68 * 2);
      uVar156 = *puVar63;
      uVar158 = puVar63[1];
      puVar72[1] = CONCAT26(uVar55 + ((short)((uVar45 ^ (uVar45 ^ uVar120) &
                                                        -(ushort)(uVar62 < uVar55)) - uVar55) >> 7),
                            CONCAT24(uVar154 + ((short)((uVar44 ^ (uVar44 ^ uVar118) &
                                                                  -(ushort)(uVar62 < uVar154)) -
                                                       uVar154) >> 7),
                                     CONCAT22(uVar152 + ((short)((uVar43 ^ (uVar43 ^ uVar116) &
                                                                           -(ushort)(uVar62 < 
                                                  uVar152)) - uVar152) >> 7),
                                              uVar150 + ((short)((uVar42 ^ (uVar42 ^ uVar115) &
                                                                           -(ushort)(uVar62 < 
                                                  uVar150)) - uVar150) >> 7))));
      *puVar72 = CONCAT26(uVar148 + ((short)((uVar41 ^ (uVar41 ^ uVar33) &
                                                       -(ushort)(uVar62 < uVar148)) - uVar148) >> 7)
                          ,CONCAT24(uVar147 + ((short)((uVar40 ^ (uVar40 ^ uVar32) &
                                                                 -(ushort)(uVar62 < uVar147)) -
                                                      uVar147) >> 7),
                                    CONCAT22(uVar146 + ((short)((uVar39 ^ (uVar39 ^ uVar31) &
                                                                          -(ushort)(uVar62 < uVar146
                                                                                   )) - uVar146) >>
                                                       7),
                                             uVar121 + ((short)((uVar38 ^ (uVar38 ^ uVar30) &
                                                                          -(ushort)(uVar62 < uVar121
                                                                                   )) - uVar121) >>
                                                       7))));
      *(ushort *)(puVar72 + 3) =
           uVar114 + ((short)((wVar123 ^ (wVar123 ^ uVar81) & -(ushort)(uVar62 < uVar114)) - uVar114
                             ) >> 7);
      *(ushort *)((long)puVar72 + 0x1a) =
           uVar122 + ((short)((wVar124 ^ (wVar124 ^ uVar109) & -(ushort)(uVar62 < uVar122)) -
                             uVar122) >> 7);
      *(ushort *)((long)puVar72 + 0x1c) =
           uVar117 + ((short)((wVar125 ^ (wVar125 ^ uVar111) & -(ushort)(uVar62 < uVar117)) -
                             uVar117) >> 7);
      *(ushort *)((long)puVar72 + 0x1e) =
           uVar119 + ((short)((wVar126 ^ (wVar126 ^ uVar113) & -(ushort)(uVar62 < uVar119)) -
                             uVar119) >> 7);
      *(ushort *)(puVar72 + 2) =
           uVar56 + ((short)((wVar34 ^ (wVar34 ^ uVar105) & -(ushort)(uVar62 < uVar56)) - uVar56) >>
                    7);
      *(ushort *)((long)puVar72 + 0x12) =
           uVar108 + ((short)((wVar35 ^ (wVar35 ^ uVar106) & -(ushort)(uVar62 < uVar108)) - uVar108)
                     >> 7);
      *(ushort *)((long)puVar72 + 0x14) =
           uVar110 + ((short)((wVar36 ^ (wVar36 ^ uVar107) & -(ushort)(uVar62 < uVar110)) - uVar110)
                     >> 7);
      *(ushort *)((long)puVar72 + 0x16) =
           uVar112 + ((short)((wVar37 ^ (wVar37 ^ uVar57) & -(ushort)(uVar62 < uVar112)) - uVar112)
                     >> 7);
      uVar71 = ((ulong)((uint)uVar158 - (uint)uVar156) * (uVar71 >> 0xf) - (ulong)uVar156) +
               (uVar71 & 0x7fff);
      puVar49 = puVar47;
      if (uVar71 >> 0x1f == 0) {
        puVar49 = puVar47 + 1;
        uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
      }
      bVar54 = (byte)uVar68 | (byte)((int)uVar73 << 4);
    }
    else {
      bVar54 = 0;
      auVar79 = (undefined1  [8])uStack_d8;
    }
    param_9 = 1;
    puVar77 = (ulong *)((long)param_1 + 1);
    *(byte *)param_1 = bVar54;
  }
  else {
    puVar77 = param_1;
    uVar71 = uStack_d8;
  }
  uVar45 = _UNK_0388961e;
  uVar44 = _UNK_0388961c;
  uVar43 = _UNK_0388961a;
  uVar42 = _UNK_03889618;
  uVar41 = _UNK_03889616;
  uVar40 = _UNK_03889614;
  uVar39 = _UNK_03889612;
  uVar38 = _DAT_03889610;
  uVar33 = _UNK_03888f16;
  uVar32 = _UNK_03888f14;
  uVar31 = _UNK_03888f12;
  uVar30 = _DAT_03888f10;
  auVar145._10_2_ = _UNK_0388961a;
  auVar145._8_2_ = _UNK_03889618;
  auVar145._12_2_ = _UNK_0388961c;
  auVar145._14_2_ = _UNK_0388961e;
  auVar145._2_2_ = _UNK_03889612;
  auVar145._0_2_ = _DAT_03889610;
  auVar145._4_2_ = _UNK_03889614;
  auVar145._6_2_ = _UNK_03889616;
  uVar149 = (undefined2)_UNK_03888f18;
  uVar151 = (undefined2)((ulong)_UNK_03888f18 >> 0x10);
  uVar153 = (undefined2)((ulong)_UNK_03888f18 >> 0x20);
  uVar155 = (undefined2)((ulong)_UNK_03888f18 >> 0x30);
  auVar157._2_2_ = u__HPX_hpx_03889110[1];
  auVar157._0_2_ = u__HPX_hpx_03889110[0];
  auVar157._4_2_ = u__HPX_hpx_03889110[2];
  auVar157._6_2_ = u__HPX_hpx_03889110[3];
  auVar157._8_2_ = u__HPX_hpx_03889110[4];
  auVar157._10_2_ = u__HPX_hpx_03889110[5];
  auVar157._12_2_ = u__HPX_hpx_03889110[6];
  auVar157._14_2_ = u__HPX_hpx_03889110[7];
  auVar165._10_2_ = _UNK_03889d4a;
  auVar165._8_2_ = _UNK_03889d48;
  auVar165._12_2_ = _UNK_03889d4c;
  auVar165._14_2_ = _UNK_03889d4e;
  auVar165._2_2_ = _UNK_03889d42;
  auVar165._0_2_ = _DAT_03889d40;
  auVar165._4_2_ = _UNK_03889d44;
  auVar165._6_2_ = _UNK_03889d46;
  pbVar2 = param_5 + param_6;
  lVar59 = 5;
  puVar78 = puVar77;
  if (puVar49 < puVar76) goto LAB_00116158;
LAB_001160e4:
  do {
    puVar47 = puVar49;
    if (puVar50 == (uint *)0x0) {
      memcpy(local_e0,puVar49,param_4 - (long)puVar49);
      puVar76 = (uint *)local_e0;
      puVar47 = (uint *)local_e0;
      puVar50 = puVar49;
    }
    puVar49 = puVar47;
    puVar78 = puVar77;
    if (puVar51 <= puVar77) {
      if (puVar77 == puVar51) {
        param_7[2] = local_a0;
        param_7[3] = local_98;
        *param_7 = local_b0;
        param_7[1] = uStack_a8;
        *puVar51 = (ulong)auVar79 & 0xffffffff | uVar71 << 0x20;
        if (puVar50 == (uint *)0x0) {
          lVar59 = (long)puVar49 - (long)param_3;
        }
        else {
          lVar59 = ((long)puVar49 - (long)(local_e0 + (long)param_3)) + (long)puVar50;
        }
      }
      else {
        FUN_0010a430();
        if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
          (**(code **)PTR_PTR_043722f8)
                    (0,"v:/devel/projects/oodle2/core/lznadecompress.inl",0x76,
                     "OODLE ERROR : LZ corruption : decPtr != decPtrEnd \n");
        }
        FUN_0010a450();
        lVar59 = 0xffffffff;
      }
      return lVar59;
    }
LAB_00116158:
    do {
      while( true ) {
        uVar73 = 2;
        pbVar53 = (byte *)((long)puVar78 - (local_a0 & 0xffffffff));
        pbVar65 = pbVar53 + param_6;
        if (param_5 <= pbVar53) {
          pbVar65 = pbVar53;
        }
        uVar68 = param_9 & 7 | lVar59 << 3;
        psVar3 = (short *)((long)param_7 + uVar68 * 2 + 0x19a0);
        uVar105 = *(ushort *)((long)param_7 + uVar68 * 2 + 0x19a0);
        uVar66 = (ulong)uVar105;
        lVar70 = ((ulong)auVar79 >> 0xd) * uVar66;
        bVar54 = *pbVar65;
        if (uVar66 <= ((ulong)auVar79 & 0x1fff)) break;
        uVar68 = lVar70 + ((ulong)auVar79 & 0x1fff);
        *psVar3 = uVar105 + (short)(0x2000 - uVar105 >> 5);
        puVar47 = puVar49;
        if (uVar68 >> 0x1f == 0) {
          puVar47 = puVar49 + 1;
          uVar68 = (ulong)*puVar49 | uVar68 << 0x20;
        }
        lVar70 = (ulong)(bVar54 >> 4) * 0x22 + (param_9 & 3) * 0x660;
        uVar80 = (uint)uVar71 & 0x7fff;
        uVar105 = (ushort)uVar80;
        puVar72 = (undefined8 *)((long)param_7 + lVar70 + 0x20);
        uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x28);
        uVar109 = (ushort)uVar67;
        uVar111 = (ushort)((ulong)uVar67 >> 0x10);
        uVar113 = (ushort)((ulong)uVar67 >> 0x20);
        uVar56 = (ushort)((ulong)uVar67 >> 0x30);
        uVar67 = *puVar72;
        uVar106 = (ushort)uVar67;
        uVar107 = (ushort)((ulong)uVar67 >> 0x10);
        uVar57 = (ushort)((ulong)uVar67 >> 0x20);
        uVar81 = (ushort)((ulong)uVar67 >> 0x30);
        auVar127._0_2_ = -(ushort)(uVar105 < uVar106);
        auVar127._2_2_ = -(ushort)(uVar105 < uVar107);
        auVar127._4_2_ = -(ushort)(uVar105 < uVar57);
        auVar127._6_2_ = -(ushort)(uVar105 < uVar81);
        auVar127._8_2_ = -(ushort)(uVar105 < uVar109);
        auVar127._10_2_ = -(ushort)(uVar105 < uVar111);
        auVar127._12_2_ = -(ushort)(uVar105 < uVar113);
        auVar127._14_2_ = -(ushort)(uVar105 < uVar56);
        uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x38);
        uVar122 = (ushort)uVar67;
        uVar117 = (ushort)((ulong)uVar67 >> 0x10);
        uVar119 = (ushort)((ulong)uVar67 >> 0x20);
        uVar62 = (ushort)((ulong)uVar67 >> 0x30);
        uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x30);
        uVar108 = (ushort)uVar67;
        uVar110 = (ushort)((ulong)uVar67 >> 0x10);
        uVar112 = (ushort)((ulong)uVar67 >> 0x20);
        uVar114 = (ushort)((ulong)uVar67 >> 0x30);
        bVar46 = *(ushort *)((long)param_7 + lVar70 + 0x28) <= uVar80;
        auVar8._2_2_ = uVar31;
        auVar8._0_2_ = uVar30;
        auVar8._4_2_ = uVar32;
        auVar8._6_2_ = uVar33;
        auVar8._8_2_ = uVar149;
        auVar8._10_2_ = uVar151;
        auVar8._12_2_ = uVar153;
        auVar8._14_2_ = uVar155;
        auVar128 = auVar145 ^ (auVar145 ^ auVar8) & auVar127;
        uVar66 = uVar73;
        if (!bVar46) {
          uVar66 = 1;
        }
        uVar61 = (ulong)bVar46;
        if (uVar108 <= uVar80) {
          uVar61 = uVar66;
        }
        if (*(ushort *)((long)param_7 + lVar70 + 0x38) <= uVar80) {
          uVar61 = uVar61 + 1;
        }
        uVar66 = (ulong)(*(ushort *)((long)puVar72 + uVar61 * 8 + 2) <= uVar80) | uVar61 << 2;
        auVar86._0_2_ = -(ushort)(uVar105 < uVar108);
        auVar86._2_2_ = -(ushort)(uVar105 < uVar110);
        auVar86._4_2_ = -(ushort)(uVar105 < uVar112);
        auVar86._6_2_ = -(ushort)(uVar105 < uVar114);
        auVar86._8_2_ = -(ushort)(uVar105 < uVar122);
        auVar86._10_2_ = -(ushort)(uVar105 < uVar117);
        auVar86._12_2_ = -(ushort)(uVar105 < uVar119);
        auVar86._14_2_ = -(ushort)(uVar105 < uVar62);
        auVar87 = auVar157 ^ (auVar157 ^ auVar165) & auVar86;
        if (*(ushort *)((long)puVar72 + uVar61 * 8 + 4) <= uVar80) {
          uVar66 = uVar66 + 1;
        }
        if (*(ushort *)((long)puVar72 + uVar61 * 8 + 6) <= uVar80) {
          uVar66 = uVar66 + 1;
        }
        puVar63 = (ushort *)((long)puVar72 + uVar66 * 2);
        uVar105 = *puVar63;
        uVar121 = puVar63[1];
        *(ulong *)((long)param_7 + lVar70 + 0x28) =
             CONCAT26(uVar56 + ((short)(auVar128._14_2_ - uVar56) >> 7),
                      CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                               CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                        uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
        *puVar72 = CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                            CONCAT24(uVar57 + ((short)(auVar128._4_2_ - uVar57) >> 7),
                                     CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                              uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
        *(ulong *)((long)param_7 + lVar70 + 0x38) =
             CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                      CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                               CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                        uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
        *(ulong *)((long)param_7 + lVar70 + 0x30) =
             CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                      CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                               CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                        uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))));
        auVar79 = (undefined1  [8])
                  (((ulong)((uint)uVar121 - (uint)uVar105) * (uVar71 >> 0xf) - (ulong)uVar105) +
                  (uVar71 & 0x7fff));
        puVar48 = puVar47;
        if ((ulong)auVar79 >> 0x1f == 0) {
          puVar48 = puVar47 + 1;
          auVar79 = (undefined1  [8])((ulong)*puVar47 | (long)auVar79 << 0x20);
        }
        uVar80 = (uint)uVar68 & 0x7fff;
        uVar105 = (ushort)uVar80;
        lVar70 = (param_9 & 3) * 0x660 + 0x20;
        lVar60 = ((ulong)bVar54 & 0xf) * 0x22 + lVar70 + 0x220;
        if (bVar54 >> 4 != uVar66) {
          lVar60 = uVar66 * 0x22 + lVar70 + 0x440;
        }
        puVar72 = (undefined8 *)((long)param_7 + lVar60);
        uVar67 = puVar72[1];
        uVar109 = (ushort)uVar67;
        uVar111 = (ushort)((ulong)uVar67 >> 0x10);
        uVar113 = (ushort)((ulong)uVar67 >> 0x20);
        uVar56 = (ushort)((ulong)uVar67 >> 0x30);
        uVar67 = *puVar72;
        uVar106 = (ushort)uVar67;
        uVar107 = (ushort)((ulong)uVar67 >> 0x10);
        uVar57 = (ushort)((ulong)uVar67 >> 0x20);
        uVar81 = (ushort)((ulong)uVar67 >> 0x30);
        uVar67 = puVar72[3];
        uVar122 = (ushort)uVar67;
        uVar117 = (ushort)((ulong)uVar67 >> 0x10);
        uVar119 = (ushort)((ulong)uVar67 >> 0x20);
        uVar62 = (ushort)((ulong)uVar67 >> 0x30);
        uVar67 = puVar72[2];
        uVar108 = (ushort)uVar67;
        uVar110 = (ushort)((ulong)uVar67 >> 0x10);
        uVar112 = (ushort)((ulong)uVar67 >> 0x20);
        uVar114 = (ushort)((ulong)uVar67 >> 0x30);
        if (*(ushort *)(puVar72 + 1) > uVar80) {
          uVar73 = 1;
        }
        auVar129._0_2_ = -(ushort)(uVar105 < uVar106);
        auVar129._2_2_ = -(ushort)(uVar105 < uVar107);
        auVar129._4_2_ = -(ushort)(uVar105 < uVar57);
        auVar129._6_2_ = -(ushort)(uVar105 < uVar81);
        auVar129._8_2_ = -(ushort)(uVar105 < uVar109);
        auVar129._10_2_ = -(ushort)(uVar105 < uVar111);
        auVar129._12_2_ = -(ushort)(uVar105 < uVar113);
        auVar129._14_2_ = -(ushort)(uVar105 < uVar56);
        auVar88._0_2_ = -(ushort)(uVar105 < uVar108);
        auVar88._2_2_ = -(ushort)(uVar105 < uVar110);
        auVar88._4_2_ = -(ushort)(uVar105 < uVar112);
        auVar88._6_2_ = -(ushort)(uVar105 < uVar114);
        auVar88._8_2_ = -(ushort)(uVar105 < uVar122);
        auVar88._10_2_ = -(ushort)(uVar105 < uVar117);
        auVar88._12_2_ = -(ushort)(uVar105 < uVar119);
        auVar88._14_2_ = -(ushort)(uVar105 < uVar62);
        auVar9._2_2_ = uVar31;
        auVar9._0_2_ = uVar30;
        auVar9._4_2_ = uVar32;
        auVar9._6_2_ = uVar33;
        auVar9._8_2_ = uVar149;
        auVar9._10_2_ = uVar151;
        auVar9._12_2_ = uVar153;
        auVar9._14_2_ = uVar155;
        auVar128 = auVar145 ^ (auVar145 ^ auVar9) & auVar129;
        uVar71 = (ulong)(*(ushort *)(puVar72 + 1) <= uVar80);
        if (uVar108 <= uVar80) {
          uVar71 = uVar73;
        }
        if (*(ushort *)(puVar72 + 3) <= uVar80) {
          uVar71 = uVar71 + 1;
        }
        auVar87 = auVar157 ^ (auVar157 ^ auVar165) & auVar88;
        uVar73 = (ulong)(*(ushort *)((long)puVar72 + uVar71 * 8 + 2) <= uVar80) | uVar71 << 2;
        if (*(ushort *)((long)puVar72 + uVar71 * 8 + 4) <= uVar80) {
          uVar73 = uVar73 + 1;
        }
        if (*(ushort *)((long)puVar72 + uVar71 * 8 + 6) <= uVar80) {
          uVar73 = uVar73 + 1;
        }
        puVar63 = (ushort *)((long)puVar72 + uVar73 * 2);
        uVar105 = *puVar63;
        uVar121 = puVar63[1];
        puVar72[1] = CONCAT26(uVar56 + ((short)(auVar128._14_2_ - uVar56) >> 7),
                              CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                       CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                                uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7)))
                             );
        *puVar72 = CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                            CONCAT24(uVar57 + ((short)(auVar128._4_2_ - uVar57) >> 7),
                                     CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                              uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
        puVar72[3] = CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                              CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                       CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                                uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))))
        ;
        puVar72[2] = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
        ;
        uVar61 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar68 >> 0xf) - (ulong)uVar105) +
                 (uVar68 & 0x7fff);
        puVar49 = puVar48;
        if (uVar61 >> 0x1f == 0) {
          puVar49 = puVar48 + 1;
          uVar61 = (ulong)*puVar48 | uVar61 << 0x20;
        }
        param_9 = param_9 + 1;
        puVar77 = (ulong *)((long)puVar78 + 1);
        *(byte *)puVar78 = (byte)uVar73 | (byte)((int)uVar66 << 4);
        lVar59 = (long)*(int *)(&UNK_039c3340 + lVar59 * 4);
joined_r0x001174e0:
        uVar71 = uVar61;
        puVar78 = puVar77;
        if (puVar76 <= puVar49) goto LAB_001160e4;
      }
      auVar79 = (undefined1  [8])(((long)auVar79 - uVar66) - lVar70);
      *psVar3 = uVar105 - (uVar105 >> 5);
      puVar47 = puVar49;
      if ((ulong)auVar79 >> 0x1f == 0) {
        puVar47 = puVar49 + 1;
        auVar79 = (undefined1  [8])((ulong)*puVar49 | (long)auVar79 << 0x20);
      }
      uVar80 = (uint)uVar71 & 0x7fff;
      uVar67 = *(undefined8 *)((long)param_7 + uVar68 * 0x22 + 0x1a78);
      uVar81 = (ushort)uVar67;
      uVar109 = (ushort)((ulong)uVar67 >> 0x10);
      uVar111 = (ushort)((ulong)uVar67 >> 0x20);
      uVar113 = (ushort)((ulong)uVar67 >> 0x30);
      uVar67 = *(undefined8 *)((long)param_7 + uVar68 * 0x22 + 0x1a70);
      uVar105 = (ushort)uVar67;
      uVar106 = (ushort)((ulong)uVar67 >> 0x10);
      uVar107 = (ushort)((ulong)uVar67 >> 0x20);
      uVar57 = (ushort)((ulong)uVar67 >> 0x30);
      bVar46 = *(ushort *)((long)param_7 + uVar68 * 0x22 + 0x1a68) <= uVar80;
      uVar66 = uVar73;
      if (!bVar46) {
        uVar66 = 1;
      }
      uVar56 = (ushort)uVar80;
      uVar61 = (ulong)bVar46;
      if (uVar105 <= uVar80) {
        uVar61 = uVar66;
      }
      lVar70 = uVar68 * 0x22 + 0x1a60;
      if (*(ushort *)((long)param_7 + uVar68 * 0x22 + 0x1a78) <= uVar80) {
        uVar61 = uVar61 + 1;
      }
      lVar60 = uVar61 * 8 + lVar70;
      uVar67 = *(undefined8 *)((long)param_7 + uVar68 * 0x22 + 0x1a68);
      uVar122 = (ushort)uVar67;
      uVar117 = (ushort)((ulong)uVar67 >> 0x10);
      uVar119 = (ushort)((ulong)uVar67 >> 0x20);
      uVar62 = (ushort)((ulong)uVar67 >> 0x30);
      uVar67 = *(undefined8 *)((long)param_7 + uVar68 * 0x22 + 0x1a60);
      uVar108 = (ushort)uVar67;
      uVar110 = (ushort)((ulong)uVar67 >> 0x10);
      uVar112 = (ushort)((ulong)uVar67 >> 0x20);
      uVar114 = (ushort)((ulong)uVar67 >> 0x30);
      auVar130._0_2_ = -(ushort)(uVar56 < uVar108);
      auVar130._2_2_ = -(ushort)(uVar56 < uVar110);
      auVar130._4_2_ = -(ushort)(uVar56 < uVar112);
      auVar130._6_2_ = -(ushort)(uVar56 < uVar114);
      auVar130._8_2_ = -(ushort)(uVar56 < uVar122);
      auVar130._10_2_ = -(ushort)(uVar56 < uVar117);
      auVar130._12_2_ = -(ushort)(uVar56 < uVar119);
      auVar130._14_2_ = -(ushort)(uVar56 < uVar62);
      auVar87._0_2_ = -(ushort)(uVar56 < uVar105);
      auVar87._2_2_ = -(ushort)(uVar56 < uVar106);
      auVar87._4_2_ = -(ushort)(uVar56 < uVar107);
      auVar87._6_2_ = -(ushort)(uVar56 < uVar57);
      auVar87._8_2_ = -(ushort)(uVar56 < uVar81);
      auVar87._10_2_ = -(ushort)(uVar56 < uVar109);
      auVar87._12_2_ = -(ushort)(uVar56 < uVar111);
      auVar87._14_2_ = -(ushort)(uVar56 < uVar113);
      auVar128._2_2_ = uVar31;
      auVar128._0_2_ = uVar30;
      auVar128._4_2_ = uVar32;
      auVar128._6_2_ = uVar33;
      auVar128._8_2_ = uVar149;
      auVar128._10_2_ = uVar151;
      auVar128._12_2_ = uVar153;
      auVar128._14_2_ = uVar155;
      auVar130 = auVar145 ^ (auVar145 ^ auVar128) & auVar130;
      auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar87;
      uVar66 = (ulong)(*(ushort *)((long)param_7 + lVar60 + 2) <= uVar80) | uVar61 << 2;
      if (*(ushort *)((long)param_7 + lVar60 + 4) <= uVar80) {
        uVar66 = uVar66 + 1;
      }
      if (*(ushort *)((long)param_7 + lVar60 + 6) <= uVar80) {
        uVar66 = uVar66 + 1;
      }
      puVar63 = (ushort *)((long)param_7 + uVar66 * 2 + lVar70);
      uVar56 = *puVar63;
      uVar121 = puVar63[1];
      *(ulong *)((long)param_7 + uVar68 * 0x22 + 0x1a68) =
           CONCAT26(uVar62 + ((short)(auVar130._14_2_ - uVar62) >> 7),
                    CONCAT24(uVar119 + ((short)(auVar130._12_2_ - uVar119) >> 7),
                             CONCAT22(uVar117 + ((short)(auVar130._10_2_ - uVar117) >> 7),
                                      uVar122 + ((short)(auVar130._8_2_ - uVar122) >> 7))));
      *(ulong *)((long)param_7 + uVar68 * 0x22 + 0x1a60) =
           CONCAT26(uVar114 + ((short)(auVar130._6_2_ - uVar114) >> 7),
                    CONCAT24(uVar112 + ((short)(auVar130._4_2_ - uVar112) >> 7),
                             CONCAT22(uVar110 + ((short)(auVar130._2_2_ - uVar110) >> 7),
                                      uVar108 + ((short)(auVar130._0_2_ - uVar108) >> 7))));
      *(ulong *)((long)param_7 + uVar68 * 0x22 + 0x1a78) =
           CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                    CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                             CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                      uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
      *(ulong *)((long)param_7 + uVar68 * 0x22 + 0x1a70) =
           CONCAT26(uVar57 + ((short)(auVar128._6_2_ - uVar57) >> 7),
                    CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                             CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                      uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
      uVar71 = ((ulong)((uint)uVar121 - (uint)uVar56) * (uVar71 >> 0xf) - (ulong)uVar56) +
               (uVar71 & 0x7fff);
      puVar49 = puVar47;
      if (uVar71 >> 0x1f == 0) {
        puVar49 = puVar47 + 1;
        uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
      }
      if (uVar66 != 0) {
        uVar80 = (uint)uVar71;
        uVar5 = local_a0._4_4_;
        uVar105 = SUB82(auVar79,0);
        if (3 < uVar66) {
          if (0xb < uVar66) {
            lVar70 = uVar66 * 4;
            uVar67 = *(undefined8 *)(local_e0 + lVar70 + 4);
            uVar80 = *(uint *)((long)local_d0 + lVar70);
            *(undefined4 *)((long)local_d0 + lVar70) = *(undefined4 *)((long)local_d0 + lVar70 + -4)
            ;
            *(undefined8 *)(local_e0 + lVar70 + 8) = uVar67;
            pbVar53 = (byte *)((long)puVar78 - (ulong)uVar80);
            local_a0 = CONCAT44(local_a0._4_4_,uVar80);
            pbVar65 = pbVar53 + param_6;
            if (param_5 <= pbVar53) {
              pbVar65 = pbVar53;
            }
            *(byte *)puVar78 = *pbVar65;
            pbVar53 = param_5;
            if (pbVar65 + 1 != pbVar2) {
              pbVar53 = pbVar65 + 1;
            }
            *(byte *)((long)puVar78 + 1) = *pbVar53;
            bVar46 = lVar59 < 7;
            lVar59 = 0xb;
            if (bVar46) {
              lVar59 = 8;
            }
            puVar77 = (ulong *)((long)puVar78 + 2);
            param_9 = param_9 + 2;
            uVar61 = uVar71;
            goto joined_r0x001174e0;
          }
          lVar60 = (long)(uVar66 - 4) >> 1;
          lVar70 = lVar60 * 4;
          uVar69 = *(uint *)((long)&local_a0 + lVar70);
          uVar67 = *(undefined8 *)(local_b0 + lVar70 + 4);
          *(uint *)((long)&local_a0 + lVar70) = *(uint *)(local_b0 + lVar70 + 0xc);
          *(undefined8 *)(local_b0 + lVar70 + 8) = uVar67;
          uVar68 = param_9 & 3;
          local_a0 = CONCAT44(local_a0._4_4_,uVar69);
          puVar47 = puVar49;
          if ((uVar66 - 4 & 1) == 0) {
            lVar70 = uVar68 * 0x12 + lVar60 * 0x48;
            uVar57 = uVar105 & 0x7fff;
            uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x2728);
            uVar108 = (ushort)uVar67;
            uVar110 = (ushort)((ulong)uVar67 >> 0x10);
            uVar112 = (ushort)((ulong)uVar67 >> 0x20);
            uVar114 = (ushort)((ulong)uVar67 >> 0x30);
            uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x2720);
            uVar109 = (ushort)uVar67;
            uVar111 = (ushort)((ulong)uVar67 >> 0x10);
            uVar113 = (ushort)((ulong)uVar67 >> 0x20);
            uVar56 = (ushort)((ulong)uVar67 >> 0x30);
            uVar73 = CONCAT26(uVar105,CONCAT24(uVar105,CONCAT22(uVar105,uVar105))) &
                     0x7fff7fff7fff7fff;
            uVar81 = -(ushort)((ushort)uVar73 < uVar109);
            uVar105 = -(ushort)((ushort)(uVar73 >> 0x10) < uVar111);
            uVar106 = -(ushort)((ushort)(uVar73 >> 0x20) < uVar113);
            uVar107 = -(ushort)((ushort)(uVar73 >> 0x30) < uVar56);
            uVar122 = uVar81 + uVar105 + uVar106 + uVar107 + -(ushort)(uVar57 < uVar108) +
                      -(ushort)(uVar57 < uVar110) + -(ushort)(uVar57 < uVar112) +
                      -(ushort)(uVar57 < uVar114);
            uVar105 = uVar105 & 0x7fe5;
            uVar5 = CONCAT13((char)(uVar105 >> 8),CONCAT12((char)uVar105,uVar81));
            uVar106 = uVar106 & 0x7fe5;
            uVar28 = CONCAT15((char)(uVar106 >> 8),CONCAT14((char)uVar106,uVar5));
            uVar107 = uVar107 & 0x7fe5;
            uVar73 = CONCAT17((char)(uVar107 >> 8),CONCAT16((char)uVar107,uVar28)) &
                     0xffffffffffff7fe5;
            uVar105 = -(ushort)(uVar57 < uVar108) & 0x7fe5;
            auVar82._0_10_ = CONCAT19((char)(uVar105 >> 8),CONCAT18((char)uVar105,uVar73));
            uVar105 = -(ushort)(uVar57 < uVar110) & 0x7fe5;
            auVar82[10] = (undefined1)uVar105;
            auVar82[0xb] = (undefined1)(uVar105 >> 8);
            uVar105 = -(ushort)(uVar57 < uVar112) & 0x7fe5;
            auVar84[0xc] = (undefined1)uVar105;
            auVar84._0_12_ = auVar82;
            auVar84[0xd] = (undefined1)(uVar105 >> 8);
            uVar105 = -(ushort)(uVar57 < uVar114) & 0x7fe5;
            auVar89[0xe] = (undefined1)uVar105;
            auVar89._0_14_ = auVar84;
            auVar89[0xf] = (undefined1)(uVar105 >> 8);
            lVar60 = ((long)((ulong)uVar122 << 0x30) >> 0x2f) + lVar70 + 0x2720;
            uVar105 = *(ushort *)((long)param_7 + lVar60 + 0xe);
            uVar106 = *(ushort *)((long)param_7 + lVar60 + 0x10);
            *(ulong *)((long)param_7 + lVar70 + 0x2728) =
                 CONCAT26(uVar114 + ((short)((uVar45 - uVar114) + auVar89._14_2_) >> 7),
                          CONCAT24(uVar112 + ((short)((uVar44 - uVar112) + auVar84._12_2_) >> 7),
                                   CONCAT22(uVar110 + ((short)((uVar43 - uVar110) + auVar82._10_2_)
                                                      >> 7),
                                            uVar108 + ((short)((uVar42 - uVar108) +
                                                              (short)((unkuint10)auVar82._0_10_ >>
                                                                     0x40)) >> 7))));
            *(ulong *)((long)param_7 + lVar70 + 0x2720) =
                 CONCAT26(uVar56 + ((short)((uVar41 - uVar56) + (short)(uVar73 >> 0x30)) >> 7),
                          CONCAT24(uVar113 + ((short)((uVar40 - uVar113) +
                                                     (short)((uint6)uVar28 >> 0x20)) >> 7),
                                   CONCAT22(uVar111 + ((short)((uVar39 - uVar111) +
                                                              (short)((uint)uVar5 >> 0x10)) >> 7),
                                            uVar109 + ((short)((uVar38 - uVar109) +
                                                              (uVar81 & 0x7fe5)) >> 7))));
            uVar61 = ((ulong)((uint)uVar106 - (uint)uVar105) * ((ulong)auVar79 >> 0xf) -
                     (ulong)uVar105) + ((ulong)auVar79 & 0x7fff);
            if (uVar61 >> 0x1f == 0) {
              puVar47 = puVar49 + 1;
              uVar61 = (ulong)*puVar49 | uVar61 << 0x20;
            }
            uVar73 = (long)(short)uVar122 + 10;
            if (0 < (long)uVar73) {
              pbVar53 = (byte *)((long)puVar78 - (ulong)uVar69);
              pbVar65 = pbVar53 + param_6;
              if (param_5 <= pbVar53) {
                pbVar65 = pbVar53;
              }
              uVar68 = uVar73 & 3;
              if ((long)(short)uVar122 + 9U < 3) {
                lVar70 = 0;
              }
              else {
                lVar70 = 0;
                do {
                  pbVar53 = (byte *)((long)puVar78 + lVar70);
                  *pbVar53 = *pbVar65;
                  lVar70 = lVar70 + 4;
                  pbVar64 = param_5;
                  if (pbVar65 + 1 != pbVar2) {
                    pbVar64 = pbVar65 + 1;
                  }
                  pbVar53[1] = *pbVar64;
                  pbVar65 = param_5;
                  if (pbVar64 + 1 != pbVar2) {
                    pbVar65 = pbVar64 + 1;
                  }
                  pbVar53[2] = *pbVar65;
                  pbVar64 = param_5;
                  if (pbVar65 + 1 != pbVar2) {
                    pbVar64 = pbVar65 + 1;
                  }
                  pbVar53[3] = *pbVar64;
                  pbVar65 = param_5;
                  if (pbVar64 + 1 != pbVar2) {
                    pbVar65 = pbVar64 + 1;
                  }
                } while (uVar73 - uVar68 != lVar70);
              }
              if (uVar68 != 0) {
                lVar60 = -uVar68;
                pbVar53 = (byte *)((long)puVar78 + lVar70);
                do {
                  pbVar64 = pbVar65 + 1;
                  *pbVar53 = *pbVar65;
                  pbVar65 = param_5;
                  if (pbVar64 != pbVar2) {
                    pbVar65 = pbVar64;
                  }
                  lVar60 = lVar60 + 1;
                  pbVar53 = pbVar53 + 1;
                } while (lVar60 != 0);
              }
            }
          }
          else {
            uVar4 = SUB84(auVar79,0) & 0x7fff;
            uVar67 = *(undefined8 *)((long)param_7 + uVar68 * 0x22 + 0x2858);
            uVar109 = (ushort)uVar67;
            uVar111 = (ushort)((ulong)uVar67 >> 0x10);
            uVar113 = (ushort)((ulong)uVar67 >> 0x20);
            uVar56 = (ushort)((ulong)uVar67 >> 0x30);
            uVar67 = *(undefined8 *)((long)param_7 + uVar68 * 0x22 + 0x2850);
            uVar106 = (ushort)uVar67;
            uVar107 = (ushort)((ulong)uVar67 >> 0x10);
            uVar57 = (ushort)((ulong)uVar67 >> 0x20);
            uVar81 = (ushort)((ulong)uVar67 >> 0x30);
            bVar46 = *(ushort *)((long)param_7 + uVar68 * 0x22 + 0x2848) <= uVar4;
            uVar105 = (ushort)uVar4;
            uVar66 = uVar73;
            if (!bVar46) {
              uVar66 = 1;
            }
            uVar61 = (ulong)bVar46;
            if (uVar106 <= uVar4) {
              uVar61 = uVar66;
            }
            lVar70 = uVar68 * 0x22 + 0x2840;
            if (*(ushort *)((long)param_7 + uVar68 * 0x22 + 0x2858) <= uVar4) {
              uVar61 = uVar61 + 1;
            }
            lVar60 = uVar61 * 8 + lVar70;
            uVar67 = *(undefined8 *)((long)param_7 + uVar68 * 0x22 + 0x2848);
            uVar122 = (ushort)uVar67;
            uVar117 = (ushort)((ulong)uVar67 >> 0x10);
            uVar119 = (ushort)((ulong)uVar67 >> 0x20);
            uVar62 = (ushort)((ulong)uVar67 >> 0x30);
            uVar67 = *(undefined8 *)((long)param_7 + uVar68 * 0x22 + 0x2840);
            uVar108 = (ushort)uVar67;
            uVar110 = (ushort)((ulong)uVar67 >> 0x10);
            uVar112 = (ushort)((ulong)uVar67 >> 0x20);
            uVar114 = (ushort)((ulong)uVar67 >> 0x30);
            auVar134._0_2_ = -(ushort)(uVar105 < uVar108);
            auVar134._2_2_ = -(ushort)(uVar105 < uVar110);
            auVar134._4_2_ = -(ushort)(uVar105 < uVar112);
            auVar134._6_2_ = -(ushort)(uVar105 < uVar114);
            auVar134._8_2_ = -(ushort)(uVar105 < uVar122);
            auVar134._10_2_ = -(ushort)(uVar105 < uVar117);
            auVar134._12_2_ = -(ushort)(uVar105 < uVar119);
            auVar134._14_2_ = -(ushort)(uVar105 < uVar62);
            auVar94._0_2_ = -(ushort)(uVar105 < uVar106);
            auVar94._2_2_ = -(ushort)(uVar105 < uVar107);
            auVar94._4_2_ = -(ushort)(uVar105 < uVar57);
            auVar94._6_2_ = -(ushort)(uVar105 < uVar81);
            auVar94._8_2_ = -(ushort)(uVar105 < uVar109);
            auVar94._10_2_ = -(ushort)(uVar105 < uVar111);
            auVar94._12_2_ = -(ushort)(uVar105 < uVar113);
            auVar94._14_2_ = -(ushort)(uVar105 < uVar56);
            uVar66 = (ulong)(*(ushort *)((long)param_7 + lVar60 + 2) <= uVar4) | uVar61 << 2;
            auVar10._2_2_ = uVar31;
            auVar10._0_2_ = uVar30;
            auVar10._4_2_ = uVar32;
            auVar10._6_2_ = uVar33;
            auVar10._8_2_ = uVar149;
            auVar10._10_2_ = uVar151;
            auVar10._12_2_ = uVar153;
            auVar10._14_2_ = uVar155;
            auVar87 = auVar145 ^ (auVar145 ^ auVar10) & auVar134;
            auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar94;
            if (*(ushort *)((long)param_7 + lVar60 + 4) <= uVar4) {
              uVar66 = uVar66 + 1;
            }
            if (*(ushort *)((long)param_7 + lVar60 + 6) <= uVar4) {
              uVar66 = uVar66 + 1;
            }
            puVar63 = (ushort *)((long)param_7 + uVar66 * 2 + lVar70);
            uVar105 = *puVar63;
            uVar121 = puVar63[1];
            *(ulong *)((long)param_7 + uVar68 * 0x22 + 0x2848) =
                 CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                          CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                   CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                            uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
            *(ulong *)((long)param_7 + uVar68 * 0x22 + 0x2840) =
                 CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                          CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                   CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                            uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))));
            *(ulong *)((long)param_7 + uVar68 * 0x22 + 0x2858) =
                 CONCAT26(uVar56 + ((short)(auVar128._14_2_ - uVar56) >> 7),
                          CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                   CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                            uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
            *(ulong *)((long)param_7 + uVar68 * 0x22 + 0x2850) =
                 CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                          CONCAT24(uVar57 + ((short)(auVar128._4_2_ - uVar57) >> 7),
                                   CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                            uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
            uVar61 = ((ulong)((uint)uVar121 - (uint)uVar105) * ((ulong)auVar79 >> 0xf) -
                     (ulong)uVar105) + ((ulong)auVar79 & 0x7fff);
            if (uVar61 >> 0x1f == 0) {
              puVar47 = puVar49 + 1;
              uVar61 = (ulong)*puVar49 | uVar61 << 0x20;
              if (uVar66 < 0xc) goto LAB_00116a98;
LAB_00116d44:
              uVar67 = param_7[0x51a];
              uVar81 = (ushort)uVar67;
              uVar109 = (ushort)((ulong)uVar67 >> 0x10);
              uVar111 = (ushort)((ulong)uVar67 >> 0x20);
              uVar113 = (ushort)((ulong)uVar67 >> 0x30);
              uVar67 = param_7[0x519];
              uVar105 = (ushort)uVar67;
              uVar106 = (ushort)((ulong)uVar67 >> 0x10);
              uVar107 = (ushort)((ulong)uVar67 >> 0x20);
              uVar57 = (ushort)((ulong)uVar67 >> 0x30);
              uVar67 = param_7[0x51c];
              uVar114 = (ushort)uVar67;
              uVar122 = (ushort)((ulong)uVar67 >> 0x10);
              uVar117 = (ushort)((ulong)uVar67 >> 0x20);
              uVar119 = (ushort)((ulong)uVar67 >> 0x30);
              uVar67 = param_7[0x51b];
              uVar56 = (ushort)uVar67;
              uVar108 = (ushort)((ulong)uVar67 >> 0x10);
              uVar110 = (ushort)((ulong)uVar67 >> 0x20);
              uVar112 = (ushort)((ulong)uVar67 >> 0x30);
              uVar80 = uVar80 & 0x7fff;
              uVar68 = uVar73;
              if (*(ushort *)(param_7 + 0x51a) > uVar80) {
                uVar68 = 1;
              }
              uVar74 = (ulong)(*(ushort *)(param_7 + 0x51a) <= uVar80);
              if (uVar56 <= uVar80) {
                uVar74 = uVar68;
              }
              uVar62 = (ushort)uVar80;
              auVar137._0_2_ = -(ushort)(uVar62 < uVar105);
              auVar137._2_2_ = -(ushort)(uVar62 < uVar106);
              auVar137._4_2_ = -(ushort)(uVar62 < uVar107);
              auVar137._6_2_ = -(ushort)(uVar62 < uVar57);
              auVar137._8_2_ = -(ushort)(uVar62 < uVar81);
              auVar137._10_2_ = -(ushort)(uVar62 < uVar109);
              auVar137._12_2_ = -(ushort)(uVar62 < uVar111);
              auVar137._14_2_ = -(ushort)(uVar62 < uVar113);
              auVar97._0_2_ = -(ushort)(uVar62 < uVar56);
              auVar97._2_2_ = -(ushort)(uVar62 < uVar108);
              auVar97._4_2_ = -(ushort)(uVar62 < uVar110);
              auVar97._6_2_ = -(ushort)(uVar62 < uVar112);
              auVar97._8_2_ = -(ushort)(uVar62 < uVar114);
              auVar97._10_2_ = -(ushort)(uVar62 < uVar122);
              auVar97._12_2_ = -(ushort)(uVar62 < uVar117);
              auVar97._14_2_ = -(ushort)(uVar62 < uVar119);
              auVar11._2_2_ = uVar31;
              auVar11._0_2_ = uVar30;
              auVar11._4_2_ = uVar32;
              auVar11._6_2_ = uVar33;
              auVar11._8_2_ = uVar149;
              auVar11._10_2_ = uVar151;
              auVar11._12_2_ = uVar153;
              auVar11._14_2_ = uVar155;
              auVar87 = auVar145 ^ (auVar145 ^ auVar11) & auVar137;
              auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar97;
              if (*(ushort *)(param_7 + 0x51c) <= uVar80) {
                uVar74 = uVar74 + 1;
              }
              lVar70 = uVar74 * 8;
              uVar68 = (ulong)(*(ushort *)((long)param_7 + lVar70 + 0x28ca) <= uVar80) | uVar74 << 2
              ;
              if (*(ushort *)((long)param_7 + lVar70 + 0x28cc) <= uVar80) {
                uVar68 = uVar68 + 1;
              }
              if (*(ushort *)((long)param_7 + lVar70 + 0x28ce) <= uVar80) {
                uVar68 = uVar68 + 1;
              }
              puVar63 = (ushort *)((long)param_7 + uVar68 * 2 + 0x28c8);
              uVar62 = *puVar63;
              uVar74 = ((ulong)((uint)puVar63[1] - (uint)uVar62) * (uVar71 >> 0xf) - (ulong)uVar62)
                       + (uVar71 & 0x7fff);
              param_7[0x51a] =
                   CONCAT26(uVar113 + ((short)(auVar87._14_2_ - uVar113) >> 7),
                            CONCAT24(uVar111 + ((short)(auVar87._12_2_ - uVar111) >> 7),
                                     CONCAT22(uVar109 + ((short)(auVar87._10_2_ - uVar109) >> 7),
                                              uVar81 + ((short)(auVar87._8_2_ - uVar81) >> 7))));
              param_7[0x519] =
                   CONCAT26(uVar57 + ((short)(auVar87._6_2_ - uVar57) >> 7),
                            CONCAT24(uVar107 + ((short)(auVar87._4_2_ - uVar107) >> 7),
                                     CONCAT22(uVar106 + ((short)(auVar87._2_2_ - uVar106) >> 7),
                                              uVar105 + ((short)(auVar87._0_2_ - uVar105) >> 7))));
              param_7[0x51c] =
                   CONCAT26(uVar119 + ((short)(auVar128._14_2_ - uVar119) >> 7),
                            CONCAT24(uVar117 + ((short)(auVar128._12_2_ - uVar117) >> 7),
                                     CONCAT22(uVar122 + ((short)(auVar128._10_2_ - uVar122) >> 7),
                                              uVar114 + ((short)(auVar128._8_2_ - uVar114) >> 7))));
              param_7[0x51b] =
                   CONCAT26(uVar112 + ((short)(auVar128._6_2_ - uVar112) >> 7),
                            CONCAT24(uVar110 + ((short)(auVar128._4_2_ - uVar110) >> 7),
                                     CONCAT22(uVar108 + ((short)(auVar128._2_2_ - uVar108) >> 7),
                                              uVar56 + ((short)(auVar128._0_2_ - uVar56) >> 7))));
              if (uVar74 >> 0x1f == 0) {
                puVar48 = puVar47 + 1;
                uVar74 = (ulong)*puVar47 | uVar74 << 0x20;
                puVar49 = puVar48;
                uVar71 = uVar74;
                if (uVar68 < 0xf) goto LAB_00116e00;
LAB_001172e0:
                lVar70 = uVar68 - 0xf;
                uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2902);
                uVar109 = (ushort)uVar67;
                uVar111 = (ushort)((ulong)uVar67 >> 0x10);
                uVar113 = (ushort)((ulong)uVar67 >> 0x20);
                uVar56 = (ushort)((ulong)uVar67 >> 0x30);
                uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x28fa);
                uVar106 = (ushort)uVar67;
                uVar107 = (ushort)((ulong)uVar67 >> 0x10);
                uVar57 = (ushort)((ulong)uVar67 >> 0x20);
                uVar81 = (ushort)((ulong)uVar67 >> 0x30);
                uVar80 = (uint)uVar61 & 0x7fff;
                bVar46 = *(ushort *)((long)param_7 + lVar70 * 0x22 + 0x28f2) <= uVar80;
                uVar105 = (ushort)uVar80;
                if (!bVar46) {
                  uVar73 = 1;
                }
                uVar71 = (ulong)bVar46;
                if (uVar106 <= uVar80) {
                  uVar71 = uVar73;
                }
                puVar72 = (undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x28ea);
                uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x28f2);
                uVar122 = (ushort)uVar67;
                uVar117 = (ushort)((ulong)uVar67 >> 0x10);
                uVar119 = (ushort)((ulong)uVar67 >> 0x20);
                uVar62 = (ushort)((ulong)uVar67 >> 0x30);
                uVar67 = *puVar72;
                uVar108 = (ushort)uVar67;
                uVar110 = (ushort)((ulong)uVar67 >> 0x10);
                uVar112 = (ushort)((ulong)uVar67 >> 0x20);
                uVar114 = (ushort)((ulong)uVar67 >> 0x30);
                auVar141._0_2_ = -(ushort)(uVar105 < uVar108);
                auVar141._2_2_ = -(ushort)(uVar105 < uVar110);
                auVar141._4_2_ = -(ushort)(uVar105 < uVar112);
                auVar141._6_2_ = -(ushort)(uVar105 < uVar114);
                auVar141._8_2_ = -(ushort)(uVar105 < uVar122);
                auVar141._10_2_ = -(ushort)(uVar105 < uVar117);
                auVar141._12_2_ = -(ushort)(uVar105 < uVar119);
                auVar141._14_2_ = -(ushort)(uVar105 < uVar62);
                auVar101._0_2_ = -(ushort)(uVar105 < uVar106);
                auVar101._2_2_ = -(ushort)(uVar105 < uVar107);
                auVar101._4_2_ = -(ushort)(uVar105 < uVar57);
                auVar101._6_2_ = -(ushort)(uVar105 < uVar81);
                auVar101._8_2_ = -(ushort)(uVar105 < uVar109);
                auVar101._10_2_ = -(ushort)(uVar105 < uVar111);
                auVar101._12_2_ = -(ushort)(uVar105 < uVar113);
                auVar101._14_2_ = -(ushort)(uVar105 < uVar56);
                auVar12._2_2_ = uVar31;
                auVar12._0_2_ = uVar30;
                auVar12._4_2_ = uVar32;
                auVar12._6_2_ = uVar33;
                auVar12._8_2_ = uVar149;
                auVar12._10_2_ = uVar151;
                auVar12._12_2_ = uVar153;
                auVar12._14_2_ = uVar155;
                auVar87 = auVar145 ^ (auVar145 ^ auVar12) & auVar141;
                auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar101;
                if (*(ushort *)((long)param_7 + lVar70 * 0x22 + 0x2902) <= uVar80) {
                  uVar71 = uVar71 + 1;
                }
                uVar68 = (ulong)(*(ushort *)((long)puVar72 + uVar71 * 8 + 2) <= uVar80) |
                         uVar71 << 2;
                if (*(ushort *)((long)puVar72 + uVar71 * 8 + 4) <= uVar80) {
                  uVar68 = uVar68 + 1;
                }
                if (*(ushort *)((long)puVar72 + uVar71 * 8 + 6) <= uVar80) {
                  uVar68 = uVar68 + 1;
                }
                puVar63 = (ushort *)((long)puVar72 + uVar68 * 2);
                uVar105 = *puVar63;
                uVar121 = puVar63[1];
                *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x28f2) =
                     CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                              CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                       CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                                uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))))
                ;
                *puVar72 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                                    CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                             CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >>
                                                                7),
                                                      uVar108 + ((short)(auVar87._0_2_ - uVar108) >>
                                                                7))));
                *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x2902) =
                     CONCAT26(uVar56 + ((short)(auVar128._14_2_ - uVar56) >> 7),
                              CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                       CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                                uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7)))
                             );
                *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x28fa) =
                     CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                              CONCAT24(uVar57 + ((short)(auVar128._4_2_ - uVar57) >> 7),
                                       CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                                uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7)))
                             );
                uVar71 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar61 >> 0xf) - (ulong)uVar105)
                         + (uVar61 & 0x7fff);
                puVar49 = puVar48;
                if (uVar71 >> 0x1f == 0) {
                  puVar49 = puVar48 + 1;
                  uVar71 = (ulong)*puVar48 | uVar71 << 0x20;
                }
                uVar68 = uVar68 + (lVar70 * 0x10 | 0xfU);
                if ((int)uVar68 != 0) goto LAB_00116e04;
LAB_001173dc:
                uVar73 = 0;
                iVar58 = 0;
              }
              else {
                puVar48 = puVar47;
                puVar49 = puVar47;
                uVar71 = uVar74;
                if (0xe < uVar68) goto LAB_001172e0;
LAB_00116e00:
                uVar74 = uVar61;
                if ((int)uVar68 == 0) goto LAB_001173dc;
LAB_00116e04:
                uVar4 = (int)uVar68 - 1;
                uVar80 = uVar4 >> 1;
                uVar73 = (ulong)uVar80;
                iVar58 = ((uVar4 & 1 | 2) << (ulong)(uVar80 & 0x1f)) + -1;
              }
              uVar61 = uVar74 >> (uVar73 & 0x3f);
              puVar47 = puVar49;
              if (uVar61 >> 0x1f == 0) {
                puVar47 = puVar49 + 1;
                uVar61 = (ulong)*puVar49 | uVar61 << 0x20;
              }
              uVar73 = uVar66 + 0xb +
                       (ulong)(((uint)uVar74 & (-1 << (ulong)((uint)uVar73 & 0x1f) ^ 0xffffffffU)) +
                              iVar58) * 4;
              uVar66 = uVar73 - 1;
            }
            else {
              if (0xb < uVar66) goto LAB_00116d44;
LAB_00116a98:
              uVar73 = uVar66 + 0xb;
              uVar66 = uVar66 + 10;
            }
            if (uVar73 != 0) {
              pbVar53 = (byte *)((long)puVar78 - (ulong)uVar69);
              pbVar65 = pbVar53 + param_6;
              if (param_5 <= pbVar53) {
                pbVar65 = pbVar53;
              }
              uVar68 = uVar73 & 3;
              if (uVar66 < 3) {
                lVar70 = 0;
              }
              else {
                lVar70 = 0;
                do {
                  pbVar53 = (byte *)((long)puVar78 + lVar70);
                  *pbVar53 = *pbVar65;
                  lVar70 = lVar70 + 4;
                  pbVar64 = param_5;
                  if (pbVar65 + 1 != pbVar2) {
                    pbVar64 = pbVar65 + 1;
                  }
                  pbVar53[1] = *pbVar64;
                  pbVar65 = param_5;
                  if (pbVar64 + 1 != pbVar2) {
                    pbVar65 = pbVar64 + 1;
                  }
                  pbVar53[2] = *pbVar65;
                  pbVar64 = param_5;
                  if (pbVar65 + 1 != pbVar2) {
                    pbVar64 = pbVar65 + 1;
                  }
                  pbVar53[3] = *pbVar64;
                  pbVar65 = param_5;
                  if (pbVar64 + 1 != pbVar2) {
                    pbVar65 = pbVar64 + 1;
                  }
                } while (uVar73 - uVar68 != lVar70);
              }
              if (uVar68 != 0) {
                lVar60 = -uVar68;
                pbVar53 = (byte *)((long)puVar78 + lVar70);
                do {
                  pbVar64 = pbVar65 + 1;
                  *pbVar53 = *pbVar65;
                  pbVar65 = param_5;
                  if (pbVar64 != pbVar2) {
                    pbVar65 = pbVar64;
                  }
                  lVar60 = lVar60 + 1;
                  pbVar53 = pbVar53 + 1;
                } while (lVar60 != 0);
              }
            }
          }
          bVar46 = lVar59 < 7;
          lVar59 = 0xb;
          if (bVar46) {
            lVar59 = 8;
          }
          puVar77 = (ulong *)((long)puVar78 + uVar73);
          param_9 = uVar73 + param_9;
          puVar49 = puVar47;
          auVar79 = (undefined1  [8])uVar71;
          goto joined_r0x001174e0;
        }
        if (uVar66 == 2) {
          uVar57 = uVar105 & 0x7fff;
          uVar68 = CONCAT26(uVar105,CONCAT24(uVar105,CONCAT22(uVar105,uVar105))) &
                   0x7fff7fff7fff7fff;
          uVar67 = *(undefined8 *)((long)param_7 + 0x2b04);
          uVar108 = (ushort)uVar67;
          uVar110 = (ushort)((ulong)uVar67 >> 0x10);
          uVar112 = (ushort)((ulong)uVar67 >> 0x20);
          uVar114 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *(undefined8 *)((long)param_7 + 0x2afc);
          uVar109 = (ushort)uVar67;
          uVar111 = (ushort)((ulong)uVar67 >> 0x10);
          uVar113 = (ushort)((ulong)uVar67 >> 0x20);
          uVar56 = (ushort)((ulong)uVar67 >> 0x30);
          uVar81 = -(ushort)((ushort)uVar68 < uVar109);
          uVar105 = -(ushort)((ushort)(uVar68 >> 0x10) < uVar111);
          uVar106 = -(ushort)((ushort)(uVar68 >> 0x20) < uVar113);
          uVar107 = -(ushort)((ushort)(uVar68 >> 0x30) < uVar56);
          uVar122 = uVar81 + uVar105 + uVar106 + uVar107 + -(ushort)(uVar57 < uVar108) +
                    -(ushort)(uVar57 < uVar110) + -(ushort)(uVar57 < uVar112) +
                    -(ushort)(uVar57 < uVar114);
          uVar105 = uVar105 & 0x7fe5;
          uVar29 = CONCAT13((char)(uVar105 >> 8),CONCAT12((char)uVar105,uVar81));
          uVar106 = uVar106 & 0x7fe5;
          uVar28 = CONCAT15((char)(uVar106 >> 8),CONCAT14((char)uVar106,uVar29));
          uVar107 = uVar107 & 0x7fe5;
          uVar66 = CONCAT17((char)(uVar107 >> 8),CONCAT16((char)uVar107,uVar28)) &
                   0xffffffffffff7fe5;
          uVar105 = -(ushort)(uVar57 < uVar108) & 0x7fe5;
          auVar83._0_10_ = CONCAT19((char)(uVar105 >> 8),CONCAT18((char)uVar105,uVar66));
          uVar105 = -(ushort)(uVar57 < uVar110) & 0x7fe5;
          auVar83[10] = (undefined1)uVar105;
          auVar83[0xb] = (undefined1)(uVar105 >> 8);
          uVar105 = -(ushort)(uVar57 < uVar112) & 0x7fe5;
          auVar85[0xc] = (undefined1)uVar105;
          auVar85._0_12_ = auVar83;
          auVar85[0xd] = (undefined1)(uVar105 >> 8);
          uVar105 = -(ushort)(uVar57 < uVar114) & 0x7fe5;
          auVar90[0xe] = (undefined1)uVar105;
          auVar90._0_14_ = auVar85;
          auVar90[0xf] = (undefined1)(uVar105 >> 8);
          lVar70 = (long)((ulong)uVar122 << 0x30) >> 0x2f;
          uVar105 = *(ushort *)((long)param_7 + lVar70 + 0x2b0a);
          uVar68 = ((ulong)((uint)*(ushort *)((long)param_7 + lVar70 + 0x2b0c) - (uint)uVar105) *
                    ((ulong)auVar79 >> 0xf) - (ulong)uVar105) + ((ulong)auVar79 & 0x7fff);
          *(ulong *)((long)param_7 + 0x2b04) =
               CONCAT26(uVar114 + ((short)((uVar45 - uVar114) + auVar90._14_2_) >> 7),
                        CONCAT24(uVar112 + ((short)((uVar44 - uVar112) + auVar85._12_2_) >> 7),
                                 CONCAT22(uVar110 + ((short)((uVar43 - uVar110) + auVar83._10_2_) >>
                                                    7),
                                          uVar108 + ((short)((uVar42 - uVar108) +
                                                            (short)((unkuint10)auVar83._0_10_ >>
                                                                   0x40)) >> 7))));
          *(undefined8 *)((long)param_7 + 0x2afc) =
               CONCAT26(uVar56 + ((short)((uVar41 - uVar56) + (short)(uVar66 >> 0x30)) >> 7),
                        CONCAT24(uVar113 + ((short)((uVar40 - uVar113) +
                                                   (short)((uint6)uVar28 >> 0x20)) >> 7),
                                 CONCAT22(uVar111 + ((short)((uVar39 - uVar111) +
                                                            (short)((uint)uVar29 >> 0x10)) >> 7),
                                          uVar109 + ((short)((uVar38 - uVar109) + (uVar81 & 0x7fe5))
                                                    >> 7))));
          puVar47 = puVar49;
          if (uVar68 >> 0x1f == 0) {
            puVar47 = puVar49 + 1;
            uVar68 = (ulong)*puVar49 | uVar68 << 0x20;
          }
          uVar67 = *(undefined8 *)((long)param_7 + 0x2bf2);
          uVar81 = (ushort)uVar67;
          uVar109 = (ushort)((ulong)uVar67 >> 0x10);
          uVar111 = (ushort)((ulong)uVar67 >> 0x20);
          uVar113 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *(undefined8 *)((long)param_7 + 0x2bea);
          uVar105 = (ushort)uVar67;
          uVar106 = (ushort)((ulong)uVar67 >> 0x10);
          uVar107 = (ushort)((ulong)uVar67 >> 0x20);
          uVar57 = (ushort)((ulong)uVar67 >> 0x30);
          uVar80 = uVar80 & 0x7fff;
          bVar46 = *(ushort *)((long)param_7 + 0x2be2) <= uVar80;
          uVar66 = uVar73;
          if (!bVar46) {
            uVar66 = 1;
          }
          uVar67 = *(undefined8 *)((long)param_7 + 0x2be2);
          uVar117 = (ushort)uVar67;
          uVar119 = (ushort)((ulong)uVar67 >> 0x10);
          uVar62 = (ushort)((ulong)uVar67 >> 0x20);
          uVar121 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *(undefined8 *)((long)param_7 + 0x2bda);
          uVar108 = (ushort)uVar67;
          uVar110 = (ushort)((ulong)uVar67 >> 0x10);
          uVar112 = (ushort)((ulong)uVar67 >> 0x20);
          uVar114 = (ushort)((ulong)uVar67 >> 0x30);
          uVar56 = (ushort)uVar80;
          auVar131._0_2_ = -(ushort)(uVar56 < uVar108);
          auVar131._2_2_ = -(ushort)(uVar56 < uVar110);
          auVar131._4_2_ = -(ushort)(uVar56 < uVar112);
          auVar131._6_2_ = -(ushort)(uVar56 < uVar114);
          auVar131._8_2_ = -(ushort)(uVar56 < uVar117);
          auVar131._10_2_ = -(ushort)(uVar56 < uVar119);
          auVar131._12_2_ = -(ushort)(uVar56 < uVar62);
          auVar131._14_2_ = -(ushort)(uVar56 < uVar121);
          auVar91._0_2_ = -(ushort)(uVar56 < uVar105);
          auVar91._2_2_ = -(ushort)(uVar56 < uVar106);
          auVar91._4_2_ = -(ushort)(uVar56 < uVar107);
          auVar91._6_2_ = -(ushort)(uVar56 < uVar57);
          auVar91._8_2_ = -(ushort)(uVar56 < uVar81);
          auVar91._10_2_ = -(ushort)(uVar56 < uVar109);
          auVar91._12_2_ = -(ushort)(uVar56 < uVar111);
          auVar91._14_2_ = -(ushort)(uVar56 < uVar113);
          uVar61 = (ulong)bVar46;
          if (uVar105 <= uVar80) {
            uVar61 = uVar66;
          }
          auVar21._2_2_ = uVar31;
          auVar21._0_2_ = uVar30;
          auVar21._4_2_ = uVar32;
          auVar21._6_2_ = uVar33;
          auVar21._8_2_ = uVar149;
          auVar21._10_2_ = uVar151;
          auVar21._12_2_ = uVar153;
          auVar21._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar21) & auVar131;
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar91;
          if (*(ushort *)((long)param_7 + 0x2bf2) <= uVar80) {
            uVar61 = uVar61 + 1;
          }
          uVar66 = (ulong)(*(ushort *)((long)param_7 + uVar61 * 8 + 0x2bdc) <= uVar80) | uVar61 << 2
          ;
          if (*(ushort *)((long)param_7 + uVar61 * 8 + 0x2bde) <= uVar80) {
            uVar66 = uVar66 + 1;
          }
          if (*(ushort *)(param_7 + uVar61 + 0x57c) <= uVar80) {
            uVar66 = uVar66 + 1;
          }
          puVar63 = (ushort *)((long)param_7 + uVar66 * 2 + 0x2bda);
          uVar56 = *puVar63;
          uVar71 = ((ulong)((uint)puVar63[1] - (uint)uVar56) * (uVar71 >> 0xf) - (ulong)uVar56) +
                   (uVar71 & 0x7fff);
          *(ulong *)((long)param_7 + 0x2be2) =
               CONCAT26(uVar121 + ((short)(auVar87._14_2_ - uVar121) >> 7),
                        CONCAT24(uVar62 + ((short)(auVar87._12_2_ - uVar62) >> 7),
                                 CONCAT22(uVar119 + ((short)(auVar87._10_2_ - uVar119) >> 7),
                                          uVar117 + ((short)(auVar87._8_2_ - uVar117) >> 7))));
          *(ulong *)((long)param_7 + 0x2bda) =
               CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                        CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                 CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                          uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))));
          *(ulong *)((long)param_7 + 0x2bf2) =
               CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                        CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                                 CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                          uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
          *(ulong *)((long)param_7 + 0x2bea) =
               CONCAT26(uVar57 + ((short)(auVar128._6_2_ - uVar57) >> 7),
                        CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                 CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                          uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
          if (uVar71 >> 0x1f == 0) {
            puVar49 = puVar47 + 1;
            uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
            puVar47 = puVar49;
            uVar61 = uVar71;
            if (uVar66 < 0xf) goto LAB_0011678c;
LAB_00116c2c:
            lVar70 = uVar66 - 0xf;
            uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2c14);
            uVar109 = (ushort)uVar67;
            uVar111 = (ushort)((ulong)uVar67 >> 0x10);
            uVar113 = (ushort)((ulong)uVar67 >> 0x20);
            uVar56 = (ushort)((ulong)uVar67 >> 0x30);
            uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2c0c);
            uVar106 = (ushort)uVar67;
            uVar107 = (ushort)((ulong)uVar67 >> 0x10);
            uVar57 = (ushort)((ulong)uVar67 >> 0x20);
            uVar81 = (ushort)((ulong)uVar67 >> 0x30);
            uVar80 = (uint)uVar68 & 0x7fff;
            bVar46 = *(ushort *)((long)param_7 + lVar70 * 0x22 + 0x2c04) <= uVar80;
            uVar105 = (ushort)uVar80;
            if (!bVar46) {
              uVar73 = 1;
            }
            uVar61 = (ulong)bVar46;
            if (uVar106 <= uVar80) {
              uVar61 = uVar73;
            }
            puVar72 = (undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2bfc);
            uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2c04);
            uVar117 = (ushort)uVar67;
            uVar119 = (ushort)((ulong)uVar67 >> 0x10);
            uVar62 = (ushort)((ulong)uVar67 >> 0x20);
            uVar121 = (ushort)((ulong)uVar67 >> 0x30);
            uVar67 = *puVar72;
            uVar108 = (ushort)uVar67;
            uVar110 = (ushort)((ulong)uVar67 >> 0x10);
            uVar112 = (ushort)((ulong)uVar67 >> 0x20);
            uVar114 = (ushort)((ulong)uVar67 >> 0x30);
            auVar136._0_2_ = -(ushort)(uVar105 < uVar108);
            auVar136._2_2_ = -(ushort)(uVar105 < uVar110);
            auVar136._4_2_ = -(ushort)(uVar105 < uVar112);
            auVar136._6_2_ = -(ushort)(uVar105 < uVar114);
            auVar136._8_2_ = -(ushort)(uVar105 < uVar117);
            auVar136._10_2_ = -(ushort)(uVar105 < uVar119);
            auVar136._12_2_ = -(ushort)(uVar105 < uVar62);
            auVar136._14_2_ = -(ushort)(uVar105 < uVar121);
            auVar96._0_2_ = -(ushort)(uVar105 < uVar106);
            auVar96._2_2_ = -(ushort)(uVar105 < uVar107);
            auVar96._4_2_ = -(ushort)(uVar105 < uVar57);
            auVar96._6_2_ = -(ushort)(uVar105 < uVar81);
            auVar96._8_2_ = -(ushort)(uVar105 < uVar109);
            auVar96._10_2_ = -(ushort)(uVar105 < uVar111);
            auVar96._12_2_ = -(ushort)(uVar105 < uVar113);
            auVar96._14_2_ = -(ushort)(uVar105 < uVar56);
            auVar23._2_2_ = uVar31;
            auVar23._0_2_ = uVar30;
            auVar23._4_2_ = uVar32;
            auVar23._6_2_ = uVar33;
            auVar23._8_2_ = uVar149;
            auVar23._10_2_ = uVar151;
            auVar23._12_2_ = uVar153;
            auVar23._14_2_ = uVar155;
            auVar87 = auVar145 ^ (auVar145 ^ auVar23) & auVar136;
            auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar96;
            if (*(ushort *)((long)param_7 + lVar70 * 0x22 + 0x2c14) <= uVar80) {
              uVar61 = uVar61 + 1;
            }
            uVar66 = (ulong)(*(ushort *)((long)puVar72 + uVar61 * 8 + 2) <= uVar80) | uVar61 << 2;
            if (*(ushort *)((long)puVar72 + uVar61 * 8 + 4) <= uVar80) {
              uVar66 = uVar66 + 1;
            }
            if (*(ushort *)((long)puVar72 + uVar61 * 8 + 6) <= uVar80) {
              uVar66 = uVar66 + 1;
            }
            puVar63 = (ushort *)((long)puVar72 + uVar66 * 2);
            uVar105 = *puVar63;
            uVar146 = puVar63[1];
            *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x2c04) =
                 CONCAT26(uVar121 + ((short)(auVar87._14_2_ - uVar121) >> 7),
                          CONCAT24(uVar62 + ((short)(auVar87._12_2_ - uVar62) >> 7),
                                   CONCAT22(uVar119 + ((short)(auVar87._10_2_ - uVar119) >> 7),
                                            uVar117 + ((short)(auVar87._8_2_ - uVar117) >> 7))));
            *puVar72 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                                CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                         CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                  uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))
                                        ));
            *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x2c14) =
                 CONCAT26(uVar56 + ((short)(auVar128._14_2_ - uVar56) >> 7),
                          CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                   CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                            uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
            *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x2c0c) =
                 CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                          CONCAT24(uVar57 + ((short)(auVar128._4_2_ - uVar57) >> 7),
                                   CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                            uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
            uVar61 = ((ulong)((uint)uVar146 - (uint)uVar105) * (uVar68 >> 0xf) - (ulong)uVar105) +
                     (uVar68 & 0x7fff);
            puVar47 = puVar49;
            if (uVar61 >> 0x1f == 0) {
              puVar47 = puVar49 + 1;
              uVar61 = (ulong)*puVar49 | uVar61 << 0x20;
            }
            uVar66 = uVar66 + (lVar70 * 0x10 | 0xfU);
            if (uVar66 != 0) goto LAB_00116790;
LAB_00116d24:
            uVar73 = 1;
            uVar68 = uVar61;
          }
          else {
            puVar49 = puVar47;
            uVar61 = uVar71;
            if (0xe < uVar66) goto LAB_00116c2c;
LAB_0011678c:
            uVar71 = uVar68;
            if (uVar66 == 0) goto LAB_00116d24;
LAB_00116790:
            puVar63 = (ushort *)((long)param_7 + (uVar66 - 1) * 2 + 0x2c1e);
            uVar105 = *puVar63;
            uVar73 = (ulong)uVar105;
            lVar70 = (uVar71 >> 0xe) * uVar73;
            puVar49 = puVar47;
            if ((uVar71 & 0x3fff) < uVar73) {
              uVar71 = lVar70 + (uVar71 & 0x3fff);
              *puVar63 = uVar105 + (short)(0x4000 - uVar105 >> 6);
              if (uVar71 >> 0x1f != 0) {
                uVar73 = 0;
                goto joined_r0x00116e54;
              }
              puVar49 = puVar47 + 1;
              uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
              uVar73 = 0;
              if (uVar66 != 1) {
                uVar73 = 0;
                goto LAB_001174f4;
              }
LAB_00116e58:
              uVar73 = uVar73 | 2;
            }
            else {
              uVar71 = (uVar71 - uVar73) - lVar70;
              *puVar63 = uVar105 - (uVar105 >> 6);
              if (uVar71 >> 0x1f == 0) {
                puVar49 = puVar47 + 1;
                uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
              }
              uVar73 = 1;
joined_r0x00116e54:
              if (uVar66 == 1) goto LAB_00116e58;
LAB_001174f4:
              puVar63 = (ushort *)((long)param_7 + (uVar66 - 1) * 2 + uVar73 * 0x3e + 0x2c5c);
              uVar105 = *puVar63;
              uVar68 = (ulong)uVar105;
              lVar70 = (uVar61 >> 0xe) * uVar68;
              puVar47 = puVar49;
              if ((uVar61 & 0x3fff) < uVar68) {
                uVar61 = lVar70 + (uVar61 & 0x3fff);
                *puVar63 = uVar105 + (short)(0x4000 - uVar105 >> 6);
                if (uVar61 >> 0x1f == 0) {
                  uVar61 = (ulong)*puVar49 | uVar61 << 0x20;
                  uVar73 = uVar73 << 1 | 4;
                  puVar47 = puVar49 + 1;
                }
                else {
                  uVar73 = uVar73 << 1 | 4;
                }
              }
              else {
                uVar61 = (uVar61 - uVar68) - lVar70;
                *puVar63 = uVar105 - (uVar105 >> 6);
                if (uVar61 >> 0x1f == 0) {
                  puVar47 = puVar49 + 1;
                  uVar61 = (ulong)*puVar49 | uVar61 << 0x20;
                }
                uVar73 = uVar73 << 1 | 5;
              }
              if (uVar66 == 2) {
                uVar68 = uVar61;
                goto LAB_00117758;
              }
              uVar80 = (int)uVar66 - 2;
              uVar69 = (uint)uVar71;
              uVar71 = uVar71 >> ((ulong)uVar80 & 0x3f);
              puVar49 = puVar47;
              if (uVar71 >> 0x1f == 0) {
                puVar49 = puVar47 + 1;
                uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
              }
              uVar73 = uVar73 << (uVar66 - 2 & 0x3f) |
                       (ulong)(uVar69 & (-1 << (ulong)(uVar80 & 0x1f) ^ 0xffffffffU));
            }
            puVar47 = puVar49;
            uVar68 = uVar71;
            uVar71 = uVar61;
          }
LAB_00117758:
          uVar66 = (ulong)(uVar73 - 1 == 0);
          puVar63 = (ushort *)((long)param_7 + uVar66 * 0x46 + 0x2950);
          uVar105 = *puVar63;
          uVar61 = (ulong)uVar105;
          lVar70 = (uVar71 >> 0xe) * uVar61;
          puVar48 = puVar47;
          if ((uVar71 & 0x3fff) < uVar61) {
            auVar79 = (undefined1  [8])(lVar70 + (uVar71 & 0x3fff));
            *puVar63 = uVar105 + (short)(0x4000 - uVar105 >> 6);
            uVar71 = 0;
            if ((ulong)auVar79 >> 0x1f == 0) {
              puVar48 = puVar47 + 1;
              auVar79 = (undefined1  [8])((ulong)*puVar47 | (long)auVar79 << 0x20);
            }
          }
          else {
            auVar79 = (undefined1  [8])((uVar71 - uVar61) - lVar70);
            *puVar63 = uVar105 - (uVar105 >> 6);
            if ((ulong)auVar79 >> 0x1f == 0) {
              puVar48 = puVar47 + 1;
              auVar79 = (undefined1  [8])((ulong)*puVar47 | (long)auVar79 << 0x20);
            }
            uVar71 = 1;
          }
          lVar70 = uVar71 * 0x22 + uVar66 * 0x46;
          uVar80 = (uint)uVar68 & 0x7fff;
          uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x2924);
          uVar109 = (ushort)uVar67;
          uVar111 = (ushort)((ulong)uVar67 >> 0x10);
          uVar113 = (ushort)((ulong)uVar67 >> 0x20);
          uVar56 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x291c);
          uVar106 = (ushort)uVar67;
          uVar107 = (ushort)((ulong)uVar67 >> 0x10);
          uVar57 = (ushort)((ulong)uVar67 >> 0x20);
          uVar81 = (ushort)((ulong)uVar67 >> 0x30);
          uVar105 = (ushort)uVar80;
          bVar46 = *(ushort *)((long)param_7 + lVar70 + 0x2914) <= uVar80;
          uVar66 = 2;
          if (!bVar46) {
            uVar66 = 1;
          }
          uVar61 = (ulong)bVar46;
          if (uVar106 <= uVar80) {
            uVar61 = uVar66;
          }
          puVar72 = (undefined8 *)((long)param_7 + lVar70 + 0x290c);
          uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x2914);
          uVar117 = (ushort)uVar67;
          uVar119 = (ushort)((ulong)uVar67 >> 0x10);
          uVar62 = (ushort)((ulong)uVar67 >> 0x20);
          uVar121 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *puVar72;
          uVar108 = (ushort)uVar67;
          uVar110 = (ushort)((ulong)uVar67 >> 0x10);
          uVar112 = (ushort)((ulong)uVar67 >> 0x20);
          uVar114 = (ushort)((ulong)uVar67 >> 0x30);
          auVar142._0_2_ = -(ushort)(uVar105 < uVar108);
          auVar142._2_2_ = -(ushort)(uVar105 < uVar110);
          auVar142._4_2_ = -(ushort)(uVar105 < uVar112);
          auVar142._6_2_ = -(ushort)(uVar105 < uVar114);
          auVar142._8_2_ = -(ushort)(uVar105 < uVar117);
          auVar142._10_2_ = -(ushort)(uVar105 < uVar119);
          auVar142._12_2_ = -(ushort)(uVar105 < uVar62);
          auVar142._14_2_ = -(ushort)(uVar105 < uVar121);
          auVar102._0_2_ = -(ushort)(uVar105 < uVar106);
          auVar102._2_2_ = -(ushort)(uVar105 < uVar107);
          auVar102._4_2_ = -(ushort)(uVar105 < uVar57);
          auVar102._6_2_ = -(ushort)(uVar105 < uVar81);
          auVar102._8_2_ = -(ushort)(uVar105 < uVar109);
          auVar102._10_2_ = -(ushort)(uVar105 < uVar111);
          auVar102._12_2_ = -(ushort)(uVar105 < uVar113);
          auVar102._14_2_ = -(ushort)(uVar105 < uVar56);
          auVar22._2_2_ = uVar31;
          auVar22._0_2_ = uVar30;
          auVar22._4_2_ = uVar32;
          auVar22._6_2_ = uVar33;
          auVar22._8_2_ = uVar149;
          auVar22._10_2_ = uVar151;
          auVar22._12_2_ = uVar153;
          auVar22._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar22) & auVar142;
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar102;
          if (*(ushort *)((long)param_7 + lVar70 + 0x2924) <= uVar80) {
            uVar61 = uVar61 + 1;
          }
          uVar66 = (ulong)(*(ushort *)((long)puVar72 + uVar61 * 8 + 2) <= uVar80) | uVar61 << 2;
          if (*(ushort *)((long)puVar72 + uVar61 * 8 + 4) <= uVar80) {
            uVar66 = uVar66 + 1;
          }
          if (*(ushort *)((long)puVar72 + uVar61 * 8 + 6) <= uVar80) {
            uVar66 = uVar66 + 1;
          }
          puVar63 = (ushort *)((long)puVar72 + uVar66 * 2);
          uVar105 = *puVar63;
          uVar146 = puVar63[1];
          *(ulong *)((long)param_7 + lVar70 + 0x2914) =
               CONCAT26(uVar121 + ((short)(auVar87._14_2_ - uVar121) >> 7),
                        CONCAT24(uVar62 + ((short)(auVar87._12_2_ - uVar62) >> 7),
                                 CONCAT22(uVar119 + ((short)(auVar87._10_2_ - uVar119) >> 7),
                                          uVar117 + ((short)(auVar87._8_2_ - uVar117) >> 7))));
          *puVar72 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
          ;
          *(ulong *)((long)param_7 + lVar70 + 0x2924) =
               CONCAT26(uVar56 + ((short)(auVar128._14_2_ - uVar56) >> 7),
                        CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                 CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                          uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
          *(ulong *)((long)param_7 + lVar70 + 0x291c) =
               CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                        CONCAT24(uVar57 + ((short)(auVar128._4_2_ - uVar57) >> 7),
                                 CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                          uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
          uVar61 = ((ulong)((uint)uVar146 - (uint)uVar105) * (uVar68 >> 0xf) - (ulong)uVar105) +
                   (uVar68 & 0x7fff);
          uVar68 = (long)(short)uVar122 + 0xc;
          puVar49 = puVar48;
          if (uVar61 >> 0x1f == 0) {
            puVar49 = puVar48 + 1;
            uVar61 = (ulong)*puVar48 | uVar61 << 0x20;
          }
          uVar71 = uVar71 | (uVar73 - 1) * 0x20 | uVar66 << 1;
          iVar58 = (int)uVar71 + 1;
          if (0 < (long)uVar68) {
            pbVar65 = (byte *)((long)puVar78 + ~uVar71);
            pbVar53 = pbVar65 + param_6;
            if (param_5 <= pbVar65) {
              pbVar53 = pbVar65;
            }
            uVar71 = uVar68 & 3;
            if ((long)(short)uVar122 + 0xbU < 3) {
              lVar70 = 0;
            }
            else {
              lVar70 = 0;
              do {
                pbVar65 = (byte *)((long)puVar78 + lVar70);
                *pbVar65 = *pbVar53;
                lVar70 = lVar70 + 4;
                pbVar64 = param_5;
                if (pbVar53 + 1 != pbVar2) {
                  pbVar64 = pbVar53 + 1;
                }
                pbVar65[1] = *pbVar64;
                pbVar53 = param_5;
                if (pbVar64 + 1 != pbVar2) {
                  pbVar53 = pbVar64 + 1;
                }
                pbVar65[2] = *pbVar53;
                pbVar64 = param_5;
                if (pbVar53 + 1 != pbVar2) {
                  pbVar64 = pbVar53 + 1;
                }
                pbVar65[3] = *pbVar64;
                pbVar53 = param_5;
                if (pbVar64 + 1 != pbVar2) {
                  pbVar53 = pbVar64 + 1;
                }
              } while (uVar68 - uVar71 != lVar70);
            }
            if (uVar71 != 0) {
              lVar60 = -uVar71;
              pbVar65 = (byte *)((long)puVar78 + lVar70);
              do {
                pbVar64 = pbVar53 + 1;
                *pbVar65 = *pbVar53;
                pbVar53 = param_5;
                if (pbVar64 != pbVar2) {
                  pbVar53 = pbVar64;
                }
                lVar60 = lVar60 + 1;
                pbVar65 = pbVar65 + 1;
              } while (lVar60 != 0);
            }
          }
        }
        else if (uVar66 == 1) {
          puVar63 = (ushort *)((long)param_7 + (param_9 & 3 | lVar59 << 2) * 2 + 0x2998);
          uVar105 = *puVar63;
          uVar68 = (ulong)uVar105;
          lVar70 = ((ulong)auVar79 >> 0xe) * uVar68;
          puVar47 = puVar49;
          if (((ulong)auVar79 & 0x3fff) < uVar68) {
            uVar68 = lVar70 + ((ulong)auVar79 & 0x3fff);
            *puVar63 = uVar105 + (short)(0x4000 - uVar105 >> 4);
            lVar70 = 0;
            if (uVar68 >> 0x1f == 0) {
              puVar47 = puVar49 + 1;
              uVar68 = (ulong)*puVar49 | uVar68 << 0x20;
            }
          }
          else {
            uVar68 = ((long)auVar79 - uVar68) - lVar70;
            *puVar63 = uVar105 - (uVar105 >> 4);
            if (uVar68 >> 0x1f == 0) {
              puVar47 = puVar49 + 1;
              uVar68 = (ulong)*puVar49 | uVar68 << 0x20;
            }
            lVar70 = 1;
          }
          uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x82 + 0x2a10);
          uVar81 = (ushort)uVar67;
          uVar109 = (ushort)((ulong)uVar67 >> 0x10);
          uVar111 = (ushort)((ulong)uVar67 >> 0x20);
          uVar113 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x82 + 0x2a08);
          uVar105 = (ushort)uVar67;
          uVar106 = (ushort)((ulong)uVar67 >> 0x10);
          uVar107 = (ushort)((ulong)uVar67 >> 0x20);
          uVar57 = (ushort)((ulong)uVar67 >> 0x30);
          uVar80 = uVar80 & 0x7fff;
          bVar46 = *(ushort *)((long)param_7 + lVar70 * 0x82 + 0x2a00) <= uVar80;
          uVar66 = uVar73;
          if (!bVar46) {
            uVar66 = 1;
          }
          uVar56 = (ushort)uVar80;
          uVar61 = (ulong)bVar46;
          if (uVar105 <= uVar80) {
            uVar61 = uVar66;
          }
          puVar72 = (undefined8 *)((long)param_7 + lVar70 * 0x82 + 0x29f8);
          uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x82 + 0x2a00);
          uVar122 = (ushort)uVar67;
          uVar117 = (ushort)((ulong)uVar67 >> 0x10);
          uVar119 = (ushort)((ulong)uVar67 >> 0x20);
          uVar62 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *puVar72;
          uVar108 = (ushort)uVar67;
          uVar110 = (ushort)((ulong)uVar67 >> 0x10);
          uVar112 = (ushort)((ulong)uVar67 >> 0x20);
          uVar114 = (ushort)((ulong)uVar67 >> 0x30);
          auVar135._0_2_ = -(ushort)(uVar56 < uVar108);
          auVar135._2_2_ = -(ushort)(uVar56 < uVar110);
          auVar135._4_2_ = -(ushort)(uVar56 < uVar112);
          auVar135._6_2_ = -(ushort)(uVar56 < uVar114);
          auVar135._8_2_ = -(ushort)(uVar56 < uVar122);
          auVar135._10_2_ = -(ushort)(uVar56 < uVar117);
          auVar135._12_2_ = -(ushort)(uVar56 < uVar119);
          auVar135._14_2_ = -(ushort)(uVar56 < uVar62);
          auVar13._2_2_ = uVar31;
          auVar13._0_2_ = uVar30;
          auVar13._4_2_ = uVar32;
          auVar13._6_2_ = uVar33;
          auVar13._8_2_ = uVar149;
          auVar13._10_2_ = uVar151;
          auVar13._12_2_ = uVar153;
          auVar13._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar13) & auVar135;
          auVar95._0_2_ = -(ushort)(uVar56 < uVar105);
          auVar95._2_2_ = -(ushort)(uVar56 < uVar106);
          auVar95._4_2_ = -(ushort)(uVar56 < uVar107);
          auVar95._6_2_ = -(ushort)(uVar56 < uVar57);
          auVar95._8_2_ = -(ushort)(uVar56 < uVar81);
          auVar95._10_2_ = -(ushort)(uVar56 < uVar109);
          auVar95._12_2_ = -(ushort)(uVar56 < uVar111);
          auVar95._14_2_ = -(ushort)(uVar56 < uVar113);
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar95;
          if (*(ushort *)((long)param_7 + lVar70 * 0x82 + 0x2a10) <= uVar80) {
            uVar61 = uVar61 + 1;
          }
          uVar66 = (ulong)(*(ushort *)((long)puVar72 + uVar61 * 8 + 2) <= uVar80) | uVar61 << 2;
          if (*(ushort *)((long)puVar72 + uVar61 * 8 + 4) <= uVar80) {
            uVar66 = uVar66 + 1;
          }
          if (*(ushort *)((long)puVar72 + uVar61 * 8 + 6) <= uVar80) {
            uVar66 = uVar66 + 1;
          }
          puVar63 = (ushort *)((long)puVar72 + uVar66 * 2);
          uVar56 = *puVar63;
          uVar121 = puVar63[1];
          *(ulong *)((long)param_7 + lVar70 * 0x82 + 0x2a00) =
               CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                        CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                 CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                          uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
          *puVar72 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
          ;
          *(ulong *)((long)param_7 + lVar70 * 0x82 + 0x2a10) =
               CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                        CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                                 CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                          uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
          *(ulong *)((long)param_7 + lVar70 * 0x82 + 0x2a08) =
               CONCAT26(uVar57 + ((short)(auVar128._6_2_ - uVar57) >> 7),
                        CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                 CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                          uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
          uVar71 = ((ulong)((uint)uVar121 - (uint)uVar56) * (uVar71 >> 0xf) - (ulong)uVar56) +
                   (uVar71 & 0x7fff);
          puVar49 = puVar47;
          if (uVar71 >> 0x1f == 0) {
            puVar49 = puVar47 + 1;
            uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
          }
          if (uVar66 == 0) {
            uVar74 = 1;
            uVar66 = uVar71;
          }
          else {
            puVar63 = (ushort *)((long)param_7 + (uVar66 - 1) * 2 + lVar70 * 0x82 + 0x2a1a);
            uVar105 = *puVar63;
            uVar61 = (ulong)uVar105;
            lVar60 = (uVar68 >> 0xe) * uVar61;
            puVar47 = puVar49;
            if ((uVar68 & 0x3fff) < uVar61) {
              uVar68 = lVar60 + (uVar68 & 0x3fff);
              *puVar63 = uVar105 + (short)(0x4000 - uVar105 >> 6);
              if (uVar68 >> 0x1f != 0) {
                uVar74 = 0;
                goto joined_r0x00116e8c;
              }
              puVar47 = puVar49 + 1;
              uVar68 = (ulong)*puVar49 | uVar68 << 0x20;
              uVar74 = 0;
              if (uVar66 != 1) {
                uVar74 = 0;
                goto LAB_00117568;
              }
LAB_00116e90:
              uVar74 = uVar74 | 2;
            }
            else {
              uVar68 = (uVar68 - uVar61) - lVar60;
              *puVar63 = uVar105 - (uVar105 >> 6);
              if (uVar68 >> 0x1f == 0) {
                puVar47 = puVar49 + 1;
                uVar68 = (ulong)*puVar49 | uVar68 << 0x20;
              }
              uVar74 = 1;
joined_r0x00116e8c:
              if (uVar66 == 1) goto LAB_00116e90;
LAB_00117568:
              puVar63 = (ushort *)
                        ((long)param_7 + (uVar66 - 1) * 2 + uVar74 * 0x20 + lVar70 * 0x82 + 0x2a3a);
              uVar105 = *puVar63;
              uVar61 = (ulong)uVar105;
              lVar60 = (uVar71 >> 0xe) * uVar61;
              puVar49 = puVar47;
              if ((uVar71 & 0x3fff) < uVar61) {
                uVar71 = lVar60 + (uVar71 & 0x3fff);
                *puVar63 = uVar105 + (short)(0x4000 - uVar105 >> 6);
                if (uVar71 >> 0x1f == 0) {
                  uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
                  uVar74 = uVar74 << 1 | 4;
                  puVar49 = puVar47 + 1;
                }
                else {
                  uVar74 = uVar74 << 1 | 4;
                }
              }
              else {
                uVar71 = (uVar71 - uVar61) - lVar60;
                *puVar63 = uVar105 - (uVar105 >> 6);
                if (uVar71 >> 0x1f == 0) {
                  puVar49 = puVar47 + 1;
                  uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
                }
                uVar74 = uVar74 << 1 | 5;
              }
              if (uVar66 == 2) {
                uVar66 = uVar71;
                goto LAB_001179f0;
              }
              uVar80 = (int)uVar66 - 2;
              uVar69 = (uint)uVar68;
              uVar68 = uVar68 >> ((ulong)uVar80 & 0x3f);
              puVar47 = puVar49;
              if (uVar68 >> 0x1f == 0) {
                puVar47 = puVar49 + 1;
                uVar68 = (ulong)*puVar49 | uVar68 << 0x20;
              }
              uVar74 = uVar74 << (uVar66 - 2 & 0x3f) |
                       (ulong)(uVar69 & (-1 << (ulong)(uVar80 & 0x1f) ^ 0xffffffffU));
            }
            puVar49 = puVar47;
            uVar66 = uVar68;
            uVar68 = uVar71;
          }
LAB_001179f0:
          uVar71 = (ulong)(uVar74 - 1 == 0);
          puVar63 = (ushort *)((long)param_7 + uVar71 * 0x46 + 0x2950);
          uVar105 = *puVar63;
          uVar61 = (ulong)uVar105;
          lVar60 = (uVar68 >> 0xe) * uVar61;
          puVar47 = puVar49;
          if ((uVar68 & 0x3fff) < uVar61) {
            auVar79 = (undefined1  [8])(lVar60 + (uVar68 & 0x3fff));
            *puVar63 = uVar105 + (short)(0x4000 - uVar105 >> 6);
            if ((ulong)auVar79 >> 0x1f == 0) {
              auVar79 = (undefined1  [8])((ulong)*puVar49 | (long)auVar79 << 0x20);
              uVar68 = 0;
              puVar47 = puVar49 + 1;
            }
            else {
              uVar68 = 0;
            }
          }
          else {
            auVar79 = (undefined1  [8])((uVar68 - uVar61) - lVar60);
            *puVar63 = uVar105 - (uVar105 >> 6);
            if ((ulong)auVar79 >> 0x1f == 0) {
              puVar47 = puVar49 + 1;
              auVar79 = (undefined1  [8])((ulong)*puVar49 | (long)auVar79 << 0x20);
            }
            uVar68 = 1;
          }
          lVar60 = uVar68 * 0x22 + uVar71 * 0x46;
          uVar80 = (uint)uVar66 & 0x7fff;
          uVar67 = *(undefined8 *)((long)param_7 + lVar60 + 0x2924);
          uVar109 = (ushort)uVar67;
          uVar111 = (ushort)((ulong)uVar67 >> 0x10);
          uVar113 = (ushort)((ulong)uVar67 >> 0x20);
          uVar56 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *(undefined8 *)((long)param_7 + lVar60 + 0x291c);
          uVar106 = (ushort)uVar67;
          uVar107 = (ushort)((ulong)uVar67 >> 0x10);
          uVar57 = (ushort)((ulong)uVar67 >> 0x20);
          uVar81 = (ushort)((ulong)uVar67 >> 0x30);
          uVar105 = (ushort)uVar80;
          bVar46 = *(ushort *)((long)param_7 + lVar60 + 0x2914) <= uVar80;
          if (!bVar46) {
            uVar73 = 1;
          }
          uVar71 = (ulong)bVar46;
          if (uVar106 <= uVar80) {
            uVar71 = uVar73;
          }
          puVar72 = (undefined8 *)((long)param_7 + lVar60 + 0x290c);
          uVar67 = *(undefined8 *)((long)param_7 + lVar60 + 0x2914);
          uVar122 = (ushort)uVar67;
          uVar117 = (ushort)((ulong)uVar67 >> 0x10);
          uVar119 = (ushort)((ulong)uVar67 >> 0x20);
          uVar62 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *puVar72;
          uVar108 = (ushort)uVar67;
          uVar110 = (ushort)((ulong)uVar67 >> 0x10);
          uVar112 = (ushort)((ulong)uVar67 >> 0x20);
          uVar114 = (ushort)((ulong)uVar67 >> 0x30);
          auVar143._0_2_ = -(ushort)(uVar105 < uVar108);
          auVar143._2_2_ = -(ushort)(uVar105 < uVar110);
          auVar143._4_2_ = -(ushort)(uVar105 < uVar112);
          auVar143._6_2_ = -(ushort)(uVar105 < uVar114);
          auVar143._8_2_ = -(ushort)(uVar105 < uVar122);
          auVar143._10_2_ = -(ushort)(uVar105 < uVar117);
          auVar143._12_2_ = -(ushort)(uVar105 < uVar119);
          auVar143._14_2_ = -(ushort)(uVar105 < uVar62);
          auVar103._0_2_ = -(ushort)(uVar105 < uVar106);
          auVar103._2_2_ = -(ushort)(uVar105 < uVar107);
          auVar103._4_2_ = -(ushort)(uVar105 < uVar57);
          auVar103._6_2_ = -(ushort)(uVar105 < uVar81);
          auVar103._8_2_ = -(ushort)(uVar105 < uVar109);
          auVar103._10_2_ = -(ushort)(uVar105 < uVar111);
          auVar103._12_2_ = -(ushort)(uVar105 < uVar113);
          auVar103._14_2_ = -(ushort)(uVar105 < uVar56);
          if (*(ushort *)((long)param_7 + lVar60 + 0x2924) <= uVar80) {
            uVar71 = uVar71 + 1;
          }
          auVar14._2_2_ = uVar31;
          auVar14._0_2_ = uVar30;
          auVar14._4_2_ = uVar32;
          auVar14._6_2_ = uVar33;
          auVar14._8_2_ = uVar149;
          auVar14._10_2_ = uVar151;
          auVar14._12_2_ = uVar153;
          auVar14._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar14) & auVar143;
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar103;
          uVar73 = (ulong)(*(ushort *)((long)puVar72 + uVar71 * 8 + 2) <= uVar80) | uVar71 << 2;
          if (*(ushort *)((long)puVar72 + uVar71 * 8 + 4) <= uVar80) {
            uVar73 = uVar73 + 1;
          }
          if (*(ushort *)((long)puVar72 + uVar71 * 8 + 6) <= uVar80) {
            uVar73 = uVar73 + 1;
          }
          puVar63 = (ushort *)((long)puVar72 + uVar73 * 2);
          uVar105 = *puVar63;
          uVar121 = puVar63[1];
          *(ulong *)((long)param_7 + lVar60 + 0x2914) =
               CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                        CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                 CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                          uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
          *puVar72 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
          ;
          *(ulong *)((long)param_7 + lVar60 + 0x2924) =
               CONCAT26(uVar56 + ((short)(auVar128._14_2_ - uVar56) >> 7),
                        CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                 CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                          uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
          *(ulong *)((long)param_7 + lVar60 + 0x291c) =
               CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                        CONCAT24(uVar57 + ((short)(auVar128._4_2_ - uVar57) >> 7),
                                 CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                          uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
          uVar61 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar66 >> 0xf) - (ulong)uVar105) +
                   (uVar66 & 0x7fff);
          puVar49 = puVar47;
          if (uVar61 >> 0x1f == 0) {
            puVar49 = puVar47 + 1;
            uVar61 = (ulong)*puVar47 | uVar61 << 0x20;
          }
          uVar71 = uVar68 | (uVar74 - 1) * 0x20 | uVar73 << 1;
          pbVar65 = (byte *)((long)puVar78 + ~uVar71);
          pbVar53 = pbVar65 + param_6;
          if (param_5 <= pbVar65) {
            pbVar53 = pbVar65;
          }
          uVar68 = lVar70 + 3;
          *(byte *)puVar78 = *pbVar53;
          pbVar65 = param_5;
          if (pbVar53 + 1 != pbVar2) {
            pbVar65 = pbVar53 + 1;
          }
          *(byte *)((long)puVar78 + 1) = *pbVar65;
          pbVar53 = param_5;
          if (pbVar65 + 1 != pbVar2) {
            pbVar53 = pbVar65 + 1;
          }
          *(byte *)((long)puVar78 + 2) = *pbVar53;
          if (lVar70 != 0) {
            pbVar65 = param_5;
            if (pbVar53 + 1 != pbVar2) {
              pbVar65 = pbVar53 + 1;
            }
            *(byte *)((long)puVar78 + 3) = *pbVar65;
          }
          iVar58 = (int)uVar71 + 1;
        }
        else {
          uVar66 = param_9 & 3;
          uVar67 = *(undefined8 *)((long)param_7 + uVar66 * 0x22 + 0x2b26);
          uVar81 = (ushort)uVar67;
          uVar109 = (ushort)((ulong)uVar67 >> 0x10);
          uVar111 = (ushort)((ulong)uVar67 >> 0x20);
          uVar113 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *(undefined8 *)((long)param_7 + uVar66 * 0x22 + 0x2b1e);
          uVar105 = (ushort)uVar67;
          uVar106 = (ushort)((ulong)uVar67 >> 0x10);
          uVar107 = (ushort)((ulong)uVar67 >> 0x20);
          uVar57 = (ushort)((ulong)uVar67 >> 0x30);
          uVar69 = SUB84(auVar79,0) & 0x7fff;
          bVar46 = *(ushort *)((long)param_7 + uVar66 * 0x22 + 0x2b16) <= uVar69;
          uVar68 = uVar73;
          if (!bVar46) {
            uVar68 = 1;
          }
          uVar56 = (ushort)uVar69;
          uVar61 = (ulong)bVar46;
          if (uVar105 <= uVar69) {
            uVar61 = uVar68;
          }
          puVar72 = (undefined8 *)((long)param_7 + uVar66 * 0x22 + 0x2b0e);
          uVar67 = *(undefined8 *)((long)param_7 + uVar66 * 0x22 + 0x2b16);
          uVar122 = (ushort)uVar67;
          uVar117 = (ushort)((ulong)uVar67 >> 0x10);
          uVar119 = (ushort)((ulong)uVar67 >> 0x20);
          uVar62 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *puVar72;
          uVar108 = (ushort)uVar67;
          uVar110 = (ushort)((ulong)uVar67 >> 0x10);
          uVar112 = (ushort)((ulong)uVar67 >> 0x20);
          uVar114 = (ushort)((ulong)uVar67 >> 0x30);
          auVar132._0_2_ = -(ushort)(uVar56 < uVar108);
          auVar132._2_2_ = -(ushort)(uVar56 < uVar110);
          auVar132._4_2_ = -(ushort)(uVar56 < uVar112);
          auVar132._6_2_ = -(ushort)(uVar56 < uVar114);
          auVar132._8_2_ = -(ushort)(uVar56 < uVar122);
          auVar132._10_2_ = -(ushort)(uVar56 < uVar117);
          auVar132._12_2_ = -(ushort)(uVar56 < uVar119);
          auVar132._14_2_ = -(ushort)(uVar56 < uVar62);
          auVar15._2_2_ = uVar31;
          auVar15._0_2_ = uVar30;
          auVar15._4_2_ = uVar32;
          auVar15._6_2_ = uVar33;
          auVar15._8_2_ = uVar149;
          auVar15._10_2_ = uVar151;
          auVar15._12_2_ = uVar153;
          auVar15._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar15) & auVar132;
          auVar92._0_2_ = -(ushort)(uVar56 < uVar105);
          auVar92._2_2_ = -(ushort)(uVar56 < uVar106);
          auVar92._4_2_ = -(ushort)(uVar56 < uVar107);
          auVar92._6_2_ = -(ushort)(uVar56 < uVar57);
          auVar92._8_2_ = -(ushort)(uVar56 < uVar81);
          auVar92._10_2_ = -(ushort)(uVar56 < uVar109);
          auVar92._12_2_ = -(ushort)(uVar56 < uVar111);
          auVar92._14_2_ = -(ushort)(uVar56 < uVar113);
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar92;
          if (*(ushort *)((long)param_7 + uVar66 * 0x22 + 0x2b26) <= uVar69) {
            uVar61 = uVar61 + 1;
          }
          uVar74 = (ulong)(*(ushort *)((long)puVar72 + uVar61 * 8 + 2) <= uVar69) | uVar61 << 2;
          if (*(ushort *)((long)puVar72 + uVar61 * 8 + 4) <= uVar69) {
            uVar74 = uVar74 + 1;
          }
          if (*(ushort *)((long)puVar72 + uVar61 * 8 + 6) <= uVar69) {
            uVar74 = uVar74 + 1;
          }
          puVar63 = (ushort *)((long)puVar72 + uVar74 * 2);
          uVar56 = *puVar63;
          uVar121 = puVar63[1];
          *(ulong *)((long)param_7 + uVar66 * 0x22 + 0x2b16) =
               CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                        CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                 CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                          uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
          *puVar72 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
          ;
          *(ulong *)((long)param_7 + uVar66 * 0x22 + 0x2b26) =
               CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                        CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                                 CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                          uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
          *(ulong *)((long)param_7 + uVar66 * 0x22 + 0x2b1e) =
               CONCAT26(uVar57 + ((short)(auVar128._6_2_ - uVar57) >> 7),
                        CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                 CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                          uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
          uVar66 = ((ulong)((uint)uVar121 - (uint)uVar56) * ((ulong)auVar79 >> 0xf) - (ulong)uVar56)
                   + ((ulong)auVar79 & 0x7fff);
          puVar47 = puVar49;
          if (uVar66 >> 0x1f == 0) {
            puVar47 = puVar49 + 1;
            uVar66 = (ulong)*puVar49 | uVar66 << 0x20;
          }
          uVar68 = uVar74 + 0xd;
          if (0xb < uVar74) {
            uVar67 = *(undefined8 *)((long)param_7 + 0x2bae);
            uVar81 = (ushort)uVar67;
            uVar109 = (ushort)((ulong)uVar67 >> 0x10);
            uVar111 = (ushort)((ulong)uVar67 >> 0x20);
            uVar113 = (ushort)((ulong)uVar67 >> 0x30);
            uVar67 = *(undefined8 *)((long)param_7 + 0x2ba6);
            uVar105 = (ushort)uVar67;
            uVar106 = (ushort)((ulong)uVar67 >> 0x10);
            uVar107 = (ushort)((ulong)uVar67 >> 0x20);
            uVar57 = (ushort)((ulong)uVar67 >> 0x30);
            uVar80 = uVar80 & 0x7fff;
            bVar46 = *(ushort *)((long)param_7 + 0x2b9e) <= uVar80;
            uVar61 = uVar73;
            if (!bVar46) {
              uVar61 = 1;
            }
            uVar67 = *(undefined8 *)((long)param_7 + 0x2b9e);
            uVar122 = (ushort)uVar67;
            uVar117 = (ushort)((ulong)uVar67 >> 0x10);
            uVar119 = (ushort)((ulong)uVar67 >> 0x20);
            uVar62 = (ushort)((ulong)uVar67 >> 0x30);
            uVar67 = *(undefined8 *)((long)param_7 + 0x2b96);
            uVar108 = (ushort)uVar67;
            uVar110 = (ushort)((ulong)uVar67 >> 0x10);
            uVar112 = (ushort)((ulong)uVar67 >> 0x20);
            uVar114 = (ushort)((ulong)uVar67 >> 0x30);
            uVar56 = (ushort)uVar80;
            auVar133._0_2_ = -(ushort)(uVar56 < uVar108);
            auVar133._2_2_ = -(ushort)(uVar56 < uVar110);
            auVar133._4_2_ = -(ushort)(uVar56 < uVar112);
            auVar133._6_2_ = -(ushort)(uVar56 < uVar114);
            auVar133._8_2_ = -(ushort)(uVar56 < uVar122);
            auVar133._10_2_ = -(ushort)(uVar56 < uVar117);
            auVar133._12_2_ = -(ushort)(uVar56 < uVar119);
            auVar133._14_2_ = -(ushort)(uVar56 < uVar62);
            auVar93._0_2_ = -(ushort)(uVar56 < uVar105);
            auVar93._2_2_ = -(ushort)(uVar56 < uVar106);
            auVar93._4_2_ = -(ushort)(uVar56 < uVar107);
            auVar93._6_2_ = -(ushort)(uVar56 < uVar57);
            auVar93._8_2_ = -(ushort)(uVar56 < uVar81);
            auVar93._10_2_ = -(ushort)(uVar56 < uVar109);
            auVar93._12_2_ = -(ushort)(uVar56 < uVar111);
            auVar93._14_2_ = -(ushort)(uVar56 < uVar113);
            uVar74 = (ulong)bVar46;
            if (uVar105 <= uVar80) {
              uVar74 = uVar61;
            }
            auVar16._2_2_ = uVar31;
            auVar16._0_2_ = uVar30;
            auVar16._4_2_ = uVar32;
            auVar16._6_2_ = uVar33;
            auVar16._8_2_ = uVar149;
            auVar16._10_2_ = uVar151;
            auVar16._12_2_ = uVar153;
            auVar16._14_2_ = uVar155;
            auVar87 = auVar145 ^ (auVar145 ^ auVar16) & auVar133;
            auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar93;
            if (*(ushort *)((long)param_7 + 0x2bae) <= uVar80) {
              uVar74 = uVar74 + 1;
            }
            uVar61 = (ulong)(*(ushort *)(param_7 + uVar74 + 0x573) <= uVar80) | uVar74 << 2;
            if (*(ushort *)((long)param_7 + uVar74 * 8 + 0x2b9a) <= uVar80) {
              uVar61 = uVar61 + 1;
            }
            if (*(ushort *)((long)param_7 + uVar74 * 8 + 0x2b9c) <= uVar80) {
              uVar61 = uVar61 + 1;
            }
            puVar63 = (ushort *)((long)param_7 + uVar61 * 2 + 0x2b96);
            uVar56 = *puVar63;
            uVar74 = ((ulong)((uint)puVar63[1] - (uint)uVar56) * (uVar71 >> 0xf) - (ulong)uVar56) +
                     (uVar71 & 0x7fff);
            *(ulong *)((long)param_7 + 0x2b9e) =
                 CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                          CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                   CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                            uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
            *(ulong *)((long)param_7 + 0x2b96) =
                 CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                          CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                   CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                            uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))));
            *(ulong *)((long)param_7 + 0x2bae) =
                 CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                          CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                                   CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                            uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
            *(ulong *)((long)param_7 + 0x2ba6) =
                 CONCAT26(uVar57 + ((short)(auVar128._6_2_ - uVar57) >> 7),
                          CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                   CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                            uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
            if (uVar74 >> 0x1f == 0) {
              puVar48 = puVar47 + 1;
              uVar74 = (ulong)*puVar47 | uVar74 << 0x20;
              puVar49 = puVar48;
              uVar71 = uVar74;
              if (uVar61 < 0xf) goto LAB_001169a0;
LAB_00116eac:
              lVar70 = uVar61 - 0xf;
              uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2bd0);
              uVar109 = (ushort)uVar67;
              uVar111 = (ushort)((ulong)uVar67 >> 0x10);
              uVar113 = (ushort)((ulong)uVar67 >> 0x20);
              uVar56 = (ushort)((ulong)uVar67 >> 0x30);
              uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2bc8);
              uVar106 = (ushort)uVar67;
              uVar107 = (ushort)((ulong)uVar67 >> 0x10);
              uVar57 = (ushort)((ulong)uVar67 >> 0x20);
              uVar81 = (ushort)((ulong)uVar67 >> 0x30);
              uVar80 = (uint)uVar66 & 0x7fff;
              bVar46 = *(ushort *)((long)param_7 + lVar70 * 0x22 + 0x2bc0) <= uVar80;
              uVar105 = (ushort)uVar80;
              uVar71 = uVar73;
              if (!bVar46) {
                uVar71 = 1;
              }
              uVar75 = (ulong)bVar46;
              if (uVar106 <= uVar80) {
                uVar75 = uVar71;
              }
              puVar72 = (undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2bb8);
              uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2bc0);
              uVar122 = (ushort)uVar67;
              uVar117 = (ushort)((ulong)uVar67 >> 0x10);
              uVar119 = (ushort)((ulong)uVar67 >> 0x20);
              uVar62 = (ushort)((ulong)uVar67 >> 0x30);
              uVar67 = *puVar72;
              uVar108 = (ushort)uVar67;
              uVar110 = (ushort)((ulong)uVar67 >> 0x10);
              uVar112 = (ushort)((ulong)uVar67 >> 0x20);
              uVar114 = (ushort)((ulong)uVar67 >> 0x30);
              auVar138._0_2_ = -(ushort)(uVar105 < uVar108);
              auVar138._2_2_ = -(ushort)(uVar105 < uVar110);
              auVar138._4_2_ = -(ushort)(uVar105 < uVar112);
              auVar138._6_2_ = -(ushort)(uVar105 < uVar114);
              auVar138._8_2_ = -(ushort)(uVar105 < uVar122);
              auVar138._10_2_ = -(ushort)(uVar105 < uVar117);
              auVar138._12_2_ = -(ushort)(uVar105 < uVar119);
              auVar138._14_2_ = -(ushort)(uVar105 < uVar62);
              auVar98._0_2_ = -(ushort)(uVar105 < uVar106);
              auVar98._2_2_ = -(ushort)(uVar105 < uVar107);
              auVar98._4_2_ = -(ushort)(uVar105 < uVar57);
              auVar98._6_2_ = -(ushort)(uVar105 < uVar81);
              auVar98._8_2_ = -(ushort)(uVar105 < uVar109);
              auVar98._10_2_ = -(ushort)(uVar105 < uVar111);
              auVar98._12_2_ = -(ushort)(uVar105 < uVar113);
              auVar98._14_2_ = -(ushort)(uVar105 < uVar56);
              auVar20._2_2_ = uVar31;
              auVar20._0_2_ = uVar30;
              auVar20._4_2_ = uVar32;
              auVar20._6_2_ = uVar33;
              auVar20._8_2_ = uVar149;
              auVar20._10_2_ = uVar151;
              auVar20._12_2_ = uVar153;
              auVar20._14_2_ = uVar155;
              auVar87 = auVar145 ^ (auVar145 ^ auVar20) & auVar138;
              auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar98;
              if (*(ushort *)((long)param_7 + lVar70 * 0x22 + 0x2bd0) <= uVar80) {
                uVar75 = uVar75 + 1;
              }
              uVar61 = (ulong)(*(ushort *)((long)puVar72 + uVar75 * 8 + 2) <= uVar80) | uVar75 << 2;
              if (*(ushort *)((long)puVar72 + uVar75 * 8 + 4) <= uVar80) {
                uVar61 = uVar61 + 1;
              }
              if (*(ushort *)((long)puVar72 + uVar75 * 8 + 6) <= uVar80) {
                uVar61 = uVar61 + 1;
              }
              puVar63 = (ushort *)((long)puVar72 + uVar61 * 2);
              uVar105 = *puVar63;
              uVar121 = puVar63[1];
              *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x2bc0) =
                   CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                            CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                     CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                              uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
              *puVar72 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                                  CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                           CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7
                                                              ),
                                                    uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7
                                                              ))));
              *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x2bd0) =
                   CONCAT26(uVar56 + ((short)(auVar128._14_2_ - uVar56) >> 7),
                            CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                     CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                              uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
              *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x2bc8) =
                   CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                            CONCAT24(uVar57 + ((short)(auVar128._4_2_ - uVar57) >> 7),
                                     CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                              uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
              uVar71 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar66 >> 0xf) - (ulong)uVar105) +
                       (uVar66 & 0x7fff);
              puVar49 = puVar48;
              if (uVar71 >> 0x1f == 0) {
                puVar49 = puVar48 + 1;
                uVar71 = (ulong)*puVar48 | uVar71 << 0x20;
              }
              uVar61 = uVar61 + (lVar70 * 0x10 | 0xfU);
              if ((int)uVar61 != 0) goto LAB_001169a4;
LAB_00116fa4:
              uVar61 = 0;
              iVar58 = 0;
            }
            else {
              puVar48 = puVar47;
              puVar49 = puVar47;
              uVar71 = uVar74;
              if (0xe < uVar61) goto LAB_00116eac;
LAB_001169a0:
              uVar74 = uVar66;
              if ((int)uVar61 == 0) goto LAB_00116fa4;
LAB_001169a4:
              uVar69 = (int)uVar61 - 1;
              uVar80 = uVar69 >> 1;
              uVar61 = (ulong)uVar80;
              iVar58 = ((uVar69 & 1 | 2) << (ulong)(uVar80 & 0x1f)) + -1;
            }
            uVar66 = uVar74 >> (uVar61 & 0x3f);
            puVar47 = puVar49;
            if (uVar66 >> 0x1f == 0) {
              puVar47 = puVar49 + 1;
              uVar66 = (ulong)*puVar49 | uVar66 << 0x20;
            }
            uVar68 = uVar68 + (ulong)(((uint)uVar74 &
                                      (-1 << (ulong)((uint)uVar61 & 0x1f) ^ 0xffffffffU)) + iVar58)
                              * 4;
          }
          uVar67 = *(undefined8 *)((long)param_7 + 0x2bf2);
          uVar81 = (ushort)uVar67;
          uVar109 = (ushort)((ulong)uVar67 >> 0x10);
          uVar111 = (ushort)((ulong)uVar67 >> 0x20);
          uVar113 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *(undefined8 *)((long)param_7 + 0x2bea);
          uVar105 = (ushort)uVar67;
          uVar106 = (ushort)((ulong)uVar67 >> 0x10);
          uVar107 = (ushort)((ulong)uVar67 >> 0x20);
          uVar57 = (ushort)((ulong)uVar67 >> 0x30);
          uVar80 = (uint)uVar71 & 0x7fff;
          bVar46 = *(ushort *)((long)param_7 + 0x2be2) <= uVar80;
          uVar61 = uVar73;
          if (!bVar46) {
            uVar61 = 1;
          }
          uVar56 = (ushort)uVar80;
          uVar74 = (ulong)bVar46;
          if (uVar105 <= uVar80) {
            uVar74 = uVar61;
          }
          if (*(ushort *)((long)param_7 + 0x2bf2) <= uVar80) {
            uVar74 = uVar74 + 1;
          }
          uVar61 = (ulong)(*(ushort *)((long)param_7 + uVar74 * 8 + 0x2bdc) <= uVar80) | uVar74 << 2
          ;
          uVar67 = *(undefined8 *)((long)param_7 + 0x2be2);
          uVar122 = (ushort)uVar67;
          uVar117 = (ushort)((ulong)uVar67 >> 0x10);
          uVar119 = (ushort)((ulong)uVar67 >> 0x20);
          uVar62 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *(undefined8 *)((long)param_7 + 0x2bda);
          uVar108 = (ushort)uVar67;
          uVar110 = (ushort)((ulong)uVar67 >> 0x10);
          uVar112 = (ushort)((ulong)uVar67 >> 0x20);
          uVar114 = (ushort)((ulong)uVar67 >> 0x30);
          auVar139._0_2_ = -(ushort)(uVar56 < uVar108);
          auVar139._2_2_ = -(ushort)(uVar56 < uVar110);
          auVar139._4_2_ = -(ushort)(uVar56 < uVar112);
          auVar139._6_2_ = -(ushort)(uVar56 < uVar114);
          auVar139._8_2_ = -(ushort)(uVar56 < uVar122);
          auVar139._10_2_ = -(ushort)(uVar56 < uVar117);
          auVar139._12_2_ = -(ushort)(uVar56 < uVar119);
          auVar139._14_2_ = -(ushort)(uVar56 < uVar62);
          auVar99._0_2_ = -(ushort)(uVar56 < uVar105);
          auVar99._2_2_ = -(ushort)(uVar56 < uVar106);
          auVar99._4_2_ = -(ushort)(uVar56 < uVar107);
          auVar99._6_2_ = -(ushort)(uVar56 < uVar57);
          auVar99._8_2_ = -(ushort)(uVar56 < uVar81);
          auVar99._10_2_ = -(ushort)(uVar56 < uVar109);
          auVar99._12_2_ = -(ushort)(uVar56 < uVar111);
          auVar99._14_2_ = -(ushort)(uVar56 < uVar113);
          auVar17._2_2_ = uVar31;
          auVar17._0_2_ = uVar30;
          auVar17._4_2_ = uVar32;
          auVar17._6_2_ = uVar33;
          auVar17._8_2_ = uVar149;
          auVar17._10_2_ = uVar151;
          auVar17._12_2_ = uVar153;
          auVar17._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar17) & auVar139;
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar99;
          if (*(ushort *)((long)param_7 + uVar74 * 8 + 0x2bde) <= uVar80) {
            uVar61 = uVar61 + 1;
          }
          if (*(ushort *)(param_7 + uVar74 + 0x57c) <= uVar80) {
            uVar61 = uVar61 + 1;
          }
          puVar63 = (ushort *)((long)param_7 + uVar61 * 2 + 0x2bda);
          uVar56 = *puVar63;
          uVar121 = puVar63[1];
          *(ulong *)((long)param_7 + 0x2be2) =
               CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                        CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                 CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                          uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
          *(ulong *)((long)param_7 + 0x2bda) =
               CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                        CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                 CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                          uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))));
          *(ulong *)((long)param_7 + 0x2bf2) =
               CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                        CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                                 CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                          uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
          *(ulong *)((long)param_7 + 0x2bea) =
               CONCAT26(uVar57 + ((short)(auVar128._6_2_ - uVar57) >> 7),
                        CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                 CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                          uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
          uVar71 = ((ulong)((uint)uVar121 - (uint)uVar56) * (uVar71 >> 0xf) - (ulong)uVar56) +
                   (uVar71 & 0x7fff);
          if (uVar71 >> 0x1f == 0) {
            puVar49 = puVar47 + 1;
            uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
            puVar47 = puVar49;
            uVar74 = uVar71;
            if (uVar61 < 0xf) goto LAB_001170a0;
LAB_00117114:
            lVar70 = uVar61 - 0xf;
            uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2c14);
            uVar109 = (ushort)uVar67;
            uVar111 = (ushort)((ulong)uVar67 >> 0x10);
            uVar113 = (ushort)((ulong)uVar67 >> 0x20);
            uVar56 = (ushort)((ulong)uVar67 >> 0x30);
            uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2c0c);
            uVar106 = (ushort)uVar67;
            uVar107 = (ushort)((ulong)uVar67 >> 0x10);
            uVar57 = (ushort)((ulong)uVar67 >> 0x20);
            uVar81 = (ushort)((ulong)uVar67 >> 0x30);
            uVar80 = (uint)uVar66 & 0x7fff;
            bVar46 = *(ushort *)((long)param_7 + lVar70 * 0x22 + 0x2c04) <= uVar80;
            uVar105 = (ushort)uVar80;
            uVar61 = uVar73;
            if (!bVar46) {
              uVar61 = 1;
            }
            uVar74 = (ulong)bVar46;
            if (uVar106 <= uVar80) {
              uVar74 = uVar61;
            }
            puVar72 = (undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2bfc);
            uVar67 = *(undefined8 *)((long)param_7 + lVar70 * 0x22 + 0x2c04);
            uVar122 = (ushort)uVar67;
            uVar117 = (ushort)((ulong)uVar67 >> 0x10);
            uVar119 = (ushort)((ulong)uVar67 >> 0x20);
            uVar62 = (ushort)((ulong)uVar67 >> 0x30);
            uVar67 = *puVar72;
            uVar108 = (ushort)uVar67;
            uVar110 = (ushort)((ulong)uVar67 >> 0x10);
            uVar112 = (ushort)((ulong)uVar67 >> 0x20);
            uVar114 = (ushort)((ulong)uVar67 >> 0x30);
            auVar140._0_2_ = -(ushort)(uVar105 < uVar108);
            auVar140._2_2_ = -(ushort)(uVar105 < uVar110);
            auVar140._4_2_ = -(ushort)(uVar105 < uVar112);
            auVar140._6_2_ = -(ushort)(uVar105 < uVar114);
            auVar140._8_2_ = -(ushort)(uVar105 < uVar122);
            auVar140._10_2_ = -(ushort)(uVar105 < uVar117);
            auVar140._12_2_ = -(ushort)(uVar105 < uVar119);
            auVar140._14_2_ = -(ushort)(uVar105 < uVar62);
            auVar100._0_2_ = -(ushort)(uVar105 < uVar106);
            auVar100._2_2_ = -(ushort)(uVar105 < uVar107);
            auVar100._4_2_ = -(ushort)(uVar105 < uVar57);
            auVar100._6_2_ = -(ushort)(uVar105 < uVar81);
            auVar100._8_2_ = -(ushort)(uVar105 < uVar109);
            auVar100._10_2_ = -(ushort)(uVar105 < uVar111);
            auVar100._12_2_ = -(ushort)(uVar105 < uVar113);
            auVar100._14_2_ = -(ushort)(uVar105 < uVar56);
            auVar19._2_2_ = uVar31;
            auVar19._0_2_ = uVar30;
            auVar19._4_2_ = uVar32;
            auVar19._6_2_ = uVar33;
            auVar19._8_2_ = uVar149;
            auVar19._10_2_ = uVar151;
            auVar19._12_2_ = uVar153;
            auVar19._14_2_ = uVar155;
            auVar87 = auVar145 ^ (auVar145 ^ auVar19) & auVar140;
            auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar100;
            if (*(ushort *)((long)param_7 + lVar70 * 0x22 + 0x2c14) <= uVar80) {
              uVar74 = uVar74 + 1;
            }
            uVar61 = (ulong)(*(ushort *)((long)puVar72 + uVar74 * 8 + 2) <= uVar80) | uVar74 << 2;
            if (*(ushort *)((long)puVar72 + uVar74 * 8 + 4) <= uVar80) {
              uVar61 = uVar61 + 1;
            }
            if (*(ushort *)((long)puVar72 + uVar74 * 8 + 6) <= uVar80) {
              uVar61 = uVar61 + 1;
            }
            puVar63 = (ushort *)((long)puVar72 + uVar61 * 2);
            uVar105 = *puVar63;
            uVar121 = puVar63[1];
            *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x2c04) =
                 CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                          CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                   CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                            uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
            *puVar72 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                                CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                         CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                  uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))
                                        ));
            *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x2c14) =
                 CONCAT26(uVar56 + ((short)(auVar128._14_2_ - uVar56) >> 7),
                          CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                   CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                            uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
            *(ulong *)((long)param_7 + lVar70 * 0x22 + 0x2c0c) =
                 CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                          CONCAT24(uVar57 + ((short)(auVar128._4_2_ - uVar57) >> 7),
                                   CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                            uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
            uVar74 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar66 >> 0xf) - (ulong)uVar105) +
                     (uVar66 & 0x7fff);
            puVar47 = puVar49;
            if (uVar74 >> 0x1f == 0) {
              puVar47 = puVar49 + 1;
              uVar74 = (ulong)*puVar49 | uVar74 << 0x20;
            }
            uVar61 = uVar61 + (lVar70 * 0x10 | 0xfU);
            if (uVar61 != 0) goto LAB_001170a4;
LAB_0011720c:
            uVar66 = 1;
            uVar61 = uVar74;
          }
          else {
            puVar49 = puVar47;
            uVar74 = uVar71;
            if (0xe < uVar61) goto LAB_00117114;
LAB_001170a0:
            uVar71 = uVar66;
            if (uVar61 == 0) goto LAB_0011720c;
LAB_001170a4:
            puVar63 = (ushort *)((long)param_7 + (uVar61 - 1) * 2 + 0x2c1e);
            uVar105 = *puVar63;
            uVar66 = (ulong)uVar105;
            lVar70 = (uVar71 >> 0xe) * uVar66;
            puVar49 = puVar47;
            if ((uVar71 & 0x3fff) < uVar66) {
              uVar71 = lVar70 + (uVar71 & 0x3fff);
              *puVar63 = uVar105 + (short)(0x4000 - uVar105 >> 6);
              if (uVar71 >> 0x1f != 0) {
                uVar66 = 0;
                goto joined_r0x00117240;
              }
              puVar49 = puVar47 + 1;
              uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
              uVar66 = 0;
              if (uVar61 != 1) {
                uVar66 = 0;
                goto LAB_001175e0;
              }
LAB_00117244:
              uVar66 = uVar66 | 2;
            }
            else {
              uVar71 = (uVar71 - uVar66) - lVar70;
              *puVar63 = uVar105 - (uVar105 >> 6);
              if (uVar71 >> 0x1f == 0) {
                puVar49 = puVar47 + 1;
                uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
              }
              uVar66 = 1;
joined_r0x00117240:
              if (uVar61 == 1) goto LAB_00117244;
LAB_001175e0:
              puVar63 = (ushort *)((long)param_7 + (uVar61 - 1) * 2 + uVar66 * 0x3e + 0x2c5c);
              uVar105 = *puVar63;
              uVar75 = (ulong)uVar105;
              lVar70 = (uVar74 >> 0xe) * uVar75;
              puVar47 = puVar49;
              if ((uVar74 & 0x3fff) < uVar75) {
                uVar74 = lVar70 + (uVar74 & 0x3fff);
                *puVar63 = uVar105 + (short)(0x4000 - uVar105 >> 6);
                if (uVar74 >> 0x1f == 0) {
                  uVar74 = (ulong)*puVar49 | uVar74 << 0x20;
                  uVar66 = uVar66 << 1 | 4;
                  puVar47 = puVar49 + 1;
                }
                else {
                  uVar66 = uVar66 << 1 | 4;
                }
              }
              else {
                uVar74 = (uVar74 - uVar75) - lVar70;
                *puVar63 = uVar105 - (uVar105 >> 6);
                if (uVar74 >> 0x1f == 0) {
                  puVar47 = puVar49 + 1;
                  uVar74 = (ulong)*puVar49 | uVar74 << 0x20;
                }
                uVar66 = uVar66 << 1 | 5;
              }
              if (uVar61 == 2) {
                uVar61 = uVar74;
                goto LAB_00117c1c;
              }
              uVar80 = (int)uVar61 - 2;
              uVar69 = (uint)uVar71;
              uVar71 = uVar71 >> ((ulong)uVar80 & 0x3f);
              puVar49 = puVar47;
              if (uVar71 >> 0x1f == 0) {
                puVar49 = puVar47 + 1;
                uVar71 = (ulong)*puVar47 | uVar71 << 0x20;
              }
              uVar66 = uVar66 << (uVar61 - 2 & 0x3f) |
                       (ulong)(uVar69 & (-1 << (ulong)(uVar80 & 0x1f) ^ 0xffffffffU));
            }
            puVar47 = puVar49;
            uVar61 = uVar71;
            uVar71 = uVar74;
          }
LAB_00117c1c:
          uVar74 = (ulong)(uVar66 - 1 == 0);
          puVar63 = (ushort *)((long)param_7 + uVar74 * 0x46 + 0x2950);
          uVar105 = *puVar63;
          uVar75 = (ulong)uVar105;
          lVar70 = (uVar71 >> 0xe) * uVar75;
          puVar48 = puVar47;
          if ((uVar71 & 0x3fff) < uVar75) {
            auVar79 = (undefined1  [8])(lVar70 + (uVar71 & 0x3fff));
            *puVar63 = uVar105 + (short)(0x4000 - uVar105 >> 6);
            if ((ulong)auVar79 >> 0x1f == 0) {
              auVar79 = (undefined1  [8])((ulong)*puVar47 | (long)auVar79 << 0x20);
              uVar71 = 0;
              puVar48 = puVar47 + 1;
            }
            else {
              uVar71 = 0;
            }
          }
          else {
            auVar79 = (undefined1  [8])((uVar71 - uVar75) - lVar70);
            *puVar63 = uVar105 - (uVar105 >> 6);
            if ((ulong)auVar79 >> 0x1f == 0) {
              puVar48 = puVar47 + 1;
              auVar79 = (undefined1  [8])((ulong)*puVar47 | (long)auVar79 << 0x20);
            }
            uVar71 = 1;
          }
          lVar70 = uVar71 * 0x22 + uVar74 * 0x46;
          uVar80 = (uint)uVar61 & 0x7fff;
          uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x2924);
          uVar109 = (ushort)uVar67;
          uVar111 = (ushort)((ulong)uVar67 >> 0x10);
          uVar113 = (ushort)((ulong)uVar67 >> 0x20);
          uVar56 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x291c);
          uVar106 = (ushort)uVar67;
          uVar107 = (ushort)((ulong)uVar67 >> 0x10);
          uVar57 = (ushort)((ulong)uVar67 >> 0x20);
          uVar81 = (ushort)((ulong)uVar67 >> 0x30);
          uVar105 = (ushort)uVar80;
          bVar46 = *(ushort *)((long)param_7 + lVar70 + 0x2914) <= uVar80;
          if (!bVar46) {
            uVar73 = 1;
          }
          uVar74 = (ulong)bVar46;
          if (uVar106 <= uVar80) {
            uVar74 = uVar73;
          }
          puVar72 = (undefined8 *)((long)param_7 + lVar70 + 0x290c);
          uVar67 = *(undefined8 *)((long)param_7 + lVar70 + 0x2914);
          uVar122 = (ushort)uVar67;
          uVar117 = (ushort)((ulong)uVar67 >> 0x10);
          uVar119 = (ushort)((ulong)uVar67 >> 0x20);
          uVar62 = (ushort)((ulong)uVar67 >> 0x30);
          uVar67 = *puVar72;
          uVar108 = (ushort)uVar67;
          uVar110 = (ushort)((ulong)uVar67 >> 0x10);
          uVar112 = (ushort)((ulong)uVar67 >> 0x20);
          uVar114 = (ushort)((ulong)uVar67 >> 0x30);
          auVar144._0_2_ = -(ushort)(uVar105 < uVar108);
          auVar144._2_2_ = -(ushort)(uVar105 < uVar110);
          auVar144._4_2_ = -(ushort)(uVar105 < uVar112);
          auVar144._6_2_ = -(ushort)(uVar105 < uVar114);
          auVar144._8_2_ = -(ushort)(uVar105 < uVar122);
          auVar144._10_2_ = -(ushort)(uVar105 < uVar117);
          auVar144._12_2_ = -(ushort)(uVar105 < uVar119);
          auVar144._14_2_ = -(ushort)(uVar105 < uVar62);
          auVar104._0_2_ = -(ushort)(uVar105 < uVar106);
          auVar104._2_2_ = -(ushort)(uVar105 < uVar107);
          auVar104._4_2_ = -(ushort)(uVar105 < uVar57);
          auVar104._6_2_ = -(ushort)(uVar105 < uVar81);
          auVar104._8_2_ = -(ushort)(uVar105 < uVar109);
          auVar104._10_2_ = -(ushort)(uVar105 < uVar111);
          auVar104._12_2_ = -(ushort)(uVar105 < uVar113);
          auVar104._14_2_ = -(ushort)(uVar105 < uVar56);
          if (*(ushort *)((long)param_7 + lVar70 + 0x2924) <= uVar80) {
            uVar74 = uVar74 + 1;
          }
          auVar18._2_2_ = uVar31;
          auVar18._0_2_ = uVar30;
          auVar18._4_2_ = uVar32;
          auVar18._6_2_ = uVar33;
          auVar18._8_2_ = uVar149;
          auVar18._10_2_ = uVar151;
          auVar18._12_2_ = uVar153;
          auVar18._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar18) & auVar144;
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar104;
          uVar73 = (ulong)(*(ushort *)((long)puVar72 + uVar74 * 8 + 2) <= uVar80) | uVar74 << 2;
          if (*(ushort *)((long)puVar72 + uVar74 * 8 + 4) <= uVar80) {
            uVar73 = uVar73 + 1;
          }
          if (*(ushort *)((long)puVar72 + uVar74 * 8 + 6) <= uVar80) {
            uVar73 = uVar73 + 1;
          }
          puVar63 = (ushort *)((long)puVar72 + uVar73 * 2);
          uVar105 = *puVar63;
          uVar121 = puVar63[1];
          *(ulong *)((long)param_7 + lVar70 + 0x2914) =
               CONCAT26(uVar62 + ((short)(auVar87._14_2_ - uVar62) >> 7),
                        CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                 CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                          uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
          *puVar72 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
          ;
          *(ulong *)((long)param_7 + lVar70 + 0x2924) =
               CONCAT26(uVar56 + ((short)(auVar128._14_2_ - uVar56) >> 7),
                        CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                 CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                          uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
          *(ulong *)((long)param_7 + lVar70 + 0x291c) =
               CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                        CONCAT24(uVar57 + ((short)(auVar128._4_2_ - uVar57) >> 7),
                                 CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                          uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
          uVar61 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar61 >> 0xf) - (ulong)uVar105) +
                   (uVar61 & 0x7fff);
          puVar49 = puVar48;
          if (uVar61 >> 0x1f == 0) {
            puVar49 = puVar48 + 1;
            uVar61 = (ulong)*puVar48 | uVar61 << 0x20;
          }
          uVar71 = uVar71 | (uVar66 - 1) * 0x20 | uVar73 << 1;
          iVar58 = (int)uVar71 + 1;
          if (uVar68 != 0) {
            pbVar65 = (byte *)((long)puVar78 + ~uVar71);
            pbVar53 = pbVar65 + param_6;
            if (param_5 <= pbVar65) {
              pbVar53 = pbVar65;
            }
            uVar71 = uVar68 & 3;
            if (uVar68 - 1 < 3) {
              lVar70 = 0;
            }
            else {
              lVar70 = 0;
              do {
                pbVar65 = (byte *)((long)puVar78 + lVar70);
                *pbVar65 = *pbVar53;
                lVar70 = lVar70 + 4;
                pbVar64 = param_5;
                if (pbVar53 + 1 != pbVar2) {
                  pbVar64 = pbVar53 + 1;
                }
                pbVar65[1] = *pbVar64;
                pbVar53 = param_5;
                if (pbVar64 + 1 != pbVar2) {
                  pbVar53 = pbVar64 + 1;
                }
                pbVar65[2] = *pbVar53;
                pbVar64 = param_5;
                if (pbVar53 + 1 != pbVar2) {
                  pbVar64 = pbVar53 + 1;
                }
                pbVar65[3] = *pbVar64;
                pbVar53 = param_5;
                if (pbVar64 + 1 != pbVar2) {
                  pbVar53 = pbVar64 + 1;
                }
              } while (uVar68 - uVar71 != lVar70);
            }
            if (uVar71 != 0) {
              lVar60 = -uVar71;
              pbVar65 = (byte *)((long)puVar78 + lVar70);
              do {
                pbVar64 = pbVar53 + 1;
                *pbVar65 = *pbVar53;
                pbVar53 = param_5;
                if (pbVar64 != pbVar2) {
                  pbVar53 = pbVar64;
                }
                lVar60 = lVar60 + 1;
                pbVar65 = pbVar65 + 1;
              } while (lVar60 != 0);
            }
          }
        }
        bVar46 = lVar59 < 7;
        lVar59 = 10;
        if (bVar46) {
          lVar59 = 7;
        }
        local_a0 = CONCAT44((undefined4)local_a0,iVar58);
        local_98 = CONCAT44((undefined4)local_98,uVar5);
        puVar77 = (ulong *)((long)puVar78 + uVar68);
        param_9 = uVar68 + param_9;
        goto joined_r0x001174e0;
      }
      param_9 = param_9 + 1;
      bVar46 = lVar59 < 7;
      lVar59 = 0xb;
      if (bVar46) {
        lVar59 = 9;
      }
      puVar77 = (ulong *)((long)puVar78 + 1);
      *(byte *)puVar78 = bVar54;
      puVar78 = puVar77;
    } while (puVar49 < puVar76);
  } while( true );
}


