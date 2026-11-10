/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02508e38; name: FUN_02508e38
 */


undefined8 FUN_02508e38(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char cVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  byte *pbVar16;
  string *psVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_a80;
  undefined8 uStack_a78;
  long local_a70;
  long lStack_a68;
  undefined8 local_a60;
  undefined *puStack_a58;
  long local_a50;
  undefined4 local_a48;
  long local_a40;
  undefined4 local_a38 [2];
  string asStack_a30 [816];
  undefined8 auStack_700 [2];
  string local_6f0;
  undefined1 auStack_6ef [7];
  size_t local_6e8;
  undefined1 *local_6e0;
  char *apcStack_3c0 [2];
  char *local_3b0;
  code *local_3a8;
  long local_3a0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043e89e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e89e8), iVar9 != 0)) {
    local_3a0 = 0;
    local_3a8 = (code *)0x0;
    local_3b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04387858 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04387858);
      puVar2 = PTR_DAT_04387860;
      if (iVar9 != 0) {
        FUN_0250d9b0(PTR_DAT_04387860);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04387858);
      }
    }
    pcVar26 = (char *)FUN_0250cdbc(&local_3b0,PTR_DAT_04387860);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e89d0,psVar17);
    lVar13 = local_3a0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3b0 & 1) != 0) && (local_3a0 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar7;
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
          FUN_02bcc824(plVar25,lVar13,0,8);
          goto LAB_0250ac34;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0250ac34:
    FUN_00100250(PTR__string_04379718,&DAT_043e89d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e89e8);
  }
  std::string::string(&local_6f0,(string *)&DAT_043e89d0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e89c8);
  sVar1 = (ulong)((byte)local_6f0 >> 1);
  if (((byte)local_6f0 & 1) != 0) {
    sVar1 = local_6e8;
  }
  std::string::append((ulong)&local_6f0,(char)iVar9);
  if (((byte)local_6f0 & 1) == 0) {
    puVar27 = auStack_6ef;
    local_6e8 = (size_t)((byte)local_6f0 >> 1);
  }
  else {
    puVar27 = local_6e0;
  }
  snprintf(puVar27 + (sVar1 - 1),local_6e8,"%d",(ulong)DAT_043e89c8);
  DAT_043e89c8 = DAT_043e89c8 + 1;
  if (((DAT_043e8a08 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8a08), iVar9 != 0)) {
    local_3a0 = 0;
    local_3a8 = (code *)0x0;
    local_3b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04387858 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04387858);
      puVar2 = PTR_DAT_04387860;
      if (iVar9 != 0) {
        FUN_0250d9b0(PTR_DAT_04387860);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04387858);
      }
    }
    pcVar26 = (char *)FUN_0250cdbc(&local_3b0,PTR_DAT_04387860);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e89f0,psVar17);
    lVar13 = local_3a0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3b0 & 1) != 0) && (local_3a0 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar7;
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
          FUN_02bcc824(plVar25,lVar13,0,8);
          goto LAB_0250ad88;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0250ad88:
    FUN_00100250(PTR__string_04379718,&DAT_043e89f0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8a08);
  }
  puVar2 = DAT_043e8a00;
  if ((DAT_043e89f0 & 1) == 0) {
    puVar2 = &DAT_043e89f1;
  }
  if (((byte)local_6f0 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_6f0 | 1);
  }
  else {
    puVar27 = local_6e0;
  }
  if (((DAT_043e8a18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8a18), iVar9 != 0)) {
    DAT_043e8a10 = 0x1d0;
    __cxa_guard_release(&DAT_043e8a18);
  }
  if (((DAT_043e8a28 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8a28), iVar9 != 0)) {
    DAT_043e8a20 = 0x1d7;
    __cxa_guard_release(&DAT_043e8a28);
  }
  uVar22 = DAT_043e8a10;
  lVar13 = FUN_00153520(param_2,DAT_043e8a10);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1d0)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e8a20;
    lVar13 = FUN_00153520(param_2,DAT_043e8a20);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1d0)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_025122a0();
      puVar3 = DAT_043e8a40;
      if ((DAT_043e8a30 & 1) == 0) {
        puVar3 = &DAT_043e8a31;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar13;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar13 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar6 = 0;
      if (uVar24 != 0) {
        uVar6 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar6 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar4;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425c428;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x170);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_02512260,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar10 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar10);
  }
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_6f0 & 1) != 0) && (local_6e0 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar7;
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
        FUN_02bcc824(plVar25,local_6e0,0,8);
        goto LAB_025091a4;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_6e0,0,8);
  }
