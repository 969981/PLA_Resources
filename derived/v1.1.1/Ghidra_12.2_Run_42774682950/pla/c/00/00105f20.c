/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00105f20; name: FUN_00105f20
 */


/* WARNING: Removing unreachable block (ram,0x001063c8) */
/* WARNING: Removing unreachable block (ram,0x001063d0) */
/* WARNING: Removing unreachable block (ram,0x001063e0) */
/* WARNING: Removing unreachable block (ram,0x00107698) */
/* WARNING: Removing unreachable block (ram,0x001063ec) */
/* WARNING: Removing unreachable block (ram,0x001063fc) */
/* WARNING: Removing unreachable block (ram,0x00106400) */
/* WARNING: Removing unreachable block (ram,0x00106408) */
/* WARNING: Removing unreachable block (ram,0x0010640c) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00105f20(code *param_1,undefined8 param_2,uint *param_3,uint *param_4,long *param_5)

{
  bool bVar1;
  uint *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ushort uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  char *pcVar22;
  undefined4 *puVar23;
  double *pdVar24;
  undefined8 *puVar25;
  uint uVar26;
  int iVar27;
  uint *puVar28;
  uint *puVar29;
  uint *puVar30;
  int *piVar31;
  char *pcVar32;
  long lVar33;
  ulong *puVar34;
  uint *puVar35;
  ulong uVar36;
  int iVar37;
  uint uVar38;
  byte *pbVar39;
  byte bVar40;
  int iVar41;
  undefined1 uVar42;
  char *pcVar43;
  uint *puVar44;
  uint *__s;
  uint *puVar45;
  int iVar46;
  uint uVar47;
  double dVar48;
  uint local_2bc;
  uint local_2ac;
  uint *local_2a0;
  uint local_298;
  uint local_294;
  undefined2 local_290;
  char local_28e;
  char acStack_28d [5];
  undefined1 auStack_288 [64];
  undefined1 local_248;
  undefined1 local_247 [446];
  byte bStack_89;
  uint auStack_88 [2];
  undefined2 local_78;
  char local_76;
  
  dVar13 = DAT_0388a810;
  dVar12 = DAT_0388a708;
  dVar11 = DAT_0388a660;
  puVar28 = (uint *)((ulong)&local_78 | 1);
  puVar2 = (uint *)(local_247 + 1);
  iVar46 = 0;
  puVar29 = (uint *)((ulong)&local_290 | 1);
  __s = param_3;
joined_r0x00105fdc:
  if (param_1 != (code *)0x0) {
    do {
      if (((ulong)param_4 & 3) == 0) {
        uVar26 = *param_4;
        while (uVar17 = (uVar26 ^ 0xffffffff) & 0x80808080,
              ((uVar26 ^ 0x25252525) + 0xfefefeff & uVar17) == 0) {
          if ((uVar17 & uVar26 + 0xfefefeff) != 0) goto LAB_00106054;
          if (((int)param_3 - (int)__s) + 0x200 < 4) break;
          *__s = uVar26;
          param_4 = param_4 + 1;
          __s = __s + 1;
          uVar26 = *param_4;
        }
        if ((uVar26 & 0xff) == 0x25) goto LAB_00106098;
      }
      else {
        uVar26 = (uint)(byte)*param_4;
        if ((byte)*param_4 == 0x25) goto LAB_00106098;
      }
LAB_00106054:
      bVar40 = (byte)uVar26;
      if ((uVar26 & 0xff) == 0) goto LAB_00108ce0;
      iVar16 = (int)__s - (int)param_3;
      puVar30 = __s;
      if (0x1ff < iVar16 + 1) {
        iVar46 = iVar46 + iVar16;
        param_3 = (uint *)(*param_1)(param_3,param_2);
        __s = (uint *)0x0;
        if (param_3 == (uint *)0x0) goto LAB_00108d14;
        bVar40 = (byte)*param_4;
        puVar30 = param_3;
      }
      param_4 = (uint *)((long)param_4 + 1);
      __s = (uint *)((long)puVar30 + 1);
      *(byte *)puVar30 = bVar40;
    } while( true );
  }
  while( true ) {
    if (((ulong)param_4 & 3) == 0) {
      uVar26 = *param_4;
      while (uVar17 = (uVar26 ^ 0xffffffff) & 0x80808080,
            ((uVar26 ^ 0x25252525) + 0xfefefeff & uVar17) == 0) {
        if ((uVar17 & uVar26 + 0xfefefeff) != 0) {
          bVar40 = (byte)*param_4;
          goto joined_r0x00108c9c;
        }
        *__s = uVar26;
        param_4 = param_4 + 1;
        __s = __s + 1;
        uVar26 = *param_4;
      }
    }
    bVar40 = (byte)*param_4;
    if (bVar40 == 0x25) break;
joined_r0x00108c9c:
    if (bVar40 == 0) goto LAB_00108ce0;
    param_4 = (uint *)((long)param_4 + 1);
    *(byte *)__s = bVar40;
    __s = (uint *)((long)__s + 1);
  }
LAB_00106098:
  local_2ac = 0;
  bVar40 = *(byte *)((long)param_4 + 1);
  pbVar21 = (byte *)((long)param_4 + 2);
  do {
    uVar26 = 2;
    switch(bVar40) {
    case 0x20:
      uVar26 = 4;
      break;
    default:
      goto switchD_001060cc_caseD_21;
    case 0x23:
      uVar26 = 8;
      break;
    case 0x24:
      uVar26 = 0x100;
      break;
    case 0x27:
      uVar26 = 0x40;
      break;
    case 0x2b:
      break;
    case 0x2d:
      uVar26 = 1;
      break;
    case 0x30:
      bVar40 = *pbVar21;
      local_2ac = local_2ac | 0x10;
      goto joined_r0x001061c8;
    }
    local_2ac = local_2ac | uVar26;
    bVar40 = *pbVar21;
    pbVar21 = pbVar21 + 1;
  } while( true );
switchD_001060cc_caseD_21:
  pbVar21 = pbVar21 + -1;
joined_r0x001061c8:
  uVar26 = (uint)bVar40;
  if (uVar26 == 0x2a) {
    iVar16 = (int)param_5[3];
    if ((iVar16 < 0) && (*(int *)(param_5 + 3) = iVar16 + 8, iVar16 + 8 < 1)) {
      iVar16 = *(int *)(param_5[1] + (long)iVar16);
      bVar40 = pbVar21[1];
    }
    else {
      piVar31 = (int *)*param_5;
      *param_5 = (long)(piVar31 + 2);
      iVar16 = *piVar31;
      bVar40 = pbVar21[1];
    }
    uVar26 = (uint)bVar40;
    pbVar21 = pbVar21 + 1;
joined_r0x001061fc:
    if (uVar26 == 0x2e) goto LAB_0010614c;
LAB_00106200:
    uVar17 = 0xffffffff;
    pbVar39 = pbVar21;
  }
  else {
    if (9 < uVar26 - 0x30) {
      iVar16 = 0;
      goto joined_r0x001061fc;
    }
    iVar16 = 0;
    do {
      iVar16 = iVar16 * 10 + uVar26 + -0x30;
      pbVar21 = pbVar21 + 1;
      uVar26 = (uint)*pbVar21;
    } while (uVar26 - 0x30 < 10);
    if (uVar26 != 0x2e) goto LAB_00106200;
LAB_0010614c:
    pbVar39 = pbVar21 + 1;
    uVar26 = (uint)*pbVar39;
    if (uVar26 == 0x2a) {
      iVar14 = (int)param_5[3];
      if ((iVar14 < 0) && (*(int *)(param_5 + 3) = iVar14 + 8, iVar14 + 8 < 1)) {
        puVar30 = (uint *)(param_5[1] + (long)iVar14);
      }
      else {
        puVar30 = (uint *)*param_5;
        *param_5 = (long)(puVar30 + 2);
      }
      uVar17 = *puVar30;
      pbVar39 = pbVar21 + 2;
      uVar26 = (uint)*pbVar39;
    }
    else if (uVar26 - 0x30 < 10) {
      uVar17 = 0;
      do {
        uVar17 = (uVar17 * 10 + uVar26) - 0x30;
        pbVar39 = pbVar39 + 1;
        uVar26 = (uint)*pbVar39;
      } while (uVar26 - 0x30 < 10);
    }
    else {
      uVar17 = 0;
    }
  }
  if (uVar26 - 0x49 < 0x32) {
                    /* WARNING: Could not recover jumptable at 0x001061ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar15 = (*(code *)(&UNK_001061b0 +
                       (ulong)(byte)"*YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY6Y"[uVar26 - 0x49] * 4))();
    return uVar15;
  }
  pcVar22 = "0123456789ABCDEFXP";
  pcVar32 = "0123456789ABCDEFXP";
  pcVar43 = "0123456789ABCDEFXP";
  iVar27 = (int)&local_248;
  iVar14 = (int)auStack_88;
  puVar30 = auStack_88;
  switch(*pbVar39) {
  case 0x41:
    goto switchD_00106350_caseD_41;
  case 0x42:
    goto switchD_00106350_caseD_42;
  default:
    local_2bc = 0;
    local_2ac = 0;
    uVar26 = 0;
    uVar17 = 0;
    iVar16 = 0;
    local_298 = 0;
    local_294 = 1;
    local_78 = local_78 & 0xff00;
    local_290 = local_290 & 0xff00;
    puVar30 = (uint *)&bStack_89;
    bStack_89 = *pbVar39;
    break;
  case 0x45:
    goto switchD_00106350_caseD_45;
  case 0x47:
    goto switchD_00106350_caseD_47;
  case 0x58:
    goto switchD_00106350_caseD_58;
  case 0x61:
    pcVar32 = "0123456789abcdefxp";
switchD_00106350_caseD_41:
    iVar14 = *(int *)((long)param_5 + 0x1c);
    if ((iVar14 < 0) && (*(int *)((long)param_5 + 0x1c) = iVar14 + 0x10, iVar14 + 0x10 < 1)) {
      puVar34 = (ulong *)(param_5[2] + (long)iVar14);
    }
    else {
      puVar34 = (ulong *)*param_5;
      *param_5 = (long)(puVar34 + 1);
    }
    uVar15 = *puVar34;
    uVar38 = 6;
    if (uVar17 != 0xffffffff) {
      uVar38 = uVar17;
    }
    uVar26 = (uint)(uVar15 >> 0x34) & 0x7ff;
    iVar14 = uVar26 - 0x3ff;
    if ((long)uVar15 < 0) {
      local_2ac = local_2ac | 0x80;
    }
    bVar40 = 0x2d;
    if ((local_2ac >> 7 & 1) == 0) {
      if ((local_2ac >> 2 & 1) != 0) {
        bVar40 = 0x20;
        goto LAB_0010706c;
      }
      bVar40 = 0x2b;
      if ((local_2ac >> 1 & 1) != 0) goto LAB_0010706c;
      uVar36 = 0;
      if (uVar26 == 0) goto LAB_001066c4;
LAB_00107080:
      uVar15 = uVar15 & 0xfffffffffffff | 0x10000000000000;
    }
    else {
LAB_0010706c:
      uVar36 = 1;
      local_78._1_1_ = bVar40;
      if (uVar26 != 0) goto LAB_00107080;
LAB_001066c4:
      uVar15 = uVar15 & 0xfffffffffffff;
      iVar14 = 0;
      if (uVar15 != 0) {
        iVar14 = -0x3fe;
      }
    }
    uVar15 = uVar15 * 0x100;
    if ((int)uVar38 < 0xf) {
      uVar15 = uVar15 + (0x800000000000000U >> ((ulong)(uVar38 << 2) & 0x3f));
    }
    *(undefined2 *)(((ulong)&local_78 | uVar36) + 1) = 0x7830;
    local_248 = pcVar32[uVar15 >> 0x3c];
    local_78 = CONCAT11(local_78._1_1_,(char)uVar36) | 2;
    local_2a0 = (uint *)local_247;
    if (uVar38 != 0) {
      local_247[0] = DAT_0411a1a8;
      local_2a0 = puVar2;
    }
    uVar17 = uVar38;
    if (0xc < uVar38) {
      uVar17 = 0xd;
    }
    uVar26 = uVar38 - uVar17;
    if (uVar26 == 0 || (int)uVar38 < (int)uVar17) {
      uVar26 = 0;
    }
    puVar30 = local_2a0;
    if (uVar17 != 0) {
      if (0xc < uVar38) {
        uVar38 = 0xd;
      }
      if ((uVar17 & 3) != 0) {
        iVar41 = -(uVar17 & 3);
        puVar35 = local_2a0;
        uVar36 = uVar15;
        do {
          uVar15 = uVar36 << 4;
          uVar17 = uVar17 - 1;
          iVar41 = iVar41 + 1;
          puVar30 = (uint *)((long)puVar35 + 1);
          *(char *)puVar35 = pcVar32[uVar36 >> 0x38 & 0xf];
          puVar35 = puVar30;
          uVar36 = uVar15;
        } while (iVar41 != 0);
      }
      puVar35 = puVar30;
      if (2 < uVar38 - 1) {
        do {
          cVar6 = pcVar32[uVar15 >> 0x34 & 0xf];
          *(char *)puVar35 = pcVar32[uVar15 >> 0x38 & 0xf];
          uVar36 = uVar15 >> 0x30;
          *(char *)((long)puVar35 + 1) = cVar6;
          uVar8 = uVar15 >> 0x2c;
          uVar15 = uVar15 << 0x10;
          uVar17 = uVar17 - 4;
          *(char *)((long)puVar35 + 2) = pcVar32[uVar36 & 0xf];
          puVar30 = puVar35 + 1;
          *(char *)((long)puVar35 + 3) = pcVar32[uVar8 & 0xf];
          puVar35 = puVar30;
        } while (uVar17 != 0);
      }
    }
    if (iVar14 < 0) {
      iVar14 = -iVar14;
      local_28e = '-';
      if (999 < iVar14) goto LAB_00107378;
LAB_00107398:
      uVar17 = 5;
      if ((iVar14 < 100) && (uVar17 = 3, 9 < iVar14)) {
        uVar17 = 4;
      }
    }
    else {
      local_28e = '+';
      if (iVar14 < 1000) goto LAB_00107398;
LAB_00107378:
      uVar17 = 6;
    }
    iVar41 = iVar14 / 10;
    uVar15 = (ulong)uVar17;
    local_290 = CONCAT11(pcVar32[0x11],(char)uVar17);
    acStack_28d[uVar15 - 3] = (char)iVar14 + (char)iVar41 * -10 + '0';
    if (3 < uVar17) {
      if ((uVar17 & 1) == 0) {
        acStack_28d[(ulong)(uVar17 - 1) - 3] =
             (char)iVar41 +
             ((char)((ulong)((long)iVar41 * 0x66666667) >> 0x22) - (char)(iVar41 >> 0x1f)) * -10 +
             '0';
        uVar15 = uVar15 - 1;
        iVar14 = iVar41;
      }
      if (uVar17 != 4) {
        pcVar43 = acStack_28d + ((ulong)((int)uVar15 - 2) - 3);
        do {
          iVar41 = iVar14 / 10;
          iVar14 = iVar14 / 100;
          iVar37 = (int)uVar15;
          uVar15 = uVar15 - 2;
          acStack_28d[(ulong)(iVar37 - 1) - 3] =
               (char)iVar41 +
               ((char)((ulong)((long)iVar41 * 0x66666667) >> 0x22) - (char)(iVar41 >> 0x1f)) * -10 +
               '0';
          *pcVar43 = (char)iVar14 +
                     ((char)((ulong)((long)iVar14 * 0x66666667) >> 0x22) - (char)(iVar14 >> 0x1f)) *
                     -10 + '0';
          pcVar43 = pcVar43 + -2;
        } while (3 < (uint)uVar15);
      }
    }
    local_294 = (int)puVar30 - iVar27;
    local_298 = (int)puVar30 - (int)local_2a0;
    uVar17 = 0;
    local_2bc = 0x3000001;
    puVar30 = (uint *)&local_248;
    break;
  case 0x62:
    pcVar22 = "0123456789abcdefxp";
    goto switchD_00106350_caseD_42;
  case 99:
    iVar14 = (int)param_5[3];
    if ((iVar14 < 0) && (*(int *)(param_5 + 3) = iVar14 + 8, iVar14 + 8 < 1)) {
      puVar23 = (undefined4 *)(param_5[1] + (long)iVar14);
    }
    else {
      puVar23 = (undefined4 *)*param_5;
      *param_5 = (long)(puVar23 + 2);
    }
    local_2bc = 0;
    uVar26 = 0;
    uVar17 = 0;
    local_298 = 0;
    local_294 = 1;
    local_78 = (ushort)local_78._1_1_ << 8;
    local_290 = local_290 & 0xff00;
    bStack_89 = (byte)*puVar23;
    puVar30 = (uint *)&bStack_89;
    break;
  case 100:
  case 0x69:
  case 0x75:
    iVar41 = (int)param_5[3];
    if ((iVar41 < 0) && (*(int *)(param_5 + 3) = iVar41 + 8, iVar41 + 8 < 1)) {
      puVar35 = (uint *)(param_5[1] + (long)iVar41);
    }
    else {
      puVar35 = (uint *)*param_5;
      *param_5 = (long)(puVar35 + 2);
    }
    uVar38 = *puVar35;
    uVar26 = local_2ac;
    uVar15 = (ulong)uVar38;
    if (*pbVar39 != 0x75) {
      uVar26 = local_2ac | 0x80;
      uVar15 = (ulong)-uVar38;
    }
    uVar36 = (ulong)uVar38;
    if ((uVar38 & 0x80000000) != 0) {
      local_2ac = uVar26;
      uVar36 = uVar15;
    }
    if (local_2ac >> 8 != 0) {
      if (uVar17 == 0xffffffff) {
        uVar17 = 1;
      }
      dVar48 = (double)uVar36;
      uVar26 = 0;
      if (0x3ff < uVar36) {
        uVar26 = uVar17;
      }
      uVar17 = uVar26;
      goto LAB_00106870;
    }
    local_294 = 0;
    puVar35 = auStack_88;
LAB_00106470:
    puVar45 = puVar35 + -2;
    if (uVar36 < 100000000) {
      uVar15 = uVar36;
      uVar36 = 0;
    }
    else {
      uVar15 = uVar36 % 100000000;
      uVar36 = uVar36 / 100000000;
    }
    iVar27 = (int)uVar15;
    if ((local_2ac >> 6 & 1) == 0) {
      puVar44 = puVar35;
      if (iVar27 != 0) {
        do {
          uVar26 = (uint)uVar15;
          puVar35 = (uint *)((long)puVar35 + -2);
          *(undefined2 *)puVar35 =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (ulong)(uVar26 + (int)(uVar15 / 100) * -100) * 2);
          uVar15 = uVar15 / 100;
          puVar44 = puVar35;
        } while (99 < uVar26);
      }
    }
    else {
      while( true ) {
        puVar44 = puVar35;
        if (iVar27 == 0) break;
        while( true ) {
          if (local_294 != 3) break;
          local_294 = 0;
          puVar45 = (uint *)((long)puVar45 + -1);
          puVar35 = (uint *)((long)puVar35 + -1);
          *(undefined1 *)puVar35 = DAT_0411a1ac;
          puVar44 = puVar35;
          if ((int)uVar15 == 0) goto joined_r0x001065a4;
        }
        uVar8 = uVar15 / 10;
        puVar35 = (uint *)((long)puVar35 + -1);
        *(byte *)puVar35 = (char)uVar15 + (char)uVar8 * -10 | 0x30;
        iVar27 = (int)uVar8;
        uVar15 = uVar8;
        local_294 = local_294 + 1;
      }
    }
joined_r0x001065a4:
    puVar35 = puVar45;
    if (uVar36 != 0) {
      if ((long)puVar44 - (long)puVar35 != 0) {
        if ((local_2ac >> 6 & 1) == 0) {
          memset(puVar35,0x30,(long)puVar44 - (long)puVar35);
          do {
            puVar44 = (uint *)((long)puVar44 + -1);
          } while (puVar35 != puVar44);
        }
        else {
          do {
            while (uVar26 = local_294 + 1, local_294 != 3) {
              puVar44 = (uint *)((long)puVar44 + -1);
              *(undefined1 *)puVar44 = 0x30;
              local_294 = uVar26;
              if (puVar44 == puVar35) goto LAB_00106470;
            }
            local_294 = 0;
            puVar35 = (uint *)((long)puVar35 + -1);
            puVar44 = (uint *)((long)puVar44 + -1);
            *(undefined1 *)puVar44 = DAT_0411a1ac;
          } while (puVar44 != puVar35);
        }
      }
      goto LAB_00106470;
    }
    if ((puVar44 != auStack_88) && (puVar30 = (uint *)((long)puVar44 + 1), (char)*puVar44 != '0')) {
      puVar30 = puVar44;
    }
    uVar42 = 0x2d;
    local_290 = local_290 & 0xff00;
    local_78 = local_78 & 0xff00;
    if ((local_2ac >> 7 & 1) == 0) {
      if ((local_2ac >> 2 & 1) != 0) {
        uVar42 = 0x20;
        goto LAB_001074f4;
      }
      uVar42 = 0x2b;
      if ((local_2ac >> 1 & 1) != 0) goto LAB_001074f4;
    }
    else {
LAB_001074f4:
      local_78 = CONCAT11(uVar42,1);
    }
    local_294 = iVar14 - (int)puVar30;
    if (local_294 == 0) {
      puVar30 = (uint *)((long)puVar30 + -1);
      *(undefined1 *)puVar30 = 0x30;
      local_294 = 1;
    }
    uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
    uVar26 = 0;
    local_2bc = local_294 + 0x3000000;
    break;
  case 0x65:
    pcVar43 = "0123456789abcdefxp";
switchD_00106350_caseD_45:
    iVar14 = *(int *)((long)param_5 + 0x1c);
    if ((iVar14 < 0) && (*(int *)((long)param_5 + 0x1c) = iVar14 + 0x10, iVar14 + 0x10 < 1)) {
      puVar25 = (undefined8 *)(param_5[2] + (long)iVar14);
    }
    else {
      puVar25 = (undefined8 *)*param_5;
      *param_5 = (long)(puVar25 + 1);
    }
    uVar38 = 6;
    if (uVar17 != 0xffffffff) {
      uVar38 = uVar17;
    }
    iVar14 = FUN_00108d50(*puVar25,&local_2a0,&local_294,auStack_288,&local_298,uVar38 | 0x80000000)
    ;
    if (iVar14 != 0) {
      local_2ac = local_2ac | 0x80;
    }
    local_290 = local_290 & 0xff00;
    local_78 = local_78 & 0xff00;
joined_r0x00107148:
    uVar42 = 0x2d;
    if ((local_2ac >> 7 & 1) == 0) {
LAB_00106834:
      if ((local_2ac >> 2 & 1) != 0) {
        uVar42 = 0x20;
        goto LAB_0010714c;
      }
      uVar42 = 0x2b;
      if ((local_2ac >> 1 & 1) != 0) goto LAB_0010714c;
    }
    else {
LAB_0010714c:
      local_78 = CONCAT11(uVar42,1);
    }
    if (local_298 == 0x7000) {
LAB_0010716c:
      local_2bc = 0;
      uVar26 = 0;
      uVar17 = 0;
      puVar30 = local_2a0;
    }
    else {
      local_248 = (char)*local_2a0;
      puVar30 = (uint *)local_247;
      if (uVar38 != 0) {
        local_247[0] = DAT_0411a1a8;
        puVar30 = puVar2;
      }
      if (uVar38 < local_294 - 1) {
        local_294 = uVar38 + 1;
      }
      puVar35 = puVar30;
      if (1 < local_294) {
        puVar35 = (uint *)((long)puVar30 + 1);
        *(undefined1 *)puVar30 = *(undefined1 *)((long)local_2a0 + 1);
        if (2 < local_294) {
          lVar33 = 0;
          do {
            lVar3 = lVar33 + 1;
            *(undefined1 *)((long)puVar35 + lVar33) = *(undefined1 *)((long)local_2a0 + lVar33 + 2);
            uVar15 = lVar33 + 3;
            lVar33 = lVar3;
          } while (uVar15 < local_294);
          puVar35 = (uint *)((long)puVar35 + lVar3);
        }
      }
      iVar14 = (int)puVar35;
      iVar41 = local_298 - 1;
      if (iVar41 < 0) {
        local_28e = '-';
        iVar41 = 1 - local_298;
      }
      else {
        local_28e = '+';
      }
      uVar26 = (uVar38 + 1) - local_294;
      uVar17 = 4;
      if (99 < iVar41) {
        uVar17 = 5;
      }
      local_298 = iVar41 / 10;
      local_290 = CONCAT11(pcVar43[0xe],(char)uVar17);
      acStack_28d[(ulong)uVar17 - 3] = (char)iVar41 + (char)local_298 * -10 + '0';
      acStack_28d[(ulong)(uVar17 - 1) - 3] =
           (char)local_298 +
           ((char)((ulong)((long)(int)local_298 * 0x66666667) >> 0x22) -
           (char)((int)local_298 >> 0x1f)) * -10 + '0';
      if (3 < uVar17 - 1) {
        local_298 = iVar41 / 100;
        acStack_28d[(ulong)(uVar17 - 2) - 3] =
             (char)local_298 +
             ((char)((ulong)((long)(int)local_298 * 0x66666667) >> 0x22) -
             (char)((int)local_298 >> 0x1f)) * -10 + '0';
      }
      local_2bc = 0x3000001;
LAB_00107ad4:
      local_294 = iVar14 - iVar27;
      uVar17 = 0;
      puVar30 = (uint *)&local_248;
    }
    break;
  case 0x66:
    iVar14 = *(int *)((long)param_5 + 0x1c);
    if ((iVar14 < 0) && (*(int *)((long)param_5 + 0x1c) = iVar14 + 0x10, iVar14 + 0x10 < 1)) {
      pdVar24 = (double *)(param_5[2] + (long)iVar14);
    }
    else {
      pdVar24 = (double *)*param_5;
      *param_5 = (long)(pdVar24 + 1);
    }
    dVar48 = *pdVar24;
LAB_00106870:
    if (((local_2ac & 0xfc000100) == 0x100) && ((dVar13 <= dVar48 || (dVar48 <= dVar11)))) {
      dVar48 = dVar48 * dVar12;
      if ((dVar13 <= dVar48) || (uVar26 = local_2ac + 0x1000000, dVar48 <= dVar11)) {
        dVar48 = dVar48 * dVar12;
        if ((dVar13 <= dVar48) || (uVar26 = local_2ac + 0x2000000, dVar48 <= dVar11)) {
          dVar48 = dVar48 * dVar12;
          if ((dVar13 <= dVar48) || (uVar26 = local_2ac + 0x3000000, dVar48 <= dVar11)) {
            dVar48 = dVar48 * dVar12;
            uVar26 = local_2ac + 0x4000000;
            if ((0xfbffffff < local_2ac) && ((dVar13 <= dVar48 || (dVar48 <= dVar11)))) {
              dVar48 = dVar48 * dVar12;
              local_2ac = local_2ac + 0x5000000;
              goto LAB_00106e34;
            }
          }
        }
      }
      local_2ac = uVar26;
    }
LAB_00106e34:
    uVar26 = 6;
    if (uVar17 != 0xffffffff) {
      uVar26 = uVar17;
    }
    iVar14 = FUN_00108d50(dVar48,&local_2a0,&local_294,auStack_288,&local_298,uVar26);
    if (iVar14 != 0) {
      local_2ac = local_2ac | 0x80;
    }
    local_290 = local_290 & 0xff00;
    local_78 = local_78 & 0xff00;
    goto joined_r0x00106e80;
  case 0x67:
    pcVar43 = "0123456789abcdefxp";
switchD_00106350_caseD_47:
    iVar14 = *(int *)((long)param_5 + 0x1c);
    if ((iVar14 < 0) && (*(int *)((long)param_5 + 0x1c) = iVar14 + 0x10, iVar14 + 0x10 < 1)) {
      puVar25 = (undefined8 *)(param_5[2] + (long)iVar14);
    }
    else {
      puVar25 = (undefined8 *)*param_5;
      *param_5 = (long)(puVar25 + 1);
    }
    if (uVar17 == 0xffffffff) {
      uVar17 = 6;
    }
    else if (uVar17 == 0) {
      uVar17 = 1;
    }
    iVar14 = FUN_00108d50(*puVar25,&local_2a0,&local_294,auStack_288,&local_298,
                          uVar17 - 1 | 0x80000000);
    if (iVar14 != 0) {
      local_2ac = local_2ac | 0x80;
    }
    if (uVar17 < local_294) {
      local_294 = uVar17;
    }
    uVar38 = uVar17;
    if (local_294 < 2) {
      bVar1 = true;
    }
    else {
      while (uVar26 = local_294 - 1, *(char *)((long)local_2a0 + (ulong)uVar26) == '0') {
        uVar38 = uVar38 - 1;
        bVar1 = uVar38 != 0;
        local_294 = uVar26;
        if ((uVar38 == 0) || (uVar26 < 2)) goto joined_r0x00107044;
      }
      bVar1 = true;
    }
joined_r0x00107044:
    if (((int)local_298 < -3) || ((int)uVar17 < (int)local_298)) {
      if ((int)uVar38 <= (int)local_294) {
        uVar38 = uVar38 - 1;
        if (!bVar1) {
          uVar38 = 0;
        }
        local_290 = (ushort)local_290._1_1_ << 8;
        local_78 = (ushort)local_78._1_1_ << 8;
        goto joined_r0x00107148;
      }
      uVar38 = local_294 - 1;
      uVar42 = 0x2d;
      local_290 = (ushort)local_290._1_1_ << 8;
      local_78 = (ushort)local_78._1_1_ << 8;
      if ((local_2ac >> 7 & 1) == 0) goto LAB_00106834;
      goto LAB_0010714c;
    }
    if ((int)local_298 < 1) {
      uVar26 = local_294;
      if ((int)uVar38 <= (int)local_294) {
        uVar26 = uVar38;
      }
      uVar26 = uVar26 - local_298;
      local_290 = (ushort)local_290._1_1_ << 8;
      local_78 = (ushort)local_78._1_1_ << 8;
joined_r0x00106e80:
      uVar42 = 0x2d;
      if ((local_2ac >> 7 & 1) == 0) goto LAB_00106e84;
LAB_00106e98:
      local_78 = CONCAT11(uVar42,1);
    }
    else {
      uVar26 = local_294 - local_298;
      if (uVar26 == 0 || (int)local_294 < (int)local_298) {
        uVar26 = 0;
      }
      uVar42 = 0x2d;
      local_290 = (ushort)local_290._1_1_ << 8;
      local_78 = (ushort)local_78._1_1_ << 8;
      if ((local_2ac >> 7 & 1) != 0) goto LAB_00106e98;
LAB_00106e84:
      if ((local_2ac >> 2 & 1) != 0) {
        uVar42 = 0x20;
        goto LAB_00106e98;
      }
      uVar42 = 0x2b;
      if ((local_2ac >> 1 & 1) != 0) goto LAB_00106e98;
    }
    uVar17 = local_298;
    if (local_298 == 0x7000) goto LAB_0010716c;
    if ((int)local_298 < 1) {
      local_248 = '0';
      puVar30 = (uint *)local_247;
      if (uVar26 != 0) {
        local_247[0] = DAT_0411a1a8;
        puVar30 = puVar2;
      }
      uVar38 = uVar26;
      if ((int)-local_298 <= (int)uVar26) {
        uVar38 = -local_298;
      }
      if (uVar38 != 0) {
        uVar18 = local_298 - 1;
        if ((int)uVar18 <= (int)~uVar26) {
          uVar18 = ~uVar26;
        }
        uVar19 = -uVar18 - 5;
        puVar35 = puVar30;
        uVar18 = uVar38;
LAB_00106fac:
        if (((ulong)puVar35 & 3) != 0) goto code_r0x00106fb4;
        uVar47 = uVar18 - 4;
        puVar30 = puVar35;
        if (3 < (int)uVar18) {
          memset(puVar35,0x30,(ulong)(uVar47 & 0xfffffffc) + 4);
          if (((uVar47 >> 2) + 1 & 7) != 0) {
            iVar14 = 0;
            lVar33 = 0;
            iVar41 = -((uVar19 >> 2) + 1 & 7);
            do {
              lVar33 = lVar33 + -4;
              iVar14 = iVar14 + 4;
              iVar41 = iVar41 + 1;
            } while (iVar41 != 0);
            puVar35 = (uint *)((long)puVar35 - lVar33);
            uVar18 = uVar18 - iVar14;
          }
          if (0x1b < uVar47) {
            do {
              uVar18 = uVar18 - 0x20;
              puVar35 = puVar35 + 8;
            } while (3 < (int)uVar18);
          }
          uVar18 = uVar47 & 3;
          puVar30 = puVar35;
        }
        if (uVar18 != 0) {
          memset(puVar30,0x30,(ulong)uVar18);
          uVar19 = uVar18 - 1;
          if ((uVar18 & 7) != 0) {
            iVar14 = -(uVar18 & 7);
            do {
              puVar30 = (uint *)((long)puVar30 + 1);
              uVar18 = uVar18 - 1;
              iVar14 = iVar14 + 1;
            } while (iVar14 != 0);
          }
          if (6 < uVar19) {
            do {
              puVar30 = puVar30 + 2;
              uVar18 = uVar18 - 8;
            } while (uVar18 != 0);
          }
        }
      }
LAB_00107804:
      uVar18 = local_294;
      if ((int)uVar26 < (int)(local_294 + uVar38)) {
        local_294 = uVar26 - uVar38;
      }
      if (local_294 != 0) {
        uVar17 = uVar17 - 1;
        if ((int)uVar17 <= (int)~uVar26) {
          uVar17 = ~uVar26;
        }
        uVar19 = uVar18 + ~uVar17;
        if ((int)uVar26 <= (int)(uVar18 + ~uVar17)) {
          uVar19 = uVar26;
        }
        uVar18 = local_294;
        if ((local_294 & 3) != 0) {
          iVar14 = -(local_294 & 3);
          puVar35 = puVar30;
          do {
            puVar45 = (uint *)((long)local_2a0 + 1);
            uVar18 = uVar18 - 1;
            iVar14 = iVar14 + 1;
            puVar30 = (uint *)((long)puVar35 + 1);
            *(char *)puVar35 = (char)*local_2a0;
            puVar35 = puVar30;
            local_2a0 = puVar45;
          } while (iVar14 != 0);
        }
        puVar35 = puVar30;
        if (2 < uVar17 + uVar19) {
          do {
            *(char *)puVar35 = (char)*local_2a0;
            *(undefined1 *)((long)puVar35 + 1) = *(undefined1 *)((long)local_2a0 + 1);
            puVar4 = (undefined1 *)((long)local_2a0 + 3);
            *(undefined1 *)((long)puVar35 + 2) = *(undefined1 *)((long)local_2a0 + 2);
            local_2a0 = local_2a0 + 1;
            puVar30 = puVar35 + 1;
            *(undefined1 *)((long)puVar35 + 3) = *puVar4;
            uVar18 = uVar18 - 4;
            puVar35 = puVar30;
          } while (uVar18 != 0);
        }
      }
      uVar26 = (uVar26 - uVar38) - local_294;
      local_2bc = 0x3000001;
    }
    else {
      if ((local_2ac >> 6 & 1) == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = (600 - local_298) % 3;
      }
      if (local_298 < local_294) {
        if ((local_2ac >> 6 & 1) == 0) {
          uVar15 = 0;
          do {
            uVar36 = uVar15;
            uVar15 = uVar36 + 1;
            auStack_288[uVar36 + 0x40] = *(undefined1 *)((long)local_2a0 + uVar36);
          } while (uVar15 < local_298);
          puVar30 = (uint *)(auStack_288 + uVar36 + 0x40);
          puVar35 = (uint *)(local_247 + uVar36);
          if (uVar26 == 0) goto LAB_00106f58;
LAB_001075b8:
          uVar17 = (uint)uVar15;
          *(undefined1 *)puVar35 = DAT_0411a1a8;
          puVar30 = (uint *)((long)puVar30 + 2);
        }
        else {
          uVar15 = 0;
          puVar35 = (uint *)&local_248;
          do {
            uVar17 = uVar17 + 1;
            puVar30 = puVar35;
            if (uVar17 == 4) {
              puVar30 = (uint *)((long)puVar35 + 1);
              *(undefined1 *)puVar35 = DAT_0411a1ac;
              uVar17 = 1;
            }
            puVar4 = (undefined1 *)((long)local_2a0 + uVar15);
            uVar38 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar38;
            puVar35 = (uint *)((long)puVar30 + 1);
            *(undefined1 *)puVar30 = *puVar4;
          } while (uVar38 < local_298);
          puVar35 = (uint *)((long)puVar30 + 1);
          if (uVar26 != 0) goto LAB_001075b8;
LAB_00106f58:
          uVar17 = (uint)uVar15;
          puVar30 = puVar35;
        }
        if (uVar26 < local_294 - local_298) {
          local_294 = local_298 + uVar26;
        }
        local_2bc = ((int)puVar35 - iVar27) + 0x3000000;
        if (uVar17 < local_294) {
          uVar15 = (ulong)uVar17;
          puVar35 = puVar30;
          do {
            puVar4 = (undefined1 *)((long)local_2a0 + uVar15);
            uVar15 = uVar15 + 1;
            puVar30 = (uint *)((long)puVar35 + 1);
            *(undefined1 *)puVar35 = *puVar4;
            puVar35 = puVar30;
          } while (uVar15 < local_294);
        }
        uVar26 = (uVar26 - local_294) + local_298;
      }
      else {
        if ((local_2ac >> 6 & 1) != 0) {
          uVar15 = 0;
          uVar17 = uVar17 + 1;
          puVar35 = (uint *)local_247;
          if (uVar17 != 4) goto LAB_00107014;
          do {
            uVar17 = 0;
            *(undefined1 *)((long)puVar35 + -1) = DAT_0411a1ac;
            while( true ) {
              uVar17 = uVar17 + 1;
              puVar35 = (uint *)((long)puVar35 + 1);
              if (uVar17 == 4) break;
LAB_00107014:
              *(undefined1 *)((long)puVar35 + -1) = *(undefined1 *)((long)local_2a0 + uVar15);
              uVar38 = (int)uVar15 + 1;
              uVar15 = (ulong)uVar38;
              if (local_294 <= uVar38) goto LAB_00107654;
            }
          } while( true );
        }
        uVar15 = 0;
        do {
          *(undefined1 *)((long)&local_248 + uVar15) = *(undefined1 *)((long)local_2a0 + uVar15);
          uVar15 = uVar15 + 1;
        } while (uVar15 < local_294);
        puVar35 = (uint *)((long)&local_248 + uVar15);
LAB_00107654:
        uVar18 = (uint)uVar15;
        uVar38 = local_298 - uVar18;
        puVar30 = puVar35;
        if (uVar18 <= local_298 && uVar38 != 0) {
          if ((local_2ac >> 6 & 1) == 0) {
            if (uVar38 != 0) {
              uVar18 = (local_298 - 4) - uVar18;
LAB_00107670:
              if (((ulong)puVar35 & 3) != 0) goto code_r0x00107678;
              uVar19 = uVar38 - 4;
              puVar30 = puVar35;
              uVar10 = local_78;
              if (3 < uVar38) {
                memset(puVar35,0x30,(ulong)(uVar19 & 0xfffffffc) + 4);
                if (((uVar19 >> 2) + 1 & 7) != 0) {
                  iVar14 = 0;
                  lVar33 = 0;
                  iVar41 = -((uVar18 >> 2) + 1 & 7);
                  do {
                    lVar33 = lVar33 + -4;
                    iVar14 = iVar14 + 4;
                    iVar41 = iVar41 + 1;
                  } while (iVar41 != 0);
                  puVar35 = (uint *)((long)puVar35 - lVar33);
                  uVar38 = uVar38 - iVar14;
                }
                if (0x1b < uVar19) {
                  do {
                    uVar38 = uVar38 - 0x20;
                    puVar35 = puVar35 + 8;
                  } while (3 < uVar38);
                }
                uVar38 = uVar19 & 3;
                goto LAB_001079bc;
              }
              goto joined_r0x001079c0;
            }
          }
          else {
LAB_001079bc:
            puVar30 = puVar35;
            uVar10 = local_78;
            if (uVar38 != 0) {
joined_r0x001079c0:
              puVar35 = puVar30;
              local_78 = uVar10;
              if ((local_2ac >> 6 & 1) == 0) {
                memset(puVar30,0x30,(ulong)uVar38);
                uVar17 = uVar38 - 1;
                if ((uVar38 & 7) != 0) {
                  iVar14 = -(uVar38 & 7);
                  do {
                    uVar38 = uVar38 - 1;
                    puVar30 = (uint *)((long)puVar30 + 1);
                    iVar14 = iVar14 + 1;
                  } while (iVar14 != 0);
                }
                if (6 < uVar17) {
                  do {
                    uVar38 = uVar38 - 8;
                    puVar30 = puVar30 + 2;
                  } while (uVar38 != 0);
                }
              }
              else {
                do {
                  while (uVar17 = uVar17 + 1, uVar17 == 4) {
                    uVar17 = 0;
                    puVar30 = (uint *)((long)puVar35 + 1);
                    *(undefined1 *)puVar35 = DAT_0411a1ac;
                    puVar35 = puVar30;
                    if (uVar38 == 0) goto LAB_00107a70;
                  }
                  puVar30 = (uint *)((long)puVar35 + 1);
                  *(undefined1 *)puVar35 = 0x30;
                  uVar38 = uVar38 - 1;
                  puVar35 = puVar30;
                } while (uVar38 != 0);
              }
            }
          }
        }
LAB_00107a70:
        local_2bc = ((int)puVar30 - iVar27) + 0x3000000;
        if (uVar26 != 0) {
          *(undefined1 *)puVar30 = DAT_0411a1a8;
          puVar30 = (uint *)((long)puVar30 + 1);
        }
      }
    }
    iVar14 = (int)puVar30;
    if ((local_2ac >> 8 & 1) != 0) {
      local_290 = 0x2001;
      if (local_2ac >> 0x18 != 0) {
        local_28e = "_kmgt"[local_2ac >> 0x18];
        local_290 = 0x2002;
      }
    }
    goto LAB_00107ad4;
  case 0x6e:
    iVar16 = (int)param_5[3];
    if ((iVar16 < 0) && (*(int *)(param_5 + 3) = iVar16 + 8, iVar16 + 8 < 1)) {
      puVar25 = (undefined8 *)(param_5[1] + (long)iVar16);
    }
    else {
      puVar25 = (undefined8 *)*param_5;
      *param_5 = (long)(puVar25 + 1);
    }
    *(int *)*puVar25 = iVar46 + ((int)__s - (int)param_3);
    goto LAB_00108c3c;
  case 0x6f:
    local_78 = (ushort)local_78._1_1_ << 8;
    if ((local_2ac >> 3 & 1) != 0) {
      local_78 = 0x3001;
    }
    local_294 = 0x330;
    uVar15 = 0x330;
    pcVar22 = "0123456789ABCDEFXP";
    lVar33 = (long)(int)param_5[3];
    goto LAB_00106b6c;
  case 0x70:
    uVar17 = 0x10;
    pcVar22 = "0123456789ABCDEFXP";
    uVar26 = local_2ac & 8;
    local_2ac = local_2ac & 0xffffffcf | 0x20;
    goto joined_r0x00106984;
  case 0x73:
    iVar14 = (int)param_5[3];
    if ((iVar14 < 0) && (*(int *)(param_5 + 3) = iVar14 + 8, iVar14 + 8 < 1)) {
      puVar25 = (undefined8 *)(param_5[1] + (long)iVar14);
    }
    else {
      puVar25 = (undefined8 *)*param_5;
      *param_5 = (long)(puVar25 + 1);
    }
    puVar30 = (uint *)&DAT_038aa121;
    if ((uint *)*puVar25 != (uint *)0x0) {
      puVar30 = (uint *)*puVar25;
    }
    puVar35 = puVar30;
    if ((int)uVar17 < 0) {
      do {
        local_2a0 = puVar35;
        if ((((ulong)puVar35 & 3) == 0) &&
           (((*puVar35 ^ 0xffffffff) & 0x80808080 & *puVar35 + 0xfefefeff) == 0)) {
          iVar14 = 2;
          do {
            puVar35 = puVar35 + 1;
            local_2a0 = puVar35;
            if (iVar14 == 0) break;
            iVar14 = iVar14 + 1;
          } while (((*puVar35 ^ 0xffffffff) & 0x80808080 & *puVar35 + 0xfefefeff) == 0);
        }
        puVar35 = (uint *)((long)local_2a0 + 1);
      } while ((char)*local_2a0 != '\0');
    }
    else {
      do {
        local_2a0 = puVar35;
        if (((ulong)puVar35 & 3) == 0) {
          uVar38 = (int)puVar35 - (int)puVar30;
          uVar26 = uVar17 - uVar38;
          if (uVar17 < uVar38 || uVar26 == 0) break;
          uVar26 = uVar26 >> 2;
          if (uVar26 == 0) {
            cVar6 = (char)*puVar35;
            puVar35 = (uint *)((long)puVar35 + 1);
          }
          else if (((*puVar35 ^ 0xffffffff) & 0x80808080 & *puVar35 + 0xfefefeff) == 0) {
            iVar14 = -uVar26;
            do {
              puVar45 = puVar35;
              iVar14 = iVar14 + 1;
              local_2a0 = puVar45 + 1;
              if (iVar14 == 0) {
                cVar6 = (char)*local_2a0;
                puVar35 = (uint *)((long)puVar45 + 5);
                goto joined_r0x00106aa0;
              }
              puVar35 = local_2a0;
            } while (((*local_2a0 ^ 0xffffffff) & 0x80808080 & *local_2a0 + 0xfefefeff) == 0);
            cVar6 = (char)*local_2a0;
            puVar35 = (uint *)((long)puVar45 + 5);
          }
          else {
            cVar6 = (char)*puVar35;
            puVar35 = (uint *)((long)puVar35 + 1);
          }
        }
        else {
          cVar6 = (char)*puVar35;
          puVar35 = (uint *)((long)puVar35 + 1);
        }
joined_r0x00106aa0:
      } while (cVar6 != '\0');
    }
    uVar26 = (int)local_2a0 - (int)puVar30;
    local_294 = uVar17;
    if (uVar26 <= uVar17) {
      local_294 = uVar26;
    }
    local_2bc = 0;
    uVar26 = 0;
    local_78 = (ushort)local_78._1_1_ << 8;
    local_290 = (ushort)local_290._1_1_ << 8;
    local_298 = 0;
    uVar17 = 0;
    break;
  case 0x78:
    pcVar22 = "0123456789abcdefxp";
switchD_00106350_caseD_58:
    uVar26 = local_2ac >> 3 & 1;
joined_r0x00106984:
    local_78 = (ushort)local_78._1_1_ << 8;
    if (uVar26 != 0) {
      local_78 = 0x3002;
      local_76 = pcVar22[0x10];
    }
    local_294 = 0x440;
    uVar15 = 0x440;
    iVar27 = (int)param_5[3];
    lVar33 = (long)iVar27;
    if ((local_2ac >> 5 & 1) == 0) goto LAB_00106b6c;
    if ((iVar27 < 0) && (*(int *)(param_5 + 3) = iVar27 + 8, iVar27 + 8 < 1)) {
      uVar36 = *(ulong *)(param_5[1] + lVar33);
    }
    else {
      puVar34 = (ulong *)*param_5;
      *param_5 = (long)(puVar34 + 1);
      uVar36 = *puVar34;
    }
    goto LAB_00106b98;
  }
LAB_00107ae4:
  uVar18 = (uint)(byte)local_78;
  uVar19 = (uint)(byte)local_78;
  uVar38 = local_294;
  if ((int)local_294 <= (int)uVar17) {
    uVar38 = uVar17;
  }
  iVar14 = uVar26 + uVar19 + uVar38 + (uint)(byte)local_290;
  uVar38 = uVar38 - local_294;
  iVar27 = iVar14;
  if (iVar14 <= iVar16) {
    iVar27 = iVar16;
  }
  uVar17 = iVar27 - iVar14;
  puVar35 = puVar28;
  if ((local_2ac & 1) == 0) {
    if ((local_2ac >> 4 & 1) == 0) {
      local_2ac = local_2ac & 0xffffffbf;
      goto LAB_00107b28;
    }
    uVar47 = uVar17;
    if ((int)uVar17 <= (int)uVar38) {
      uVar47 = uVar38;
    }
    uVar17 = 0;
    if (uVar47 == 0) goto LAB_00107b30;
LAB_00107d1c:
    if (((local_2ac & 1) == 0) && (0 < (int)uVar17)) {
      do {
        if (param_1 == (code *)0x0) {
LAB_00107f78:
          uVar18 = 0;
LAB_00107f7c:
          uVar38 = uVar17 - 4;
LAB_00107f84:
          if (((ulong)__s & 3) != 0) goto code_r0x00107f8c;
          uVar19 = uVar17 - 4;
          if (3 < (int)uVar17) {
            memset(__s,0x20,(ulong)(uVar19 & 0xfffffffc) + 4);
            if (((uVar19 >> 2) + 1 & 7) != 0) {
              iVar16 = 0;
              lVar33 = 0;
              iVar14 = -((uVar38 >> 2) + 1 & 7);
              do {
                lVar33 = lVar33 + -4;
                iVar16 = iVar16 + 4;
                iVar14 = iVar14 + 1;
              } while (iVar14 != 0);
              __s = (uint *)((long)__s - lVar33);
              uVar17 = uVar17 - iVar16;
            }
            if (0x1b < uVar19) {
              do {
                uVar17 = uVar17 - 0x20;
                __s = __s + 8;
              } while (3 < (int)uVar17);
            }
            uVar17 = uVar19 & 3;
          }
          if (uVar17 == 0) {
            uVar17 = uVar18;
            if (param_1 != (code *)0x0) goto LAB_00108084;
            goto joined_r0x00107f10;
          }
          memset(__s,0x20,(ulong)uVar17);
          uVar38 = uVar17 - 1;
          puVar45 = __s;
          if ((uVar17 & 7) != 0) {
            iVar16 = -(uVar17 & 7);
            do {
              __s = (uint *)((long)__s + 1);
              uVar17 = uVar17 - 1;
              iVar16 = iVar16 + 1;
              puVar45 = __s;
            } while (iVar16 != 0);
          }
          if (6 < uVar38) {
            do {
              puVar45 = puVar45 + 2;
              uVar17 = uVar17 - 8;
            } while (uVar17 != 0);
          }
LAB_00108080:
          __s = puVar45;
          uVar17 = uVar18;
          if (param_1 == (code *)0x0) goto joined_r0x00107f10;
          goto LAB_00108084;
        }
        uVar38 = ((int)param_3 - (int)__s) + 0x200;
        uVar18 = uVar17 - uVar38;
        if (uVar18 == 0 || (int)uVar17 < (int)uVar38) goto LAB_00107f78;
        uVar17 = uVar38;
        if (uVar38 != 0) goto LAB_00107f7c;
LAB_00108084:
        iVar16 = (int)__s - (int)param_3;
        uVar17 = uVar18;
        if (0x1ff < iVar16 + 1) {
          iVar46 = iVar46 + iVar16;
          __s = (uint *)(*param_1)(param_3,param_2);
          param_3 = __s;
          if (__s == (uint *)0x0) goto LAB_00108d14;
        }
joined_r0x00107f10:
      } while (0 < (int)uVar17);
      uVar19 = (uint)(byte)local_78;
    }
    local_2a0 = puVar28;
    if (uVar19 != 0) {
      if (param_1 == (code *)0x0) {
        uVar38 = uVar19 - 1;
        local_78 = local_78 & 0xff00;
        if ((uVar19 & 3) != 0) {
          iVar16 = -(uVar19 & 3);
          puVar45 = __s;
          do {
            puVar44 = (uint *)((long)local_2a0 + 1);
            uVar19 = uVar19 - 1;
            iVar16 = iVar16 + 1;
            __s = (uint *)((long)puVar45 + 1);
            *(char *)puVar45 = (char)*local_2a0;
            puVar45 = __s;
            local_2a0 = puVar44;
          } while (iVar16 != 0);
        }
        puVar45 = __s;
        if (2 < uVar38) {
          do {
            *(char *)puVar45 = (char)*local_2a0;
            *(undefined1 *)((long)puVar45 + 1) = *(undefined1 *)((long)local_2a0 + 1);
            puVar4 = (undefined1 *)((long)local_2a0 + 3);
            *(undefined1 *)((long)puVar45 + 2) = *(undefined1 *)((long)local_2a0 + 2);
            local_2a0 = local_2a0 + 1;
            __s = puVar45 + 1;
            *(undefined1 *)((long)puVar45 + 3) = *puVar4;
            uVar19 = uVar19 - 4;
            puVar45 = __s;
          } while (uVar19 != 0);
        }
      }
      else {
        do {
          iVar14 = (int)param_3;
          iVar16 = (int)__s - iVar14;
          uVar38 = 0x200U - iVar16;
          if ((int)uVar19 <= (int)(0x200U - iVar16)) {
            uVar38 = uVar19;
          }
          local_78 = CONCAT11(local_78._1_1_,(char)uVar19 - (char)uVar38);
          if (uVar38 != 0) {
            uVar18 = ((int)__s + -0x201) - iVar14;
            if ((int)uVar18 <= (int)~uVar19) {
              uVar18 = ~uVar19;
            }
            if ((uVar38 & 3) != 0) {
              iVar16 = -(uVar38 & 3);
              puVar45 = __s;
              do {
                puVar44 = (uint *)((long)local_2a0 + 1);
                uVar38 = uVar38 - 1;
                iVar16 = iVar16 + 1;
                __s = (uint *)((long)puVar45 + 1);
                *(char *)puVar45 = (char)*local_2a0;
                puVar45 = __s;
                local_2a0 = puVar44;
              } while (iVar16 != 0);
            }
            puVar45 = __s;
            if (2 < -uVar18 - 2) {
              do {
                *(char *)puVar45 = (char)*local_2a0;
                *(undefined1 *)((long)puVar45 + 1) = *(undefined1 *)((long)local_2a0 + 1);
                puVar4 = (undefined1 *)((long)local_2a0 + 3);
                *(undefined1 *)((long)puVar45 + 2) = *(undefined1 *)((long)local_2a0 + 2);
                local_2a0 = local_2a0 + 1;
                __s = puVar45 + 1;
                *(undefined1 *)((long)puVar45 + 3) = *puVar4;
                uVar38 = uVar38 - 4;
                puVar45 = __s;
              } while (uVar38 != 0);
            }
            iVar16 = (int)__s - iVar14;
          }
          if (0x1ff < iVar16 + 1) {
            iVar46 = iVar46 + iVar16;
            param_3 = (uint *)(*param_1)(param_3,param_2);
            __s = param_3;
            if (param_3 == (uint *)0x0) goto LAB_00108d14;
          }
          uVar19 = (uint)(byte)local_78;
        } while (uVar19 != 0);
      }
    }
    uVar18 = local_2bc >> 0x18;
    uVar38 = local_294;
    if ((local_2ac >> 6 & 1) == 0) {
      uVar19 = 0;
      if (0 < (int)uVar47) {
LAB_00108564:
        do {
          while( true ) {
            uVar38 = uVar47;
            if ((param_1 != (code *)0x0) &&
               (uVar38 = ((int)param_3 - (int)__s) + 0x200, (int)uVar47 <= (int)uVar38)) {
              uVar38 = uVar47;
            }
            uVar20 = uVar38;
            if ((local_2ac >> 6 & 1) != 0) break;
            if (uVar38 == 0) goto LAB_00108558;
            uVar9 = uVar38 - 4;
            puVar45 = __s;
            do {
              uVar15 = (ulong)uVar20;
              if (((ulong)puVar45 & 3) == 0) {
                uVar7 = uVar20 - 4;
                __s = puVar45;
                if (3 < (int)uVar20) {
                  memset(puVar45,0x30,(ulong)(uVar7 & 0xfffffffc) + 4);
                  if (((uVar7 >> 2) + 1 & 7) != 0) {
                    iVar16 = 0;
                    lVar33 = 0;
                    iVar14 = -((uVar9 >> 2) + 1 & 7);
                    do {
                      lVar33 = lVar33 + -4;
                      iVar16 = iVar16 + 4;
                      iVar14 = iVar14 + 1;
                    } while (iVar14 != 0);
                    puVar45 = (uint *)((long)puVar45 - lVar33);
                    uVar15 = (ulong)(uVar20 - iVar16);
                  }
                  if (0x1b < uVar7) {
                    do {
                      uVar20 = (int)uVar15 - 0x20;
                      uVar15 = (ulong)uVar20;
                      puVar45 = puVar45 + 8;
                    } while (3 < (int)uVar20);
                  }
                  __s = puVar45;
                  uVar20 = uVar7 & 3;
                  goto joined_r0x00108608;
                }
                goto joined_r0x00108608;
              }
              uVar20 = uVar20 - 1;
              uVar9 = uVar9 - 1;
              __s = (uint *)((long)puVar45 + 1);
              *(undefined1 *)puVar45 = 0x30;
              puVar45 = __s;
            } while (uVar20 != 0);
joined_r0x001086b4:
            if (param_1 != (code *)0x0) goto LAB_001085bc;
LAB_001086b8:
            uVar47 = uVar47 - uVar38;
            if ((int)uVar47 < 1) goto LAB_001086c4;
          }
joined_r0x00108608:
          uVar15 = (ulong)uVar20;
joined_r0x00108608:
          if (uVar20 != 0) {
            uVar42 = 0x30;
            uVar20 = (uint)uVar15;
            if ((local_2ac >> 6 & 1) == 0) {
              memset(__s,0x30,uVar15);
              if ((uVar15 & 7) != 0) {
                iVar16 = -(uVar20 & 7);
                do {
                  __s = (uint *)((long)__s + 1);
                  uVar15 = (ulong)((int)uVar15 - 1);
                  iVar16 = iVar16 + 1;
                } while (iVar16 != 0);
              }
              if (6 < uVar20 - 1) {
                do {
                  __s = __s + 2;
                  uVar20 = (int)uVar15 - 8;
                  uVar15 = (ulong)uVar20;
                } while (uVar20 != 0);
              }
            }
            else {
              if ((uVar15 & 3) != 0) {
                iVar16 = -(uVar20 & 3);
                puVar45 = __s;
                do {
                  uVar5 = DAT_0411a1ac;
                  uVar9 = 0;
                  if (uVar19 != uVar18) {
                    uVar5 = uVar42;
                    uVar9 = uVar19 + 1;
                  }
                  uVar19 = uVar9;
                  uVar15 = (ulong)((int)uVar15 - 1);
                  iVar16 = iVar16 + 1;
                  __s = (uint *)((long)puVar45 + 1);
                  *(undefined1 *)puVar45 = uVar5;
                  puVar45 = __s;
                } while (iVar16 != 0);
              }
              puVar45 = __s;
              if (2 < uVar20 - 1) {
                do {
                  uVar20 = 0;
                  uVar5 = DAT_0411a1ac;
                  if (uVar19 != uVar18) {
                    uVar20 = uVar19 + 1;
                    uVar5 = uVar42;
                  }
                  *(undefined1 *)puVar45 = uVar5;
                  uVar5 = DAT_0411a1ac;
                  if (uVar20 != uVar18) {
                    uVar5 = uVar42;
                  }
                  *(undefined1 *)((long)puVar45 + 1) = uVar5;
                  uVar19 = 0;
                  if (uVar20 != uVar18) {
                    uVar19 = uVar20 + 1;
                  }
                  uVar20 = 0;
                  uVar5 = DAT_0411a1ac;
                  if (uVar19 != uVar18) {
                    uVar20 = uVar19 + 1;
                    uVar5 = uVar42;
                  }
                  *(undefined1 *)((long)puVar45 + 2) = uVar5;
                  uVar5 = DAT_0411a1ac;
                  if (uVar20 != uVar18) {
                    uVar5 = uVar42;
                  }
                  __s = puVar45 + 1;
                  uVar19 = 0;
                  if (uVar20 != uVar18) {
                    uVar19 = uVar20 + 1;
                  }
                  uVar20 = (int)uVar15 - 4;
                  uVar15 = (ulong)uVar20;
                  *(undefined1 *)((long)puVar45 + 3) = uVar5;
                  puVar45 = __s;
                } while (uVar20 != 0);
                goto joined_r0x001086b4;
              }
            }
          }
LAB_00108558:
          if (param_1 == (code *)0x0) goto LAB_001086b8;
LAB_001085bc:
          iVar16 = (int)__s - (int)param_3;
          if (iVar16 + 1 < 0x200) goto LAB_001086b8;
          iVar46 = iVar46 + iVar16;
          param_3 = (uint *)(*param_1)(param_3,param_2);
          __s = param_3;
          if (param_3 == (uint *)0x0) goto LAB_00108d14;
          uVar47 = uVar47 - uVar38;
        } while (0 < (int)uVar47);
LAB_001086c4:
        uVar18 = (uint)(byte)local_78;
        uVar38 = local_294;
        if (uVar18 != 0) goto LAB_00107b40;
      }
    }
    else {
      uVar19 = uVar18 + 1;
      uVar20 = uVar47 + (local_2bc & 0xffffff);
      uVar9 = 0;
      if (uVar19 != 0) {
        uVar9 = uVar20 / uVar19;
      }
      uVar19 = uVar18 + (uVar9 * uVar19 - uVar20);
      if (0 < (int)uVar47) goto LAB_00108564;
    }
  }
  else {
LAB_00107b28:
    uVar47 = uVar38;
    if (uVar17 + uVar38 != 0) goto LAB_00107d1c;
LAB_00107b30:
    uVar38 = local_294;
    if ((byte)local_78 == 0) goto joined_r0x00108130;
LAB_00107b40:
    local_2a0 = puVar28;
    if (param_1 == (code *)0x0) {
      uVar19 = uVar18 - 1;
      local_78 = local_78 & 0xff00;
      if ((uVar18 & 3) != 0) {
        iVar16 = -(uVar18 & 3);
        puVar35 = __s;
        do {
          puVar45 = (uint *)((long)local_2a0 + 1);
          uVar18 = uVar18 - 1;
          iVar16 = iVar16 + 1;
          __s = (uint *)((long)puVar35 + 1);
          *(char *)puVar35 = (char)*local_2a0;
          puVar35 = __s;
          local_2a0 = puVar45;
        } while (iVar16 != 0);
      }
      puVar45 = __s;
      puVar35 = local_2a0;
      uVar38 = local_294;
      if (2 < uVar19) {
        do {
          *(char *)puVar45 = (char)*local_2a0;
          *(undefined1 *)((long)puVar45 + 1) = *(undefined1 *)((long)local_2a0 + 1);
          puVar4 = (undefined1 *)((long)local_2a0 + 3);
          *(undefined1 *)((long)puVar45 + 2) = *(undefined1 *)((long)local_2a0 + 2);
          local_2a0 = local_2a0 + 1;
          __s = puVar45 + 1;
          *(undefined1 *)((long)puVar45 + 3) = *puVar4;
          uVar18 = uVar18 - 4;
          puVar45 = __s;
          puVar35 = local_2a0;
        } while (uVar18 != 0);
      }
    }
    else {
      do {
        iVar14 = (int)param_3;
        iVar16 = (int)__s - iVar14;
        uVar38 = 0x200U - iVar16;
        if ((int)uVar18 <= (int)(0x200U - iVar16)) {
          uVar38 = uVar18;
        }
        local_78 = CONCAT11(local_78._1_1_,(char)uVar18 - (char)uVar38);
        if (uVar38 != 0) {
          uVar19 = ((int)__s + -0x201) - iVar14;
          if ((int)uVar19 <= (int)~uVar18) {
            uVar19 = ~uVar18;
          }
          if ((uVar38 & 3) != 0) {
            iVar16 = -(uVar38 & 3);
            puVar35 = __s;
            do {
              puVar45 = (uint *)((long)local_2a0 + 1);
              uVar38 = uVar38 - 1;
              iVar16 = iVar16 + 1;
              __s = (uint *)((long)puVar35 + 1);
              *(char *)puVar35 = (char)*local_2a0;
              puVar35 = __s;
              local_2a0 = puVar45;
            } while (iVar16 != 0);
          }
          puVar35 = __s;
          if (2 < -uVar19 - 2) {
            do {
              *(char *)puVar35 = (char)*local_2a0;
              *(undefined1 *)((long)puVar35 + 1) = *(undefined1 *)((long)local_2a0 + 1);
              puVar4 = (undefined1 *)((long)local_2a0 + 3);
              *(undefined1 *)((long)puVar35 + 2) = *(undefined1 *)((long)local_2a0 + 2);
              local_2a0 = local_2a0 + 1;
              __s = puVar35 + 1;
              *(undefined1 *)((long)puVar35 + 3) = *puVar4;
              uVar38 = uVar38 - 4;
              puVar35 = __s;
            } while (uVar38 != 0);
          }
          iVar16 = (int)__s - iVar14;
        }
        if (0x1ff < iVar16 + 1) {
          iVar46 = iVar46 + iVar16;
          param_3 = (uint *)(*param_1)(param_3,param_2);
          __s = param_3;
          if (param_3 == (uint *)0x0) goto LAB_00108d14;
        }
        uVar18 = (uint)(byte)local_78;
        puVar35 = local_2a0;
        uVar38 = local_294;
      } while (uVar18 != 0);
    }
  }
joined_r0x00108130:
  local_2a0 = puVar35;
  local_294 = uVar38;
  if (uVar38 != 0) {
    if (param_1 == (code *)0x0) {
      if (3 < (int)uVar38) {
        uVar18 = (uVar38 - 4 >> 2) + 1 & 7;
        uVar19 = uVar38;
        if (uVar18 != 0) {
          iVar16 = -uVar18;
          puVar35 = __s;
          puVar45 = puVar30;
          do {
            puVar30 = puVar45 + 1;
            uVar19 = uVar19 - 4;
            iVar16 = iVar16 + 1;
            __s = puVar35 + 1;
            *puVar35 = *puVar45;
            puVar35 = __s;
            puVar45 = puVar30;
          } while (iVar16 != 0);
        }
        if (0x1b < uVar38 - 4) {
          do {
            *__s = *puVar30;
            __s[1] = puVar30[1];
            __s[2] = puVar30[2];
            __s[3] = puVar30[3];
            __s[4] = puVar30[4];
            __s[5] = puVar30[5];
            __s[6] = puVar30[6];
            puVar35 = puVar30 + 7;
            uVar19 = uVar19 - 0x20;
            puVar30 = puVar30 + 8;
            __s[7] = *puVar35;
            __s = __s + 8;
          } while (3 < (int)uVar19);
        }
        uVar38 = uVar38 & 3;
      }
      if (uVar38 != 0) {
        uVar18 = uVar38 - 1;
        if ((uVar38 & 7) != 0) {
          iVar16 = -(uVar38 & 7);
          puVar35 = __s;
          puVar45 = puVar30;
          do {
            puVar30 = (uint *)((long)puVar45 + 1);
            uVar38 = uVar38 - 1;
            iVar16 = iVar16 + 1;
            __s = (uint *)((long)puVar35 + 1);
            *(char *)puVar35 = (char)*puVar45;
            puVar35 = __s;
            puVar45 = puVar30;
          } while (iVar16 != 0);
        }
        if (6 < uVar18) {
          do {
            *(char *)__s = (char)*puVar30;
            *(undefined1 *)((long)__s + 1) = *(undefined1 *)((long)puVar30 + 1);
            *(undefined1 *)((long)__s + 2) = *(undefined1 *)((long)puVar30 + 2);
            *(undefined1 *)((long)__s + 3) = *(undefined1 *)((long)puVar30 + 3);
            *(char *)(__s + 1) = (char)puVar30[1];
            *(undefined1 *)((long)__s + 5) = *(undefined1 *)((long)puVar30 + 5);
            *(undefined1 *)((long)__s + 6) = *(undefined1 *)((long)puVar30 + 6);
            puVar4 = (undefined1 *)((long)puVar30 + 7);
            puVar35 = __s + 2;
            puVar30 = puVar30 + 2;
            *(undefined1 *)((long)__s + 7) = *puVar4;
            uVar38 = uVar38 - 8;
            __s = puVar35;
          } while (uVar38 != 0);
        }
      }
    }
    else {
      do {
        while( true ) {
          iVar16 = (int)param_3;
          uVar18 = (iVar16 - (int)__s) + 0x200;
          if ((int)uVar38 <= (int)uVar18) {
            uVar18 = uVar38;
          }
          if ((int)uVar18 < 4) break;
          uVar19 = ((int)__s + -0x201) - iVar16;
          if ((int)uVar19 <= (int)~uVar38) {
            uVar19 = ~uVar38;
          }
          uVar47 = (-uVar19 - 5 >> 2) + 1 & 7;
          uVar20 = uVar18;
          if (uVar47 != 0) {
            iVar14 = -uVar47;
            puVar35 = __s;
            puVar45 = puVar30;
            do {
              puVar30 = puVar45 + 1;
              uVar20 = uVar20 - 4;
              iVar14 = iVar14 + 1;
              __s = puVar35 + 1;
              *puVar35 = *puVar45;
              puVar35 = __s;
              puVar45 = puVar30;
            } while (iVar14 != 0);
          }
          if (0x1b < -uVar19 - 5) {
            do {
              *__s = *puVar30;
              __s[1] = puVar30[1];
              __s[2] = puVar30[2];
              __s[3] = puVar30[3];
              __s[4] = puVar30[4];
              __s[5] = puVar30[5];
              __s[6] = puVar30[6];
              puVar35 = puVar30 + 7;
              uVar20 = uVar20 - 0x20;
              puVar30 = puVar30 + 8;
              __s[7] = *puVar35;
              __s = __s + 8;
            } while (3 < (int)uVar20);
          }
          uVar19 = 3 - uVar19 & 3;
          if (uVar19 == 0) goto LAB_0010826c;
LAB_00108390:
          uVar47 = uVar19 - 1;
          if ((uVar19 & 7) != 0) {
            iVar14 = -(uVar19 & 7);
            puVar35 = __s;
            puVar45 = puVar30;
            do {
              puVar30 = (uint *)((long)puVar45 + 1);
              uVar19 = uVar19 - 1;
              iVar14 = iVar14 + 1;
              __s = (uint *)((long)puVar35 + 1);
              *(char *)puVar35 = (char)*puVar45;
              puVar35 = __s;
              puVar45 = puVar30;
            } while (iVar14 != 0);
          }
          puVar35 = __s;
          if (uVar47 < 7) goto LAB_0010826c;
          do {
            *(char *)puVar35 = (char)*puVar30;
            *(undefined1 *)((long)puVar35 + 1) = *(undefined1 *)((long)puVar30 + 1);
            *(undefined1 *)((long)puVar35 + 2) = *(undefined1 *)((long)puVar30 + 2);
            *(undefined1 *)((long)puVar35 + 3) = *(undefined1 *)((long)puVar30 + 3);
            *(char *)(puVar35 + 1) = (char)puVar30[1];
            *(undefined1 *)((long)puVar35 + 5) = *(undefined1 *)((long)puVar30 + 5);
            *(undefined1 *)((long)puVar35 + 6) = *(undefined1 *)((long)puVar30 + 6);
            puVar4 = (undefined1 *)((long)puVar30 + 7);
            puVar30 = puVar30 + 2;
            __s = puVar35 + 2;
            *(undefined1 *)((long)puVar35 + 7) = *puVar4;
            uVar19 = uVar19 - 8;
            puVar35 = __s;
          } while (uVar19 != 0);
          iVar16 = (int)__s - iVar16;
          if (0x1ff < iVar16 + 1) goto LAB_0010827c;
LAB_0010842c:
          uVar38 = uVar38 - uVar18;
          if (uVar38 == 0) goto joined_r0x0010825c;
        }
        uVar19 = uVar18;
        if (uVar18 != 0) goto LAB_00108390;
LAB_0010826c:
        iVar16 = (int)__s - iVar16;
        if (iVar16 + 1 < 0x200) goto LAB_0010842c;
LAB_0010827c:
        iVar46 = iVar46 + iVar16;
        param_3 = (uint *)(*param_1)(param_3,param_2);
        __s = param_3;
        if (param_3 == (uint *)0x0) goto LAB_00108d14;
        uVar38 = uVar38 - uVar18;
      } while (uVar38 != 0);
    }
  }
joined_r0x0010825c:
  if (uVar26 != 0) {
    if (param_1 == (code *)0x0) {
LAB_00108940:
      uVar18 = 0;
    }
    else {
      uVar38 = ((int)param_3 - (int)__s) + 0x200;
      uVar18 = uVar26 - uVar38;
      if (uVar18 == 0 || (int)uVar26 < (int)uVar38) goto LAB_00108940;
      uVar26 = uVar38;
      if (uVar38 == 0) {
LAB_00108a48:
        iVar16 = (int)__s - (int)param_3;
        uVar26 = uVar18;
        if (0x1ff < iVar16 + 1) {
          iVar46 = iVar46 + iVar16;
          __s = (uint *)(*param_1)(param_3,param_2);
          param_3 = __s;
          if (__s == (uint *)0x0) goto LAB_00108d14;
        }
        goto joined_r0x0010825c;
      }
    }
    uVar38 = uVar26 - 4;
    puVar30 = __s;
LAB_00108948:
    if (((ulong)puVar30 & 3) != 0) goto code_r0x00108950;
    uVar19 = uVar26 - 4;
    if (3 < (int)uVar26) {
      memset(puVar30,0x30,(ulong)(uVar19 & 0xfffffffc) + 4);
      if (((uVar19 >> 2) + 1 & 7) != 0) {
        iVar16 = 0;
        lVar33 = 0;
        iVar14 = -((uVar38 >> 2) + 1 & 7);
        do {
          lVar33 = lVar33 + -4;
          iVar16 = iVar16 + 4;
          iVar14 = iVar14 + 1;
        } while (iVar14 != 0);
        puVar30 = (uint *)((long)puVar30 - lVar33);
        uVar26 = uVar26 - iVar16;
      }
      if (0x1b < uVar19) {
        do {
          uVar26 = uVar26 - 0x20;
          puVar30 = puVar30 + 8;
        } while (3 < (int)uVar26);
      }
      uVar26 = uVar19 & 3;
    }
    __s = puVar30;
    if (uVar26 != 0) {
      memset(puVar30,0x30,(ulong)uVar26);
      uVar38 = uVar26 - 1;
      if ((uVar26 & 7) != 0) {
        iVar16 = -(uVar26 & 7);
        do {
          puVar30 = (uint *)((long)puVar30 + 1);
          uVar26 = uVar26 - 1;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0);
      }
      __s = puVar30;
      if (6 < uVar38) {
        do {
          puVar30 = puVar30 + 2;
          uVar26 = uVar26 - 8;
          __s = puVar30;
        } while (uVar26 != 0);
      }
    }
joined_r0x001088fc:
    uVar26 = uVar18;
    if (param_1 != (code *)0x0) goto LAB_00108a48;
    goto joined_r0x0010825c;
  }
  uVar26 = (uint)(byte)local_290;
  local_2a0 = puVar29;
  if ((byte)local_290 != 0) {
    if (param_1 == (code *)0x0) {
      uVar10 = local_290 & 3;
      uVar38 = uVar26 - 1;
      local_290 = local_290 & 0xff00;
      if (uVar10 != 0) {
        iVar16 = -(uVar26 & 3);
        puVar30 = __s;
        do {
          puVar35 = (uint *)((long)local_2a0 + 1);
          uVar26 = uVar26 - 1;
          iVar16 = iVar16 + 1;
          __s = (uint *)((long)puVar30 + 1);
          *(char *)puVar30 = (char)*local_2a0;
          puVar30 = __s;
          local_2a0 = puVar35;
        } while (iVar16 != 0);
      }
      puVar30 = __s;
      if (2 < uVar38) {
        do {
          *(char *)puVar30 = (char)*local_2a0;
          *(undefined1 *)((long)puVar30 + 1) = *(undefined1 *)((long)local_2a0 + 1);
          puVar4 = (undefined1 *)((long)local_2a0 + 3);
          *(undefined1 *)((long)puVar30 + 2) = *(undefined1 *)((long)local_2a0 + 2);
          local_2a0 = local_2a0 + 1;
          __s = puVar30 + 1;
          *(undefined1 *)((long)puVar30 + 3) = *puVar4;
          uVar26 = uVar26 - 4;
          puVar30 = __s;
        } while (uVar26 != 0);
      }
    }
    else {
      do {
        iVar14 = (int)param_3;
        iVar16 = (int)__s - iVar14;
        uVar38 = 0x200U - iVar16;
        if ((int)uVar26 <= (int)(0x200U - iVar16)) {
          uVar38 = uVar26;
        }
        local_290 = CONCAT11(local_290._1_1_,(char)uVar26 - (char)uVar38);
        if (uVar38 != 0) {
          uVar18 = ((int)__s + -0x201) - iVar14;
          if ((int)uVar18 <= (int)~uVar26) {
            uVar18 = ~uVar26;
          }
          if ((uVar38 & 3) != 0) {
            iVar16 = -(uVar38 & 3);
            puVar30 = __s;
            do {
              puVar35 = (uint *)((long)local_2a0 + 1);
              uVar38 = uVar38 - 1;
              iVar16 = iVar16 + 1;
              __s = (uint *)((long)puVar30 + 1);
              *(char *)puVar30 = (char)*local_2a0;
              puVar30 = __s;
              local_2a0 = puVar35;
            } while (iVar16 != 0);
          }
          puVar30 = __s;
          if (2 < -uVar18 - 2) {
            do {
              *(char *)puVar30 = (char)*local_2a0;
              *(undefined1 *)((long)puVar30 + 1) = *(undefined1 *)((long)local_2a0 + 1);
              puVar4 = (undefined1 *)((long)local_2a0 + 3);
              *(undefined1 *)((long)puVar30 + 2) = *(undefined1 *)((long)local_2a0 + 2);
              local_2a0 = local_2a0 + 1;
              __s = puVar30 + 1;
              *(undefined1 *)((long)puVar30 + 3) = *puVar4;
              uVar38 = uVar38 - 4;
              puVar30 = __s;
            } while (uVar38 != 0);
          }
          iVar16 = (int)__s - iVar14;
        }
        if (0x1ff < iVar16 + 1) {
          iVar46 = iVar46 + iVar16;
          param_3 = (uint *)(*param_1)(param_3,param_2);
          __s = param_3;
          if (param_3 == (uint *)0x0) goto LAB_00108d14;
        }
        uVar26 = (uint)(byte)local_290;
      } while (uVar26 != 0);
    }
  }
  if (((local_2ac & 1) != 0) && (0 < (int)uVar17)) {
    do {
      if (param_1 == (code *)0x0) {
LAB_00108ae8:
        uVar38 = 0;
LAB_00108aec:
        uVar26 = uVar17 - 4;
        puVar30 = __s;
LAB_00108af4:
        if (((ulong)puVar30 & 3) != 0) goto code_r0x00108afc;
        uVar18 = uVar17 - 4;
        __s = puVar30;
        if (3 < (int)uVar17) {
          memset(puVar30,0x20,(ulong)(uVar18 & 0xfffffffc) + 4);
          if (((uVar18 >> 2) + 1 & 7) != 0) {
            iVar16 = 0;
            lVar33 = 0;
            iVar14 = -((uVar26 >> 2) + 1 & 7);
            do {
              lVar33 = lVar33 + -4;
              iVar16 = iVar16 + 4;
              iVar14 = iVar14 + 1;
            } while (iVar14 != 0);
            puVar30 = (uint *)((long)puVar30 - lVar33);
            uVar17 = uVar17 - iVar16;
          }
          if (0x1b < uVar18) {
            do {
              uVar17 = uVar17 - 0x20;
              puVar30 = puVar30 + 8;
            } while (3 < (int)uVar17);
          }
          uVar17 = uVar18 & 3;
          __s = puVar30;
        }
        if (uVar17 == 0) {
          uVar17 = uVar38;
          if (param_1 != (code *)0x0) goto LAB_00108c00;
          goto LAB_00108c34;
        }
        memset(__s,0x20,(ulong)uVar17);
        uVar26 = uVar17 - 1;
        if ((uVar17 & 7) != 0) {
          iVar16 = -(uVar17 & 7);
          do {
            uVar17 = uVar17 - 1;
            __s = (uint *)((long)__s + 1);
            iVar16 = iVar16 + 1;
          } while (iVar16 != 0);
        }
        if (6 < uVar26) {
          do {
            uVar17 = uVar17 - 8;
            __s = __s + 2;
          } while (uVar17 != 0);
        }
LAB_00108bfc:
        uVar17 = uVar38;
        if (param_1 == (code *)0x0) goto LAB_00108c34;
        goto LAB_00108c00;
      }
      uVar26 = ((int)param_3 - (int)__s) + 0x200;
      uVar38 = uVar17 - uVar26;
      if (uVar38 == 0 || (int)uVar17 < (int)uVar26) goto LAB_00108ae8;
      uVar17 = uVar26;
      if (uVar26 != 0) goto LAB_00108aec;
LAB_00108c00:
      iVar16 = (int)__s - (int)param_3;
      uVar17 = uVar38;
      if (0x1ff < iVar16 + 1) {
        iVar46 = iVar46 + iVar16;
        param_3 = (uint *)(*param_1)(param_3,param_2);
        __s = param_3;
        if (param_3 == (uint *)0x0) goto LAB_00108d14;
      }
LAB_00108c34:
    } while (uVar17 != 0);
  }
LAB_00108c3c:
  param_4 = (uint *)(pbVar39 + 1);
  goto joined_r0x00105fdc;
code_r0x00106fb4:
  uVar18 = uVar18 - 1;
  uVar19 = uVar19 - 1;
  puVar30 = (uint *)((long)puVar35 + 1);
  *(undefined1 *)puVar35 = 0x30;
  puVar35 = puVar30;
  if (uVar18 == 0) goto LAB_00107804;
  goto LAB_00106fac;
code_r0x00107678:
  uVar38 = uVar38 - 1;
  uVar18 = uVar18 - 1;
  puVar30 = (uint *)((long)puVar35 + 1);
  *(undefined1 *)puVar35 = 0x30;
  puVar35 = puVar30;
  if (uVar38 == 0) goto LAB_00107a70;
  goto LAB_00107670;
switchD_00106350_caseD_42:
  local_78 = (ushort)local_78._1_1_ << 8;
  if ((local_2ac >> 3 & 1) != 0) {
    local_78 = 0x3002;
    local_76 = pcVar22[0xb];
  }
  uVar15 = 0x180;
  local_294 = 0x180;
  lVar33 = (long)(int)param_5[3];
LAB_00106b6c:
  if (((int)lVar33 < 0) && (iVar27 = (int)lVar33 + 8, *(int *)(param_5 + 3) = iVar27, iVar27 < 1)) {
    puVar35 = (uint *)(param_5[1] + lVar33);
  }
  else {
    puVar35 = (uint *)*param_5;
    *param_5 = (long)(puVar35 + 2);
  }
  uVar36 = (ulong)*puVar35;
LAB_00106b98:
  local_298 = 0;
  local_290 = (ushort)local_290._1_1_ << 8;
  if ((uVar36 == 0) && (local_78 = local_78 & 0xff00, uVar17 == 0)) {
    local_2bc = 0;
    uVar26 = 0;
    local_294 = 0;
  }
  else {
    if ((local_2ac >> 6 & 1) == 0) {
      puVar30 = (uint *)&bStack_89;
      while( true ) {
        *(char *)puVar30 = pcVar22[uVar36 & (long)~(-1 << (uVar15 >> 8))];
        uVar15 = (ulong)local_294;
        uVar36 = uVar36 >> (local_294 >> 8);
        if ((uVar36 == 0) && (uVar38 = iVar14 - (int)puVar30, (int)uVar17 <= (int)uVar38)) break;
        puVar30 = (uint *)((long)puVar30 + -1);
      }
    }
    else {
      while( true ) {
        puVar35 = puVar30;
        puVar30 = (uint *)((long)puVar35 + -1);
        *(char *)puVar30 = pcVar22[uVar36 & (long)~(-1 << (ulong)((uint)(uVar15 >> 8) & 0x1f))];
        uVar36 = uVar36 >> ((ulong)(local_294 >> 8) & 0x3f);
        if ((uVar36 == 0) && (uVar38 = iVar14 - (int)puVar30, (int)uVar17 <= (int)uVar38)) break;
        local_294 = local_294 + 1;
        uVar15 = (ulong)local_294;
        if (((local_294 ^ local_294 >> 4) & 0xf) == 0) {
          local_294 = local_294 & 0xfffffff0;
          puVar30 = (uint *)((long)puVar35 + -2);
          *(undefined1 *)puVar30 = DAT_0411a1ac;
          uVar15 = (ulong)local_294;
        }
      }
    }
    local_2bc = (local_294 & 0xf0) * 0x100000 + uVar38;
    uVar26 = 0;
    local_294 = uVar38;
  }
  goto LAB_00107ae4;
code_r0x00107f8c:
  uVar17 = uVar17 - 1;
  uVar38 = uVar38 - 1;
  puVar45 = (uint *)((long)__s + 1);
  *(undefined1 *)__s = 0x20;
  __s = puVar45;
  if (uVar17 == 0) goto LAB_00108080;
  goto LAB_00107f84;
code_r0x00108950:
  uVar26 = uVar26 - 1;
  uVar38 = uVar38 - 1;
  __s = (uint *)((long)puVar30 + 1);
  *(undefined1 *)puVar30 = 0x30;
  puVar30 = __s;
  if (uVar26 == 0) goto joined_r0x001088fc;
  goto LAB_00108948;
code_r0x00108afc:
  uVar17 = uVar17 - 1;
  uVar26 = uVar26 - 1;
  __s = (uint *)((long)puVar30 + 1);
  *(undefined1 *)puVar30 = 0x20;
  puVar30 = __s;
  if (uVar17 == 0) goto LAB_00108bfc;
  goto LAB_00108af4;
LAB_00108ce0:
  if (param_1 == (code *)0x0) {
    *(undefined1 *)__s = 0;
  }
  else {
    iVar16 = (int)__s - (int)param_3;
    if (0x1ff < iVar16 + 0x1ff) {
      iVar46 = iVar46 + iVar16;
      param_3 = (uint *)(*param_1)(param_3,param_2);
      __s = param_3;
      if (param_3 == (uint *)0x0) {
LAB_00108d14:
        param_3 = (uint *)0x0;
      }
    }
  }
  return (ulong)(uint)(iVar46 + ((int)__s - (int)param_3));
}


