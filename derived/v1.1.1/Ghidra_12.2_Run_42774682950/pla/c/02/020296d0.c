/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020296d0; name: FUN_020296d0
 */


undefined8 FUN_020296d0(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  byte *pbVar15;
  string *psVar16;
  undefined *puVar17;
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
  undefined8 uVar29;
  undefined1 *local_8a0;
  undefined8 uStack_898;
  long local_890;
  long lStack_888;
  undefined8 local_880;
  undefined *puStack_878;
  undefined4 local_870 [2];
  long local_868;
  undefined4 local_860;
  long local_858;
  undefined4 local_850 [2];
  string asStack_848 [656];
  undefined8 auStack_5b8 [2];
  string local_5a8;
  undefined1 auStack_5a7 [7];
  size_t local_5a0;
  undefined1 *local_598;
  char *apcStack_318 [2];
  char *local_308 [2];
  long local_2f8;
  
  if (((DAT_043d7118 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7118), iVar8 != 0)) {
    local_2f8 = 0;
    local_308[1] = (undefined1 *)0x0;
    local_308[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383038 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04383038);
      puVar17 = PTR_DAT_04383040;
      if (iVar8 != 0) {
        FUN_01ef1180(PTR_DAT_04383040);
        FUN_00100250(PTR__string_04379718,puVar17,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383038);
      }
    }
    puVar17 = *(undefined **)(PTR_DAT_04383040 + 0x10);
    if ((*PTR_DAT_04383040 & 1) == 0) {
      puVar17 = PTR_DAT_04383040 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)local_308,(ulong)puVar17);
    psVar16 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043d7100,psVar16);
    lVar12 = local_2f8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_308[0] & 1) != 0) && (local_2f8 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
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
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_0202a63c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_0202a63c:
    FUN_00100250(PTR__string_04379718,&DAT_043d7100,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d7118);
  }
  std::string::string(&local_5a8,(string *)&DAT_043d7100);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d70f8);
  sVar2 = (ulong)((byte)local_5a8 >> 1);
  if (((byte)local_5a8 & 1) != 0) {
    sVar2 = local_5a0;
  }
  std::string::append((ulong)&local_5a8,(char)iVar8);
  if (((byte)local_5a8 & 1) == 0) {
    puVar27 = auStack_5a7;
    local_5a0 = (size_t)((byte)local_5a8 >> 1);
  }
  else {
    puVar27 = local_598;
  }
  snprintf(puVar27 + (sVar2 - 1),local_5a0,"%d",(ulong)DAT_043d70f8);
  DAT_043d70f8 = DAT_043d70f8 + 1;
  if (((DAT_043d7138 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7138), iVar8 != 0)) {
    local_2f8 = 0;
    local_308[1] = (undefined1 *)0x0;
    local_308[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383038 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04383038);
      puVar17 = PTR_DAT_04383040;
      if (iVar8 != 0) {
        FUN_01ef1180(PTR_DAT_04383040);
        FUN_00100250(PTR__string_04379718,puVar17,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383038);
      }
    }
    if ((*PTR_DAT_04383040 & 1) == 0) {
      puVar17 = PTR_DAT_04383040 + 1;
    }
    else {
      puVar17 = *(undefined **)(PTR_DAT_04383040 + 0x10);
    }
    pcVar26 = (char *)std::string::append((char *)local_308,(ulong)puVar17);
    psVar16 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043d7120,psVar16);
    lVar12 = local_2f8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_308[0] & 1) != 0) && (local_2f8 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
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
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_0202a7a4;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_0202a7a4:
    FUN_00100250(PTR__string_04379718,&DAT_043d7120,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d7138);
  }
  if ((DAT_043d7120 & 1) == 0) {
    uVar29 = 0x43d7121;
    if (((byte)local_5a8 & 1) == 0) goto LAB_0202a2a8;
LAB_020297c0:
    puVar27 = local_598;
  }
  else {
    uVar29 = DAT_043d7130;
    if (((byte)local_5a8 & 1) != 0) goto LAB_020297c0;
LAB_0202a2a8:
    puVar27 = (undefined1 *)((ulong)&local_5a8 | 1);
  }
  if (((DAT_043d7148 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7148), iVar8 != 0)) {
    DAT_043d7140 = 0x140;
    __cxa_guard_release(&DAT_043d7148);
  }
  if (((DAT_043d7158 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7158), iVar8 != 0)) {
    DAT_043d7150 = 0x147;
    __cxa_guard_release(&DAT_043d7158);
  }
  uVar22 = DAT_043d7140;
  lVar12 = FUN_00153520(param_2,DAT_043d7140);
  if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x140)) ||
     (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043d7150;
    lVar12 = FUN_00153520(param_2,DAT_043d7150);
    if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x140)) ||
       (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_020347e0();
      if ((DAT_043d7160 & 1) == 0) {
        puVar17 = &DAT_043d7161;
      }
      else {
        puVar17 = DAT_043d7170;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar17);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar12;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar12 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar5 = 0;
      if (uVar24 != 0) {
        uVar5 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar5 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425b290;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xe0);
  iVar8 = FUN_00154450(param_2,puVar27);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_020347a0,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar9 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar9);
  }
  FUN_001522a0(param_2,uVar29);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,uVar29);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_5a8 & 1) != 0) && (local_598 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar6;
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
        FUN_02bcc824(plVar25,local_598,0,8);
        goto LAB_02029a38;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_598,0,8);
  }
