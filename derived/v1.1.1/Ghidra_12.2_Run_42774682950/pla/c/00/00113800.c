/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00113800; name: FUN_00113800
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00113800(ulong *param_1,long param_2,uint *param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 *param_7,undefined8 param_8,ulong param_9)

{
  undefined4 *puVar1;
  short *psVar2;
  undefined1 *puVar3;
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
  undefined8 uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  undefined6 uVar29;
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
  long lVar46;
  bool bVar47;
  ushort uVar48;
  uint uVar49;
  int iVar50;
  ulong *puVar51;
  undefined1 *puVar52;
  byte bVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  uint uVar57;
  long lVar58;
  ulong uVar59;
  long lVar60;
  ushort *puVar61;
  ulong *puVar62;
  uint uVar63;
  ulong uVar64;
  undefined8 uVar65;
  ulong uVar66;
  ulong uVar67;
  long lVar68;
  ulong uVar69;
  undefined8 *puVar70;
  long lVar71;
  long lVar72;
  ulong *puVar73;
  ulong *__s;
  uint *puVar74;
  uint *puVar75;
  uint *puVar76;
  size_t sVar77;
  ulong uVar78;
  uint *puVar79;
  ulong uVar80;
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
  uint *local_170;
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
  
  uVar57 = *(uint *)(param_7 + 2);
  if (0xbfff < uVar57) {
    uVar63 = *(uint *)((long)param_7 + 0x14);
    if (uVar63 >> 0xe < 3) {
      lVar58 = 1;
      uVar49 = uVar63;
    }
    else {
      uVar4 = *(uint *)(param_7 + 3);
      if (uVar4 < 0xc000) {
        lVar58 = 2;
        uVar49 = uVar4;
      }
      else {
        uVar49 = *(uint *)((long)param_7 + 0x1c);
        if (0xbfff < uVar49) {
          *(undefined4 *)(param_7 + 2) = 4;
          *(uint *)((long)param_7 + 0x14) = uVar57;
          *(uint *)(param_7 + 3) = uVar63;
          *(uint *)((long)param_7 + 0x1c) = uVar4;
          goto LAB_001138a4;
        }
        lVar58 = 3;
      }
    }
    puVar1 = (undefined4 *)((long)param_7 + lVar58 * 4 + 0x10);
    uVar5 = puVar1[-1];
    puVar1[-1] = puVar1[-2];
    *puVar1 = uVar5;
    puVar1[-2] = puVar1[-3];
    *(uint *)(param_7 + 2) = uVar49;
  }
LAB_001138a4:
  local_b0 = (undefined1  [8])*param_7;
  uStack_a8 = param_7[1];
  local_a0 = param_7[2];
  local_98 = param_7[3];
  puVar79 = (uint *)(param_4 + -0x20);
  if (param_3 < puVar79) {
    FUN_00117f70(local_e0,param_3);
    local_170 = (uint *)0x0;
    puVar76 = local_d0[0];
  }
  else {
    puVar79 = (uint *)local_e0;
    memcpy(local_e0,param_3,param_4 - (long)param_3);
    FUN_00117f70(&local_88,local_e0);
    local_170 = param_3;
    puVar76 = local_78;
    uStack_d8 = uStack_80;
    local_e0 = (undefined1  [8])local_88;
  }
  uVar113 = _UNK_03889d4e;
  uVar111 = _UNK_03889d4c;
  uVar109 = _UNK_03889d4a;
  uVar81 = _UNK_03889d48;
  uVar55 = _UNK_03889d46;
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
    uVar69 = (ulong)local_e0 >> 1;
    if ((ulong)local_e0 >> 0x20 == 0) {
      uVar69 = (ulong)*puVar76 | uVar69 << 0x20;
      puVar76 = puVar76 + 1;
    }
    if (((ulong)local_e0 & 1) == 0) {
      puVar61 = (ushort *)(param_7 + 4);
      uVar48 = *puVar61;
      uVar108 = *(ushort *)((long)param_7 + 0x22);
      uVar110 = *(ushort *)((long)param_7 + 0x24);
      uVar112 = *(ushort *)((long)param_7 + 0x26);
      uVar114 = *(ushort *)(param_7 + 5);
      uVar122 = *(ushort *)((long)param_7 + 0x2a);
      uVar117 = *(ushort *)((long)param_7 + 0x2c);
      uVar119 = *(ushort *)((long)param_7 + 0x2e);
      uVar24 = param_7[7];
      uVar148 = (ushort)uVar24;
      uVar150 = (ushort)((ulong)uVar24 >> 0x10);
      uVar152 = (ushort)((ulong)uVar24 >> 0x20);
      uVar154 = (ushort)((ulong)uVar24 >> 0x30);
      uVar24 = param_7[6];
      uVar56 = (ushort)uVar24;
      uVar121 = (ushort)((ulong)uVar24 >> 0x10);
      uVar146 = (ushort)((ulong)uVar24 >> 0x20);
      uVar147 = (ushort)((ulong)uVar24 >> 0x30);
      uVar57 = (uint)uStack_d8 & 0x7fff;
      uVar80 = 2;
      if (*(ushort *)(param_7 + 5) > uVar57) {
        uVar80 = 1;
      }
      uVar59 = (ulong)(*(ushort *)(param_7 + 5) <= uVar57);
      if (uVar56 <= uVar57) {
        uVar59 = uVar80;
      }
      if (*(ushort *)(param_7 + 7) <= uVar57) {
        uVar59 = uVar59 + 1;
      }
      uVar54 = (ushort)uVar57;
      uVar80 = (ulong)(puVar61[uVar59 * 4 + 1] <= uVar57) | uVar59 << 2;
      uVar115 = (ushort)_UNK_03888f18;
      uVar116 = (ushort)((ulong)_UNK_03888f18 >> 0x10);
      uVar118 = (ushort)((ulong)_UNK_03888f18 >> 0x20);
      uVar120 = (ushort)((ulong)_UNK_03888f18 >> 0x30);
      wVar123 = u__HPX_hpx_03889110[4];
      wVar124 = u__HPX_hpx_03889110[5];
      wVar125 = u__HPX_hpx_03889110[6];
      wVar126 = u__HPX_hpx_03889110[7];
      if (puVar61[uVar59 * 4 + 2] <= uVar57) {
        uVar80 = uVar80 + 1;
      }
      uVar156 = _DAT_03889610 ^ (_DAT_03889610 ^ _DAT_03888f10) & -(ushort)(uVar54 < uVar48);
      uVar158 = _UNK_03889612 ^ (_UNK_03889612 ^ _UNK_03888f12) & -(ushort)(uVar54 < uVar108);
      uVar159 = _UNK_03889614 ^ (_UNK_03889614 ^ _UNK_03888f14) & -(ushort)(uVar54 < uVar110);
      uVar160 = _UNK_03889616 ^ (_UNK_03889616 ^ _UNK_03888f16) & -(ushort)(uVar54 < uVar112);
      uVar161 = _UNK_0388961a ^ (_UNK_0388961a ^ uVar116) & -(ushort)(uVar54 < uVar122);
      uVar162 = _UNK_0388961c ^ (_UNK_0388961c ^ uVar118) & -(ushort)(uVar54 < uVar117);
      uVar163 = _UNK_0388961e ^ (_UNK_0388961e ^ uVar120) & -(ushort)(uVar54 < uVar119);
      if (puVar61[uVar59 * 4 + 3] <= uVar57) {
        uVar80 = uVar80 + 1;
      }
      uVar6 = puVar61[uVar80];
      uVar7 = (puVar61 + uVar80)[1];
      uVar25 = wVar123 ^ _UNK_03889d48;
      uVar26 = wVar124 ^ _UNK_03889d4a;
      uVar27 = wVar125 ^ _UNK_03889d4c;
      uVar28 = wVar126 ^ _UNK_03889d4e;
      uVar164 = u__HPX_hpx_03889110[0] ^
                (u__HPX_hpx_03889110[0] ^ _DAT_03889d40) & -(ushort)(uVar54 < uVar56);
      uVar166 = u__HPX_hpx_03889110[1] ^
                (u__HPX_hpx_03889110[1] ^ _UNK_03889d42) & -(ushort)(uVar54 < uVar121);
      uVar167 = u__HPX_hpx_03889110[2] ^
                (u__HPX_hpx_03889110[2] ^ _UNK_03889d44) & -(ushort)(uVar54 < uVar146);
      uVar168 = u__HPX_hpx_03889110[3] ^
                (u__HPX_hpx_03889110[3] ^ _UNK_03889d46) & -(ushort)(uVar54 < uVar147);
      *(ushort *)(param_7 + 5) =
           uVar114 + ((short)((_UNK_03889618 ^
                              (_UNK_03889618 ^ uVar115) & -(ushort)(uVar54 < uVar114)) - uVar114) >>
                     7);
      *(ushort *)((long)param_7 + 0x2a) = uVar122 + ((short)(uVar161 - uVar122) >> 7);
      *(ushort *)((long)param_7 + 0x2c) = uVar117 + ((short)(uVar162 - uVar117) >> 7);
      *(ushort *)((long)param_7 + 0x2e) = uVar119 + ((short)(uVar163 - uVar119) >> 7);
      *puVar61 = uVar48 + ((short)(uVar156 - uVar48) >> 7);
      *(ushort *)((long)param_7 + 0x22) = uVar108 + ((short)(uVar158 - uVar108) >> 7);
      *(ushort *)((long)param_7 + 0x24) = uVar110 + ((short)(uVar159 - uVar110) >> 7);
      *(ushort *)((long)param_7 + 0x26) = uVar112 + ((short)(uVar160 - uVar112) >> 7);
      param_7[7] = CONCAT26(uVar154 + ((short)((wVar126 ^ uVar28 & -(ushort)(uVar54 < uVar154)) -
                                              uVar154) >> 7),
                            CONCAT24(uVar152 + ((short)((wVar125 ^
                                                        uVar27 & -(ushort)(uVar54 < uVar152)) -
                                                       uVar152) >> 7),
                                     CONCAT22(uVar150 + ((short)((wVar124 ^
                                                                 uVar26 & -(ushort)(uVar54 < uVar150
                                                                                   )) - uVar150) >>
                                                        7),
                                              uVar148 + ((short)((wVar123 ^
                                                                 uVar25 & -(ushort)(uVar54 < uVar148
                                                                                   )) - uVar148) >>
                                                        7))));
      param_7[6] = CONCAT26(uVar147 + ((short)(uVar168 - uVar147) >> 7),
                            CONCAT24(uVar146 + ((short)(uVar167 - uVar146) >> 7),
                                     CONCAT22(uVar121 + ((short)(uVar166 - uVar121) >> 7),
                                              uVar56 + ((short)(uVar164 - uVar56) >> 7))));
      uStack_d8 = ((ulong)((uint)uVar7 - (uint)uVar6) * (uStack_d8 >> 0xf) - (ulong)uVar6) +
                  (uStack_d8 & 0x7fff);
      puVar74 = puVar76;
      if (uStack_d8 >> 0x1f == 0) {
        puVar74 = puVar76 + 1;
        uStack_d8 = (ulong)*puVar76 | uStack_d8 << 0x20;
      }
      puVar70 = param_7 + 0x48;
      if (uVar80 != 0) {
        puVar70 = (undefined8 *)((long)param_7 + uVar80 * 0x22 + 0x460);
      }
      uVar57 = (uint)uVar69 & 0x7fff;
      uVar24 = puVar70[1];
      uVar150 = (ushort)uVar24;
      uVar152 = (ushort)((ulong)uVar24 >> 0x10);
      uVar154 = (ushort)((ulong)uVar24 >> 0x20);
      uVar54 = (ushort)((ulong)uVar24 >> 0x30);
      uVar24 = *puVar70;
      uVar121 = (ushort)uVar24;
      uVar146 = (ushort)((ulong)uVar24 >> 0x10);
      uVar147 = (ushort)((ulong)uVar24 >> 0x20);
      uVar148 = (ushort)((ulong)uVar24 >> 0x30);
      uVar48 = *(ushort *)(puVar70 + 2);
      uVar108 = *(ushort *)((long)puVar70 + 0x12);
      uVar110 = *(ushort *)((long)puVar70 + 0x14);
      uVar112 = *(ushort *)((long)puVar70 + 0x16);
      uVar114 = *(ushort *)(puVar70 + 3);
      uVar122 = *(ushort *)((long)puVar70 + 0x1a);
      uVar117 = *(ushort *)((long)puVar70 + 0x1c);
      uVar119 = *(ushort *)((long)puVar70 + 0x1e);
      uVar56 = (ushort)uVar57;
      uVar59 = 2;
      if (*(ushort *)(puVar70 + 1) > uVar57) {
        uVar59 = 1;
      }
      uVar67 = (ulong)(*(ushort *)(puVar70 + 1) <= uVar57);
      if (uVar48 <= uVar57) {
        uVar67 = uVar59;
      }
      if (*(ushort *)(puVar70 + 3) <= uVar57) {
        uVar67 = uVar67 + 1;
      }
      uVar59 = (ulong)(*(ushort *)((long)puVar70 + uVar67 * 8 + 2) <= uVar57) | uVar67 << 2;
      if (*(ushort *)((long)puVar70 + uVar67 * 8 + 4) <= uVar57) {
        uVar59 = uVar59 + 1;
      }
      if (*(ushort *)((long)puVar70 + uVar67 * 8 + 6) <= uVar57) {
        uVar59 = uVar59 + 1;
      }
      puVar61 = (ushort *)((long)puVar70 + uVar59 * 2);
      uVar156 = *puVar61;
      uVar158 = puVar61[1];
      puVar70[1] = CONCAT26(uVar54 + ((short)((uVar45 ^ (uVar45 ^ uVar120) &
                                                        -(ushort)(uVar56 < uVar54)) - uVar54) >> 7),
                            CONCAT24(uVar154 + ((short)((uVar44 ^ (uVar44 ^ uVar118) &
                                                                  -(ushort)(uVar56 < uVar154)) -
                                                       uVar154) >> 7),
                                     CONCAT22(uVar152 + ((short)((uVar43 ^ (uVar43 ^ uVar116) &
                                                                           -(ushort)(uVar56 < 
                                                  uVar152)) - uVar152) >> 7),
                                              uVar150 + ((short)((uVar42 ^ (uVar42 ^ uVar115) &
                                                                           -(ushort)(uVar56 < 
                                                  uVar150)) - uVar150) >> 7))));
      *puVar70 = CONCAT26(uVar148 + ((short)((uVar41 ^ (uVar41 ^ uVar33) &
                                                       -(ushort)(uVar56 < uVar148)) - uVar148) >> 7)
                          ,CONCAT24(uVar147 + ((short)((uVar40 ^ (uVar40 ^ uVar32) &
                                                                 -(ushort)(uVar56 < uVar147)) -
                                                      uVar147) >> 7),
                                    CONCAT22(uVar146 + ((short)((uVar39 ^ (uVar39 ^ uVar31) &
                                                                          -(ushort)(uVar56 < uVar146
                                                                                   )) - uVar146) >>
                                                       7),
                                             uVar121 + ((short)((uVar38 ^ (uVar38 ^ uVar30) &
                                                                          -(ushort)(uVar56 < uVar121
                                                                                   )) - uVar121) >>
                                                       7))));
      *(ushort *)(puVar70 + 3) =
           uVar114 + ((short)((wVar123 ^ (wVar123 ^ uVar81) & -(ushort)(uVar56 < uVar114)) - uVar114
                             ) >> 7);
      *(ushort *)((long)puVar70 + 0x1a) =
           uVar122 + ((short)((wVar124 ^ (wVar124 ^ uVar109) & -(ushort)(uVar56 < uVar122)) -
                             uVar122) >> 7);
      *(ushort *)((long)puVar70 + 0x1c) =
           uVar117 + ((short)((wVar125 ^ (wVar125 ^ uVar111) & -(ushort)(uVar56 < uVar117)) -
                             uVar117) >> 7);
      *(ushort *)((long)puVar70 + 0x1e) =
           uVar119 + ((short)((wVar126 ^ (wVar126 ^ uVar113) & -(ushort)(uVar56 < uVar119)) -
                             uVar119) >> 7);
      *(ushort *)(puVar70 + 2) =
           uVar48 + ((short)((wVar34 ^ (wVar34 ^ uVar105) & -(ushort)(uVar56 < uVar48)) - uVar48) >>
                    7);
      *(ushort *)((long)puVar70 + 0x12) =
           uVar108 + ((short)((wVar35 ^ (wVar35 ^ uVar106) & -(ushort)(uVar56 < uVar108)) - uVar108)
                     >> 7);
      *(ushort *)((long)puVar70 + 0x14) =
           uVar110 + ((short)((wVar36 ^ (wVar36 ^ uVar107) & -(ushort)(uVar56 < uVar110)) - uVar110)
                     >> 7);
      *(ushort *)((long)puVar70 + 0x16) =
           uVar112 + ((short)((wVar37 ^ (wVar37 ^ uVar55) & -(ushort)(uVar56 < uVar112)) - uVar112)
                     >> 7);
      uVar69 = ((ulong)((uint)uVar158 - (uint)uVar156) * (uVar69 >> 0xf) - (ulong)uVar156) +
               (uVar69 & 0x7fff);
      puVar76 = puVar74;
      if (uVar69 >> 0x1f == 0) {
        puVar76 = puVar74 + 1;
        uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
      }
      bVar53 = (byte)uVar59 | (byte)((int)uVar80 << 4);
    }
    else {
      bVar53 = 0;
    }
    param_9 = 1;
    puVar73 = (ulong *)((long)param_1 + 1);
    *(byte *)param_1 = bVar53;
    uVar80 = uStack_d8;
  }
  else {
    puVar73 = param_1;
    uVar69 = uStack_d8;
    uVar80 = (ulong)local_e0;
  }
  uVar45 = _UNK_0388961e;
  uVar44 = _UNK_0388961c;
  uVar43 = _UNK_0388961a;
  uVar42 = _UNK_03889618;
  uVar41 = _UNK_03889616;
  uVar40 = _UNK_03889614;
  uVar39 = _UNK_03889612;
  uVar38 = _DAT_03889610;
  uVar24 = u__HPX_hpx_03889110._8_8_;
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
  uVar151 = (undefined2)((ulong)_UNK_03888f18 >> 0x10);
  uVar153 = (undefined2)((ulong)_UNK_03888f18 >> 0x20);
  uVar155 = (undefined2)((ulong)_UNK_03888f18 >> 0x30);
  auVar157._2_2_ = u__HPX_hpx_03889110[1];
  auVar157._0_2_ = u__HPX_hpx_03889110[0];
  auVar157._4_2_ = u__HPX_hpx_03889110[2];
  auVar157._6_2_ = u__HPX_hpx_03889110[3];
  auVar165._10_2_ = _UNK_03889d4a;
  auVar165._8_2_ = _UNK_03889d48;
  auVar165._12_2_ = _UNK_03889d4c;
  auVar165._14_2_ = _UNK_03889d4e;
  auVar165._2_2_ = _UNK_03889d42;
  auVar165._0_2_ = _DAT_03889d40;
  auVar165._4_2_ = _UNK_03889d44;
  auVar165._6_2_ = _UNK_03889d46;
  lVar58 = 5;
  uVar149 = (undefined2)_UNK_03888f18;
  __s = puVar73;
  if (puVar76 < puVar79) goto LAB_00113c4c;
