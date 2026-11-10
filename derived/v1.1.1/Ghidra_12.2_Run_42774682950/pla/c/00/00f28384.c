/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f28384; name: FUN_00f28384
 */


undefined8 FUN_00f28384(long param_1,long param_2)

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
  char *local_318 [2];
  long local_308;
  
  if (((DAT_043b49f0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b49f0), iVar8 != 0)) {
    local_308 = 0;
    local_318[1] = (undefined1 *)0x0;
    local_318[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b4850 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4850), iVar8 != 0)) {
      FUN_00f2cb70();
      FUN_00100250(PTR__string_04379718,&DAT_043b4838,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b4850);
    }
    pcVar25 = (char *)FUN_00f2bf5c(local_318,&DAT_043b4838);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043b49d8,psVar15);
    lVar12 = local_308;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_318[0] & 1) != 0) && (local_308 != 0)) {
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
          goto LAB_00f29e60;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_00f29e60:
    FUN_00100250(PTR__string_04379718,&DAT_043b49d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b49f0);
  }
  std::string::string(&local_5c8,(string *)&DAT_043b49d8);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b49d0);
  sVar2 = (ulong)((byte)local_5c8 >> 1);
  if (((byte)local_5c8 & 1) != 0) {
    sVar2 = local_5c0;
  }
  std::string::append((ulong)&local_5c8,(char)iVar8);
  if (((byte)local_5c8 & 1) == 0) {
    puVar26 = auStack_5c7;
    local_5c0 = (size_t)((byte)local_5c8 >> 1);
  }
  else {
    puVar26 = local_5b8;
  }
  snprintf(puVar26 + (sVar2 - 1),local_5c0,"%d",(ulong)DAT_043b49d0);
  DAT_043b49d0 = DAT_043b49d0 + 1;
  if (((DAT_043b4a10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4a10), iVar8 != 0)) {
    local_308 = 0;
    local_318[1] = (undefined1 *)0x0;
    local_318[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b4850 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4850), iVar8 != 0)) {
      FUN_00f2cb70();
      FUN_00100250(PTR__string_04379718,&DAT_043b4838,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b4850);
    }
    pcVar25 = (char *)FUN_00f2bf5c(local_318,&DAT_043b4838);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043b49f8,psVar15);
    lVar12 = local_308;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_318[0] & 1) != 0) && (local_308 != 0)) {
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
          goto LAB_00f29fac;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_00f29fac:
    FUN_00100250(PTR__string_04379718,&DAT_043b49f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b4a10);
  }
  puVar16 = DAT_043b4a08;
  if ((DAT_043b49f8 & 1) == 0) {
    puVar16 = &DAT_043b49f9;
  }
  if (((byte)local_5c8 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_5c8 | 1);
  }
  else {
    puVar26 = local_5b8;
  }
  if (((DAT_043b4a20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4a20), iVar8 != 0)) {
    DAT_043b4a18 = 0x150;
    __cxa_guard_release(&DAT_043b4a20);
  }
  if (((DAT_043b4a30 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4a30), iVar8 != 0)) {
    DAT_043b4a28 = 0x157;
    __cxa_guard_release(&DAT_043b4a30);
  }
  uVar21 = DAT_043b4a18;
  lVar12 = FUN_00153520(param_2,DAT_043b4a18);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x150)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043b4a28;
    lVar12 = FUN_00153520(param_2,DAT_043b4a28);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x150)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00f2faf0();
      puVar3 = DAT_043b4a48;
      if ((DAT_043b4a38 & 1) == 0) {
        puVar3 = &DAT_043b4a39;
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
  *puVar19 = &PTR_FUN_041eeb10;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xf0);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_00f2fab0,0);
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
  if ((((byte)local_5c8 & 1) != 0) && (local_5b8 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar24,local_5b8,0,8);
        goto LAB_00f286f8;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_5b8,0,8);
  }
