/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b4b364; name: FUN_00b4b364
 */


undefined8 FUN_00b4b364(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
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
  string *psVar15;
  undefined *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  undefined1 *puVar26;
  long lVar27;
  undefined1 *local_780;
  undefined8 uStack_778;
  long local_770;
  long lStack_768;
  undefined8 local_760;
  undefined *puStack_758;
  long local_750;
  undefined4 local_748;
  long local_740;
  undefined4 local_738 [2];
  string asStack_730 [560];
  undefined8 auStack_500 [2];
  string local_4f0;
  undefined1 auStack_4ef [7];
  size_t local_4e8;
  undefined1 *local_4e0;
  char *apcStack_2c0 [2];
  char *local_2b0 [2];
  long local_2a0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043aaf18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043aaf18), iVar8 != 0)) {
    local_2a0 = 0;
    local_2b0[1] = (undefined1 *)0x0;
    local_2b0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043aae10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043aae10), iVar8 != 0)) {
      FUN_00b4f1e0();
      FUN_00100250(PTR__string_04379718,&DAT_043aadf8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043aae10);
    }
    pcVar25 = (char *)FUN_00b4e594(local_2b0,&DAT_043aadf8);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043aaf00,psVar15);
    lVar12 = local_2a0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2b0[0] & 1) != 0) && (local_2a0 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar6;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar24,lVar12,0,8);
          goto LAB_00b4c52c;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_00b4c52c:
    FUN_00100250(PTR__string_04379718,&DAT_043aaf00,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043aaf18);
  }
  std::string::string(&local_4f0,(string *)&DAT_043aaf00);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043aaef8);
  sVar2 = (ulong)((byte)local_4f0 >> 1);
  if (((byte)local_4f0 & 1) != 0) {
    sVar2 = local_4e8;
  }
  std::string::append((ulong)&local_4f0,(char)iVar8);
  if (((byte)local_4f0 & 1) == 0) {
    puVar26 = auStack_4ef;
    local_4e8 = (size_t)((byte)local_4f0 >> 1);
  }
  else {
    puVar26 = local_4e0;
  }
  snprintf(puVar26 + (sVar2 - 1),local_4e8,"%d",(ulong)DAT_043aaef8);
  DAT_043aaef8 = DAT_043aaef8 + 1;
  if (((DAT_043aaf38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043aaf38), iVar8 != 0)) {
    local_2a0 = 0;
    local_2b0[1] = (undefined1 *)0x0;
    local_2b0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043aae10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043aae10), iVar8 != 0)) {
      FUN_00b4f1e0();
      FUN_00100250(PTR__string_04379718,&DAT_043aadf8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043aae10);
    }
    pcVar25 = (char *)FUN_00b4e594(local_2b0,&DAT_043aadf8);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043aaf20,psVar15);
    lVar12 = local_2a0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2b0[0] & 1) != 0) && (local_2a0 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar6;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar24,lVar12,0,8);
          goto LAB_00b4c680;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_00b4c680:
    FUN_00100250(PTR__string_04379718,&DAT_043aaf20,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043aaf38);
  }
  puVar16 = DAT_043aaf30;
  if ((DAT_043aaf20 & 1) == 0) {
    puVar16 = &DAT_043aaf21;
  }
  if (((byte)local_4f0 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_4f0 | 1);
  }
  else {
    puVar26 = local_4e0;
  }
  if (((DAT_043aaf48 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043aaf48), iVar8 != 0)) {
    DAT_043aaf40 = 0xe8;
    __cxa_guard_release(&DAT_043aaf48);
  }
  if (((DAT_043aaf58 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043aaf58), iVar8 != 0)) {
    DAT_043aaf50 = 0xef;
    __cxa_guard_release(&DAT_043aaf58);
  }
  uVar21 = DAT_043aaf40;
  lVar12 = FUN_00153520(param_2,DAT_043aaf40);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xe8)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043aaf50;
    lVar12 = FUN_00153520(param_2,DAT_043aaf50);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xe8)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00b50350();
      puVar3 = DAT_043aaf70;
      if ((DAT_043aaf60 & 1) == 0) {
        puVar3 = &DAT_043aaf61;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar17 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar17;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar12;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar22;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar19[2];
    uVar21 = *(ulong *)(lVar12 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar23 - 1 & uVar21;
    }
    else if (uVar23 <= uVar21) {
      uVar5 = 0;
      if (uVar23 != 0) {
        uVar5 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar5 * uVar23;
    }
    *(undefined8 **)(puVar19[1] + uVar21 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar17;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_041d5350;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0x88);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_00b50310,0);
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
  FUN_001522a0(param_2,puVar16);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar16);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_4f0 & 1) != 0) && (local_4e0 != (undefined1 *)0x0)) {
    lVar22 = tpidr_el0;
    plVar24 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar24 = plVar6;
    }
    uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar24,local_4e0,0,8);
        goto LAB_00b4b6d8;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_4e0,0,8);
  }
