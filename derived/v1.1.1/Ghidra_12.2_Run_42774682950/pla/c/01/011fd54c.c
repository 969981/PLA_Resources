/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011fd54c; name: FUN_011fd54c
 */


undefined8 FUN_011fd54c(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char cVar7;
  ulong uVar8;
  long *plVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  byte *pbVar18;
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
  
  if (((DAT_043bedc8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043bedc8), iVar11 != 0)) {
    local_288 = 0;
    local_298[1] = (undefined1 *)0x0;
    local_298[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437e810 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_0437e810);
      puVar2 = PTR_DAT_0437e818;
      if (iVar11 != 0) {
        FUN_01201150(PTR_DAT_0437e818);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437e810);
      }
    }
    pcVar28 = (char *)FUN_01200518(local_298,PTR_DAT_0437e818);
    psVar19 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043bedb0,psVar19);
    lVar15 = local_288;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_298[0] & 1) != 0) && (local_288 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar9;
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
          FUN_02bcc824(plVar27,lVar15,0,8);
          goto LAB_011fe4b0;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar15,0,8);
    }
LAB_011fe4b0:
    FUN_00100250(PTR__string_04379718,&DAT_043bedb0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043bedc8);
  }
  std::string::string(&local_4c8,(string *)&DAT_043bedb0);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043beda8);
  sVar1 = (ulong)((byte)local_4c8 >> 1);
  if (((byte)local_4c8 & 1) != 0) {
    sVar1 = local_4c0;
  }
  std::string::append((ulong)&local_4c8,(char)iVar11);
  if (((byte)local_4c8 & 1) == 0) {
    puVar29 = auStack_4c7;
    local_4c0 = (size_t)((byte)local_4c8 >> 1);
  }
  else {
    puVar29 = local_4b8;
  }
  snprintf(puVar29 + (sVar1 - 1),local_4c0,"%d",(ulong)DAT_043beda8);
  DAT_043beda8 = DAT_043beda8 + 1;
  if (((DAT_043bede8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043bede8), iVar11 != 0)) {
    local_288 = 0;
    local_298[1] = (undefined1 *)0x0;
    local_298[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437e810 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_0437e810);
      puVar2 = PTR_DAT_0437e818;
      if (iVar11 != 0) {
        FUN_01201150(PTR_DAT_0437e818);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437e810);
      }
    }
    pcVar28 = (char *)FUN_01200518(local_298,PTR_DAT_0437e818);
    psVar19 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043bedd0,psVar19);
    lVar15 = local_288;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_298[0] & 1) != 0) && (local_288 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar9;
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
          FUN_02bcc824(plVar27,lVar15,0,8);
          goto LAB_011fe604;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar15,0,8);
    }
