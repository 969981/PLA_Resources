/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00317760; name: FUN_00317760
 */


byte * FUN_00317760(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  size_t sVar21;
  long lVar22;
  long lVar23;
  undefined **local_98;
  long *plStack_90;
  long local_68;
  undefined *puStack_60;
  undefined ***local_58;
  
  lVar9 = FUN_00342dac();
  lVar22 = *(long *)(lVar9 + 0x28);
  lVar9 = FUN_00342dac(param_1);
  lVar23 = *(long *)(lVar9 + 0x28);
  lVar9 = lVar23 + 0x98;
  iVar5 = FUN_00319da0(lVar22,param_2);
  iVar6 = FUN_0031a060(lVar9,param_3);
  uVar7 = iVar5 + iVar6 + 2;
  if ((byte *)*param_5 <= param_4) {
    param_4 = (byte *)FUN_00310ec4(param_5,param_4);
  }
  uVar1 = *(uint *)(param_1 + 0x44);
  uVar14 = uVar1 << 3 | 2;
  if (uVar14 < 0x80) {
    pbVar19 = param_4 + 1;
    *param_4 = (byte)uVar14;
joined_r0x0031798c:
    if (0x7f < uVar7) goto LAB_00317990;
LAB_003177f4:
    pbVar20 = pbVar19 + 1;
    *pbVar19 = (byte)uVar7;
    if ((byte *)*param_5 <= pbVar20) goto LAB_003179ec;
LAB_00317804:
    puVar10 = *(ulong **)(lVar22 + 0x30);
    puVar3 = PTR_LAB_04373a98;
  }
  else {
    *param_4 = (byte)(uVar1 << 3) | 0x82;
    if ((uVar1 & 0x1fffffff) >> 0xb != 0) {
      pbVar19 = param_4 + 2;
      uVar14 = uVar1 >> 4 & 0x1ffffff;
      do {
        pbVar20 = pbVar19;
        uVar1 = uVar14 >> 7;
        pbVar20[-1] = (byte)uVar14 | 0x80;
        pbVar19 = pbVar20 + 1;
        uVar2 = uVar14 >> 0xe;
        uVar14 = uVar1;
      } while (uVar2 != 0);
      *pbVar20 = (byte)uVar1;
      goto joined_r0x0031798c;
    }
    param_4[1] = (byte)(uVar1 >> 4);
    pbVar19 = param_4 + 2;
    if (uVar7 < 0x80) goto LAB_003177f4;
LAB_00317990:
    *pbVar19 = (byte)uVar7 | 0x80;
    if (uVar7 >> 0xe == 0) {
      pbVar19[1] = (byte)(uVar7 >> 7);
      pbVar20 = pbVar19 + 2;
      if ((byte *)*param_5 <= pbVar20) goto LAB_003179ec;
      goto LAB_00317804;
    }
    pbVar20 = pbVar19 + 2;
    uVar7 = uVar7 >> 7;
    do {
      pbVar19 = pbVar20;
      uVar14 = uVar7 >> 7;
      pbVar19[-1] = (byte)uVar7 | 0x80;
      pbVar20 = pbVar19 + 1;
      uVar1 = uVar7 >> 0xe;
      uVar7 = uVar14;
    } while (uVar1 != 0);
    *pbVar19 = (byte)uVar14;
    if (pbVar20 < (byte *)*param_5) goto LAB_00317804;
LAB_003179ec:
    pbVar20 = (byte *)FUN_00310ec4(param_5,pbVar20);
    puVar10 = *(ulong **)(lVar22 + 0x30);
    puVar3 = PTR_LAB_04373a98;
  }
  PTR_LAB_04373a98 = puVar3;
  if (puVar10 != (ulong *)0x0) {
    local_68 = lVar22;
    puStack_60 = puVar3;
    if (*puVar10 != 0xffffffffffffffff) {
      local_98 = &puStack_60;
      plStack_90 = &local_68;
      local_58 = &local_98;
      std::__call_once(puVar10,&local_58,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  switch(*(undefined4 *)(lVar22 + 0x38)) {
  case 1:
  case 2:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
    FUN_0030f640(&local_98,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x431);
                    /* try { // try from 00317888 to 0031789b has its CatchHandler @ 003182c4 */
    uVar11 = FUN_0030f3ac(&local_98,"Unsupported");
                    /* try { // try from 0031789c to 003178a3 has its CatchHandler @ 003182c0 */
    FUN_0030f41c(&local_58,uVar11);
    FUN_0030f658(&local_98);
  default:
    if ((byte *)*param_5 <= pbVar20) break;
LAB_003178b8:
    puVar10 = *(ulong **)(lVar23 + 200);
    goto joined_r0x003178bc;
  case 3:
    uVar16 = FUN_0031bf0c(param_2);
    *pbVar20 = 8;
    if (uVar16 < 0x80) {
LAB_00317ac8:
      pbVar20[1] = (byte)uVar16;
      pbVar20 = pbVar20 + 2;
      if (pbVar20 < (byte *)*param_5) goto LAB_003178b8;
    }
    else {
      pbVar20[1] = (byte)uVar16 | 0x80;
      uVar15 = uVar16 >> 7;
      if (uVar16 >> 0xe == 0) goto LAB_00318060;
      pbVar20 = pbVar20 + 3;
      do {
        uVar16 = uVar15 >> 7;
        pbVar20[-1] = (byte)uVar15 | 0x80;
        pbVar20 = pbVar20 + 1;
        uVar18 = uVar15 >> 0xe;
        uVar15 = uVar16;
      } while (uVar18 != 0);
LAB_003181a0:
      pbVar20[-1] = (byte)uVar16;
      if (pbVar20 < (byte *)*param_5) goto LAB_003178b8;
    }
    break;
  case 4:
    uVar16 = FUN_0031c0dc(param_2);
    *pbVar20 = 8;
    if (uVar16 < 0x80) goto LAB_00317ac8;
    pbVar20[1] = (byte)uVar16 | 0x80;
    uVar15 = uVar16 >> 7;
    if (uVar16 >> 0xe != 0) {
      pbVar20 = pbVar20 + 3;
      do {
        uVar16 = uVar15 >> 7;
        pbVar20[-1] = (byte)uVar15 | 0x80;
        pbVar20 = pbVar20 + 1;
        uVar18 = uVar15 >> 0xe;
        uVar15 = uVar16;
      } while (uVar18 != 0);
      goto LAB_003181a0;
    }
    goto LAB_00318060;
  case 5:
    uVar16 = FUN_0031bff4(param_2);
    *pbVar20 = 8;
    if ((uint)uVar16 < 0x80) goto LAB_00317ac8;
    pbVar20[1] = (byte)uVar16 | 0x80;
    uVar15 = (ulong)(long)(int)(uint)uVar16 >> 7;
    if ((uVar16 >> 0xe & 0x3ffff) != 0) {
      pbVar20 = pbVar20 + 3;
      do {
        uVar16 = uVar15 >> 7;
        pbVar20[-1] = (byte)uVar15 | 0x80;
        pbVar20 = pbVar20 + 1;
        uVar18 = uVar15 >> 0xe;
        uVar15 = uVar16;
      } while (uVar18 != 0);
      goto LAB_003181a0;
    }
LAB_00318060:
    pbVar20[2] = (byte)uVar15;
    pbVar20 = pbVar20 + 3;
    if ((byte *)*param_5 <= pbVar20) break;
    goto LAB_003178b8;
  case 6:
    uVar11 = FUN_0031c0dc(param_2);
    goto LAB_00317ba0;
  case 7:
    uVar8 = FUN_0031c1c4(param_2);
    goto LAB_00317b78;
  case 8:
    bVar4 = FUN_0031c2ac(param_2);
    *pbVar20 = 8;
    pbVar20[1] = bVar4 & 1;
    pbVar20 = pbVar20 + 2;
    if (pbVar20 < (byte *)*param_5) goto LAB_003178b8;
    break;
  case 9:
    pbVar19 = (byte *)FUN_0031be24(param_2);
    if ((*pbVar19 & 1) == 0) {
      sVar21 = (size_t)(*pbVar19 >> 1);
LAB_00317f94:
      if ((long)sVar21 <= (*param_5 - (long)pbVar20) + 0xe) {
        *pbVar20 = 10;
        pbVar20[1] = (byte)sVar21;
        pbVar17 = *(byte **)(pbVar19 + 0x10);
        if ((*pbVar19 & 1) == 0) {
          pbVar17 = pbVar19 + 1;
        }
        memcpy(pbVar20 + 2,pbVar17,sVar21);
        pbVar20 = pbVar20 + 2 + sVar21;
        if (pbVar20 < (byte *)*param_5) goto LAB_003178b8;
        break;
      }
    }
    else {
      sVar21 = *(size_t *)(pbVar19 + 8);
      if ((long)sVar21 < 0x80) goto LAB_00317f94;
    }
    pbVar20 = (byte *)FUN_00311488(param_5,1,pbVar19,pbVar20);
    if ((byte *)*param_5 <= pbVar20) break;
    goto LAB_003178b8;
  case 0xd:
    uVar7 = FUN_0031c1c4(param_2);
    *pbVar20 = 8;
    if (uVar7 < 0x80) {
      pbVar20[1] = (byte)uVar7;
      pbVar20 = pbVar20 + 2;
      if (pbVar20 < (byte *)*param_5) goto LAB_003178b8;
    }
    else {
      pbVar20[1] = (byte)uVar7 | 0x80;
      uVar14 = uVar7 >> 7;
      if (uVar7 >> 0xe == 0) goto LAB_00318034;
      pbVar20 = pbVar20 + 3;
      do {
        uVar7 = uVar14 >> 7;
        pbVar20[-1] = (byte)uVar14 | 0x80;
        pbVar20 = pbVar20 + 1;
        uVar1 = uVar14 >> 0xe;
        uVar14 = uVar7;
      } while (uVar1 != 0);
LAB_0031816c:
      pbVar20[-1] = (byte)uVar7;
      if (pbVar20 < (byte *)*param_5) goto LAB_003178b8;
    }
    break;
  case 0xf:
    uVar8 = FUN_0031bff4(param_2);
LAB_00317b78:
    *pbVar20 = 0xd;
    *(undefined4 *)(pbVar20 + 1) = uVar8;
    pbVar20 = pbVar20 + 5;
    if ((byte *)*param_5 <= pbVar20) break;
    goto LAB_003178b8;
  case 0x10:
    uVar11 = FUN_0031bf0c(param_2);
LAB_00317ba0:
    *pbVar20 = 9;
    *(undefined8 *)(pbVar20 + 1) = uVar11;
    pbVar20 = pbVar20 + 9;
    if ((byte *)*param_5 <= pbVar20) break;
    goto LAB_003178b8;
  case 0x11:
    iVar5 = FUN_0031bff4(param_2);
    *pbVar20 = 8;
    uVar7 = iVar5 << 1 ^ iVar5 >> 0x1f;
    if (uVar7 < 0x80) {
      pbVar20[1] = (byte)uVar7;
      pbVar20 = pbVar20 + 2;
      if (pbVar20 < (byte *)*param_5) goto LAB_003178b8;
    }
    else {
      pbVar20[1] = (byte)uVar7 | 0x80;
      uVar14 = uVar7 >> 7;
      if (uVar7 >> 0xe != 0) {
        pbVar20 = pbVar20 + 3;
        do {
          uVar7 = uVar14 >> 7;
          pbVar20[-1] = (byte)uVar14 | 0x80;
          pbVar20 = pbVar20 + 1;
          uVar1 = uVar14 >> 0xe;
          uVar14 = uVar7;
        } while (uVar1 != 0);
        goto LAB_0031816c;
      }
LAB_00318034:
      pbVar20[2] = (byte)uVar14;
      pbVar20 = pbVar20 + 3;
      if (pbVar20 < (byte *)*param_5) goto LAB_003178b8;
    }
    break;
  case 0x12:
    lVar22 = FUN_0031bf0c(param_2);
    *pbVar20 = 8;
    uVar16 = lVar22 << 1 ^ lVar22 >> 0x3f;
    if (0x7f < uVar16) {
      pbVar20[1] = (byte)uVar16 | 0x80;
      uVar15 = uVar16 >> 7;
      if (uVar16 >> 0xe != 0) {
        pbVar20 = pbVar20 + 3;
        do {
          uVar16 = uVar15 >> 7;
          pbVar20[-1] = (byte)uVar15 | 0x80;
          pbVar20 = pbVar20 + 1;
          uVar18 = uVar15 >> 0xe;
          uVar15 = uVar16;
        } while (uVar18 != 0);
        goto LAB_003181a0;
      }
      goto LAB_00318060;
    }
    pbVar20[1] = (byte)uVar16;
    pbVar20 = pbVar20 + 2;
    if (pbVar20 < (byte *)*param_5) goto LAB_003178b8;
  }
  pbVar20 = (byte *)FUN_00310ec4(param_5,pbVar20);
  puVar10 = *(ulong **)(lVar23 + 200);
joined_r0x003178bc:
  if (puVar10 != (ulong *)0x0) {
    local_68 = lVar9;
    puStack_60 = puVar3;
    if (*puVar10 != 0xffffffffffffffff) {
      local_98 = &puStack_60;
      plStack_90 = &local_68;
      local_58 = &local_98;
      std::__call_once(puVar10,&local_58,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  switch(*(undefined4 *)(lVar23 + 0xd0)) {
  case 1:
    uVar11 = FUN_0031c91c(param_3);
    *pbVar20 = 0x11;
    *(undefined8 *)(pbVar20 + 1) = uVar11;
    pbVar20 = pbVar20 + 9;
    break;
  case 2:
    uVar8 = FUN_0031ca08(param_3);
    *pbVar20 = 0x15;
    *(undefined4 *)(pbVar20 + 1) = uVar8;
    pbVar20 = pbVar20 + 5;
    break;
  case 3:
    uVar16 = FUN_0031c394(param_3);
    *pbVar20 = 0x10;
    if (uVar16 < 0x80) {
LAB_00317e5c:
      pbVar20[1] = (byte)uVar16;
      return pbVar20 + 2;
    }
    pbVar20[1] = (byte)uVar16 | 0x80;
    uVar15 = uVar16 >> 7;
    if (uVar16 >> 0xe == 0) goto LAB_00318140;
    pbVar20 = pbVar20 + 3;
    do {
      uVar16 = uVar15 >> 7;
      pbVar20[-1] = (byte)uVar15 | 0x80;
      pbVar20 = pbVar20 + 1;
      uVar18 = uVar15 >> 0xe;
      uVar15 = uVar16;
    } while (uVar18 != 0);
    goto LAB_0031823c;
  case 4:
    uVar16 = FUN_0031c480(param_3);
    *pbVar20 = 0x10;
    if (uVar16 < 0x80) goto LAB_00317e5c;
    pbVar20[1] = (byte)uVar16 | 0x80;
    uVar15 = uVar16 >> 7;
    if (uVar16 >> 0xe == 0) goto LAB_00318140;
    pbVar20 = pbVar20 + 3;
    do {
      uVar16 = uVar15 >> 7;
      pbVar20[-1] = (byte)uVar15 | 0x80;
      pbVar20 = pbVar20 + 1;
      uVar18 = uVar15 >> 0xe;
      uVar15 = uVar16;
    } while (uVar18 != 0);
    goto LAB_0031823c;
  case 5:
    uVar16 = FUN_0031c56c(param_3);
    *pbVar20 = 0x10;
    if ((uint)uVar16 < 0x80) goto LAB_00317e5c;
    pbVar20[1] = (byte)uVar16 | 0x80;
    uVar15 = (ulong)(long)(int)(uint)uVar16 >> 7;
    if ((uVar16 >> 0xe & 0x3ffff) == 0) goto LAB_00318140;
    pbVar20 = pbVar20 + 3;
    do {
      uVar16 = uVar15 >> 7;
      pbVar20[-1] = (byte)uVar15 | 0x80;
      pbVar20 = pbVar20 + 1;
      uVar18 = uVar15 >> 0xe;
      uVar15 = uVar16;
    } while (uVar18 != 0);
    goto LAB_0031823c;
  case 6:
    uVar11 = FUN_0031c480(param_3);
    goto LAB_00317e8c;
  case 7:
    uVar8 = FUN_0031c658(param_3);
    goto LAB_00317e70;
  case 8:
    bVar4 = FUN_0031c744(param_3);
    *pbVar20 = 0x10;
    pbVar20[1] = bVar4 & 1;
    pbVar20 = pbVar20 + 2;
    break;
  case 9:
  case 0xc:
    pbVar19 = (byte *)FUN_0031caf4(param_3);
    if ((*pbVar19 & 1) == 0) {
      sVar21 = (size_t)(*pbVar19 >> 1);
LAB_00317f04:
      if ((long)sVar21 <= (*param_5 - (long)pbVar20) + 0xe) {
        *pbVar20 = 0x12;
        pbVar20[1] = (byte)sVar21;
        pbVar17 = *(byte **)(pbVar19 + 0x10);
        if ((*pbVar19 & 1) == 0) {
          pbVar17 = pbVar19 + 1;
        }
        memcpy(pbVar20 + 2,pbVar17,sVar21);
        return pbVar20 + 2 + sVar21;
      }
    }
    else {
      sVar21 = *(size_t *)(pbVar19 + 8);
      if ((long)sVar21 < 0x80) goto LAB_00317f04;
    }
    pbVar20 = (byte *)FUN_00311488(param_5,2,pbVar19,pbVar20);
    break;
  case 10:
    plVar13 = (long *)FUN_0031cbdc(param_3);
    *pbVar20 = 0x13;
    puVar12 = (undefined1 *)(**(code **)(*plVar13 + 0x60))(plVar13,pbVar20 + 1,param_5);
    if ((undefined1 *)*param_5 <= puVar12) {
      puVar12 = (undefined1 *)FUN_00310ec4(param_5,puVar12);
    }
    pbVar20 = puVar12 + 1;
    *puVar12 = 0x14;
    break;
  case 0xb:
    plVar13 = (long *)FUN_0031cbdc(param_3);
    *pbVar20 = 0x12;
    uVar7 = (**(code **)(*plVar13 + 0x50))();
    if (uVar7 < 0x80) {
      pbVar20[1] = (byte)uVar7;
      pbVar20 = pbVar20 + 2;
    }
    else {
      pbVar20[1] = (byte)uVar7 | 0x80;
      if (uVar7 >> 0xe == 0) {
        pbVar20[2] = (byte)(uVar7 >> 7);
        pbVar20 = pbVar20 + 3;
      }
      else {
        pbVar20 = pbVar20 + 3;
        uVar7 = uVar7 >> 7;
        do {
          pbVar19 = pbVar20;
          uVar14 = uVar7 >> 7;
          pbVar19[-1] = (byte)uVar7 | 0x80;
          pbVar20 = pbVar19 + 1;
          uVar1 = uVar7 >> 0xe;
          uVar7 = uVar14;
        } while (uVar1 != 0);
        *pbVar19 = (byte)uVar14;
      }
    }
    pbVar20 = (byte *)(**(code **)(*plVar13 + 0x60))(plVar13,pbVar20,param_5);
    break;
  case 0xd:
    uVar7 = FUN_0031c658(param_3);
    *pbVar20 = 0x10;
    if (uVar7 < 0x80) {
      pbVar20[1] = (byte)uVar7;
      return pbVar20 + 2;
    }
    pbVar20[1] = (byte)uVar7 | 0x80;
    uVar14 = uVar7 >> 7;
    if (uVar7 >> 0xe == 0) {
LAB_00318120:
      pbVar20[2] = (byte)uVar14;
      return pbVar20 + 3;
    }
    pbVar20 = pbVar20 + 3;
    do {
      uVar7 = uVar14 >> 7;
      pbVar20[-1] = (byte)uVar14 | 0x80;
      pbVar20 = pbVar20 + 1;
      uVar1 = uVar14 >> 0xe;
      uVar14 = uVar7;
    } while (uVar1 != 0);
    goto LAB_00318214;
  case 0xe:
    uVar16 = FUN_0031c830(param_3);
    *pbVar20 = 0x10;
    if ((uint)uVar16 < 0x80) goto LAB_00317e5c;
    pbVar20[1] = (byte)uVar16 | 0x80;
    uVar15 = (ulong)(long)(int)(uint)uVar16 >> 7;
    if ((uVar16 >> 0xe & 0x3ffff) == 0) goto LAB_00318140;
    pbVar20 = pbVar20 + 3;
    do {
      uVar16 = uVar15 >> 7;
      pbVar20[-1] = (byte)uVar15 | 0x80;
      pbVar20 = pbVar20 + 1;
      uVar18 = uVar15 >> 0xe;
      uVar15 = uVar16;
    } while (uVar18 != 0);
    goto LAB_0031823c;
  case 0xf:
    uVar8 = FUN_0031c56c(param_3);
LAB_00317e70:
    *pbVar20 = 0x15;
    *(undefined4 *)(pbVar20 + 1) = uVar8;
    pbVar20 = pbVar20 + 5;
    break;
  case 0x10:
    uVar11 = FUN_0031c394(param_3);
LAB_00317e8c:
    *pbVar20 = 0x11;
    *(undefined8 *)(pbVar20 + 1) = uVar11;
    pbVar20 = pbVar20 + 9;
    break;
  case 0x11:
    iVar5 = FUN_0031c56c(param_3);
    *pbVar20 = 0x10;
    uVar7 = iVar5 << 1 ^ iVar5 >> 0x1f;
    if (uVar7 < 0x80) {
      pbVar20[1] = (byte)uVar7;
      return pbVar20 + 2;
    }
    pbVar20[1] = (byte)uVar7 | 0x80;
    uVar14 = uVar7 >> 7;
    if (uVar7 >> 0xe == 0) goto LAB_00318120;
    pbVar20 = pbVar20 + 3;
    do {
      uVar7 = uVar14 >> 7;
      pbVar20[-1] = (byte)uVar14 | 0x80;
      pbVar20 = pbVar20 + 1;
      uVar1 = uVar14 >> 0xe;
      uVar14 = uVar7;
    } while (uVar1 != 0);
LAB_00318214:
    pbVar20[-1] = (byte)uVar7;
    break;
  case 0x12:
    lVar9 = FUN_0031c394(param_3);
    *pbVar20 = 0x10;
    uVar16 = lVar9 << 1 ^ lVar9 >> 0x3f;
    if (uVar16 < 0x80) {
      pbVar20[1] = (byte)uVar16;
      return pbVar20 + 2;
    }
    pbVar20[1] = (byte)uVar16 | 0x80;
    uVar15 = uVar16 >> 7;
    if (uVar16 >> 0xe == 0) {
LAB_00318140:
      pbVar20[2] = (byte)uVar15;
      return pbVar20 + 3;
    }
    pbVar20 = pbVar20 + 3;
    do {
      uVar16 = uVar15 >> 7;
      pbVar20[-1] = (byte)uVar15 | 0x80;
      pbVar20 = pbVar20 + 1;
      uVar18 = uVar15 >> 0xe;
      uVar15 = uVar16;
    } while (uVar18 != 0);
LAB_0031823c:
    pbVar20[-1] = (byte)uVar16;
  }
  return pbVar20;
}


