/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00874c48; name: FUN_00874c48
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00874c48(long *param_1,int param_2,long param_3,ulong param_4,ulong param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined1 auVar6 [8];
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  size_t sVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  char *pcVar17;
  void *pvVar18;
  undefined *puVar19;
  long lVar20;
  bool bVar21;
  long lVar22;
  undefined8 *local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  ulong local_268;
  size_t sStack_260;
  void *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  int local_228 [4];
  undefined8 local_218;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined *local_1d0;
  undefined2 local_1c8;
  undefined8 *local_188;
  undefined1 *local_180;
  char *local_178;
  undefined1 local_170 [8];
  undefined1 *local_168;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined *local_150;
  undefined1 local_148;
  undefined2 local_147;
  undefined1 local_145 [197];
  byte local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 local_70;
  undefined1 local_68;
  
  if ((int)param_1[0xf7] == 5) {
    return;
  }
  uVar9 = FUN_007e4430(param_1[0xde] + 0x498);
  if ((uVar9 & 1) == 0) {
    return;
  }
  lVar14 = param_1[0xf9];
  lVar22 = param_1[0xf8];
  local_170 = (undefined1  [8])(PTR_DAT_043777e0 + 0x10);
  local_150 = PTR_DAT_043777e0 + 0x68;
  local_168 = &local_148;
  uStack_160 = 0xc0;
  local_148 = 0;
  lVar20 = 0;
  puVar12 = (undefined8 *)local_170;
  do {
    *(undefined2 *)((long)puVar12 + 0x29) = 0;
    lVar15 = lVar20 + 4;
    *(undefined1 *)((long)puVar12 + 0x2b) = 0;
    puVar12 = (undefined8 *)((long)local_170 + lVar15);
    local_145[lVar20 + 1] = 0;
    lVar20 = lVar15;
  } while (lVar15 != 0xc0);
  local_15c = 0;
  uStack_158 = 0;
  FUN_007e37e0(param_3,local_170);
  puVar19 = PTR_LAB_04373088;
  local_188 = (undefined8 *)0x0;
  local_180 = (undefined1 *)0x0;
  local_178 = (char *)0x0;
LAB_00874d34:
  FUN_0060b930(local_170,0xc);
  if (((ulong)local_188 & 1) != 0) {
    *local_178 = '\0';
    local_180 = (undefined1 *)0x0;
    if (((ulong)local_188 & 1) != 0) {
      FUN_002e2ea0(puVar19,local_178);
    }
  }
  lVar20 = 0;
  local_178 = (char *)CONCAT44(local_15c,uStack_160);
  bVar21 = false;
  lVar15 = param_1[0x10c];
  local_188 = (undefined8 *)local_170;
  local_180 = local_168;
  do {
    if (lVar15 != 0) {
      bVar3 = *(byte *)(param_1 + lVar20 * 0x16 + 0x117);
      puVar16 = (undefined1 *)(ulong)(bVar3 >> 1);
      puVar1 = puVar16;
      if ((bVar3 & 1) != 0) {
        puVar1 = (undefined1 *)param_1[lVar20 * 0x16 + 0x118];
      }
      puVar2 = (undefined1 *)((ulong)local_188 >> 1 & 0x7f);
      if (((ulong)local_188 & 1) != 0) {
        puVar2 = local_180;
      }
      if (puVar1 == puVar2) {
        pvVar18 = (void *)param_1[lVar20 * 0x16 + 0x119];
        if ((bVar3 & 1) == 0) {
          pvVar18 = (void *)((long)param_1 + lVar20 * 0xb0 + 0x8b9);
        }
        pcVar10 = (char *)((ulong)&local_188 | 1);
        if (((ulong)local_188 & 1) != 0) {
          pcVar10 = local_178;
        }
        if ((bVar3 & 1) == 0) {
          if (puVar1 != (undefined1 *)0x0) {
            pcVar17 = (char *)((long)param_1 + lVar20 * 0xb0 + 0x8b9);
            do {
              if (*pcVar17 != *pcVar10) goto LAB_00874e4c;
              puVar16 = puVar16 + -1;
              pcVar17 = pcVar17 + 1;
              pcVar10 = pcVar10 + 1;
            } while (puVar16 != (undefined1 *)0x0);
          }
        }
        else if ((puVar1 != (undefined1 *)0x0) &&
                (iVar8 = memcmp(pvVar18,pcVar10,(size_t)puVar1), iVar8 != 0)) goto LAB_00874e4c;
        bVar21 = true;
      }
LAB_00874e4c:
      bVar3 = *(byte *)(param_1 + lVar20 * 0x16 + 0x11a);
      puVar16 = (undefined1 *)(ulong)(bVar3 >> 1);
      puVar1 = puVar16;
      if ((bVar3 & 1) != 0) {
        puVar1 = (undefined1 *)param_1[lVar20 * 0x16 + 0x11b];
      }
      puVar2 = (undefined1 *)((ulong)local_188 >> 1 & 0x7f);
      if (((ulong)local_188 & 1) != 0) {
        puVar2 = local_180;
      }
      if (puVar1 == puVar2) {
        pvVar18 = (void *)param_1[lVar20 * 0x16 + 0x11c];
        if ((bVar3 & 1) == 0) {
          pvVar18 = (void *)((long)param_1 + lVar20 * 0xb0 + 0x8d1);
        }
        pcVar10 = (char *)((ulong)&local_188 | 1);
        if (((ulong)local_188 & 1) != 0) {
          pcVar10 = local_178;
        }
        if ((bVar3 & 1) == 0) {
          if (puVar1 != (undefined1 *)0x0) {
            pcVar17 = (char *)((long)param_1 + lVar20 * 0xb0 + 0x8d1);
            do {
              if (*pcVar17 != *pcVar10) goto LAB_00874da0;
              puVar16 = puVar16 + -1;
              pcVar17 = pcVar17 + 1;
              pcVar10 = pcVar10 + 1;
            } while (puVar16 != (undefined1 *)0x0);
          }
        }
        else if ((puVar1 != (undefined1 *)0x0) &&
                (iVar8 = memcmp(pvVar18,pcVar10,(size_t)puVar1), iVar8 != 0)) goto LAB_00874da0;
        bVar21 = true;
      }
    }
LAB_00874da0:
    lVar20 = lVar20 + 1;
    if (lVar20 == 0x17) break;
    lVar15 = param_1[lVar20 * 0x16 + 0x10c];
  } while( true );
  if (!bVar21) goto LAB_00874ee0;
  goto LAB_00874d34;
LAB_00874ee0:
  FUN_0060bc00(&local_1d0);
  local_1d0 = PTR_DAT_043753a8 + 0x10;
  FUN_0060bd10(&local_1d0,&local_188);
  switch(param_2) {
  case 1:
    local_1c8 = 4;
    FUN_007ecf14(param_1 + 0x10a);
    FUN_008759f0(param_1 + 0x102,&local_188);
    puVar19 = PTR_DAT_043777e0;
    break;
  case 2:
    local_1c8 = 3;
    FUN_008759f0(param_1 + 0x102,&local_188);
    uVar9 = FUN_00874624(param_1,&local_1d0);
    if ((uVar9 & 1) != 0) {
      FUN_0060d200(local_170,0x19);
      local_1d8 = (undefined8 *)local_170;
      *(undefined4 *)((long)local_170 + 0xc) = 0x11000000;
      local_170 = (undefined1  [8])0x0;
      FUN_0060bd68(&local_1d0,&local_1d8);
      puVar12 = local_1d8;
      local_1d8 = (undefined8 *)0x0;
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12);
        FUN_002e2ea0(PTR_LAB_04373088,puVar12);
      }
      auVar6 = local_170;
      puVar19 = PTR_DAT_043777e0;
      local_170 = (undefined1  [8])0x0;
      if (auVar6 != (undefined1  [8])0x0) {
        (*(code *)**(undefined8 **)auVar6)(auVar6);
        FUN_002e2ea0(PTR_LAB_04373088,auVar6);
      }
      local_1e0 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
      if (local_1e0 != (undefined8 *)0x0) {
        FUN_0060de5c(local_1e0,0xd,*(undefined4 *)((long)param_1 + 0x5c));
      }
      FUN_0060bd68(&local_1d0,&local_1e0);
      puVar12 = local_1e0;
      local_1e0 = (undefined8 *)0x0;
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12);
        FUN_002e2ea0(PTR_LAB_04373088,puVar12);
      }
      plVar13 = param_1 + 0x109;
      goto LAB_00875740;
    }
    goto LAB_00875868;
  case 3:
    local_1c8 = 9;
    uVar9 = FUN_00874624(param_1,&local_1d0);
    if ((uVar9 & 1) == 0) goto LAB_00875868;
    FUN_008759f0(param_1 + (param_4 & 0xffff) * 0x16 + 0x117,&local_188);
    puVar19 = PTR_DAT_043777e0;
    local_170 = (undefined1  [8])(PTR_DAT_043777e0 + 0x10);
    local_150 = PTR_DAT_043777e0 + 0x68;
    local_168 = &local_148;
    uStack_160 = 0xc0;
    local_148 = 0;
    lVar14 = 0;
    puVar12 = (undefined8 *)local_170;
    do {
      *(undefined2 *)((long)puVar12 + 0x29) = 0;
      lVar20 = lVar14 + 4;
      *(undefined1 *)((long)puVar12 + 0x2b) = 0;
      puVar12 = (undefined8 *)((long)local_170 + lVar20);
      local_145[lVar14 + 1] = 0;
      lVar14 = lVar20;
    } while (lVar20 != 0xc0);
    local_15c = 0;
    uStack_158 = 0;
    FUN_007e3934(param_3,local_170);
    pcVar10 = (char *)FUN_007ec6e4(local_170);
    local_80 = 0;
    uStack_7f = 0;
    local_70 = (void *)0x0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    sVar11 = strlen(pcVar10);
    if (0xffffffffffffffef < sVar11) {
LAB_008759e8:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar11 < 0x17) {
      local_80 = (byte)((int)sVar11 << 1);
      pvVar18 = (void *)((ulong)&local_80 | 1);
      if (sVar11 != 0) goto LAB_0087560c;
    }
    else {
      uVar9 = sVar11 + 0x10 & 0xfffffffffffffff0;
      pvVar18 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
      local_80 = (byte)uVar9 | 1;
      uStack_7f = (undefined7)(uVar9 >> 8);
      uStack_78 = (undefined1)sVar11;
      uStack_77 = (undefined4)(sVar11 >> 8);
      uStack_73 = (undefined1)(sVar11 >> 0x28);
      uStack_72 = (undefined1)(sVar11 >> 0x30);
      uStack_71 = (undefined1)(sVar11 >> 0x38);
      local_70 = pvVar18;
LAB_0087560c:
      memcpy(pvVar18,pcVar10,sVar11);
    }
    *(undefined1 *)((long)pvVar18 + sVar11) = 0;
    FUN_00609e68(local_228,&local_80,*(undefined2 *)(param_3 + 0x18));
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    local_230 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x60);
    if (local_230 != (undefined8 *)0x0) {
      FUN_0060d7bc(local_230,0x12,local_228);
    }
    FUN_0060bd68(&local_1d0,&local_230);
    puVar12 = local_230;
    local_230 = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12);
      FUN_002e2ea0(PTR_LAB_04373088,puVar12);
    }
    if (((byte)local_228[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_218);
    }
    uVar4 = *(ushort *)(param_1 + (param_4 & 0xffff) * 0x16 + 0x116);
    local_238 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
    if (local_238 != (undefined8 *)0x0) {
      FUN_0060de5c(local_238,0xc,(ulong)uVar4 << 0x10);
    }
    FUN_0060bd68(&local_1d0,&local_238);
    puVar12 = local_238;
    local_238 = (undefined8 *)0x0;
    goto joined_r0x008759d8;
  case 4:
    local_1c8 = 9;
    uVar9 = FUN_00874624(param_1,&local_1d0);
    if ((uVar9 & 1) == 0) goto LAB_00875868;
    FUN_008759f0(param_1 + (param_4 & 0xffff) * 0x16 + 0x11a,&local_188);
    puVar19 = PTR_DAT_043777e0;
    local_170 = (undefined1  [8])(PTR_DAT_043777e0 + 0x10);
    local_150 = PTR_DAT_043777e0 + 0x68;
    local_168 = &local_148;
    uStack_160 = 0xc0;
    local_148 = 0;
    lVar14 = 0;
    puVar12 = (undefined8 *)local_170;
    do {
      *(undefined2 *)((long)puVar12 + 0x29) = 0;
      lVar20 = lVar14 + 4;
      *(undefined1 *)((long)puVar12 + 0x2b) = 0;
      puVar12 = (undefined8 *)((long)local_170 + lVar20);
      local_145[lVar14 + 1] = 0;
      lVar14 = lVar20;
    } while (lVar20 != 0xc0);
    local_15c = 0;
    uStack_158 = 0;
    FUN_007e3934(param_3,local_170);
    pcVar10 = (char *)FUN_007ec6e4(local_170);
    local_80 = 0;
    uStack_7f = 0;
    local_70 = (void *)0x0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    sVar11 = strlen(pcVar10);
    if (0xffffffffffffffef < sVar11) goto LAB_008759e8;
    if (sVar11 < 0x17) {
      local_80 = (byte)((int)sVar11 << 1);
      pvVar18 = (void *)((ulong)&local_80 | 1);
      if (sVar11 != 0) goto LAB_008758d4;
    }
    else {
      uVar9 = sVar11 + 0x10 & 0xfffffffffffffff0;
      pvVar18 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
      local_80 = (byte)uVar9 | 1;
      uStack_7f = (undefined7)(uVar9 >> 8);
      uStack_78 = (undefined1)sVar11;
      uStack_77 = (undefined4)(sVar11 >> 8);
      uStack_73 = (undefined1)(sVar11 >> 0x28);
      uStack_72 = (undefined1)(sVar11 >> 0x30);
      uStack_71 = (undefined1)(sVar11 >> 0x38);
      local_70 = pvVar18;
LAB_008758d4:
      memcpy(pvVar18,pcVar10,sVar11);
    }
    *(undefined1 *)((long)pvVar18 + sVar11) = 0;
    FUN_00609e68(local_228,&local_80,*(undefined2 *)(param_3 + 0x18));
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    local_240 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x60);
    if (local_240 != (undefined8 *)0x0) {
      FUN_0060d7bc(local_240,0x12,local_228);
    }
    FUN_0060bd68(&local_1d0,&local_240);
    puVar12 = local_240;
    local_240 = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12);
      FUN_002e2ea0(PTR_LAB_04373088,puVar12);
    }
    if (((byte)local_228[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_218);
    }
    uVar4 = *(ushort *)((long)param_1 + (param_4 & 0xffff) * 0xb0 + 0x8b2);
    local_248 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
    if (local_248 != (undefined8 *)0x0) {
      FUN_0060de5c(local_248,0xc,(ulong)uVar4 << 0x10);
    }
    FUN_0060bd68(&local_1d0,&local_248);
    puVar12 = local_248;
    local_248 = (undefined8 *)0x0;
joined_r0x008759d8:
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12);
      FUN_002e2ea0(PTR_LAB_04373088,puVar12);
    }
    plVar13 = param_1 + (param_4 & 0xffff) * 0x16 + 0x11f;
