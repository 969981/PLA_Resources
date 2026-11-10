/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f4aa64; name: FUN_00f4aa64
 */


undefined8 FUN_00f4aa64(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
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
  byte *pbVar15;
  string *psVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  code *pcVar19;
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
  char *local_2a8;
  code *local_2a0;
  long local_298;
  
  if (((DAT_043b53d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b53d8), iVar8 != 0)) {
    local_298 = 0;
    local_2a0 = (code *)0x0;
    local_2a8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437d5c8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437d5c8);
      puVar2 = PTR_DAT_0437d5d0;
      if (iVar8 != 0) {
        FUN_00f4e8f0(PTR_DAT_0437d5d0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d5c8);
      }
    }
    pcVar25 = (char *)FUN_00f4dcc4(&local_2a8,PTR_DAT_0437d5d0);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043b53c0,psVar16);
    lVar12 = local_298;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2a8 & 1) != 0) && (local_298 != 0)) {
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
          goto LAB_00f4bc30;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_00f4bc30:
    FUN_00100250(PTR__string_04379718,&DAT_043b53c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b53d8);
  }
  std::string::string(&local_4e8,(string *)&DAT_043b53c0);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b53b8);
  sVar1 = (ulong)((byte)local_4e8 >> 1);
  if (((byte)local_4e8 & 1) != 0) {
    sVar1 = local_4e0;
  }
  std::string::append((ulong)&local_4e8,(char)iVar8);
  if (((byte)local_4e8 & 1) == 0) {
    puVar26 = auStack_4e7;
    local_4e0 = (size_t)((byte)local_4e8 >> 1);
  }
  else {
    puVar26 = local_4d8;
  }
  snprintf(puVar26 + (sVar1 - 1),local_4e0,"%d",(ulong)DAT_043b53b8);
  DAT_043b53b8 = DAT_043b53b8 + 1;
  if (((DAT_043b53f8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b53f8), iVar8 != 0)) {
    local_298 = 0;
    local_2a0 = (code *)0x0;
    local_2a8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437d5c8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437d5c8);
      puVar2 = PTR_DAT_0437d5d0;
      if (iVar8 != 0) {
        FUN_00f4e8f0(PTR_DAT_0437d5d0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d5c8);
      }
    }
    pcVar25 = (char *)FUN_00f4dcc4(&local_2a8,PTR_DAT_0437d5d0);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043b53e0,psVar16);
    lVar12 = local_298;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2a8 & 1) != 0) && (local_298 != 0)) {
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
          goto LAB_00f4bd84;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_00f4bd84:
    FUN_00100250(PTR__string_04379718,&DAT_043b53e0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b53f8);
  }
  puVar2 = DAT_043b53f0;
  if ((DAT_043b53e0 & 1) == 0) {
    puVar2 = &DAT_043b53e1;
  }
  if (((byte)local_4e8 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_4e8 | 1);
  }
  else {
    puVar26 = local_4d8;
  }
  if (((DAT_043b5408 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b5408), iVar8 != 0)) {
    DAT_043b5400 = 0xf0;
    __cxa_guard_release(&DAT_043b5408);
  }
  if (((DAT_043b5418 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b5418), iVar8 != 0)) {
    DAT_043b5410 = 0xf7;
    __cxa_guard_release(&DAT_043b5418);
  }
  uVar21 = DAT_043b5400;
  lVar12 = FUN_00153520(param_2,DAT_043b5400);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xf0)) ||
     (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043b5410;
    lVar12 = FUN_00153520(param_2,DAT_043b5410);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xf0)) ||
       (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00f50830();
      puVar3 = DAT_043b5430;
      if ((DAT_043b5420 & 1) == 0) {
        puVar3 = &DAT_043b5421;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar17 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar17[1] = uVar18;
  puVar17[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar17[3] = lVar12;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar17[4] = lVar22;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar17[2];
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
    *(undefined8 **)(puVar17[1] + uVar21 * 8) = puVar17 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar18;
  puVar17[7] = uVar4;
  puVar17[8] = *(undefined8 *)(param_1 + 0x40);
  puVar17[9] = *(undefined8 *)(param_1 + 0x48);
  puVar17[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar17 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar17 = &PTR_FUN_041eebb0;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x90);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_00f507f0,0);
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
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_4e8 & 1) != 0) && (local_4d8 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar24,local_4d8,0,8);
        goto LAB_00f4adc4;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_4d8,0,8);
  }