LAB_00f286f8:
  memset(local_318,0,0x2b0);
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
  puVar26 = &LAB_00f2d000;
  if (uVar10 != 0) {
    puVar26 = &LAB_00f2cf94;
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
            *(undefined1 **)(lVar12 + 0x100) = puVar26;
            goto LAB_00f28914;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar26;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      goto LAB_00f28914;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_318[0] = pcVar25;
  local_318[1] = puVar26;
LAB_00f28914:
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
  pcVar1 = FUN_00f2d10c;
  if (uVar10 != 0) {
    pcVar1 = FUN_00f2d080;
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
            *(code **)(lVar12 + 0x100) = pcVar1;
            goto LAB_00f28a54;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      goto LAB_00f28a54;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_318[uVar23 * 2] = pcVar25;
  local_318[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f28a54:
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
  pcVar1 = FUN_00f2d244;
  if (uVar10 != 0) {
    pcVar1 = FUN_00f2d1a8;
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
            *(code **)(lVar12 + 0x100) = pcVar1;
            goto LAB_00f28b94;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      goto LAB_00f28b94;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_318[uVar23 * 2] = pcVar25;
  local_318[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f28b94:
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
  pcVar1 = FUN_00f2d37c;
  if (uVar10 != 0) {
    pcVar1 = FUN_00f2d2e0;
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
            *(code **)(lVar12 + 0x100) = pcVar1;
            goto LAB_00f28cd4;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      goto LAB_00f28cd4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_318[uVar23 * 2] = pcVar25;
  local_318[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f28cd4:
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
  pcVar1 = FUN_00f2d614;
  if (uVar10 != 0) {
    pcVar1 = FUN_00f2d418;
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
            *(code **)(lVar12 + 0x100) = pcVar1;
            goto LAB_00f28e14;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      goto LAB_00f28e14;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_318[uVar23 * 2] = pcVar25;
  local_318[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f28e14:
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
  pcVar1 = FUN_00f2d708;
  if (uVar10 != 0) {
    pcVar1 = FUN_00f2d65c;
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
            *(code **)(lVar12 + 0x100) = pcVar1;
            goto LAB_00f28f54;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      goto LAB_00f28f54;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_318[uVar23 * 2] = pcVar25;
  local_318[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f28f54:
  pcVar25 = *(char **)(lVar12 + 0xc0);
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
  pcVar1 = FUN_00f2d7ec;
  if (uVar10 != 0) {
    pcVar1 = FUN_00f2d750;
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
            *(code **)(lVar12 + 0x100) = pcVar1;
            goto LAB_00f29094;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      goto LAB_00f29094;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_318[uVar23 * 2] = pcVar25;
  local_318[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f29094:
  pcVar25 = *(char **)(lVar12 + 0xd0);
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
  pcVar1 = FUN_00f2e008;
  if (uVar10 != 0) {
    pcVar1 = FUN_00f2d888;
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
            *(code **)(lVar12 + 0x100) = pcVar1;
            goto LAB_00f291d4;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      goto LAB_00f291d4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_318[uVar23 * 2] = pcVar25;
  local_318[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f291d4:
  pcVar25 = *(char **)(lVar12 + 0xe0);
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
  pcVar1 = FUN_00f2e1f8;
  if (uVar10 != 0) {
    pcVar1 = FUN_00f2e050;
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
            *(code **)(lVar12 + 0x100) = pcVar1;
            goto LAB_00f29314;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      goto LAB_00f29314;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_318[uVar23 * 2] = pcVar25;
  local_318[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f29314:
  pcVar25 = *(char **)(lVar12 + 0xf0);
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
  pcVar18 = &LAB_00f2f80c;
  if (uVar10 != 0) {
    pcVar18 = &LAB_00f2e240;
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
            *(char **)(lVar12 + 0x100) = pcVar18;
            goto LAB_00f29424;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      goto LAB_00f29424;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_318[uVar23 * 2] = pcVar25;
  local_318[uVar23 * 2 + 1] = pcVar18;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f29424:
  pcVar25 = *(char **)(lVar12 + 0xf8);
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
  pcVar1 = FUN_00f2fa08;
  if (uVar10 != 0) {
    pcVar1 = FUN_00f2f9c0;
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
        *(code **)(lVar12 + 0x100) = pcVar1;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
        goto joined_r0x00f29508;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
      goto joined_r0x00f29508;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_318[uVar23 * 2] = pcVar25;
  local_318[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x00f29508:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    local_318[uVar23 * 2] = pcVar25;
    local_318[uVar23 * 2 + 1] = &LAB_00f2e8b0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
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
    local_318[uVar23 * 2] = pcVar25;
    local_318[uVar23 * 2 + 1] = "K\x03";
  }
  uVar23 = uVar21;
  if (*(long *)(lVar12 + 0x100) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar18 = *(char **)(lVar12 + 0x100);
    uVar23 = (ulong)((int)uVar21 + 1);
    local_318[uVar21 * 2] = pcVar25;
    local_318[uVar21 * 2 + 1] = pcVar18;
  }
  local_318[uVar23 * 2] = (char *)0x0;
  local_318[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_5c8,local_318,0x2b0);
  memcpy(asStack_878,local_318,0x2b0);
  lVar27 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar25 = local_318[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar2 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar2) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_5d8[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5c7 + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_878 + lVar14 * 0x10) = local_318[lVar14 * 2];
  *(code **)(asStack_878 + (lVar14 * 2 + 1) * 8) = FUN_00f2fa50;
  FUN_00151fe0(param_2,0,2);
  local_880[0] = FUN_0014feb0(param_2,0xffffffff);
  local_888 = param_2;
  if (((DAT_043b4850 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b4850), iVar8 != 0)) {
    FUN_00f2cb70();
    FUN_00100250(PTR__string_04379718,&DAT_043b4838,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b4850);
  }
  uVar9 = local_880[0];
  if ((DAT_043b4838 & 1) == 0) {
    uVar21 = (ulong)(DAT_043b4838 >> 1);
    puVar26 = &DAT_043b4839;
  }
  else {
    uVar21 = DAT_043b4840;
    puVar26 = DAT_043b4848;
  }
  FUN_001514f0(param_2,puVar26,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00f2e7c0,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar15 = asStack_878;
      FUN_00f2b324();
      pbVar20 = &DAT_043b47a0;
      puVar16 = &DAT_043b47a1;
      puVar19 = &DAT_043b47b0;
    }
    else if (lVar27 == 0) {
      psVar15 = &local_5c8;
      FUN_00f2b148();
      puVar16 = &DAT_043b4729;
      puVar19 = &DAT_043b4738;
      pbVar20 = &DAT_043b4728;
    }
    else {
      psVar15 = (string *)local_318;
      FUN_00f2b500();
      puVar16 = &DAT_043b4819;
      puVar19 = &DAT_043b4828;
      pbVar20 = &DAT_043b4818;
    }
    if ((*pbVar20 & 1) != 0) {
      puVar16 = (undefined *)*puVar19;
    }
    FUN_00154450(param_2,puVar16);
    local_890 = FUN_0014feb0(param_2,0xffffffff);
    local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
    local_898 = param_2;
    FUN_008fe304(local_8a0,param_2,&local_8d0,&local_888,local_890);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar15,2);
    uVar9 = local_890;
    if (*(long *)(lVar12 + 0x130) == 0) {
      lVar14 = *(long *)(lVar12 + 0x138);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x138);
      uVar9 = local_890;
    }
    local_890 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_890;
    uVar17 = *(undefined8 *)(lVar12 + 0x110);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_890;
    uVar17 = *(undefined8 *)(lVar12 + 0x118);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,1);
      FUN_008fe304(local_8a0,param_2,&local_8d0,&local_898,local_890);
    }
    else {
      local_8a0[0] = 1;
      local_8d0 = &LAB_00f2faa0;
      uStack_8c8 = 0;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_00f2ff2c(param_2,local_8a0,&local_8d0,local_890);
      local_8a0[0] = 2;
      local_8d0 = &LAB_00f2faa4;
      uStack_8c8 = 0;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_00f2ff2c(param_2,local_8a0,&local_8d0,local_890);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
    FUN_008fe304(local_8a0,param_2,&local_8d0,&local_888,uVar9);
    if (*(undefined1 **)(lVar12 + 0x108) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x140) == '\0') goto LAB_00f298d0;
LAB_00f29bf0:
      local_8a0[0] = 1;
      local_8d0 = &LAB_00f2faa0;
      uStack_8c8 = 0;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_00f2ff2c(param_2,local_8a0,&local_8d0,uVar9);
      local_8a0[0] = 2;
      local_8d0 = &LAB_00f2faa4;
      uStack_8c8 = 0;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_00f2ff2c(param_2,local_8a0,&local_8d0,uVar9);
      if (param_2 == 0) goto LAB_00f29c54;
LAB_00f298d8:
      uVar11 = local_890;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_8c8 = 0;
      local_8a0[0] = 4;
      local_8d0 = *(undefined1 **)(lVar12 + 0x108);
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_00f2ff2c(param_2,local_8a0,&local_8d0,uVar9);
      if (*(char *)(lVar12 + 0x140) != '\0') goto LAB_00f29bf0;
LAB_00f298d0:
      if (param_2 != 0) goto LAB_00f298d8;
LAB_00f29c54:
      uVar11 = local_890;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_898,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_00f2b728();
      puVar16 = DAT_043b48a0;
      if ((DAT_043b4890 & 1) == 0) {
        puVar16 = &DAT_043b4891;
      }
      FUN_00154450(param_2,puVar16);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_8d0._0_4_ = 0x1e;
      FUN_008fe304(&local_898,param_2,&local_8d0,&local_888,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,local_318,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
      FUN_008fe304(&local_898,param_2,&local_8d0,&local_888,uVar11);
      local_8d0 = *(undefined1 **)(lVar12 + 0x108);
      if (local_8d0 != (undefined1 *)0x0) {
        uStack_8c8 = 0;
        local_898 = CONCAT44(local_898._4_4_,4);
        local_8c0 = lVar12;
        lStack_8b8 = lVar22;
        FUN_00f2ff2c(param_2,&local_898,&local_8d0,uVar11);
      }
      local_898._0_4_ = 1;
      local_8d0 = &LAB_00f2faa8;
      uStack_8c8 = 0;
      local_8b0 = 0;
      puStack_8a8 = &DAT_03a78898;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_00f305e0(param_2,&local_898,&local_8d0,uVar11);
      local_898 = CONCAT44(local_898._4_4_,2);
      local_8d0 = &LAB_00f2faac;
      uStack_8c8 = 0;
      local_8b0 = 0;
      puStack_8a8 = &DAT_03a78898;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_00f305e0(param_2,&local_898,&local_8d0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_880[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


