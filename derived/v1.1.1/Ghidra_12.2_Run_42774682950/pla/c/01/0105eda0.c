/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0105eda0; name: FUN_0105eda0
 */


undefined8 FUN_0105eda0(long param_1,long param_2)

{
  size_t sVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined1 *local_780;
  undefined8 uStack_778;
  long local_770;
  long lStack_768;
  undefined8 local_760;
  undefined *puStack_758;
  undefined4 local_750 [2];
  long local_748;
  undefined4 local_740;
  long local_738;
  undefined4 local_730 [2];
  string asStack_728 [560];
  undefined8 auStack_4f8 [2];
  string local_4e8;
  undefined1 auStack_4e7 [7];
  size_t local_4e0;
  undefined1 *local_4d8;
  char *apcStack_2b8 [2];
  char *local_2a8 [2];
  long local_298;
  
  if (((DAT_043b9848 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043b9848), iVar12 != 0)) {
    local_298 = 0;
    local_2a8[1] = (undefined1 *)0x0;
    local_2a8[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437e2d8 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(PTR_DAT_0437e2d8);
      puVar3 = PTR_DAT_0437e2e0;
      if (iVar12 != 0) {
        FUN_01062940(PTR_DAT_0437e2e0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437e2d8);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_0437e2e0 + 0x10);
    if ((*PTR_DAT_0437e2e0 & 1) == 0) {
      puVar3 = PTR_DAT_0437e2e0 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)local_2a8,(ulong)puVar3);
    psVar19 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043b9830,psVar19);
    lVar16 = local_298;
    plVar10 = DAT_043f1798;
    if ((((ulong)local_2a8[0] & 1) != 0) && (local_298 != 0)) {
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
          goto LAB_0105fd4c;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar16,0,8);
    }
LAB_0105fd4c:
    FUN_00100250(PTR__string_04379718,&DAT_043b9830,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b9848);
  }
  std::string::string(&local_4e8,(string *)&DAT_043b9830);
  iVar12 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b9828);
  sVar1 = (ulong)((byte)local_4e8 >> 1);
  if (((byte)local_4e8 & 1) != 0) {
    sVar1 = local_4e0;
  }
  std::string::append((ulong)&local_4e8,(char)iVar12);
  if (((byte)local_4e8 & 1) == 0) {
    puVar29 = auStack_4e7;
    local_4e0 = (size_t)((byte)local_4e8 >> 1);
  }
  else {
    puVar29 = local_4d8;
  }
  snprintf(puVar29 + (sVar1 - 1),local_4e0,"%d",(ulong)DAT_043b9828);
  DAT_043b9828 = DAT_043b9828 + 1;
  if (((DAT_043b9868 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043b9868), iVar12 != 0)) {
    local_298 = 0;
    local_2a8[1] = (undefined1 *)0x0;
    local_2a8[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437e2d8 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(PTR_DAT_0437e2d8);
      puVar3 = PTR_DAT_0437e2e0;
      if (iVar12 != 0) {
        FUN_01062940(PTR_DAT_0437e2e0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437e2d8);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_0437e2e0 + 0x10);
    if ((*PTR_DAT_0437e2e0 & 1) == 0) {
      puVar3 = PTR_DAT_0437e2e0 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)local_2a8,(ulong)puVar3);
    psVar19 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043b9850,psVar19);
    lVar16 = local_298;
    plVar10 = DAT_043f1798;
    if ((((ulong)local_2a8[0] & 1) != 0) && (local_298 != 0)) {
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
          goto LAB_0105febc;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar16,0,8);
    }
