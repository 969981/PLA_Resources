/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012e865c; name: FUN_012e865c
 */


undefined8 FUN_012e865c(long param_1,long param_2)

{
  size_t sVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  char cVar8;
  ulong uVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  size_t sVar17;
  long lVar18;
  string *psVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  char *pcVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  undefined1 *puVar29;
  long lVar30;
  undefined1 *local_750;
  undefined8 uStack_748;
  long local_740;
  long lStack_738;
  undefined8 local_730;
  undefined *puStack_728;
  undefined4 local_720 [2];
  long local_718;
  undefined4 local_710;
  long local_708;
  undefined4 local_700 [2];
  string asStack_6f8 [544];
  undefined8 auStack_4d8 [2];
  string local_4c8;
  undefined1 auStack_4c7 [7];
  size_t local_4c0;
  undefined1 *local_4b8;
  char *apcStack_2a8 [2];
  char *local_298 [2];
  long local_288;
  
  if (((DAT_043c2020 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043c2020), iVar12 != 0)) {
    local_288 = 0;
    local_298[1] = (undefined1 *)0x0;
    local_298[0] = (char *)0x2e6c6f7308;
    if (((DAT_043c1ef0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043c1ef0), iVar12 != 0)) {
      FUN_012ec220();
      FUN_00100250(PTR__string_04379718,&DAT_043c1ed8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c1ef0);
    }
    pcVar28 = (char *)FUN_012eb608(local_298,&DAT_043c1ed8);
    psVar19 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043c2008,psVar19);
    lVar16 = local_288;
    plVar10 = DAT_043f1798;
    if ((((ulong)local_298[0] & 1) != 0) && (local_288 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar10;
      }
      uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar16,0,8);
          goto LAB_012e95e0;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar16,0,8);
    }
LAB_012e95e0:
    FUN_00100250(PTR__string_04379718,&DAT_043c2008,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c2020);
  }
  std::string::string(&local_4c8,(string *)&DAT_043c2008);
  iVar12 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043c2000);
  sVar1 = (ulong)((byte)local_4c8 >> 1);
  if (((byte)local_4c8 & 1) != 0) {
    sVar1 = local_4c0;
  }
  std::string::append((ulong)&local_4c8,(char)iVar12);
  if (((byte)local_4c8 & 1) == 0) {
    puVar29 = auStack_4c7;
    local_4c0 = (size_t)((byte)local_4c8 >> 1);
  }
  else {
    puVar29 = local_4b8;
  }
  snprintf(puVar29 + (sVar1 - 1),local_4c0,"%d",(ulong)DAT_043c2000);
  DAT_043c2000 = DAT_043c2000 + 1;
  if (((DAT_043c2040 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043c2040), iVar12 != 0)) {
    local_288 = 0;
    local_298[1] = (undefined1 *)0x0;
    local_298[0] = (char *)0x2e6c6f7308;
    if (((DAT_043c1ef0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043c1ef0), iVar12 != 0)) {
      FUN_012ec220();
      FUN_00100250(PTR__string_04379718,&DAT_043c1ed8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c1ef0);
    }
    pcVar28 = (char *)FUN_012eb608(local_298,&DAT_043c1ed8);
    psVar19 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043c2028,psVar19);
    lVar16 = local_288;
    plVar10 = DAT_043f1798;
    if ((((ulong)local_298[0] & 1) != 0) && (local_288 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar10;
      }
      uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar16,0,8);
          goto LAB_012e9734;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar16,0,8);
    }
