/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0230d0c4; name: FUN_0230d0c4
 */


undefined8 FUN_0230d0c4(long param_1,long param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  byte *pbVar13;
  string *psVar14;
  undefined *puVar15;
  undefined1 *puVar16;
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
  ulong uVar28;
  undefined8 uVar29;
  undefined1 *local_8d0;
  undefined8 uStack_8c8;
  long local_8c0;
  long lStack_8b8;
  undefined8 local_8b0;
  undefined *puStack_8a8;
  undefined4 local_8a0 [2];
  long local_898;
  undefined4 local_890;
  long local_888;
  undefined4 local_880 [2];
  string asStack_878 [672];
  undefined8 auStack_5d8 [2];
  string local_5c8;
  undefined1 auStack_5c7 [7];
  size_t local_5c0;
  undefined1 *local_5b8;
  char *apcStack_328 [2];
  char *local_318;
  code *local_310;
  long local_308;
  
  if (((DAT_043e1798 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043e1798), iVar6 != 0)) {
    local_308 = 0;
    local_310 = (code *)0x0;
    local_318 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385438 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04385438);
      puVar15 = PTR_DAT_04385440;
      if (iVar6 != 0) {
        FUN_021969b0(PTR_DAT_04385440);
        FUN_00100250(PTR__string_04379718,puVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385438);
      }
    }
    pcVar25 = (char *)FUN_02310594(&local_318,PTR_DAT_04385440);
    psVar14 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043e1780,psVar14);
    lVar10 = local_308;
    plVar4 = DAT_043f1798;
    if ((((ulong)local_318 & 1) != 0) && (local_308 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar4;
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
          FUN_02bcc824(plVar24,lVar10,0,8);
          goto LAB_0230ea68;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar10,0,8);
    }
LAB_0230ea68:
    FUN_00100250(PTR__string_04379718,&DAT_043e1780,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1798);
  }
  std::string::string(&local_5c8,(string *)&DAT_043e1780);
  iVar6 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e1778);
  sVar1 = (ulong)((byte)local_5c8 >> 1);
  if (((byte)local_5c8 & 1) != 0) {
    sVar1 = local_5c0;
  }
  std::string::append((ulong)&local_5c8,(char)iVar6);
  if (((byte)local_5c8 & 1) == 0) {
    puVar26 = auStack_5c7;
    local_5c0 = (size_t)((byte)local_5c8 >> 1);
  }
  else {
    puVar26 = local_5b8;
  }
  snprintf(puVar26 + (sVar1 - 1),local_5c0,"%d",(ulong)DAT_043e1778);
  DAT_043e1778 = DAT_043e1778 + 1;
  if (((DAT_043e17b8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043e17b8), iVar6 != 0)) {
    local_308 = 0;
    local_310 = (code *)0x0;
    local_318 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385438 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04385438);
      puVar15 = PTR_DAT_04385440;
      if (iVar6 != 0) {
        FUN_021969b0(PTR_DAT_04385440);
        FUN_00100250(PTR__string_04379718,puVar15,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385438);
      }
    }
    pcVar25 = (char *)FUN_02310594(&local_318,PTR_DAT_04385440);
    psVar14 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043e17a0,psVar14);
    lVar10 = local_308;
    plVar4 = DAT_043f1798;
    if ((((ulong)local_318 & 1) != 0) && (local_308 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar4;
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
          FUN_02bcc824(plVar24,lVar10,0,8);
          goto LAB_0230ebbc;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar10,0,8);
    }