LAB_025091a4:
  memset(&local_3b0,0,0x340);
  pcVar26 = *(char **)(lVar13 + 0xb0);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar23 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0250e710;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0250e544;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_025093bc;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_025093bc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_3b0 = pcVar26;
  local_3a8 = pcVar20;
LAB_025093bc:
  pcVar26 = *(char **)(lVar13 + 0xb8);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0250ec90;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0250e768;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_025094fc;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_025094fc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_025094fc:
  pcVar26 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0250edf4;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0250ece8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_0250963c;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_0250963c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0250963c:
  pcVar26 = *(char **)(lVar13 + 0xe8);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0250f2dc;
  if (uVar11 != 0) {
    pcVar20 = FUN_0250f0fc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_0250977c;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_0250977c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0250977c:
  pcVar26 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0250f37c;
  if (uVar11 != 0) {
    pcVar20 = FUN_0250f334;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_025098bc;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_025098bc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_025098bc:
  pcVar26 = *(char **)(lVar13 + 0x108);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_0250f55c;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0250f3c4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_025099fc;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_025099fc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_025099fc:
  pcVar26 = *(char **)(lVar13 + 0x110);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0250f5e8;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0250f5a0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_02509b3c;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_02509b3c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02509b3c:
  pcVar26 = *(char **)(lVar13 + 0x128);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0250f80c;
  if (uVar11 != 0) {
    pcVar20 = FUN_0250f630;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_02509c7c;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_02509c7c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02509c7c:
  pcVar26 = *(char **)(lVar13 + 0x130);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0250f8ac;
  if (uVar11 != 0) {
    pcVar20 = FUN_0250f864;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_02509dbc;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_02509dbc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02509dbc:
  pcVar26 = *(char **)(lVar13 + 0x148);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_0250fa8c;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0250f8f4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_02509efc;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_02509efc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02509efc:
  pcVar26 = *(char **)(lVar13 + 0x150);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0250fcac;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0250fad0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_0250a03c;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_0250a03c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0250a03c:
  pcVar26 = *(char **)(lVar13 + 0x158);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0250fe24;
  if (uVar11 != 0) {
    pcVar20 = FUN_0250fd04;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_0250a17c;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_0250a17c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0250a17c:
  pcVar26 = *(char **)(lVar13 + 0x170);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_02511b34;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0250ff78;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x180) = pcVar20;
            goto LAB_0250a28c;
          }
          *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_0250a28c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_3b0)[uVar24 * 2] = pcVar26;
  (&local_3a8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0250a28c:
  pcVar26 = *(char **)(lVar13 + 0x178);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_02511d68;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02511d34;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) break;
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar22 == 0x20) {
LAB_0250a978:
      (&local_3b0)[uVar24 * 2] = pcVar26;
      (&local_3a8)[uVar24 * 2] = pcVar20;
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c8);
      uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x0250a370:
      if ((uVar11 >> 0x11 & 1) == 0) {
LAB_0250a374:
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c8);
      }