LAB_012e9734:
    FUN_00100250(PTR__string_04379718,&DAT_043c2028,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c2040);
  }
  puVar3 = DAT_043c2038;
  if ((DAT_043c2028 & 1) == 0) {
    puVar3 = &DAT_043c2029;
  }
  if (((byte)local_4c8 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_4c8 | 1);
  }
  else {
    puVar29 = local_4b8;
  }
  if (((DAT_043c2050 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043c2050), iVar12 != 0)) {
    DAT_043c2048 = 0xd0;
    __cxa_guard_release(&DAT_043c2050);
  }
  if (((DAT_043c2060 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043c2060), iVar12 != 0)) {
    DAT_043c2058 = 0xd7;
    __cxa_guard_release(&DAT_043c2060);
  }
  uVar24 = DAT_043c2048;
  lVar16 = FUN_00153520(param_2,DAT_043c2048);
  if ((uVar24 < ((ulong)(uint)-(int)lVar16 & 7 | 0xd0)) ||
     (puVar20 = (undefined8 *)(lVar16 + ((ulong)(uint)-(int)lVar16 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar24 = DAT_043c2058;
    lVar16 = FUN_00153520(param_2,DAT_043c2058);
    if ((uVar24 < ((ulong)(uint)-(int)lVar16 & 7 | 0xd0)) ||
       (puVar20 = (undefined8 *)(lVar16 + ((ulong)(uint)-(int)lVar16 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_012ee060();
      puVar4 = DAT_043c2078;
      if ((DAT_043c2068 & 1) == 0) {
        puVar4 = &DAT_043c2069;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar21 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar20[1] = uVar21;
  puVar20[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar16 = *(long *)(param_1 + 0x18);
  puVar20[3] = lVar16;
  lVar25 = *(long *)(param_1 + 0x20);
  puVar20[4] = lVar25;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar20[2];
    uVar24 = *(ulong *)(lVar16 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar24 = uVar26 - 1 & uVar24;
    }
    else if (uVar26 <= uVar24) {
      uVar9 = 0;
      if (uVar26 != 0) {
        uVar9 = uVar24 / uVar26;
      }
      uVar24 = uVar24 - uVar9 * uVar26;
    }
    *(undefined8 **)(puVar20[1] + uVar24 * 8) = puVar20 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar21 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar21;
  puVar20[7] = uVar5;
  puVar20[8] = *(undefined8 *)(param_1 + 0x40);
  puVar20[9] = *(undefined8 *)(param_1 + 0x48);
  puVar20[10] = *(undefined8 *)(param_1 + 0x50);
  uVar7 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar20 = &PTR_FUN_04203300;
  *(undefined1 *)(puVar20 + 0xb) = uVar7;
  uVar21 = *(undefined8 *)(param_1 + 0x68);
  puVar20[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar20[0xd] = uVar21;
  uVar21 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  puVar20[0x10] = *(undefined8 *)(param_1 + 0x80);
  puVar20[0x11] = uVar6;
  puVar20[0xe] = uVar21;
  puVar20[0xf] = uVar5;
  uVar21 = *(undefined8 *)(param_1 + 0x90);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  puVar20[0x14] = *(undefined8 *)(param_1 + 0xa0);
  puVar20[0x15] = uVar6;
  puVar20[0x12] = uVar21;
  puVar20[0x13] = uVar5;
  uVar21 = *(undefined8 *)(param_1 + 0xb0);
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = *(undefined8 *)(param_1 + 200);
  puVar20[0x18] = *(undefined8 *)(param_1 + 0xc0);
  puVar20[0x19] = uVar6;
  puVar20[0x16] = uVar21;
  puVar20[0x17] = uVar5;
  iVar12 = FUN_00154450(param_2,puVar29);
  if (iVar12 != 0) {
    FUN_001516f0(param_2,&LAB_012ee020,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar13 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar13);
  }
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar16 = FUN_001511d0(param_2,0xffffffff);
  lVar16 = lVar16 + ((ulong)(uint)-(int)lVar16 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar10 = DAT_043f1798;
  if ((((byte)local_4c8 & 1) != 0) && (local_4b8 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar27 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar27 = plVar10;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar25 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar25 + 0x38d488) = 1;
        *(undefined8 *)(lVar25 + 0x38d478) = 0;
        *(undefined8 *)(lVar25 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar25 + 0x38d480)) {
        FUN_02bcc824(plVar27,local_4b8,0,8);
        goto LAB_012e89e4;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,local_4b8,0,8);
  }
LAB_012e89e4:
  memset(local_298,0,0x230);
  pcVar28 = *(char **)(lVar16 + 0x70);
  sVar17 = strlen(pcVar28);
  sVar1 = 10;
  if (sVar17 < 0xb) {
    sVar1 = sVar17;
  }
  if (sVar1 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = memcmp("__newindex",pcVar28,sVar1);
  }
  bVar11 = uVar14 == 0;
  if (uVar14 == 0) {
    uVar14 = 0xffffffff;
  }
  lVar25 = lVar16 + 8;
  if (sVar17 < 0xb && bVar11) {
    uVar14 = (uint)(sVar17 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  puVar29 = &LAB_012edd8c;
  if (uVar14 != 0) {
    puVar29 = &LAB_012ec8ac;
  }
  do {
    lVar18 = FUN_008cca50();
    pbVar23 = (byte *)(lVar18 + lVar30);
    sVar17 = strlen(pcVar28);
    sVar1 = (ulong)(*pbVar23 >> 1);
    if ((*pbVar23 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar23 + 8);
    }
    if ((sVar17 == sVar1) &&
       (iVar12 = std::string::compare((ulong)pbVar23,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar12 == 0)) {
      iVar12 = (int)uVar24;
      if (iVar12 == 1) {
        *(undefined1 **)(lVar16 + 0x30) = puVar29;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            uVar26 = 0;
            *(undefined1 **)(lVar16 + 0x80) = puVar29;
            goto LAB_012e8b04;
          }
          *(ulong *)(lVar16 + 200) = *(ulong *)(lVar16 + 200) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar16 + 0x38) = puVar29;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 200) = *(ulong *)(lVar16 + 200) | 1L << (uVar24 & 0x3f);
      goto LAB_012e8b04;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  uVar26 = 1;
  local_298[0] = pcVar28;
  local_298[1] = puVar29;
LAB_012e8b04:
  pcVar28 = *(char **)(lVar16 + 0x78);
  sVar17 = strlen(pcVar28);
  sVar1 = 10;
  if (sVar17 < 0xb) {
    sVar1 = sVar17;
  }
  if (sVar1 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = memcmp("__newindex",pcVar28,sVar1);
  }
  bVar11 = uVar14 == 0;
  if (uVar14 == 0) {
    uVar14 = 0xffffffff;
  }
  if (sVar17 < 0xb && bVar11) {
    uVar14 = (uint)(sVar17 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = &LAB_012edf84;
  if (uVar14 != 0) {
    pcVar22 = &LAB_012edf50;
  }
  while( true ) {
    lVar18 = FUN_008cca50();
    pbVar23 = (byte *)(lVar18 + lVar30);
    sVar17 = strlen(pcVar28);
    sVar1 = (ulong)(*pbVar23 >> 1);
    if ((*pbVar23 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar23 + 8);
    }
    if ((sVar17 == sVar1) &&
       (iVar12 = std::string::compare((ulong)pbVar23,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar12 == 0)) break;
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
    if (uVar24 == 0x20) {
LAB_012e9270:
      local_298[uVar26 * 2] = pcVar28;
      local_298[uVar26 * 2 + 1] = pcVar22;
      uVar14 = (uint)*(undefined8 *)(lVar16 + 200);
      uVar26 = (ulong)((int)uVar26 + 1);
joined_r0x012e8be8:
      if ((uVar14 >> 0x11 & 1) == 0) {
LAB_012e8bec:
        FUN_008cca50();
        uVar14 = (uint)*(undefined8 *)(lVar16 + 200);
      }
LAB_012e8bf4:
      if ((uVar14 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar14 = (uint)*(undefined8 *)(lVar16 + 200);
      }
      if ((uVar14 >> 0x10 & 1) == 0) {
        lVar30 = FUN_008cca50();
        pcVar28 = (char *)(lVar30 + 0x181);
        if ((*(byte *)(lVar30 + 0x180) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 400);
        }
        local_298[uVar26 * 2] = pcVar28;
        local_298[uVar26 * 2 + 1] = &LAB_012ecf40;
        uVar14 = (uint)*(undefined8 *)(lVar16 + 200);
        uVar26 = (ulong)((int)uVar26 + 1);
      }
      uVar24 = uVar26;
      if ((uVar14 >> 0x1b & 1) == 0) {
        lVar30 = FUN_008cca50();
        uVar24 = (ulong)((int)uVar26 + 1);
        pcVar28 = (char *)(lVar30 + 0x289);
        if ((*(byte *)(lVar30 + 0x288) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 0x298);
        }
        local_298[uVar26 * 2] = pcVar28;
        local_298[uVar26 * 2 + 1] = &LAB_012ecf38;
      }
      uVar26 = uVar24;
      if (*(long *)(lVar16 + 0x80) != 0) {
        lVar30 = FUN_008cca50();
        pcVar28 = (char *)(lVar30 + 0x1c9);
        if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 0x1d8);
        }
        pcVar22 = *(char **)(lVar16 + 0x80);
        uVar26 = (ulong)((int)uVar24 + 1);
        local_298[uVar24 * 2] = pcVar28;
        local_298[uVar24 * 2 + 1] = pcVar22;
      }
      local_298[uVar26 * 2] = (char *)0x0;
      local_298[uVar26 * 2 + 1] = (char *)0x0;
      memcpy(&local_4c8,local_298,0x230);
      memcpy(asStack_6f8,local_298,0x230);
      lVar30 = FUN_008cca50();
      lVar18 = uVar26 - 1;
      pcVar28 = local_298[lVar18 * 2];
      sVar17 = strlen(pcVar28);
      sVar1 = (ulong)(*(byte *)(lVar30 + 0x1c8) >> 1);
      if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar30 + 0x1d0);
      }
      if ((sVar17 == sVar1) &&
         (iVar12 = std::string::compare(lVar30 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
         iVar12 == 0)) {
        auStack_4d8[lVar18 * 2 + 2] = 0;
        *(undefined8 *)(auStack_4c7 + lVar18 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_6f8 + lVar18 * 0x10) = local_298[lVar18 * 2];
      *(undefined1 **)(asStack_6f8 + (lVar18 * 2 + 1) * 8) = &LAB_012edfc0;
      FUN_00151fe0(param_2,0,2);
      local_700[0] = FUN_0014feb0(param_2,0xffffffff);
      local_708 = param_2;
      if (((DAT_043c1ef0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043c1ef0), iVar12 != 0)) {
        FUN_012ec220();
        FUN_00100250(PTR__string_04379718,&DAT_043c1ed8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043c1ef0);
      }
      uVar13 = local_700[0];
      if ((DAT_043c1ed8 & 1) == 0) {
        uVar24 = (ulong)(DAT_043c1ed8 >> 1);
        puVar29 = &DAT_043c1ed9;
      }
      else {
        uVar24 = DAT_043c1ee0;
        puVar29 = DAT_043c1ee8;
      }
      FUN_001514f0(param_2,puVar29,uVar24);
      FUN_00152550(param_2,uVar13,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_012ece50,0);
      FUN_00152550(param_2,uVar13,&DAT_0397bfcb);
      lVar30 = 0;
      do {
        if (lVar30 == 1) {
          psVar19 = asStack_6f8;
          FUN_012ea9d4();
          pbVar23 = &DAT_043c1e40;
        }
        else if (lVar30 == 0) {
          psVar19 = &local_4c8;
          FUN_012ea7f8();
          pbVar23 = &DAT_043c1dc8;
        }
        else {
          psVar19 = (string *)local_298;
          FUN_012eabb0();
          pbVar23 = &DAT_043c1eb8;
        }
        pbVar2 = pbVar23 + 1;
        if ((*pbVar23 & 1) != 0) {
          pbVar2 = *(byte **)(pbVar23 + 0x10);
        }
        FUN_00154450(param_2,pbVar2);
        local_710 = FUN_0014feb0(param_2,0xffffffff);
        local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
        local_718 = param_2;
        FUN_008fe304(local_720,param_2,&local_750,&local_708,local_710);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar16);
        FUN_00155a20(param_2,psVar19,2);
        uVar13 = local_710;
        if (*(long *)(lVar16 + 0xb0) == 0) {
          lVar18 = *(long *)(lVar16 + 0xb8);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar13,"class_check");
          lVar18 = *(long *)(lVar16 + 0xb8);
          uVar13 = local_710;
        }
        local_710 = uVar13;
        if (lVar18 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar13,"class_cast");
        }
        uVar13 = local_710;
        uVar21 = *(undefined8 *)(lVar16 + 0x90);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar16);
        FUN_00151810(param_2,lVar25);
        FUN_001516f0(param_2,uVar21,3);
        FUN_00152550(param_2,uVar13,&DAT_03955ac7);
        uVar13 = local_710;
        uVar21 = *(undefined8 *)(lVar16 + 0x98);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar16);
        FUN_00151810(param_2,lVar25);
        FUN_001516f0(param_2,uVar21,3);
        FUN_00152550(param_2,uVar13,&DAT_0397c077);
        if (*(char *)(lVar16 + 0x58) == '\0') {
          local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
          FUN_008fe304(local_720,param_2,&local_750,&local_718,local_710);
        }
        else {
          local_720[0] = 1;
          local_750 = &LAB_012ee010;
          uStack_748 = 0;
          local_740 = lVar16;
          lStack_738 = lVar25;
          FUN_012ee49c(param_2,local_720,&local_750,local_710);
          local_720[0] = 2;
          local_750 = &LAB_012ee014;
          uStack_748 = 0;
          local_740 = lVar16;
          lStack_738 = lVar25;
          FUN_012ee49c(param_2,local_720,&local_750,local_710);
        }
        FUN_00151fe0(param_2,0,3);
        uVar13 = FUN_0014feb0(param_2,0xffffffff);
        local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
        FUN_008fe304(local_720,param_2,&local_750,&local_708,uVar13);
        if (*(undefined1 **)(lVar16 + 0x88) == (undefined1 *)0x0) {
          cVar8 = *(char *)(lVar16 + 0xc0);
        }
        else {
          local_720[0] = 4;
          uStack_748 = 0;
          local_750 = *(undefined1 **)(lVar16 + 0x88);
          local_740 = lVar16;
          lStack_738 = lVar25;
          FUN_012ee49c(param_2,local_720,&local_750,uVar13);
          cVar8 = *(char *)(lVar16 + 0xc0);
        }
        if (cVar8 != '\0') {
          local_720[0] = 1;
          local_750 = &LAB_012ee010;
          uStack_748 = 0;
          local_740 = lVar16;
          lStack_738 = lVar25;
          FUN_012ee49c(param_2,local_720,&local_750,uVar13);
          local_720[0] = 2;
          local_750 = &LAB_012ee014;
          uStack_748 = 0;
          local_740 = lVar16;
          lStack_738 = lVar25;
          FUN_012ee49c(param_2,local_720,&local_750,uVar13);
        }
        uVar15 = local_710;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar13);
        }
        FUN_00152ae0(param_2,uVar15);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_718,0xfffffffe);
        lVar30 = lVar30 + 1;
      } while (lVar30 != 3);
      FUN_012eadd8();
      puVar3 = DAT_043c1f40;
      if ((DAT_043c1f30 & 1) == 0) {
        puVar3 = &DAT_043c1f31;
      }
      FUN_00154450(param_2,puVar3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar13);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar16);
      FUN_00155a20(param_2,local_298,2);
      FUN_00151fe0(param_2,0,3);
      uVar15 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar15);
      local_750 = *(undefined1 **)(lVar16 + 0x88);
      if (local_750 != (undefined1 *)0x0) {
        local_718 = CONCAT44(local_718._4_4_,4);
        uStack_748 = 0;
        local_740 = lVar16;
        lStack_738 = lVar25;
        FUN_012ee49c(param_2,&local_718,&local_750,uVar15);
      }
      local_718._0_4_ = 1;
      local_750 = &LAB_012ee018;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7a790;
      local_740 = lVar16;
      lStack_738 = lVar25;
      FUN_012eeb50(param_2,&local_718,&local_750,uVar15);
      local_718 = CONCAT44(local_718._4_4_,2);
      local_750 = &LAB_012ee01c;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7a790;
      local_740 = lVar16;
      lStack_738 = lVar25;
      FUN_012eeb50(param_2,&local_718,&local_750,uVar15);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar15);
      }
      FUN_00152ae0(param_2,uVar13);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_700[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar12 = (int)uVar24;
  if (iVar12 == 0x13) {
    *(char **)(lVar16 + 0x80) = pcVar22;
    uVar14 = (uint)*(undefined8 *)(lVar16 + 200);
    goto joined_r0x012e8be8;
  }
  if (iVar12 == 1) {
    *(char **)(lVar16 + 0x30) = pcVar22;
  }
  else {
    if (iVar12 != 2) {
      *(ulong *)(lVar16 + 200) = *(ulong *)(lVar16 + 200) | 1L << (uVar24 & 0x3f);
      goto LAB_012e9270;
    }
    *(char **)(lVar16 + 0x38) = pcVar22;
  }
  *(undefined1 *)(lVar16 + 0x58) = 1;
  *(ulong *)(lVar16 + 200) = *(ulong *)(lVar16 + 200) | 1L << (uVar24 & 0x3f);
  uVar14 = (uint)*(undefined8 *)(lVar16 + 200);
  if ((uVar14 >> 0x11 & 1) != 0) goto LAB_012e8bf4;
  goto LAB_012e8bec;
}