LAB_00115c48:
  do {
    puVar74 = puVar76;
    if (local_170 == (uint *)0x0) {
      memcpy(local_e0,puVar76,param_4 - (long)puVar76);
      puVar79 = (uint *)local_e0;
      puVar74 = (uint *)local_e0;
      local_170 = puVar76;
    }
    puVar76 = puVar74;
    __s = puVar73;
    if (puVar51 <= puVar73) {
      if (puVar73 == puVar51) {
        param_7[2] = local_a0;
        param_7[3] = local_98;
        *param_7 = local_b0;
        param_7[1] = uStack_a8;
        *puVar51 = uVar80 & 0xffffffff | uVar69 << 0x20;
        if (local_170 == (uint *)0x0) {
          lVar58 = (long)puVar76 - (long)param_3;
        }
        else {
          lVar58 = ((long)puVar76 - (long)(local_e0 + (long)param_3)) + (long)local_170;
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
        lVar58 = 0xffffffff;
      }
      return lVar58;
    }
LAB_00113c4c:
    do {
      while( true ) {
        uVar65 = u__HPX_hpx_03889110._8_8_;
        u__HPX_hpx_03889110[4] = (wchar16)uVar24;
        u__HPX_hpx_03889110[5] = SUB82(uVar24,2);
        u__HPX_hpx_03889110[6] = SUB82(uVar24,4);
        u__HPX_hpx_03889110[7] = SUB82(uVar24,6);
        auVar157._8_2_ = u__HPX_hpx_03889110[4];
        auVar157._10_2_ = u__HPX_hpx_03889110[5];
        auVar157._12_2_ = u__HPX_hpx_03889110[6];
        auVar157._14_2_ = u__HPX_hpx_03889110[7];
        uVar67 = 2;
        uVar59 = param_9 & 7 | lVar58 << 3;
        psVar2 = (short *)((long)param_7 + uVar59 * 2 + 0x19a0);
        uVar105 = *(ushort *)((long)param_7 + uVar59 * 2 + 0x19a0);
        uVar64 = (ulong)uVar105;
        lVar68 = (uVar80 >> 0xd) * uVar64;
        bVar53 = *(byte *)((long)__s - (local_a0 & 0xffffffff));
        u__HPX_hpx_03889110._8_8_ = uVar65;
        if (uVar64 <= (uVar80 & 0x1fff)) break;
        uVar59 = lVar68 + (uVar80 & 0x1fff);
        *psVar2 = uVar105 + (short)(0x2000 - uVar105 >> 5);
        puVar74 = puVar76;
        if (uVar59 >> 0x1f == 0) {
          puVar74 = puVar76 + 1;
          uVar59 = (ulong)*puVar76 | uVar59 << 0x20;
        }
        lVar68 = (ulong)(bVar53 >> 4) * 0x22 + (param_9 & 3) * 0x660;
        uVar57 = (uint)uVar69 & 0x7fff;
        uVar105 = (ushort)uVar57;
        puVar70 = (undefined8 *)((long)param_7 + lVar68 + 0x20);
        uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x28);
        uVar109 = (ushort)uVar65;
        uVar111 = (ushort)((ulong)uVar65 >> 0x10);
        uVar113 = (ushort)((ulong)uVar65 >> 0x20);
        uVar48 = (ushort)((ulong)uVar65 >> 0x30);
        uVar65 = *puVar70;
        uVar106 = (ushort)uVar65;
        uVar107 = (ushort)((ulong)uVar65 >> 0x10);
        uVar55 = (ushort)((ulong)uVar65 >> 0x20);
        uVar81 = (ushort)((ulong)uVar65 >> 0x30);
        auVar127._0_2_ = -(ushort)(uVar105 < uVar106);
        auVar127._2_2_ = -(ushort)(uVar105 < uVar107);
        auVar127._4_2_ = -(ushort)(uVar105 < uVar55);
        auVar127._6_2_ = -(ushort)(uVar105 < uVar81);
        auVar127._8_2_ = -(ushort)(uVar105 < uVar109);
        auVar127._10_2_ = -(ushort)(uVar105 < uVar111);
        auVar127._12_2_ = -(ushort)(uVar105 < uVar113);
        auVar127._14_2_ = -(ushort)(uVar105 < uVar48);
        uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x38);
        uVar122 = (ushort)uVar65;
        uVar117 = (ushort)((ulong)uVar65 >> 0x10);
        uVar119 = (ushort)((ulong)uVar65 >> 0x20);
        uVar56 = (ushort)((ulong)uVar65 >> 0x30);
        uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x30);
        uVar108 = (ushort)uVar65;
        uVar110 = (ushort)((ulong)uVar65 >> 0x10);
        uVar112 = (ushort)((ulong)uVar65 >> 0x20);
        uVar114 = (ushort)((ulong)uVar65 >> 0x30);
        bVar47 = *(ushort *)((long)param_7 + lVar68 + 0x28) <= uVar57;
        auVar8._2_2_ = uVar31;
        auVar8._0_2_ = uVar30;
        auVar8._4_2_ = uVar32;
        auVar8._6_2_ = uVar33;
        auVar8._8_2_ = uVar149;
        auVar8._10_2_ = uVar151;
        auVar8._12_2_ = uVar153;
        auVar8._14_2_ = uVar155;
        auVar128 = auVar145 ^ (auVar145 ^ auVar8) & auVar127;
        uVar80 = uVar67;
        if (!bVar47) {
          uVar80 = 1;
        }
        uVar64 = (ulong)bVar47;
        if (uVar108 <= uVar57) {
          uVar64 = uVar80;
        }
        if (*(ushort *)((long)param_7 + lVar68 + 0x38) <= uVar57) {
          uVar64 = uVar64 + 1;
        }
        uVar66 = (ulong)(*(ushort *)((long)puVar70 + uVar64 * 8 + 2) <= uVar57) | uVar64 << 2;
        auVar86._0_2_ = -(ushort)(uVar105 < uVar108);
        auVar86._2_2_ = -(ushort)(uVar105 < uVar110);
        auVar86._4_2_ = -(ushort)(uVar105 < uVar112);
        auVar86._6_2_ = -(ushort)(uVar105 < uVar114);
        auVar86._8_2_ = -(ushort)(uVar105 < uVar122);
        auVar86._10_2_ = -(ushort)(uVar105 < uVar117);
        auVar86._12_2_ = -(ushort)(uVar105 < uVar119);
        auVar86._14_2_ = -(ushort)(uVar105 < uVar56);
        auVar87 = auVar157 ^ (auVar157 ^ auVar165) & auVar86;
        if (*(ushort *)((long)puVar70 + uVar64 * 8 + 4) <= uVar57) {
          uVar66 = uVar66 + 1;
        }
        if (*(ushort *)((long)puVar70 + uVar64 * 8 + 6) <= uVar57) {
          uVar66 = uVar66 + 1;
        }
        puVar61 = (ushort *)((long)puVar70 + uVar66 * 2);
        uVar105 = *puVar61;
        uVar121 = puVar61[1];
        *(ulong *)((long)param_7 + lVar68 + 0x28) =
             CONCAT26(uVar48 + ((short)(auVar128._14_2_ - uVar48) >> 7),
                      CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                               CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                        uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
        *puVar70 = CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                            CONCAT24(uVar55 + ((short)(auVar128._4_2_ - uVar55) >> 7),
                                     CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                              uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
        *(ulong *)((long)param_7 + lVar68 + 0x38) =
             CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                      CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                               CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                        uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
        *(ulong *)((long)param_7 + lVar68 + 0x30) =
             CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                      CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                               CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                        uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))));
        uVar80 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar69 >> 0xf) - (ulong)uVar105) +
                 (uVar69 & 0x7fff);
        puVar75 = puVar74;
        if (uVar80 >> 0x1f == 0) {
          puVar75 = puVar74 + 1;
          uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
        }
        uVar57 = (uint)uVar59 & 0x7fff;
        uVar105 = (ushort)uVar57;
        lVar68 = (param_9 & 3) * 0x660 + 0x20;
        lVar60 = ((ulong)bVar53 & 0xf) * 0x22 + lVar68 + 0x220;
        if (bVar53 >> 4 != uVar66) {
          lVar60 = uVar66 * 0x22 + lVar68 + 0x440;
        }
        puVar70 = (undefined8 *)((long)param_7 + lVar60);
        uVar65 = puVar70[1];
        uVar109 = (ushort)uVar65;
        uVar111 = (ushort)((ulong)uVar65 >> 0x10);
        uVar113 = (ushort)((ulong)uVar65 >> 0x20);
        uVar48 = (ushort)((ulong)uVar65 >> 0x30);
        uVar65 = *puVar70;
        uVar106 = (ushort)uVar65;
        uVar107 = (ushort)((ulong)uVar65 >> 0x10);
        uVar55 = (ushort)((ulong)uVar65 >> 0x20);
        uVar81 = (ushort)((ulong)uVar65 >> 0x30);
        uVar65 = puVar70[3];
        uVar122 = (ushort)uVar65;
        uVar117 = (ushort)((ulong)uVar65 >> 0x10);
        uVar119 = (ushort)((ulong)uVar65 >> 0x20);
        uVar56 = (ushort)((ulong)uVar65 >> 0x30);
        uVar65 = puVar70[2];
        uVar108 = (ushort)uVar65;
        uVar110 = (ushort)((ulong)uVar65 >> 0x10);
        uVar112 = (ushort)((ulong)uVar65 >> 0x20);
        uVar114 = (ushort)((ulong)uVar65 >> 0x30);
        if (*(ushort *)(puVar70 + 1) > uVar57) {
          uVar67 = 1;
        }
        auVar129._0_2_ = -(ushort)(uVar105 < uVar106);
        auVar129._2_2_ = -(ushort)(uVar105 < uVar107);
        auVar129._4_2_ = -(ushort)(uVar105 < uVar55);
        auVar129._6_2_ = -(ushort)(uVar105 < uVar81);
        auVar129._8_2_ = -(ushort)(uVar105 < uVar109);
        auVar129._10_2_ = -(ushort)(uVar105 < uVar111);
        auVar129._12_2_ = -(ushort)(uVar105 < uVar113);
        auVar129._14_2_ = -(ushort)(uVar105 < uVar48);
        auVar88._0_2_ = -(ushort)(uVar105 < uVar108);
        auVar88._2_2_ = -(ushort)(uVar105 < uVar110);
        auVar88._4_2_ = -(ushort)(uVar105 < uVar112);
        auVar88._6_2_ = -(ushort)(uVar105 < uVar114);
        auVar88._8_2_ = -(ushort)(uVar105 < uVar122);
        auVar88._10_2_ = -(ushort)(uVar105 < uVar117);
        auVar88._12_2_ = -(ushort)(uVar105 < uVar119);
        auVar88._14_2_ = -(ushort)(uVar105 < uVar56);
        auVar9._2_2_ = uVar31;
        auVar9._0_2_ = uVar30;
        auVar9._4_2_ = uVar32;
        auVar9._6_2_ = uVar33;
        auVar9._8_2_ = uVar149;
        auVar9._10_2_ = uVar151;
        auVar9._12_2_ = uVar153;
        auVar9._14_2_ = uVar155;
        auVar128 = auVar145 ^ (auVar145 ^ auVar9) & auVar129;
        uVar69 = (ulong)(*(ushort *)(puVar70 + 1) <= uVar57);
        if (uVar108 <= uVar57) {
          uVar69 = uVar67;
        }
        if (*(ushort *)(puVar70 + 3) <= uVar57) {
          uVar69 = uVar69 + 1;
        }
        auVar87 = auVar157 ^ (auVar157 ^ auVar165) & auVar88;
        uVar67 = (ulong)(*(ushort *)((long)puVar70 + uVar69 * 8 + 2) <= uVar57) | uVar69 << 2;
        if (*(ushort *)((long)puVar70 + uVar69 * 8 + 4) <= uVar57) {
          uVar67 = uVar67 + 1;
        }
        if (*(ushort *)((long)puVar70 + uVar69 * 8 + 6) <= uVar57) {
          uVar67 = uVar67 + 1;
        }
        puVar61 = (ushort *)((long)puVar70 + uVar67 * 2);
        uVar105 = *puVar61;
        uVar121 = puVar61[1];
        puVar70[1] = CONCAT26(uVar48 + ((short)(auVar128._14_2_ - uVar48) >> 7),
                              CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                       CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                                uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7)))
                             );
        *puVar70 = CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                            CONCAT24(uVar55 + ((short)(auVar128._4_2_ - uVar55) >> 7),
                                     CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                              uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
        puVar70[3] = CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                              CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                       CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                                uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))))
        ;
        puVar70[2] = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
        ;
        uVar69 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar59 >> 0xf) - (ulong)uVar105) +
                 (uVar59 & 0x7fff);
        puVar76 = puVar75;
        if (uVar69 >> 0x1f == 0) {
          puVar76 = puVar75 + 1;
          uVar69 = (ulong)*puVar75 | uVar69 << 0x20;
        }
        param_9 = param_9 + 1;
        puVar73 = (ulong *)((long)__s + 1);
        *(byte *)__s = (byte)uVar67 | (byte)((int)uVar66 << 4);
        lVar58 = (long)*(int *)(&UNK_039c3340 + lVar58 * 4);