LAB_0250a37c:
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c8);
      }
      uVar22 = uVar24;
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x181);
        if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 400);
        }
        uVar22 = (ulong)((int)uVar24 + 1);
        (&local_3b0)[uVar24 * 2] = pcVar26;
        (&local_3a8)[uVar24 * 2] = (code *)PTR_LAB_04387848;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c8);
      }
      uVar24 = uVar22;
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x289);
        if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x298);
        }
        uVar24 = (ulong)((int)uVar22 + 1);
        (&local_3b0)[uVar22 * 2] = pcVar26;
        (&local_3a8)[uVar22 * 2] = (code *)PTR_LAB_04387850;
      }
      uVar22 = uVar24;
      if (*(long *)(lVar13 + 0x180) != 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x1c9);
        if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x1d8);
        }
        pcVar20 = *(code **)(lVar13 + 0x180);
        uVar22 = (ulong)((int)uVar24 + 1);
        (&local_3b0)[uVar24 * 2] = pcVar26;
        (&local_3a8)[uVar24 * 2] = pcVar20;
      }
      (&local_3b0)[uVar22 * 2] = (char *)0x0;
      (&local_3a8)[uVar22 * 2] = (code *)0x0;
      memcpy(&local_6f0,&local_3b0,0x340);
      memcpy(asStack_a30,&local_3b0,0x340);
      lVar28 = FUN_008cca50();
      lVar15 = uVar22 - 1;
      pcVar26 = (&local_3b0)[lVar15 * 2];
      sVar14 = strlen(pcVar26);
      sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar14 == sVar1) &&
         (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
         iVar9 == 0)) {
        auStack_700[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_6ef + lVar15 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_a30 + lVar15 * 0x10) = (&local_3b0)[lVar15 * 2];
      *(undefined1 **)(asStack_a30 + (lVar15 * 2 + 1) * 8) = &LAB_02511da0;
      FUN_00151fe0(param_2,0,2);
      local_a38[0] = FUN_0014feb0(param_2,0xffffffff);
      local_a40 = param_2;
      if ((*PTR_DAT_04387858 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_04387858);
        puVar2 = PTR_DAT_04387860;
        if (iVar9 != 0) {
          FUN_0250d9b0(PTR_DAT_04387860);
          FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04387858);
        }
      }
      uVar10 = local_a38[0];
      uVar22 = *(ulong *)(PTR_DAT_04387860 + 8);
      puVar2 = *(undefined **)(PTR_DAT_04387860 + 0x10);
      if ((*PTR_DAT_04387860 & 1) == 0) {
        puVar2 = PTR_DAT_04387860 + 1;
        uVar22 = (ulong)((byte)*PTR_DAT_04387860 >> 1);
      }
      FUN_001514f0(param_2,puVar2,uVar22);
      FUN_00152550(param_2,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_02510560,0);
      FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar17 = asStack_a30;
          pbVar16 = (byte *)FUN_0250c164();
        }
        else if (lVar28 == 0) {
          psVar17 = &local_6f0;
          pbVar16 = (byte *)FUN_0250bf84();
        }
        else {
          psVar17 = (string *)&local_3b0;
          pbVar16 = (byte *)FUN_0250c344();
        }
        pbVar21 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar21 = pbVar16 + 1;
        }
        FUN_00154450(param_2,pbVar21);
        local_a48 = FUN_0014feb0(param_2,0xffffffff);
        local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
        local_a50 = param_2;
        FUN_008fe304(auStack_70,param_2,&local_a80,&local_a40,local_a48);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00155a20(param_2,psVar17,2);
        uVar10 = local_a48;
        if (*(long *)(lVar13 + 0x1b0) == 0) {
          lVar15 = *(long *)(lVar13 + 0x1b8);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_check");
          lVar15 = *(long *)(lVar13 + 0x1b8);
          uVar10 = local_a48;
        }
        local_a48 = uVar10;
        if (lVar15 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_cast");
        }
        uVar10 = local_a48;
        uVar19 = *(undefined8 *)(lVar13 + 400);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_03955ac7);
        uVar10 = local_a48;
        uVar19 = *(undefined8 *)(lVar13 + 0x198);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,1);
          FUN_008fe304(auStack_70,param_2,&local_a80,&local_a50,local_a48);
        }
        else {
          local_a80 = &LAB_02511e90;
          uStack_a78 = 0;
          local_a70 = lVar13;
          lStack_a68 = lVar23;
          FUN_02511df0(param_2,1,&local_a80,local_a48);
          local_a80 = &LAB_0251219c;
          uStack_a78 = 0;
          local_a70 = lVar13;
          lStack_a68 = lVar23;
          FUN_02511df0(param_2,2,&local_a80,local_a48);
        }
        FUN_00151fe0(param_2,0,3);
        uVar10 = FUN_0014feb0(param_2,0xffffffff);
        local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_2,&local_a80,&local_a40,uVar10);
        if (*(undefined1 **)(lVar13 + 0x188) == (undefined1 *)0x0) {
          cVar5 = *(char *)(lVar13 + 0x1c0);
        }
        else {
          uStack_a78 = 0;
          local_a80 = *(undefined1 **)(lVar13 + 0x188);
          local_a70 = lVar13;
          lStack_a68 = lVar23;
          FUN_02511df0(param_2,4,&local_a80,uVar10);
          cVar5 = *(char *)(lVar13 + 0x1c0);
        }
        if (cVar5 != '\0') {
          local_a80 = &LAB_02511e90;
          uStack_a78 = 0;
          local_a70 = lVar13;
          lStack_a68 = lVar23;
          FUN_02511df0(param_2,1,&local_a80,uVar10);
          local_a80 = &LAB_0251219c;
          uStack_a78 = 0;
          local_a70 = lVar13;
          lStack_a68 = lVar23;
          FUN_02511df0(param_2,2,&local_a80,uVar10);
        }
        uVar12 = local_a48;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar10);
        }
        FUN_00152ae0(param_2,uVar12);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_a50,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_0250c57c();
      puVar2 = DAT_043e88e8;
      if ((DAT_043e88d8 & 1) == 0) {
        puVar2 = &DAT_043e88d9;
      }
      FUN_00154450(param_2,puVar2);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_a80._0_4_ = 0x1e;
      FUN_008fe304(&local_a50,param_2,&local_a80,&local_a40,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_3b0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
      FUN_008fe304(&local_a50,param_2,&local_a80,&local_a40,uVar12);
      local_a80 = *(undefined1 **)(lVar13 + 0x188);
      if (local_a80 != (undefined1 *)0x0) {
        uStack_a78 = 0;
        local_a70 = lVar13;
        lStack_a68 = lVar23;
        FUN_02511df0(param_2,4,&local_a80,uVar12);
      }
      local_a80 = &LAB_02512258;
      uStack_a78 = 0;
      local_a60 = 0;
      puStack_a58 = &DAT_03a7d5d0;
      local_a70 = lVar13;
      lStack_a68 = lVar23;
      FUN_025121a0(param_2,1,&local_a80,uVar12);
      local_a80 = &LAB_0251225c;
      uStack_a78 = 0;
      local_a60 = 0;
      puStack_a58 = &DAT_03a7d5d0;
      local_a70 = lVar13;
      lStack_a68 = lVar23;
      FUN_025121a0(param_2,2,&local_a80,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_a38[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar9 = (int)uVar22;
  if (iVar9 == 0x13) {
    *(code **)(lVar13 + 0x180) = pcVar20;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c8);
    goto joined_r0x0250a370;
  }
  if (iVar9 == 1) {
    *(code **)(lVar13 + 0x30) = pcVar20;
  }
  else {
    if (iVar9 != 2) {
      *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
      goto LAB_0250a978;
    }
    *(code **)(lVar13 + 0x38) = pcVar20;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0x1c8) = *(ulong *)(lVar13 + 0x1c8) | 1L << (uVar22 & 0x3f);
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1c8);
  if ((uVar11 >> 0x11 & 1) == 0) goto LAB_0250a374;
  goto LAB_0250a37c;
}


