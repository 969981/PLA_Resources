/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ec9f64; name: FUN_00ec9f64
 */


undefined8 FUN_00ec9f64(long param_1,long param_2)

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
  undefined1 *local_810;
  undefined8 uStack_808;
  long local_800;
  long lStack_7f8;
  undefined8 local_7f0;
  undefined *puStack_7e8;
  undefined4 local_7e0 [2];
  long local_7d8;
  undefined4 local_7d0;
  long local_7c8;
  undefined4 local_7c0 [2];
  string asStack_7b8 [608];
  undefined8 auStack_558 [2];
  string local_548;
  undefined1 auStack_547 [7];
  size_t local_540;
  undefined1 *local_538;
  char *apcStack_2e8 [2];
  char *local_2d8 [2];
  long local_2c8;
  
  if (((DAT_043b2420 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b2420), iVar8 != 0)) {
    local_2c8 = 0;
    local_2d8[1] = (undefined1 *)0x0;
    local_2d8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b22f0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b22f0), iVar8 != 0)) {
      FUN_00ece1f0();
      FUN_00100250(PTR__string_04379718,&DAT_043b22d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b22f0);
    }
    pcVar25 = (char *)FUN_00ecd5e4(local_2d8,&DAT_043b22d8);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043b2408,psVar15);
    lVar12 = local_2c8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2d8[0] & 1) != 0) && (local_2c8 != 0)) {
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
          goto LAB_00ecb540;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_00ecb540:
    FUN_00100250(PTR__string_04379718,&DAT_043b2408,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b2420);
  }
  std::string::string(&local_548,(string *)&DAT_043b2408);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b2400);
  sVar2 = (ulong)((byte)local_548 >> 1);
  if (((byte)local_548 & 1) != 0) {
    sVar2 = local_540;
  }
  std::string::append((ulong)&local_548,(char)iVar8);
  if (((byte)local_548 & 1) == 0) {
    puVar26 = auStack_547;
    local_540 = (size_t)((byte)local_548 >> 1);
  }
  else {
    puVar26 = local_538;
  }
  snprintf(puVar26 + (sVar2 - 1),local_540,"%d",(ulong)DAT_043b2400);
  DAT_043b2400 = DAT_043b2400 + 1;
  if (((DAT_043b2440 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b2440), iVar8 != 0)) {
    local_2c8 = 0;
    local_2d8[1] = (undefined1 *)0x0;
    local_2d8[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b22f0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b22f0), iVar8 != 0)) {
      FUN_00ece1f0();
      FUN_00100250(PTR__string_04379718,&DAT_043b22d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b22f0);
    }
    pcVar25 = (char *)FUN_00ecd5e4(local_2d8,&DAT_043b22d8);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043b2428,psVar15);
    lVar12 = local_2c8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2d8[0] & 1) != 0) && (local_2c8 != 0)) {
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
          goto LAB_00ecb68c;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_00ecb68c:
    FUN_00100250(PTR__string_04379718,&DAT_043b2428,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b2440);
  }
  puVar16 = DAT_043b2438;
  if ((DAT_043b2428 & 1) == 0) {
    puVar16 = &DAT_043b2429;
  }
  if (((byte)local_548 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_548 | 1);
  }
  else {
    puVar26 = local_538;
  }
  if (((DAT_043b2450 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b2450), iVar8 != 0)) {
    DAT_043b2448 = 0x110;
    __cxa_guard_release(&DAT_043b2450);
  }
  if (((DAT_043b2460 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b2460), iVar8 != 0)) {
    DAT_043b2458 = 0x117;
    __cxa_guard_release(&DAT_043b2460);
  }
  uVar21 = DAT_043b2448;
  lVar12 = FUN_00153520(param_2,DAT_043b2448);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x110)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043b2458;
    lVar12 = FUN_00153520(param_2,DAT_043b2458);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x110)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00ed05a0();
      puVar3 = DAT_043b2478;
      if ((DAT_043b2468 & 1) == 0) {
        puVar3 = &DAT_043b2469;
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
  *puVar19 = &PTR_FUN_041eea70;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xb0);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_00ed0560,0);
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
  if ((((byte)local_548 & 1) != 0) && (local_538 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar24,local_538,0,8);
        goto LAB_00eca2d8;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_538,0,8);
  }
LAB_00eca2d8:
  memset(local_2d8,0,0x270);
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
  puVar26 = &LAB_00ece6ac;
  if (uVar10 != 0) {
    puVar26 = &LAB_00ece60c;
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
            *(undefined1 **)(lVar12 + 0xc0) = puVar26;
            goto LAB_00eca4f4;
          }
          *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar26;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
      goto LAB_00eca4f4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_2d8[0] = pcVar25;
  local_2d8[1] = puVar26;
