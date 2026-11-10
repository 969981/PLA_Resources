/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0201cdf8; name: FUN_0201cdf8
 */


undefined8 FUN_0201cdf8(long param_1,long param_2)

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
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  char *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined8 uVar30;
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
  
  if (((DAT_043d6be8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d6be8), iVar8 != 0)) {
    local_2c8 = 0;
    local_2d8[1] = (undefined1 *)0x0;
    local_2d8[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04382f50 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04382f50);
      puVar17 = PTR_DAT_04382f58;
      if (iVar8 != 0) {
        FUN_01edc9b0(PTR_DAT_04382f58);
        FUN_00100250(PTR__string_04379718,puVar17,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04382f50);
      }
    }
    pcVar27 = (char *)FUN_0201f7a4(local_2d8,PTR_DAT_04382f58);
    psVar16 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043d6bd0,psVar16);
    lVar12 = local_2c8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2d8[0] & 1) != 0) && (local_2c8 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar6;
      }
      uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar12,0,8);
          goto LAB_0201dd3c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_0201dd3c:
    FUN_00100250(PTR__string_04379718,&DAT_043d6bd0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d6be8);
  }
  std::string::string(&local_548,(string *)&DAT_043d6bd0);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d6bc8);
  sVar2 = (ulong)((byte)local_548 >> 1);
  if (((byte)local_548 & 1) != 0) {
    sVar2 = local_540;
  }
  std::string::append((ulong)&local_548,(char)iVar8);
  if (((byte)local_548 & 1) == 0) {
    puVar28 = auStack_547;
    local_540 = (size_t)((byte)local_548 >> 1);
  }
  else {
    puVar28 = local_538;
  }
  snprintf(puVar28 + (sVar2 - 1),local_540,"%d",(ulong)DAT_043d6bc8);
  DAT_043d6bc8 = DAT_043d6bc8 + 1;
  if (((DAT_043d6c08 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d6c08), iVar8 != 0)) {
    local_2c8 = 0;
    local_2d8[1] = (undefined1 *)0x0;
    local_2d8[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04382f50 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04382f50);
      puVar17 = PTR_DAT_04382f58;
      if (iVar8 != 0) {
        FUN_01edc9b0(PTR_DAT_04382f58);
        FUN_00100250(PTR__string_04379718,puVar17,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04382f50);
      }
    }
    pcVar27 = (char *)FUN_0201f7a4(local_2d8,PTR_DAT_04382f58);
    psVar16 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043d6bf0,psVar16);
    lVar12 = local_2c8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2d8[0] & 1) != 0) && (local_2c8 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar6;
      }
      uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar12,0,8);
          goto LAB_0201de90;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_0201de90:
    FUN_00100250(PTR__string_04379718,&DAT_043d6bf0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d6c08);
  }
  if ((DAT_043d6bf0 & 1) == 0) {
    uVar30 = 0x43d6bf1;
    if (((byte)local_548 & 1) == 0) goto LAB_0201db78;
LAB_0201cee8:
    puVar28 = local_538;
  }
  else {
    uVar30 = DAT_043d6c00;
    if (((byte)local_548 & 1) != 0) goto LAB_0201cee8;
LAB_0201db78:
    puVar28 = (undefined1 *)((ulong)&local_548 | 1);
  }
  if (((DAT_043d6c18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d6c18), iVar8 != 0)) {
    DAT_043d6c10 = 0x110;
    __cxa_guard_release(&DAT_043d6c18);
  }
  if (((DAT_043d6c28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d6c28), iVar8 != 0)) {
    DAT_043d6c20 = 0x117;
    __cxa_guard_release(&DAT_043d6c28);
  }
  uVar23 = DAT_043d6c10;
  lVar12 = FUN_00153520(param_2,DAT_043d6c10);
  if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x110)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043d6c20;
    lVar12 = FUN_00153520(param_2,DAT_043d6c20);
    if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x110)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02023990();
      if ((DAT_043d6c30 & 1) == 0) {
        puVar18 = &DAT_043d6c31;
      }
      else {
        puVar18 = DAT_043d6c40;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar18);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar12;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar12 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar5 = 0;
      if (uVar25 != 0) {
        uVar5 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar5 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar3;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_0425b268;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xb0);
  iVar8 = FUN_00154450(param_2,puVar28);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_02023950,0);
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
  FUN_001522a0(param_2,uVar30);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,uVar30);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_548 & 1) != 0) && (local_538 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar6;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar24 + 0x38d480)) {
        FUN_02bcc824(plVar26,local_538,0,8);
        goto LAB_0201d160;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_538,0,8);
  }
LAB_0201d160:
  memset(local_2d8,0,0x270);
  pcVar27 = *(char **)(lVar12 + 0xb0);
  sVar13 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar24 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  puVar28 = &LAB_02023378;
  if (uVar10 != 0) {
    puVar28 = &LAB_02022c68;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(undefined1 **)(lVar12 + 0x30) = puVar28;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar25 = 0;
            *(undefined1 **)(lVar12 + 0xc0) = puVar28;
            goto LAB_0201d280;
          }
          *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar23 & 0x3f);
      goto LAB_0201d280;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_2d8[0] = pcVar27;
  local_2d8[1] = puVar28;
