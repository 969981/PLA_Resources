/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02459294; name: FUN_02459294
 */


undefined8 FUN_02459294(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
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
  ulong uVar30;
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
  
  if (((DAT_043e5df0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5df0), iVar10 != 0)) {
    local_288 = 0;
    local_298[1] = (undefined1 *)0x0;
    local_298[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385b10 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04385b10);
      puVar3 = PTR_DAT_04385b18;
      if (iVar10 != 0) {
        FUN_021fa390(PTR_DAT_04385b18);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385b10);
      }
    }
    pcVar27 = (char *)FUN_0245bca4(local_298,PTR_DAT_04385b18);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e5dd8,psVar18);
    lVar14 = local_288;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_298[0] & 1) != 0) && (local_288 != 0)) {
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
          goto LAB_0245a244;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_0245a244:
    FUN_00100250(PTR__string_04379718,&DAT_043e5dd8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5df0);
  }
  std::string::string(&local_4c8,(string *)&DAT_043e5dd8);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e5dd0);
  sVar2 = (ulong)((byte)local_4c8 >> 1);
  if (((byte)local_4c8 & 1) != 0) {
    sVar2 = local_4c0;
  }
  std::string::append((ulong)&local_4c8,(char)iVar10);
  if (((byte)local_4c8 & 1) == 0) {
    puVar28 = auStack_4c7;
    local_4c0 = (size_t)((byte)local_4c8 >> 1);
  }
  else {
    puVar28 = local_4b8;
  }
  snprintf(puVar28 + (sVar2 - 1),local_4c0,"%d",(ulong)DAT_043e5dd0);
  DAT_043e5dd0 = DAT_043e5dd0 + 1;
  if (((DAT_043e5e10 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5e10), iVar10 != 0)) {
    local_288 = 0;
    local_298[1] = (undefined1 *)0x0;
    local_298[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385b10 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04385b10);
      puVar3 = PTR_DAT_04385b18;
      if (iVar10 != 0) {
        FUN_021fa390(PTR_DAT_04385b18);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385b10);
      }
    }
    pcVar27 = (char *)FUN_0245bca4(local_298,PTR_DAT_04385b18);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e5df8,psVar18);
    lVar14 = local_288;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_298[0] & 1) != 0) && (local_288 != 0)) {
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
          goto LAB_0245a398;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_0245a398:
    FUN_00100250(PTR__string_04379718,&DAT_043e5df8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5e10);
  }
  puVar3 = DAT_043e5e08;
  if ((DAT_043e5df8 & 1) == 0) {
    puVar3 = &DAT_043e5df9;
  }
  if (((byte)local_4c8 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_4c8 | 1);
  }
  else {
    puVar28 = local_4b8;
  }
  if (((DAT_043e5e20 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5e20), iVar10 != 0)) {
    DAT_043e5e18 = 0xd0;
    __cxa_guard_release(&DAT_043e5e20);
  }
  if (((DAT_043e5e30 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5e30), iVar10 != 0)) {
    DAT_043e5e28 = 0xd7;
    __cxa_guard_release(&DAT_043e5e30);
  }
  uVar23 = DAT_043e5e18;
  lVar14 = FUN_00153520(param_2,DAT_043e5e18);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0xd0)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043e5e28;
    lVar14 = FUN_00153520(param_2,DAT_043e5e28);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0xd0)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0245c6d0();
      puVar4 = DAT_043e5e48;
      if ((DAT_043e5e38 & 1) == 0) {
        puVar4 = &DAT_043e5e39;
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
      uVar30 = 0;
      if (uVar25 != 0) {
        uVar30 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar30 * uVar25;
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
  uVar7 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar19 = &PTR_FUN_0425c0e8;
  *(undefined1 *)(puVar19 + 0xb) = uVar7;
  uVar20 = *(undefined8 *)(param_1 + 0x68);
  puVar19[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar19[0xd] = uVar20;
  uVar20 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  puVar19[0x10] = *(undefined8 *)(param_1 + 0x80);
  puVar19[0x11] = uVar6;
  puVar19[0xe] = uVar20;
  puVar19[0xf] = uVar5;
  uVar20 = *(undefined8 *)(param_1 + 0x90);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  puVar19[0x14] = *(undefined8 *)(param_1 + 0xa0);
  puVar19[0x15] = uVar6;
  puVar19[0x12] = uVar20;
  puVar19[0x13] = uVar5;
  uVar20 = *(undefined8 *)(param_1 + 0xb0);
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = *(undefined8 *)(param_1 + 200);
  puVar19[0x18] = *(undefined8 *)(param_1 + 0xc0);
  puVar19[0x19] = uVar6;
  puVar19[0x16] = uVar20;
  puVar19[0x17] = uVar5;
  iVar10 = FUN_00154450(param_2,puVar28);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_0245c690,0);
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
  if ((((byte)local_4c8 & 1) != 0) && (local_4b8 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_4b8,0,8);
        goto LAB_0245961c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_4b8,0,8);
  }
LAB_0245961c:
  memset(local_298,0,0x230);
  puVar3 = PTR_DAT_04380660;
  *(undefined1 *)(lVar14 + 0x58) = 1;
  *puVar3 = 1;
  pcVar27 = *(char **)(lVar14 + 0x60);
  *(undefined1 **)(lVar14 + 0xb0) = &LAB_0245cb0c;
  *(undefined1 **)(lVar14 + 0xb8) = &LAB_0245cbc8;
  *(undefined1 **)(lVar14 + 0xa0) = &LAB_0245cc20;
  *(undefined1 **)(lVar14 + 0xa8) = &LAB_0245cc30;
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
  puVar28 = &LAB_0245c100;
  if (uVar12 != 0) {
    puVar28 = &LAB_0245c01c;
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
            *(undefined1 **)(lVar14 + 0x80) = puVar28;
            goto LAB_0245987c;
          }
          *(ulong *)(lVar14 + 200) = *(ulong *)(lVar14 + 200) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 200) = *(ulong *)(lVar14 + 200) | 1L << (uVar23 & 0x3f);
      goto LAB_0245987c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_298[0] = pcVar27;
  local_298[1] = puVar28;
