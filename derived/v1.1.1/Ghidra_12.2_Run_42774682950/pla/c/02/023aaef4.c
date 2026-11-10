/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023aaef4; name: FUN_023aaef4
 */


undefined8 FUN_023aaef4(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined *puVar8;
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
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  char *pcVar29;
  undefined1 *puVar30;
  long lVar31;
  undefined1 *local_720;
  undefined8 uStack_718;
  long local_710;
  long lStack_708;
  undefined8 local_700;
  undefined *puStack_6f8;
  undefined4 local_6f0 [2];
  long local_6e8;
  undefined4 local_6e0;
  long local_6d8;
  undefined4 local_6d0 [2];
  string asStack_6c8 [528];
  undefined8 auStack_4b8 [2];
  string local_4a8;
  undefined1 auStack_4a7 [7];
  size_t local_4a0;
  undefined1 *local_498;
  char *apcStack_298 [2];
  char *local_288 [2];
  long local_278;
  
  puVar5 = PTR_DAT_04386998;
  if (((DAT_043e2fe0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e2fe0), iVar11 != 0)) {
    local_278 = 0;
    local_288[1] = (undefined1 *)0x0;
    local_288[0] = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_04386998);
      puVar2 = PTR_DAT_043869b0;
      if (iVar11 != 0) {
        FUN_023ae9a0(PTR_DAT_043869b0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386998);
      }
    }
    pcVar29 = (char *)FUN_023adda8(local_288,PTR_DAT_043869b0);
    psVar19 = (string *)std::string::append(pcVar29);
    std::string::string((string *)&DAT_043e2fc8,psVar19);
    lVar15 = local_278;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_288[0] & 1) != 0) && (local_278 != 0)) {
      lVar26 = tpidr_el0;
      plVar28 = *(long **)(lVar26 + 0x20);
      if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
        *(long **)(lVar26 + 0x20) = DAT_043f1798;
        plVar28 = plVar9;
      }
      uVar24 = (**(code **)(*plVar28 + 0xc0))(plVar28);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar26 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar26 + 0x38d488) = 1;
          *(undefined8 *)(lVar26 + 0x38d478) = 0;
          *(undefined8 *)(lVar26 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar26 + 0x38d480)) {
          FUN_02bcc824(plVar28,lVar15,0,8);
          goto LAB_023abd60;
        }
      }
      (**(code **)(*plVar28 + 0x18))(plVar28,lVar15,0,8);
    }
LAB_023abd60:
    FUN_00100250(PTR__string_04379718,&DAT_043e2fc8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2fe0);
  }
  std::string::string(&local_4a8,(string *)&DAT_043e2fc8);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e2fc0);
  sVar1 = (ulong)((byte)local_4a8 >> 1);
  if (((byte)local_4a8 & 1) != 0) {
    sVar1 = local_4a0;
  }
  std::string::append((ulong)&local_4a8,(char)iVar11);
  if (((byte)local_4a8 & 1) == 0) {
    puVar30 = auStack_4a7;
    local_4a0 = (size_t)((byte)local_4a8 >> 1);
  }
  else {
    puVar30 = local_498;
  }
  snprintf(puVar30 + (sVar1 - 1),local_4a0,"%d",(ulong)DAT_043e2fc0);
  DAT_043e2fc0 = DAT_043e2fc0 + 1;
  if (((DAT_043e3000 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e3000), iVar11 != 0)) {
    local_278 = 0;
    local_288[1] = (undefined1 *)0x0;
    local_288[0] = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(PTR_DAT_04386998);
      puVar2 = PTR_DAT_043869b0;
      if (iVar11 != 0) {
        FUN_023ae9a0(PTR_DAT_043869b0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386998);
      }
    }
    pcVar29 = (char *)FUN_023adda8(local_288,PTR_DAT_043869b0);
    psVar19 = (string *)std::string::append(pcVar29);
    std::string::string((string *)&DAT_043e2fe8,psVar19);
    lVar15 = local_278;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_288[0] & 1) != 0) && (local_278 != 0)) {
      lVar26 = tpidr_el0;
      plVar28 = *(long **)(lVar26 + 0x20);
      if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
        *(long **)(lVar26 + 0x20) = DAT_043f1798;
        plVar28 = plVar9;
      }
      uVar24 = (**(code **)(*plVar28 + 0xc0))(plVar28);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar26 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar26 + 0x38d488) = 1;
          *(undefined8 *)(lVar26 + 0x38d478) = 0;
          *(undefined8 *)(lVar26 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar26 + 0x38d480)) {
          FUN_02bcc824(plVar28,lVar15,0,8);
          goto LAB_023abeac;
        }
      }
      (**(code **)(*plVar28 + 0x18))(plVar28,lVar15,0,8);
    }