joined_r0x001152e0:
        __s = puVar73;
        if (puVar79 <= puVar76) goto LAB_00115c48;
      }
      uVar80 = (uVar80 - uVar64) - lVar68;
      *psVar2 = uVar105 - (uVar105 >> 5);
      puVar74 = puVar76;
      if (uVar80 >> 0x1f == 0) {
        puVar74 = puVar76 + 1;
        uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
      }
      uVar57 = (uint)uVar69 & 0x7fff;
      uVar65 = *(undefined8 *)((long)param_7 + uVar59 * 0x22 + 0x1a78);
      uVar81 = (ushort)uVar65;
      uVar109 = (ushort)((ulong)uVar65 >> 0x10);
      uVar111 = (ushort)((ulong)uVar65 >> 0x20);
      uVar113 = (ushort)((ulong)uVar65 >> 0x30);
      uVar65 = *(undefined8 *)((long)param_7 + uVar59 * 0x22 + 0x1a70);
      uVar105 = (ushort)uVar65;
      uVar106 = (ushort)((ulong)uVar65 >> 0x10);
      uVar107 = (ushort)((ulong)uVar65 >> 0x20);
      uVar55 = (ushort)((ulong)uVar65 >> 0x30);
      bVar47 = *(ushort *)((long)param_7 + uVar59 * 0x22 + 0x1a68) <= uVar57;
      uVar64 = uVar67;
      if (!bVar47) {
        uVar64 = 1;
      }
      uVar48 = (ushort)uVar57;
      uVar66 = (ulong)bVar47;
      if (uVar105 <= uVar57) {
        uVar66 = uVar64;
      }
      lVar68 = uVar59 * 0x22 + 0x1a60;
      if (*(ushort *)((long)param_7 + uVar59 * 0x22 + 0x1a78) <= uVar57) {
        uVar66 = uVar66 + 1;
      }
      lVar60 = uVar66 * 8 + lVar68;
      uVar65 = *(undefined8 *)((long)param_7 + uVar59 * 0x22 + 0x1a68);
      uVar122 = (ushort)uVar65;
      uVar117 = (ushort)((ulong)uVar65 >> 0x10);
      uVar119 = (ushort)((ulong)uVar65 >> 0x20);
      uVar56 = (ushort)((ulong)uVar65 >> 0x30);
      uVar65 = *(undefined8 *)((long)param_7 + uVar59 * 0x22 + 0x1a60);
      uVar108 = (ushort)uVar65;
      uVar110 = (ushort)((ulong)uVar65 >> 0x10);
      uVar112 = (ushort)((ulong)uVar65 >> 0x20);
      uVar114 = (ushort)((ulong)uVar65 >> 0x30);
      auVar130._0_2_ = -(ushort)(uVar48 < uVar108);
      auVar130._2_2_ = -(ushort)(uVar48 < uVar110);
      auVar130._4_2_ = -(ushort)(uVar48 < uVar112);
      auVar130._6_2_ = -(ushort)(uVar48 < uVar114);
      auVar130._8_2_ = -(ushort)(uVar48 < uVar122);
      auVar130._10_2_ = -(ushort)(uVar48 < uVar117);
      auVar130._12_2_ = -(ushort)(uVar48 < uVar119);
      auVar130._14_2_ = -(ushort)(uVar48 < uVar56);
      auVar87._0_2_ = -(ushort)(uVar48 < uVar105);
      auVar87._2_2_ = -(ushort)(uVar48 < uVar106);
      auVar87._4_2_ = -(ushort)(uVar48 < uVar107);
      auVar87._6_2_ = -(ushort)(uVar48 < uVar55);
      auVar87._8_2_ = -(ushort)(uVar48 < uVar81);
      auVar87._10_2_ = -(ushort)(uVar48 < uVar109);
      auVar87._12_2_ = -(ushort)(uVar48 < uVar111);
      auVar87._14_2_ = -(ushort)(uVar48 < uVar113);
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
      uVar64 = (ulong)(*(ushort *)((long)param_7 + lVar60 + 2) <= uVar57) | uVar66 << 2;
      if (*(ushort *)((long)param_7 + lVar60 + 4) <= uVar57) {
        uVar64 = uVar64 + 1;
      }
      if (*(ushort *)((long)param_7 + lVar60 + 6) <= uVar57) {
        uVar64 = uVar64 + 1;
      }
      puVar61 = (ushort *)((long)param_7 + uVar64 * 2 + lVar68);
      uVar48 = *puVar61;
      uVar121 = puVar61[1];
      *(ulong *)((long)param_7 + uVar59 * 0x22 + 0x1a68) =
           CONCAT26(uVar56 + ((short)(auVar130._14_2_ - uVar56) >> 7),
                    CONCAT24(uVar119 + ((short)(auVar130._12_2_ - uVar119) >> 7),
                             CONCAT22(uVar117 + ((short)(auVar130._10_2_ - uVar117) >> 7),
                                      uVar122 + ((short)(auVar130._8_2_ - uVar122) >> 7))));
      *(ulong *)((long)param_7 + uVar59 * 0x22 + 0x1a60) =
           CONCAT26(uVar114 + ((short)(auVar130._6_2_ - uVar114) >> 7),
                    CONCAT24(uVar112 + ((short)(auVar130._4_2_ - uVar112) >> 7),
                             CONCAT22(uVar110 + ((short)(auVar130._2_2_ - uVar110) >> 7),
                                      uVar108 + ((short)(auVar130._0_2_ - uVar108) >> 7))));
      *(ulong *)((long)param_7 + uVar59 * 0x22 + 0x1a78) =
           CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                    CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                             CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                      uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
      *(ulong *)((long)param_7 + uVar59 * 0x22 + 0x1a70) =
           CONCAT26(uVar55 + ((short)(auVar128._6_2_ - uVar55) >> 7),
                    CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                             CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                      uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
      uVar69 = ((ulong)((uint)uVar121 - (uint)uVar48) * (uVar69 >> 0xf) - (ulong)uVar48) +
               (uVar69 & 0x7fff);
      puVar76 = puVar74;
      if (uVar69 >> 0x1f == 0) {
        puVar76 = puVar74 + 1;
        uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
      }
      if (uVar64 != 0) {
        uVar57 = (uint)uVar69;
        uVar105 = (ushort)uVar80;
        if (3 < uVar64) {
          if (0xb < uVar64) {
            lVar68 = uVar64 * 4;
            uVar65 = *(undefined8 *)(local_e0 + lVar68 + 4);
            uVar57 = *(uint *)((long)local_d0 + lVar68);
            *(undefined4 *)((long)local_d0 + lVar68) = *(undefined4 *)((long)local_d0 + lVar68 + -4)
            ;
            *(undefined8 *)(local_e0 + lVar68 + 8) = uVar65;
            local_a0 = CONCAT44(local_a0._4_4_,uVar57);
            *(undefined1 *)__s = *(undefined1 *)((long)__s - (ulong)uVar57);
            *(undefined1 *)((long)__s + 1) = *(undefined1 *)((long)__s + (1 - (ulong)uVar57));
            bVar47 = lVar58 < 7;
            lVar58 = 0xb;
            if (bVar47) {
              lVar58 = 8;
            }
            puVar73 = (ulong *)((long)__s + 2);
            param_9 = param_9 + 2;
            goto joined_r0x001152e0;
          }
          lVar60 = (long)(uVar64 - 4) >> 1;
          lVar68 = lVar60 * 4;
          uVar63 = *(uint *)((long)&local_a0 + lVar68);
          uVar59 = (ulong)uVar63;
          uVar65 = *(undefined8 *)(local_b0 + lVar68 + 4);
          *(uint *)((long)&local_a0 + lVar68) = *(uint *)(local_b0 + lVar68 + 0xc);
          *(undefined8 *)(local_b0 + lVar68 + 8) = uVar65;
          uVar66 = param_9 & 3;
          local_a0 = CONCAT44(local_a0._4_4_,uVar63);
          if ((uVar64 - 4 & 1) == 0) {
            lVar68 = uVar66 * 0x12 + lVar60 * 0x48;
            uVar55 = uVar105 & 0x7fff;
            uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x2728);
            uVar108 = (ushort)uVar65;
            uVar110 = (ushort)((ulong)uVar65 >> 0x10);
            uVar112 = (ushort)((ulong)uVar65 >> 0x20);
            uVar114 = (ushort)((ulong)uVar65 >> 0x30);
            uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x2720);
            uVar109 = (ushort)uVar65;
            uVar111 = (ushort)((ulong)uVar65 >> 0x10);
            uVar113 = (ushort)((ulong)uVar65 >> 0x20);
            uVar48 = (ushort)((ulong)uVar65 >> 0x30);
            uVar67 = CONCAT26(uVar105,CONCAT24(uVar105,CONCAT22(uVar105,uVar105))) &
                     0x7fff7fff7fff7fff;
            uVar81 = -(ushort)((ushort)uVar67 < uVar109);
            uVar105 = -(ushort)((ushort)(uVar67 >> 0x10) < uVar111);
            uVar106 = -(ushort)((ushort)(uVar67 >> 0x20) < uVar113);
            uVar107 = -(ushort)((ushort)(uVar67 >> 0x30) < uVar48);
            uVar122 = uVar81 + uVar105 + uVar106 + uVar107 + -(ushort)(uVar55 < uVar108) +
                      -(ushort)(uVar55 < uVar110) + -(ushort)(uVar55 < uVar112) +
                      -(ushort)(uVar55 < uVar114);
            uVar105 = uVar105 & 0x7fe5;
            uVar5 = CONCAT13((char)(uVar105 >> 8),CONCAT12((char)uVar105,uVar81));
            uVar106 = uVar106 & 0x7fe5;
            uVar29 = CONCAT15((char)(uVar106 >> 8),CONCAT14((char)uVar106,uVar5));
            uVar107 = uVar107 & 0x7fe5;
            uVar67 = CONCAT17((char)(uVar107 >> 8),CONCAT16((char)uVar107,uVar29)) &
                     0xffffffffffff7fe5;
            uVar105 = -(ushort)(uVar55 < uVar108) & 0x7fe5;
            auVar82._0_10_ = CONCAT19((char)(uVar105 >> 8),CONCAT18((char)uVar105,uVar67));
            uVar105 = -(ushort)(uVar55 < uVar110) & 0x7fe5;
            auVar82[10] = (undefined1)uVar105;
            auVar82[0xb] = (undefined1)(uVar105 >> 8);
            uVar105 = -(ushort)(uVar55 < uVar112) & 0x7fe5;
            auVar84[0xc] = (undefined1)uVar105;
            auVar84._0_12_ = auVar82;
            auVar84[0xd] = (undefined1)(uVar105 >> 8);
            uVar105 = -(ushort)(uVar55 < uVar114) & 0x7fe5;
            auVar89[0xe] = (undefined1)uVar105;
            auVar89._0_14_ = auVar84;
            auVar89[0xf] = (undefined1)(uVar105 >> 8);
            lVar60 = ((long)((ulong)uVar122 << 0x30) >> 0x2f) + lVar68 + 0x2720;
            uVar105 = *(ushort *)((long)param_7 + lVar60 + 0xe);
            uVar106 = *(ushort *)((long)param_7 + lVar60 + 0x10);
            *(ulong *)((long)param_7 + lVar68 + 0x2728) =
                 CONCAT26(uVar114 + ((short)((uVar45 - uVar114) + auVar89._14_2_) >> 7),
                          CONCAT24(uVar112 + ((short)((uVar44 - uVar112) + auVar84._12_2_) >> 7),
                                   CONCAT22(uVar110 + ((short)((uVar43 - uVar110) + auVar82._10_2_)
                                                      >> 7),
                                            uVar108 + ((short)((uVar42 - uVar108) +
                                                              (short)((unkuint10)auVar82._0_10_ >>
                                                                     0x40)) >> 7))));
            *(ulong *)((long)param_7 + lVar68 + 0x2720) =
                 CONCAT26(uVar48 + ((short)((uVar41 - uVar48) + (short)(uVar67 >> 0x30)) >> 7),
                          CONCAT24(uVar113 + ((short)((uVar40 - uVar113) +
                                                     (short)((uint6)uVar29 >> 0x20)) >> 7),
                                   CONCAT22(uVar111 + ((short)((uVar39 - uVar111) +
                                                              (short)((uint)uVar5 >> 0x10)) >> 7),
                                            uVar109 + ((short)((uVar38 - uVar109) +
                                                              (uVar81 & 0x7fe5)) >> 7))));
            uVar66 = ((ulong)((uint)uVar106 - (uint)uVar105) * (uVar80 >> 0xf) - (ulong)uVar105) +
                     (uVar80 & 0x7fff);
            puVar74 = puVar76;
            if (uVar66 >> 0x1f == 0) {
              puVar74 = puVar76 + 1;
              uVar66 = (ulong)*puVar76 | uVar66 << 0x20;
            }
            sVar77 = (long)(short)uVar122 + 10;
            if (uVar63 < 8) {
              puVar52 = (undefined1 *)((long)__s - uVar59);
              *(undefined1 *)__s = *puVar52;
              *(undefined1 *)((long)__s + 1) = puVar52[1];
              *(undefined1 *)((long)__s + 2) = puVar52[2];
              *(undefined1 *)((long)__s + 3) = puVar52[3];
              if (4 < (long)sVar77) {
                *(undefined1 *)((long)__s + 4) = puVar52[4];
                *(undefined1 *)((long)__s + 5) = puVar52[5];
                *(undefined1 *)((long)__s + 6) = puVar52[6];
                *(undefined1 *)((long)__s + 7) = puVar52[7];
                if (8 < (long)sVar77) {
                  *(undefined1 *)(__s + 1) = puVar52[8];
                  *(undefined1 *)((long)__s + 9) = puVar52[9];
                  *(undefined1 *)((long)__s + 10) = puVar52[10];
                  *(undefined1 *)((long)__s + 0xb) = puVar52[0xb];
                }
              }
            }
            else {
              *__s = *(ulong *)((long)__s + -uVar59);
              *(undefined2 *)(__s + 1) = *(undefined2 *)((long)__s + -uVar59 + 8);
            }
          }
          else {
            uVar65 = *(undefined8 *)((long)param_7 + uVar66 * 0x22 + 0x2858);
            uVar81 = (ushort)uVar65;
            uVar109 = (ushort)((ulong)uVar65 >> 0x10);
            uVar111 = (ushort)((ulong)uVar65 >> 0x20);
            uVar113 = (ushort)((ulong)uVar65 >> 0x30);
            uVar65 = *(undefined8 *)((long)param_7 + uVar66 * 0x22 + 0x2850);
            uVar105 = (ushort)uVar65;
            uVar106 = (ushort)((ulong)uVar65 >> 0x10);
            uVar107 = (ushort)((ulong)uVar65 >> 0x20);
            uVar55 = (ushort)((ulong)uVar65 >> 0x30);
            lVar68 = uVar66 * 0x22 + 0x2840;
            uVar4 = (uint)uVar80 & 0x7fff;
            bVar47 = *(ushort *)((long)param_7 + uVar66 * 0x22 + 0x2848) <= uVar4;
            uVar64 = uVar67;
            if (!bVar47) {
              uVar64 = 1;
            }
            uVar48 = (ushort)uVar4;
            uVar78 = (ulong)bVar47;
            if (uVar105 <= uVar4) {
              uVar78 = uVar64;
            }
            if (*(ushort *)((long)param_7 + uVar66 * 0x22 + 0x2858) <= uVar4) {
              uVar78 = uVar78 + 1;
            }
            lVar60 = uVar78 * 8 + lVar68;
            uVar65 = *(undefined8 *)((long)param_7 + uVar66 * 0x22 + 0x2848);
            uVar122 = (ushort)uVar65;
            uVar117 = (ushort)((ulong)uVar65 >> 0x10);
            uVar119 = (ushort)((ulong)uVar65 >> 0x20);
            uVar56 = (ushort)((ulong)uVar65 >> 0x30);
            uVar65 = *(undefined8 *)((long)param_7 + uVar66 * 0x22 + 0x2840);
            uVar108 = (ushort)uVar65;
            uVar110 = (ushort)((ulong)uVar65 >> 0x10);
            uVar112 = (ushort)((ulong)uVar65 >> 0x20);
            uVar114 = (ushort)((ulong)uVar65 >> 0x30);
            auVar136._0_2_ = -(ushort)(uVar48 < uVar108);
            auVar136._2_2_ = -(ushort)(uVar48 < uVar110);
            auVar136._4_2_ = -(ushort)(uVar48 < uVar112);
            auVar136._6_2_ = -(ushort)(uVar48 < uVar114);
            auVar136._8_2_ = -(ushort)(uVar48 < uVar122);
            auVar136._10_2_ = -(ushort)(uVar48 < uVar117);
            auVar136._12_2_ = -(ushort)(uVar48 < uVar119);
            auVar136._14_2_ = -(ushort)(uVar48 < uVar56);
            auVar96._0_2_ = -(ushort)(uVar48 < uVar105);
            auVar96._2_2_ = -(ushort)(uVar48 < uVar106);
            auVar96._4_2_ = -(ushort)(uVar48 < uVar107);
            auVar96._6_2_ = -(ushort)(uVar48 < uVar55);
            auVar96._8_2_ = -(ushort)(uVar48 < uVar81);
            auVar96._10_2_ = -(ushort)(uVar48 < uVar109);
            auVar96._12_2_ = -(ushort)(uVar48 < uVar111);
            auVar96._14_2_ = -(ushort)(uVar48 < uVar113);
            uVar64 = (ulong)(*(ushort *)((long)param_7 + lVar60 + 2) <= uVar4) | uVar78 << 2;
            auVar10._2_2_ = uVar31;
            auVar10._0_2_ = uVar30;
            auVar10._4_2_ = uVar32;
            auVar10._6_2_ = uVar33;
            auVar10._8_2_ = uVar149;
            auVar10._10_2_ = uVar151;
            auVar10._12_2_ = uVar153;
            auVar10._14_2_ = uVar155;
            auVar87 = auVar145 ^ (auVar145 ^ auVar10) & auVar136;
            auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar96;
            if (*(ushort *)((long)param_7 + lVar60 + 4) <= uVar4) {
              uVar64 = uVar64 + 1;
            }
            if (*(ushort *)((long)param_7 + lVar60 + 6) <= uVar4) {
              uVar64 = uVar64 + 1;
            }
            puVar61 = (ushort *)((long)param_7 + uVar64 * 2 + lVar68);
            uVar48 = *puVar61;
            uVar121 = puVar61[1];
            *(ulong *)((long)param_7 + uVar66 * 0x22 + 0x2848) =
                 CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                          CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                   CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                            uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
            *(ulong *)((long)param_7 + uVar66 * 0x22 + 0x2840) =
                 CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                          CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                   CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                            uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))));
            *(ulong *)((long)param_7 + uVar66 * 0x22 + 0x2858) =
                 CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                          CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                                   CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                            uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
            *(ulong *)((long)param_7 + uVar66 * 0x22 + 0x2850) =
                 CONCAT26(uVar55 + ((short)(auVar128._6_2_ - uVar55) >> 7),
                          CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                   CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                            uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
            uVar66 = ((ulong)((uint)uVar121 - (uint)uVar48) * (uVar80 >> 0xf) - (ulong)uVar48) +
                     (uVar80 & 0x7fff);
            if (uVar66 >> 0x1f == 0) {
              puVar74 = puVar76 + 1;
              uVar66 = (ulong)*puVar76 | uVar66 << 0x20;
              puVar76 = puVar74;
              if (0xb < uVar64) goto LAB_00114764;
LAB_0011493c:
              sVar77 = uVar64 + 0xb;
              puVar74 = puVar76;
            }
            else {
              if (uVar64 < 0xc) goto LAB_0011493c;
LAB_00114764:
              uVar65 = param_7[0x51a];
              uVar81 = (ushort)uVar65;
              uVar109 = (ushort)((ulong)uVar65 >> 0x10);
              uVar111 = (ushort)((ulong)uVar65 >> 0x20);
              uVar113 = (ushort)((ulong)uVar65 >> 0x30);
              uVar65 = param_7[0x519];
              uVar105 = (ushort)uVar65;
              uVar106 = (ushort)((ulong)uVar65 >> 0x10);
              uVar107 = (ushort)((ulong)uVar65 >> 0x20);
              uVar55 = (ushort)((ulong)uVar65 >> 0x30);
              uVar65 = param_7[0x51c];
              uVar114 = (ushort)uVar65;
              uVar122 = (ushort)((ulong)uVar65 >> 0x10);
              uVar117 = (ushort)((ulong)uVar65 >> 0x20);
              uVar119 = (ushort)((ulong)uVar65 >> 0x30);
              uVar65 = param_7[0x51b];
              uVar48 = (ushort)uVar65;
              uVar108 = (ushort)((ulong)uVar65 >> 0x10);
              uVar110 = (ushort)((ulong)uVar65 >> 0x20);
              uVar112 = (ushort)((ulong)uVar65 >> 0x30);
              uVar57 = uVar57 & 0x7fff;
              uVar80 = uVar67;
              if (*(ushort *)(param_7 + 0x51a) > uVar57) {
                uVar80 = 1;
              }
              uVar78 = (ulong)(*(ushort *)(param_7 + 0x51a) <= uVar57);
              if (uVar48 <= uVar57) {
                uVar78 = uVar80;
              }
              uVar56 = (ushort)uVar57;
              auVar137._0_2_ = -(ushort)(uVar56 < uVar105);
              auVar137._2_2_ = -(ushort)(uVar56 < uVar106);
              auVar137._4_2_ = -(ushort)(uVar56 < uVar107);
              auVar137._6_2_ = -(ushort)(uVar56 < uVar55);
              auVar137._8_2_ = -(ushort)(uVar56 < uVar81);
              auVar137._10_2_ = -(ushort)(uVar56 < uVar109);
              auVar137._12_2_ = -(ushort)(uVar56 < uVar111);
              auVar137._14_2_ = -(ushort)(uVar56 < uVar113);
              auVar97._0_2_ = -(ushort)(uVar56 < uVar48);
              auVar97._2_2_ = -(ushort)(uVar56 < uVar108);
              auVar97._4_2_ = -(ushort)(uVar56 < uVar110);
              auVar97._6_2_ = -(ushort)(uVar56 < uVar112);
              auVar97._8_2_ = -(ushort)(uVar56 < uVar114);
              auVar97._10_2_ = -(ushort)(uVar56 < uVar122);
              auVar97._12_2_ = -(ushort)(uVar56 < uVar117);
              auVar97._14_2_ = -(ushort)(uVar56 < uVar119);
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
              if (*(ushort *)(param_7 + 0x51c) <= uVar57) {
                uVar78 = uVar78 + 1;
              }
              lVar68 = uVar78 * 8;
              uVar80 = (ulong)(*(ushort *)((long)param_7 + lVar68 + 0x28ca) <= uVar57) | uVar78 << 2
              ;
              if (*(ushort *)((long)param_7 + lVar68 + 0x28cc) <= uVar57) {
                uVar80 = uVar80 + 1;
              }
              if (*(ushort *)((long)param_7 + lVar68 + 0x28ce) <= uVar57) {
                uVar80 = uVar80 + 1;
              }
              puVar61 = (ushort *)((long)param_7 + uVar80 * 2 + 0x28c8);
              uVar56 = *puVar61;
              uVar69 = ((ulong)((uint)puVar61[1] - (uint)uVar56) * (uVar69 >> 0xf) - (ulong)uVar56)
                       + (uVar69 & 0x7fff);
              param_7[0x51a] =
                   CONCAT26(uVar113 + ((short)(auVar87._14_2_ - uVar113) >> 7),
                            CONCAT24(uVar111 + ((short)(auVar87._12_2_ - uVar111) >> 7),
                                     CONCAT22(uVar109 + ((short)(auVar87._10_2_ - uVar109) >> 7),
                                              uVar81 + ((short)(auVar87._8_2_ - uVar81) >> 7))));
              param_7[0x519] =
                   CONCAT26(uVar55 + ((short)(auVar87._6_2_ - uVar55) >> 7),
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
                                              uVar48 + ((short)(auVar128._0_2_ - uVar48) >> 7))));
              if (uVar69 >> 0x1f == 0) {
                puVar74 = puVar76 + 1;
                uVar69 = (ulong)*puVar76 | uVar69 << 0x20;
                puVar76 = puVar74;
                uVar78 = uVar69;
                if (0xe < uVar80) goto LAB_0011482c;
LAB_00114d30:
                if ((int)uVar80 != 0) goto LAB_00114d34;
LAB_00114924:
                uVar80 = 0;
                iVar50 = 0;
              }
              else {
                puVar74 = puVar76;
                uVar78 = uVar69;
                if (uVar80 < 0xf) goto LAB_00114d30;
LAB_0011482c:
                lVar68 = uVar80 - 0xf;
                uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2902);
                uVar109 = (ushort)uVar65;
                uVar111 = (ushort)((ulong)uVar65 >> 0x10);
                uVar113 = (ushort)((ulong)uVar65 >> 0x20);
                uVar48 = (ushort)((ulong)uVar65 >> 0x30);
                uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x28fa);
                uVar106 = (ushort)uVar65;
                uVar107 = (ushort)((ulong)uVar65 >> 0x10);
                uVar55 = (ushort)((ulong)uVar65 >> 0x20);
                uVar81 = (ushort)((ulong)uVar65 >> 0x30);
                uVar57 = (uint)uVar66 & 0x7fff;
                bVar47 = *(ushort *)((long)param_7 + lVar68 * 0x22 + 0x28f2) <= uVar57;
                uVar105 = (ushort)uVar57;
                if (!bVar47) {
                  uVar67 = 1;
                }
                uVar69 = (ulong)bVar47;
                if (uVar106 <= uVar57) {
                  uVar69 = uVar67;
                }
                puVar70 = (undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x28ea);
                uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x28f2);
                uVar122 = (ushort)uVar65;
                uVar117 = (ushort)((ulong)uVar65 >> 0x10);
                uVar119 = (ushort)((ulong)uVar65 >> 0x20);
                uVar56 = (ushort)((ulong)uVar65 >> 0x30);
                uVar65 = *puVar70;
                uVar108 = (ushort)uVar65;
                uVar110 = (ushort)((ulong)uVar65 >> 0x10);
                uVar112 = (ushort)((ulong)uVar65 >> 0x20);
                uVar114 = (ushort)((ulong)uVar65 >> 0x30);
                auVar138._0_2_ = -(ushort)(uVar105 < uVar108);
                auVar138._2_2_ = -(ushort)(uVar105 < uVar110);
                auVar138._4_2_ = -(ushort)(uVar105 < uVar112);
                auVar138._6_2_ = -(ushort)(uVar105 < uVar114);
                auVar138._8_2_ = -(ushort)(uVar105 < uVar122);
                auVar138._10_2_ = -(ushort)(uVar105 < uVar117);
                auVar138._12_2_ = -(ushort)(uVar105 < uVar119);
                auVar138._14_2_ = -(ushort)(uVar105 < uVar56);
                auVar98._0_2_ = -(ushort)(uVar105 < uVar106);
                auVar98._2_2_ = -(ushort)(uVar105 < uVar107);
                auVar98._4_2_ = -(ushort)(uVar105 < uVar55);
                auVar98._6_2_ = -(ushort)(uVar105 < uVar81);
                auVar98._8_2_ = -(ushort)(uVar105 < uVar109);
                auVar98._10_2_ = -(ushort)(uVar105 < uVar111);
                auVar98._12_2_ = -(ushort)(uVar105 < uVar113);
                auVar98._14_2_ = -(ushort)(uVar105 < uVar48);
                auVar12._2_2_ = uVar31;
                auVar12._0_2_ = uVar30;
                auVar12._4_2_ = uVar32;
                auVar12._6_2_ = uVar33;
                auVar12._8_2_ = uVar149;
                auVar12._10_2_ = uVar151;
                auVar12._12_2_ = uVar153;
                auVar12._14_2_ = uVar155;
                auVar87 = auVar145 ^ (auVar145 ^ auVar12) & auVar138;
                auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar98;
                if (*(ushort *)((long)param_7 + lVar68 * 0x22 + 0x2902) <= uVar57) {
                  uVar69 = uVar69 + 1;
                }
                uVar80 = (ulong)(*(ushort *)((long)puVar70 + uVar69 * 8 + 2) <= uVar57) |
                         uVar69 << 2;
                if (*(ushort *)((long)puVar70 + uVar69 * 8 + 4) <= uVar57) {
                  uVar80 = uVar80 + 1;
                }
                if (*(ushort *)((long)puVar70 + uVar69 * 8 + 6) <= uVar57) {
                  uVar80 = uVar80 + 1;
                }
                puVar61 = (ushort *)((long)puVar70 + uVar80 * 2);
                uVar105 = *puVar61;
                uVar121 = puVar61[1];
                *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x28f2) =
                     CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                              CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                       CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                                uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))))
                ;
                *puVar70 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                                    CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                             CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >>
                                                                7),
                                                      uVar108 + ((short)(auVar87._0_2_ - uVar108) >>
                                                                7))));
                *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x2902) =
                     CONCAT26(uVar48 + ((short)(auVar128._14_2_ - uVar48) >> 7),
                              CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                       CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                                uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7)))
                             );
                *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x28fa) =
                     CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                              CONCAT24(uVar55 + ((short)(auVar128._4_2_ - uVar55) >> 7),
                                       CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                                uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7)))
                             );
                uVar69 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar66 >> 0xf) - (ulong)uVar105)
                         + (uVar66 & 0x7fff);
                puVar76 = puVar74;
                if (uVar69 >> 0x1f == 0) {
                  puVar76 = puVar74 + 1;
                  uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
                }
                uVar80 = uVar80 + (lVar68 * 0x10 | 0xfU);
                uVar66 = uVar78;
                if ((int)uVar80 == 0) goto LAB_00114924;