LAB_011fe604:
    FUN_00100250(PTR__string_04379718,&DAT_043bedd0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043bede8);
  }
  puVar2 = DAT_043bede0;
  if ((DAT_043bedd0 & 1) == 0) {
    puVar2 = &DAT_043bedd1;
  }
  if (((byte)local_4c8 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_4c8 | 1);
  }
  else {
    puVar29 = local_4b8;
  }
  if (((DAT_043bedf8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043bedf8), iVar11 != 0)) {
    DAT_043bedf0 = 0xd0;
    __cxa_guard_release(&DAT_043bedf8);
  }
  if (((DAT_043bee08 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043bee08), iVar11 != 0)) {
    DAT_043bee00 = 0xd7;
    __cxa_guard_release(&DAT_043bee08);
  }
  uVar24 = DAT_043bedf0;
  lVar15 = FUN_00153520(param_2,DAT_043bedf0);
  if ((uVar24 < ((ulong)(uint)-(int)lVar15 & 7 | 0xd0)) ||
     (puVar20 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar24 = DAT_043bee00;
    lVar15 = FUN_00153520(param_2,DAT_043bee00);
    if ((uVar24 < ((ulong)(uint)-(int)lVar15 & 7 | 0xd0)) ||
       (puVar20 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_01202f90();
      puVar3 = DAT_043bee20;
      if ((DAT_043bee10 & 1) == 0) {
        puVar3 = &DAT_043bee11;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar21 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar20[1] = uVar21;
  puVar20[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar15 = *(long *)(param_1 + 0x18);
  puVar20[3] = lVar15;
  lVar25 = *(long *)(param_1 + 0x20);
  puVar20[4] = lVar25;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar20[2];
    uVar24 = *(ulong *)(lVar15 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar24 = uVar26 - 1 & uVar24;
    }
    else if (uVar26 <= uVar24) {
      uVar8 = 0;
      if (uVar26 != 0) {
        uVar8 = uVar24 / uVar26;
      }
      uVar24 = uVar24 - uVar8 * uVar26;
    }
    *(undefined8 **)(puVar20[1] + uVar24 * 8) = puVar20 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar21 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar21;
  puVar20[7] = uVar4;
  puVar20[8] = *(undefined8 *)(param_1 + 0x40);
  puVar20[9] = *(undefined8 *)(param_1 + 0x48);
  puVar20[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar20 = &PTR_FUN_041fbac8;
  *(undefined1 *)(puVar20 + 0xb) = uVar6;
  uVar21 = *(undefined8 *)(param_1 + 0x68);
  puVar20[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar20[0xd] = uVar21;
  uVar21 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  puVar20[0x10] = *(undefined8 *)(param_1 + 0x80);
  puVar20[0x11] = uVar5;
  puVar20[0xe] = uVar21;
  puVar20[0xf] = uVar4;
  uVar21 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  puVar20[0x14] = *(undefined8 *)(param_1 + 0xa0);
  puVar20[0x15] = uVar5;
  puVar20[0x12] = uVar21;
  puVar20[0x13] = uVar4;
  uVar21 = *(undefined8 *)(param_1 + 0xb0);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar5 = *(undefined8 *)(param_1 + 200);
  puVar20[0x18] = *(undefined8 *)(param_1 + 0xc0);
  puVar20[0x19] = uVar5;
  puVar20[0x16] = uVar21;
  puVar20[0x17] = uVar4;
  iVar11 = FUN_00154450(param_2,puVar29);
  if (iVar11 != 0) {
    FUN_001516f0(param_2,&LAB_01202f50,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar12 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar12);
  }
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar15 = FUN_001511d0(param_2,0xffffffff);
  lVar15 = lVar15 + ((ulong)(uint)-(int)lVar15 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar9 = DAT_043f1798;
  if ((((byte)local_4c8 & 1) != 0) && (local_4b8 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar27 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar27 = plVar9;
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
        goto LAB_011fd8d4;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,local_4b8,0,8);
  }
LAB_011fd8d4:
  memset(local_298,0,0x230);
  pcVar28 = *(char **)(lVar15 + 0x70);
  sVar16 = strlen(pcVar28);
  sVar1 = 10;
  if (sVar16 < 0xb) {
    sVar1 = sVar16;
  }
  if (sVar1 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar28,sVar1);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  lVar25 = lVar15 + 8;
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  puVar29 = &LAB_01202ce4;
  if (uVar13 != 0) {
    puVar29 = &LAB_012017b0;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar1) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 1) {
        *(undefined1 **)(lVar15 + 0x30) = puVar29;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            uVar26 = 0;
            *(undefined1 **)(lVar15 + 0x80) = puVar29;
            goto LAB_011fd9f4;
          }
          *(ulong *)(lVar15 + 200) = *(ulong *)(lVar15 + 200) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar15 + 0x38) = puVar29;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 200) = *(ulong *)(lVar15 + 200) | 1L << (uVar24 & 0x3f);
      goto LAB_011fd9f4;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  uVar26 = 1;
  local_298[0] = pcVar28;
  local_298[1] = puVar29;
LAB_011fd9f4:
  pcVar28 = *(char **)(lVar15 + 0x78);
  sVar16 = strlen(pcVar28);
  sVar1 = 10;
  if (sVar16 < 0xb) {
    sVar1 = sVar16;
  }
  if (sVar1 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar28,sVar1);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = &LAB_01202ebc;
  if (uVar13 != 0) {
    pcVar22 = &LAB_01202e88;
  }
  while( true ) {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar1) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar11 == 0)) break;
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
    if (uVar24 == 0x20) {
LAB_011fe140:
      local_298[uVar26 * 2] = pcVar28;
      local_298[uVar26 * 2 + 1] = pcVar22;
      uVar13 = (uint)*(undefined8 *)(lVar15 + 200);
      uVar26 = (ulong)((int)uVar26 + 1);
joined_r0x011fdad8:
      if ((uVar13 >> 0x11 & 1) == 0) {
LAB_011fdadc:
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 200);
      }
LAB_011fdae4:
      if ((uVar13 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 200);
      }
      uVar24 = uVar26;
      if ((uVar13 >> 0x10 & 1) == 0) {
        lVar30 = FUN_008cca50();
        pcVar28 = (char *)(lVar30 + 0x181);
        if ((*(byte *)(lVar30 + 0x180) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 400);
        }
        uVar24 = (ulong)((int)uVar26 + 1);
        local_298[uVar26 * 2] = pcVar28;
        local_298[uVar26 * 2 + 1] = PTR_LAB_0437e800;
        uVar13 = (uint)*(undefined8 *)(lVar15 + 200);
      }
      uVar26 = uVar24;
      if ((uVar13 >> 0x1b & 1) == 0) {
        lVar30 = FUN_008cca50();
        pcVar28 = (char *)(lVar30 + 0x289);
        if ((*(byte *)(lVar30 + 0x288) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 0x298);
        }
        uVar26 = (ulong)((int)uVar24 + 1);
        local_298[uVar24 * 2] = pcVar28;
        local_298[uVar24 * 2 + 1] = PTR_LAB_0437e808;
      }
      uVar24 = uVar26;
      if (*(long *)(lVar15 + 0x80) != 0) {
        lVar30 = FUN_008cca50();
        pcVar28 = (char *)(lVar30 + 0x1c9);
        if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 0x1d8);
        }
        pcVar22 = *(char **)(lVar15 + 0x80);
        uVar24 = (ulong)((int)uVar26 + 1);
        local_298[uVar26 * 2] = pcVar28;
        local_298[uVar26 * 2 + 1] = pcVar22;
      }
      local_298[uVar24 * 2] = (char *)0x0;
      local_298[uVar24 * 2 + 1] = (char *)0x0;
      memcpy(&local_4c8,local_298,0x230);
      memcpy(asStack_6f8,local_298,0x230);
      lVar30 = FUN_008cca50();
      lVar17 = uVar24 - 1;
      pcVar28 = local_298[lVar17 * 2];
      sVar16 = strlen(pcVar28);
      sVar1 = (ulong)(*(byte *)(lVar30 + 0x1c8) >> 1);
      if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar30 + 0x1d0);
      }
      if ((sVar16 == sVar1) &&
         (iVar11 = std::string::compare(lVar30 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
         iVar11 == 0)) {
        auStack_4d8[lVar17 * 2 + 2] = 0;
        *(undefined8 *)(auStack_4c7 + lVar17 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_6f8 + lVar17 * 0x10) = local_298[lVar17 * 2];
      *(undefined1 **)(asStack_6f8 + (lVar17 * 2 + 1) * 8) = &LAB_01202ef0;
      FUN_00151fe0(param_2,0,2);
      local_700[0] = FUN_0014feb0(param_2,0xffffffff);
      local_708 = param_2;
      if ((*PTR_DAT_0437e810 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_0437e810);
        puVar2 = PTR_DAT_0437e818;
        if (iVar11 != 0) {
          FUN_01201150(PTR_DAT_0437e818);
          FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437e810);
        }
      }
      uVar12 = local_700[0];
      uVar24 = *(ulong *)(PTR_DAT_0437e818 + 8);
      puVar2 = *(undefined **)(PTR_DAT_0437e818 + 0x10);
      if ((*PTR_DAT_0437e818 & 1) == 0) {
        puVar2 = PTR_DAT_0437e818 + 1;
        uVar24 = (ulong)((byte)*PTR_DAT_0437e818 >> 1);
      }
      FUN_001514f0(param_2,puVar2,uVar24);
      FUN_00152550(param_2,uVar12,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_01201e20,0);
      FUN_00152550(param_2,uVar12,&DAT_0397bfcb);
      lVar30 = 0;
      do {
        if (lVar30 == 1) {
          psVar19 = asStack_6f8;
          pbVar18 = (byte *)FUN_011ff8c0();
        }
        else if (lVar30 == 0) {
          psVar19 = &local_4c8;
          pbVar18 = (byte *)FUN_011ff6e0();
        }
        else {
          psVar19 = (string *)local_298;
          pbVar18 = (byte *)FUN_011ffaa0();
        }
        pbVar23 = *(byte **)(pbVar18 + 0x10);
        if ((*pbVar18 & 1) == 0) {
          pbVar23 = pbVar18 + 1;
        }
        FUN_00154450(param_2,pbVar23);
        local_710 = FUN_0014feb0(param_2,0xffffffff);
        local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
        local_718 = param_2;
        FUN_008fe304(local_720,param_2,&local_750,&local_708,local_710);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00155a20(param_2,psVar19,2);
        uVar12 = local_710;
        if (*(long *)(lVar15 + 0xb0) == 0) {
          lVar17 = *(long *)(lVar15 + 0xb8);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_check");
          lVar17 = *(long *)(lVar15 + 0xb8);
          uVar12 = local_710;
        }
        local_710 = uVar12;
        if (lVar17 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_cast");
        }
        uVar12 = local_710;
        uVar21 = *(undefined8 *)(lVar15 + 0x90);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar25);
        FUN_001516f0(param_2,uVar21,3);
        FUN_00152550(param_2,uVar12,&DAT_03955ac7);
        uVar12 = local_710;
        uVar21 = *(undefined8 *)(lVar15 + 0x98);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar25);
        FUN_001516f0(param_2,uVar21,3);
        FUN_00152550(param_2,uVar12,&DAT_0397c077);
        if (*(char *)(lVar15 + 0x58) == '\0') {
          local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
          FUN_008fe304(local_720,param_2,&local_750,&local_718,local_710);
        }
        else {
          local_720[0] = 1;
          local_750 = &LAB_01202f40;
          uStack_748 = 0;
          local_740 = lVar15;
          lStack_738 = lVar25;
          FUN_012033cc(param_2,local_720,&local_750,local_710);
          local_720[0] = 2;
          local_750 = &LAB_01202f44;
          uStack_748 = 0;
          local_740 = lVar15;
          lStack_738 = lVar25;
          FUN_012033cc(param_2,local_720,&local_750,local_710);
        }
        FUN_00151fe0(param_2,0,3);
        uVar12 = FUN_0014feb0(param_2,0xffffffff);
        local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
        FUN_008fe304(local_720,param_2,&local_750,&local_708,uVar12);
        if (*(undefined1 **)(lVar15 + 0x88) == (undefined1 *)0x0) {
          cVar7 = *(char *)(lVar15 + 0xc0);
        }
        else {
          local_720[0] = 4;
          uStack_748 = 0;
          local_750 = *(undefined1 **)(lVar15 + 0x88);
          local_740 = lVar15;
          lStack_738 = lVar25;
          FUN_012033cc(param_2,local_720,&local_750,uVar12);
          cVar7 = *(char *)(lVar15 + 0xc0);
        }
        if (cVar7 != '\0') {
          local_720[0] = 1;
          local_750 = &LAB_01202f40;
          uStack_748 = 0;
          local_740 = lVar15;
          lStack_738 = lVar25;
          FUN_012033cc(param_2,local_720,&local_750,uVar12);
          local_720[0] = 2;
          local_750 = &LAB_01202f44;
          uStack_748 = 0;
          local_740 = lVar15;
          lStack_738 = lVar25;
          FUN_012033cc(param_2,local_720,&local_750,uVar12);
        }
        uVar14 = local_710;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar12);
        }
        FUN_00152ae0(param_2,uVar14);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_718,0xfffffffe);
        lVar30 = lVar30 + 1;
      } while (lVar30 != 3);
      FUN_011ffcd8();
      puVar2 = DAT_043bece8;
      if ((DAT_043becd8 & 1) == 0) {
        puVar2 = &DAT_043becd9;
      }
      FUN_00154450(param_2,puVar2);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar12);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar15);
      FUN_00155a20(param_2,local_298,2);
      FUN_00151fe0(param_2,0,3);
      uVar14 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar14);
      local_750 = *(undefined1 **)(lVar15 + 0x88);
      if (local_750 != (undefined1 *)0x0) {
        local_718 = CONCAT44(local_718._4_4_,4);
        uStack_748 = 0;
        local_740 = lVar15;
        lStack_738 = lVar25;
        FUN_012033cc(param_2,&local_718,&local_750,uVar14);
      }
      local_718._0_4_ = 1;
      local_750 = &LAB_01202f48;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a79c28;
      local_740 = lVar15;
      lStack_738 = lVar25;
      FUN_01203a80(param_2,&local_718,&local_750,uVar14);
      local_718 = CONCAT44(local_718._4_4_,2);
      local_750 = &LAB_01202f4c;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a79c28;
      local_740 = lVar15;
      lStack_738 = lVar25;
      FUN_01203a80(param_2,&local_718,&local_750,uVar14);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar14);
      }
      FUN_00152ae0(param_2,uVar12);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_700[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar11 = (int)uVar24;
  if (iVar11 == 0x13) {
    *(char **)(lVar15 + 0x80) = pcVar22;
    uVar13 = (uint)*(undefined8 *)(lVar15 + 200);
    goto joined_r0x011fdad8;
  }
  if (iVar11 == 1) {
    *(char **)(lVar15 + 0x30) = pcVar22;
  }
  else {
    if (iVar11 != 2) {
      *(ulong *)(lVar15 + 200) = *(ulong *)(lVar15 + 200) | 1L << (uVar24 & 0x3f);
      goto LAB_011fe140;
    }
    *(char **)(lVar15 + 0x38) = pcVar22;
  }
  *(undefined1 *)(lVar15 + 0x58) = 1;
  *(ulong *)(lVar15 + 200) = *(ulong *)(lVar15 + 200) | 1L << (uVar24 & 0x3f);
  uVar13 = (uint)*(undefined8 *)(lVar15 + 200);
  if ((uVar13 >> 0x11 & 1) == 0) goto LAB_011fdadc;
  goto LAB_011fdae4;
}