LAB_023abeac:
    FUN_00100250(PTR__string_04379718,&DAT_043e2fe8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e3000);
  }
  puVar2 = DAT_043e2ff8;
  if ((DAT_043e2fe8 & 1) == 0) {
    puVar2 = &DAT_043e2fe9;
  }
  if (((byte)local_4a8 & 1) == 0) {
    puVar30 = (undefined1 *)((ulong)&local_4a8 | 1);
  }
  else {
    puVar30 = local_498;
  }
  if (((DAT_043e3010 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e3010), iVar11 != 0)) {
    DAT_043e3008 = 0xb8;
    __cxa_guard_release(&DAT_043e3010);
  }
  if (((DAT_043e3020 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043e3020), iVar11 != 0)) {
    DAT_043e3018 = 0xbf;
    __cxa_guard_release(&DAT_043e3020);
  }
  uVar24 = DAT_043e3008;
  lVar15 = FUN_00153520(param_2,DAT_043e3008);
  if ((uVar24 < ((ulong)(uint)-(int)lVar15 & 7 | 0xb8)) ||
     (puVar20 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar24 = DAT_043e3018;
    lVar15 = FUN_00153520(param_2,DAT_043e3018);
    if ((uVar24 < ((ulong)(uint)-(int)lVar15 & 7 | 0xb8)) ||
       (puVar20 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_023af230();
      puVar3 = DAT_043e3038;
      if ((DAT_043e3028 & 1) == 0) {
        puVar3 = &DAT_043e3029;
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
  lVar26 = *(long *)(param_1 + 0x20);
  puVar20[4] = lVar26;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar26 != 0) {
    uVar27 = puVar20[2];
    uVar24 = *(ulong *)(lVar15 + 8);
    if ((uVar27 & uVar27 - 1) == 0) {
      uVar24 = uVar27 - 1 & uVar24;
    }
    else if (uVar27 <= uVar24) {
      uVar7 = 0;
      if (uVar27 != 0) {
        uVar7 = uVar24 / uVar27;
      }
      uVar24 = uVar24 - uVar7 * uVar27;
    }
    *(undefined8 **)(puVar20[1] + uVar24 * 8) = puVar20 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar21 = *(undefined8 *)(param_1 + 0x30);
  uVar25 = *(undefined8 *)(param_1 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar21;
  puVar20[7] = uVar25;
  puVar20[8] = *(undefined8 *)(param_1 + 0x40);
  puVar20[9] = *(undefined8 *)(param_1 + 0x48);
  puVar20[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar20 = &PTR_FUN_0425bdf8;
  *(undefined1 *)(puVar20 + 0xb) = uVar6;
  uVar25 = *(undefined8 *)(param_1 + 0x70);
  uVar21 = *(undefined8 *)(param_1 + 0x68);
  puVar20[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar20[0xd] = uVar21;
  puVar20[0xe] = uVar25;
  uVar21 = *(undefined8 *)(param_1 + 0x78);
  uVar25 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  puVar20[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar20[0x12] = uVar4;
  puVar20[0xf] = uVar21;
  puVar20[0x10] = uVar25;
  uVar21 = *(undefined8 *)(param_1 + 0x98);
  uVar25 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  puVar20[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar20[0x16] = uVar4;
  puVar20[0x13] = uVar21;
  puVar20[0x14] = uVar25;
  iVar11 = FUN_00154450(param_2,puVar30);
  if (iVar11 != 0) {
    FUN_001516f0(param_2,&LAB_023af1f0,0);
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
  if ((((byte)local_4a8 & 1) != 0) && (local_498 != (undefined1 *)0x0)) {
    lVar26 = tpidr_el0;
    plVar28 = *(long **)(lVar26 + 0x20);
    if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
      *(long **)(lVar26 + 0x20) = DAT_043f1798;
      plVar28 = plVar9;
    }
    uVar24 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar26 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar26 + 0x38d488) = 1;
        *(undefined8 *)(lVar26 + 0x38d478) = 0;
        *(undefined8 *)(lVar26 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar26 + 0x38d480)) {
        FUN_02bcc824(plVar28,local_498,0,8);
        goto LAB_023ab27c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,local_498,0,8);
  }
LAB_023ab27c:
  memset(local_288,0,0x220);
  puVar8 = PTR_DAT_04386970;
  *(undefined1 *)(lVar15 + 0x58) = 1;
  puVar2 = PTR_DAT_043847e0;
  *puVar8 = 1;
  *puVar2 = 1;
  pcVar29 = *(char **)(lVar15 + 0x60);
  *(undefined1 **)(lVar15 + 0x98) = &LAB_023af66c;
  *(undefined1 **)(lVar15 + 0xa0) = &LAB_023af728;
  *(undefined1 **)(lVar15 + 0x88) = &LAB_023af780;
  *(undefined1 **)(lVar15 + 0x90) = &LAB_023af7c0;
  sVar16 = strlen(pcVar29);
  sVar1 = 10;
  if (sVar16 < 0xb) {
    sVar1 = sVar16;
  }
  if (sVar1 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar29,sVar1);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  lVar26 = lVar15 + 8;
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar31 = 0;
  uVar24 = 0;
  puVar30 = &LAB_023af100;
  if (uVar13 != 0) {
    puVar30 = &LAB_023aedd0;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar31);
    sVar16 = strlen(pcVar29);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar1) &&
       (iVar11 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar11 == 0)) {
      iVar11 = (int)uVar24;
      if (iVar11 == 0x13) {
        uVar27 = 0;
        *(undefined1 **)(lVar15 + 0x68) = puVar30;
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0xb0);
        goto joined_r0x023abbb4;
      }
      if (iVar11 == 1) {
        *(undefined1 **)(lVar15 + 0x30) = puVar30;
      }
      else {
        if (iVar11 != 2) {
          *(ulong *)(lVar15 + 0xb0) = *(ulong *)(lVar15 + 0xb0) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar15 + 0x38) = puVar30;
      }
      uVar27 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0xb0) = *(ulong *)(lVar15 + 0xb0) | 1L << (uVar24 & 0x3f);
      uVar13 = (uint)*(undefined8 *)(lVar15 + 0xb0);
      goto joined_r0x023abbb4;
    }
    uVar24 = uVar24 + 1;
    lVar31 = lVar31 + 0x18;
  } while (uVar24 != 0x20);
  uVar27 = 1;
  uVar13 = (uint)*(undefined8 *)(lVar15 + 0xb0);
  local_288[0] = pcVar29;
  local_288[1] = puVar30;
joined_r0x023abbb4:
  if ((uVar13 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0xb0);
  }
  if ((uVar13 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0xb0);
  }
  uVar24 = uVar27;
  if ((uVar13 >> 0x10 & 1) == 0) {
    lVar31 = FUN_008cca50();
    pcVar29 = (char *)(lVar31 + 0x181);
    if ((*(byte *)(lVar31 + 0x180) & 1) != 0) {
      pcVar29 = *(char **)(lVar31 + 400);
    }
    uVar24 = (ulong)((int)uVar27 + 1);
    local_288[uVar27 * 2] = pcVar29;
    local_288[uVar27 * 2 + 1] = PTR_LAB_043869a0;
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0xb0);
  }
  uVar27 = uVar24;
  if ((uVar13 >> 0x1b & 1) == 0) {
    lVar31 = FUN_008cca50();
    pcVar29 = (char *)(lVar31 + 0x289);
    if ((*(byte *)(lVar31 + 0x288) & 1) != 0) {
      pcVar29 = *(char **)(lVar31 + 0x298);
    }
    uVar27 = (ulong)((int)uVar24 + 1);
    local_288[uVar24 * 2] = pcVar29;
    local_288[uVar24 * 2 + 1] = PTR_LAB_043869a8;
  }
  uVar24 = uVar27;
  if (*(long *)(lVar15 + 0x68) != 0) {
    lVar31 = FUN_008cca50();
    pcVar29 = (char *)(lVar31 + 0x1c9);
    if ((*(byte *)(lVar31 + 0x1c8) & 1) != 0) {
      pcVar29 = *(char **)(lVar31 + 0x1d8);
    }
    pcVar22 = *(char **)(lVar15 + 0x68);
    uVar24 = (ulong)((int)uVar27 + 1);
    local_288[uVar27 * 2] = pcVar29;
    local_288[uVar27 * 2 + 1] = pcVar22;
  }
  local_288[uVar24 * 2] = (char *)0x0;
  local_288[uVar24 * 2 + 1] = (char *)0x0;
  memcpy(&local_4a8,local_288,0x220);
  memcpy(asStack_6c8,local_288,0x220);
  lVar31 = FUN_008cca50();
  lVar17 = uVar24 - 1;
  pcVar29 = local_288[lVar17 * 2];
  sVar16 = strlen(pcVar29);
  sVar1 = (ulong)(*(byte *)(lVar31 + 0x1c8) >> 1);
  if ((*(byte *)(lVar31 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar31 + 0x1d0);
  }
  if ((sVar16 == sVar1) &&
     (iVar11 = std::string::compare(lVar31 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
     iVar11 == 0)) {
    auStack_4b8[lVar17 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4a7 + lVar17 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_6c8 + lVar17 * 0x10) = local_288[lVar17 * 2];
  *(undefined1 **)(asStack_6c8 + (lVar17 * 2 + 1) * 8) = &LAB_023af140;
  FUN_00151fe0(param_2,0,2);
  local_6d0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_6d8 = param_2;
  if ((*puVar5 & 1) == 0) {
    iVar11 = __cxa_guard_acquire(PTR_DAT_04386998);
    puVar5 = PTR_DAT_043869b0;
    if (iVar11 != 0) {
      FUN_023ae9a0(PTR_DAT_043869b0);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04386998);
    }
  }
  uVar12 = local_6d0[0];
  uVar24 = *(ulong *)(PTR_DAT_043869b0 + 8);
  puVar5 = *(undefined **)(PTR_DAT_043869b0 + 0x10);
  if ((*PTR_DAT_043869b0 & 1) == 0) {
    puVar5 = PTR_DAT_043869b0 + 1;
    uVar24 = (ulong)((byte)*PTR_DAT_043869b0 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar24);
  FUN_00152550(param_2,uVar12,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_023af190,0);
  FUN_00152550(param_2,uVar12,&DAT_0397bfcb);
  lVar31 = 0;
  do {
    if (lVar31 == 1) {
      psVar19 = asStack_6c8;
      pbVar18 = (byte *)FUN_023ad150();
    }
    else if (lVar31 == 0) {
      psVar19 = &local_4a8;
      pbVar18 = (byte *)FUN_023acf70();
    }
    else {
      psVar19 = (string *)local_288;
      pbVar18 = (byte *)FUN_023ad330();
    }
    pbVar23 = *(byte **)(pbVar18 + 0x10);
    if ((*pbVar18 & 1) == 0) {
      pbVar23 = pbVar18 + 1;
    }
    FUN_00154450(param_2,pbVar23);
    local_6e0 = FUN_0014feb0(param_2,0xffffffff);
    local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
    local_6e8 = param_2;
    FUN_008fe304(local_6f0,param_2,&local_720,&local_6d8,local_6e0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar15);
    FUN_00155a20(param_2,psVar19,2);
    uVar12 = local_6e0;
    if (*(long *)(lVar15 + 0x98) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar12,"class_check");
    }
    uVar12 = local_6e0;
    if (*(long *)(lVar15 + 0xa0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar12,"class_cast");
    }
    uVar12 = local_6e0;
    uVar21 = *(undefined8 *)(lVar15 + 0x78);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar15);
    FUN_00151810(param_2,lVar26);
    FUN_001516f0(param_2,uVar21,3);
    FUN_00152550(param_2,uVar12,&DAT_03955ac7);
    uVar12 = local_6e0;
    uVar21 = *(undefined8 *)(lVar15 + 0x80);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar15);
    FUN_00151810(param_2,lVar26);
    FUN_001516f0(param_2,uVar21,3);
    FUN_00152550(param_2,uVar12,&DAT_0397c077);
    if (*(char *)(lVar15 + 0x58) == '\0') {
      local_720 = (undefined1 *)CONCAT44(local_720._4_4_,1);
      FUN_008fe304(local_6f0,param_2,&local_720,&local_6e8,local_6e0);
    }
    else {
      local_6f0[0] = 1;
      local_720 = &LAB_023af1e0;
      uStack_718 = 0;
      local_710 = lVar15;
      lStack_708 = lVar26;
      FUN_023b0e24(param_2,local_6f0,&local_720,local_6e0);
      local_6f0[0] = 2;
      local_720 = &LAB_023af1e4;
      uStack_718 = 0;
      local_710 = lVar15;
      lStack_708 = lVar26;
      FUN_023b0e24(param_2,local_6f0,&local_720,local_6e0);
    }
    FUN_00151fe0(param_2,0,3);
    uVar12 = FUN_0014feb0(param_2,0xffffffff);
    local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
    FUN_008fe304(local_6f0,param_2,&local_720,&local_6d8,uVar12);
    if (*(undefined1 **)(lVar15 + 0x70) == (undefined1 *)0x0) {
      if (*(char *)(lVar15 + 0xa8) == '\0') goto LAB_023ab7cc;
LAB_023aba70:
      local_6f0[0] = 1;
      local_720 = &LAB_023af1e0;
      uStack_718 = 0;
      local_710 = lVar15;
      lStack_708 = lVar26;
      FUN_023b0e24(param_2,local_6f0,&local_720,uVar12);
      local_6f0[0] = 2;
      local_720 = &LAB_023af1e4;
      uStack_718 = 0;
      local_710 = lVar15;
      lStack_708 = lVar26;
      FUN_023b0e24(param_2,local_6f0,&local_720,uVar12);
      if (param_2 == 0) goto LAB_023abad0;
LAB_023ab7d4:
      uVar14 = local_6e0;
      FUN_00150260(param_2,uVar12);
    }
    else {
      local_6f0[0] = 4;
      uStack_718 = 0;
      local_720 = *(undefined1 **)(lVar15 + 0x70);
      local_710 = lVar15;
      lStack_708 = lVar26;
      FUN_023b0e24(param_2,local_6f0,&local_720,uVar12);
      if (*(char *)(lVar15 + 0xa8) != '\0') goto LAB_023aba70;
LAB_023ab7cc:
      if (param_2 != 0) goto LAB_023ab7d4;
LAB_023abad0:
      uVar14 = local_6e0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar14);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_6e8,0xfffffffe);
    lVar31 = lVar31 + 1;
    if (lVar31 == 3) {
      FUN_023ad568();
      puVar5 = DAT_043e2fb0;
      if ((DAT_043e2fa0 & 1) == 0) {
        puVar5 = &DAT_043e2fa1;
      }
      FUN_00154450(param_2,puVar5);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_720._0_4_ = 0x1e;
      FUN_008fe304(&local_6e8,param_2,&local_720,&local_6d8,uVar12);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar15);
      FUN_00155a20(param_2,local_288,2);
      FUN_00151fe0(param_2,0,3);
      uVar14 = FUN_0014feb0(param_2,0xffffffff);
      local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
      FUN_008fe304(&local_6e8,param_2,&local_720,&local_6d8,uVar14);
      local_720 = *(undefined1 **)(lVar15 + 0x70);
      if (local_720 != (undefined1 *)0x0) {
        local_6e8 = CONCAT44(local_6e8._4_4_,4);
        uStack_718 = 0;
        local_710 = lVar15;
        lStack_708 = lVar26;
        FUN_023b0e24(param_2,&local_6e8,&local_720,uVar14);
      }
      local_6e8._0_4_ = 1;
      local_720 = &LAB_023af1e8;
      uStack_718 = 0;
      local_700 = 0;
      puStack_6f8 = &DAT_03a7d520;
      local_710 = lVar15;
      lStack_708 = lVar26;
      FUN_023b14d8(param_2,&local_6e8,&local_720,uVar14);
      local_6e8 = CONCAT44(local_6e8._4_4_,2);
      local_720 = &LAB_023af1ec;
      uStack_718 = 0;
      local_700 = 0;
      puStack_6f8 = &DAT_03a7d520;
      local_710 = lVar15;
      lStack_708 = lVar26;
      FUN_023b14d8(param_2,&local_6e8,&local_720,uVar14);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar14);
      }
      FUN_00152ae0(param_2,uVar12);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_6d0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


