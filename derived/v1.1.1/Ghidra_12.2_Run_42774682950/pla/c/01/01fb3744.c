/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fb3744; name: FUN_01fb3744
 */


undefined8 FUN_01fb3744(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
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
  undefined1 *local_840;
  undefined8 uStack_838;
  long local_830;
  long lStack_828;
  undefined8 local_820;
  undefined *puStack_818;
  undefined4 local_810 [2];
  long local_808;
  undefined4 local_800;
  long local_7f8;
  undefined4 local_7f0 [2];
  string asStack_7e8 [624];
  undefined8 auStack_578 [2];
  string local_568;
  undefined1 auStack_567 [7];
  size_t local_560;
  undefined1 *local_558;
  char *apcStack_2f8 [2];
  char *local_2e8 [2];
  long local_2d8;
  
  puVar6 = PTR_DAT_04383220;
  if (((DAT_043d4dd8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d4dd8), iVar10 != 0)) {
    local_2d8 = 0;
    local_2e8[1] = (undefined1 *)0x0;
    local_2e8[0] = (char *)0x2e6c6f7308;
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04383220);
      puVar3 = PTR_DAT_04383238;
      if (iVar10 != 0) {
        FUN_01fb7b40(PTR_DAT_04383238);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383220);
      }
    }
    pcVar27 = (char *)FUN_01fb6f0c(local_2e8,PTR_DAT_04383238);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043d4dc0,psVar18);
    lVar14 = local_2d8;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2e8[0] & 1) != 0) && (local_2d8 != 0)) {
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
          goto LAB_01fb4e24;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_01fb4e24:
    FUN_00100250(PTR__string_04379718,&DAT_043d4dc0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d4dd8);
  }
  std::string::string(&local_568,(string *)&DAT_043d4dc0);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d4db8);
  sVar2 = (ulong)((byte)local_568 >> 1);
  if (((byte)local_568 & 1) != 0) {
    sVar2 = local_560;
  }
  std::string::append((ulong)&local_568,(char)iVar10);
  if (((byte)local_568 & 1) == 0) {
    puVar28 = auStack_567;
    local_560 = (size_t)((byte)local_568 >> 1);
  }
  else {
    puVar28 = local_558;
  }
  snprintf(puVar28 + (sVar2 - 1),local_560,"%d",(ulong)DAT_043d4db8);
  DAT_043d4db8 = DAT_043d4db8 + 1;
  if (((DAT_043d4df8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d4df8), iVar10 != 0)) {
    local_2d8 = 0;
    local_2e8[1] = (undefined1 *)0x0;
    local_2e8[0] = (char *)0x2e6c6f7308;
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04383220);
      puVar3 = PTR_DAT_04383238;
      if (iVar10 != 0) {
        FUN_01fb7b40(PTR_DAT_04383238);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383220);
      }
    }
    pcVar27 = (char *)FUN_01fb6f0c(local_2e8,PTR_DAT_04383238);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043d4de0,psVar18);
    lVar14 = local_2d8;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2e8[0] & 1) != 0) && (local_2d8 != 0)) {
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
          goto LAB_01fb4f70;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_01fb4f70:
    FUN_00100250(PTR__string_04379718,&DAT_043d4de0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d4df8);
  }
  puVar3 = DAT_043d4df0;
  if ((DAT_043d4de0 & 1) == 0) {
    puVar3 = &DAT_043d4de1;
  }
  if (((byte)local_568 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_568 | 1);
  }
  else {
    puVar28 = local_558;
  }
  if (((DAT_043d4e08 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d4e08), iVar10 != 0)) {
    DAT_043d4e00 = 0x130;
    __cxa_guard_release(&DAT_043d4e08);
  }
  if (((DAT_043d4e18 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d4e18), iVar10 != 0)) {
    DAT_043d4e10 = 0x137;
    __cxa_guard_release(&DAT_043d4e18);
  }
  uVar23 = DAT_043d4e00;
  lVar14 = FUN_00153520(param_2,DAT_043d4e00);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x130)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043d4e10;
    lVar14 = FUN_00153520(param_2,DAT_043d4e10);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x130)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_01fb9da0();
      puVar4 = DAT_043d4e30;
      if ((DAT_043d4e20 & 1) == 0) {
        puVar4 = &DAT_043d4e21;
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
  *puVar19 = &PTR_FUN_0425b0d8;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xd0);
  iVar10 = FUN_00154450(param_2,puVar28);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_01fb9d60,0);
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
  if ((((byte)local_568 & 1) != 0) && (local_558 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_558,0,8);
        goto LAB_01fb3ab8;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_558,0,8);
  }