LAB_0201d280:
  pcVar27 = *(char **)(lVar12 + 0xb8);
  sVar13 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_02023590;
  if (uVar10 != 0) {
    pcVar1 = FUN_02023548;
  }
  while( true ) {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar29);
    sVar13 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) break;
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
    if (uVar23 == 0x20) {
LAB_0201d9a4:
      local_2d8[uVar25 * 2] = pcVar27;
      local_2d8[uVar25 * 2 + 1] = (char *)pcVar1;
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
      uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x0201d364:
      if ((uVar10 >> 0x11 & 1) == 0) {
LAB_0201d368:
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
      }
LAB_0201d370:
      if ((uVar10 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
      }
      uVar23 = uVar25;
      if ((uVar10 >> 0x10 & 1) == 0) {
        lVar29 = FUN_008cca50();
        if ((*(byte *)(lVar29 + 0x180) & 1) == 0) {
          pcVar27 = (char *)(lVar29 + 0x181);
        }
        else {
          pcVar27 = *(char **)(lVar29 + 400);
        }
        uVar23 = (ulong)((int)uVar25 + 1);
        local_2d8[uVar25 * 2] = pcVar27;
        local_2d8[uVar25 * 2 + 1] = PTR_LAB_04382f28;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
      }
      uVar25 = uVar23;
      if ((uVar10 >> 0x1b & 1) == 0) {
        lVar29 = FUN_008cca50();
        if ((*(byte *)(lVar29 + 0x288) & 1) == 0) {
          pcVar27 = (char *)(lVar29 + 0x289);
        }
        else {
          pcVar27 = *(char **)(lVar29 + 0x298);
        }
        uVar25 = (ulong)((int)uVar23 + 1);
        local_2d8[uVar23 * 2] = pcVar27;
        local_2d8[uVar23 * 2 + 1] = PTR_LAB_04382f30;
      }
      uVar23 = uVar25;
      if (*(long *)(lVar12 + 0xc0) != 0) {
        lVar29 = FUN_008cca50();
        if ((*(byte *)(lVar29 + 0x1c8) & 1) == 0) {
          pcVar27 = (char *)(lVar29 + 0x1c9);
        }
        else {
          pcVar27 = *(char **)(lVar29 + 0x1d8);
        }
        pcVar21 = *(char **)(lVar12 + 0xc0);
        uVar23 = (ulong)((int)uVar25 + 1);
        local_2d8[uVar25 * 2] = pcVar27;
        local_2d8[uVar25 * 2 + 1] = pcVar21;
      }
      local_2d8[uVar23 * 2] = (char *)0x0;
      local_2d8[uVar23 * 2 + 1] = (char *)0x0;
      memcpy(&local_548,local_2d8,0x270);
      memcpy(asStack_7b8,local_2d8,0x270);
      lVar29 = FUN_008cca50();
      lVar14 = uVar23 - 1;
      pcVar27 = local_2d8[lVar14 * 2];
      sVar13 = strlen(pcVar27);
      sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar13 == sVar2) &&
         (iVar8 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
         iVar8 == 0)) {
        auStack_558[lVar14 * 2 + 2] = 0;
        *(undefined8 *)(auStack_547 + lVar14 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_7b8 + lVar14 * 0x10) = local_2d8[lVar14 * 2];
      *(undefined1 **)(asStack_7b8 + (lVar14 * 2 + 1) * 8) = &LAB_020235e0;
      FUN_00151fe0(param_2,0,2);
      local_7c0[0] = FUN_0014feb0(param_2,0xffffffff);
      local_7c8 = param_2;
      if ((*PTR_DAT_04382f50 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_04382f50);
        puVar17 = PTR_DAT_04382f58;
        if (iVar8 != 0) {
          FUN_01edc9b0(PTR_DAT_04382f58);
          FUN_00100250(PTR__string_04379718,puVar17,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04382f50);
        }
      }
      uVar9 = local_7c0[0];
      uVar23 = *(ulong *)(PTR_DAT_04382f58 + 8);
      puVar17 = *(undefined **)(PTR_DAT_04382f58 + 0x10);
      if ((*PTR_DAT_04382f58 & 1) == 0) {
        puVar17 = PTR_DAT_04382f58 + 1;
        uVar23 = (ulong)((byte)*PTR_DAT_04382f58 >> 1);
      }
      FUN_001514f0(param_2,puVar17,uVar23);
      FUN_00152550(param_2,uVar9,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_02023220,0);
      FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar16 = asStack_7b8;
          pbVar15 = (byte *)FUN_01edcd4c();
        }
        else if (lVar29 == 0) {
          psVar16 = &local_548;
          pbVar15 = (byte *)FUN_01edb43c();
        }
        else {
          psVar16 = (string *)local_2d8;
          pbVar15 = (byte *)FUN_01edc754();
        }
        pbVar22 = *(byte **)(pbVar15 + 0x10);
        if ((*pbVar15 & 1) == 0) {
          pbVar22 = pbVar15 + 1;
        }
        FUN_00154450(param_2,pbVar22);
        local_7d0 = FUN_0014feb0(param_2,0xffffffff);
        local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
        local_7d8 = param_2;
        FUN_008fe304(local_7e0,param_2,&local_810,&local_7c8,local_7d0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00155a20(param_2,psVar16,2);
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
        uVar30 = *(undefined8 *)(lVar12 + 0xd0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar30,3);
        FUN_00152550(param_2,uVar9,&DAT_03955ac7);
        uVar9 = local_7d0;
        uVar30 = *(undefined8 *)(lVar12 + 0xd8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar30,3);
        FUN_00152550(param_2,uVar9,&DAT_0397c077);
        if (*(char *)(lVar12 + 0x58) == '\0') {
          local_810 = (undefined1 *)CONCAT44(local_810._4_4_,1);
          FUN_008fe304(local_7e0,param_2,&local_810,&local_7d8,local_7d0);
        }
        else {
          local_7e0[0] = 1;
          local_810 = &LAB_02023630;
          uStack_808 = 0;
          local_800 = lVar12;
          lStack_7f8 = lVar24;
          FUN_02023dcc(param_2,local_7e0,&local_810,local_7d0);
          local_7e0[0] = 2;
          local_810 = &LAB_0202393c;
          uStack_808 = 0;
          local_800 = lVar12;
          lStack_7f8 = lVar24;
          FUN_02023dcc(param_2,local_7e0,&local_810,local_7d0);
        }
        FUN_00151fe0(param_2,0,3);
        uVar9 = FUN_0014feb0(param_2,0xffffffff);
        local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
        FUN_008fe304(local_7e0,param_2,&local_810,&local_7c8,uVar9);
        if (*(undefined1 **)(lVar12 + 200) == (undefined1 *)0x0) {
          cVar4 = *(char *)(lVar12 + 0x100);
        }
        else {
          local_7e0[0] = 4;
          uStack_808 = 0;
          local_810 = *(undefined1 **)(lVar12 + 200);
          local_800 = lVar12;
          lStack_7f8 = lVar24;
          FUN_02023dcc(param_2,local_7e0,&local_810,uVar9);
          cVar4 = *(char *)(lVar12 + 0x100);
        }
        if (cVar4 != '\0') {
          local_7e0[0] = 1;
          local_810 = &LAB_02023630;
          uStack_808 = 0;
          local_800 = lVar12;
          lStack_7f8 = lVar24;
          FUN_02023dcc(param_2,local_7e0,&local_810,uVar9);
          local_7e0[0] = 2;
          local_810 = &LAB_0202393c;
          uStack_808 = 0;
          local_800 = lVar12;
          lStack_7f8 = lVar24;
          FUN_02023dcc(param_2,local_7e0,&local_810,uVar9);
        }
        uVar11 = local_7d0;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar9);
        }
        FUN_00152ae0(param_2,uVar11);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_7d8,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_0201ef74();
      if ((DAT_043d6970 & 1) == 0) {
        puVar17 = &DAT_043d6971;
      }
      else {
        puVar17 = DAT_043d6980;
      }
      FUN_00154450(param_2,puVar17);
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
        local_7d8 = CONCAT44(local_7d8._4_4_,4);
        uStack_808 = 0;
        local_800 = lVar12;
        lStack_7f8 = lVar24;
        FUN_02023dcc(param_2,&local_7d8,&local_810,uVar11);
      }
      local_7d8._0_4_ = 1;
      local_810 = &LAB_02023940;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a7d2d0;
      local_800 = lVar12;
      lStack_7f8 = lVar24;
      FUN_02024174(param_2,&local_7d8,&local_810,uVar11);
      local_7d8 = CONCAT44(local_7d8._4_4_,2);
      local_810 = &LAB_02023944;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a7d2d0;
      local_800 = lVar12;
      lStack_7f8 = lVar24;
      FUN_02024174(param_2,&local_7d8,&local_810,uVar11);
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
  }
  iVar8 = (int)uVar23;
  if (iVar8 == 0x13) {
    *(code **)(lVar12 + 0xc0) = pcVar1;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
    goto joined_r0x0201d364;
  }
  if (iVar8 == 1) {
    *(code **)(lVar12 + 0x30) = pcVar1;
  }
  else {
    if (iVar8 != 2) {
      *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar23 & 0x3f);
      goto LAB_0201d9a4;
    }
    *(code **)(lVar12 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *(ulong *)(lVar12 + 0x108) = *(ulong *)(lVar12 + 0x108) | 1L << (uVar23 & 0x3f);
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x108);
  if ((uVar10 >> 0x11 & 1) == 0) goto LAB_0201d368;
  goto LAB_0201d370;
}