LAB_00f4adc4:
  memset(&local_2a8,0,0x240);
  pcVar25 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_00f4ef4c;
  if (uVar10 != 0) {
    pcVar19 = FUN_00f4ecd4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar23 = 0;
            *(code **)(lVar12 + 0xa0) = pcVar19;
            goto LAB_00f4afe8;
          }
          *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
      goto LAB_00f4afe8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_2a8 = pcVar25;
  local_2a0 = pcVar19;
LAB_00f4afe8:
  pcVar25 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_00f4f024;
  if (uVar10 != 0) {
    pcVar19 = FUN_00f4efdc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xa0) = pcVar19;
            goto LAB_00f4b128;
          }
          *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
      goto LAB_00f4b128;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2a8)[uVar23 * 2] = pcVar25;
  (&local_2a0)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f4b128:
  pcVar25 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = (code *)&LAB_00f50554;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_00f4f06c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xa0) = pcVar19;
            goto LAB_00f4b238;
          }
          *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
      goto LAB_00f4b238;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2a8)[uVar23 * 2] = pcVar25;
  (&local_2a0)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f4b238:
  pcVar25 = *(char **)(lVar12 + 0x98);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_00f50740;
  if (uVar10 != 0) {
    pcVar19 = FUN_00f506f8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0xa0) = pcVar19;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
        goto joined_r0x00f4b31c;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xe8) = *(ulong *)(lVar12 + 0xe8) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
      goto joined_r0x00f4b31c;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2a8)[uVar23 * 2] = pcVar25;
  (&local_2a0)[uVar23 * 2] = pcVar19;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x00f4b31c:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
  }
  uVar21 = uVar23;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_2a8)[uVar23 * 2] = pcVar25;
    (&local_2a0)[uVar23 * 2] = (code *)PTR_LAB_0437d5b8;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xe8);
  }
  uVar23 = uVar21;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    uVar23 = (ulong)((int)uVar21 + 1);
    (&local_2a8)[uVar21 * 2] = pcVar25;
    (&local_2a0)[uVar21 * 2] = (code *)PTR_LAB_0437d5c0;
  }
  uVar21 = uVar23;
  if (*(long *)(lVar12 + 0xa0) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar12 + 0xa0);
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_2a8)[uVar23 * 2] = pcVar25;
    (&local_2a0)[uVar23 * 2] = pcVar19;
  }
  (&local_2a8)[uVar21 * 2] = (char *)0x0;
  (&local_2a0)[uVar21 * 2] = (code *)0x0;
  memcpy(&local_4e8,&local_2a8,0x240);
  memcpy(asStack_728,&local_2a8,0x240);
  lVar27 = FUN_008cca50();
  lVar14 = uVar21 - 1;
  pcVar25 = (&local_2a8)[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar1 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_4f8[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4e7 + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_728 + lVar14 * 0x10) = (&local_2a8)[lVar14 * 2];
  *(undefined1 **)(asStack_728 + (lVar14 * 2 + 1) * 8) = &LAB_00f50790;
  FUN_00151fe0(param_2,0,2);
  local_730[0] = FUN_0014feb0(param_2,0xffffffff);
  local_738 = param_2;
  if ((*PTR_DAT_0437d5c8 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_0437d5c8);
    puVar2 = PTR_DAT_0437d5d0;
    if (iVar8 != 0) {
      FUN_00f4e8f0(PTR_DAT_0437d5d0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d5c8);
    }
  }
  uVar9 = local_730[0];
  uVar21 = *(ulong *)(PTR_DAT_0437d5d0 + 8);
  puVar2 = *(undefined **)(PTR_DAT_0437d5d0 + 0x10);
  if ((*PTR_DAT_0437d5d0 & 1) == 0) {
    puVar2 = PTR_DAT_0437d5d0 + 1;
    uVar21 = (ulong)((byte)*PTR_DAT_0437d5d0 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00f4f630,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar16 = asStack_728;
      pbVar15 = (byte *)FUN_00f4d070();
    }
    else if (lVar27 == 0) {
      psVar16 = &local_4e8;
      pbVar15 = (byte *)FUN_00f4ce90();
    }
    else {
      psVar16 = (string *)&local_2a8;
      pbVar15 = (byte *)FUN_00f4d250();
    }
    pbVar20 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar20 = pbVar15 + 1;
    }
    FUN_00154450(param_2,pbVar20);
    local_740 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    local_748 = param_2;
    FUN_008fe304(local_750,param_2,&local_780,&local_738,local_740);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar16,2);
    uVar9 = local_740;
    if (*(long *)(lVar12 + 0xd0) == 0) {
      lVar14 = *(long *)(lVar12 + 0xd8);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0xd8);
      uVar9 = local_740;
    }
    local_740 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_740;
    uVar18 = *(undefined8 *)(lVar12 + 0xb0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_740;
    uVar18 = *(undefined8 *)(lVar12 + 0xb8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
      FUN_008fe304(local_750,param_2,&local_780,&local_748,local_740);
    }
    else {
      local_750[0] = 1;
      local_780 = &LAB_00f507e0;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00f50c6c(param_2,local_750,&local_780,local_740);
      local_750[0] = 2;
      local_780 = &LAB_00f507e4;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00f50c6c(param_2,local_750,&local_780,local_740);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    FUN_008fe304(local_750,param_2,&local_780,&local_738,uVar9);
    if (*(undefined1 **)(lVar12 + 0xa8) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0xe0) != '\0') goto LAB_00f4b9c4;
LAB_00f4b6b4:
      if (param_2 == 0) goto LAB_00f4ba20;
LAB_00f4b6bc:
      uVar11 = local_740;
      FUN_00150260(param_2,uVar9);
    }
    else {
      local_750[0] = 4;
      uStack_778 = 0;
      local_780 = *(undefined1 **)(lVar12 + 0xa8);
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00f50c6c(param_2,local_750,&local_780,uVar9);
      if (*(char *)(lVar12 + 0xe0) == '\0') goto LAB_00f4b6b4;
LAB_00f4b9c4:
      local_750[0] = 1;
      local_780 = &LAB_00f507e0;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00f50c6c(param_2,local_750,&local_780,uVar9);
      local_750[0] = 2;
      local_780 = &LAB_00f507e4;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00f50c6c(param_2,local_750,&local_780,uVar9);
      if (param_2 != 0) goto LAB_00f4b6bc;
LAB_00f4ba20:
      uVar11 = local_740;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_748,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_00f4d488();
      puVar2 = DAT_043b52f8;
      if ((DAT_043b52e8 & 1) == 0) {
        puVar2 = &DAT_043b52e9;
      }
      FUN_00154450(param_2,puVar2);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2a8,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar11);
      local_780 = *(undefined1 **)(lVar12 + 0xa8);
      if (local_780 != (undefined1 *)0x0) {
        local_748 = CONCAT44(local_748._4_4_,4);
        uStack_778 = 0;
        local_770 = lVar12;
        lStack_768 = lVar22;
        FUN_00f50c6c(param_2,&local_748,&local_780,uVar11);
      }
      local_748._0_4_ = 1;
      local_780 = &LAB_00f507e8;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a788b0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00f51320(param_2,&local_748,&local_780,uVar11);
      local_748 = CONCAT44(local_748._4_4_,2);
      local_780 = &LAB_00f507ec;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a788b0;
      local_770 = lVar12;
      lStack_768 = lVar22;
      FUN_00f51320(param_2,&local_748,&local_780,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_730[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