LAB_01fb3ab8:
  memset(local_2e8,0,0x280);
  pcVar27 = *(char **)(lVar14 + 0x60);
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
  puVar28 = &LAB_01fb7f5c;
  if (uVar12 != 0) {
    puVar28 = &LAB_01fb7f1c;
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
            *(undefined1 **)(lVar14 + 0xe0) = puVar28;
            goto LAB_01fb3cd4;
          }
          *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
      goto LAB_01fb3cd4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_2e8[0] = pcVar27;
  local_2e8[1] = puVar28;
LAB_01fb3cd4:
  pcVar27 = *(char **)(lVar14 + 0x70);
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
  pcVar1 = FUN_01fb802c;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_01fb7f9c;
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
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0xe0) = pcVar1;
            goto LAB_01fb3e14;
          }
          *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
      goto LAB_01fb3e14;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e8[uVar25 * 2] = pcVar27;
  local_2e8[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01fb3e14:
  pcVar27 = *(char **)(lVar14 + 0x80);
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
  pcVar21 = "\x01";
  if (uVar12 != 0) {
    pcVar21 = "\x01";
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
        *(char **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar14 + 0xe0) = pcVar21;
            goto LAB_01fb3f54;
          }
          *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
      goto LAB_01fb3f54;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e8[uVar25 * 2] = pcVar27;
  local_2e8[uVar25 * 2 + 1] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01fb3f54:
  pcVar27 = *(char **)(lVar14 + 0x90);
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
  pcVar1 = FUN_01fb8184;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_01fb813c;
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
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0xe0) = pcVar1;
            goto LAB_01fb4094;
          }
          *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
      goto LAB_01fb4094;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e8[uVar25 * 2] = pcVar27;
  local_2e8[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01fb4094:
  pcVar27 = *(char **)(lVar14 + 0xa0);
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
  pcVar1 = FUN_01fb846c;
  if (uVar12 != 0) {
    pcVar1 = FUN_01fb81cc;
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
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0xe0) = pcVar1;
            goto LAB_01fb41d4;
          }
          *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
      goto LAB_01fb41d4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e8[uVar25 * 2] = pcVar27;
  local_2e8[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01fb41d4:
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
  pcVar1 = FUN_01fb85fc;
  if (uVar12 != 0) {
    pcVar1 = FUN_01fb84fc;
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
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0xe0) = pcVar1;
            goto LAB_01fb4314;
          }
          *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
      goto LAB_01fb4314;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e8[uVar25 * 2] = pcVar27;
  local_2e8[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01fb4314:
  pcVar27 = *(char **)(lVar14 + 0xd0);
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
  pcVar21 = &LAB_01fb9af4;
  if (uVar12 != 0) {
    pcVar21 = &LAB_01fb868c;
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
        *(char **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar14 + 0xe0) = pcVar21;
            goto LAB_01fb4424;
          }
          *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
      goto LAB_01fb4424;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e8[uVar25 * 2] = pcVar27;
  local_2e8[uVar25 * 2 + 1] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01fb4424:
  pcVar27 = *(char **)(lVar14 + 0xd8);
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
  pcVar21 = &LAB_01fb9ccc;
  if (uVar12 != 0) {
    pcVar21 = &LAB_01fb9c98;
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
      if (iVar10 == 0x13) {
        *(char **)(lVar14 + 0xe0) = pcVar21;
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0x128);
        goto joined_r0x01fb4508;
      }
      if (iVar10 == 1) {
        *(char **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x128) = *(ulong *)(lVar14 + 0x128) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0x128);
      goto joined_r0x01fb4508;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2e8[uVar25 * 2] = pcVar27;
  local_2e8[uVar25 * 2 + 1] = pcVar21;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0x128);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x01fb4508:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x128);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x128);
  }
  uVar23 = uVar25;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    local_2e8[uVar25 * 2] = pcVar27;
    local_2e8[uVar25 * 2 + 1] = PTR_LAB_04383228;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x128);
  }
  uVar25 = uVar23;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    local_2e8[uVar23 * 2] = pcVar27;
    local_2e8[uVar23 * 2 + 1] = PTR_LAB_04383230;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar14 + 0xe0) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(char **)(lVar14 + 0xe0);
    uVar23 = (ulong)((int)uVar25 + 1);
    local_2e8[uVar25 * 2] = pcVar27;
    local_2e8[uVar25 * 2 + 1] = pcVar21;
  }
  local_2e8[uVar23 * 2] = (char *)0x0;
  local_2e8[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_568,local_2e8,0x280);
  memcpy(asStack_7e8,local_2e8,0x280);
  lVar29 = FUN_008cca50();
  lVar16 = uVar23 - 1;
  pcVar27 = local_2e8[lVar16 * 2];
  sVar15 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar10 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar10 == 0)) {
    auStack_578[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_567 + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7e8 + lVar16 * 0x10) = local_2e8[lVar16 * 2];
  *(undefined1 **)(asStack_7e8 + (lVar16 * 2 + 1) * 8) = &LAB_01fb9d00;
  FUN_00151fe0(param_2,0,2);
  local_7f0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_7f8 = param_2;
  if ((*puVar6 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04383220);
    puVar6 = PTR_DAT_04383238;
    if (iVar10 != 0) {
      FUN_01fb7b40(PTR_DAT_04383238);
      FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04383220);
    }
  }
  uVar11 = local_7f0[0];
  uVar23 = *(ulong *)(PTR_DAT_04383238 + 8);
  puVar6 = *(undefined **)(PTR_DAT_04383238 + 0x10);
  if ((*PTR_DAT_04383238 & 1) == 0) {
    puVar6 = PTR_DAT_04383238 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_04383238 >> 1);
  }
  FUN_001514f0(param_2,puVar6,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_01fb8c60,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_7e8;
      pbVar17 = (byte *)FUN_01fb62bc();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_568;
      pbVar17 = (byte *)FUN_01fb60dc();
    }
    else {
      psVar18 = (string *)local_2e8;
      pbVar17 = (byte *)FUN_01fb649c();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_800 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    local_808 = param_2;
    FUN_008fe304(local_810,param_2,&local_840,&local_7f8,local_800);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar18,2);
    uVar11 = local_800;
    if (*(long *)(lVar14 + 0x110) == 0) {
      lVar16 = *(long *)(lVar14 + 0x118);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
      lVar16 = *(long *)(lVar14 + 0x118);
      uVar11 = local_800;
    }
    local_800 = uVar11;
    if (lVar16 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_800;
    uVar20 = *(undefined8 *)(lVar14 + 0xf0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_800;
    uVar20 = *(undefined8 *)(lVar14 + 0xf8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,1);
      FUN_008fe304(local_810,param_2,&local_840,&local_808,local_800);
    }
    else {
      local_810[0] = 1;
      local_840 = &LAB_01fb9d50;
      uStack_838 = 0;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_01fba1dc(param_2,local_810,&local_840,local_800);
      local_810[0] = 2;
      local_840 = &LAB_01fb9d54;
      uStack_838 = 0;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_01fba1dc(param_2,local_810,&local_840,local_800);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    FUN_008fe304(local_810,param_2,&local_840,&local_7f8,uVar11);
    if (*(undefined1 **)(lVar14 + 0xe8) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0x120) != '\0') goto LAB_01fb4bb8;
LAB_01fb489c:
      if (param_2 == 0) goto LAB_01fb4c18;
LAB_01fb48a4:
      uVar13 = local_800;
      FUN_00150260(param_2,uVar11);
    }
    else {
      uStack_838 = 0;
      local_810[0] = 4;
      local_840 = *(undefined1 **)(lVar14 + 0xe8);
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_01fba1dc(param_2,local_810,&local_840,uVar11);
      if (*(char *)(lVar14 + 0x120) == '\0') goto LAB_01fb489c;
LAB_01fb4bb8:
      local_810[0] = 1;
      local_840 = &LAB_01fb9d50;
      uStack_838 = 0;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_01fba1dc(param_2,local_810,&local_840,uVar11);
      local_810[0] = 2;
      local_840 = &LAB_01fb9d54;
      uStack_838 = 0;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_01fba1dc(param_2,local_810,&local_840,uVar11);
      if (param_2 != 0) goto LAB_01fb48a4;
LAB_01fb4c18:
      uVar13 = local_800;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_808,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_01fb66d4();
      puVar6 = DAT_043d4cf8;
      if ((DAT_043d4ce8 & 1) == 0) {
        puVar6 = &DAT_043d4ce9;
      }
      FUN_00154450(param_2,puVar6);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_840._0_4_ = 0x1e;
      FUN_008fe304(&local_808,param_2,&local_840,&local_7f8,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_2e8,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
      FUN_008fe304(&local_808,param_2,&local_840,&local_7f8,uVar13);
      local_840 = *(undefined1 **)(lVar14 + 0xe8);
      if (local_840 != (undefined1 *)0x0) {
        uStack_838 = 0;
        local_808 = CONCAT44(local_808._4_4_,4);
        local_830 = lVar14;
        lStack_828 = lVar24;
        FUN_01fba1dc(param_2,&local_808,&local_840,uVar13);
      }
      local_808._0_4_ = 1;
      local_840 = &LAB_01fb9d58;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7d280;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_01fba890(param_2,&local_808,&local_840,uVar13);
      local_808 = CONCAT44(local_808._4_4_,2);
      local_840 = &LAB_01fb9d5c;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7d280;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_01fba890(param_2,&local_808,&local_840,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7f0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