LAB_00114d34:
                uVar4 = (int)uVar80 - 1;
                uVar57 = uVar4 >> 1;
                uVar80 = (ulong)uVar57;
                iVar50 = ((uVar4 & 1 | 2) << (ulong)(uVar57 & 0x1f)) + -1;
              }
              uVar57 = (uint)uVar66;
              uVar66 = uVar66 >> (uVar80 & 0x3f);
              puVar74 = puVar76;
              if (uVar66 >> 0x1f == 0) {
                puVar74 = puVar76 + 1;
                uVar66 = (ulong)*puVar76 | uVar66 << 0x20;
              }
              sVar77 = uVar64 + 0xb +
                       (ulong)((uVar57 & (-1 << (ulong)((uint)uVar80 & 0x1f) ^ 0xffffffffU)) +
                              iVar50) * 4;
            }
            puVar73 = (ulong *)((long)__s - uVar59);
            if (uVar63 < 8) {
              if (uVar63 < 4) {
                if (uVar63 == 1) {
                  memset(__s,(uint)(byte)*puVar73,sVar77);
                }
                else {
                  *(byte *)__s = (byte)*puVar73;
                  *(undefined1 *)((long)__s + 1) = *(undefined1 *)((long)puVar73 + 1);
                  *(undefined1 *)((long)__s + 2) = *(undefined1 *)((long)puVar73 + 2);
                  *(undefined1 *)((long)__s + 3) = *(undefined1 *)((long)puVar73 + 3);
                  *(undefined1 *)((long)__s + 4) = *(undefined1 *)((long)puVar73 + 4);
                  *(undefined1 *)((long)__s + 5) = *(undefined1 *)((long)puVar73 + 5);
                  *(undefined1 *)((long)__s + 6) = *(undefined1 *)((long)puVar73 + 6);
                  *(undefined1 *)((long)__s + 7) = *(undefined1 *)((long)puVar73 + 7);
                  *(char *)(__s + 1) = (char)puVar73[1];
                  if (9 < sVar77) {
                    uVar57 = (int)sVar77 - 1;
                    uVar80 = (ulong)uVar57 & 3;
                    if (sVar77 - 10 < 3) {
                      lVar68 = 9;
                    }
                    else {
                      lVar68 = 9;
                      do {
                        puVar52 = (undefined1 *)((long)puVar73 + lVar68);
                        puVar3 = (undefined1 *)((long)__s + lVar68);
                        lVar68 = lVar68 + 4;
                        *puVar3 = *puVar52;
                        puVar3[1] = puVar52[1];
                        puVar3[2] = puVar52[2];
                        puVar3[3] = puVar52[3];
                      } while (sVar77 - uVar80 != lVar68);
                    }
                    if ((uVar57 & 3) != 0) {
                      lVar60 = -uVar80;
                      puVar52 = (undefined1 *)((long)__s + lVar68);
                      do {
                        lVar60 = lVar60 + 1;
                        *puVar52 = puVar52[-uVar59];
                        puVar52 = puVar52 + 1;
                      } while (lVar60 != 0);
                    }
                  }
                }
              }
              else {
                *(int *)__s = (int)*puVar73;
                *(undefined4 *)((long)__s + 4) = *(undefined4 *)((long)puVar73 + 4);
                *(int *)(__s + 1) = (int)puVar73[1];
                if ((0xc < sVar77) &&
                   (*(undefined4 *)((long)__s + 0xc) = *(undefined4 *)((long)puVar73 + 0xc),
                   0x10 < sVar77)) {
                  lVar68 = 0x10;
                  iVar50 = 0x14;
                  do {
                    *(undefined4 *)((long)__s + lVar68) = *(undefined4 *)((long)puVar73 + lVar68);
                    lVar68 = (long)iVar50;
                    iVar50 = iVar50 + 4;
                  } while (lVar68 < (long)sVar77);
                }
              }
            }
            else {
              *__s = *puVar73;
              __s[1] = puVar73[1];
              lVar68 = sVar77 - 0x10;
              if (0 < lVar68) {
                uVar57 = ((uint)(sVar77 - 0x11 >> 3) & 0x1fffffff) + 1;
                puVar73 = __s + 2;
                if ((uVar57 & 7) != 0) {
                  lVar60 = -((ulong)uVar57 & 7);
                  puVar62 = puVar73;
                  do {
                    lVar68 = lVar68 + -8;
                    puVar73 = puVar62 + 1;
                    *puVar62 = *(ulong *)((long)puVar62 + -uVar59);
                    lVar60 = lVar60 + 1;
                    puVar62 = puVar73;
                  } while (lVar60 != 0);
                }
                if (0x37 < sVar77 - 0x11) {
                  puVar73 = puVar73 + 7;
                  do {
                    puVar62 = (ulong *)((long)puVar73 + -uVar59);
                    puVar73[-7] = puVar62[-7];
                    puVar73[-6] = puVar62[-6];
                    puVar73[-5] = puVar62[-5];
                    puVar73[-4] = puVar62[-4];
                    puVar73[-3] = puVar62[-3];
                    puVar73[-2] = puVar62[-2];
                    puVar73[-1] = puVar62[-1];
                    lVar68 = lVar68 + -0x40;
                    *puVar73 = *puVar62;
                    puVar73 = puVar73 + 8;
                  } while (0 < lVar68);
                }
              }
            }
          }
          bVar47 = lVar58 < 7;
          lVar58 = 0xb;
          if (bVar47) {
            lVar58 = 8;
          }
          puVar73 = (ulong *)((long)__s + sVar77);
          param_9 = sVar77 + param_9;
          puVar76 = puVar74;
          uVar80 = uVar69;
          uVar69 = uVar66;
          goto joined_r0x001152e0;
        }
        if (uVar64 == 2) {
          uVar55 = uVar105 & 0x7fff;
          uVar59 = CONCAT26(uVar105,CONCAT24(uVar105,CONCAT22(uVar105,uVar105))) &
                   0x7fff7fff7fff7fff;
          uVar65 = *(undefined8 *)((long)param_7 + 0x2b04);
          uVar108 = (ushort)uVar65;
          uVar110 = (ushort)((ulong)uVar65 >> 0x10);
          uVar112 = (ushort)((ulong)uVar65 >> 0x20);
          uVar114 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *(undefined8 *)((long)param_7 + 0x2afc);
          uVar109 = (ushort)uVar65;
          uVar111 = (ushort)((ulong)uVar65 >> 0x10);
          uVar113 = (ushort)((ulong)uVar65 >> 0x20);
          uVar48 = (ushort)((ulong)uVar65 >> 0x30);
          uVar81 = -(ushort)((ushort)uVar59 < uVar109);
          uVar105 = -(ushort)((ushort)(uVar59 >> 0x10) < uVar111);
          uVar106 = -(ushort)((ushort)(uVar59 >> 0x20) < uVar113);
          uVar107 = -(ushort)((ushort)(uVar59 >> 0x30) < uVar48);
          uVar122 = uVar81 + uVar105 + uVar106 + uVar107 + -(ushort)(uVar55 < uVar108) +
                    -(ushort)(uVar55 < uVar110) + -(ushort)(uVar55 < uVar112) +
                    -(ushort)(uVar55 < uVar114);
          uVar105 = uVar105 & 0x7fe5;
          uVar5 = CONCAT13((char)(uVar105 >> 8),CONCAT12((char)uVar105,uVar81));
          uVar106 = uVar106 & 0x7fe5;
          uVar29 = CONCAT15((char)(uVar106 >> 8),CONCAT14((char)uVar106,uVar5));
          uVar107 = uVar107 & 0x7fe5;
          uVar59 = CONCAT17((char)(uVar107 >> 8),CONCAT16((char)uVar107,uVar29)) &
                   0xffffffffffff7fe5;
          uVar105 = -(ushort)(uVar55 < uVar108) & 0x7fe5;
          auVar83._0_10_ = CONCAT19((char)(uVar105 >> 8),CONCAT18((char)uVar105,uVar59));
          uVar105 = -(ushort)(uVar55 < uVar110) & 0x7fe5;
          auVar83[10] = (undefined1)uVar105;
          auVar83[0xb] = (undefined1)(uVar105 >> 8);
          uVar105 = -(ushort)(uVar55 < uVar112) & 0x7fe5;
          auVar85[0xc] = (undefined1)uVar105;
          auVar85._0_12_ = auVar83;
          auVar85[0xd] = (undefined1)(uVar105 >> 8);
          uVar105 = -(ushort)(uVar55 < uVar114) & 0x7fe5;
          auVar90[0xe] = (undefined1)uVar105;
          auVar90._0_14_ = auVar85;
          auVar90[0xf] = (undefined1)(uVar105 >> 8);
          lVar68 = (long)((ulong)uVar122 << 0x30) >> 0x2f;
          uVar105 = *(ushort *)((long)param_7 + lVar68 + 0x2b0a);
          uVar80 = ((ulong)((uint)*(ushort *)((long)param_7 + lVar68 + 0x2b0c) - (uint)uVar105) *
                    (uVar80 >> 0xf) - (ulong)uVar105) + (uVar80 & 0x7fff);
          *(ulong *)((long)param_7 + 0x2b04) =
               CONCAT26(uVar114 + ((short)((uVar45 - uVar114) + auVar90._14_2_) >> 7),
                        CONCAT24(uVar112 + ((short)((uVar44 - uVar112) + auVar85._12_2_) >> 7),
                                 CONCAT22(uVar110 + ((short)((uVar43 - uVar110) + auVar83._10_2_) >>
                                                    7),
                                          uVar108 + ((short)((uVar42 - uVar108) +
                                                            (short)((unkuint10)auVar83._0_10_ >>
                                                                   0x40)) >> 7))));
          *(undefined8 *)((long)param_7 + 0x2afc) =
               CONCAT26(uVar48 + ((short)((uVar41 - uVar48) + (short)(uVar59 >> 0x30)) >> 7),
                        CONCAT24(uVar113 + ((short)((uVar40 - uVar113) +
                                                   (short)((uint6)uVar29 >> 0x20)) >> 7),
                                 CONCAT22(uVar111 + ((short)((uVar39 - uVar111) +
                                                            (short)((uint)uVar5 >> 0x10)) >> 7),
                                          uVar109 + ((short)((uVar38 - uVar109) + (uVar81 & 0x7fe5))
                                                    >> 7))));
          puVar74 = puVar76;
          if (uVar80 >> 0x1f == 0) {
            puVar74 = puVar76 + 1;
            uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
          }
          uVar65 = *(undefined8 *)((long)param_7 + 0x2bf2);
          uVar81 = (ushort)uVar65;
          uVar109 = (ushort)((ulong)uVar65 >> 0x10);
          uVar111 = (ushort)((ulong)uVar65 >> 0x20);
          uVar113 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *(undefined8 *)((long)param_7 + 0x2bea);
          uVar105 = (ushort)uVar65;
          uVar106 = (ushort)((ulong)uVar65 >> 0x10);
          uVar107 = (ushort)((ulong)uVar65 >> 0x20);
          uVar55 = (ushort)((ulong)uVar65 >> 0x30);
          uVar57 = uVar57 & 0x7fff;
          bVar47 = *(ushort *)((long)param_7 + 0x2be2) <= uVar57;
          uVar59 = uVar67;
          if (!bVar47) {
            uVar59 = 1;
          }
          uVar65 = *(undefined8 *)((long)param_7 + 0x2be2);
          uVar117 = (ushort)uVar65;
          uVar119 = (ushort)((ulong)uVar65 >> 0x10);
          uVar56 = (ushort)((ulong)uVar65 >> 0x20);
          uVar121 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *(undefined8 *)((long)param_7 + 0x2bda);
          uVar108 = (ushort)uVar65;
          uVar110 = (ushort)((ulong)uVar65 >> 0x10);
          uVar112 = (ushort)((ulong)uVar65 >> 0x20);
          uVar114 = (ushort)((ulong)uVar65 >> 0x30);
          uVar48 = (ushort)uVar57;
          auVar131._0_2_ = -(ushort)(uVar48 < uVar108);
          auVar131._2_2_ = -(ushort)(uVar48 < uVar110);
          auVar131._4_2_ = -(ushort)(uVar48 < uVar112);
          auVar131._6_2_ = -(ushort)(uVar48 < uVar114);
          auVar131._8_2_ = -(ushort)(uVar48 < uVar117);
          auVar131._10_2_ = -(ushort)(uVar48 < uVar119);
          auVar131._12_2_ = -(ushort)(uVar48 < uVar56);
          auVar131._14_2_ = -(ushort)(uVar48 < uVar121);
          auVar91._0_2_ = -(ushort)(uVar48 < uVar105);
          auVar91._2_2_ = -(ushort)(uVar48 < uVar106);
          auVar91._4_2_ = -(ushort)(uVar48 < uVar107);
          auVar91._6_2_ = -(ushort)(uVar48 < uVar55);
          auVar91._8_2_ = -(ushort)(uVar48 < uVar81);
          auVar91._10_2_ = -(ushort)(uVar48 < uVar109);
          auVar91._12_2_ = -(ushort)(uVar48 < uVar111);
          auVar91._14_2_ = -(ushort)(uVar48 < uVar113);
          uVar64 = (ulong)bVar47;
          if (uVar105 <= uVar57) {
            uVar64 = uVar59;
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
          if (*(ushort *)((long)param_7 + 0x2bf2) <= uVar57) {
            uVar64 = uVar64 + 1;
          }
          uVar59 = (ulong)(*(ushort *)((long)param_7 + uVar64 * 8 + 0x2bdc) <= uVar57) | uVar64 << 2
          ;
          if (*(ushort *)((long)param_7 + uVar64 * 8 + 0x2bde) <= uVar57) {
            uVar59 = uVar59 + 1;
          }
          if (*(ushort *)(param_7 + uVar64 + 0x57c) <= uVar57) {
            uVar59 = uVar59 + 1;
          }
          puVar61 = (ushort *)((long)param_7 + uVar59 * 2 + 0x2bda);
          uVar48 = *puVar61;
          uVar69 = ((ulong)((uint)puVar61[1] - (uint)uVar48) * (uVar69 >> 0xf) - (ulong)uVar48) +
                   (uVar69 & 0x7fff);
          *(ulong *)((long)param_7 + 0x2be2) =
               CONCAT26(uVar121 + ((short)(auVar87._14_2_ - uVar121) >> 7),
                        CONCAT24(uVar56 + ((short)(auVar87._12_2_ - uVar56) >> 7),
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
               CONCAT26(uVar55 + ((short)(auVar128._6_2_ - uVar55) >> 7),
                        CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                 CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                          uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
          if (uVar69 >> 0x1f == 0) {
            puVar76 = puVar74 + 1;
            uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
            uVar64 = uVar69;
            puVar74 = puVar76;
            if (0xe < uVar59) goto LAB_00114250;
LAB_00114620:
            if (uVar59 != 0) goto LAB_00114624;
LAB_0011434c:
            uVar64 = 1;
            uVar59 = uVar69;
          }
          else {
            uVar64 = uVar69;
            puVar76 = puVar74;
            if (uVar59 < 0xf) goto LAB_00114620;
LAB_00114250:
            lVar68 = uVar59 - 0xf;
            uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2c14);
            uVar109 = (ushort)uVar65;
            uVar111 = (ushort)((ulong)uVar65 >> 0x10);
            uVar113 = (ushort)((ulong)uVar65 >> 0x20);
            uVar48 = (ushort)((ulong)uVar65 >> 0x30);
            uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2c0c);
            uVar106 = (ushort)uVar65;
            uVar107 = (ushort)((ulong)uVar65 >> 0x10);
            uVar55 = (ushort)((ulong)uVar65 >> 0x20);
            uVar81 = (ushort)((ulong)uVar65 >> 0x30);
            uVar57 = (uint)uVar80 & 0x7fff;
            bVar47 = *(ushort *)((long)param_7 + lVar68 * 0x22 + 0x2c04) <= uVar57;
            uVar105 = (ushort)uVar57;
            uVar69 = uVar67;
            if (!bVar47) {
              uVar69 = 1;
            }
            uVar66 = (ulong)bVar47;
            if (uVar106 <= uVar57) {
              uVar66 = uVar69;
            }
            puVar70 = (undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2bfc);
            uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2c04);
            uVar117 = (ushort)uVar65;
            uVar119 = (ushort)((ulong)uVar65 >> 0x10);
            uVar56 = (ushort)((ulong)uVar65 >> 0x20);
            uVar121 = (ushort)((ulong)uVar65 >> 0x30);
            uVar65 = *puVar70;
            uVar108 = (ushort)uVar65;
            uVar110 = (ushort)((ulong)uVar65 >> 0x10);
            uVar112 = (ushort)((ulong)uVar65 >> 0x20);
            uVar114 = (ushort)((ulong)uVar65 >> 0x30);
            auVar132._0_2_ = -(ushort)(uVar105 < uVar108);
            auVar132._2_2_ = -(ushort)(uVar105 < uVar110);
            auVar132._4_2_ = -(ushort)(uVar105 < uVar112);
            auVar132._6_2_ = -(ushort)(uVar105 < uVar114);
            auVar132._8_2_ = -(ushort)(uVar105 < uVar117);
            auVar132._10_2_ = -(ushort)(uVar105 < uVar119);
            auVar132._12_2_ = -(ushort)(uVar105 < uVar56);
            auVar132._14_2_ = -(ushort)(uVar105 < uVar121);
            auVar92._0_2_ = -(ushort)(uVar105 < uVar106);
            auVar92._2_2_ = -(ushort)(uVar105 < uVar107);
            auVar92._4_2_ = -(ushort)(uVar105 < uVar55);
            auVar92._6_2_ = -(ushort)(uVar105 < uVar81);
            auVar92._8_2_ = -(ushort)(uVar105 < uVar109);
            auVar92._10_2_ = -(ushort)(uVar105 < uVar111);
            auVar92._12_2_ = -(ushort)(uVar105 < uVar113);
            auVar92._14_2_ = -(ushort)(uVar105 < uVar48);
            auVar22._2_2_ = uVar31;
            auVar22._0_2_ = uVar30;
            auVar22._4_2_ = uVar32;
            auVar22._6_2_ = uVar33;
            auVar22._8_2_ = uVar149;
            auVar22._10_2_ = uVar151;
            auVar22._12_2_ = uVar153;
            auVar22._14_2_ = uVar155;
            auVar87 = auVar145 ^ (auVar145 ^ auVar22) & auVar132;
            auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar92;
            if (*(ushort *)((long)param_7 + lVar68 * 0x22 + 0x2c14) <= uVar57) {
              uVar66 = uVar66 + 1;
            }
            uVar59 = (ulong)(*(ushort *)((long)puVar70 + uVar66 * 8 + 2) <= uVar57) | uVar66 << 2;
            if (*(ushort *)((long)puVar70 + uVar66 * 8 + 4) <= uVar57) {
              uVar59 = uVar59 + 1;
            }
            if (*(ushort *)((long)puVar70 + uVar66 * 8 + 6) <= uVar57) {
              uVar59 = uVar59 + 1;
            }
            puVar61 = (ushort *)((long)puVar70 + uVar59 * 2);
            uVar105 = *puVar61;
            uVar146 = puVar61[1];
            *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x2c04) =
                 CONCAT26(uVar121 + ((short)(auVar87._14_2_ - uVar121) >> 7),
                          CONCAT24(uVar56 + ((short)(auVar87._12_2_ - uVar56) >> 7),
                                   CONCAT22(uVar119 + ((short)(auVar87._10_2_ - uVar119) >> 7),
                                            uVar117 + ((short)(auVar87._8_2_ - uVar117) >> 7))));
            *puVar70 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                                CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                         CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                  uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))
                                        ));
            *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x2c14) =
                 CONCAT26(uVar48 + ((short)(auVar128._14_2_ - uVar48) >> 7),
                          CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                   CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                            uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
            *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x2c0c) =
                 CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                          CONCAT24(uVar55 + ((short)(auVar128._4_2_ - uVar55) >> 7),
                                   CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                            uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
            uVar69 = ((ulong)((uint)uVar146 - (uint)uVar105) * (uVar80 >> 0xf) - (ulong)uVar105) +
                     (uVar80 & 0x7fff);
            puVar74 = puVar76;
            if (uVar69 >> 0x1f == 0) {
              puVar74 = puVar76 + 1;
              uVar69 = (ulong)*puVar76 | uVar69 << 0x20;
            }
            uVar59 = uVar59 + (lVar68 * 0x10 | 0xfU);
            uVar80 = uVar64;
            if (uVar59 == 0) goto LAB_0011434c;
LAB_00114624:
            puVar61 = (ushort *)((long)param_7 + (uVar59 - 1) * 2 + 0x2c1e);
            uVar105 = *puVar61;
            uVar64 = (ulong)uVar105;
            lVar68 = (uVar80 >> 0xe) * uVar64;
            puVar76 = puVar74;
            if ((uVar80 & 0x3fff) < uVar64) {
              uVar80 = lVar68 + (uVar80 & 0x3fff);
              *puVar61 = uVar105 + (short)(0x4000 - uVar105 >> 6);
              if (uVar80 >> 0x1f != 0) {
                uVar64 = 0;
                goto joined_r0x00114de0;
              }
              puVar76 = puVar74 + 1;
              uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
              uVar64 = 0;
              if (uVar59 == 1) goto LAB_00114de4;
              uVar64 = 0;
LAB_00115014:
              puVar61 = (ushort *)((long)param_7 + (uVar59 - 1) * 2 + uVar64 * 0x3e + 0x2c5c);
              uVar105 = *puVar61;
              uVar66 = (ulong)uVar105;
              lVar68 = (uVar69 >> 0xe) * uVar66;
              puVar74 = puVar76;
              if ((uVar69 & 0x3fff) < uVar66) {
                uVar69 = lVar68 + (uVar69 & 0x3fff);
                *puVar61 = uVar105 + (short)(0x4000 - uVar105 >> 6);
                if (uVar69 >> 0x1f != 0) {
                  uVar64 = uVar64 << 1 | 4;
                  goto joined_r0x0011519c;
                }
                puVar74 = puVar76 + 1;
                uVar69 = (ulong)*puVar76 | uVar69 << 0x20;
                uVar64 = uVar64 << 1 | 4;
                if (uVar59 != 2) goto LAB_001152fc;
              }
              else {
                uVar69 = (uVar69 - uVar66) - lVar68;
                *puVar61 = uVar105 - (uVar105 >> 6);
                if (uVar69 >> 0x1f == 0) {
                  puVar74 = puVar76 + 1;
                  uVar69 = (ulong)*puVar76 | uVar69 << 0x20;
                }
                uVar64 = uVar64 << 1 | 5;
joined_r0x0011519c:
                if (uVar59 != 2) {
LAB_001152fc:
                  uVar57 = (int)uVar59 - 2;
                  uVar63 = (uint)uVar80;
                  uVar80 = uVar80 >> ((ulong)uVar57 & 0x3f);
                  puVar76 = puVar74;
                  if (uVar80 >> 0x1f == 0) {
                    puVar76 = puVar74 + 1;
                    uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
                  }
                  uVar64 = uVar64 << (uVar59 - 2 & 0x3f) |
                           (ulong)(uVar63 & (-1 << (ulong)(uVar57 & 0x1f) ^ 0xffffffffU));
                  goto LAB_00115330;
                }
              }
              uVar59 = uVar69;
            }
            else {
              uVar80 = (uVar80 - uVar64) - lVar68;
              *puVar61 = uVar105 - (uVar105 >> 6);
              if (uVar80 >> 0x1f == 0) {
                puVar76 = puVar74 + 1;
                uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
              }
              uVar64 = 1;
joined_r0x00114de0:
              if (uVar59 != 1) goto LAB_00115014;
LAB_00114de4:
              uVar64 = uVar64 | 2;
LAB_00115330:
              uVar59 = uVar80;
              uVar80 = uVar69;
              puVar74 = puVar76;
            }
          }
          uVar69 = (ulong)(uVar64 - 1 == 0);
          puVar61 = (ushort *)((long)param_7 + uVar69 * 0x46 + 0x2950);
          uVar105 = *puVar61;
          uVar66 = (ulong)uVar105;
          lVar68 = (uVar80 >> 0xe) * uVar66;
          puVar75 = puVar74;
          if ((uVar80 & 0x3fff) < uVar66) {
            uVar80 = lVar68 + (uVar80 & 0x3fff);
            *puVar61 = uVar105 + (short)(0x4000 - uVar105 >> 6);
            if (uVar80 >> 0x1f == 0) {
              uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
              uVar66 = 0;
              puVar75 = puVar74 + 1;
            }
            else {
              uVar66 = 0;
            }
          }
          else {
            uVar80 = (uVar80 - uVar66) - lVar68;
            *puVar61 = uVar105 - (uVar105 >> 6);
            if (uVar80 >> 0x1f == 0) {
              puVar75 = puVar74 + 1;
              uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
            }
            uVar66 = 1;
          }
          lVar68 = uVar66 * 0x22 + uVar69 * 0x46;
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x2924);
          uVar81 = (ushort)uVar65;
          uVar109 = (ushort)((ulong)uVar65 >> 0x10);
          uVar111 = (ushort)((ulong)uVar65 >> 0x20);
          uVar113 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x291c);
          uVar105 = (ushort)uVar65;
          uVar106 = (ushort)((ulong)uVar65 >> 0x10);
          uVar107 = (ushort)((ulong)uVar65 >> 0x20);
          uVar55 = (ushort)((ulong)uVar65 >> 0x30);
          uVar57 = (uint)uVar59 & 0x7fff;
          bVar47 = *(ushort *)((long)param_7 + lVar68 + 0x2914) <= uVar57;
          if (!bVar47) {
            uVar67 = 1;
          }
          uVar48 = (ushort)uVar57;
          sVar77 = (long)(short)uVar122 + 0xc;
          uVar69 = (ulong)bVar47;
          if (uVar105 <= uVar57) {
            uVar69 = uVar67;
          }
          puVar70 = (undefined8 *)((long)param_7 + lVar68 + 0x290c);
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x2914);
          uVar122 = (ushort)uVar65;
          uVar117 = (ushort)((ulong)uVar65 >> 0x10);
          uVar119 = (ushort)((ulong)uVar65 >> 0x20);
          uVar56 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *puVar70;
          uVar108 = (ushort)uVar65;
          uVar110 = (ushort)((ulong)uVar65 >> 0x10);
          uVar112 = (ushort)((ulong)uVar65 >> 0x20);
          uVar114 = (ushort)((ulong)uVar65 >> 0x30);
          auVar142._0_2_ = -(ushort)(uVar48 < uVar108);
          auVar142._2_2_ = -(ushort)(uVar48 < uVar110);
          auVar142._4_2_ = -(ushort)(uVar48 < uVar112);
          auVar142._6_2_ = -(ushort)(uVar48 < uVar114);
          auVar142._8_2_ = -(ushort)(uVar48 < uVar122);
          auVar142._10_2_ = -(ushort)(uVar48 < uVar117);
          auVar142._12_2_ = -(ushort)(uVar48 < uVar119);
          auVar142._14_2_ = -(ushort)(uVar48 < uVar56);
          auVar102._0_2_ = -(ushort)(uVar48 < uVar105);
          auVar102._2_2_ = -(ushort)(uVar48 < uVar106);
          auVar102._4_2_ = -(ushort)(uVar48 < uVar107);
          auVar102._6_2_ = -(ushort)(uVar48 < uVar55);
          auVar102._8_2_ = -(ushort)(uVar48 < uVar81);
          auVar102._10_2_ = -(ushort)(uVar48 < uVar109);
          auVar102._12_2_ = -(ushort)(uVar48 < uVar111);
          auVar102._14_2_ = -(ushort)(uVar48 < uVar113);
          if (*(ushort *)((long)param_7 + lVar68 + 0x2924) <= uVar57) {
            uVar69 = uVar69 + 1;
          }
          auVar23._2_2_ = uVar31;
          auVar23._0_2_ = uVar30;
          auVar23._4_2_ = uVar32;
          auVar23._6_2_ = uVar33;
          auVar23._8_2_ = uVar149;
          auVar23._10_2_ = uVar151;
          auVar23._12_2_ = uVar153;
          auVar23._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar23) & auVar142;
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar102;
          uVar67 = (ulong)(*(ushort *)((long)puVar70 + uVar69 * 8 + 2) <= uVar57) | uVar69 << 2;
          if (*(ushort *)((long)puVar70 + uVar69 * 8 + 4) <= uVar57) {
            uVar67 = uVar67 + 1;
          }
          if (*(ushort *)((long)puVar70 + uVar69 * 8 + 6) <= uVar57) {
            uVar67 = uVar67 + 1;
          }
          puVar61 = (ushort *)((long)puVar70 + uVar67 * 2);
          uVar48 = *puVar61;
          uVar121 = puVar61[1];
          *(ulong *)((long)param_7 + lVar68 + 0x2914) =
               CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                        CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                 CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                          uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
          *puVar70 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
          ;
          *(ulong *)((long)param_7 + lVar68 + 0x2924) =
               CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                        CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                                 CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                          uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
          *(ulong *)((long)param_7 + lVar68 + 0x291c) =
               CONCAT26(uVar55 + ((short)(auVar128._6_2_ - uVar55) >> 7),
                        CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                 CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                          uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
          uVar69 = ((ulong)((uint)uVar121 - (uint)uVar48) * (uVar59 >> 0xf) - (ulong)uVar48) +
                   (uVar59 & 0x7fff);
          puVar76 = puVar75;
          if (uVar69 >> 0x1f == 0) {
            puVar76 = puVar75 + 1;
            uVar69 = (ulong)*puVar75 | uVar69 << 0x20;
          }
          uVar59 = uVar66 | (uVar64 - 1) * 0x20 | uVar67 << 1;
          lVar68 = uVar59 + 1;
          uVar59 = ~uVar59;
          if (lVar68 < 8) {
            puVar52 = (undefined1 *)((long)__s + uVar59);
            *(undefined1 *)__s = *puVar52;
            *(undefined1 *)((long)__s + 1) = puVar52[1];
            *(undefined1 *)((long)__s + 2) = puVar52[2];
            *(undefined1 *)((long)__s + 3) = puVar52[3];
            if (4 < (long)sVar77) {
              *(undefined1 *)((long)__s + 4) = puVar52[4];
              *(undefined1 *)((long)__s + 5) = puVar52[5];
              *(undefined1 *)((long)__s + 6) = puVar52[6];
              *(undefined1 *)((long)__s + 7) = puVar52[7];
              if (8 < (long)sVar77) {
                *(undefined1 *)(__s + 1) = puVar52[8];
                *(undefined1 *)((long)__s + 9) = puVar52[9];
                *(undefined1 *)((long)__s + 10) = puVar52[10];
                *(undefined1 *)((long)__s + 0xb) = puVar52[0xb];
              }
            }
          }
          else {
            *__s = *(ulong *)((long)__s + uVar59);
            *(undefined4 *)(__s + 1) = *(undefined4 *)((long)__s + uVar59 + 8);
          }
        }
        else if (uVar64 == 1) {
          puVar61 = (ushort *)((long)param_7 + (param_9 & 3 | lVar58 << 2) * 2 + 0x2998);
          uVar105 = *puVar61;
          uVar59 = (ulong)uVar105;
          lVar68 = (uVar80 >> 0xe) * uVar59;
          puVar74 = puVar76;
          if ((uVar80 & 0x3fff) < uVar59) {
            uVar80 = lVar68 + (uVar80 & 0x3fff);
            *puVar61 = uVar105 + (short)(0x4000 - uVar105 >> 4);
            if (uVar80 >> 0x1f == 0) {
              uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
              lVar68 = 0;
              puVar74 = puVar76 + 1;
            }
            else {
              lVar68 = 0;
            }
          }
          else {
            uVar80 = (uVar80 - uVar59) - lVar68;
            *puVar61 = uVar105 - (uVar105 >> 4);
            if (uVar80 >> 0x1f == 0) {
              puVar74 = puVar76 + 1;
              uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
            }
            lVar68 = 1;
          }
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x82 + 0x2a10);
          uVar81 = (ushort)uVar65;
          uVar109 = (ushort)((ulong)uVar65 >> 0x10);
          uVar111 = (ushort)((ulong)uVar65 >> 0x20);
          uVar113 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x82 + 0x2a08);
          uVar105 = (ushort)uVar65;
          uVar106 = (ushort)((ulong)uVar65 >> 0x10);
          uVar107 = (ushort)((ulong)uVar65 >> 0x20);
          uVar55 = (ushort)((ulong)uVar65 >> 0x30);
          uVar57 = uVar57 & 0x7fff;
          bVar47 = *(ushort *)((long)param_7 + lVar68 * 0x82 + 0x2a00) <= uVar57;
          uVar59 = uVar67;
          if (!bVar47) {
            uVar59 = 1;
          }
          uVar48 = (ushort)uVar57;
          uVar64 = (ulong)bVar47;
          if (uVar105 <= uVar57) {
            uVar64 = uVar59;
          }
          puVar70 = (undefined8 *)((long)param_7 + lVar68 * 0x82 + 0x29f8);
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x82 + 0x2a00);
          uVar122 = (ushort)uVar65;
          uVar117 = (ushort)((ulong)uVar65 >> 0x10);
          uVar119 = (ushort)((ulong)uVar65 >> 0x20);
          uVar56 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *puVar70;
          uVar108 = (ushort)uVar65;
          uVar110 = (ushort)((ulong)uVar65 >> 0x10);
          uVar112 = (ushort)((ulong)uVar65 >> 0x20);
          uVar114 = (ushort)((ulong)uVar65 >> 0x30);
          auVar141._0_2_ = -(ushort)(uVar48 < uVar108);
          auVar141._2_2_ = -(ushort)(uVar48 < uVar110);
          auVar141._4_2_ = -(ushort)(uVar48 < uVar112);
          auVar141._6_2_ = -(ushort)(uVar48 < uVar114);
          auVar141._8_2_ = -(ushort)(uVar48 < uVar122);
          auVar141._10_2_ = -(ushort)(uVar48 < uVar117);
          auVar141._12_2_ = -(ushort)(uVar48 < uVar119);
          auVar141._14_2_ = -(ushort)(uVar48 < uVar56);
          auVar13._2_2_ = uVar31;
          auVar13._0_2_ = uVar30;
          auVar13._4_2_ = uVar32;
          auVar13._6_2_ = uVar33;
          auVar13._8_2_ = uVar149;
          auVar13._10_2_ = uVar151;
          auVar13._12_2_ = uVar153;
          auVar13._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar13) & auVar141;
          auVar101._0_2_ = -(ushort)(uVar48 < uVar105);
          auVar101._2_2_ = -(ushort)(uVar48 < uVar106);
          auVar101._4_2_ = -(ushort)(uVar48 < uVar107);
          auVar101._6_2_ = -(ushort)(uVar48 < uVar55);
          auVar101._8_2_ = -(ushort)(uVar48 < uVar81);
          auVar101._10_2_ = -(ushort)(uVar48 < uVar109);
          auVar101._12_2_ = -(ushort)(uVar48 < uVar111);
          auVar101._14_2_ = -(ushort)(uVar48 < uVar113);
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar101;
          if (*(ushort *)((long)param_7 + lVar68 * 0x82 + 0x2a10) <= uVar57) {
            uVar64 = uVar64 + 1;
          }
          uVar59 = (ulong)(*(ushort *)((long)puVar70 + uVar64 * 8 + 2) <= uVar57) | uVar64 << 2;
          if (*(ushort *)((long)puVar70 + uVar64 * 8 + 4) <= uVar57) {
            uVar59 = uVar59 + 1;
          }
          if (*(ushort *)((long)puVar70 + uVar64 * 8 + 6) <= uVar57) {
            uVar59 = uVar59 + 1;
          }
          puVar61 = (ushort *)((long)puVar70 + uVar59 * 2);
          uVar48 = *puVar61;
          uVar121 = puVar61[1];
          *(ulong *)((long)param_7 + lVar68 * 0x82 + 0x2a00) =
               CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                        CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                 CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                          uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
          *puVar70 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
          ;
          *(ulong *)((long)param_7 + lVar68 * 0x82 + 0x2a10) =
               CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                        CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                                 CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                          uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
          *(ulong *)((long)param_7 + lVar68 * 0x82 + 0x2a08) =
               CONCAT26(uVar55 + ((short)(auVar128._6_2_ - uVar55) >> 7),
                        CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                 CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                          uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
          uVar69 = ((ulong)((uint)uVar121 - (uint)uVar48) * (uVar69 >> 0xf) - (ulong)uVar48) +
                   (uVar69 & 0x7fff);
          puVar76 = puVar74;
          if (uVar69 >> 0x1f == 0) {
            puVar76 = puVar74 + 1;
            uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
          }
          if (uVar59 == 0) {
            uVar64 = 1;
            uVar59 = uVar69;
          }
          else {
            puVar61 = (ushort *)((long)param_7 + (uVar59 - 1) * 2 + lVar68 * 0x82 + 0x2a1a);
            uVar105 = *puVar61;
            uVar64 = (ulong)uVar105;
            lVar60 = (uVar80 >> 0xe) * uVar64;
            puVar74 = puVar76;
            if ((uVar80 & 0x3fff) < uVar64) {
              uVar80 = lVar60 + (uVar80 & 0x3fff);
              *puVar61 = uVar105 + (short)(0x4000 - uVar105 >> 6);
              if (uVar80 >> 0x1f != 0) {
                uVar64 = 0;
                goto joined_r0x00114fa8;
              }
              puVar74 = puVar76 + 1;
              uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
              uVar64 = 0;
              if (uVar59 == 1) goto LAB_00114fac;
              uVar64 = 0;
LAB_001150fc:
              puVar61 = (ushort *)
                        ((long)param_7 + (uVar59 - 1) * 2 + uVar64 * 0x20 + lVar68 * 0x82 + 0x2a3a);
              uVar105 = *puVar61;
              uVar66 = (ulong)uVar105;
              lVar60 = (uVar69 >> 0xe) * uVar66;
              puVar76 = puVar74;
              if ((uVar69 & 0x3fff) < uVar66) {
                uVar69 = lVar60 + (uVar69 & 0x3fff);
                *puVar61 = uVar105 + (short)(0x4000 - uVar105 >> 6);
                if (uVar69 >> 0x1f == 0) {
                  uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
                  uVar64 = uVar64 << 1 | 4;
                  puVar76 = puVar74 + 1;
                }
                else {
                  uVar64 = uVar64 << 1 | 4;
                }
              }
              else {
                uVar69 = (uVar69 - uVar66) - lVar60;
                *puVar61 = uVar105 - (uVar105 >> 6);
                if (uVar69 >> 0x1f == 0) {
                  puVar76 = puVar74 + 1;
                  uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
                }
                uVar64 = uVar64 << 1 | 5;
              }
              if (uVar59 == 2) {
                uVar59 = uVar69;
                goto LAB_001157d4;
              }
              uVar57 = (int)uVar59 - 2;
              uVar63 = (uint)uVar80;
              uVar80 = uVar80 >> ((ulong)uVar57 & 0x3f);
              puVar74 = puVar76;
              if (uVar80 >> 0x1f == 0) {
                puVar74 = puVar76 + 1;
                uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
              }
              uVar64 = uVar64 << (uVar59 - 2 & 0x3f) |
                       (ulong)(uVar63 & (-1 << (ulong)(uVar57 & 0x1f) ^ 0xffffffffU));
            }
            else {
              uVar80 = (uVar80 - uVar64) - lVar60;
              *puVar61 = uVar105 - (uVar105 >> 6);
              if (uVar80 >> 0x1f == 0) {
                puVar74 = puVar76 + 1;
                uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
              }
              uVar64 = 1;
joined_r0x00114fa8:
              if (uVar59 != 1) goto LAB_001150fc;
LAB_00114fac:
              uVar64 = uVar64 | 2;
            }
            uVar59 = uVar80;
            uVar80 = uVar69;
            puVar76 = puVar74;
          }
LAB_001157d4:
          uVar69 = (ulong)(uVar64 - 1 == 0);
          puVar61 = (ushort *)((long)param_7 + uVar69 * 0x46 + 0x2950);
          uVar105 = *puVar61;
          uVar66 = (ulong)uVar105;
          lVar60 = (uVar80 >> 0xe) * uVar66;
          puVar74 = puVar76;
          if ((uVar80 & 0x3fff) < uVar66) {
            uVar80 = lVar60 + (uVar80 & 0x3fff);
            *puVar61 = uVar105 + (short)(0x4000 - uVar105 >> 6);
            if (uVar80 >> 0x1f == 0) {
              uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
              uVar66 = 0;
              puVar74 = puVar76 + 1;
            }
            else {
              uVar66 = 0;
            }
          }
          else {
            uVar80 = (uVar80 - uVar66) - lVar60;
            *puVar61 = uVar105 - (uVar105 >> 6);
            if (uVar80 >> 0x1f == 0) {
              puVar74 = puVar76 + 1;
              uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
            }
            uVar66 = 1;
          }
          sVar77 = lVar68 + 3;
          lVar68 = uVar66 * 0x22 + uVar69 * 0x46;
          uVar57 = (uint)uVar59 & 0x7fff;
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x2924);
          uVar109 = (ushort)uVar65;
          uVar111 = (ushort)((ulong)uVar65 >> 0x10);
          uVar113 = (ushort)((ulong)uVar65 >> 0x20);
          uVar48 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x291c);
          uVar106 = (ushort)uVar65;
          uVar107 = (ushort)((ulong)uVar65 >> 0x10);
          uVar55 = (ushort)((ulong)uVar65 >> 0x20);
          uVar81 = (ushort)((ulong)uVar65 >> 0x30);
          uVar105 = (ushort)uVar57;
          bVar47 = *(ushort *)((long)param_7 + lVar68 + 0x2914) <= uVar57;
          if (!bVar47) {
            uVar67 = 1;
          }
          uVar69 = (ulong)bVar47;
          if (uVar106 <= uVar57) {
            uVar69 = uVar67;
          }
          puVar70 = (undefined8 *)((long)param_7 + lVar68 + 0x290c);
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x2914);
          uVar122 = (ushort)uVar65;
          uVar117 = (ushort)((ulong)uVar65 >> 0x10);
          uVar119 = (ushort)((ulong)uVar65 >> 0x20);
          uVar56 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *puVar70;
          uVar108 = (ushort)uVar65;
          uVar110 = (ushort)((ulong)uVar65 >> 0x10);
          uVar112 = (ushort)((ulong)uVar65 >> 0x20);
          uVar114 = (ushort)((ulong)uVar65 >> 0x30);
          auVar144._0_2_ = -(ushort)(uVar105 < uVar108);
          auVar144._2_2_ = -(ushort)(uVar105 < uVar110);
          auVar144._4_2_ = -(ushort)(uVar105 < uVar112);
          auVar144._6_2_ = -(ushort)(uVar105 < uVar114);
          auVar144._8_2_ = -(ushort)(uVar105 < uVar122);
          auVar144._10_2_ = -(ushort)(uVar105 < uVar117);
          auVar144._12_2_ = -(ushort)(uVar105 < uVar119);
          auVar144._14_2_ = -(ushort)(uVar105 < uVar56);
          auVar104._0_2_ = -(ushort)(uVar105 < uVar106);
          auVar104._2_2_ = -(ushort)(uVar105 < uVar107);
          auVar104._4_2_ = -(ushort)(uVar105 < uVar55);
          auVar104._6_2_ = -(ushort)(uVar105 < uVar81);
          auVar104._8_2_ = -(ushort)(uVar105 < uVar109);
          auVar104._10_2_ = -(ushort)(uVar105 < uVar111);
          auVar104._12_2_ = -(ushort)(uVar105 < uVar113);
          auVar104._14_2_ = -(ushort)(uVar105 < uVar48);
          if (*(ushort *)((long)param_7 + lVar68 + 0x2924) <= uVar57) {
            uVar69 = uVar69 + 1;
          }
          auVar14._2_2_ = uVar31;
          auVar14._0_2_ = uVar30;
          auVar14._4_2_ = uVar32;
          auVar14._6_2_ = uVar33;
          auVar14._8_2_ = uVar149;
          auVar14._10_2_ = uVar151;
          auVar14._12_2_ = uVar153;
          auVar14._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar14) & auVar144;
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar104;
          uVar67 = (ulong)(*(ushort *)((long)puVar70 + uVar69 * 8 + 2) <= uVar57) | uVar69 << 2;
          if (*(ushort *)((long)puVar70 + uVar69 * 8 + 4) <= uVar57) {
            uVar67 = uVar67 + 1;
          }
          if (*(ushort *)((long)puVar70 + uVar69 * 8 + 6) <= uVar57) {
            uVar67 = uVar67 + 1;
          }
          puVar61 = (ushort *)((long)puVar70 + uVar67 * 2);
          uVar105 = *puVar61;
          uVar121 = puVar61[1];
          *(ulong *)((long)param_7 + lVar68 + 0x2914) =
               CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                        CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                 CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                          uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
          *puVar70 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
          ;
          *(ulong *)((long)param_7 + lVar68 + 0x2924) =
               CONCAT26(uVar48 + ((short)(auVar128._14_2_ - uVar48) >> 7),
                        CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                 CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                          uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
          *(ulong *)((long)param_7 + lVar68 + 0x291c) =
               CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                        CONCAT24(uVar55 + ((short)(auVar128._4_2_ - uVar55) >> 7),
                                 CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                          uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
          uVar69 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar59 >> 0xf) - (ulong)uVar105) +
                   (uVar59 & 0x7fff);
          puVar76 = puVar74;
          if (uVar69 >> 0x1f == 0) {
            puVar76 = puVar74 + 1;
            uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
          }
          uVar59 = uVar66 | (uVar64 - 1) * 0x20 | uVar67 << 1;
          *(undefined1 *)__s = *(undefined1 *)((long)__s + ~uVar59);
          *(undefined1 *)((long)__s + 1) = *(undefined1 *)((long)__s - uVar59);
          lVar68 = uVar59 + 1;
          *(undefined1 *)((long)__s + 2) = *(undefined1 *)((long)__s + (1 - uVar59));
          *(undefined1 *)((long)__s + 3) = *(undefined1 *)((long)__s + (2 - uVar59));
        }
        else {
          uVar64 = param_9 & 3;
          uVar65 = *(undefined8 *)((long)param_7 + uVar64 * 0x22 + 0x2b26);
          uVar81 = (ushort)uVar65;
          uVar109 = (ushort)((ulong)uVar65 >> 0x10);
          uVar111 = (ushort)((ulong)uVar65 >> 0x20);
          uVar113 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *(undefined8 *)((long)param_7 + uVar64 * 0x22 + 0x2b1e);
          uVar105 = (ushort)uVar65;
          uVar106 = (ushort)((ulong)uVar65 >> 0x10);
          uVar107 = (ushort)((ulong)uVar65 >> 0x20);
          uVar55 = (ushort)((ulong)uVar65 >> 0x30);
          uVar63 = (uint)uVar80 & 0x7fff;
          bVar47 = *(ushort *)((long)param_7 + uVar64 * 0x22 + 0x2b16) <= uVar63;
          uVar59 = uVar67;
          if (!bVar47) {
            uVar59 = 1;
          }
          uVar48 = (ushort)uVar63;
          uVar66 = (ulong)bVar47;
          if (uVar105 <= uVar63) {
            uVar66 = uVar59;
          }
          puVar70 = (undefined8 *)((long)param_7 + uVar64 * 0x22 + 0x2b0e);
          uVar65 = *(undefined8 *)((long)param_7 + uVar64 * 0x22 + 0x2b16);
          uVar122 = (ushort)uVar65;
          uVar117 = (ushort)((ulong)uVar65 >> 0x10);
          uVar119 = (ushort)((ulong)uVar65 >> 0x20);
          uVar56 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *puVar70;
          uVar108 = (ushort)uVar65;
          uVar110 = (ushort)((ulong)uVar65 >> 0x10);
          uVar112 = (ushort)((ulong)uVar65 >> 0x20);
          uVar114 = (ushort)((ulong)uVar65 >> 0x30);
          auVar133._0_2_ = -(ushort)(uVar48 < uVar108);
          auVar133._2_2_ = -(ushort)(uVar48 < uVar110);
          auVar133._4_2_ = -(ushort)(uVar48 < uVar112);
          auVar133._6_2_ = -(ushort)(uVar48 < uVar114);
          auVar133._8_2_ = -(ushort)(uVar48 < uVar122);
          auVar133._10_2_ = -(ushort)(uVar48 < uVar117);
          auVar133._12_2_ = -(ushort)(uVar48 < uVar119);
          auVar133._14_2_ = -(ushort)(uVar48 < uVar56);
          auVar15._2_2_ = uVar31;
          auVar15._0_2_ = uVar30;
          auVar15._4_2_ = uVar32;
          auVar15._6_2_ = uVar33;
          auVar15._8_2_ = uVar149;
          auVar15._10_2_ = uVar151;
          auVar15._12_2_ = uVar153;
          auVar15._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar15) & auVar133;
          auVar93._0_2_ = -(ushort)(uVar48 < uVar105);
          auVar93._2_2_ = -(ushort)(uVar48 < uVar106);
          auVar93._4_2_ = -(ushort)(uVar48 < uVar107);
          auVar93._6_2_ = -(ushort)(uVar48 < uVar55);
          auVar93._8_2_ = -(ushort)(uVar48 < uVar81);
          auVar93._10_2_ = -(ushort)(uVar48 < uVar109);
          auVar93._12_2_ = -(ushort)(uVar48 < uVar111);
          auVar93._14_2_ = -(ushort)(uVar48 < uVar113);
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar93;
          if (*(ushort *)((long)param_7 + uVar64 * 0x22 + 0x2b26) <= uVar63) {
            uVar66 = uVar66 + 1;
          }
          uVar59 = (ulong)(*(ushort *)((long)puVar70 + uVar66 * 8 + 2) <= uVar63) | uVar66 << 2;
          if (*(ushort *)((long)puVar70 + uVar66 * 8 + 4) <= uVar63) {
            uVar59 = uVar59 + 1;
          }
          if (*(ushort *)((long)puVar70 + uVar66 * 8 + 6) <= uVar63) {
            uVar59 = uVar59 + 1;
          }
          puVar61 = (ushort *)((long)puVar70 + uVar59 * 2);
          uVar48 = *puVar61;
          uVar121 = puVar61[1];
          *(ulong *)((long)param_7 + uVar64 * 0x22 + 0x2b16) =
               CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                        CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                 CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                          uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
          *puVar70 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
          ;
          *(ulong *)((long)param_7 + uVar64 * 0x22 + 0x2b26) =
               CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                        CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                                 CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                          uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
          *(ulong *)((long)param_7 + uVar64 * 0x22 + 0x2b1e) =
               CONCAT26(uVar55 + ((short)(auVar128._6_2_ - uVar55) >> 7),
                        CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                 CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                          uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
          uVar80 = ((ulong)((uint)uVar121 - (uint)uVar48) * (uVar80 >> 0xf) - (ulong)uVar48) +
                   (uVar80 & 0x7fff);
          puVar74 = puVar76;
          if (uVar80 >> 0x1f == 0) {
            puVar74 = puVar76 + 1;
            uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
          }
          sVar77 = uVar59 + 0xd;
          if (0xb < uVar59) {
            uVar65 = *(undefined8 *)((long)param_7 + 0x2bae);
            uVar81 = (ushort)uVar65;
            uVar109 = (ushort)((ulong)uVar65 >> 0x10);
            uVar111 = (ushort)((ulong)uVar65 >> 0x20);
            uVar113 = (ushort)((ulong)uVar65 >> 0x30);
            uVar65 = *(undefined8 *)((long)param_7 + 0x2ba6);
            uVar105 = (ushort)uVar65;
            uVar106 = (ushort)((ulong)uVar65 >> 0x10);
            uVar107 = (ushort)((ulong)uVar65 >> 0x20);
            uVar55 = (ushort)((ulong)uVar65 >> 0x30);
            uVar57 = uVar57 & 0x7fff;
            bVar47 = *(ushort *)((long)param_7 + 0x2b9e) <= uVar57;
            uVar59 = uVar67;
            if (!bVar47) {
              uVar59 = 1;
            }
            uVar65 = *(undefined8 *)((long)param_7 + 0x2b9e);
            uVar122 = (ushort)uVar65;
            uVar117 = (ushort)((ulong)uVar65 >> 0x10);
            uVar119 = (ushort)((ulong)uVar65 >> 0x20);
            uVar56 = (ushort)((ulong)uVar65 >> 0x30);
            uVar65 = *(undefined8 *)((long)param_7 + 0x2b96);
            uVar108 = (ushort)uVar65;
            uVar110 = (ushort)((ulong)uVar65 >> 0x10);
            uVar112 = (ushort)((ulong)uVar65 >> 0x20);
            uVar114 = (ushort)((ulong)uVar65 >> 0x30);
            uVar48 = (ushort)uVar57;
            auVar134._0_2_ = -(ushort)(uVar48 < uVar108);
            auVar134._2_2_ = -(ushort)(uVar48 < uVar110);
            auVar134._4_2_ = -(ushort)(uVar48 < uVar112);
            auVar134._6_2_ = -(ushort)(uVar48 < uVar114);
            auVar134._8_2_ = -(ushort)(uVar48 < uVar122);
            auVar134._10_2_ = -(ushort)(uVar48 < uVar117);
            auVar134._12_2_ = -(ushort)(uVar48 < uVar119);
            auVar134._14_2_ = -(ushort)(uVar48 < uVar56);
            auVar94._0_2_ = -(ushort)(uVar48 < uVar105);
            auVar94._2_2_ = -(ushort)(uVar48 < uVar106);
            auVar94._4_2_ = -(ushort)(uVar48 < uVar107);
            auVar94._6_2_ = -(ushort)(uVar48 < uVar55);
            auVar94._8_2_ = -(ushort)(uVar48 < uVar81);
            auVar94._10_2_ = -(ushort)(uVar48 < uVar109);
            auVar94._12_2_ = -(ushort)(uVar48 < uVar111);
            auVar94._14_2_ = -(ushort)(uVar48 < uVar113);
            uVar64 = (ulong)bVar47;
            if (uVar105 <= uVar57) {
              uVar64 = uVar59;
            }
            auVar16._2_2_ = uVar31;
            auVar16._0_2_ = uVar30;
            auVar16._4_2_ = uVar32;
            auVar16._6_2_ = uVar33;
            auVar16._8_2_ = uVar149;
            auVar16._10_2_ = uVar151;
            auVar16._12_2_ = uVar153;
            auVar16._14_2_ = uVar155;
            auVar87 = auVar145 ^ (auVar145 ^ auVar16) & auVar134;
            auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar94;
            if (*(ushort *)((long)param_7 + 0x2bae) <= uVar57) {
              uVar64 = uVar64 + 1;
            }
            uVar59 = (ulong)(*(ushort *)(param_7 + uVar64 + 0x573) <= uVar57) | uVar64 << 2;
            if (*(ushort *)((long)param_7 + uVar64 * 8 + 0x2b9a) <= uVar57) {
              uVar59 = uVar59 + 1;
            }
            if (*(ushort *)((long)param_7 + uVar64 * 8 + 0x2b9c) <= uVar57) {
              uVar59 = uVar59 + 1;
            }
            puVar61 = (ushort *)((long)param_7 + uVar59 * 2 + 0x2b96);
            uVar48 = *puVar61;
            uVar69 = ((ulong)((uint)puVar61[1] - (uint)uVar48) * (uVar69 >> 0xf) - (ulong)uVar48) +
                     (uVar69 & 0x7fff);
            *(ulong *)((long)param_7 + 0x2b9e) =
                 CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
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
                 CONCAT26(uVar55 + ((short)(auVar128._6_2_ - uVar55) >> 7),
                          CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                   CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                            uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
            if (uVar69 >> 0x1f == 0) {
              uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
              puVar76 = puVar74 + 1;
              puVar74 = puVar74 + 1;
              uVar64 = uVar69;
              if (0xe < uVar59) goto LAB_00114514;
LAB_00114a2c:
              if ((int)uVar59 != 0) goto LAB_00114a30;
LAB_0011460c:
              uVar59 = 0;
              iVar50 = 0;
            }
            else {
              puVar76 = puVar74;
              uVar64 = uVar69;
              if (uVar59 < 0xf) goto LAB_00114a2c;
LAB_00114514:
              lVar68 = uVar59 - 0xf;
              uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2bd0);
              uVar109 = (ushort)uVar65;
              uVar111 = (ushort)((ulong)uVar65 >> 0x10);
              uVar113 = (ushort)((ulong)uVar65 >> 0x20);
              uVar48 = (ushort)((ulong)uVar65 >> 0x30);
              uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2bc8);
              uVar106 = (ushort)uVar65;
              uVar107 = (ushort)((ulong)uVar65 >> 0x10);
              uVar55 = (ushort)((ulong)uVar65 >> 0x20);
              uVar81 = (ushort)((ulong)uVar65 >> 0x30);
              uVar57 = (uint)uVar80 & 0x7fff;
              bVar47 = *(ushort *)((long)param_7 + lVar68 * 0x22 + 0x2bc0) <= uVar57;
              uVar105 = (ushort)uVar57;
              uVar69 = uVar67;
              if (!bVar47) {
                uVar69 = 1;
              }
              uVar66 = (ulong)bVar47;
              if (uVar106 <= uVar57) {
                uVar66 = uVar69;
              }
              puVar70 = (undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2bb8);
              uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2bc0);
              uVar122 = (ushort)uVar65;
              uVar117 = (ushort)((ulong)uVar65 >> 0x10);
              uVar119 = (ushort)((ulong)uVar65 >> 0x20);
              uVar56 = (ushort)((ulong)uVar65 >> 0x30);
              uVar65 = *puVar70;
              uVar108 = (ushort)uVar65;
              uVar110 = (ushort)((ulong)uVar65 >> 0x10);
              uVar112 = (ushort)((ulong)uVar65 >> 0x20);
              uVar114 = (ushort)((ulong)uVar65 >> 0x30);
              auVar135._0_2_ = -(ushort)(uVar105 < uVar108);
              auVar135._2_2_ = -(ushort)(uVar105 < uVar110);
              auVar135._4_2_ = -(ushort)(uVar105 < uVar112);
              auVar135._6_2_ = -(ushort)(uVar105 < uVar114);
              auVar135._8_2_ = -(ushort)(uVar105 < uVar122);
              auVar135._10_2_ = -(ushort)(uVar105 < uVar117);
              auVar135._12_2_ = -(ushort)(uVar105 < uVar119);
              auVar135._14_2_ = -(ushort)(uVar105 < uVar56);
              auVar95._0_2_ = -(ushort)(uVar105 < uVar106);
              auVar95._2_2_ = -(ushort)(uVar105 < uVar107);
              auVar95._4_2_ = -(ushort)(uVar105 < uVar55);
              auVar95._6_2_ = -(ushort)(uVar105 < uVar81);
              auVar95._8_2_ = -(ushort)(uVar105 < uVar109);
              auVar95._10_2_ = -(ushort)(uVar105 < uVar111);
              auVar95._12_2_ = -(ushort)(uVar105 < uVar113);
              auVar95._14_2_ = -(ushort)(uVar105 < uVar48);
              auVar17._2_2_ = uVar31;
              auVar17._0_2_ = uVar30;
              auVar17._4_2_ = uVar32;
              auVar17._6_2_ = uVar33;
              auVar17._8_2_ = uVar149;
              auVar17._10_2_ = uVar151;
              auVar17._12_2_ = uVar153;
              auVar17._14_2_ = uVar155;
              auVar87 = auVar145 ^ (auVar145 ^ auVar17) & auVar135;
              auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar95;
              if (*(ushort *)((long)param_7 + lVar68 * 0x22 + 0x2bd0) <= uVar57) {
                uVar66 = uVar66 + 1;
              }
              uVar59 = (ulong)(*(ushort *)((long)puVar70 + uVar66 * 8 + 2) <= uVar57) | uVar66 << 2;
              if (*(ushort *)((long)puVar70 + uVar66 * 8 + 4) <= uVar57) {
                uVar59 = uVar59 + 1;
              }
              if (*(ushort *)((long)puVar70 + uVar66 * 8 + 6) <= uVar57) {
                uVar59 = uVar59 + 1;
              }
              puVar61 = (ushort *)((long)puVar70 + uVar59 * 2);
              uVar105 = *puVar61;
              uVar121 = puVar61[1];
              *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x2bc0) =
                   CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                            CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                     CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                              uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
              *puVar70 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                                  CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                           CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7
                                                              ),
                                                    uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7
                                                              ))));
              *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x2bd0) =
                   CONCAT26(uVar48 + ((short)(auVar128._14_2_ - uVar48) >> 7),
                            CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                     CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                              uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
              *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x2bc8) =
                   CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                            CONCAT24(uVar55 + ((short)(auVar128._4_2_ - uVar55) >> 7),
                                     CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                              uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
              uVar69 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar80 >> 0xf) - (ulong)uVar105) +
                       (uVar80 & 0x7fff);
              puVar76 = puVar74;
              if (uVar69 >> 0x1f == 0) {
                puVar76 = puVar74 + 1;
                uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
              }
              uVar59 = uVar59 + (lVar68 * 0x10 | 0xfU);
              uVar80 = uVar64;
              if ((int)uVar59 == 0) goto LAB_0011460c;