LAB_0105febc:
    FUN_00100250(PTR__string_04379718,&DAT_043b9850,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b9868);
  }
  puVar3 = DAT_043b9860;
  if ((DAT_043b9850 & 1) == 0) {
    puVar3 = &DAT_043b9851;
  }
  if (((byte)local_4e8 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_4e8 | 1);
  }
  else {
    puVar29 = local_4d8;
  }
  if (((DAT_043b9878 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043b9878), iVar12 != 0)) {
    DAT_043b9870 = 0xe0;
    __cxa_guard_release(&DAT_043b9878);
  }
  if (((DAT_043b9888 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_043b9888), iVar12 != 0)) {
    DAT_043b9880 = 0xe7;
    __cxa_guard_release(&DAT_043b9888);
  }
  uVar24 = DAT_043b9870;
  lVar16 = FUN_00153520(param_2,DAT_043b9870);
  if ((uVar24 < ((ulong)(uint)-(int)lVar16 & 7 | 0xe0)) ||
     (puVar20 = (undefined8 *)(lVar16 + ((ulong)(uint)-(int)lVar16 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar24 = DAT_043b9880;
    lVar16 = FUN_00153520(param_2,DAT_043b9880);
    if ((uVar24 < ((ulong)(uint)-(int)lVar16 & 7 | 0xe0)) ||
       (puVar20 = (undefined8 *)(lVar16 + ((ulong)(uint)-(int)lVar16 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_010654d0();
      puVar4 = DAT_043b98a0;
      if ((DAT_043b9890 & 1) == 0) {
        puVar4 = &DAT_043b9891;
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
  *puVar20 = &PTR_FUN_041ef4e0;
  *(undefined1 *)(puVar20 + 0xb) = uVar7;
  uVar21 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  puVar20[0xe] = *(undefined8 *)(param_1 + 0x70);
  puVar20[0xf] = uVar6;
  puVar20[0xc] = uVar21;
  puVar20[0xd] = uVar5;
  uVar21 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  puVar20[0x12] = *(undefined8 *)(param_1 + 0x90);
  puVar20[0x13] = uVar6;
  puVar20[0x10] = uVar21;
  puVar20[0x11] = uVar5;
  uVar21 = *(undefined8 *)(param_1 + 0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  puVar20[0x16] = *(undefined8 *)(param_1 + 0xb0);
  puVar20[0x17] = uVar6;
  puVar20[0x14] = uVar21;
  puVar20[0x15] = uVar5;
  uVar21 = *(undefined8 *)(param_1 + 0xc0);
  uVar5 = *(undefined8 *)(param_1 + 200);
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  puVar20[0x1a] = *(undefined8 *)(param_1 + 0xd0);
  puVar20[0x1b] = uVar6;
  puVar20[0x18] = uVar21;
  puVar20[0x19] = uVar5;
  iVar12 = FUN_00154450(param_2,puVar29);
  if (iVar12 != 0) {
    FUN_001516f0(param_2,&LAB_01065490,0);
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
  if ((((byte)local_4e8 & 1) != 0) && (local_4d8 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar27,local_4d8,0,8);
        goto LAB_0105f13c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,local_4d8,0,8);
  }
LAB_0105f13c:
  memset(local_2a8,0,0x240);
  pcVar28 = *(char **)(lVar16 + 0x80);
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
  puVar29 = &LAB_01064ba0;
  if (uVar14 != 0) {
    puVar29 = &LAB_010632b8;
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
            *(undefined1 **)(lVar16 + 0x90) = puVar29;
            goto LAB_0105f25c;
          }
          *(ulong *)(lVar16 + 0xd8) = *(ulong *)(lVar16 + 0xd8) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar16 + 0x38) = puVar29;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(ulong *)(lVar16 + 0xd8) = *(ulong *)(lVar16 + 0xd8) | 1L << (uVar24 & 0x3f);
      goto LAB_0105f25c;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  uVar26 = 1;
  local_2a8[0] = pcVar28;
  local_2a8[1] = puVar29;
LAB_0105f25c:
  pcVar28 = *(char **)(lVar16 + 0x88);
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
  pcVar22 = &LAB_01064dbc;
  if (uVar14 != 0) {
    pcVar22 = &LAB_01064d6c;
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
LAB_0105f9c0:
      local_2a8[uVar26 * 2] = pcVar28;
      local_2a8[uVar26 * 2 + 1] = pcVar22;
      uVar14 = (uint)*(undefined8 *)(lVar16 + 0xd8);
      uVar26 = (ulong)((int)uVar26 + 1);
joined_r0x0105f340:
      if ((uVar14 >> 0x11 & 1) == 0) {
LAB_0105f344:
        FUN_008cca50();
        uVar14 = (uint)*(undefined8 *)(lVar16 + 0xd8);
      }
LAB_0105f34c:
      if ((uVar14 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar14 = (uint)*(undefined8 *)(lVar16 + 0xd8);
      }
      if ((uVar14 >> 0x10 & 1) == 0) {
        lVar30 = FUN_008cca50();
        pcVar28 = (char *)(lVar30 + 0x181);
        if ((*(byte *)(lVar30 + 0x180) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 400);
        }
        local_2a8[uVar26 * 2] = pcVar28;
        local_2a8[uVar26 * 2 + 1] = &LAB_01063900;
        uVar14 = (uint)*(undefined8 *)(lVar16 + 0xd8);
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
        local_2a8[uVar26 * 2] = pcVar28;
        local_2a8[uVar26 * 2 + 1] = "\x15\x04";
      }
      uVar26 = uVar24;
      if (*(long *)(lVar16 + 0x90) != 0) {
        lVar30 = FUN_008cca50();
        pcVar28 = (char *)(lVar30 + 0x1c9);
        if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 0x1d8);
        }
        pcVar22 = *(char **)(lVar16 + 0x90);
        uVar26 = (ulong)((int)uVar24 + 1);
        local_2a8[uVar24 * 2] = pcVar28;
        local_2a8[uVar24 * 2 + 1] = pcVar22;
      }
      local_2a8[uVar26 * 2] = (char *)0x0;
      local_2a8[uVar26 * 2 + 1] = (char *)0x0;
      memcpy(&local_4e8,local_2a8,0x240);
      memcpy(asStack_728,local_2a8,0x240);
      lVar30 = FUN_008cca50();
      lVar18 = uVar26 - 1;
      pcVar28 = local_2a8[lVar18 * 2];
      sVar17 = strlen(pcVar28);
      sVar1 = (ulong)(*(byte *)(lVar30 + 0x1c8) >> 1);
      if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar30 + 0x1d0);
      }
      if ((sVar17 == sVar1) &&
         (iVar12 = std::string::compare(lVar30 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
         iVar12 == 0)) {
        auStack_4f8[lVar18 * 2 + 2] = 0;
        *(undefined8 *)(auStack_4e7 + lVar18 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_728 + lVar18 * 0x10) = local_2a8[lVar18 * 2];
      *(undefined1 **)(asStack_728 + (lVar18 * 2 + 1) * 8) = &LAB_01064e20;
      FUN_00151fe0(param_2,0,2);
      local_730[0] = FUN_0014feb0(param_2,0xffffffff);
      local_738 = param_2;
      if ((*PTR_DAT_0437e2d8 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(PTR_DAT_0437e2d8);
        puVar3 = PTR_DAT_0437e2e0;
        if (iVar12 != 0) {
          FUN_01062940(PTR_DAT_0437e2e0);
          FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437e2d8);
        }
      }
      uVar13 = local_730[0];
      uVar24 = *(ulong *)(PTR_DAT_0437e2e0 + 8);
      puVar3 = *(undefined **)(PTR_DAT_0437e2e0 + 0x10);
      if ((*PTR_DAT_0437e2e0 & 1) == 0) {
        puVar3 = PTR_DAT_0437e2e0 + 1;
        uVar24 = (ulong)((byte)*PTR_DAT_0437e2e0 >> 1);
      }
      FUN_001514f0(param_2,puVar3,uVar24);
      FUN_00152550(param_2,uVar13,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_01063810,0);
      FUN_00152550(param_2,uVar13,&DAT_0397bfcb);
      lVar30 = 0;
      do {
        if (lVar30 == 1) {
          psVar19 = asStack_728;
          FUN_0106118c();
          pbVar23 = &DAT_043b9668;
        }
        else if (lVar30 == 0) {
          psVar19 = &local_4e8;
          FUN_01060f98();
          pbVar23 = &DAT_043b95f0;
        }
        else {
          psVar19 = (string *)local_2a8;
          FUN_01061380();
          pbVar23 = &DAT_043b96e0;
        }
        pbVar2 = pbVar23 + 1;
        if ((*pbVar23 & 1) != 0) {
          pbVar2 = *(byte **)(pbVar23 + 0x10);
        }
        FUN_00154450(param_2,pbVar2);
        local_740 = FUN_0014feb0(param_2,0xffffffff);
        local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
        local_748 = param_2;
        FUN_008fe304(local_750,param_2,&local_780,&local_738,local_740);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar16);
        FUN_00155a20(param_2,psVar19,2);
        uVar13 = local_740;
        if (*(long *)(lVar16 + 0xc0) == 0) {
          lVar18 = *(long *)(lVar16 + 200);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar13,"class_check");
          lVar18 = *(long *)(lVar16 + 200);
          uVar13 = local_740;
        }
        local_740 = uVar13;
        if (lVar18 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar13,"class_cast");
        }
        uVar13 = local_740;
        uVar21 = *(undefined8 *)(lVar16 + 0xa0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar16);
        FUN_00151810(param_2,lVar25);
        FUN_001516f0(param_2,uVar21,3);
        FUN_00152550(param_2,uVar13,&DAT_03955ac7);
        uVar13 = local_740;
        uVar21 = *(undefined8 *)(lVar16 + 0xa8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar16);
        FUN_00151810(param_2,lVar25);
        FUN_001516f0(param_2,uVar21,3);
        FUN_00152550(param_2,uVar13,&DAT_0397c077);
        if (*(char *)(lVar16 + 0x58) == '\0') {
          local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
          FUN_008fe304(local_750,param_2,&local_780,&local_748,local_740);
        }
        else {
          local_750[0] = 1;
          local_780 = &LAB_01064e70;
          uStack_778 = 0;
          local_770 = lVar16;
          lStack_768 = lVar25;
          FUN_01065cfc(param_2,local_750,&local_780,local_740);
          local_750[0] = 2;
          local_780 = &LAB_0106517c;
          uStack_778 = 0;
          local_770 = lVar16;
          lStack_768 = lVar25;
          FUN_01065cfc(param_2,local_750,&local_780,local_740);
        }
        FUN_00151fe0(param_2,0,3);
        uVar13 = FUN_0014feb0(param_2,0xffffffff);
        local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
        FUN_008fe304(local_750,param_2,&local_780,&local_738,uVar13);
        if (*(undefined1 **)(lVar16 + 0x98) == (undefined1 *)0x0) {
          cVar8 = *(char *)(lVar16 + 0xd0);
        }
        else {
          local_750[0] = 4;
          uStack_778 = 0;
          local_780 = *(undefined1 **)(lVar16 + 0x98);
          local_770 = lVar16;
          lStack_768 = lVar25;
          FUN_01065cfc(param_2,local_750,&local_780,uVar13);
          cVar8 = *(char *)(lVar16 + 0xd0);
        }
        if (cVar8 != '\0') {
          local_750[0] = 1;
          local_780 = &LAB_01064e70;
          uStack_778 = 0;
          local_770 = lVar16;
          lStack_768 = lVar25;
          FUN_01065cfc(param_2,local_750,&local_780,uVar13);
          local_750[0] = 2;
          local_780 = &LAB_0106517c;
          uStack_778 = 0;
          local_770 = lVar16;
          lStack_768 = lVar25;
          FUN_01065cfc(param_2,local_750,&local_780,uVar13);
        }
        uVar15 = local_740;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar13);
        }
        FUN_00152ae0(param_2,uVar15);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_748,0xfffffffe);
        lVar30 = lVar30 + 1;
      } while (lVar30 != 3);
      FUN_010615c8();
      puVar3 = DAT_043b9768;
      if ((DAT_043b9758 & 1) == 0) {
        puVar3 = &DAT_043b9759;
      }
      FUN_00154450(param_2,puVar3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar13);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar16);
      FUN_00155a20(param_2,local_2a8,2);
      FUN_00151fe0(param_2,0,3);
      uVar15 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar15);
      local_780 = *(undefined1 **)(lVar16 + 0x98);
      if (local_780 != (undefined1 *)0x0) {
        local_748 = CONCAT44(local_748._4_4_,4);
        uStack_778 = 0;
        local_770 = lVar16;
        lStack_768 = lVar25;
        FUN_01065cfc(param_2,&local_748,&local_780,uVar15);
      }
      local_748._0_4_ = 1;
      local_780 = &LAB_01065488;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a78948;
      local_770 = lVar16;
      lStack_768 = lVar25;
      FUN_01065d98(param_2,&local_748,&local_780,uVar15);
      local_748 = CONCAT44(local_748._4_4_,2);
      local_780 = &LAB_0106548c;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a78948;
      local_770 = lVar16;
      lStack_768 = lVar25;
      FUN_01065d98(param_2,&local_748,&local_780,uVar15);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar15);
      }
      FUN_00152ae0(param_2,uVar13);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_730[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar12 = (int)uVar24;
  if (iVar12 == 0x13) {
    *(char **)(lVar16 + 0x90) = pcVar22;
    uVar14 = (uint)*(undefined8 *)(lVar16 + 0xd8);
    goto joined_r0x0105f340;
  }
  if (iVar12 == 1) {
    *(char **)(lVar16 + 0x30) = pcVar22;
  }
  else {
    if (iVar12 != 2) {
      *(ulong *)(lVar16 + 0xd8) = *(ulong *)(lVar16 + 0xd8) | 1L << (uVar24 & 0x3f);
      goto LAB_0105f9c0;
    }
    *(char **)(lVar16 + 0x38) = pcVar22;
  }
  *(undefined1 *)(lVar16 + 0x58) = 1;
  *(ulong *)(lVar16 + 0xd8) = *(ulong *)(lVar16 + 0xd8) | 1L << (uVar24 & 0x3f);
  uVar14 = (uint)*(undefined8 *)(lVar16 + 0xd8);
  if ((uVar14 >> 0x11 & 1) == 0) goto LAB_0105f344;
  goto LAB_0105f34c;
}


