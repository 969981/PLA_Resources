/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02274ab8; name: FUN_02274ab8
 */


undefined8 FUN_02274ab8(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
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
  byte *pbVar17;
  string *psVar18;
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
  
  if (((DAT_043dfe70 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dfe70), iVar10 != 0)) {
    local_2c8 = 0;
    local_2d8[1] = (undefined1 *)0x0;
    local_2d8[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386190 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04386190);
      puVar3 = PTR_DAT_04386198;
      if (iVar10 != 0) {
        FUN_02265d40(PTR_DAT_04386198);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386190);
      }
    }
    pcVar27 = (char *)FUN_0227746c(local_2d8,PTR_DAT_04386198);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043dfe58,psVar18);
    lVar14 = local_2c8;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2d8[0] & 1) != 0) && (local_2c8 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
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
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_022759f4;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_022759f4:
    FUN_00100250(PTR__string_04379718,&DAT_043dfe58,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dfe70);
  }
  std::string::string(&local_548,(string *)&DAT_043dfe58);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043dfe50);
  sVar2 = (ulong)((byte)local_548 >> 1);
  if (((byte)local_548 & 1) != 0) {
    sVar2 = local_540;
  }
  std::string::append((ulong)&local_548,(char)iVar10);
  if (((byte)local_548 & 1) == 0) {
    puVar28 = auStack_547;
    local_540 = (size_t)((byte)local_548 >> 1);
  }
  else {
    puVar28 = local_538;
  }
  snprintf(puVar28 + (sVar2 - 1),local_540,"%d",(ulong)DAT_043dfe50);
  DAT_043dfe50 = DAT_043dfe50 + 1;
  if (((DAT_043dfe90 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dfe90), iVar10 != 0)) {
    local_2c8 = 0;
    local_2d8[1] = (undefined1 *)0x0;
    local_2d8[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386190 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04386190);
      puVar3 = PTR_DAT_04386198;
      if (iVar10 != 0) {
        FUN_02265d40(PTR_DAT_04386198);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386190);
      }
    }
    pcVar27 = (char *)FUN_0227746c(local_2d8,PTR_DAT_04386198);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043dfe78,psVar18);
    lVar14 = local_2c8;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2d8[0] & 1) != 0) && (local_2c8 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
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
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_02275b48;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_02275b48:
    FUN_00100250(PTR__string_04379718,&DAT_043dfe78,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dfe90);
  }
  puVar3 = DAT_043dfe88;
  if ((DAT_043dfe78 & 1) == 0) {
    puVar3 = &DAT_043dfe79;
  }
  if (((byte)local_548 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_548 | 1);
  }
  else {
    puVar28 = local_538;
  }
  if (((DAT_043dfea0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dfea0), iVar10 != 0)) {
    DAT_043dfe98 = 0x110;
    __cxa_guard_release(&DAT_043dfea0);
  }
  if (((DAT_043dfeb0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dfeb0), iVar10 != 0)) {
    DAT_043dfea8 = 0x117;
    __cxa_guard_release(&DAT_043dfeb0);
  }
  uVar23 = DAT_043dfe98;
  lVar14 = FUN_00153520(param_2,DAT_043dfe98);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x110)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043dfea8;
    lVar14 = FUN_00153520(param_2,DAT_043dfea8);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x110)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02277e10();
      puVar4 = DAT_043dfec8;
      if ((DAT_043dfeb8 & 1) == 0) {
        puVar4 = &DAT_043dfeb9;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar14;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar14 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar7 = 0;
      if (uVar25 != 0) {
        uVar7 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar7 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar5;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_0425b8f8;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xb0);
  iVar10 = FUN_00154450(param_2,puVar28);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_02277dd0,0);
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
  if ((((byte)local_548 & 1) != 0) && (local_538 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar8;
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
        goto LAB_02274e24;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_538,0,8);
  }
LAB_02274e24:
  memset(local_2d8,0,0x270);
  pcVar27 = *(char **)(lVar14 + 0xb0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar24 = lVar14 + 8;
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  puVar28 = &LAB_02277b48;
  if (uVar12 != 0) {
    puVar28 = &LAB_02277980;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(undefined1 **)(lVar14 + 0x30) = puVar28;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar25 = 0;
            *(undefined1 **)(lVar14 + 0xc0) = puVar28;
            goto LAB_02274f44;
          }
          *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) | 1L << (uVar23 & 0x3f);
      goto LAB_02274f44;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_2d8[0] = pcVar27;
  local_2d8[1] = puVar28;
LAB_02274f44:
  pcVar27 = *(char **)(lVar14 + 0xb8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_02277d20;
  if (uVar12 != 0) {
    pcVar1 = FUN_02277cd8;
  }
  while( true ) {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) break;
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
    if (uVar23 == 0x20) {
LAB_02275684:
      local_2d8[uVar25 * 2] = pcVar27;
      local_2d8[uVar25 * 2 + 1] = (char *)pcVar1;
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0x108);
      uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x02275028:
      if ((uVar12 >> 0x11 & 1) == 0) {
LAB_0227502c:
        FUN_008cca50();
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0x108);
      }