LAB_00b4b6d8:
  memset(local_2b0,0,0x240);
  pcVar25 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar22 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  puVar26 = &LAB_00b4f634;
  if (uVar10 != 0) {
    puVar26 = &LAB_00b4f5fc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(undefined1 **)(lVar12 + 0x30) = puVar26;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar23 = 0;
            *(undefined1 **)(lVar12 + 0x98) = puVar26;
            goto LAB_00b4b7f8;
          }
          *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar26;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
      goto LAB_00b4b7f8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_2b0[0] = pcVar25;
  local_2b0[1] = puVar26;
LAB_00b4b7f8:
  pcVar25 = *(char **)(lVar12 + 0x68);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00b4f854;
  if (uVar10 != 0) {
    pcVar1 = (code *)&LAB_00b4f66c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x98) = pcVar1;
        goto LAB_00b4b8d8;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
      goto LAB_00b4b8d8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2b0[uVar23 * 2] = pcVar25;
  local_2b0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00b4b8d8:
  pcVar25 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar18 = "\x01";
  if (uVar10 != 0) {
    pcVar18 = "\x01";
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(char **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(char **)(lVar12 + 0x98) = pcVar18;
            goto LAB_00b4bb68;
          }
          *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
      goto LAB_00b4bb68;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2b0[uVar23 * 2] = pcVar25;
  local_2b0[uVar23 * 2 + 1] = pcVar18;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00b4bb68:
  pcVar25 = *(char **)(lVar12 + 0x88);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00b500ac;
  if (uVar10 != 0) {
    pcVar1 = (code *)&LAB_00b4fa08;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x98) = pcVar1;
            uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
            goto joined_r0x00b4bc5c;
          }
          *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe0) = *(ulong *)(lVar12 + 0xe0) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
      goto joined_r0x00b4bc5c;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2b0[uVar23 * 2] = pcVar25;
  local_2b0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x00b4bc5c:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    local_2b0[uVar23 * 2] = pcVar25;
    local_2b0[uVar23 * 2 + 1] = &LAB_00b50790;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe0);
    uVar23 = (ulong)((int)uVar23 + 1);
  }
  uVar21 = uVar23;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    uVar21 = (ulong)((int)uVar23 + 1);
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    local_2b0[uVar23 * 2] = pcVar25;
    local_2b0[uVar23 * 2 + 1] = &LAB_00b50780;
  }
  uVar23 = uVar21;
  if (*(long *)(lVar12 + 0x98) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar18 = *(char **)(lVar12 + 0x98);
    uVar23 = (ulong)((int)uVar21 + 1);
    local_2b0[uVar21 * 2] = pcVar25;
    local_2b0[uVar21 * 2 + 1] = pcVar18;
  }
  local_2b0[uVar23 * 2] = (char *)0x0;
  local_2b0[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_4f0,local_2b0,0x240);
  memcpy(asStack_730,local_2b0,0x240);
  lVar27 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar25 = local_2b0[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar2 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar2) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_500[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4ef + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_730 + lVar14 * 0x10) = local_2b0[lVar14 * 2];
  *(undefined1 **)(asStack_730 + (lVar14 * 2 + 1) * 8) = &LAB_00b50100;
  FUN_00151fe0(param_2,0,2);
  local_738[0] = FUN_0014feb0(param_2,0xffffffff);
  local_740 = param_2;
  if (((DAT_043aae10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043aae10), iVar8 != 0)) {
    FUN_00b4f1e0();
    FUN_00100250(PTR__string_04379718,&DAT_043aadf8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043aae10);
  }
  uVar9 = local_738[0];
  if ((DAT_043aadf8 & 1) == 0) {
    uVar21 = (ulong)(DAT_043aadf8 >> 1);
    puVar26 = &DAT_043aadf9;
  }
  else {
    uVar21 = DAT_043aae00;
    puVar26 = DAT_043aae08;
  }
  FUN_001514f0(param_2,puVar26,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00b50150,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar15 = asStack_730;
      FUN_00b4d950();
      pbVar20 = &DAT_043aad60;
      puVar16 = &DAT_043aad61;
      puVar19 = &DAT_043aad70;
    }
    else if (lVar27 == 0) {
      psVar15 = &local_4f0;
      FUN_00b4d774();
      puVar16 = &DAT_043aace9;
      puVar19 = &DAT_043aacf8;
      pbVar20 = &DAT_043aace8;
    }
    else {
      psVar15 = (string *)local_2b0;
      FUN_00b4db2c();
      puVar16 = &DAT_043aadd9;
      puVar19 = &DAT_043aade8;
      pbVar20 = &DAT_043aadd8;
    }
    if ((*pbVar20 & 1) != 0) {
      puVar16 = (undefined *)*puVar19;
    }
    FUN_00154450(param_2,puVar16);
    local_748 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    local_750 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,local_748);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar15,2);
    uVar9 = local_748;
    if (*(long *)(lVar12 + 200) == 0) {
      lVar14 = *(long *)(lVar12 + 0xd0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0xd0);
      uVar9 = local_748;
    }
    local_748 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_748;
    uVar17 = *(undefined8 *)(lVar12 + 0xa8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_748;
    uVar17 = *(undefined8 *)(lVar12 + 0xb0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_780,&local_750,local_748);
    }
    else {
      local_780 = &LAB_00b50240;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00b501a0(param_2,1,&local_780,local_748);
      local_780 = &LAB_00b50244;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00b501a0(param_2,2,&local_780,local_748);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_780,&local_740,uVar9);
    if (*(undefined1 **)(lVar12 + 0xa0) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0xd8) == '\0') goto LAB_00b4c088;
