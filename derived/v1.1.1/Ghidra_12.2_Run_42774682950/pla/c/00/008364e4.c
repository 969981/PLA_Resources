/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008364e4; name: FUN_008364e4
 */


void FUN_008364e4(long *param_1,undefined1 *param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  ulong uVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  char *pcVar22;
  undefined8 *puVar23;
  undefined1 *puVar25;
  undefined1 *puVar24;
  ushort uVar26;
  ulong uVar27;
  long local_348;
  long local_340;
  undefined1 auStack_338 [32];
  ulong local_318;
  undefined2 local_310;
  uint local_304;
  undefined8 local_300;
  undefined4 local_2f8 [8];
  undefined8 local_2d8;
  undefined2 local_2d0;
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [136];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [136];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [136];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  lVar16 = FUN_008473ec();
  if (lVar16 == 0) {
    return;
  }
  lVar16 = FUN_008473ec(param_1);
  lVar17 = FUN_00847388(param_1);
  if (lVar16 != lVar17) {
    return;
  }
  plVar1 = (long *)(*(long *)PTR_DAT_043773c0 + 0x10);
  iVar11 = FUN_0082b270(*(undefined8 *)PTR_DAT_04377550);
  if (iVar11 == 2) {
LAB_0083655c:
    local_300 = 0;
    FUN_007f0d08(local_2f8,param_4);
    local_2d8 = 0;
    local_2d0 = 0;
    uVar12 = FUN_008483b0(plVar1,0x98);
    FUN_00836cec(param_1,&local_300,5,0,0,0x98,uVar12);
    return;
  }
  bVar4 = param_2[1];
  bVar10 = FUN_00848164(plVar1);
  if (bVar4 != bVar10) {
    local_2f8[0] = 0;
    local_300 = 1;
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_300);
    return;
  }
  puVar24 = param_2;
  if (bVar4 != 0) {
    uVar26 = 0;
    puVar25 = param_2;
    do {
      puVar24 = puVar25 + 2;
      uVar3 = *puVar24;
      bVar10 = puVar25[3];
      uVar13 = FUN_008483b0(plVar1,uVar3);
      if ((uint)bVar10 != (uVar13 & 0xff)) {
        local_300 = 0;
        FUN_007f0d08(local_2f8,param_4);
        local_2d8 = 0;
        local_2d0 = 0;
        FUN_00836cec(param_1,&local_300,3,0,0,uVar3,uVar13);
        return;
      }
      uVar26 = uVar26 + 1;
      puVar25 = puVar24;
    } while (uVar26 < bVar4);
  }
  uVar18 = FUN_007e5f0c(param_1[0x18]);
  if ((uVar18 & 1) != 0) goto LAB_0083655c;
  uVar18 = *(ulong *)(puVar24 + 6);
  uVar13 = *(uint *)(puVar24 + 0xe);
  uVar3 = puVar24[0x12];
  cVar5 = puVar24[0x13];
  memcpy(auStack_80,puVar24 + 0x14,0x20);
  FUN_007f0ce0(auStack_a0);
  cVar6 = puVar24[0x34];
  FUN_007e3400(&local_300);
  if (cVar6 == '\x01') {
    FUN_007e4318(&local_340,&local_300,puVar24 + 0x35,0x12);
    lVar16 = 0x47;
  }
  else {
    FUN_007e4318(&local_340,&local_300,puVar24 + 0x35,6);
    lVar16 = 0x3b;
  }
  puVar2 = (ulong *)(puVar24 + lVar16);
  FUN_007f105c(auStack_a0,&local_300);
  FUN_007e34a4(&local_300);
  bVar4 = *(byte *)((long)puVar2 + 0xd);
  uVar8 = puVar2[1];
  bVar10 = *(byte *)((long)puVar2 + 0xc);
  uVar21 = (ulong)bVar10;
  uVar27 = *puVar2;
  FUN_007e8190(&local_300);
  FUN_007e8434(&local_300);
  memset(auStack_278,0,0x10);
  FUN_007e8190(auStack_268);
  FUN_007e8434(auStack_268);
  memset(auStack_1e0,0,0x10);
  FUN_007e8190(auStack_1d0);
  FUN_007e8434(auStack_1d0);
  memset(auStack_148,0,0x10);
  FUN_007e8190(auStack_138);
  FUN_007e8434(auStack_138);
  memset(auStack_b0,0,0x10);
  uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
  uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
  pcVar22 = (char *)((long)puVar2 + 0xe);
  if (uVar21 != 0) {
    puVar23 = &local_300;
    uVar19 = uVar21;
    do {
      FUN_00836fb4(&local_340,puVar23,pcVar22,((int)param_2 + param_3) - (int)pcVar22,&local_304);
      pcVar22 = pcVar22 + local_304;
      puVar23 = puVar23 + 0x13;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  lVar16 = *(long *)PTR_DAT_04377550 + 0x178;
  uVar19 = FUN_0083fd98(lVar16);
  if ((uVar19 != (uVar27 >> 0x20 | uVar27 << 0x20)) ||
     (uVar15 = ((uint)uVar8 & 0xff00ff00) >> 8 | ((uint)uVar8 & 0xff00ff) << 8,
     uVar14 = FUN_0083fda0(lVar16), (uVar15 >> 0x10 | uVar15 << 0x10) != (uVar14 & 0xffff)))
  goto LAB_00836944;
  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
  uVar27 = uVar18 >> 0x20 | uVar18 << 0x20;
  uVar18 = FUN_0083fd98(lVar16);
  if (uVar27 == uVar18) goto LAB_00836944;
  FUN_0083fd74(&local_340,lVar16);
  uVar18 = FUN_007f0f48(auStack_a0,&local_340);
  puVar9 = PTR_DAT_04377550;
  if ((uVar18 & 1) != 0) goto LAB_00836944;
  uVar18 = (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0x120))
                     (*(long **)(*(long *)PTR_DAT_04377550 + 0x18),auStack_a0);
  if ((uVar18 & 1) == 0) {
    local_340 = 0;
    FUN_007f0d08(auStack_338,param_4);
    local_318 = 0;
    local_310 = 0;
    uVar12 = FUN_008483b0(plVar1,0x98);
    uVar20 = 5;
LAB_00836934:
    uVar13 = 0;
  }
  else {
    uVar15 = FUN_0082b0c0(*(undefined8 *)puVar9,uVar27);
    if ((uint)*(ushort *)(*(long *)puVar9 + 8) < (uint)bVar4 + (uVar15 & 0xffff)) {
      local_340 = 0;
      FUN_007f0d08(auStack_338,param_4);
      local_318 = 0;
      local_310 = 0;
      uVar12 = FUN_008483b0(plVar1,0x98);
      uVar20 = 4;
      goto LAB_00836934;
    }
    if ((short)param_1[0xf2] == -1) {
LAB_00836b68:
      local_340 = 0;
      FUN_007f0d08(auStack_338,param_4);
      local_318 = 0;
      local_310 = 0;
      uVar12 = FUN_008483b0(plVar1,0x98);
      uVar20 = 9;
      goto LAB_00836934;
    }
    local_304 = 0;
    uVar18 = FUN_0082b2c0(auStack_80,&local_304);
    if ((uVar18 & 1) == 0) {
      local_340 = 0;
      FUN_007f0d08(auStack_338,param_4);
      uVar13 = local_304;
      local_318 = 0;
      local_310 = 0;
      uVar12 = FUN_008483b0(plVar1,0x98);
      uVar20 = 2;
    }
    else {
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      uVar15 = uVar13 >> 0x10 | uVar13 << 0x10;
      lVar17 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
      for (lVar16 = *(long *)(lVar17 + 0x20); lVar16 != lVar17 + 0x18;
          lVar16 = *(long *)(lVar16 + 8)) {
        if ((*(ulong *)(*(long *)(lVar16 + 0x10) + 0x30) != uVar27) &&
           ((uint)*(ushort *)(*(long *)(lVar16 + 0x10) + 0x38) == uVar13 >> 0x10))
        goto LAB_00836a54;
      }
      uVar18 = FUN_0083a4f4(param_1 + 0x10c,uVar15);
      if ((uVar18 & 1) == 0) {
        uVar18 = FUN_008370c0(param_1,uVar27,uVar15,auStack_a0);
        if ((uVar18 & 1) != 0) {
          uVar20 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
          local_348 = FUN_00826d78(uVar20,uVar27);
          if (local_348 == 0) {
            local_348 = FUN_008372b8(param_1,uVar27,uVar15,uVar3,cVar5 != '\0',auStack_a0,0,1,0);
            if (local_348 == 0) goto LAB_00836944;
            FUN_00825c28(local_348,auStack_80);
            *(undefined1 *)(local_348 + 0x360) = 0;
            if (bVar10 != 0) {
              puVar23 = &local_300;
              do {
                FUN_00825d80(local_348,puVar23);
                puVar23 = puVar23 + 0x13;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            *(byte *)(local_348 + 0x361) = bVar4;
            lVar16 = param_1[0xf2];
            *(short *)(param_1 + 0xf2) = (short)lVar16 + 1;
            *(short *)(local_348 + 0xf8) = (short)lVar16;
            if (param_1[0x26] == 0) {
              (**(code **)(*param_1 + 0x60))(param_1,local_348);
              goto LAB_00836c54;
            }
            FUN_0083ecd4(param_1[0x26],local_348);
            lVar16 = param_1[0x26];
          }
          else if ((*(char *)(local_348 + 0x90) == -3) || (*(char *)(local_348 + 0x91) == -3)) {
LAB_00836c54:
            lVar16 = param_1[0x26];
          }
          else {
            local_340 = local_348;
            FUN_007f0d08(auStack_338,local_348 + 8);
            local_318 = *(ulong *)(local_348 + 0x30);
            local_310 = *(undefined2 *)(local_348 + 0x38);
            uVar7 = *(undefined2 *)((long)param_1 + 0xdc);
            uVar12 = FUN_008483b0(plVar1,0x98);
            FUN_00836cec(param_1,&local_340,1,uVar7,0,0x98,uVar12);
            lVar16 = param_1[0x26];
          }
          if (lVar16 != 0) {
            lVar16 = FUN_0083e5a8(lVar16,pcVar22,param_2 + ((ulong)param_3 - (long)pcVar22),
                                  local_348);
            if (lVar16 == 0) goto LAB_00836944;
            FUN_0083e7f8(param_1[0x26],auStack_a0,pcVar22 + 2,pcVar22[1] + *pcVar22);
            if (param_1[0x26] != 0) {
              FUN_0083e2d4();
            }
          }
          if ((*(char *)(local_348 + 0x90) == -3) || (*(char *)(local_348 + 0x91) == -3)) {
            local_340 = 0;
            FUN_007f0d08(auStack_338,param_4);
            local_310 = (undefined2)(uVar13 >> 0x10);
            local_318 = uVar27;
            FUN_00837420(param_1,&local_340);
          }
          goto LAB_00836944;
        }
        goto LAB_00836b68;
      }
LAB_00836a54:
      local_340 = 0;
      FUN_007f0d08(auStack_338,param_4);
      uVar13 = local_304;
      local_318 = 0;
      local_310 = 0;
      uVar12 = FUN_008483b0(plVar1,0x98);
      uVar20 = 9;
    }
  }
  FUN_00836cec(param_1,&local_340,uVar20,0,uVar13,0x98,uVar12);
LAB_00836944:
  FUN_007e81d4(auStack_138);
  FUN_007e81d4(auStack_1d0);
  FUN_007e81d4(auStack_268);
  FUN_007e81d4(&local_300);
  return;
}