LAB_02275034:
      if ((uVar12 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0x108);
      }
      uVar23 = uVar25;
      if ((uVar12 >> 0x10 & 1) == 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x181);
        if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 400);
        }
        uVar23 = (ulong)((int)uVar25 + 1);
        local_2d8[uVar25 * 2] = pcVar27;
        local_2d8[uVar25 * 2 + 1] = PTR_LAB_043861f0;
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0x108);
      }
      uVar25 = uVar23;
      if ((uVar12 >> 0x1b & 1) == 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x289);
        if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 0x298);
        }
        uVar25 = (ulong)((int)uVar23 + 1);
        local_2d8[uVar23 * 2] = pcVar27;
        local_2d8[uVar23 * 2 + 1] = PTR_LAB_043861f8;
      }
      uVar23 = uVar25;
      if (*(long *)(lVar14 + 0xc0) != 0) {
        lVar29 = FUN_008cca50();
        pcVar27 = (char *)(lVar29 + 0x1c9);
        if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
          pcVar27 = *(char **)(lVar29 + 0x1d8);
        }
        pcVar21 = *(char **)(lVar14 + 0xc0);
        uVar23 = (ulong)((int)uVar25 + 1);
        local_2d8[uVar25 * 2] = pcVar27;
        local_2d8[uVar25 * 2 + 1] = pcVar21;
      }
      local_2d8[uVar23 * 2] = (char *)0x0;
      local_2d8[uVar23 * 2 + 1] = (char *)0x0;
      memcpy(&local_548,local_2d8,0x270);
      memcpy(asStack_7b8,local_2d8,0x270);
      lVar29 = FUN_008cca50();
      lVar16 = uVar23 - 1;
      pcVar27 = local_2d8[lVar16 * 2];
      sVar15 = strlen(pcVar27);
      sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
      if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
        sVar2 = *(size_t *)(lVar29 + 0x1d0);
      }
      if ((sVar15 == sVar2) &&
         (iVar10 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
         iVar10 == 0)) {
        auStack_558[lVar16 * 2 + 2] = 0;
        *(undefined8 *)(auStack_547 + lVar16 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_7b8 + lVar16 * 0x10) = local_2d8[lVar16 * 2];
      *(undefined1 **)(asStack_7b8 + (lVar16 * 2 + 1) * 8) = &LAB_02277d70;
      FUN_00151fe0(param_2,0,2);
      local_7c0[0] = FUN_0014feb0(param_2,0xffffffff);
      local_7c8 = param_2;
      if ((*PTR_DAT_04386190 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_04386190);
        puVar3 = PTR_DAT_04386198;
        if (iVar10 != 0) {
          FUN_02265d40(PTR_DAT_04386198);
          FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04386190);
        }
      }
      uVar11 = local_7c0[0];
      uVar23 = *(ulong *)(PTR_DAT_04386198 + 8);
      puVar3 = *(undefined **)(PTR_DAT_04386198 + 0x10);
      if ((*PTR_DAT_04386198 & 1) == 0) {
        puVar3 = PTR_DAT_04386198 + 1;
        uVar23 = (ulong)((byte)*PTR_DAT_04386198 >> 1);
      }
      FUN_001514f0(param_2,puVar3,uVar23);
      FUN_00152550(param_2,uVar11,&DAT_038f8fce);
      FUN_001516f0(param_2,PTR_LAB_043861e8,0);
      FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
      lVar29 = 0;
      do {
        if (lVar29 == 1) {
          psVar18 = asStack_7b8;
          pbVar17 = (byte *)FUN_02268098();
        }
        else if (lVar29 == 0) {
          psVar18 = &local_548;
          pbVar17 = (byte *)FUN_0226765c();
        }
        else {
          psVar18 = (string *)local_2d8;
          pbVar17 = (byte *)FUN_022669d4();
        }
        pbVar22 = *(byte **)(pbVar17 + 0x10);
        if ((*pbVar17 & 1) == 0) {
          pbVar22 = pbVar17 + 1;
        }
        FUN_00154450(param_2,pbVar22);
        local_7d0 = FUN_0014feb0(param_2,0xffffffff);
        local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
        local_7d8 = param_2;
        FUN_008fe304(local_7e0,param_2,&local_810,&local_7c8,local_7d0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar14);
        FUN_00155a20(param_2,psVar18,2);
        uVar11 = local_7d0;
        if (*(long *)(lVar14 + 0xf0) == 0) {
          lVar16 = *(long *)(lVar14 + 0xf8);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar11,"class_check");
          lVar16 = *(long *)(lVar14 + 0xf8);
          uVar11 = local_7d0;
        }
        local_7d0 = uVar11;
        if (lVar16 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar11,"class_cast");
        }
        uVar11 = local_7d0;
        uVar20 = *(undefined8 *)(lVar14 + 0xd0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar14);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar11,&DAT_03955ac7);
        uVar11 = local_7d0;
        uVar20 = *(undefined8 *)(lVar14 + 0xd8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar14);
        FUN_00151810(param_2,lVar24);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar11,&DAT_0397c077);
        if (*(char *)(lVar14 + 0x58) == '\0') {
          local_810 = (undefined1 *)CONCAT44(local_810._4_4_,1);
          FUN_008fe304(local_7e0,param_2,&local_810,&local_7d8,local_7d0);
        }
        else {
          local_7e0[0] = 1;
          local_810 = &LAB_02277dc0;
          uStack_808 = 0;
          local_800 = lVar14;
          lStack_7f8 = lVar24;
          FUN_0227824c(param_2,local_7e0,&local_810,local_7d0);
          local_7e0[0] = 2;
          local_810 = &LAB_02277dc4;
          uStack_808 = 0;
          local_800 = lVar14;
          lStack_7f8 = lVar24;
          FUN_0227824c(param_2,local_7e0,&local_810,local_7d0);
        }
        FUN_00151fe0(param_2,0,3);
        uVar11 = FUN_0014feb0(param_2,0xffffffff);
        local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
        FUN_008fe304(local_7e0,param_2,&local_810,&local_7c8,uVar11);
        if (*(undefined1 **)(lVar14 + 200) == (undefined1 *)0x0) {
          cVar6 = *(char *)(lVar14 + 0x100);
        }
        else {
          local_7e0[0] = 4;
          uStack_808 = 0;
          local_810 = *(undefined1 **)(lVar14 + 200);
          local_800 = lVar14;
          lStack_7f8 = lVar24;
          FUN_0227824c(param_2,local_7e0,&local_810,uVar11);
          cVar6 = *(char *)(lVar14 + 0x100);
        }
        if (cVar6 != '\0') {
          local_7e0[0] = 1;
          local_810 = &LAB_02277dc0;
          uStack_808 = 0;
          local_800 = lVar14;
          lStack_7f8 = lVar24;
          FUN_0227824c(param_2,local_7e0,&local_810,uVar11);
          local_7e0[0] = 2;
          local_810 = &LAB_02277dc4;
          uStack_808 = 0;
          local_800 = lVar14;
          lStack_7f8 = lVar24;
          FUN_0227824c(param_2,local_7e0,&local_810,uVar11);
        }
        uVar13 = local_7d0;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar11);
        }
        FUN_00152ae0(param_2,uVar13);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_7d8,0xfffffffe);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 3);
      FUN_02276c24();
      puVar3 = DAT_043dfe40;
      if ((DAT_043dfe30 & 1) == 0) {
        puVar3 = &DAT_043dfe31;
      }
      FUN_00154450(param_2,puVar3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_810._0_4_ = 0x1e;
      FUN_008fe304(&local_7d8,param_2,&local_810,&local_7c8,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_2d8,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
      FUN_008fe304(&local_7d8,param_2,&local_810,&local_7c8,uVar13);
      local_810 = *(undefined1 **)(lVar14 + 200);
      if (local_810 != (undefined1 *)0x0) {
        local_7d8 = CONCAT44(local_7d8._4_4_,4);
        uStack_808 = 0;
        local_800 = lVar14;
        lStack_7f8 = lVar24;
        FUN_0227824c(param_2,&local_7d8,&local_810,uVar13);
      }
      local_7d8._0_4_ = 1;
      local_810 = &LAB_02277dc8;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a7d408;
      local_800 = lVar14;
      lStack_7f8 = lVar24;
      FUN_02278900(param_2,&local_7d8,&local_810,uVar13);
      local_7d8 = CONCAT44(local_7d8._4_4_,2);
      local_810 = &LAB_02277dcc;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a7d408;
      local_800 = lVar14;
      lStack_7f8 = lVar24;
      FUN_02278900(param_2,&local_7d8,&local_810,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7c0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar10 = (int)uVar23;
  if (iVar10 == 0x13) {
    *(code **)(lVar14 + 0xc0) = pcVar1;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x108);
    goto joined_r0x02275028;
  }
  if (iVar10 == 1) {
    *(code **)(lVar14 + 0x30) = pcVar1;
  }
  else {
    if (iVar10 != 2) {
      *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) | 1L << (uVar23 & 0x3f);
      goto LAB_02275684;
    }
    *(code **)(lVar14 + 0x38) = pcVar1;
  }
  *(undefined1 *)(lVar14 + 0x58) = 1;
  *(ulong *)(lVar14 + 0x108) = *(ulong *)(lVar14 + 0x108) | 1L << (uVar23 & 0x3f);
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0x108);
  if ((uVar12 >> 0x11 & 1) == 0) goto LAB_0227502c;
  goto LAB_02275034;
}