LAB_00875740:
    FUN_007ecf14(plVar13);
    break;
  case 5:
  case 6:
    local_1c8 = 4;
    uVar9 = FUN_00874624(param_1,&local_1d0);
    if ((uVar9 & 1) == 0) goto LAB_00875868;
    FUN_008759f0(param_1 + 0x105,&local_188);
    puVar12 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
    puVar19 = PTR_DAT_043777e0;
    if (param_2 == 5) {
      if (puVar12 != (undefined8 *)0x0) {
        FUN_0060de5c(puVar12,0xd,*(undefined4 *)((long)param_1 + 0x5c));
      }
      local_278 = puVar12;
      FUN_0060bd68(&local_1d0,&local_278);
      puVar12 = local_278;
      local_278 = (undefined8 *)0x0;
    }
    else {
      if (puVar12 != (undefined8 *)0x0) {
        FUN_0060de5c(puVar12,0xd,0);
      }
      local_280 = puVar12;
      FUN_0060bd68(&local_1d0,&local_280);
      puVar12 = local_280;
      local_280 = (undefined8 *)0x0;
      puVar19 = PTR_DAT_043777e0;
    }
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12);
      FUN_002e2ea0(PTR_LAB_04373088,puVar12);
    }
    break;
  default:
    local_168 = (undefined1 *)((ulong)local_168 & 0xffffffff00000000);
    local_170 = (undefined1  [8])0x1000;
    (**(code **)(*param_1 + 0x10))(param_1,local_170);
    FUN_0060eecc(&local_1d0);
    if (((ulong)local_188 & 1) == 0) {
      return;
    }
    goto LAB_00875878;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    local_80 = (byte)param_2;
    local_1c8 = 0x16;
    uStack_7f = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_73 = (undefined1)((ulong)lVar22 >> 0x38);
    uStack_72 = (undefined1)((ulong)lVar22 >> 0x30);
    uStack_71 = (undefined1)((ulong)lVar22 >> 0x28);
    local_70._0_4_ =
         CONCAT13((char)((ulong)lVar22 >> 8),
                  CONCAT12((char)((ulong)lVar22 >> 0x10),
                           CONCAT11((char)((ulong)lVar22 >> 0x18),(char)((ulong)lVar22 >> 0x20))));
    uVar7 = (undefined4)local_70;
    uVar5 = (undefined1)((param_5 & 0xffffffff) >> 8);
    local_70._0_7_ = (uint7)(byte)((ulong)lVar14 >> 8) << 0x28;
    local_70 = (void *)CONCAT17(uVar5,(int7)local_70);
    local_70._0_5_ = CONCAT14((char)lVar22,uVar7);
    local_70._0_7_ = CONCAT16((char)lVar14,(undefined6)local_70);
    local_70 = (void *)CONCAT17(uVar5,(int7)local_70);
    local_68 = (undefined1)(param_5 & 0xffffffff);
    local_170 = (undefined1  [8])((ulong)local_170 & 0xffffffff00000000);
    local_268 = local_268 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_170 | 4),(Result *)&local_268);
    FUN_007ee578(local_228,local_170);
    if (local_228[0] != 0) goto LAB_00875868;
    local_250 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    puVar19 = PTR_DAT_043777e0;
    if (local_250 != (undefined8 *)0x0) {
      FUN_0060e124(local_250,0x13,&local_80,0x19);
    }
    FUN_0060bd68(&local_1d0,&local_250);
    puVar12 = local_250;
    local_250 = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12);
      FUN_002e2ea0(PTR_LAB_04373088,puVar12);
    }
    local_170 = (undefined1  [8])(puVar19 + 0x10);
    local_150 = puVar19 + 0x68;
    local_168 = &local_148;
    uStack_160 = 0xc0;
    local_148 = 0;
    lVar14 = 0;
    puVar12 = (undefined8 *)local_170;
    do {
      *(undefined2 *)((long)puVar12 + 0x29) = 0;
      lVar20 = lVar14 + 4;
      *(undefined1 *)((long)puVar12 + 0x2b) = 0;
      puVar12 = (undefined8 *)((long)local_170 + lVar20);
      local_145[lVar14 + 1] = 0;
      lVar14 = lVar20;
    } while (lVar20 != 0xc0);
    local_15c = 0;
    uStack_158 = 0;
    FUN_007e3934(param_3,local_170);
    pcVar10 = (char *)FUN_007ec6e4(local_170);
    local_268 = 0;
    sStack_260 = 0;
    local_258 = (void *)0x0;
    sVar11 = strlen(pcVar10);
    if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar11 < 0x17) {
      local_268 = CONCAT71(local_268._1_7_,(char)((int)sVar11 << 1));
      pvVar18 = (void *)((ulong)&local_268 | 1);
      if (sVar11 != 0) goto LAB_008754c8;
    }
    else {
      uVar9 = sVar11 + 0x10 & 0xfffffffffffffff0;
      pvVar18 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
      local_268 = uVar9 | 1;
      sStack_260 = sVar11;
      local_258 = pvVar18;
LAB_008754c8:
      memcpy(pvVar18,pcVar10,sVar11);
    }
    *(undefined1 *)((long)pvVar18 + sVar11) = 0;
    FUN_00609e68(local_228,&local_268,*(undefined2 *)(param_3 + 0x18));
    if ((local_268 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_258);
    }
    local_270 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x60);
    if (local_270 != (undefined8 *)0x0) {
      FUN_0060d7bc(local_270,0x12,local_228);
    }
    FUN_0060bd68(&local_1d0,&local_270);
    puVar12 = local_270;
    local_270 = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12);
      FUN_002e2ea0(PTR_LAB_04373088,puVar12);
    }
    if (((byte)local_228[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_218);
    }
  }
  lVar14 = FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (lVar14 != 0) {
    FUN_0060b534(lVar14,0,0x5dc);
  }
  uVar9 = FUN_0060c548(&local_1d0,lVar14);
  if ((uVar9 & 1) == 0) {
    local_168 = (undefined1 *)((ulong)local_168 & 0xffffffff00000000);
    local_170 = (undefined1  [8])0x1000;
    (**(code **)(*param_1 + 0x10))(param_1,local_170);
  }
  else {
    FUN_007ebf54(local_228,param_1[0xdd],*(undefined8 *)(lVar14 + 0x18),*(undefined4 *)(lVar14 + 8),
                 param_1[0xde] + 0x498,&local_268);
    local_170 = (undefined1  [8])(puVar19 + 0x10);
    local_150 = puVar19 + 0x68;
    local_168 = &local_148;
    uStack_160 = 0xc0;
    local_148 = 0;
    lVar20 = 0;
    puVar12 = (undefined8 *)local_170;
    do {
      *(undefined2 *)((long)puVar12 + 0x29) = 0;
      lVar22 = lVar20 + 4;
      *(undefined1 *)((long)puVar12 + 0x2b) = 0;
      puVar12 = (undefined8 *)((long)local_170 + lVar22);
      local_145[lVar20 + 1] = 0;
      lVar20 = lVar22;
    } while (lVar22 != 0xc0);
    local_15c = 0;
    uStack_158 = 0;
    FUN_007e37e0(param_1[0xde] + 0x498,local_170);
  }
  if (lVar14 != 0) {
    lVar20 = *(long *)(lVar14 + 0x18);
    *(undefined8 *)(lVar14 + 0x18) = 0;
    if (lVar20 != 0) {
      FUN_002e2f10(lVar20);
      FUN_002e2ef0(PTR_LAB_04373088,lVar20);
    }
    FUN_002e2ea0(PTR_LAB_04373088,lVar14);
  }
LAB_00875868:
  FUN_0060eecc(&local_1d0);
  if (((ulong)local_188 & 1) != 0) {
LAB_00875878:
    FUN_002e2ea0(PTR_LAB_04373088,local_178);
  }
  return;
}


