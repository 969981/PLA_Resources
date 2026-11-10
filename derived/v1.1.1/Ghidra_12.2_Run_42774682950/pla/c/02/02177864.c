/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02177864; name: FUN_02177864
 */


undefined8 FUN_02177864(long param_1,long param_2)

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
  undefined1 *local_7b0;
  undefined8 uStack_7a8;
  long local_7a0;
  long lStack_798;
  undefined8 local_790;
  undefined *puStack_788;
  long local_780;
  undefined4 local_778;
  long local_770;
  undefined4 local_768 [2];
  string asStack_760 [576];
  undefined8 auStack_520 [2];
  string local_510;
  undefined1 auStack_50f [7];
  size_t local_508;
  undefined1 *local_500;
  char *apcStack_2d0 [2];
  char *local_2c0;
  code *local_2b8;
  long local_2b0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043dbed8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dbed8), iVar8 != 0)) {
    local_2b0 = 0;
    local_2b8 = (code *)0x0;
    local_2c0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385250 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04385250);
      puVar2 = PTR_DAT_04385258;
      if (iVar8 != 0) {
        FUN_0217b7d0(PTR_DAT_04385258);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385250);
      }
    }
    pcVar25 = (char *)FUN_0217abe4(&local_2c0,PTR_DAT_04385258);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043dbec0,psVar16);
    lVar12 = local_2b0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2c0 & 1) != 0) && (local_2b0 != 0)) {
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
          goto LAB_02178b38;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_02178b38:
    FUN_00100250(PTR__string_04379718,&DAT_043dbec0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dbed8);
  }
  std::string::string(&local_510,(string *)&DAT_043dbec0);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043dbeb8);
  sVar1 = (ulong)((byte)local_510 >> 1);
  if (((byte)local_510 & 1) != 0) {
    sVar1 = local_508;
  }
  std::string::append((ulong)&local_510,(char)iVar8);
  if (((byte)local_510 & 1) == 0) {
    puVar26 = auStack_50f;
    local_508 = (size_t)((byte)local_510 >> 1);
  }
  else {
    puVar26 = local_500;
  }
  snprintf(puVar26 + (sVar1 - 1),local_508,"%d",(ulong)DAT_043dbeb8);
  DAT_043dbeb8 = DAT_043dbeb8 + 1;
  if (((DAT_043dbef8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dbef8), iVar8 != 0)) {
    local_2b0 = 0;
    local_2b8 = (code *)0x0;
    local_2c0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385250 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04385250);
      puVar2 = PTR_DAT_04385258;
      if (iVar8 != 0) {
        FUN_0217b7d0(PTR_DAT_04385258);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385250);
      }
    }
    pcVar25 = (char *)FUN_0217abe4(&local_2c0,PTR_DAT_04385258);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043dbee0,psVar16);
    lVar12 = local_2b0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2c0 & 1) != 0) && (local_2b0 != 0)) {
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
          goto LAB_02178c8c;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_02178c8c:
    FUN_00100250(PTR__string_04379718,&DAT_043dbee0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dbef8);
  }
  puVar2 = DAT_043dbef0;
  if ((DAT_043dbee0 & 1) == 0) {
    puVar2 = &DAT_043dbee1;
  }
  if (((byte)local_510 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_510 | 1);
  }
  else {
    puVar26 = local_500;
  }
  if (((DAT_043dbf08 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dbf08), iVar8 != 0)) {
    DAT_043dbf00 = 0xf8;
    __cxa_guard_release(&DAT_043dbf08);
  }
  if (((DAT_043dbf18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043dbf18), iVar8 != 0)) {
    DAT_043dbf10 = 0xff;
    __cxa_guard_release(&DAT_043dbf18);
  }
  uVar21 = DAT_043dbf00;
  lVar12 = FUN_00153520(param_2,DAT_043dbf00);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xf8)) ||
     (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043dbf10;
    lVar12 = FUN_00153520(param_2,DAT_043dbf10);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xf8)) ||
       (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0217c910();
      puVar3 = DAT_043dbf30;
      if ((DAT_043dbf20 & 1) == 0) {
        puVar3 = &DAT_043dbf21;
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
  *puVar17 = &PTR_FUN_0425b628;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x98);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_0217c8d0,0);
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
  if ((((byte)local_510 & 1) != 0) && (local_500 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar24,local_500,0,8);
        goto LAB_02177bd0;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_500,0,8);
  }
LAB_02177bd0:
  memset(&local_2c0,0,0x250);
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
  pcVar19 = FUN_0217bd80;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_0217bbb4;
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
            *(code **)(lVar12 + 0xa8) = pcVar19;
            goto LAB_02177de8;
          }
          *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_02177de8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_2c0 = pcVar25;
  local_2b8 = pcVar19;