LAB_02029a38:
  memset(local_308,0,0x2a0);
  pcVar26 = *(char **)(lVar12 + 0xe0);
  sVar13 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar23 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  puVar27 = &LAB_020344c8;
  if (uVar10 != 0) {
    puVar27 = &LAB_02033dac;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(undefined1 **)(lVar12 + 0x30) = puVar27;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar24 = 0;
            *(undefined1 **)(lVar12 + 0xf0) = puVar27;
            goto LAB_02029b58;
          }
          *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar27;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar22 & 0x3f);
      goto LAB_02029b58;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_308[0] = pcVar26;
  local_308[1] = puVar27;
LAB_02029b58:
  pcVar26 = *(char **)(lVar12 + 0xe8);
  sVar13 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar1 = FUN_020346ec;
  if (uVar10 != 0) {
    pcVar1 = FUN_020346a4;
  }
  while( true ) {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) break;
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar22 == 0x20) {
LAB_0202a280:
      local_308[uVar24 * 2] = pcVar26;
      local_308[uVar24 * 2 + 1] = (char *)pcVar1;
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x138);
      uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x02029c3c:
      if ((uVar10 >> 0x11 & 1) == 0) {
LAB_02029c40:
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x138);
      }
LAB_02029c48:
      if ((uVar10 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x138);
      }
      uVar22 = uVar24;
      if ((uVar10 >> 0x10 & 1) == 0) {
        lVar28 = FUN_008cca50();
        if ((*(byte *)(lVar28 + 0x180) & 1) == 0) {
          pcVar26 = (char *)(lVar28 + 0x181);
        }
        else {
          pcVar26 = *(char **)(lVar28 + 400);
        }
        uVar22 = (ulong)((int)uVar24 + 1);
        local_308[uVar24 * 2] = pcVar26;
        local_308[uVar24 * 2 + 1] = PTR_LAB_04383a28;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x138);
      }
      uVar24 = uVar22;
      if ((uVar10 >> 0x1b & 1) == 0) {
        lVar28 = FUN_008cca50();
        if ((*(byte *)(lVar28 + 0x288) & 1) == 0) {
          pcVar26 = (char *)(lVar28 + 0x289);
        }
        else {
          pcVar26 = *(char **)(lVar28 + 0x298);
        }
        uVar24 = (ulong)((int)uVar22 + 1);
        local_308[uVar22 * 2] = pcVar26;
        local_308[uVar22 * 2 + 1] = PTR_LAB_04383a30;
      }
      uVar22 = uVar24;
      if (*(long *)(lVar12 + 0xf0) != 0) {
        lVar28 = FUN_008cca50();
        if ((*(byte *)(lVar28 + 0x1c8) & 1) == 0) {
          pcVar26 = (char *)(lVar28 + 0x1c9);
        }
        else {
          pcVar26 = *(char **)(lVar28 + 0x1d8);
        }
        pcVar20 = *(char **)(lVar12 + 0xf0);
        uVar22 = (ulong)((int)uVar24 + 1);
        local_308[uVar24 * 2] = pcVar26;
        local_308[uVar24 * 2 + 1] = pcVar20;
      }
      local_308[uVar22 * 2] = (char *)0x0;
      local_308[uVar22 * 2 + 1] = (char *)0x0;
      memcpy(&local_5a8,local_308,0x2a0);
      memcpy(asStack_848,local_308,0x2a0);
      lVar28 = FUN_008cca50();
      lVar14 = uVar22 - 1;
      pcVar26 = local_308[lVar14 * 2];
      sVar13 = strlen(pcVar26);
      sVar2 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar13 == sVar2) &&
         (iVar8 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
         iVar8 == 0)) {
        auStack_5b8[lVar14 * 2 + 2] = 0;
        *(undefined8 *)(auStack_5a7 + lVar14 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_848 + lVar14 * 0x10) = local_308[lVar14 * 2];
      *(undefined1 **)(asStack_848 + (lVar14 * 2 + 1) * 8) = &LAB_02034740;
      FUN_00151fe0(param_2,0,2);
      local_850[0] = FUN_0014feb0(param_2,0xffffffff);
      local_858 = param_2;
      if ((*PTR_DAT_04383038 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_04383038);
        puVar17 = PTR_DAT_04383040;
        if (iVar8 != 0) {
          FUN_01ef1180(PTR_DAT_04383040);
          FUN_00100250(PTR__string_04379718,puVar17,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04383038);
        }
      }
      uVar9 = local_850[0];
      uVar22 = *(ulong *)(PTR_DAT_04383040 + 8);
      puVar17 = *(undefined **)(PTR_DAT_04383040 + 0x10);
      if ((*PTR_DAT_04383040 & 1) == 0) {
        puVar17 = PTR_DAT_04383040 + 1;
        uVar22 = (ulong)((byte)*PTR_DAT_04383040 >> 1);
      }
      FUN_001514f0(param_2,puVar17,uVar22);
      FUN_00152550(param_2,uVar9,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_02034370,0);
      FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar16 = asStack_848;
          pbVar15 = (byte *)FUN_01ef1528();
        }
        else if (lVar28 == 0) {
          psVar16 = &local_5a8;
          pbVar15 = (byte *)FUN_01ef0000();
        }
        else {
          psVar16 = (string *)local_308;
          pbVar15 = (byte *)FUN_01ef0f24();
        }
        pbVar21 = *(byte **)(pbVar15 + 0x10);
        if ((*pbVar15 & 1) == 0) {
          pbVar21 = pbVar15 + 1;
        }
        FUN_00154450(param_2,pbVar21);
        local_860 = FUN_0014feb0(param_2,0xffffffff);
        local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
        local_868 = param_2;
        FUN_008fe304(local_870,param_2,&local_8a0,&local_858,local_860);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00155a20(param_2,psVar16,2);
        uVar9 = local_860;
        if (*(long *)(lVar12 + 0x120) == 0) {
          lVar14 = *(long *)(lVar12 + 0x128);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar9,"class_check");
          lVar14 = *(long *)(lVar12 + 0x128);
          uVar9 = local_860;
        }
        local_860 = uVar9;
        if (lVar14 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar9,"class_cast");
        }
        uVar9 = local_860;
        uVar29 = *(undefined8 *)(lVar12 + 0x100);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar29,3);
        FUN_00152550(param_2,uVar9,&DAT_03955ac7);
        uVar9 = local_860;
        uVar29 = *(undefined8 *)(lVar12 + 0x108);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar29,3);
        FUN_00152550(param_2,uVar9,&DAT_0397c077);
        if (*(char *)(lVar12 + 0x58) == '\0') {
          local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,1);
          FUN_008fe304(local_870,param_2,&local_8a0,&local_868,local_860);
        }
        else {
          local_870[0] = 1;
          local_8a0 = &LAB_02034790;
          uStack_898 = 0;
          local_890 = lVar12;
          lStack_888 = lVar23;
          FUN_02035018(param_2,local_870,&local_8a0,local_860);
          local_870[0] = 2;
          local_8a0 = &LAB_02034794;
          uStack_898 = 0;
          local_890 = lVar12;
          lStack_888 = lVar23;
          FUN_02035018(param_2,local_870,&local_8a0,local_860);
        }
        FUN_00151fe0(param_2,0,3);
        uVar9 = FUN_0014feb0(param_2,0xffffffff);
        local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
        FUN_008fe304(local_870,param_2,&local_8a0,&local_858,uVar9);
        if (*(undefined1 **)(lVar12 + 0xf8) == (undefined1 *)0x0) {
          cVar4 = *(char *)(lVar12 + 0x130);
        }
        else {
          local_870[0] = 4;
          uStack_898 = 0;
          local_8a0 = *(undefined1 **)(lVar12 + 0xf8);
          local_890 = lVar12;
          lStack_888 = lVar23;
          FUN_02035018(param_2,local_870,&local_8a0,uVar9);
          cVar4 = *(char *)(lVar12 + 0x130);
        }
        if (cVar4 != '\0') {
          local_870[0] = 1;
          local_8a0 = &LAB_02034790;
          uStack_898 = 0;
          local_890 = lVar12;
          lStack_888 = lVar23;
          FUN_02035018(param_2,local_870,&local_8a0,uVar9);
          local_870[0] = 2;
          local_8a0 = &LAB_02034794;
          uStack_898 = 0;
          local_890 = lVar12;
          lStack_888 = lVar23;
          FUN_02035018(param_2,local_870,&local_8a0,uVar9);
        }
        uVar11 = local_860;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar9);
        }
        FUN_00152ae0(param_2,uVar11);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_868,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_0202b894();
      if ((DAT_043d6c88 & 1) == 0) {
        puVar17 = &DAT_043d6c89;
      }
      else {
        puVar17 = DAT_043d6c98;
      }
      FUN_00154450(param_2,puVar17);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0._0_4_ = 0x1e;
      FUN_008fe304(&local_868,param_2,&local_8a0,&local_858,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,local_308,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
      FUN_008fe304(&local_868,param_2,&local_8a0,&local_858,uVar11);
      local_8a0 = *(undefined1 **)(lVar12 + 0xf8);
      if (local_8a0 != (undefined1 *)0x0) {
        local_868 = CONCAT44(local_868._4_4_,4);
        uStack_898 = 0;
        local_890 = lVar12;
        lStack_888 = lVar23;
        FUN_02035018(param_2,&local_868,&local_8a0,uVar11);
      }
      local_868._0_4_ = 1;
      local_8a0 = &LAB_02034798;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7d2d8;
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_020356cc(param_2,&local_868,&local_8a0,uVar11);
      local_868 = CONCAT44(local_868._4_4_,2);
      local_8a0 = &LAB_0203479c;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7d2d8;
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_020356cc(param_2,&local_868,&local_8a0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_850[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar8 = (int)uVar22;
  if (iVar8 == 0x13) {
    *(code **)(lVar12 + 0xf0) = pcVar1;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x138);
    goto joined_r0x02029c3c;
  }
  if (iVar8 == 1) {
    *(code **)(lVar12 + 0x30) = pcVar1;
  }
  else {
    if (iVar8 != 2) {
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar22 & 0x3f);
      goto LAB_0202a280;
    }
    *(code **)(lVar12 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar22 & 0x3f);
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x138);
  if ((uVar10 >> 0x11 & 1) == 0) goto LAB_02029c40;
  goto LAB_02029c48;
}


