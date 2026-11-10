/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016f1578; name: FUN_016f1578
 */


undefined8 FUN_016f1578(long param_1,long param_2)

{
  size_t sVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char cVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  string *psVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  char *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  code *local_960;
  undefined8 uStack_958;
  long local_950;
  long lStack_948;
  undefined8 local_940;
  undefined *puStack_938;
  undefined4 local_930 [2];
  long local_928;
  undefined4 local_920;
  long local_918;
  undefined4 local_910 [2];
  string asStack_908 [720];
  undefined8 auStack_638 [2];
  string local_628;
  undefined1 auStack_627 [7];
  size_t local_620;
  undefined1 *local_618;
  char *apcStack_358 [2];
  char *local_348 [2];
  long local_338;
  
  if (((DAT_043cd558 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cd558), iVar10 != 0)) {
    local_338 = 0;
    local_348[1] = (undefined1 *)0x0;
    local_348[0] = (char *)0x2e6c6f7308;
    if (((DAT_043cd428 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cd428), iVar10 != 0)) {
      FUN_016f5300();
      FUN_00100250(PTR__string_04379718,&DAT_043cd410,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043cd428);
    }
    puVar27 = DAT_043cd420;
    if ((DAT_043cd410 & 1) == 0) {
      puVar27 = &DAT_043cd411;
    }
    pcVar26 = (char *)std::string::append((char *)local_348,(ulong)puVar27);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043cd540,psVar17);
    lVar14 = local_338;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_348[0] & 1) != 0) && (local_338 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar8;
      }
      uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar14,0,8);
          goto LAB_016f2634;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar14,0,8);
    }
LAB_016f2634:
    FUN_00100250(PTR__string_04379718,&DAT_043cd540,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cd558);
  }
  std::string::string(&local_628,(string *)&DAT_043cd540);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043cd538);
  sVar1 = (ulong)((byte)local_628 >> 1);
  if (((byte)local_628 & 1) != 0) {
    sVar1 = local_620;
  }
  std::string::append((ulong)&local_628,(char)iVar10);
  if (((byte)local_628 & 1) == 0) {
    puVar27 = auStack_627;
    local_620 = (size_t)((byte)local_628 >> 1);
  }
  else {
    puVar27 = local_618;
  }
  snprintf(puVar27 + (sVar1 - 1),local_620,"%d",(ulong)DAT_043cd538);
  DAT_043cd538 = DAT_043cd538 + 1;
  if (((DAT_043cd578 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cd578), iVar10 != 0)) {
    local_338 = 0;
    local_348[1] = (undefined1 *)0x0;
    local_348[0] = (char *)0x2e6c6f7308;
    if (((DAT_043cd428 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cd428), iVar10 != 0)) {
      FUN_016f5300();
      FUN_00100250(PTR__string_04379718,&DAT_043cd410,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043cd428);
    }
    puVar27 = DAT_043cd420;
    if ((DAT_043cd410 & 1) == 0) {
      puVar27 = &DAT_043cd411;
    }
    pcVar26 = (char *)std::string::append((char *)local_348,(ulong)puVar27);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043cd560,psVar17);
    lVar14 = local_338;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_348[0] & 1) != 0) && (local_338 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar8;
      }
      uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar14,0,8);
          goto LAB_016f27a4;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar14,0,8);
    }