LAB_00eca4f4:
  pcVar25 = *(char **)(lVar12 + 0x70);
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
  pcVar1 = FUN_00ece9b0;
  if (uVar10 != 0) {
    pcVar1 = FUN_00ece75c;
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
            *(code **)(lVar12 + 0xc0) = pcVar1;
            goto LAB_00eca634;
          }
          *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
      goto LAB_00eca634;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d8[uVar23 * 2] = pcVar25;
  local_2d8[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00eca634:
  pcVar25 = *(char **)(lVar12 + 0x80);
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
  pcVar1 = FUN_00ecea78;
  if (uVar10 != 0) {
    pcVar1 = FUN_00ece9f8;
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
            *(code **)(lVar12 + 0xc0) = pcVar1;
            goto LAB_00eca774;
          }
          *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
      goto LAB_00eca774;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d8[uVar23 * 2] = pcVar25;
  local_2d8[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00eca774:
  pcVar25 = *(char **)(lVar12 + 0x90);
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
  pcVar18 = &LAB_00eceb68;
  if (uVar10 != 0) {
    pcVar18 = &LAB_00eceaf8;
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
            *(char **)(lVar12 + 0xc0) = pcVar18;
            goto LAB_00eca8b4;
          }
          *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
      goto LAB_00eca8b4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d8[uVar23 * 2] = pcVar25;
  local_2d8[uVar23 * 2 + 1] = pcVar18;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00eca8b4:
  pcVar25 = *(char **)(lVar12 + 0xa0);
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
  pcVar1 = FUN_00ecec50;
  if (uVar10 != 0) {
    pcVar1 = FUN_00ecebe8;
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
            *(code **)(lVar12 + 0xc0) = pcVar1;
            goto LAB_00eca9f4;
          }
          *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
      goto LAB_00eca9f4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d8[uVar23 * 2] = pcVar25;
  local_2d8[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00eca9f4:
  pcVar25 = *(char **)(lVar12 + 0xb0);
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
  pcVar18 = &LAB_00ed02bc;
  if (uVar10 != 0) {
    pcVar18 = &LAB_00ececb8;
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
            *(char **)(lVar12 + 0xc0) = pcVar18;
            goto LAB_00ecab04;
          }
          *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
      goto LAB_00ecab04;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d8[uVar23 * 2] = pcVar25;
  local_2d8[uVar23 * 2 + 1] = pcVar18;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00ecab04:
  pcVar25 = *(char **)(lVar12 + 0xb8);
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
  pcVar1 = FUN_00ed04b8;
  if (uVar10 != 0) {
    pcVar1 = FUN_00ed0470;
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
        *(code **)(lVar12 + 0xc0) = pcVar1;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
        goto joined_r0x00ecabe8;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
      goto joined_r0x00ecabe8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d8[uVar23 * 2] = pcVar25;
  local_2d8[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x00ecabe8:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    local_2d8[uVar23 * 2] = pcVar25;
    local_2d8[uVar23 * 2 + 1] = &LAB_00ecf320;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
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
    local_2d8[uVar23 * 2] = pcVar25;
    local_2d8[uVar23 * 2 + 1] = "[\x03";
  }
  uVar23 = uVar21;
  if (*(long *)(lVar12 + 0xc0) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar18 = *(char **)(lVar12 + 0xc0);
    uVar23 = (ulong)((int)uVar21 + 1);
    local_2d8[uVar21 * 2] = pcVar25;
    local_2d8[uVar21 * 2 + 1] = pcVar18;
  }
  local_2d8[uVar23 * 2] = (char *)0x0;
  local_2d8[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_548,local_2d8,0x270);
  memcpy(asStack_7b8,local_2d8,0x270);
  lVar27 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar25 = local_2d8[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar2 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar2) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_558[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_547 + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7b8 + lVar14 * 0x10) = local_2d8[lVar14 * 2];
  *(code **)(asStack_7b8 + (lVar14 * 2 + 1) * 8) = FUN_00ed0500;
  FUN_00151fe0(param_2,0,2);
  local_7c0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_7c8 = param_2;
  if (((DAT_043b22f0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b22f0), iVar8 != 0)) {
    FUN_00ece1f0();
    FUN_00100250(PTR__string_04379718,&DAT_043b22d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b22f0);
  }
  uVar9 = local_7c0[0];
  if ((DAT_043b22d8 & 1) == 0) {
    uVar21 = (ulong)(DAT_043b22d8 >> 1);
    puVar26 = &DAT_043b22d9;
  }
  else {
    uVar21 = DAT_043b22e0;
    puVar26 = DAT_043b22e8;
  }
  FUN_001514f0(param_2,puVar26,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00ecf230,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar15 = asStack_7b8;
      FUN_00ecc9a4();
      pbVar20 = &DAT_043b2240;
      puVar16 = &DAT_043b2241;
      puVar19 = &DAT_043b2250;
    }
    else if (lVar27 == 0) {
      psVar15 = &local_548;
      FUN_00ecc7c8();
      puVar16 = &DAT_043b21c9;
      puVar19 = &DAT_043b21d8;
      pbVar20 = &DAT_043b21c8;
    }
    else {
      psVar15 = (string *)local_2d8;
      FUN_00eccb80();
      puVar16 = &DAT_043b22b9;
      puVar19 = &DAT_043b22c8;
      pbVar20 = &DAT_043b22b8;
    }
    if ((*pbVar20 & 1) != 0) {
      puVar16 = (undefined *)*puVar19;
    }
    FUN_00154450(param_2,puVar16);
    local_7d0 = FUN_0014feb0(param_2,0xffffffff);
    local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
    local_7d8 = param_2;
    FUN_008fe304(local_7e0,param_2,&local_810,&local_7c8,local_7d0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar15,2);
    uVar9 = local_7d0;
    if (*(long *)(lVar12 + 0xf0) == 0) {
      lVar14 = *(long *)(lVar12 + 0xf8);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0xf8);
      uVar9 = local_7d0;
    }
    local_7d0 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_7d0;
    uVar17 = *(undefined8 *)(lVar12 + 0xd0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_7d0;
    uVar17 = *(undefined8 *)(lVar12 + 0xd8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_810 = (undefined1 *)CONCAT44(local_810._4_4_,1);
      FUN_008fe304(local_7e0,param_2,&local_810,&local_7d8,local_7d0);
    }
    else {
      local_7e0[0] = 1;
      local_810 = &LAB_00ed0550;
      uStack_808 = 0;
      local_800 = lVar12;
      lStack_7f8 = lVar22;
      FUN_00ed09dc(param_2,local_7e0,&local_810,local_7d0);
      local_7e0[0] = 2;
      local_810 = &LAB_00ed0554;
      uStack_808 = 0;
      local_800 = lVar12;
      lStack_7f8 = lVar22;
      FUN_00ed09dc(param_2,local_7e0,&local_810,local_7d0);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
    FUN_008fe304(local_7e0,param_2,&local_810,&local_7c8,uVar9);
    if (*(undefined1 **)(lVar12 + 200) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x100) == '\0') goto LAB_00ecafb0;
LAB_00ecb2d0:
      local_7e0[0] = 1;
      local_810 = &LAB_00ed0550;
      uStack_808 = 0;
      local_800 = lVar12;
      lStack_7f8 = lVar22;
      FUN_00ed09dc(param_2,local_7e0,&local_810,uVar9);
      local_7e0[0] = 2;
      local_810 = &LAB_00ed0554;
      uStack_808 = 0;
      local_800 = lVar12;
      lStack_7f8 = lVar22;
      FUN_00ed09dc(param_2,local_7e0,&local_810,uVar9);
      if (param_2 == 0) goto LAB_00ecb334;
LAB_00ecafb8:
      uVar11 = local_7d0;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_808 = 0;
      local_7e0[0] = 4;
      local_810 = *(undefined1 **)(lVar12 + 200);
      local_800 = lVar12;
      lStack_7f8 = lVar22;
      FUN_00ed09dc(param_2,local_7e0,&local_810,uVar9);
      if (*(char *)(lVar12 + 0x100) != '\0') goto LAB_00ecb2d0;
LAB_00ecafb0:
      if (param_2 != 0) goto LAB_00ecafb8;
LAB_00ecb334:
      uVar11 = local_7d0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_7d8,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_00eccda8();
      puVar16 = DAT_043b2340;
      if ((DAT_043b2330 & 1) == 0) {
        puVar16 = &DAT_043b2331;
      }
      FUN_00154450(param_2,puVar16);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_810._0_4_ = 0x1e;
      FUN_008fe304(&local_7d8,param_2,&local_810,&local_7c8,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,local_2d8,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
      FUN_008fe304(&local_7d8,param_2,&local_810,&local_7c8,uVar11);
      local_810 = *(undefined1 **)(lVar12 + 200);
      if (local_810 != (undefined1 *)0x0) {
        uStack_808 = 0;
        local_7d8 = CONCAT44(local_7d8._4_4_,4);
        local_800 = lVar12;
        lStack_7f8 = lVar22;
        FUN_00ed09dc(param_2,&local_7d8,&local_810,uVar11);
      }
      local_7d8._0_4_ = 1;
      local_810 = &LAB_00ed0558;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a78870;
      local_800 = lVar12;
      lStack_7f8 = lVar22;
      FUN_00ed1090(param_2,&local_7d8,&local_810,uVar11);
      local_7d8 = CONCAT44(local_7d8._4_4_,2);
      local_810 = &LAB_00ed055c;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a78870;
      local_800 = lVar12;
      lStack_7f8 = lVar22;
      FUN_00ed1090(param_2,&local_7d8,&local_810,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7c0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