LAB_00114a30:
              uVar63 = (int)uVar59 - 1;
              uVar57 = uVar63 >> 1;
              uVar59 = (ulong)uVar57;
              iVar50 = ((uVar63 & 1 | 2) << (ulong)(uVar57 & 0x1f)) + -1;
            }
            uVar57 = (uint)uVar80;
            uVar80 = uVar80 >> (uVar59 & 0x3f);
            puVar74 = puVar76;
            if (uVar80 >> 0x1f == 0) {
              puVar74 = puVar76 + 1;
              uVar80 = (ulong)*puVar76 | uVar80 << 0x20;
            }
            sVar77 = sVar77 + (ulong)((uVar57 & (-1 << (ulong)((uint)uVar59 & 0x1f) ^ 0xffffffffU))
                                     + iVar50) * 4;
          }
          uVar65 = *(undefined8 *)((long)param_7 + 0x2bf2);
          uVar81 = (ushort)uVar65;
          uVar109 = (ushort)((ulong)uVar65 >> 0x10);
          uVar111 = (ushort)((ulong)uVar65 >> 0x20);
          uVar113 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *(undefined8 *)((long)param_7 + 0x2bea);
          uVar105 = (ushort)uVar65;
          uVar106 = (ushort)((ulong)uVar65 >> 0x10);
          uVar107 = (ushort)((ulong)uVar65 >> 0x20);
          uVar55 = (ushort)((ulong)uVar65 >> 0x30);
          uVar57 = (uint)uVar69 & 0x7fff;
          bVar47 = *(ushort *)((long)param_7 + 0x2be2) <= uVar57;
          uVar59 = uVar67;
          if (!bVar47) {
            uVar59 = 1;
          }
          uVar48 = (ushort)uVar57;
          uVar64 = (ulong)bVar47;
          if (uVar105 <= uVar57) {
            uVar64 = uVar59;
          }
          if (*(ushort *)((long)param_7 + 0x2bf2) <= uVar57) {
            uVar64 = uVar64 + 1;
          }
          uVar59 = (ulong)(*(ushort *)((long)param_7 + uVar64 * 8 + 0x2bdc) <= uVar57) | uVar64 << 2
          ;
          uVar65 = *(undefined8 *)((long)param_7 + 0x2be2);
          uVar122 = (ushort)uVar65;
          uVar117 = (ushort)((ulong)uVar65 >> 0x10);
          uVar119 = (ushort)((ulong)uVar65 >> 0x20);
          uVar56 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *(undefined8 *)((long)param_7 + 0x2bda);
          uVar108 = (ushort)uVar65;
          uVar110 = (ushort)((ulong)uVar65 >> 0x10);
          uVar112 = (ushort)((ulong)uVar65 >> 0x20);
          uVar114 = (ushort)((ulong)uVar65 >> 0x30);
          auVar139._0_2_ = -(ushort)(uVar48 < uVar108);
          auVar139._2_2_ = -(ushort)(uVar48 < uVar110);
          auVar139._4_2_ = -(ushort)(uVar48 < uVar112);
          auVar139._6_2_ = -(ushort)(uVar48 < uVar114);
          auVar139._8_2_ = -(ushort)(uVar48 < uVar122);
          auVar139._10_2_ = -(ushort)(uVar48 < uVar117);
          auVar139._12_2_ = -(ushort)(uVar48 < uVar119);
          auVar139._14_2_ = -(ushort)(uVar48 < uVar56);
          auVar99._0_2_ = -(ushort)(uVar48 < uVar105);
          auVar99._2_2_ = -(ushort)(uVar48 < uVar106);
          auVar99._4_2_ = -(ushort)(uVar48 < uVar107);
          auVar99._6_2_ = -(ushort)(uVar48 < uVar55);
          auVar99._8_2_ = -(ushort)(uVar48 < uVar81);
          auVar99._10_2_ = -(ushort)(uVar48 < uVar109);
          auVar99._12_2_ = -(ushort)(uVar48 < uVar111);
          auVar99._14_2_ = -(ushort)(uVar48 < uVar113);
          auVar18._2_2_ = uVar31;
          auVar18._0_2_ = uVar30;
          auVar18._4_2_ = uVar32;
          auVar18._6_2_ = uVar33;
          auVar18._8_2_ = uVar149;
          auVar18._10_2_ = uVar151;
          auVar18._12_2_ = uVar153;
          auVar18._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar18) & auVar139;
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar99;
          if (*(ushort *)((long)param_7 + uVar64 * 8 + 0x2bde) <= uVar57) {
            uVar59 = uVar59 + 1;
          }
          if (*(ushort *)(param_7 + uVar64 + 0x57c) <= uVar57) {
            uVar59 = uVar59 + 1;
          }
          puVar61 = (ushort *)((long)param_7 + uVar59 * 2 + 0x2bda);
          uVar48 = *puVar61;
          uVar121 = puVar61[1];
          *(ulong *)((long)param_7 + 0x2be2) =
               CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
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
               CONCAT26(uVar55 + ((short)(auVar128._6_2_ - uVar55) >> 7),
                        CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                 CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                          uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
          uVar69 = ((ulong)((uint)uVar121 - (uint)uVar48) * (uVar69 >> 0xf) - (ulong)uVar48) +
                   (uVar69 & 0x7fff);
          if (uVar69 >> 0x1f == 0) {
            puVar76 = puVar74 + 1;
            uVar69 = (ulong)*puVar74 | uVar69 << 0x20;
            uVar64 = uVar69;
            puVar74 = puVar76;
            if (0xe < uVar59) goto LAB_00114b48;
LAB_00114c50:
            if (uVar59 != 0) goto LAB_00114c54;
LAB_00114c40:
            uVar64 = 1;
            uVar59 = uVar69;
          }
          else {
            uVar64 = uVar69;
            puVar76 = puVar74;
            if (uVar59 < 0xf) goto LAB_00114c50;
LAB_00114b48:
            lVar68 = uVar59 - 0xf;
            uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2c14);
            uVar109 = (ushort)uVar65;
            uVar111 = (ushort)((ulong)uVar65 >> 0x10);
            uVar113 = (ushort)((ulong)uVar65 >> 0x20);
            uVar48 = (ushort)((ulong)uVar65 >> 0x30);
            uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2c0c);
            uVar106 = (ushort)uVar65;
            uVar107 = (ushort)((ulong)uVar65 >> 0x10);
            uVar55 = (ushort)((ulong)uVar65 >> 0x20);
            uVar81 = (ushort)((ulong)uVar65 >> 0x30);
            uVar57 = (uint)uVar80 & 0x7fff;
            bVar47 = *(ushort *)((long)param_7 + lVar68 * 0x22 + 0x2c04) <= uVar57;
            uVar105 = (ushort)uVar57;
            uVar69 = uVar67;
            if (!bVar47) {
              uVar69 = 1;
            }
            uVar66 = (ulong)bVar47;
            if (uVar106 <= uVar57) {
              uVar66 = uVar69;
            }
            puVar70 = (undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2bfc);
            uVar65 = *(undefined8 *)((long)param_7 + lVar68 * 0x22 + 0x2c04);
            uVar122 = (ushort)uVar65;
            uVar117 = (ushort)((ulong)uVar65 >> 0x10);
            uVar119 = (ushort)((ulong)uVar65 >> 0x20);
            uVar56 = (ushort)((ulong)uVar65 >> 0x30);
            uVar65 = *puVar70;
            uVar108 = (ushort)uVar65;
            uVar110 = (ushort)((ulong)uVar65 >> 0x10);
            uVar112 = (ushort)((ulong)uVar65 >> 0x20);
            uVar114 = (ushort)((ulong)uVar65 >> 0x30);
            auVar140._0_2_ = -(ushort)(uVar105 < uVar108);
            auVar140._2_2_ = -(ushort)(uVar105 < uVar110);
            auVar140._4_2_ = -(ushort)(uVar105 < uVar112);
            auVar140._6_2_ = -(ushort)(uVar105 < uVar114);
            auVar140._8_2_ = -(ushort)(uVar105 < uVar122);
            auVar140._10_2_ = -(ushort)(uVar105 < uVar117);
            auVar140._12_2_ = -(ushort)(uVar105 < uVar119);
            auVar140._14_2_ = -(ushort)(uVar105 < uVar56);
            auVar100._0_2_ = -(ushort)(uVar105 < uVar106);
            auVar100._2_2_ = -(ushort)(uVar105 < uVar107);
            auVar100._4_2_ = -(ushort)(uVar105 < uVar55);
            auVar100._6_2_ = -(ushort)(uVar105 < uVar81);
            auVar100._8_2_ = -(ushort)(uVar105 < uVar109);
            auVar100._10_2_ = -(ushort)(uVar105 < uVar111);
            auVar100._12_2_ = -(ushort)(uVar105 < uVar113);
            auVar100._14_2_ = -(ushort)(uVar105 < uVar48);
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
            if (*(ushort *)((long)param_7 + lVar68 * 0x22 + 0x2c14) <= uVar57) {
              uVar66 = uVar66 + 1;
            }
            uVar59 = (ulong)(*(ushort *)((long)puVar70 + uVar66 * 8 + 2) <= uVar57) | uVar66 << 2;
            if (*(ushort *)((long)puVar70 + uVar66 * 8 + 4) <= uVar57) {
              uVar59 = uVar59 + 1;
            }
            if (*(ushort *)((long)puVar70 + uVar66 * 8 + 6) <= uVar57) {
              uVar59 = uVar59 + 1;
            }
            puVar61 = (ushort *)((long)puVar70 + uVar59 * 2);
            uVar105 = *puVar61;
            uVar121 = puVar61[1];
            *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x2c04) =
                 CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                          CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                   CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                            uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
            *puVar70 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                                CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                         CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                  uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))
                                        ));
            *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x2c14) =
                 CONCAT26(uVar48 + ((short)(auVar128._14_2_ - uVar48) >> 7),
                          CONCAT24(uVar113 + ((short)(auVar128._12_2_ - uVar113) >> 7),
                                   CONCAT22(uVar111 + ((short)(auVar128._10_2_ - uVar111) >> 7),
                                            uVar109 + ((short)(auVar128._8_2_ - uVar109) >> 7))));
            *(ulong *)((long)param_7 + lVar68 * 0x22 + 0x2c0c) =
                 CONCAT26(uVar81 + ((short)(auVar128._6_2_ - uVar81) >> 7),
                          CONCAT24(uVar55 + ((short)(auVar128._4_2_ - uVar55) >> 7),
                                   CONCAT22(uVar107 + ((short)(auVar128._2_2_ - uVar107) >> 7),
                                            uVar106 + ((short)(auVar128._0_2_ - uVar106) >> 7))));
            uVar69 = ((ulong)((uint)uVar121 - (uint)uVar105) * (uVar80 >> 0xf) - (ulong)uVar105) +
                     (uVar80 & 0x7fff);
            puVar74 = puVar76;
            if (uVar69 >> 0x1f == 0) {
              puVar74 = puVar76 + 1;
              uVar69 = (ulong)*puVar76 | uVar69 << 0x20;
            }
            uVar59 = uVar59 + (lVar68 * 0x10 | 0xfU);
            uVar80 = uVar64;
            if (uVar59 == 0) goto LAB_00114c40;