LAB_016f27a4:
    FUN_00100250(PTR__string_04379718,&DAT_043cd560,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cd578);
  }
  puVar3 = DAT_043cd570;
  if ((DAT_043cd560 & 1) == 0) {
    puVar3 = &DAT_043cd561;
  }
  if (((byte)local_628 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_628 | 1);
  }
  else {
    puVar27 = local_618;
  }
  if (((DAT_043cd588 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cd588), iVar10 != 0)) {
    DAT_043cd580 = 0x188;
    __cxa_guard_release(&DAT_043cd588);
  }
  if (((DAT_043cd598 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cd598), iVar10 != 0)) {
    DAT_043cd590 = 399;
    __cxa_guard_release(&DAT_043cd598);
  }
  uVar22 = DAT_043cd580;
  lVar14 = FUN_00153520(param_2,DAT_043cd580);
  if ((uVar22 < ((ulong)(uint)-(int)lVar14 & 7 | 0x188)) ||
     (puVar18 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043cd590;
    lVar14 = FUN_00153520(param_2,DAT_043cd590);
    if ((uVar22 < ((ulong)(uint)-(int)lVar14 & 7 | 0x188)) ||
       (puVar18 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_016f7870();
      puVar4 = DAT_043cd5b0;
      if ((DAT_043cd5a0 & 1) == 0) {
        puVar4 = &DAT_043cd5a1;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar14;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar14 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar7 = 0;
      if (uVar24 != 0) {
        uVar7 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar7 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar5;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_04224e70;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x128);
  iVar10 = FUN_00154450(param_2,puVar27);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_016f7830,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar11 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar11);
  }
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar14 = FUN_001511d0(param_2,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar8 = DAT_043f1798;
  if ((((byte)local_628 & 1) != 0) && (local_618 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar8;
    }
    uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar25,local_618,0,8);
        goto LAB_016f18e4;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_618,0,8);
  }
LAB_016f18e4:
  memset(local_348,0,0x2e0);
  pcVar26 = *(char **)(lVar14 + 0x110);
  sVar15 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar23 = lVar14 + 8;
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  puVar27 = &LAB_016f5af0;
  if (uVar12 != 0) {
    puVar27 = &LAB_016f59ec;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar21 = (byte *)(lVar16 + lVar28);
    sVar15 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar10 == 0)) {
      iVar10 = (int)uVar22;
      if (iVar10 == 1) {
        *(undefined1 **)(lVar14 + 0x30) = puVar27;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar24 = 0;
            *(undefined1 **)(lVar14 + 0x138) = puVar27;
            goto LAB_016f1ae0;
          }
          *(ulong *)(lVar14 + 0x180) = *(ulong *)(lVar14 + 0x180) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar27;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x180) = *(ulong *)(lVar14 + 0x180) | 1L << (uVar22 & 0x3f);
      goto LAB_016f1ae0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_348[0] = pcVar26;
  local_348[1] = puVar27;
LAB_016f1ae0:
  pcVar26 = *(char **)(lVar14 + 0x128);
  sVar15 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = &LAB_016f71fc;
  if (uVar12 != 0) {
    pcVar20 = &LAB_016f5c2c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar21 = (byte *)(lVar16 + lVar28);
    sVar15 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar10 == 0)) {
      iVar10 = (int)uVar22;
      if (iVar10 == 1) {
        *(char **)(lVar14 + 0x30) = pcVar20;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar14 + 0x138) = pcVar20;
            goto LAB_016f1bf0;
          }
          *(ulong *)(lVar14 + 0x180) = *(ulong *)(lVar14 + 0x180) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(char **)(lVar14 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x180) = *(ulong *)(lVar14 + 0x180) | 1L << (uVar22 & 0x3f);
      goto LAB_016f1bf0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_348[uVar24 * 2] = pcVar26;
  local_348[uVar24 * 2 + 1] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_016f1bf0:
  pcVar26 = *(char **)(lVar14 + 0x130);
  sVar15 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = &LAB_016f7424;
  if (uVar12 != 0) {
    pcVar20 = &LAB_016f73a4;
  }
  while( true ) {
    lVar16 = FUN_008cca50();
    pbVar21 = (byte *)(lVar16 + lVar28);
    sVar15 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar10 == 0)) break;
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar22 == 0x20) {
LAB_016f2334:
      local_348[uVar24 * 2] = pcVar26;
      local_348[uVar24 * 2 + 1] = pcVar20;
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0x180);
      uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x016f1cd4:
      if ((uVar12 >> 0x11 & 1) == 0) {
LAB_016f1cd8:
        FUN_008cca50();
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0x180);
      }