LAB_02177de8:
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
  pcVar19 = (code *)&LAB_0217bfb4;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_0217bec8;
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
            *(code **)(lVar12 + 0xa8) = pcVar19;
            goto LAB_02177f28;
          }
          *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_02177f28;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2c0)[uVar23 * 2] = pcVar25;
  (&local_2b8)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02177f28:
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
  pcVar19 = FUN_0217c384;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_0217c0d0;
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
            *(code **)(lVar12 + 0xa8) = pcVar19;
            goto LAB_02178068;
          }
          *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_02178068;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2c0)[uVar23 * 2] = pcVar25;
  (&local_2b8)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02178068:
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
  pcVar19 = (code *)&LAB_0217c584;
  if (uVar10 != 0) {
    pcVar19 = FUN_0217c3f4;
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
            *(code **)(lVar12 + 0xa8) = pcVar19;
            goto LAB_021781a8;
          }
          *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_021781a8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2c0)[uVar23 * 2] = pcVar25;
  (&local_2b8)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_021781a8:
  pcVar25 = *(char **)(lVar12 + 0xa0);
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
  pcVar19 = FUN_0217c654;
  if (uVar10 != 0) {
    pcVar19 = FUN_0217c5f4;
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
        *(code **)(lVar12 + 0xa8) = pcVar19;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
        goto joined_r0x0217828c;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
      goto joined_r0x0217828c;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2c0)[uVar23 * 2] = pcVar25;
  (&local_2b8)[uVar23 * 2] = pcVar19;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x0217828c:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
  }
  uVar21 = uVar23;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_2c0)[uVar23 * 2] = pcVar25;
    (&local_2b8)[uVar23 * 2] = (code *)PTR_LAB_04385240;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
  }
  uVar23 = uVar21;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    uVar23 = (ulong)((int)uVar21 + 1);
    (&local_2c0)[uVar21 * 2] = pcVar25;
    (&local_2b8)[uVar21 * 2] = (code *)PTR_LAB_04385248;
  }
  uVar21 = uVar23;
  if (*(long *)(lVar12 + 0xa8) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar12 + 0xa8);
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_2c0)[uVar23 * 2] = pcVar25;
    (&local_2b8)[uVar23 * 2] = pcVar19;
  }
  (&local_2c0)[uVar21 * 2] = (char *)0x0;
  (&local_2b8)[uVar21 * 2] = (code *)0x0;
  memcpy(&local_510,&local_2c0,0x250);
  memcpy(asStack_760,&local_2c0,0x250);
  lVar27 = FUN_008cca50();
  lVar14 = uVar21 - 1;
  pcVar25 = (&local_2c0)[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar1 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_520[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_50f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_760 + lVar14 * 0x10) = (&local_2c0)[lVar14 * 2];
  *(undefined1 **)(asStack_760 + (lVar14 * 2 + 1) * 8) = &LAB_0217c6c0;
  FUN_00151fe0(param_2,0,2);
  local_768[0] = FUN_0014feb0(param_2,0xffffffff);
  local_770 = param_2;
  if ((*PTR_DAT_04385250 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04385250);
    puVar2 = PTR_DAT_04385258;
    if (iVar8 != 0) {
      FUN_0217b7d0(PTR_DAT_04385258);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04385250);
    }
  }
  uVar9 = local_768[0];
  uVar21 = *(ulong *)(PTR_DAT_04385258 + 8);
  puVar2 = *(undefined **)(PTR_DAT_04385258 + 0x10);
  if ((*PTR_DAT_04385258 & 1) == 0) {
    puVar2 = PTR_DAT_04385258 + 1;
    uVar21 = (ulong)((byte)*PTR_DAT_04385258 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0217c710,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar16 = asStack_760;
      pbVar15 = (byte *)FUN_02179f90();
    }
    else if (lVar27 == 0) {
      psVar16 = &local_510;
      pbVar15 = (byte *)FUN_02179db0();
    }
    else {
      psVar16 = (string *)&local_2c0;
      pbVar15 = (byte *)FUN_0217a170();
    }
    pbVar20 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar20 = pbVar15 + 1;
    }
    FUN_00154450(param_2,pbVar20);
    local_778 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    local_780 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_7b0,&local_770,local_778);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar16,2);
    uVar9 = local_778;
    if (*(long *)(lVar12 + 0xd8) == 0) {
      lVar14 = *(long *)(lVar12 + 0xe0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0xe0);
      uVar9 = local_778;
    }
    local_778 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_778;
    uVar18 = *(undefined8 *)(lVar12 + 0xb8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_778;
    uVar18 = *(undefined8 *)(lVar12 + 0xc0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_7b0,&local_780,local_778);
    }
    else {
      local_7b0 = &LAB_0217c800;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_0217c760(param_2,1,&local_7b0,local_778);
      local_7b0 = &LAB_0217c804;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_0217c760(param_2,2,&local_7b0,local_778);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_7b0,&local_770,uVar9);
    if (*(undefined1 **)(lVar12 + 0xb0) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0xe8) != '\0') goto LAB_02178910;
LAB_02178624:
      if (param_2 == 0) goto LAB_02178960;
LAB_0217862c:
      uVar11 = local_778;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_7a8 = 0;
      local_7b0 = *(undefined1 **)(lVar12 + 0xb0);
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_0217c760(param_2,4,&local_7b0,uVar9);
      if (*(char *)(lVar12 + 0xe8) == '\0') goto LAB_02178624;
LAB_02178910:
      local_7b0 = &LAB_0217c800;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_0217c760(param_2,1,&local_7b0,uVar9);
      local_7b0 = &LAB_0217c804;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_0217c760(param_2,2,&local_7b0,uVar9);
      if (param_2 != 0) goto LAB_0217862c;
LAB_02178960:
      uVar11 = local_778;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_780,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_0217a3a8();
      puVar2 = DAT_043dbe90;
      if ((DAT_043dbe80 & 1) == 0) {
        puVar2 = &DAT_043dbe81;
      }
      FUN_00154450(param_2,puVar2);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_780,param_2,&local_7b0,&local_770,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2c0,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_780,param_2,&local_7b0,&local_770,uVar11);
      local_7b0 = *(undefined1 **)(lVar12 + 0xb0);
      if (local_7b0 != (undefined1 *)0x0) {
        uStack_7a8 = 0;
        local_7a0 = lVar12;
        lStack_798 = lVar22;
        FUN_0217c760(param_2,4,&local_7b0,uVar11);
      }
      local_7b0 = &LAB_0217c8c8;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7d370;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_0217c810(param_2,1,&local_7b0,uVar11);
      local_7b0 = &LAB_0217c8cc;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7d370;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_0217c810(param_2,2,&local_7b0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_768[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


