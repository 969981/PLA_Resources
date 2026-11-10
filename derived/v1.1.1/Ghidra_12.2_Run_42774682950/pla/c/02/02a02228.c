/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a02228; name: FUN_02a02228
 */


void FUN_02a02228(long param_1,undefined4 *param_2,long *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  uint *puVar21;
  char *pcVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  long *plVar29;
  uint local_19c;
  uint local_198;
  byte local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined6 uStack_140;
  undefined2 local_13a;
  undefined6 uStack_138;
  byte local_130 [40];
  uint local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined7 local_c8;
  undefined1 uStack_c1;
  undefined6 local_c0;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  uStack_138 = 0;
  local_190 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_13a = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  plVar29 = (long *)*param_3;
  uVar13 = *(uint *)(plVar29 + 0xb);
  uVar14 = uVar13 & 0x3fffff;
  lVar25 = *plVar29;
  uVar17 = *(undefined4 *)((long)plVar29 + 0x14);
  local_198 = 0;
  local_194 = 6;
  plVar19 = plVar29;
  if (((((*(byte *)((long)plVar29 + 0x2c) & 0x18) == 0) &&
       (uVar15 = *(ulong *)(lVar25 + 0x158), (uVar15 & 7) != 0)) && ((int)plVar29[1] == 1)) &&
     (local_19c = *(uint *)(plVar29 + 2), local_19c != 0xa5)) {
    switch((uint)uVar15 & 7) {
    case 1:
    case 2:
    case 3:
      uVar16 = (uint)(uVar15 >> 0xe);
      break;
    case 4:
      uVar16 = (uint)(uVar15 >> 0x14);
      break;
    default:
      uVar16 = 0;
    }
    uVar16 = uVar16 & 0xffff;
    if ((local_19c != uVar16) && ((ulong)*(byte *)(lVar25 + 0x368) != 0)) {
      lVar18 = 0;
      do {
        if (*(uint *)(lVar25 + lVar18 + 0x300) == uVar16) {
          if (*(char *)(lVar25 + lVar18 + 0x304) != '\0') {
            if (uVar16 != 0) {
              FUN_02979ca8(*(undefined8 *)(param_1 + 0x38),lVar25,local_19c,uVar16);
              uVar11 = FUN_0293f330(*(undefined8 *)(param_1 + 8),
                                    *(undefined8 *)(*(long *)(param_1 + 0x10) + 8),lVar25,uVar16,0);
              *(uint *)(plVar29 + 2) = uVar16;
              *(undefined1 *)((long)plVar29 + 0xc) = uVar11;
              plVar19 = (long *)*param_3;
              local_19c = uVar16;
            }
            goto LAB_02a022a8;
          }
          break;
        }
        lVar18 = lVar18 + 0x1c;
      } while ((ulong)*(byte *)(lVar25 + 0x368) * 0x1c != lVar18);
    }
  }
  local_19c = *(uint *)(plVar29 + 2);
LAB_02a022a8:
  iVar20 = (uVar13 >> 0x10 & 0x3f) - 7;
  if ((int)plVar19[1] == 1) {
    uVar13 = *(uint *)(plVar19 + 2);
  }
  else {
    uVar13 = 0;
  }
  uVar11 = *(undefined1 *)((long)plVar29 + 0xd);
  bVar10 = *(byte *)((long)plVar29 + 0xc);
  uVar6 = *(undefined2 *)((long)plVar29 + 0xc);
  lVar24 = *(long *)(param_1 + 0x20);
  uVar28 = *(undefined8 *)(lVar25 + 0x178);
  bVar9 = *(byte *)(lVar25 + 0x7d);
  lVar18 = *(long *)(lVar24 + 0x20);
  uVar26 = *(undefined8 *)(lVar25 + 0x170);
  uVar15 = FUN_02a17630(*(undefined8 *)(lVar18 + 0x18),
                        *(undefined8 *)
                         (*(long *)(*(long *)(lVar18 + 0x10) + 8) + (ulong)bVar9 * 8 + 0x120),uVar13
                       );
  if ((uVar15 & 1) != 0) {
    FUN_02a3e6b8(*(undefined8 *)(lVar24 + 0x18),0x56,(ulong)bVar9,uVar13,uVar14);
  }
  FUN_0297b304(*(undefined8 *)(param_1 + 0x38),lVar25,uVar13);
  FUN_02967e64(*(undefined8 *)(param_1 + 0x38),uVar13,local_19c,uVar17,iVar20,lVar25,&local_108);
  uVar16 = (uint)uVar28 | (uint)uVar26;
  lVar18 = *(long *)(*(long *)(param_1 + 0x60) + 0x1aa0);
  cVar8 = FUN_02a04a84(lVar18,lVar25,&local_108,(uVar16 & 7) != 0,plVar29 + 5);
  if (cVar8 != '\0') {
    local_d8 = (uint *)CONCAT44(CONCAT31(local_d8._5_3_,cVar8),local_108);
    local_e0 = lVar25;
    FUN_02a07c58(*(undefined8 *)(*(long *)(lVar18 + 0x60) + 0x1b80),local_130,&local_e0);
    uVar17 = 0;
    *(undefined8 *)(param_2 + 8) = local_f0;
    *(undefined8 *)(param_2 + 10) = local_e8;
    *(undefined8 *)(param_2 + 4) = local_100;
    *(ulong *)(param_2 + 6) = CONCAT44(uStack_f4,local_f8);
    *(ulong *)(param_2 + 2) = CONCAT44(uStack_104,local_108);
    *(byte *)(param_2 + 0xc) = bVar10;
    *(undefined2 *)(param_2 + 1) = 0;
    goto LAB_02a02d20;
  }
  FUN_02a057c8(lVar18,lVar25,&local_108);
  uVar15 = FUN_0298c290(*(undefined8 *)(param_1 + 0x38),lVar25,local_19c,bVar10,&local_198);
  bVar9 = local_194;
  uVar7 = local_198;
  if ((uVar15 & 1) == 0) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9b,
                 *(undefined1 *)(lVar25 + 0x7d),0,local_19c & 0xffff,bVar10,0);
    FUN_02967e64(*(undefined8 *)(param_1 + 0x38),local_19c,local_19c,uVar17,iVar20,lVar25,local_130)
    ;
    local_c8 = SUB87(&local_190,0);
    uStack_c1 = (undefined1)((ulong)&local_190 >> 0x38);
    local_d0 = CONCAT62(local_d0._2_6_,uVar6);
    local_e0 = lVar25;
    local_d8 = (uint *)local_130;
    FUN_029efacc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x16a0),&local_90,&local_e0);
    bVar9 = FUN_02a030dc(param_1,lVar25,local_19c,uVar17,&local_190);
    local_d8._0_5_ = CONCAT14(0x25,local_19c);
    local_e0 = lVar25;
    FUN_02a07c58(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1b80),&local_90,&local_e0);
    *(undefined8 *)(param_2 + 8) = local_f0;
    *(undefined8 *)(param_2 + 10) = local_e8;
    *(undefined8 *)(param_2 + 4) = local_100;
    *(ulong *)(param_2 + 6) = CONCAT44(uStack_f4,local_f8);
    *(ulong *)(param_2 + 2) = CONCAT44(uStack_104,local_108);
    *(byte *)(param_2 + 0xc) = bVar10;
    *(byte *)((long)param_2 + 5) = bVar9 & 1;
  }
  else {
    if (local_198 == 0) {
      FUN_02967e64(*(undefined8 *)(param_1 + 0x38),local_19c,local_19c,uVar17,iVar20,lVar25,
                   local_130);
      FUN_02967e64(*(undefined8 *)(param_1 + 0x38),uVar13,local_19c,uVar17,iVar20,lVar25,&local_108)
      ;
    }
    else {
      if (local_194 == 6) {
LAB_02a025d8:
        uVar11 = 0x1f;
      }
      else {
        puVar27 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
        FUN_02947b84(*puVar27,local_194,&local_e0,local_130);
        local_e0 = local_e0 & 0xff;
        if (((local_e0 == 5) || (*(byte *)(puVar27 + local_e0 * 7 + 7) <= local_130[0])) ||
           (puVar27[local_e0 * 7 + (ulong)local_130[0] + 1] == 0)) goto LAB_02a025d8;
        uVar11 = *(undefined1 *)(puVar27[local_e0 * 7 + (ulong)local_130[0] + 1] + 0x7d);
      }
      lVar24 = *(long *)(param_1 + 0x20);
      bVar4 = *(byte *)(lVar25 + 0x7d);
      lVar18 = *(long *)(lVar24 + 0x20);
      uVar15 = FUN_02a17630(*(undefined8 *)(lVar18 + 0x18),
                            *(undefined8 *)
                             (*(long *)(*(long *)(lVar18 + 0x10) + 8) + (ulong)bVar4 * 8 + 0x120),
                            uVar7,uVar14);
      if ((uVar15 & 1) != 0) {
        FUN_02a3e6b8(*(undefined8 *)(lVar24 + 0x18),0x56,(ulong)bVar4,uVar7,uVar14);
      }
      lVar18 = (&DAT_0428af30)[(ulong)local_19c * 6];
      if (lVar18 == 0) {
        plVar19 = &DAT_0428af30;
      }
      else {
        plVar19 = &DAT_0428af30;
        if (*(char *)(lVar18 + 0x1e1) != '\0') {
          plVar19 = &DAT_0428af30 + (ulong)local_19c * 6;
        }
      }
      piVar2 = (int *)((long)*(uint **)(*plVar19 + 0x250) + (ulong)**(uint **)(*plVar19 + 0x250));
      uVar14 = (uint)bVar10;
      if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2f) ||
          (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17], uVar15 == 0)) ||
         (uVar14 != 6)) {
        uVar13 = uVar14;
      }
      else {
        uVar13 = 6;
        if (*(char *)((long)piVar2 + uVar15) == '\x03') {
          uVar3 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x110);
          uVar5 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55);
          uVar12 = FUN_0294dd9c(uVar3,uVar5,2,0);
          uVar13 = FUN_0294e104(uVar3,uVar5,uVar12,0);
        }
      }
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9b,
                   *(undefined1 *)(lVar25 + 0x7d),0,local_19c & 0xffff,uVar14,0);
      FUN_02a3c070(*(undefined8 *)(param_1 + 0x20),lVar25,local_19c,uVar13,uStack_f4);
      FUN_02967e64(*(undefined8 *)(param_1 + 0x38),local_19c,local_19c,uVar17,iVar20,lVar25,
                   local_130);
      FUN_02967e64(*(undefined8 *)(param_1 + 0x38),uVar7,local_19c,uVar17,iVar20,lVar25,&local_108);
      plVar19 = &DAT_0428af30 + (ulong)local_108 * 6;
      lVar18 = *plVar19;
      if (lVar18 == 0) {
        plVar23 = &DAT_0428af30;
      }
      else {
        plVar23 = &DAT_0428af30;
        if (*(char *)(lVar18 + 0x1e1) != '\0') {
          plVar23 = plVar19;
        }
      }
      piVar2 = (int *)((long)*(uint **)(*plVar23 + 0x250) + (ulong)**(uint **)(*plVar23 + 0x250));
      if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
          (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar15 == 0)) ||
         (*(char *)((long)piVar2 + uVar15) == '\0')) {
        uVar11 = 0x25;
LAB_02a029e8:
        local_d8._0_5_ = CONCAT14(uVar11,local_108);
        local_e0 = lVar25;
        FUN_02a07c58(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1b80),&local_90,&local_e0);
        bVar10 = FUN_02a030dc(param_1,lVar25,local_19c,uVar17,&local_190);
        *(ulong *)(param_2 + 2) = CONCAT44(uStack_104,local_108);
        *(undefined8 *)(param_2 + 4) = local_100;
        *(undefined8 *)(param_2 + 8) = local_f0;
        *(undefined8 *)(param_2 + 10) = local_e8;
        *(ulong *)(param_2 + 6) = CONCAT44(uStack_f4,local_f8);
        *(byte *)((long)param_2 + 5) = bVar10 & 1;
        *(byte *)(param_2 + 0xc) = bVar9;
        goto LAB_02a02d1c;
      }
      if ((*(byte *)(lVar25 + 0x118) & 7) != 0) {
        plVar23 = &DAT_0428af30;
        if ((lVar18 != 0) && (plVar23 = &DAT_0428af30, *(char *)(lVar18 + 0x1e1) != '\0')) {
          plVar23 = plVar19;
        }
        piVar2 = (int *)((long)*(uint **)(*plVar23 + 0x250) + (ulong)**(uint **)(*plVar23 + 0x250));
        if (((0x62 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
            (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x31], uVar15 != 0)) &&
           (*(char *)((long)piVar2 + uVar15) != '\0')) {
          uVar11 = 0xe;
          goto LAB_02a029e8;
        }
      }
      if ((*(byte *)(lVar25 + 0x160) & 7) != 0) {
        plVar23 = &DAT_0428af30;
        if ((lVar18 != 0) && (plVar23 = &DAT_0428af30, *(char *)(lVar18 + 0x1e1) != '\0')) {
          plVar23 = plVar19;
        }
        piVar2 = (int *)((long)*(uint **)(*plVar23 + 0x250) + (ulong)**(uint **)(*plVar23 + 0x250));
        if (((0x5a < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
            (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x2d], uVar15 != 0)) &&
           (*(char *)((long)piVar2 + uVar15) != '\0')) {
          uVar11 = 0x22;
          goto LAB_02a029e8;
        }
      }
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x1b0) != 0) {
        plVar23 = &DAT_0428af30;
        if ((lVar18 != 0) && (plVar23 = &DAT_0428af30, *(char *)(lVar18 + 0x1e1) != '\0')) {
          plVar23 = plVar19;
        }
        piVar2 = (int *)((long)*(uint **)(*plVar23 + 0x250) + (ulong)**(uint **)(*plVar23 + 0x250));
        if (((0x5c < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
            (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x2e], uVar15 != 0)) &&
           (*(char *)((long)piVar2 + uVar15) != '\0')) {
          uVar11 = 0x15;
          goto LAB_02a029e8;
        }
      }
      if (*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x106c) != '\0') {
        plVar23 = &DAT_0428af30;
        if ((lVar18 != 0) && (plVar23 = &DAT_0428af30, *(char *)(lVar18 + 0x1e1) != '\0')) {
          plVar23 = plVar19;
        }
        piVar2 = (int *)((long)*(uint **)(*plVar23 + 0x250) + (ulong)**(uint **)(*plVar23 + 0x250));
        if (((0x66 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
            (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x33], uVar15 != 0)) &&
           (*(char *)((long)piVar2 + uVar15) != '\0')) {
          uVar11 = 0x1b;
          goto LAB_02a029e8;
        }
      }
      uVar13 = uVar7;
      bVar10 = bVar9;
    }
    local_d8 = &local_108;
    puVar1 = param_2 + 0xe;
    local_c8 = SUB87(puVar1,0);
    uStack_c1 = (undefined1)((ulong)puVar1 >> 0x38);
    local_d0._0_2_ = CONCAT11(uVar11,bVar10);
    local_e0 = lVar25;
    FUN_029efacc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x16a0),&local_90,&local_e0);
    FUN_02968b58(*(undefined8 *)(param_1 + 0x38),uVar13,local_19c,iVar20,lVar25,puVar1,&local_108);
    if (((uVar16 & 7) == 0) && ((*(byte *)((long)plVar29 + 0x2c) >> 3 & 1) == 0)) {
      bVar9 = FUN_02a030dc(param_1,lVar25,local_19c,uVar17,puVar1);
      bVar9 = bVar9 & 1;
    }
    else {
      bVar9 = 0;
    }
    FUN_0297a40c(*(undefined8 *)(param_1 + 0x38),lVar25,local_130,&local_108);
    FUN_0297a044(*(undefined8 *)(param_1 + 0x38),lVar25,&local_108);
    lVar18 = *(long *)(param_1 + 0x10);
    uVar11 = *(undefined1 *)(lVar25 + 0x7d);
    lVar24 = *(long *)(param_1 + 0x20);
    uVar15 = FUN_029cddec(*(undefined8 *)(param_1 + 8),lVar18);
    if (((uVar15 & 1) == 0) &&
       (uVar14 = FUN_02957720(*(undefined8 *)(lVar18 + 0x188),6,uVar11,uVar13,0), -1 < (int)uVar14))
    {
      uVar14 = uVar14 & 0xff;
      if (uVar14 < 10) {
        *(undefined1 *)
         (*(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0x10) + 0x188) + (ulong)uVar14 + 0x10) = 1;
      }
      FUN_02a3e6b8(*(undefined8 *)(lVar24 + 0x18),0x6d,(ulong)uVar14,6);
    }
    local_70 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uVar15 = FUN_0298d618(*(undefined8 *)(param_1 + 0x38),lVar25,local_19c,uVar13,&local_90);
    if ((uVar15 & 1) == 0) {
      lVar18 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      puVar21 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
      bVar4 = *(byte *)(lVar18 + 0x1c8);
      uVar14 = *puVar21;
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = 0;
      uStack_ba = 0;
      uStack_b9 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      uStack_c1 = 0;
      local_e0 = 0;
      local_d8 = (uint *)0x0;
      FUN_02a3e7b8(puVar21,0x9b,0x35,&local_e0);
      uVar16 = *puVar21;
      iVar20 = (int)((ulong)uVar14 & 0xffff);
      *(undefined1 *)((long)puVar21 + ((ulong)uVar14 & 0xffff) + 8) = 0;
      *(undefined1 *)((long)puVar21 + (ulong)(iVar20 + 1) + 8) = 0xab;
      *(char *)((long)puVar21 + (ulong)(iVar20 + 2) + 8) = (char)(uVar16 - uVar14) + -3;
      *puVar21 = iVar20 + (uVar16 - uVar14 & 0xff);
      *(short *)(lVar18 + (ulong)bVar4 * 0x40 + 10) = (short)uVar14;
    }
    else {
      FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),&local_90);
    }
    lVar18 = *(long *)(param_1 + 0x60);
    if (local_108 == 0xa5) {
LAB_02a02b10:
      local_d8 = &local_108;
      local_e0 = lVar25;
      FUN_02a05db4(*(undefined8 *)(lVar18 + 0x1b00),&local_90,&local_e0);
      if ((char)local_90 == '\0') {
        lVar18 = *(long *)(param_1 + 0x10);
        *(ulong *)(lVar18 + 0x208) = CONCAT44(uStack_104,local_108);
        *(undefined8 *)(lVar18 + 0x228) = local_e8;
        *(undefined8 *)(lVar18 + 0x220) = local_f0;
        *(ulong *)(lVar18 + 0x218) = CONCAT44(uStack_f4,local_f8);
        *(undefined8 *)(lVar18 + 0x210) = local_100;
        if ((*(byte *)(lVar25 + 0x1b8) & 7) != 0) {
          local_c0 = 0;
          local_d0 = 0;
          local_c8 = 0;
          uStack_c1 = 0;
          local_98 = 0;
          local_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_e0 = CONCAT44(0x25,(undefined4)local_e0);
          local_e0 = CONCAT71(local_e0._1_7_,*(byte *)(lVar25 + 0x7d));
          local_d8 = (uint *)(ulong)*(byte *)(lVar25 + 0x7d);
          uStack_ba = 1;
          local_b8 = 0x1000000;
          FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),&local_90,&local_e0);
          *(byte *)(lVar25 + 0x385) = *(byte *)(lVar25 + 0x385) | 0x40;
        }
        lVar18 = *(long *)(param_1 + 0x60);
        if (local_108 != 0xa5) {
          lVar18 = *(long *)(lVar18 + 0x1ae0);
          cVar8 = FUN_0298023c(*(undefined8 *)(lVar18 + 0x38),lVar25,local_108,0x22,&local_108,
                               puVar1);
          if (cVar8 != '\0') goto LAB_02a02cd4;
          lVar18 = *(long *)(param_1 + 0x60);
        }
        local_d8 = &local_108;
        local_d0 = CONCAT71(local_d0._1_7_,bVar10);
        local_90 = local_90 & 0xffffffffffff0000;
        local_e0 = lVar25;
        FUN_02a06fb0(*(undefined8 *)(lVar18 + 0x1b60),&local_90,&local_e0);
        *(undefined1 *)(param_2 + 1) = local_90._1_1_;
        if ((char)local_90 != '\0') {
          *(ulong *)(param_2 + 2) = CONCAT44(uStack_104,local_108);
          *(undefined8 *)(param_2 + 4) = local_100;
          *(ulong *)(param_2 + 6) = CONCAT44(uStack_f4,local_f8);
          *(undefined8 *)(param_2 + 8) = local_f0;
          *(undefined8 *)(param_2 + 10) = local_e8;
          *(byte *)(param_2 + 0xc) = bVar10;
          *(byte *)((long)param_2 + 5) = bVar9;
          uVar17 = 2;
          goto LAB_02a02d20;
        }
        local_d8._0_5_ = CONCAT14(bVar10,uVar13);
        local_e0 = lVar25;
        FUN_02a06b70(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1b40),&local_90,&local_e0);
        if ((char)local_90 != '\0') {
          *(ulong *)(param_2 + 2) = CONCAT44(uStack_104,local_108);
          *(undefined8 *)(param_2 + 4) = local_100;
          *(byte *)(param_2 + 0xc) = bVar10;
          *(undefined8 *)(param_2 + 8) = local_f0;
          *(undefined8 *)(param_2 + 10) = local_e8;
          *(ulong *)(param_2 + 6) = CONCAT44(uStack_f4,local_f8);
          *(byte *)((long)param_2 + 5) = bVar9;
          *(undefined1 *)(param_2 + 1) = 0;
          uVar17 = 3;
          goto LAB_02a02d20;
        }
        puVar21 = *(uint **)(*(long *)(param_1 + 0x10) + 0xe8);
        uVar16 = *puVar21;
        uVar11 = *(undefined1 *)(lVar25 + 0x7d);
        puVar21[(ulong)uVar16 * 3 + 1] =
             (uint)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1c8) + 8);
        puVar21[(ulong)uVar16 * 3 + 2] = uVar13;
        uVar14 = 0;
        if (uVar16 + 1 < 400) {
          uVar14 = uVar16 + 1;
        }
        *(undefined1 *)(puVar21 + (ulong)uVar16 * 3 + 3) = uVar11;
        *(undefined1 *)((long)puVar21 + (ulong)uVar16 * 0xc + 0xd) = 0;
        *puVar21 = uVar14;
        FUN_0297a838(*(undefined8 *)(param_1 + 0x38),lVar25,&local_108,0x25);
        local_e0 = CONCAT71(local_e0._1_7_,0x1f);
        local_90 = CONCAT71(local_90._1_7_,0x1f);
        FUN_0297c204(*(undefined8 *)(param_1 + 0x38),lVar25,uVar13,puVar1,&local_e0,&local_90);
        if ((char)local_e0 == '\x1f') {
          *(undefined8 *)(param_2 + 8) = local_f0;
          *(undefined8 *)(param_2 + 10) = local_e8;
          *(undefined8 *)(param_2 + 4) = local_100;
          *(ulong *)(param_2 + 6) = CONCAT44(uStack_f4,local_f8);
          *(byte *)(param_2 + 0xc) = bVar10;
          *(ulong *)(param_2 + 2) = CONCAT44(uStack_104,local_108);
          *(byte *)((long)param_2 + 5) = bVar9;
          uVar17 = 1;
          *(undefined1 *)(param_2 + 1) = 1;
          goto LAB_02a02d20;
        }
        if ((char)local_90 == '\x1f') {
LAB_02a02fd8:
          uVar11 = 6;
        }
        else {
          pcVar22 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
          if ((*pcVar22 == '\0') || (pcVar22[2] != (char)local_90)) {
            if ((pcVar22[3] == '\0') || (pcVar22[5] != (char)local_90)) {
              if ((pcVar22[6] == '\0') || (pcVar22[8] != (char)local_90)) {
                if ((pcVar22[9] == '\0') || (pcVar22[0xb] != (char)local_90)) {
                  if ((pcVar22[0xc] == '\0') || (pcVar22[0xe] != (char)local_90)) {
                    if ((pcVar22[0xf] == '\0') || (pcVar22[0x11] != (char)local_90))
                    goto LAB_02a02fd8;
                    uVar11 = 5;
                  }
                  else {
                    uVar11 = 4;
                  }
                }
                else {
                  uVar11 = 3;
                }
              }
              else {
                uVar11 = 2;
              }
            }
            else {
              uVar11 = 1;
            }
          }
          else {
            uVar11 = 0;
          }
        }
        *(char *)((long)param_2 + 0x99) = (char)local_e0;
        *(undefined1 *)((long)param_2 + 0x9f) = uVar11;
        *(undefined1 *)(param_2 + 0x26) = 1;
        *(undefined8 *)(param_2 + 8) = local_f0;
        *(undefined8 *)(param_2 + 10) = local_e8;
        *(undefined8 *)(param_2 + 4) = local_100;
        *(ulong *)(param_2 + 6) = CONCAT44(uStack_f4,local_f8);
        *(byte *)(param_2 + 0xc) = bVar10;
        *(ulong *)(param_2 + 2) = CONCAT44(uStack_104,local_108);
        *(byte *)((long)param_2 + 5) = bVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        uVar17 = 4;
        goto LAB_02a02d20;
      }
      *(ulong *)(param_2 + 2) = CONCAT44(uStack_104,local_108);
      *(undefined8 *)(param_2 + 4) = local_100;
      *(ulong *)(param_2 + 6) = CONCAT44(uStack_f4,local_f8);
      *(undefined8 *)(param_2 + 8) = local_f0;
      *(undefined8 *)(param_2 + 10) = local_e8;
    }
    else {
      lVar18 = *(long *)(lVar18 + 0x1ac0);
      cVar8 = FUN_0298023c(*(undefined8 *)(lVar18 + 0x38),lVar25,local_108,0x21,&local_108,puVar1);
      if (cVar8 == '\0') {
        lVar18 = *(long *)(param_1 + 0x60);
        goto LAB_02a02b10;
      }
LAB_02a02cd4:
      local_d8 = (uint *)CONCAT44(CONCAT31(local_d8._5_3_,cVar8),local_108);
      local_e0 = lVar25;
      FUN_02a07c58(*(undefined8 *)(*(long *)(lVar18 + 0x60) + 0x1b80),&local_90,&local_e0);
      *(undefined8 *)(param_2 + 8) = local_f0;
      *(undefined8 *)(param_2 + 10) = local_e8;
      *(undefined8 *)(param_2 + 4) = local_100;
      *(ulong *)(param_2 + 6) = CONCAT44(uStack_f4,local_f8);
      *(ulong *)(param_2 + 2) = CONCAT44(uStack_104,local_108);
    }
    *(byte *)(param_2 + 0xc) = bVar10;
    *(byte *)((long)param_2 + 5) = bVar9;
  }
LAB_02a02d1c:
  uVar17 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
LAB_02a02d20:
  *param_2 = uVar17;
  return;
}