LAB_016f1ce0:
      if ((uVar12 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0x180);
      }
      if ((uVar12 >> 0x10 & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x181);
        if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 400);
        }
        local_348[uVar24 * 2] = pcVar26;
        local_348[uVar24 * 2 + 1] = &LAB_016f6310;
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0x180);
        uVar24 = (ulong)((int)uVar24 + 1);
      }
      uVar22 = uVar24;
      if ((uVar12 >> 0x1b & 1) == 0) {
        lVar28 = FUN_008cca50();
        uVar22 = (ulong)((int)uVar24 + 1);
        pcVar26 = (char *)(lVar28 + 0x289);
        if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x298);
        }
        local_348[uVar24 * 2] = pcVar26;
        local_348[uVar24 * 2 + 1] = "\x1a\x03";
      }
      uVar24 = uVar22;
      if (*(long *)(lVar14 + 0x138) != 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x1c9);
        if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x1d8);
        }
        pcVar20 = *(char **)(lVar14 + 0x138);
        uVar24 = (ulong)((int)uVar22 + 1);
        local_348[uVar22 * 2] = pcVar26;
        local_348[uVar22 * 2 + 1] = pcVar20;
      }
      local_348[uVar24 * 2] = (char *)0x0;
      local_348[uVar24 * 2 + 1] = (char *)0x0;
      memcpy(&local_628,local_348,0x2e0);
      memcpy(asStack_908,local_348,0x2e0);
      lVar28 = FUN_008cca50();
      lVar16 = uVar24 - 1;
      pcVar26 = local_348[lVar16 * 2];
      sVar15 = strlen(pcVar26);
      sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar15 == sVar1) &&
         (iVar10 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
         iVar10 == 0)) {
        auStack_638[lVar16 * 2 + 2] = 0;
        *(undefined8 *)(auStack_627 + lVar16 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_908 + lVar16 * 0x10) = local_348[lVar16 * 2];
      *(code **)(asStack_908 + (lVar16 * 2 + 1) * 8) = FUN_016f74c0;
      FUN_00151fe0(param_2,0,2);
      local_910[0] = FUN_0014feb0(param_2,0xffffffff);
      local_918 = param_2;
      if (((DAT_043cd428 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cd428), iVar10 != 0)) {
        FUN_016f5300();
        FUN_00100250(PTR__string_04379718,&DAT_043cd410,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043cd428);
      }
      uVar11 = local_910[0];
      if ((DAT_043cd410 & 1) == 0) {
        uVar22 = (ulong)(DAT_043cd410 >> 1);
        puVar27 = &DAT_043cd411;
      }
      else {
        uVar22 = DAT_043cd418;
        puVar27 = DAT_043cd420;
      }
      FUN_001514f0(param_2,puVar27,uVar22);
      FUN_00152550(param_2,uVar11,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_016f6220,0);
      FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar17 = asStack_908;
          FUN_016f3a74();
          pbVar21 = &DAT_043cd378;
        }
        else if (lVar28 == 0) {
          psVar17 = &local_628;
          FUN_016f3880();
          pbVar21 = &DAT_043cd300;
        }
        else {
          psVar17 = (string *)local_348;
          FUN_016f3c68();
          pbVar21 = &DAT_043cd3f0;
        }
        pbVar2 = pbVar21 + 1;
        if ((*pbVar21 & 1) != 0) {
          pbVar2 = *(byte **)(pbVar21 + 0x10);
        }
        FUN_00154450(param_2,pbVar2);
        local_920 = FUN_0014feb0(param_2,0xffffffff);
        local_960 = (code *)CONCAT44(local_960._4_4_,0x1e);
        local_928 = param_2;
        FUN_008fe304(local_930,param_2,&local_960,&local_918,local_920);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar14);
        FUN_00155a20(param_2,psVar17,2);
        uVar11 = local_920;
        if (*(long *)(lVar14 + 0x168) == 0) {
          lVar16 = *(long *)(lVar14 + 0x170);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar11,"class_check");
          lVar16 = *(long *)(lVar14 + 0x170);
          uVar11 = local_920;
        }
        local_920 = uVar11;
        if (lVar16 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar11,"class_cast");
        }
        uVar11 = local_920;
        uVar19 = *(undefined8 *)(lVar14 + 0x148);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar14);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar11,&DAT_03955ac7);
        uVar11 = local_920;
        uVar19 = *(undefined8 *)(lVar14 + 0x150);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar14);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar11,&DAT_0397c077);
        if (*(char *)(lVar14 + 0x58) == '\0') {
          local_960 = (code *)CONCAT44(local_960._4_4_,1);
          FUN_008fe304(local_930,param_2,&local_960,&local_928,local_920);
        }
        else {
          local_930[0] = 1;
          local_960 = FUN_016f7510;
          uStack_958 = 0;
          local_950 = lVar14;
          lStack_948 = lVar23;
          FUN_016f7cac(param_2,local_930,&local_960,local_920);
          local_930[0] = 2;
          local_960 = (code *)&LAB_016f781c;
          uStack_958 = 0;
          local_950 = lVar14;
          lStack_948 = lVar23;
          FUN_016f7cac(param_2,local_930,&local_960,local_920);
        }
        FUN_00151fe0(param_2,0,3);
        uVar11 = FUN_0014feb0(param_2,0xffffffff);
        local_960 = (code *)CONCAT44(local_960._4_4_,0x1e);
        FUN_008fe304(local_930,param_2,&local_960,&local_918,uVar11);
        if (*(code **)(lVar14 + 0x140) == (code *)0x0) {
          cVar6 = *(char *)(lVar14 + 0x178);
        }
        else {
          local_930[0] = 4;
          uStack_958 = 0;
          local_960 = *(code **)(lVar14 + 0x140);
          local_950 = lVar14;
          lStack_948 = lVar23;
          FUN_016f7cac(param_2,local_930,&local_960,uVar11);
          cVar6 = *(char *)(lVar14 + 0x178);
        }
        if (cVar6 != '\0') {
          local_930[0] = 1;
          local_960 = FUN_016f7510;
          uStack_958 = 0;
          local_950 = lVar14;
          lStack_948 = lVar23;
          FUN_016f7cac(param_2,local_930,&local_960,uVar11);
          local_930[0] = 2;
          local_960 = (code *)&LAB_016f781c;
          uStack_958 = 0;
          local_950 = lVar14;
          lStack_948 = lVar23;
          FUN_016f7cac(param_2,local_930,&local_960,uVar11);
        }
        uVar13 = local_920;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar11);
        }
        FUN_00152ae0(param_2,uVar13);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_928,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_016f3ea8();
      puVar3 = DAT_043cd478;
      if ((DAT_043cd468 & 1) == 0) {
        puVar3 = &DAT_043cd469;
      }
      FUN_00154450(param_2,puVar3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_960._0_4_ = 0x1e;
      FUN_008fe304(&local_928,param_2,&local_960,&local_918,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_348,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_960 = (code *)CONCAT44(local_960._4_4_,0x1e);
      FUN_008fe304(&local_928,param_2,&local_960,&local_918,uVar13);
      local_960 = *(code **)(lVar14 + 0x140);
      if (local_960 != (code *)0x0) {
        local_928 = CONCAT44(local_928._4_4_,4);
        uStack_958 = 0;
        local_950 = lVar14;
        lStack_948 = lVar23;
        FUN_016f7cac(param_2,&local_928,&local_960,uVar13);
      }
      local_928._0_4_ = 1;
      local_960 = (code *)&LAB_016f7820;
      uStack_958 = 0;
      local_940 = 0;
      puStack_938 = &DAT_03a7c520;
      local_950 = lVar14;
      lStack_948 = lVar23;
      FUN_016f8054(param_2,&local_928,&local_960,uVar13);
      local_928 = CONCAT44(local_928._4_4_,2);
      local_960 = (code *)&LAB_016f7824;
      uStack_958 = 0;
      local_940 = 0;
      puStack_938 = &DAT_03a7c520;
      local_950 = lVar14;
      lStack_948 = lVar23;
      FUN_016f8054(param_2,&local_928,&local_960,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_910[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar10 = (int)uVar22;
  if (iVar10 == 0x13) {
    *(char **)(lVar14 + 0x138) = pcVar20;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x180);
    goto joined_r0x016f1cd4;
  }
  if (iVar10 == 1) {
    *(char **)(lVar14 + 0x30) = pcVar20;
  }
  else {
    if (iVar10 != 2) {
      *(ulong *)(lVar14 + 0x180) = *(ulong *)(lVar14 + 0x180) | 1L << (uVar22 & 0x3f);
      goto LAB_016f2334;
    }
    *(char **)(lVar14 + 0x38) = pcVar20;
  }
  *(undefined1 *)(lVar14 + 0x58) = 1;
  *(ulong *)(lVar14 + 0x180) = *(ulong *)(lVar14 + 0x180) | 1L << (uVar22 & 0x3f);
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0x180);
  if ((uVar12 >> 0x11 & 1) != 0) goto LAB_016f1ce0;
  goto LAB_016f1cd8;
}