LAB_00b4c334:
      local_780 = &LAB_00b50240;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00b501a0(param_2,1,&local_780,uVar9);
      local_780 = &LAB_00b50244;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00b501a0(param_2,2,&local_780,uVar9);
      if (param_2 == 0) goto LAB_00b4c384;
LAB_00b4c090:
      uVar11 = local_748;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_778 = 0;
      local_780 = *(undefined1 **)(lVar12 + 0xa0);
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00b501a0(param_2,4,&local_780,uVar9);
      if (*(char *)(lVar12 + 0xd8) != '\0') goto LAB_00b4c334;
LAB_00b4c088:
      if (param_2 != 0) goto LAB_00b4c090;
LAB_00b4c384:
      uVar11 = local_748;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_750,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_00b4dd54();
      puVar16 = DAT_043aae60;
      if ((DAT_043aae50 & 1) == 0) {
        puVar16 = &DAT_043aae51;
      }
      FUN_00154450(param_2,puVar16);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,local_2b0,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_750,param_2,&local_780,&local_740,uVar11);
      local_780 = *(undefined1 **)(lVar12 + 0xa0);
      if (local_780 != (undefined1 *)0x0) {
        uStack_778 = 0;
        local_770 = lVar12;
        lStack_768 = lVar22;
        FUN_00b501a0(param_2,4,&local_780,uVar11);
      }
      local_780 = &LAB_00b50308;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a77a80;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00b50250(param_2,1,&local_780,uVar11);
      local_780 = &LAB_00b5030c;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a77a80;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00b50250(param_2,2,&local_780,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_738[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