LAB_0245987c:
  pcVar27 = *(char **)(lVar14 + 0x78);
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
  pcVar1 = FUN_0245c268;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_0245c208;
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
      uVar30 = uVar25;
      if (iVar10 == 0x13) {
        *(code **)(lVar14 + 0x80) = pcVar1;
        uVar12 = (uint)*(undefined8 *)(lVar14 + 200);
        goto joined_r0x0245a0c0;
      }
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 200) = *(ulong *)(lVar14 + 200) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 200) = *(ulong *)(lVar14 + 200) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 200);
      goto joined_r0x0245a0c0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar30 = (ulong)((int)uVar25 + 1);
  local_298[uVar25 * 2] = pcVar27;
  local_298[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 200);
joined_r0x0245a0c0:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 200);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 200);
  }
  uVar23 = uVar30;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar23 = (ulong)((int)uVar30 + 1);
    local_298[uVar30 * 2] = pcVar27;
    local_298[uVar30 * 2 + 1] = PTR_LAB_04385ae8;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 200);
  }
  uVar25 = uVar23;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    local_298[uVar23 * 2] = pcVar27;
    local_298[uVar23 * 2 + 1] = PTR_LAB_04385af0;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar14 + 0x80) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(char **)(lVar14 + 0x80);
    uVar23 = (ulong)((int)uVar25 + 1);
    local_298[uVar25 * 2] = pcVar27;
    local_298[uVar25 * 2 + 1] = pcVar21;
  }
  local_298[uVar23 * 2] = (char *)0x0;
  local_298[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_4c8,local_298,0x230);
  memcpy(asStack_6f8,local_298,0x230);
  lVar29 = FUN_008cca50();
  lVar16 = uVar23 - 1;
  pcVar27 = local_298[lVar16 * 2];
  sVar15 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar10 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar10 == 0)) {
    auStack_4d8[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4c7 + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_6f8 + lVar16 * 0x10) = local_298[lVar16 * 2];
  *(undefined1 **)(asStack_6f8 + (lVar16 * 2 + 1) * 8) = &LAB_0245c2d0;
  FUN_00151fe0(param_2,0,2);
  local_700[0] = FUN_0014feb0(param_2,0xffffffff);
  local_708 = param_2;
  if ((*PTR_DAT_04385b10 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04385b10);
    puVar3 = PTR_DAT_04385b18;
    if (iVar10 != 0) {
      FUN_021fa390(PTR_DAT_04385b18);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04385b10);
    }
  }
  uVar11 = local_700[0];
  uVar23 = *(ulong *)(PTR_DAT_04385b18 + 8);
  puVar3 = *(undefined **)(PTR_DAT_04385b18 + 0x10);
  if ((*PTR_DAT_04385b18 & 1) == 0) {
    puVar3 = PTR_DAT_04385b18 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_04385b18 >> 1);
  }
  FUN_001514f0(param_2,puVar3,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0245c320,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_6f8;
      pbVar17 = (byte *)FUN_021fab64();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_4c8;
      pbVar17 = (byte *)FUN_021f8d10();
    }
    else {
      psVar18 = (string *)local_298;
      pbVar17 = (byte *)FUN_021fa134();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_710 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_718 = param_2;
    FUN_008fe304(local_720,param_2,&local_750,&local_708,local_710);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar18,2);
    uVar11 = local_710;
    if (*(long *)(lVar14 + 0xb0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
    }
    uVar11 = local_710;
    if (*(long *)(lVar14 + 0xb8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_710;
    uVar20 = *(undefined8 *)(lVar14 + 0x90);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_710;
    uVar20 = *(undefined8 *)(lVar14 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(local_720,param_2,&local_750,&local_718,local_710);
    }
    else {
      local_720[0] = 1;
      local_750 = &LAB_0245c370;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_0245d058(param_2,local_720,&local_750,local_710);
      local_720[0] = 2;
      local_750 = &LAB_0245c67c;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_0245d058(param_2,local_720,&local_750,local_710);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(local_720,param_2,&local_750,&local_708,uVar11);
    if (*(undefined1 **)(lVar14 + 0x88) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0xc0) == '\0') goto LAB_02459d74;
LAB_0245a004:
      local_720[0] = 1;
      local_750 = &LAB_0245c370;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_0245d058(param_2,local_720,&local_750,uVar11);
      local_720[0] = 2;
      local_750 = &LAB_0245c67c;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_0245d058(param_2,local_720,&local_750,uVar11);
      if (param_2 == 0) goto LAB_0245a064;
LAB_02459d7c:
      uVar13 = local_710;
      FUN_00150260(param_2,uVar11);
    }
    else {
      local_720[0] = 4;
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar14 + 0x88);
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_0245d058(param_2,local_720,&local_750,uVar11);
      if (*(char *)(lVar14 + 0xc0) != '\0') goto LAB_0245a004;
LAB_02459d74:
      if (param_2 != 0) goto LAB_02459d7c;
LAB_0245a064:
      uVar13 = local_710;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_718,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_0245b474();
      puVar3 = DAT_043e5dc0;
      if ((DAT_043e5db0 & 1) == 0) {
        puVar3 = &DAT_043e5db1;
      }
      FUN_00154450(param_2,puVar3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_298,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar13);
      local_750 = *(undefined1 **)(lVar14 + 0x88);
      if (local_750 != (undefined1 *)0x0) {
        local_718 = CONCAT44(local_718._4_4_,4);
        uStack_748 = 0;
        local_740 = lVar14;
        lStack_738 = lVar24;
        FUN_0245d058(param_2,&local_718,&local_750,uVar13);
      }
      local_718._0_4_ = 1;
      local_750 = &LAB_0245c680;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7d578;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_0245d400(param_2,&local_718,&local_750,uVar13);
      local_718 = CONCAT44(local_718._4_4_,2);
      local_750 = &LAB_0245c684;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7d578;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_0245d400(param_2,&local_718,&local_750,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_700[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


