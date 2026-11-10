/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003578f0; name: FUN_003578f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003578f0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,byte param_5)

{
  undefined8 **ppuVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 **ppuVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  size_t sVar11;
  ulong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  undefined *puVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  byte *__s2;
  ulong uVar22;
  void *__src;
  undefined *puVar23;
  undefined **ppuVar24;
  ulonglong *puVar25;
  undefined4 uVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  char *local_188;
  undefined4 local_180;
  undefined8 *local_158;
  undefined4 local_150;
  undefined *local_128;
  undefined4 local_120;
  undefined ***local_f8;
  uint local_f0;
  undefined1 auStack_ec [4];
  undefined8 local_e8;
  byte local_c8 [16];
  undefined8 local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  byte *local_a0;
  undefined **local_90;
  undefined8 uStack_88;
  undefined **local_80;
  
  puVar10 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x50);
  }
  uVar6 = FUN_00356fd4(param_1,puVar10[1],*(undefined8 *)(param_2 + 0x18));
  FUN_00350da4(param_1,*(undefined8 *)(param_2 + 0x18),uVar6,param_2);
  uVar7 = FUN_00340fec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar7;
  param_4[1] = uVar6;
  lVar15 = *(long *)(param_1 + 0x50);
  param_4[5] = lVar15;
  *(undefined4 *)((long)param_4 + 0x44) = *(undefined4 *)(param_2 + 0x48);
  *(byte *)((long)param_4 + 0x43) = param_5 & 1;
  cVar27 = *(char *)(param_2 + 0x50);
  *(char *)((long)param_4 + 0x41) = cVar27;
  if ((cVar27 != '\0') && (*(int *)(lVar15 + 0x3c) != 3)) {
    FUN_0034b2f0(&local_90,"The [proto3_optional=true] option may only be set on proto3fields, not "
                 ,uVar6);
                    /* try { // try from 003579b0 to 003579c7 has its CatchHandler @ 00358dfc */
    FUN_0034db00(param_1,uVar6,param_2,2,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
  }
  pbVar16 = *(byte **)(param_2 + 0x18);
  puStack_a8 = (undefined *)0x0;
  local_a0 = (byte *)0x0;
  local_b0 = (undefined *)0x0;
  if ((*pbVar16 & 1) == 0) {
    puStack_a8 = *(undefined **)(pbVar16 + 8);
    local_b0 = *(undefined **)pbVar16;
    local_a0 = *(byte **)(pbVar16 + 0x10);
    uVar18 = (ulong)local_b0 & 0xff;
    if (((ulong)local_b0 & 1) == 0) goto LAB_00357a10;
LAB_00357ab0:
    pbVar20 = local_a0 + (long)puStack_a8;
    pbVar16 = local_a0;
    if (local_a0 != pbVar20) goto LAB_00357a24;
  }
  else {
    puVar17 = *(undefined **)(pbVar16 + 8);
    if ((undefined *)0xffffffffffffffef < puVar17) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    __src = *(void **)(pbVar16 + 0x10);
    if (puVar17 < (undefined *)0x17) {
      local_b0 = (undefined *)(ulong)(byte)((int)puVar17 << 1);
      pbVar16 = (byte *)((ulong)&local_b0 | 1);
      if (puVar17 == (undefined *)0x0) {
        *pbVar16 = 0;
        uVar18 = 0;
        goto LAB_00357a10;
      }
    }
    else {
      pbVar16 = (byte *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(puVar17 + 0x10) & 0xfffffffffffffff0);
      local_b0 = (undefined *)((ulong)(puVar17 + 0x10) & 0xfffffffffffffff0 | 1);
      puStack_a8 = puVar17;
      local_a0 = pbVar16;
    }
    memcpy(pbVar16,__src,(size_t)puVar17);
    pbVar16[(long)puVar17] = 0;
    uVar18 = (ulong)local_b0 & 0xff;
    if (((ulong)local_b0 & 1) != 0) goto LAB_00357ab0;
LAB_00357a10:
    pbVar16 = (byte *)((ulong)&local_b0 | 1);
    pbVar20 = pbVar16 + (uVar18 >> 1);
    if (pbVar16 != pbVar20) {
LAB_00357a24:
      uVar18 = (long)pbVar20 - (long)pbVar16;
      if (uVar18 < 8) {
        bVar2 = *pbVar16;
        goto joined_r0x00357a40;
      }
      uVar21 = uVar18 & 0xfffffffffffffff8;
      pbVar19 = pbVar16 + uVar21;
      pbVar16 = pbVar16 + 3;
      uVar22 = uVar21;
      do {
        uVar6 = *(undefined8 *)(pbVar16 + -3);
        cVar27 = (char)((ulong)uVar6 >> 8);
        cVar28 = (char)((ulong)uVar6 >> 0x10);
        cVar29 = (char)((ulong)uVar6 >> 0x18);
        cVar30 = (char)((ulong)uVar6 >> 0x20);
        cVar31 = (char)((ulong)uVar6 >> 0x28);
        cVar32 = (char)((ulong)uVar6 >> 0x30);
        cVar33 = (char)((ulong)uVar6 >> 0x38);
        if ((byte)((char)uVar6 + 0xbfU) < 0x1a) {
          pbVar16[-3] = (char)uVar6 + 0x20;
        }
        if ((byte)(cVar27 + 0xbfU) < 0x1a) {
          pbVar16[-2] = cVar27 + 0x20;
        }
        if ((byte)(cVar28 + 0xbfU) < 0x1a) {
          pbVar16[-1] = cVar28 + 0x20;
        }
        if ((byte)(cVar29 + 0xbfU) < 0x1a) {
          *pbVar16 = cVar29 + 0x20;
        }
        if ((byte)(cVar30 + 0xbfU) < 0x1a) {
          pbVar16[1] = cVar30 + 0x20;
        }
        if ((byte)(cVar31 + 0xbfU) < 0x1a) {
          pbVar16[2] = cVar31 + 0x20;
        }
        if ((byte)(cVar32 + 0xbfU) < 0x1a) {
          pbVar16[3] = cVar32 + 0x20;
        }
        if ((byte)(cVar33 + 0xbfU) < 0x1a) {
          pbVar16[4] = cVar33 + 0x20;
        }
        uVar22 = uVar22 - 8;
        pbVar16 = pbVar16 + 8;
      } while (uVar22 != 0);
      if (uVar21 != uVar18) {
        do {
          while( true ) {
            bVar2 = *pbVar19;
            pbVar16 = pbVar19;
joined_r0x00357a40:
            if (bVar2 - 0x41 < 0x1a) break;
            pbVar19 = pbVar16 + 1;
            if (pbVar20 == pbVar19) goto LAB_00357be0;
          }
          pbVar19 = pbVar16 + 1;
          *pbVar16 = bVar2 + 0x20;
        } while (pbVar20 != pbVar19);
      }
LAB_00357be0:
      uVar18 = (ulong)local_b0 & 0xff;
    }
  }
  pbVar16 = *(byte **)(param_2 + 0x18);
  puVar3 = (undefined *)(uVar18 >> 1);
  puVar17 = puVar3;
  if ((uVar18 & 1) != 0) {
    puVar17 = puStack_a8;
  }
  bVar2 = *pbVar16;
  puVar23 = (undefined *)(ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    puVar23 = *(undefined **)(pbVar16 + 8);
  }
  if (puVar17 == puVar23) {
    pbVar20 = (byte *)((ulong)&local_b0 | 1);
    pbVar19 = pbVar20;
    if ((uVar18 & 1) != 0) {
      pbVar19 = local_a0;
    }
    __s2 = *(byte **)(pbVar16 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s2 = pbVar16 + 1;
    }
    if ((uVar18 & 1) == 0) {
      while (puVar17 != (undefined *)0x0) {
        if (*pbVar20 != *__s2) goto LAB_00357c6c;
        pbVar20 = pbVar20 + 1;
        __s2 = __s2 + 1;
        puVar3 = puVar3 + -1;
        puVar17 = puVar3;
      }
    }
    else if ((puVar17 != (undefined *)0x0) &&
            (iVar5 = memcmp(pbVar19,__s2,(size_t)puVar17), iVar5 != 0)) goto LAB_00357c6c;
    param_4[2] = *param_4;
  }
  else {
LAB_00357c6c:
    lVar15 = *(long *)(param_1 + 8);
    ppuVar8 = (undefined **)FUN_002e2e80(PTR_FUN_04373078,0x18);
    pbVar16 = local_a0;
    puVar17 = puStack_a8;
    if (ppuVar8 != (undefined **)0x0) {
      *ppuVar8 = (undefined *)0x0;
      ppuVar8[1] = (undefined *)0x0;
      ppuVar8[2] = (undefined *)0x0;
      if (((ulong)local_b0 & 1) == 0) {
        ppuVar8[2] = local_a0;
        ppuVar8[1] = puStack_a8;
        *ppuVar8 = local_b0;
      }
      else {
        if ((undefined *)0xffffffffffffffef < puStack_a8) {
                    /* try { // try from 00358cfc to 00358d03 has its CatchHandler @ 00358e60 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (puStack_a8 < (undefined *)0x17) {
          puVar23 = (undefined *)((long)ppuVar8 + 1);
          *(char *)ppuVar8 = (char)((int)puStack_a8 << 1);
          if (puStack_a8 != (undefined *)0x0) goto LAB_00357d58;
        }
        else {
          puVar3 = puStack_a8 + 0x10;
          puVar23 = (undefined *)FUN_002e2e80(PTR_FUN_04373078,(ulong)puVar3 & 0xfffffffffffffff0);
          *ppuVar8 = (undefined *)((ulong)puVar3 & 0xfffffffffffffff0 | 1);
          ppuVar8[1] = puVar17;
          ppuVar8[2] = puVar23;
LAB_00357d58:
          memcpy(puVar23,pbVar16,(size_t)puVar17);
        }
        puVar23[(long)puVar17] = 0;
      }
    }
                    /* try { // try from 00357d78 to 00357d7f has its CatchHandler @ 00358e60 */
    local_90 = ppuVar8;
    FUN_003410d8(lVar15 + 0xd0,&local_90);
    param_4[2] = ppuVar8;
    pbVar16 = *(byte **)(param_2 + 0x18);
  }
  lVar15 = *(long *)(param_1 + 8);
                    /* try { // try from 00357d8c to 00357d9b has its CatchHandler @ 00358e5c */
  FUN_00358e90(&local_90,pbVar16,1);
  pppuVar9 = (undefined ***)FUN_002e2e80(PTR_FUN_04373078,0x18);
  ppuVar8 = local_80;
  ppuVar4 = uStack_88;
  if (pppuVar9 != (undefined ***)0x0) {
    *pppuVar9 = (undefined **)0x0;
    pppuVar9[1] = (undefined **)0x0;
    pppuVar9[2] = (undefined **)0x0;
    if (((ulong)local_90 & 1) == 0) {
      pppuVar9[2] = local_80;
      pppuVar9[1] = (undefined **)uStack_88;
      *pppuVar9 = local_90;
    }
    else {
      if ((undefined8 **)0xffffffffffffffef < uStack_88) {
                    /* try { // try from 00358cf4 to 00358cfb has its CatchHandler @ 00358e34 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (&DAT_00000016 < uStack_88) {
        ppuVar1 = uStack_88 + 2;
        ppuVar24 = (undefined **)FUN_002e2e80(PTR_FUN_04373078,(ulong)ppuVar1 & 0xfffffffffffffff0);
        *pppuVar9 = (undefined **)((ulong)ppuVar1 & 0xfffffffffffffff0 | 1);
        pppuVar9[1] = (undefined **)ppuVar4;
        pppuVar9[2] = ppuVar24;
LAB_00357e2c:
        memcpy(ppuVar24,ppuVar8,(size_t)ppuVar4);
      }
      else {
        ppuVar24 = (undefined **)((long)pppuVar9 + 1);
        *(byte *)pppuVar9 = (byte)((int)uStack_88 << 1);
        if (uStack_88 != (undefined8 **)0x0) goto LAB_00357e2c;
      }
      *(byte *)((long)ppuVar24 + (long)ppuVar4) = 0;
    }
  }
                    /* try { // try from 00357e4c to 00357e53 has its CatchHandler @ 00358e34 */
  local_f8 = pppuVar9;
  FUN_003410d8(lVar15 + 0xd0,&local_f8);
  param_4[3] = pppuVar9;
  if (((ulong)local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  if ((*(byte *)(param_2 + 0x10) >> 4 & 1) == 0) {
    *(undefined1 *)((long)param_4 + 0x42) = 0;
    lVar15 = *(long *)(param_1 + 8);
                    /* try { // try from 00357e84 to 00357e8b has its CatchHandler @ 00358e30 */
    FUN_00359000(&local_90,*(undefined8 *)(param_2 + 0x18));
    pppuVar9 = (undefined ***)FUN_002e2e80(PTR_FUN_04373078,0x18);
    ppuVar8 = local_80;
    ppuVar4 = uStack_88;
    if (pppuVar9 != (undefined ***)0x0) {
      *pppuVar9 = (undefined **)0x0;
      pppuVar9[1] = (undefined **)0x0;
      pppuVar9[2] = (undefined **)0x0;
      if (((ulong)local_90 & 1) == 0) {
        pppuVar9[2] = local_80;
        pppuVar9[1] = (undefined **)uStack_88;
        *pppuVar9 = local_90;
      }
      else {
        if ((undefined8 **)0xffffffffffffffef < uStack_88) {
                    /* try { // try from 00358d04 to 00358d0b has its CatchHandler @ 00358e20 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (&DAT_00000016 < uStack_88) {
          ppuVar1 = uStack_88 + 2;
          ppuVar24 = (undefined **)
                     FUN_002e2e80(PTR_FUN_04373078,(ulong)ppuVar1 & 0xfffffffffffffff0);
          *pppuVar9 = (undefined **)((ulong)ppuVar1 & 0xfffffffffffffff0 | 1);
          pppuVar9[1] = (undefined **)ppuVar4;
          pppuVar9[2] = ppuVar24;
LAB_00357f38:
          memcpy(ppuVar24,ppuVar8,(size_t)ppuVar4);
        }
        else {
          ppuVar24 = (undefined **)((long)pppuVar9 + 1);
          *(byte *)pppuVar9 = (byte)((int)uStack_88 << 1);
          if (uStack_88 != (undefined8 **)0x0) goto LAB_00357f38;
        }
        *(byte *)((long)ppuVar24 + (long)ppuVar4) = 0;
      }
    }
                    /* try { // try from 00357f58 to 00357f5f has its CatchHandler @ 00358e20 */
    local_f8 = pppuVar9;
    FUN_003410d8(lVar15 + 0xd0,&local_f8);
    param_4[4] = pppuVar9;
    if (((ulong)local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
  }
  else {
    *(undefined1 *)((long)param_4 + 0x42) = 1;
                    /* try { // try from 00357ed8 to 00357edb has its CatchHandler @ 00358e60 */
    uVar6 = FUN_00340fec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x38));
    param_4[4] = uVar6;
  }
  *(undefined4 *)(param_4 + 7) = *(undefined4 *)(param_2 + 0x58);
  iVar5 = *(int *)(param_2 + 0x54);
  *(int *)((long)param_4 + 0x3c) = iVar5;
  if ((iVar5 == 2) && (*(char *)((long)param_4 + 0x43) != '\0')) {
    uVar6 = param_4[1];
                    /* try { // try from 00357fa0 to 00357fb3 has its CatchHandler @ 00358df8 */
    FUN_0034b2f0(&local_f8,"The extension ",uVar6);
                    /* try { // try from 00357fb4 to 00357fc7 has its CatchHandler @ 00358de4 */
    puVar10 = (undefined8 *)FUN_002e4094(&local_f8," cannot be required.",0x14);
    uStack_88 = (undefined8 **)puVar10[1];
    local_90 = (undefined **)*puVar10;
    local_80 = (undefined **)puVar10[2];
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
                    /* try { // try from 00357fe0 to 00357ff7 has its CatchHandler @ 00358dbc */
    FUN_0034db00(param_1,uVar6,param_2,2,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
    if (((ulong)local_f8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_e8);
    }
  }
  param_4[0xc] = 0;
  param_4[10] = 0;
  param_4[6] = 0;
  puVar25 = param_4 + 0x12;
  *puVar25 = 0;
  param_4[0xd] = 0;
  param_4[0xe] = 0;
  param_4[0x10] = 0;
  param_4[0x11] = 0;
  uVar14 = *(uint *)(param_2 + 0x10);
  *(byte *)(param_4 + 8) = (byte)(uVar14 >> 3) & 1;
  if (((uVar14 >> 3 & 1) != 0) && (*(int *)((long)param_4 + 0x3c) == 3)) {
                    /* try { // try from 00358068 to 0035807f has its CatchHandler @ 00358e60 */
    FUN_0034dc2c(param_1,param_4[1],param_2,4,"Repeated fields can\'t have default values.");
    uVar14 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar14 >> 10 & 1) == 0) goto switchD_0035820c_default;
  if ((uVar14 >> 3 & 1) == 0) {
    puVar12 = (ulong *)param_4[6];
    if ((puVar12 != (ulong *)0x0) &&
       (local_128 = PTR_LAB_04373a98, local_158 = param_4, *puVar12 != 0xffffffffffffffff)) {
      local_90 = &local_128;
      uStack_88 = &local_158;
      local_f8 = &local_90;
                    /* try { // try from 003581cc to 0035823b has its CatchHandler @ 00358e60 */
      std::__call_once(puVar12,&local_f8,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_4 + 7) * 4)) {
    case 1:
    case 3:
    case 6:
      *(undefined4 *)puVar25 = 0;
      iVar5 = *(int *)((long)param_4 + 0x44);
      break;
    case 2:
    case 4:
    case 5:
    case 8:
      *puVar25 = 0;
      iVar5 = *(int *)((long)param_4 + 0x44);
      break;
    case 7:
      *(undefined1 *)puVar25 = 0;
      iVar5 = *(int *)((long)param_4 + 0x44);
      break;
    case 9:
      FUN_0032cfe0();
      *puVar25 = (ulonglong)PTR_DAT_043730c0;
      iVar5 = *(int *)((long)param_4 + 0x44);
      goto joined_r0x00358700;
    default:
      goto switchD_0035820c_default;
    }
    goto joined_r0x003586cc;
  }
  local_188 = (char *)0x0;
  puVar12 = (ulong *)param_4[6];
  if ((puVar12 != (ulong *)0x0) &&
     (local_128 = PTR_LAB_04373a98, local_158 = param_4, *puVar12 != 0xffffffffffffffff)) {
    local_90 = &local_128;
    uStack_88 = &local_158;
    local_f8 = &local_90;
                    /* try { // try from 003583c4 to 003583d3 has its CatchHandler @ 00358d84 */
    std::__call_once(puVar12,&local_f8,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  uVar14 = *(uint *)(param_4 + 7);
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)uVar14 * 4)) {
  case 1:
    pbVar16 = *(byte **)(param_2 + 0x30);
    if ((*pbVar16 & 1) == 0) {
      pbVar16 = pbVar16 + 1;
    }
    else {
      pbVar16 = *(byte **)(pbVar16 + 0x10);
    }
    lVar15 = strtol((char *)pbVar16,&local_188,0);
    *(int *)puVar25 = (int)lVar15;
    break;
  case 2:
    pbVar16 = *(byte **)(param_2 + 0x30);
    if ((*pbVar16 & 1) == 0) {
      pbVar16 = pbVar16 + 1;
    }
    else {
      pbVar16 = *(byte **)(pbVar16 + 0x10);
    }
    uVar13 = strtoll((char *)pbVar16,&local_188,0);
    *puVar25 = uVar13;
    break;
  case 3:
    pbVar16 = *(byte **)(param_2 + 0x30);
    if ((*pbVar16 & 1) == 0) {
      pbVar16 = pbVar16 + 1;
    }
    else {
      pbVar16 = *(byte **)(pbVar16 + 0x10);
    }
    uVar18 = strtoul((char *)pbVar16,&local_188,0);
    *(int *)puVar25 = (int)uVar18;
    break;
  case 4:
    pbVar16 = *(byte **)(param_2 + 0x30);
    if ((*pbVar16 & 1) == 0) {
      pbVar16 = pbVar16 + 1;
    }
    else {
      pbVar16 = *(byte **)(pbVar16 + 0x10);
    }
    uVar13 = strtoull((char *)pbVar16,&local_188,0);
    *puVar25 = uVar13;
joined_r0x00358b58:
    if (local_188 == (char *)0x0) goto switchD_0035820c_default;
    goto LAB_00358c2c;
  case 5:
    pbVar16 = *(byte **)(param_2 + 0x30);
    bVar2 = *pbVar16;
    uVar18 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar18 = *(ulong *)(pbVar16 + 8);
    }
    if (uVar18 == 4) {
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar20 = pbVar16 + 1;
      }
      if (*(int *)pbVar20 == 0x666e692d) {
        *puVar25 = 0xfff0000000000000;
        break;
      }
    }
    else if (uVar18 == 3) {
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar20 = pbVar16 + 1;
      }
      if (*(short *)pbVar20 == 0x6e69 && pbVar20[2] == 0x66) {
        *puVar25 = 0x7ff0000000000000;
        goto joined_r0x00358b58;
      }
      if (*(short *)pbVar20 == 0x616e && pbVar20[2] == 0x6e) {
        *puVar25 = 0x7ff8000000000000;
        break;
      }
    }
    if ((bVar2 & 1) == 0) {
      pbVar16 = pbVar16 + 1;
    }
    else {
      pbVar16 = *(byte **)(pbVar16 + 0x10);
    }
    uVar13 = thunk_FUN_00320d20(pbVar16,&local_188);
    *puVar25 = uVar13;
    break;
  case 6:
    pbVar16 = *(byte **)(param_2 + 0x30);
    bVar2 = *pbVar16;
    uVar18 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar18 = *(ulong *)(pbVar16 + 8);
    }
    if (uVar18 == 4) {
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar20 = pbVar16 + 1;
      }
      if (*(int *)pbVar20 == 0x666e692d) {
        *(undefined4 *)puVar25 = 0xff800000;
      }
      else {
LAB_00358aa4:
        if ((bVar2 & 1) == 0) {
          pbVar16 = pbVar16 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar16 + 0x10);
        }
        thunk_FUN_00320d20(pbVar16,&local_188);
        uVar26 = FUN_003a1670();
        *(undefined4 *)puVar25 = uVar26;
      }
    }
    else {
      if (uVar18 != 3) goto LAB_00358aa4;
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar20 = pbVar16 + 1;
      }
      if (*(short *)pbVar20 == 0x6e69 && pbVar20[2] == 0x66) {
        *(undefined4 *)puVar25 = 0x7f800000;
      }
      else {
        if (*(short *)pbVar20 != 0x616e || pbVar20[2] != 0x6e) goto LAB_00358aa4;
        *(undefined4 *)puVar25 = 0x7fc00000;
      }
    }
    break;
  case 7:
    pbVar16 = *(byte **)(param_2 + 0x30);
    bVar2 = *pbVar16;
    uVar18 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar18 = *(ulong *)(pbVar16 + 8);
    }
    if (uVar18 == 5) {
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar20 = pbVar16 + 1;
      }
      if (*(int *)pbVar20 == 0x736c6166 && pbVar20[4] == 0x65) {
        *(undefined1 *)puVar25 = 0;
        break;
      }
    }
    else if (uVar18 == 4) {
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar20 = pbVar16 + 1;
      }
      if (*(int *)pbVar20 == 0x65757274) {
        *(undefined1 *)puVar25 = 1;
        break;
      }
    }
    FUN_0034dc2c(param_1,param_4[1],param_2,4,"Boolean default must be true or false.");
  default:
switchD_00358404_default:
    break;
  case 8:
    *puVar25 = 0;
    break;
  case 9:
    puVar12 = (ulong *)param_4[6];
    if (puVar12 != (ulong *)0x0) {
      local_128 = PTR_LAB_04373a98;
      local_158 = param_4;
      if (*puVar12 != 0xffffffffffffffff) {
        local_90 = &local_128;
        uStack_88 = &local_158;
        local_f8 = &local_90;
        std::__call_once(puVar12,&local_f8,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar14 = *(uint *)(param_4 + 7);
    }
    lVar15 = *(long *)(param_1 + 8);
    if (uVar14 == 0xc) {
                    /* try { // try from 0035895c to 00358963 has its CatchHandler @ 00358d24 */
      FUN_0031fd50(&local_90,*(undefined8 *)(param_2 + 0x30));
      pppuVar9 = (undefined ***)FUN_002e2e80(PTR_FUN_04373078,0x18);
      ppuVar8 = local_80;
      ppuVar4 = uStack_88;
      if (pppuVar9 != (undefined ***)0x0) {
        *pppuVar9 = (undefined **)0x0;
        pppuVar9[1] = (undefined **)0x0;
        pppuVar9[2] = (undefined **)0x0;
        if (((ulong)local_90 & 1) == 0) {
          pppuVar9[2] = local_80;
          pppuVar9[1] = (undefined **)uStack_88;
          *pppuVar9 = local_90;
        }
        else {
          if ((undefined8 **)0xffffffffffffffef < uStack_88) {
                    /* try { // try from 00358d0c to 00358d13 has its CatchHandler @ 00358d14 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (&DAT_00000016 < uStack_88) {
            ppuVar1 = uStack_88 + 2;
            ppuVar24 = (undefined **)
                       FUN_002e2e80(PTR_FUN_04373078,(ulong)ppuVar1 & 0xfffffffffffffff0);
            pppuVar9[1] = (undefined **)ppuVar4;
            pppuVar9[2] = ppuVar24;
            *pppuVar9 = (undefined **)((ulong)ppuVar1 & 0xfffffffffffffff0 | 1);
LAB_00358be4:
            memcpy(ppuVar24,ppuVar8,(size_t)ppuVar4);
          }
          else {
            ppuVar24 = (undefined **)((long)pppuVar9 + 1);
            *(byte *)pppuVar9 = (byte)((int)uStack_88 << 1);
            if (uStack_88 != (undefined8 **)0x0) goto LAB_00358be4;
          }
          *(byte *)((long)ppuVar24 + (long)ppuVar4) = 0;
        }
      }
                    /* try { // try from 00358c00 to 00358c07 has its CatchHandler @ 00358d14 */
      local_f8 = pppuVar9;
      FUN_003410d8(lVar15 + 0xd0,&local_f8);
      *puVar25 = (ulonglong)pppuVar9;
      if (((ulong)local_90 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_80);
      }
      goto switchD_00358404_default;
    }
                    /* try { // try from 00358a24 to 00358b1b has its CatchHandler @ 00358d84 */
    uVar13 = FUN_00340fec(lVar15,*(undefined8 *)(param_2 + 0x30));
    *puVar25 = uVar13;
    break;
  case 10:
                    /* try { // try from 0035879c to 00358947 has its CatchHandler @ 00358d84 */
    FUN_0034dc2c(param_1,param_4[1],param_2,4,"Messages can\'t have default values.");
    *(undefined1 *)(param_4 + 8) = 0;
  }
  if (local_188 == (char *)0x0) {
switchD_0035820c_default:
    iVar5 = *(int *)((long)param_4 + 0x44);
joined_r0x00358700:
    if (0 < iVar5) goto LAB_00358094;
LAB_00358220:
    FUN_0034dc2c(param_1,param_4[1],param_2,1,"Field numbers must be positive integers.");
joined_r0x0035842c:
    if ((param_5 & 1) == 0) {
LAB_00358430:
      uVar14 = *(uint *)(param_2 + 0x10);
      goto joined_r0x00358434;
    }
    uVar14 = *(uint *)(param_2 + 0x10);
    if ((uVar14 >> 1 & 1) == 0) {
                    /* try { // try from 00358340 to 0035837f has its CatchHandler @ 00358e60 */
      FUN_0034dc2c(param_1,param_4[1],param_2,3,
                   "FieldDescriptorProto.extendee not set for extension field.");
      uVar14 = *(uint *)(param_2 + 0x10);
    }
    param_4[0xc] = param_3;
    if ((uVar14 >> 7 & 1) != 0) {
      FUN_0034dc2c(param_1,param_4[1],param_2,2,
                   "FieldDescriptorProto.oneof_index should not be set for extensions.");
    }
  }
  else {
LAB_00358c2c:
    bVar2 = **(byte **)(param_2 + 0x30);
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 != 0) {
LAB_00358c4c:
        if (*local_188 == '\0') goto switchD_0035820c_default;
      }
    }
    else if (*(long *)(*(byte **)(param_2 + 0x30) + 8) != 0) goto LAB_00358c4c;
    uVar6 = param_4[1];
                    /* try { // try from 00358c58 to 00358c67 has its CatchHandler @ 00358d48 */
    FUN_0034b2f0(&local_f8,"Couldn\'t parse default value \"");
                    /* try { // try from 00358c68 to 00358c7b has its CatchHandler @ 00358d38 */
    puVar10 = (undefined8 *)FUN_002e4094(&local_f8,&DAT_038c838e,2);
    uStack_88 = (undefined8 **)puVar10[1];
    local_90 = (undefined **)*puVar10;
    local_80 = (undefined **)puVar10[2];
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
                    /* try { // try from 00358c94 to 00358cab has its CatchHandler @ 00358d28 */
    FUN_0034db00(param_1,uVar6,param_2,4,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
    if (((ulong)local_f8 & 1) == 0) goto switchD_0035820c_default;
    FUN_002e2ea0(PTR_LAB_04373088,local_e8);
    iVar5 = *(int *)((long)param_4 + 0x44);
joined_r0x003586cc:
    if (iVar5 < 1) goto LAB_00358220;
LAB_00358094:
    if ((iVar5 < 0x20000000) || ((param_5 & 1) != 0)) {
      if (iVar5 - 19000U < 1000) {
        uVar6 = param_4[1];
                    /* try { // try from 0035825c to 00358263 has its CatchHandler @ 00358d64 */
        local_90 = (undefined **)FUN_00320300(19000,(long)&uStack_88 + 4);
        sVar11 = strlen((char *)local_90);
        uStack_88 = (undefined8 **)CONCAT44(uStack_88._4_4_,(int)sVar11);
                    /* try { // try from 00358278 to 0035827f has its CatchHandler @ 00358d60 */
        local_f8 = (undefined ***)FUN_00320300(19999,auStack_ec);
        sVar11 = strlen((char *)local_f8);
        local_128 = (undefined *)0x0;
        local_f0 = (uint)sVar11;
        local_120 = 0xffffffff;
        local_158 = (undefined8 *)0x0;
        local_150 = 0xffffffff;
        local_188 = (char *)0x0;
        local_180 = 0xffffffff;
        local_1b8 = 0;
        local_1b0 = 0xffffffff;
        local_1e8 = 0;
        local_1e0 = 0xffffffff;
        local_218 = 0;
        local_210 = 0xffffffff;
        local_248 = 0;
        local_240 = 0xffffffff;
        local_278 = 0;
        local_270 = 0xffffffff;
                    /* try { // try from 003582d0 to 0035830f has its CatchHandler @ 00358d5c */
        FUN_003c6830(local_c8,
                     "Field numbers $0 through $1 are reserved for the protocol buffer library implementation."
                     ,&local_90,&local_f8,&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                     &local_218,&local_248,&local_278);
                    /* try { // try from 00358310 to 00358327 has its CatchHandler @ 00358d4c */
        FUN_0034db00(param_1,uVar6,param_2,1,local_c8);
        if ((local_c8[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_b8);
        }
      }
      goto joined_r0x0035842c;
    }
    uVar6 = param_4[1];
                    /* try { // try from 003580b0 to 003580b7 has its CatchHandler @ 00358db8 */
    local_90 = (undefined **)FUN_00320300(0x1fffffff,(long)&uStack_88 + 4);
    sVar11 = strlen((char *)local_90);
    local_f8 = (undefined ***)0x0;
    uStack_88 = (undefined8 **)CONCAT44(uStack_88._4_4_,(int)sVar11);
    local_f0 = 0xffffffff;
    local_128 = (undefined *)0x0;
    local_120 = 0xffffffff;
    local_158 = (undefined8 *)0x0;
    local_150 = 0xffffffff;
    local_188 = (char *)0x0;
    local_180 = 0xffffffff;
    local_1b8 = 0;
    local_1b0 = 0xffffffff;
    local_1e8 = 0;
    local_1e0 = 0xffffffff;
    local_218 = 0;
    local_210 = 0xffffffff;
    local_248 = 0;
    local_240 = 0xffffffff;
    local_278 = 0;
    local_270 = 0xffffffff;
                    /* try { // try from 00358110 to 0035814f has its CatchHandler @ 00358db4 */
    FUN_003c6830(local_c8,"Field numbers cannot be greater than $0.",&local_90,&local_f8,&local_128,
                 &local_158,&local_188,&local_1b8,&local_1e8,&local_218,&local_248,&local_278);
                    /* try { // try from 00358150 to 00358167 has its CatchHandler @ 00358da0 */
    FUN_0034db00(param_1,uVar6,param_2,1,local_c8);
    if ((local_c8[0] & 1) == 0) goto LAB_00358430;
    FUN_002e2ea0(PTR_LAB_04373088,local_b8);
    uVar14 = *(uint *)(param_2 + 0x10);
joined_r0x00358434:
    if ((uVar14 >> 1 & 1) != 0) {
                    /* try { // try from 0035843c to 003584af has its CatchHandler @ 00358e60 */
      FUN_0034dc2c(param_1,param_4[1],param_2,3,
                   "FieldDescriptorProto.extendee set for non-extension field.");
      uVar14 = *(uint *)(param_2 + 0x10);
    }
    param_4[10] = param_3;
    if ((uVar14 >> 7 & 1) != 0) {
      iVar5 = *(int *)(param_2 + 0x4c);
      if ((-1 < iVar5) && (iVar5 < *(int *)((long)param_3 + 0x6c))) {
        param_4[0xb] = param_3[6] + (long)iVar5 * 0x30;
        param_4[0xf] = 0;
        uVar14 = *(uint *)(param_2 + 0x10);
        goto joined_r0x0035848c;
      }
      uVar6 = param_4[1];
                    /* try { // try from 00358564 to 00358567 has its CatchHandler @ 00358d9c */
      local_90 = (undefined **)FUN_00320300((long)iVar5,(long)&uStack_88 + 4);
      sVar11 = strlen((char *)local_90);
      uStack_88 = (undefined8 **)CONCAT44(uStack_88._4_4_,(int)sVar11);
      pbVar16 = (byte *)*param_3;
      local_f8 = *(undefined ****)(pbVar16 + 0x10);
      if ((*pbVar16 & 1) == 0) {
        local_f8 = (undefined ***)(pbVar16 + 1);
      }
      local_128 = (undefined *)0x0;
      local_120 = 0xffffffff;
      local_158 = (undefined8 *)0x0;
      local_150 = 0xffffffff;
      local_188 = (char *)0x0;
      local_180 = 0xffffffff;
      local_1b8 = 0;
      local_1b0 = 0xffffffff;
      local_1e8 = 0;
      local_1e0 = 0xffffffff;
      local_218 = 0;
      local_f0 = (uint)(*pbVar16 >> 1);
      if ((*pbVar16 & 1) != 0) {
        local_f0 = (uint)*(undefined8 *)(pbVar16 + 8);
      }
      local_210 = 0xffffffff;
      local_248 = 0;
      local_240 = 0xffffffff;
      local_278 = 0;
      local_270 = 0xffffffff;
                    /* try { // try from 003585e8 to 00358627 has its CatchHandler @ 00358d98 */
      FUN_003c6830(local_c8,"FieldDescriptorProto.oneof_index $0 is out of range for type \"$1\".",
                   &local_90,&local_f8,&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                   &local_218,&local_248,&local_278);
                    /* try { // try from 00358628 to 0035863f has its CatchHandler @ 00358d88 */
      FUN_0034db00(param_1,uVar6,param_2,2,local_c8);
      if ((local_c8[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_b8);
      }
    }
  }
  param_4[0xb] = 0;
  param_4[0xf] = 0;
  uVar14 = *(uint *)(param_2 + 0x10);
joined_r0x0035848c:
  if ((uVar14 >> 5 & 1) != 0) {
    puVar17 = *(undefined **)(param_2 + 0x40);
    if (puVar17 == (undefined *)0x0) {
      FUN_0030f640(&local_90,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x2365);
                    /* try { // try from 003584b0 to 003584c3 has its CatchHandler @ 00358d6c */
      uVar6 = FUN_0030f3ac(&local_90,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 003584c4 to 003584cb has its CatchHandler @ 00358d68 */
      FUN_0030f41c(&local_f8,uVar6);
      FUN_0030f658(&local_90);
      puVar17 = *(undefined **)(param_2 + 0x40);
    }
    puVar3 = PTR_DAT_04373c20;
    if (puVar17 != (undefined *)0x0) {
      puVar3 = puVar17;
    }
    local_80 = (undefined **)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar7 = s_google_protobuf_FieldOptions_038dacd2._0_8_;
    puVar17 = (undefined *)
              CONCAT44(s_google_protobuf_FieldOptions_038dacd2._12_4_,
                       s_google_protobuf_FieldOptions_038dacd2._8_4_);
    uStack_88 = _UNK_0388a478;
    local_90 = _DAT_0388a470;
    uVar6 = CONCAT44(s_google_protobuf_FieldOptions_038dacd2._16_4_,
                     s_google_protobuf_FieldOptions_038dacd2._12_4_);
    *(undefined8 *)((long)local_80 + 0x14) = s_google_protobuf_FieldOptions_038dacd2._20_8_;
    *(undefined8 *)((long)local_80 + 0xc) = uVar6;
    local_80[1] = puVar17;
    *local_80 = (undefined *)uVar7;
    *(char *)((long)local_80 + 0x1c) = '\0';
                    /* try { // try from 00358524 to 0035853b has its CatchHandler @ 00358e10 */
    FUN_00359114(param_1,puVar3,param_4,8,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
  }
                    /* try { // try from 00358670 to 003586eb has its CatchHandler @ 00358e60 */
  FUN_0034ff4c(param_1,param_4[1],param_3,*param_4,param_2,2,param_4);
  if (((ulong)local_b0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_a0);
  }
  return;
}