LAB_0230ebbc:
    FUN_00100250(PTR__string_04379718,&DAT_043e17a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e17b8);
  }
  if ((DAT_043e17a0 & 1) == 0) {
    uVar29 = 0x43e17a1;
    if (((byte)local_5c8 & 1) == 0) goto LAB_0230d594;
LAB_0230d1b4:
    puVar26 = local_5b8;
  }
  else {
    uVar29 = DAT_043e17b0;
    if (((byte)local_5c8 & 1) != 0) goto LAB_0230d1b4;
LAB_0230d594:
    puVar26 = (undefined1 *)((ulong)&local_5c8 | 1);
  }
  if (((DAT_043e17c8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043e17c8), iVar6 != 0)) {
    DAT_043e17c0 = 400;
    __cxa_guard_release(&DAT_043e17c8);
  }
  if (((DAT_043e17d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043e17d8), iVar6 != 0)) {
    DAT_043e17d0 = 0x197;
    __cxa_guard_release(&DAT_043e17d8);
  }
  uVar21 = DAT_043e17c0;
  lVar10 = FUN_00153520(param_2,DAT_043e17c0);
  if ((uVar21 < ((ulong)(uint)-(int)lVar10 & 7 | 400)) ||
     (puVar17 = (undefined8 *)(lVar10 + ((ulong)(uint)-(int)lVar10 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043e17d0;
    lVar10 = FUN_00153520(param_2,DAT_043e17d0);
    if ((uVar21 < ((ulong)(uint)-(int)lVar10 & 7 | 400)) ||
       (puVar17 = (undefined8 *)(lVar10 + ((ulong)(uint)-(int)lVar10 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_023119d0();
      if ((DAT_043e17e0 & 1) == 0) {
        puVar16 = &DAT_043e17e1;
      }
      else {
        puVar16 = DAT_043e17f0;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar16);
      puVar17 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar17[1] = uVar18;
  puVar17[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar10 = *(long *)(param_1 + 0x18);
  puVar17[3] = lVar10;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar17[4] = lVar22;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar17[2];
    uVar21 = *(ulong *)(lVar10 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar23 - 1 & uVar21;
    }
    else if (uVar23 <= uVar21) {
      uVar28 = 0;
      if (uVar23 != 0) {
        uVar28 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar28 * uVar23;
    }
    *(undefined8 **)(puVar17[1] + uVar21 * 8) = puVar17 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar18;
  puVar17[7] = uVar2;
  puVar17[8] = *(undefined8 *)(param_1 + 0x40);
  puVar17[9] = *(undefined8 *)(param_1 + 0x48);
  puVar17[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar17 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar17 = &PTR_FUN_0425bb78;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x130);
  iVar6 = FUN_00154450(param_2,puVar26);
  if (iVar6 != 0) {
    FUN_001516f0(param_2,&LAB_02311990,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar7 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar7);
  }
  FUN_001522a0(param_2,uVar29);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,uVar29);
  lVar10 = FUN_001511d0(param_2,0xffffffff);
  lVar10 = lVar10 + ((ulong)(uint)-(int)lVar10 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar4 = DAT_043f1798;
  if ((((byte)local_5c8 & 1) != 0) && (local_5b8 != (undefined1 *)0x0)) {
    lVar22 = tpidr_el0;
    plVar24 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar24 = plVar4;
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
        FUN_02bcc824(plVar24,local_5b8,0,8);
        goto LAB_0230d42c;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_5b8,0,8);
  }
LAB_0230d42c:
  memset(&local_318,0,0x2b0);
  puVar3 = PTR_DAT_043865d8;
  *(undefined1 *)(lVar10 + 0x58) = 1;
  puVar15 = PTR_DAT_043847e0;
  *puVar3 = 1;
  *puVar15 = 1;
  pcVar25 = *(char **)(lVar10 + 0x60);
  *(undefined1 **)(lVar10 + 0x170) = &LAB_02311e0c;
  *(undefined1 **)(lVar10 + 0x178) = &LAB_02311ec8;
  *(undefined1 **)(lVar10 + 0x160) = &LAB_02312020;
  *(undefined1 **)(lVar10 + 0x168) = &LAB_02312240;
  sVar11 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar11 < 0xb) {
    sVar1 = sVar11;
  }
  if (sVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  lVar22 = lVar10 + 8;
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02310a58;
  if (uVar8 != 0) {
    pcVar19 = FUN_0231090c;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar13 = (byte *)(lVar12 + lVar27);
    sVar11 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar13 >> 1);
    if ((*pbVar13 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if ((sVar11 == sVar1) &&
       (iVar6 = std::string::compare((ulong)pbVar13,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar6 == 0)) {
      iVar6 = (int)uVar21;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar19;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            uVar23 = 0;
            *(code **)(lVar10 + 0x140) = pcVar19;
            goto LAB_0230d694;
          }
          *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar19;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
      goto LAB_0230d694;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_318 = pcVar25;
  local_310 = pcVar19;
LAB_0230d694:
  pcVar25 = *(char **)(lVar10 + 0x78);
  sVar11 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar11 < 0xb) {
    sVar1 = sVar11;
  }
  if (sVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02310ccc;
  if (uVar8 != 0) {
    pcVar19 = FUN_02310ba4;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar13 = (byte *)(lVar12 + lVar27);
    sVar11 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar13 >> 1);
    if ((*pbVar13 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if ((sVar11 == sVar1) &&
       (iVar6 = std::string::compare((ulong)pbVar13,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar6 == 0)) {
      iVar6 = (int)uVar21;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar19;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0x140) = pcVar19;
            goto LAB_0230d7d4;
          }
          *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
      goto LAB_0230d7d4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_318)[uVar23 * 2] = pcVar25;
  (&local_310)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0230d7d4:
  pcVar25 = *(char **)(lVar10 + 0x90);
  sVar11 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar11 < 0xb) {
    sVar1 = sVar11;
  }
  if (sVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = (code *)&LAB_02310e2c;
  if (uVar8 != 0) {
    pcVar19 = (code *)&LAB_02310df4;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar13 = (byte *)(lVar12 + lVar27);
    sVar11 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar13 >> 1);
    if ((*pbVar13 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if ((sVar11 == sVar1) &&
       (iVar6 = std::string::compare((ulong)pbVar13,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar6 == 0)) {
      iVar6 = (int)uVar21;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar19;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0x140) = pcVar19;
            goto LAB_0230d914;
          }
          *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
      goto LAB_0230d914;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_318)[uVar23 * 2] = pcVar25;
  (&local_310)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0230d914:
  pcVar25 = *(char **)(lVar10 + 0xa8);
  sVar11 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar11 < 0xb) {
    sVar1 = sVar11;
  }
  if (sVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02310f98;
  if (uVar8 != 0) {
    pcVar19 = FUN_02310e74;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar13 = (byte *)(lVar12 + lVar27);
    sVar11 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar13 >> 1);
    if ((*pbVar13 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if ((sVar11 == sVar1) &&
       (iVar6 = std::string::compare((ulong)pbVar13,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar6 == 0)) {
      iVar6 = (int)uVar21;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar19;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0x140) = pcVar19;
            goto LAB_0230da54;
          }
          *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
      goto LAB_0230da54;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_318)[uVar23 * 2] = pcVar25;
  (&local_310)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0230da54:
  pcVar25 = *(char **)(lVar10 + 0xc0);
  sVar11 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar11 < 0xb) {
    sVar1 = sVar11;
  }
  if (sVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02311134;
  if (uVar8 != 0) {
    pcVar19 = FUN_023110ec;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar13 = (byte *)(lVar12 + lVar27);
    sVar11 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar13 >> 1);
    if ((*pbVar13 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if ((sVar11 == sVar1) &&
       (iVar6 = std::string::compare((ulong)pbVar13,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar6 == 0)) {
      iVar6 = (int)uVar21;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar19;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0x140) = pcVar19;
            goto LAB_0230db94;
          }
          *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
      goto LAB_0230db94;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_318)[uVar23 * 2] = pcVar25;
  (&local_310)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0230db94:
  pcVar25 = *(char **)(lVar10 + 0xd8);
  sVar11 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar11 < 0xb) {
    sVar1 = sVar11;
  }
  if (sVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_023111c4;
  if (uVar8 != 0) {
    pcVar19 = FUN_0231117c;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar13 = (byte *)(lVar12 + lVar27);
    sVar11 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar13 >> 1);
    if ((*pbVar13 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if ((sVar11 == sVar1) &&
       (iVar6 = std::string::compare((ulong)pbVar13,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar6 == 0)) {
      iVar6 = (int)uVar21;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar19;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0x140) = pcVar19;
            goto LAB_0230dcd4;
          }
          *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
      goto LAB_0230dcd4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_318)[uVar23 * 2] = pcVar25;
  (&local_310)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0230dcd4:
  pcVar25 = *(char **)(lVar10 + 0xf0);
  sVar11 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar11 < 0xb) {
    sVar1 = sVar11;
  }
  if (sVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02311254;
  if (uVar8 != 0) {
    pcVar19 = FUN_0231120c;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar13 = (byte *)(lVar12 + lVar27);
    sVar11 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar13 >> 1);
    if ((*pbVar13 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if ((sVar11 == sVar1) &&
       (iVar6 = std::string::compare((ulong)pbVar13,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar6 == 0)) {
      iVar6 = (int)uVar21;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar19;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0x140) = pcVar19;
            goto LAB_0230de14;
          }
          *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
      goto LAB_0230de14;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_318)[uVar23 * 2] = pcVar25;
  (&local_310)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0230de14:
  pcVar25 = *(char **)(lVar10 + 0x108);
  sVar11 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar11 < 0xb) {
    sVar1 = sVar11;
  }
  if (sVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_023113a4;
  if (uVar8 != 0) {
    pcVar19 = (code *)&LAB_0231129c;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar13 = (byte *)(lVar12 + lVar27);
    sVar11 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar13 >> 1);
    if ((*pbVar13 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if ((sVar11 == sVar1) &&
       (iVar6 = std::string::compare((ulong)pbVar13,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar6 == 0)) {
      iVar6 = (int)uVar21;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar19;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0x140) = pcVar19;
            goto LAB_0230df54;
          }
          *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
      goto LAB_0230df54;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_318)[uVar23 * 2] = pcVar25;
  (&local_310)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0230df54:
  pcVar25 = *(char **)(lVar10 + 0x120);
  sVar11 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar11 < 0xb) {
    sVar1 = sVar11;
  }
  if (sVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = (code *)&LAB_023114f4;
  if (uVar8 != 0) {
    pcVar19 = (code *)&LAB_023114bc;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar13 = (byte *)(lVar12 + lVar27);
    sVar11 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar13 >> 1);
    if ((*pbVar13 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if ((sVar11 == sVar1) &&
       (iVar6 = std::string::compare((ulong)pbVar13,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar6 == 0)) {
      iVar6 = (int)uVar21;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar19;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0x140) = pcVar19;
            goto LAB_0230e094;
          }
          *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
      goto LAB_0230e094;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_318)[uVar23 * 2] = pcVar25;
  (&local_310)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_0230e094:
  pcVar25 = *(char **)(lVar10 + 0x138);
  sVar11 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar11 < 0xb) {
    sVar1 = sVar11;
  }
  if (sVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = (code *)&LAB_02311594;
  if (uVar8 != 0) {
    pcVar19 = (code *)&LAB_0231153c;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar13 = (byte *)(lVar12 + lVar27);
    sVar11 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar13 >> 1);
    if ((*pbVar13 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar13 + 8);
    }
    if ((sVar11 == sVar1) &&
       (iVar6 = std::string::compare((ulong)pbVar13,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar6 == 0)) {
      iVar6 = (int)uVar21;
      uVar28 = uVar23;
      if (iVar6 == 0x13) {
        *(code **)(lVar10 + 0x140) = pcVar19;
        uVar8 = (uint)*(undefined8 *)(lVar10 + 0x188);
        goto joined_r0x0230e8dc;
      }
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar19;
      }
      else {
        if (iVar6 != 2) {
          *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x188) = *(ulong *)(lVar10 + 0x188) | 1L << (uVar21 & 0x3f);
      uVar8 = (uint)*(undefined8 *)(lVar10 + 0x188);
      goto joined_r0x0230e8dc;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar28 = (ulong)((int)uVar23 + 1);
  (&local_318)[uVar23 * 2] = pcVar25;
  (&local_310)[uVar23 * 2] = pcVar19;
  uVar8 = (uint)*(undefined8 *)(lVar10 + 0x188);
joined_r0x0230e8dc:
  if ((uVar8 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar8 = (uint)*(undefined8 *)(lVar10 + 0x188);
  }
  if ((uVar8 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar8 = (uint)*(undefined8 *)(lVar10 + 0x188);
  }
  uVar21 = uVar28;
  if ((uVar8 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    if ((*(byte *)(lVar27 + 0x180) & 1) == 0) {
      pcVar25 = (char *)(lVar27 + 0x181);
    }
    else {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    uVar21 = (ulong)((int)uVar28 + 1);
    (&local_318)[uVar28 * 2] = pcVar25;
    (&local_310)[uVar28 * 2] = (code *)PTR_LAB_04385410;
    uVar8 = (uint)*(undefined8 *)(lVar10 + 0x188);
  }
  uVar23 = uVar21;
  if ((uVar8 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    if ((*(byte *)(lVar27 + 0x288) & 1) == 0) {
      pcVar25 = (char *)(lVar27 + 0x289);
    }
    else {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    uVar23 = (ulong)((int)uVar21 + 1);
    (&local_318)[uVar21 * 2] = pcVar25;
    (&local_310)[uVar21 * 2] = (code *)PTR_LAB_04385418;
  }
  uVar21 = uVar23;
  if (*(long *)(lVar10 + 0x140) != 0) {
    lVar27 = FUN_008cca50();
    if ((*(byte *)(lVar27 + 0x1c8) & 1) == 0) {
      pcVar25 = (char *)(lVar27 + 0x1c9);
    }
    else {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar10 + 0x140);
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_318)[uVar23 * 2] = pcVar25;
    (&local_310)[uVar23 * 2] = pcVar19;
  }
  (&local_318)[uVar21 * 2] = (char *)0x0;
  (&local_310)[uVar21 * 2] = (code *)0x0;
  memcpy(&local_5c8,&local_318,0x2b0);
  memcpy(asStack_878,&local_318,0x2b0);
  lVar27 = FUN_008cca50();
  lVar12 = uVar21 - 1;
  pcVar25 = (&local_318)[lVar12 * 2];
  sVar11 = strlen(pcVar25);
  sVar1 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar11 == sVar1) &&
     (iVar6 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar6 == 0)) {
    auStack_5d8[lVar12 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5c7 + lVar12 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_878 + lVar12 * 0x10) = (&local_318)[lVar12 * 2];
  *(undefined1 **)(asStack_878 + (lVar12 * 2 + 1) * 8) = &LAB_023115d0;
  FUN_00151fe0(param_2,0,2);
  local_880[0] = FUN_0014feb0(param_2,0xffffffff);
  local_888 = param_2;
  if ((*PTR_DAT_04385438 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04385438);
    puVar15 = PTR_DAT_04385440;
    if (iVar6 != 0) {
      FUN_021969b0(PTR_DAT_04385440);
      FUN_00100250(PTR__string_04379718,puVar15,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04385438);
    }
  }
  uVar7 = local_880[0];
  uVar21 = *(ulong *)(PTR_DAT_04385440 + 8);
  puVar15 = *(undefined **)(PTR_DAT_04385440 + 0x10);
  if ((*PTR_DAT_04385440 & 1) == 0) {
    puVar15 = PTR_DAT_04385440 + 1;
    uVar21 = (ulong)((byte)*PTR_DAT_04385440 >> 1);
  }
  FUN_001514f0(param_2,puVar15,uVar21);
  FUN_00152550(param_2,uVar7,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_02311620,0);
  FUN_00152550(param_2,uVar7,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar14 = asStack_878;
      pbVar13 = (byte *)FUN_02197178();
    }
    else if (lVar27 == 0) {
      psVar14 = &local_5c8;
      pbVar13 = (byte *)FUN_0219535c();
    }
    else {
      psVar14 = (string *)&local_318;
      pbVar13 = (byte *)FUN_02196754();
    }
    pbVar20 = *(byte **)(pbVar13 + 0x10);
    if ((*pbVar13 & 1) == 0) {
      pbVar20 = pbVar13 + 1;
    }
    FUN_00154450(param_2,pbVar20);
    local_890 = FUN_0014feb0(param_2,0xffffffff);
    local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
    local_898 = param_2;
    FUN_008fe304(local_8a0,param_2,&local_8d0,&local_888,local_890);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar10);
    FUN_00155a20(param_2,psVar14,2);
    uVar7 = local_890;
    if (*(long *)(lVar10 + 0x170) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar7,"class_check");
    }
    uVar7 = local_890;
    if (*(long *)(lVar10 + 0x178) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar7,"class_cast");
    }
    uVar7 = local_890;
    uVar29 = *(undefined8 *)(lVar10 + 0x150);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar10);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar29,3);
    FUN_00152550(param_2,uVar7,&DAT_03955ac7);
    uVar7 = local_890;
    uVar29 = *(undefined8 *)(lVar10 + 0x158);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar10);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar29,3);
    FUN_00152550(param_2,uVar7,&DAT_0397c077);
    if (*(char *)(lVar10 + 0x58) == '\0') {
      local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,1);
      FUN_008fe304(local_8a0,param_2,&local_8d0,&local_898,local_890);
    }
    else {
      local_8a0[0] = 1;
      local_8d0 = &LAB_02311670;
      uStack_8c8 = 0;
      local_8c0 = lVar10;
      lStack_8b8 = lVar22;
      FUN_02312758(param_2,local_8a0,&local_8d0,local_890);
      local_8a0[0] = 2;
      local_8d0 = &LAB_0231197c;
      uStack_8c8 = 0;
      local_8c0 = lVar10;
      lStack_8b8 = lVar22;
      FUN_02312758(param_2,local_8a0,&local_8d0,local_890);
    }
    FUN_00151fe0(param_2,0,3);
    uVar7 = FUN_0014feb0(param_2,0xffffffff);
    local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
    FUN_008fe304(local_8a0,param_2,&local_8d0,&local_888,uVar7);
    if (*(undefined1 **)(lVar10 + 0x148) == (undefined1 *)0x0) {
      if (*(char *)(lVar10 + 0x180) == '\0') goto LAB_0230e574;
LAB_0230e820:
      local_8a0[0] = 1;
      local_8d0 = &LAB_02311670;
      uStack_8c8 = 0;
      local_8c0 = lVar10;
      lStack_8b8 = lVar22;
      FUN_02312758(param_2,local_8a0,&local_8d0,uVar7);
      local_8a0[0] = 2;
      local_8d0 = &LAB_0231197c;
      uStack_8c8 = 0;
      local_8c0 = lVar10;
      lStack_8b8 = lVar22;
      FUN_02312758(param_2,local_8a0,&local_8d0,uVar7);
      if (param_2 == 0) goto LAB_0230e880;
LAB_0230e57c:
      uVar9 = local_890;
      FUN_00150260(param_2,uVar7);
    }
    else {
      local_8a0[0] = 4;
      uStack_8c8 = 0;
      local_8d0 = *(undefined1 **)(lVar10 + 0x148);
      local_8c0 = lVar10;
      lStack_8b8 = lVar22;
      FUN_02312758(param_2,local_8a0,&local_8d0,uVar7);
      if (*(char *)(lVar10 + 0x180) != '\0') goto LAB_0230e820;
LAB_0230e574:
      if (param_2 != 0) goto LAB_0230e57c;
LAB_0230e880:
      uVar9 = local_890;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar9);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_898,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_0230fd58();
      if ((DAT_043e1758 & 1) == 0) {
        puVar15 = &DAT_043e1759;
      }
      else {
        puVar15 = DAT_043e1768;
      }
      FUN_00154450(param_2,puVar15);
      uVar7 = FUN_0014feb0(param_2,0xffffffff);
      local_8d0._0_4_ = 0x1e;
      FUN_008fe304(&local_898,param_2,&local_8d0,&local_888,uVar7);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar10);
      FUN_00155a20(param_2,&local_318,2);
      FUN_00151fe0(param_2,0,3);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
      FUN_008fe304(&local_898,param_2,&local_8d0,&local_888,uVar9);
      local_8d0 = *(undefined1 **)(lVar10 + 0x148);
      if (local_8d0 != (undefined1 *)0x0) {
        local_898 = CONCAT44(local_898._4_4_,4);
        uStack_8c8 = 0;
        local_8c0 = lVar10;
        lStack_8b8 = lVar22;
        FUN_02312758(param_2,&local_898,&local_8d0,uVar9);
      }
      local_898._0_4_ = 1;
      local_8d0 = &LAB_02311980;
      uStack_8c8 = 0;
      local_8b0 = 0;
      puStack_8a8 = &DAT_03a7d490;
      local_8c0 = lVar10;
      lStack_8b8 = lVar22;
      FUN_02312b00(param_2,&local_898,&local_8d0,uVar9);
      local_898 = CONCAT44(local_898._4_4_,2);
      local_8d0 = &LAB_02311984;
      uStack_8c8 = 0;
      local_8b0 = 0;
      puStack_8a8 = &DAT_03a7d490;
      local_8c0 = lVar10;
      lStack_8b8 = lVar22;
      FUN_02312b00(param_2,&local_898,&local_8d0,uVar9);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar9);
      }
      FUN_00152ae0(param_2,uVar7);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_880[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