LAB_00114c54:
            puVar61 = (ushort *)((long)param_7 + (uVar59 - 1) * 2 + 0x2c1e);
            uVar105 = *puVar61;
            uVar64 = (ulong)uVar105;
            lVar68 = (uVar80 >> 0xe) * uVar64;
            puVar76 = puVar74;
            if ((uVar80 & 0x3fff) < uVar64) {
              uVar80 = lVar68 + (uVar80 & 0x3fff);
              *puVar61 = uVar105 + (short)(0x4000 - uVar105 >> 6);
              if (uVar80 >> 0x1f != 0) {
                uVar64 = 0;
                goto joined_r0x00114e18;
              }
              puVar76 = puVar74 + 1;
              uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
              uVar64 = 0;
              if (uVar59 == 1) goto LAB_00114e1c;
              uVar64 = 0;
LAB_00115088:
              puVar61 = (ushort *)((long)param_7 + (uVar59 - 1) * 2 + uVar64 * 0x3e + 0x2c5c);
              uVar105 = *puVar61;
              uVar66 = (ulong)uVar105;
              lVar68 = (uVar69 >> 0xe) * uVar66;
              puVar74 = puVar76;
              if ((uVar69 & 0x3fff) < uVar66) {
                uVar69 = lVar68 + (uVar69 & 0x3fff);
                *puVar61 = uVar105 + (short)(0x4000 - uVar105 >> 6);
                if (uVar69 >> 0x1f != 0) {
                  uVar64 = uVar64 << 1 | 4;
                  goto joined_r0x001151dc;
                }
                puVar74 = puVar76 + 1;
                uVar69 = (ulong)*puVar76 | uVar69 << 0x20;
                uVar64 = uVar64 << 1 | 4;
                if (uVar59 != 2) goto LAB_001154f0;
              }
              else {
                uVar69 = (uVar69 - uVar66) - lVar68;
                *puVar61 = uVar105 - (uVar105 >> 6);
                if (uVar69 >> 0x1f == 0) {
                  puVar74 = puVar76 + 1;
                  uVar69 = (ulong)*puVar76 | uVar69 << 0x20;
                }
                uVar64 = uVar64 << 1 | 5;
joined_r0x001151dc:
                if (uVar59 != 2) {
LAB_001154f0:
                  uVar57 = (int)uVar59 - 2;
                  uVar63 = (uint)uVar80;
                  uVar80 = uVar80 >> ((ulong)uVar57 & 0x3f);
                  puVar76 = puVar74;
                  if (uVar80 >> 0x1f == 0) {
                    puVar76 = puVar74 + 1;
                    uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
                  }
                  uVar64 = uVar64 << (uVar59 - 2 & 0x3f) |
                           (ulong)(uVar63 & (-1 << (ulong)(uVar57 & 0x1f) ^ 0xffffffffU));
                  goto LAB_00115524;
                }
              }
              uVar59 = uVar69;
            }
            else {
              uVar80 = (uVar80 - uVar64) - lVar68;
              *puVar61 = uVar105 - (uVar105 >> 6);
              if (uVar80 >> 0x1f == 0) {
                puVar76 = puVar74 + 1;
                uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
              }
              uVar64 = 1;
joined_r0x00114e18:
              if (uVar59 != 1) goto LAB_00115088;
LAB_00114e1c:
              uVar64 = uVar64 | 2;
LAB_00115524:
              uVar59 = uVar80;
              uVar80 = uVar69;
              puVar74 = puVar76;
            }
          }
          uVar69 = (ulong)(uVar64 - 1 == 0);
          puVar61 = (ushort *)((long)param_7 + uVar69 * 0x46 + 0x2950);
          uVar105 = *puVar61;
          uVar66 = (ulong)uVar105;
          lVar68 = (uVar80 >> 0xe) * uVar66;
          puVar75 = puVar74;
          if ((uVar80 & 0x3fff) < uVar66) {
            uVar80 = lVar68 + (uVar80 & 0x3fff);
            *puVar61 = uVar105 + (short)(0x4000 - uVar105 >> 6);
            if (uVar80 >> 0x1f == 0) {
              uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
              uVar66 = 0;
              puVar75 = puVar74 + 1;
            }
            else {
              uVar66 = 0;
            }
          }
          else {
            uVar80 = (uVar80 - uVar66) - lVar68;
            *puVar61 = uVar105 - (uVar105 >> 6);
            if (uVar80 >> 0x1f == 0) {
              puVar75 = puVar74 + 1;
              uVar80 = (ulong)*puVar74 | uVar80 << 0x20;
            }
            uVar66 = 1;
          }
          lVar68 = uVar66 * 0x22 + uVar69 * 0x46;
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x2924);
          uVar81 = (ushort)uVar65;
          uVar109 = (ushort)((ulong)uVar65 >> 0x10);
          uVar111 = (ushort)((ulong)uVar65 >> 0x20);
          uVar113 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x291c);
          uVar105 = (ushort)uVar65;
          uVar106 = (ushort)((ulong)uVar65 >> 0x10);
          uVar107 = (ushort)((ulong)uVar65 >> 0x20);
          uVar55 = (ushort)((ulong)uVar65 >> 0x30);
          uVar57 = (uint)uVar59 & 0x7fff;
          bVar47 = *(ushort *)((long)param_7 + lVar68 + 0x2914) <= uVar57;
          if (!bVar47) {
            uVar67 = 1;
          }
          uVar48 = (ushort)uVar57;
          uVar69 = (ulong)bVar47;
          if (uVar105 <= uVar57) {
            uVar69 = uVar67;
          }
          puVar70 = (undefined8 *)((long)param_7 + lVar68 + 0x290c);
          uVar65 = *(undefined8 *)((long)param_7 + lVar68 + 0x2914);
          uVar122 = (ushort)uVar65;
          uVar117 = (ushort)((ulong)uVar65 >> 0x10);
          uVar119 = (ushort)((ulong)uVar65 >> 0x20);
          uVar56 = (ushort)((ulong)uVar65 >> 0x30);
          uVar65 = *puVar70;
          uVar108 = (ushort)uVar65;
          uVar110 = (ushort)((ulong)uVar65 >> 0x10);
          uVar112 = (ushort)((ulong)uVar65 >> 0x20);
          uVar114 = (ushort)((ulong)uVar65 >> 0x30);
          auVar143._0_2_ = -(ushort)(uVar48 < uVar108);
          auVar143._2_2_ = -(ushort)(uVar48 < uVar110);
          auVar143._4_2_ = -(ushort)(uVar48 < uVar112);
          auVar143._6_2_ = -(ushort)(uVar48 < uVar114);
          auVar143._8_2_ = -(ushort)(uVar48 < uVar122);
          auVar143._10_2_ = -(ushort)(uVar48 < uVar117);
          auVar143._12_2_ = -(ushort)(uVar48 < uVar119);
          auVar143._14_2_ = -(ushort)(uVar48 < uVar56);
          auVar103._0_2_ = -(ushort)(uVar48 < uVar105);
          auVar103._2_2_ = -(ushort)(uVar48 < uVar106);
          auVar103._4_2_ = -(ushort)(uVar48 < uVar107);
          auVar103._6_2_ = -(ushort)(uVar48 < uVar55);
          auVar103._8_2_ = -(ushort)(uVar48 < uVar81);
          auVar103._10_2_ = -(ushort)(uVar48 < uVar109);
          auVar103._12_2_ = -(ushort)(uVar48 < uVar111);
          auVar103._14_2_ = -(ushort)(uVar48 < uVar113);
          auVar20._2_2_ = uVar31;
          auVar20._0_2_ = uVar30;
          auVar20._4_2_ = uVar32;
          auVar20._6_2_ = uVar33;
          auVar20._8_2_ = uVar149;
          auVar20._10_2_ = uVar151;
          auVar20._12_2_ = uVar153;
          auVar20._14_2_ = uVar155;
          auVar87 = auVar145 ^ (auVar145 ^ auVar20) & auVar143;
          auVar128 = auVar157 ^ (auVar157 ^ auVar165) & auVar103;
          if (*(ushort *)((long)param_7 + lVar68 + 0x2924) <= uVar57) {
            uVar69 = uVar69 + 1;
          }
          uVar67 = (ulong)(*(ushort *)((long)puVar70 + uVar69 * 8 + 2) <= uVar57) | uVar69 << 2;
          if (*(ushort *)((long)puVar70 + uVar69 * 8 + 4) <= uVar57) {
            uVar67 = uVar67 + 1;
          }
          if (*(ushort *)((long)puVar70 + uVar69 * 8 + 6) <= uVar57) {
            uVar67 = uVar67 + 1;
          }
          puVar61 = (ushort *)((long)puVar70 + uVar67 * 2);
          uVar48 = *puVar61;
          uVar121 = puVar61[1];
          *(ulong *)((long)param_7 + lVar68 + 0x2914) =
               CONCAT26(uVar56 + ((short)(auVar87._14_2_ - uVar56) >> 7),
                        CONCAT24(uVar119 + ((short)(auVar87._12_2_ - uVar119) >> 7),
                                 CONCAT22(uVar117 + ((short)(auVar87._10_2_ - uVar117) >> 7),
                                          uVar122 + ((short)(auVar87._8_2_ - uVar122) >> 7))));
          *puVar70 = CONCAT26(uVar114 + ((short)(auVar87._6_2_ - uVar114) >> 7),
                              CONCAT24(uVar112 + ((short)(auVar87._4_2_ - uVar112) >> 7),
                                       CONCAT22(uVar110 + ((short)(auVar87._2_2_ - uVar110) >> 7),
                                                uVar108 + ((short)(auVar87._0_2_ - uVar108) >> 7))))
          ;
          *(ulong *)((long)param_7 + lVar68 + 0x2924) =
               CONCAT26(uVar113 + ((short)(auVar128._14_2_ - uVar113) >> 7),
                        CONCAT24(uVar111 + ((short)(auVar128._12_2_ - uVar111) >> 7),
                                 CONCAT22(uVar109 + ((short)(auVar128._10_2_ - uVar109) >> 7),
                                          uVar81 + ((short)(auVar128._8_2_ - uVar81) >> 7))));
          *(ulong *)((long)param_7 + lVar68 + 0x291c) =
               CONCAT26(uVar55 + ((short)(auVar128._6_2_ - uVar55) >> 7),
                        CONCAT24(uVar107 + ((short)(auVar128._4_2_ - uVar107) >> 7),
                                 CONCAT22(uVar106 + ((short)(auVar128._2_2_ - uVar106) >> 7),
                                          uVar105 + ((short)(auVar128._0_2_ - uVar105) >> 7))));
          uVar69 = ((ulong)((uint)uVar121 - (uint)uVar48) * (uVar59 >> 0xf) - (ulong)uVar48) +
                   (uVar59 & 0x7fff);
          puVar76 = puVar75;
          if (uVar69 >> 0x1f == 0) {
            puVar76 = puVar75 + 1;
            uVar69 = (ulong)*puVar75 | uVar69 << 0x20;
          }
          uVar67 = uVar66 | (uVar64 - 1) * 0x20 | uVar67 << 1;
          lVar68 = uVar67 + 1;
          uVar59 = ~uVar67;
          puVar73 = (ulong *)((long)__s + uVar59);
          if (lVar68 < 8) {
            if (lVar68 < 4) {
              if (uVar67 == 0) {
                memset(__s,(uint)(byte)*puVar73,sVar77);
                lVar68 = 1;
              }
              else {
                *(byte *)__s = (byte)*puVar73;
                *(undefined1 *)((long)__s + 1) = *(undefined1 *)((long)puVar73 + 1);
                *(undefined1 *)((long)__s + 2) = *(undefined1 *)((long)puVar73 + 2);
                *(undefined1 *)((long)__s + 3) = *(undefined1 *)((long)puVar73 + 3);
                *(undefined1 *)((long)__s + 4) = *(undefined1 *)((long)puVar73 + 4);
                *(undefined1 *)((long)__s + 5) = *(undefined1 *)((long)puVar73 + 5);
                *(undefined1 *)((long)__s + 6) = *(undefined1 *)((long)puVar73 + 6);
                *(undefined1 *)((long)__s + 7) = *(undefined1 *)((long)puVar73 + 7);
                *(char *)(__s + 1) = (char)puVar73[1];
                if (9 < sVar77) {
                  uVar67 = sVar77 - 9 & 3;
                  if (sVar77 - 10 < 3) {
                    lVar72 = 9;
                  }
                  else {
                    lVar60 = 0;
                    do {
                      lVar72 = lVar60;
                      puVar52 = (undefined1 *)((long)puVar73 + lVar72 + 0xc);
                      *(undefined1 *)((long)__s + lVar72 + 9) = puVar52[-3];
                      *(undefined1 *)((long)__s + lVar72 + 10) = puVar52[-2];
                      *(undefined1 *)((long)__s + lVar72 + 0xb) = puVar52[-1];
                      *(undefined1 *)((long)__s + lVar72 + 0xc) = *puVar52;
                      lVar60 = lVar72 + 4;
                    } while ((sVar77 - 9) - uVar67 != lVar72 + 4);
                    lVar72 = lVar72 + 0xd;
                  }
                  if (uVar67 != 0) {
                    lVar60 = -uVar67;
                    puVar52 = (undefined1 *)((long)__s + lVar72);
                    do {
                      lVar60 = lVar60 + 1;
                      *puVar52 = puVar52[uVar59];
                      puVar52 = puVar52 + 1;
                    } while (lVar60 != 0);
                  }
                }
              }
            }
            else {
              *(int *)__s = (int)*puVar73;
              *(undefined4 *)((long)__s + 4) = *(undefined4 *)((long)puVar73 + 4);
              *(int *)(__s + 1) = (int)puVar73[1];
              if ((0xc < sVar77) &&
                 (*(undefined4 *)((long)__s + 0xc) = *(undefined4 *)((long)puVar73 + 0xc),
                 0x10 < sVar77)) {
                lVar60 = 0x10;
                iVar50 = 0x14;
                do {
                  *(undefined4 *)((long)__s + lVar60) = *(undefined4 *)((long)puVar73 + lVar60);
                  lVar60 = (long)iVar50;
                  iVar50 = iVar50 + 4;
                } while (lVar60 < (long)sVar77);
              }
            }
          }
          else {
            *__s = *puVar73;
            __s[1] = puVar73[1];
            lVar60 = sVar77 - 0x10;
            if (0 < lVar60) {
              uVar57 = ((uint)(sVar77 - 0x11 >> 3) & 0x1fffffff) + 1;
              if ((uVar57 & 7) == 0) {
                puVar73 = __s + 2;
              }
              else {
                lVar72 = -((ulong)uVar57 & 7);
                lVar46 = (long)__s + 0xf;
                do {
                  lVar71 = lVar46;
                  *(undefined8 *)(lVar71 + 1) = *(undefined8 *)(lVar71 + uVar59 + 1);
                  lVar60 = lVar60 + -8;
                  lVar72 = lVar72 + 1;
                  lVar46 = lVar71 + 8;
                } while (lVar72 != 0);
                puVar73 = (ulong *)(lVar71 + 9);
              }
              if (0x37 < sVar77 - 0x11) {
                do {
                  puVar62 = (ulong *)((long)puVar73 + (0x37 - uVar67));
                  *puVar73 = puVar62[-7];
                  puVar73[1] = puVar62[-6];
                  puVar73[2] = puVar62[-5];
                  puVar73[3] = puVar62[-4];
                  puVar73[4] = puVar62[-3];
                  puVar73[5] = puVar62[-2];
                  puVar73[6] = puVar62[-1];
                  lVar60 = lVar60 + -0x40;
                  puVar73[7] = *puVar62;
                  puVar73 = puVar73 + 8;
                } while (0 < lVar60);
              }
            }
          }
        }
        bVar47 = lVar58 < 7;
        lVar58 = 10;
        if (bVar47) {
          lVar58 = 7;
        }
        uVar5 = local_a0._4_4_;
        local_a0 = CONCAT44((undefined4)local_a0,(int)lVar68);
        local_98 = CONCAT44((undefined4)local_98,uVar5);
        puVar73 = (ulong *)((long)__s + sVar77);
        param_9 = sVar77 + param_9;
        goto joined_r0x001152e0;
      }
      param_9 = param_9 + 1;
      bVar47 = lVar58 < 7;
      lVar58 = 0xb;
      if (bVar47) {
        lVar58 = 9;
      }
      puVar73 = (ulong *)((long)__s + 1);
      *(byte *)__s = bVar53;
      __s = puVar73;
    } while (puVar76 < puVar79);
  } while( true );
}


