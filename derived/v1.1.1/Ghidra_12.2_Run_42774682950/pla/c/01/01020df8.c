/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01020df8; name: FUN_01020df8
 */


void FUN_01020df8(long param_1,long param_2)

{
  ulong *puVar1;
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
  size_t sVar15;
  byte *pbVar16;
  string *psVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  undefined1 *local_ba0;
  undefined8 uStack_b98;
  long local_b90;
  long lStack_b88;
  undefined8 local_b80;
  undefined *puStack_b78;
  long local_b70;
  undefined4 local_b68;
  long local_b60;
  undefined4 local_b58 [2];
  string asStack_b50 [912];
  undefined8 auStack_7c0 [2];
  string local_7b0;
  undefined1 auStack_7af [7];
  size_t local_7a8;
  undefined1 *local_7a0;
  char *apcStack_420 [2];
  char *local_410;
  code *local_408;
  long local_400;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b88e8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b88e8), iVar8 != 0)) {
    local_400 = 0;
    local_408 = (code *)0x0;
    local_410 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437ab38 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437ab38);
      puVar2 = PTR_DAT_0437ab40;
      if (iVar8 != 0) {
        FUN_00b3c5c0(PTR_DAT_0437ab40);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437ab38);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437ab40 + 0x10);
    if ((*PTR_DAT_0437ab40 & 1) == 0) {
      puVar2 = PTR_DAT_0437ab40 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)&local_410,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b88d0,psVar17);
    lVar12 = local_400;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_410 & 1) != 0) && (local_400 != 0)) {
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
          goto LAB_01023bb8;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_01023bb8:
    FUN_00100250(PTR__string_04379718,&DAT_043b88d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b88e8);
  }
  std::string::string(&local_7b0,(string *)&DAT_043b88d0);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b88c8);
  if (((byte)local_7b0 & 1) == 0) {
    uVar23 = (ulong)((byte)local_7b0 >> 1);
  }
  else {
    uVar23 = local_7a8;
  }
  std::string::append((ulong)&local_7b0,(char)iVar8);
  if (((byte)local_7b0 & 1) == 0) {
    puVar28 = auStack_7af;
    local_7a8 = (size_t)((byte)local_7b0 >> 1);
  }
  else {
    puVar28 = local_7a0;
  }
  snprintf(puVar28 + (uVar23 - 1),local_7a8,"%d",(ulong)DAT_043b88c8);
  DAT_043b88c8 = DAT_043b88c8 + 1;
  if (((DAT_043b8908 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8908), iVar8 != 0)) {
    local_400 = 0;
    local_408 = (code *)0x0;
    local_410 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437ab38 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437ab38);
      puVar2 = PTR_DAT_0437ab40;
      if (iVar8 != 0) {
        FUN_00b3c5c0(PTR_DAT_0437ab40);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437ab38);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437ab40 + 0x10);
    if ((*PTR_DAT_0437ab40 & 1) == 0) {
      puVar2 = PTR_DAT_0437ab40 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)&local_410,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b88f0,psVar17);
    lVar12 = local_400;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_410 & 1) != 0) && (local_400 != 0)) {
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
          goto LAB_01023d28;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_01023d28:
    FUN_00100250(PTR__string_04379718,&DAT_043b88f0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8908);
  }
  puVar2 = DAT_043b8900;
  if ((DAT_043b88f0 & 1) == 0) {
    puVar2 = &DAT_043b88f1;
  }
  if (((byte)local_7b0 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_7b0 | 1);
  }
  else {
    puVar28 = local_7a0;
  }
  if (((DAT_043b8918 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8918), iVar8 != 0)) {
    DAT_043b8910 = 0x278;
    __cxa_guard_release(&DAT_043b8918);
  }
  if (((DAT_043b8928 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8928), iVar8 != 0)) {
    DAT_043b8920 = 0x27f;
    __cxa_guard_release(&DAT_043b8928);
  }
  uVar23 = DAT_043b8910;
  lVar12 = FUN_00153520(param_1,DAT_043b8910);
  if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x278)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043b8920;
    lVar12 = FUN_00153520(param_1,DAT_043b8920);
    if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x278)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_010243e0();
      puVar3 = DAT_043b8940;
      if ((DAT_043b8930 & 1) == 0) {
        puVar3 = &DAT_043b8931;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar3);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar12 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar12;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
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
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_FUN_041ef2c8;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x218);
  iVar8 = FUN_00154450(param_1,puVar28);
  if (iVar8 != 0) {
    FUN_001516f0(param_1,&LAB_010243a0,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar9 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar9);
  }
  FUN_001522a0(param_1,puVar2);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar2);
  lVar12 = FUN_001511d0(param_1,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_7b0 & 1) != 0) && (local_7a0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_7a0,0,8);
        goto LAB_0102115c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_7a0,0,8);
  }
LAB_0102115c:
  memset(&local_410,0,0x3a0);
  pcVar27 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar18 = lVar12 + 8;
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101e8e4;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101e798;
  }
  puVar1 = (ulong *)(lVar12 + 0x270);
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_0102136c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_0102136c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_410 = pcVar27;
  local_408 = pcVar21;
LAB_0102136c:
  pcVar27 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101ea18;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101e9d0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_010214b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_010214b4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010214b4:
  pcVar27 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101eaa8;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101ea60;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_010215f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_010215f8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010215f8:
  pcVar27 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101eb38;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101eaf0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_0102173c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_0102173c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102173c:
  pcVar27 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101ed00;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101eb80;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01021880;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01021880;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01021880:
  pcVar27 = *(char **)(lVar12 + 0xd8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101ee34;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101edec;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_010219c4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_010219c4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010219c4:
  pcVar27 = *(char **)(lVar12 + 0xf0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101eec4;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101ee7c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01021b08;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01021b08;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01021b08:
  pcVar27 = *(char **)(lVar12 + 0x108);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101ef54;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101ef0c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01021c4c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01021c4c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01021c4c:
  pcVar27 = *(char **)(lVar12 + 0x120);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0101f0d8;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_0101ef9c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01021d90;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01021d90;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01021d90:
  pcVar27 = *(char **)(lVar12 + 0x138);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101f37c;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101f244;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01021ed4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01021ed4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01021ed4:
  pcVar27 = *(char **)(lVar12 + 0x150);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101f694;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101f468;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01022018;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01022018;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01022018:
  pcVar27 = *(char **)(lVar12 + 0x168);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101f7c8;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101f780;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_0102215c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_0102215c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102215c:
  pcVar27 = *(char **)(lVar12 + 0x180);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101f858;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101f810;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_010222a0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_010222a0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010222a0:
  pcVar27 = *(char **)(lVar12 + 0x198);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0101ff48;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101f8a0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_010223e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_010223e4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010223e4:
  pcVar27 = *(char **)(lVar12 + 0x1a8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_01020184;
  if (uVar10 != 0) {
    pcVar21 = FUN_0101ff90;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01022528;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01022528;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01022528:
  pcVar27 = *(char **)(lVar12 + 0x1b8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_01020214;
  if (uVar10 != 0) {
    pcVar21 = FUN_010201cc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_0102266c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_0102266c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102266c:
  pcVar27 = *(char **)(lVar12 + 0x1c8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_010202a4;
  if (uVar10 != 0) {
    pcVar21 = FUN_0102025c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_010227b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_010227b0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010227b0:
  pcVar27 = *(char **)(lVar12 + 0x1d8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_01020558;
  if (uVar10 != 0) {
    pcVar21 = FUN_010202ec;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_010228f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_010228f4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010228f4:
  pcVar27 = *(char **)(lVar12 + 0x1e8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_01020650;
  if (uVar10 != 0) {
    pcVar21 = FUN_010205a0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01022a38;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01022a38;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01022a38:
  pcVar27 = *(char **)(lVar12 + 0x1f0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0102070c;
  if (uVar10 != 0) {
    pcVar21 = FUN_010206a8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01022b7c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01022b7c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01022b7c:
  pcVar27 = *(char **)(lVar12 + 0x1f8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_010207c8;
  if (uVar10 != 0) {
    pcVar21 = FUN_01020764;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01022cc0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01022cc0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01022cc0:
  pcVar27 = *(char **)(lVar12 + 0x200);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_01020884;
  if (uVar10 != 0) {
    pcVar21 = FUN_01020820;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01022e04;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01022e04;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01022e04:
  pcVar27 = *(char **)(lVar12 + 0x208);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_01020940;
  if (uVar10 != 0) {
    pcVar21 = FUN_010208dc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_01022f48;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_01022f48;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01022f48:
  pcVar27 = *(char **)(lVar12 + 0x210);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_010209fc;
  if (uVar10 != 0) {
    pcVar21 = FUN_01020998;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_0102308c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_0102308c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102308c:
  pcVar27 = *(char **)(lVar12 + 0x218);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_01020bc8;
  if (uVar10 != 0) {
    pcVar21 = FUN_01020a54;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x228) = pcVar21;
            goto LAB_010231a0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      goto LAB_010231a0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010231a0:
  pcVar27 = *(char **)(lVar12 + 0x220);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_01020db0;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01020d78;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x228) = pcVar21;
        uVar10 = (uint)*puVar1;
        goto joined_r0x01023288;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x270) = *(ulong *)(lVar12 + 0x270) | 1L << (uVar23 & 0x3f);
      uVar10 = (uint)*puVar1;
      goto joined_r0x01023288;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_410)[uVar25 * 2] = pcVar27;
  (&local_408)[uVar25 * 2] = pcVar21;
  uVar10 = (uint)*puVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x01023288:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  uVar23 = uVar25;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x181);
    if ((*(byte *)(lVar24 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_410)[uVar25 * 2] = pcVar27;
    (&local_408)[uVar25 * 2] = (code *)PTR_LAB_0437ab10;
    uVar10 = (uint)*puVar1;
  }
  uVar25 = uVar23;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x289);
    if ((*(byte *)(lVar24 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    (&local_410)[uVar23 * 2] = pcVar27;
    (&local_408)[uVar23 * 2] = (code *)PTR_LAB_0437ab18;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar12 + 0x228) != 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x1c9);
    if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar12 + 0x228);
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_410)[uVar25 * 2] = pcVar27;
    (&local_408)[uVar25 * 2] = pcVar21;
  }
  (&local_410)[uVar23 * 2] = (char *)0x0;
  (&local_408)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_7b0,&local_410,0x3a0);
  memcpy(asStack_b50,&local_410,0x3a0);
  lVar24 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar27 = (&local_410)[lVar14 * 2];
  sVar15 = strlen(pcVar27);
  if ((*(byte *)(lVar24 + 0x1c8) & 1) == 0) {
    sVar13 = (size_t)(*(byte *)(lVar24 + 0x1c8) >> 1);
  }
  else {
    sVar13 = *(size_t *)(lVar24 + 0x1d0);
  }
  if ((sVar15 == sVar13) &&
     (iVar8 = std::string::compare(lVar24 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar8 == 0)) {
    auStack_7c0[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_7af + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_b50 + lVar14 * 0x10) = (&local_410)[lVar14 * 2];
  *(code **)(asStack_b50 + (lVar14 * 2 + 1) * 8) = FUN_010241e0;
  FUN_00151fe0(param_1,0,2);
  local_b58[0] = FUN_0014feb0(param_1,0xffffffff);
  local_b60 = param_1;
  if ((*PTR_DAT_0437ab38 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_0437ab38);
    puVar2 = PTR_DAT_0437ab40;
    if (iVar8 != 0) {
      FUN_00b3c5c0(PTR_DAT_0437ab40);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437ab38);
    }
  }
  uVar9 = local_b58[0];
  uVar23 = *(ulong *)(PTR_DAT_0437ab40 + 8);
  puVar2 = *(undefined **)(PTR_DAT_0437ab40 + 0x10);
  if ((*PTR_DAT_0437ab40 & 1) == 0) {
    puVar2 = PTR_DAT_0437ab40 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_0437ab40 >> 1);
  }
  FUN_001514f0(param_1,puVar2,uVar23);
  FUN_00152550(param_1,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_0101fdf0,0);
  FUN_00152550(param_1,uVar9,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      psVar17 = asStack_b50;
      pbVar16 = (byte *)FUN_00b3c9a8();
    }
    else if (lVar24 == 0) {
      psVar17 = &local_7b0;
      pbVar16 = (byte *)FUN_00b3b34c();
    }
    else {
      psVar17 = (string *)&local_410;
      pbVar16 = (byte *)FUN_00b3c384();
    }
    pbVar22 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar22 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_b68 = FUN_0014feb0(param_1,0xffffffff);
    local_ba0 = (undefined1 *)CONCAT44(local_ba0._4_4_,0x1e);
    local_b70 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_ba0,&local_b60,local_b68);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00155a20(param_1,psVar17,2);
    uVar9 = local_b68;
    if (*(long *)(lVar12 + 600) == 0) {
      lVar14 = *(long *)(lVar12 + 0x260);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x260);
      uVar9 = local_b68;
    }
    local_b68 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_cast");
    }
    uVar9 = local_b68;
    uVar20 = *(undefined8 *)(lVar12 + 0x238);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_03955ac7);
    uVar9 = local_b68;
    uVar20 = *(undefined8 *)(lVar12 + 0x240);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_ba0 = (undefined1 *)CONCAT44(local_ba0._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_ba0,&local_b70,local_b68);
    }
    else {
      local_ba0 = &LAB_010242d0;
      uStack_b98 = 0;
      local_b90 = lVar12;
      lStack_b88 = lVar18;
      FUN_01024230(param_1,1,&local_ba0,local_b68);
      local_ba0 = &LAB_010242d4;
      uStack_b98 = 0;
      local_b90 = lVar12;
      lStack_b88 = lVar18;
      FUN_01024230(param_1,2,&local_ba0,local_b68);
    }
    FUN_00151fe0(param_1,0,3);
    uVar9 = FUN_0014feb0(param_1,0xffffffff);
    local_ba0 = (undefined1 *)CONCAT44(local_ba0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_ba0,&local_b60,uVar9);
    if (*(undefined1 **)(lVar12 + 0x230) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x268) != '\0') goto LAB_01023920;
LAB_01023624:
      if (param_1 == 0) goto LAB_01023974;
LAB_0102362c:
      uVar11 = local_b68;
      FUN_00150260(param_1,uVar9);
    }
    else {
      uStack_b98 = 0;
      local_ba0 = *(undefined1 **)(lVar12 + 0x230);
      local_b90 = lVar12;
      lStack_b88 = lVar18;
      FUN_01024230(param_1,4,&local_ba0,uVar9);
      if (*(char *)(lVar12 + 0x268) == '\0') goto LAB_01023624;
LAB_01023920:
      local_ba0 = &LAB_010242d0;
      uStack_b98 = 0;
      local_b90 = lVar12;
      lStack_b88 = lVar18;
      FUN_01024230(param_1,1,&local_ba0,uVar9);
      local_ba0 = &LAB_010242d4;
      uStack_b98 = 0;
      local_b90 = lVar12;
      lStack_b88 = lVar18;
      FUN_01024230(param_1,2,&local_ba0,uVar9);
      if (param_1 != 0) goto LAB_0102362c;
LAB_01023974:
      uVar11 = local_b68;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar11);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_b70,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_0101e4d4();
      puVar2 = DAT_043b8898;
      if ((DAT_043b8888 & 1) == 0) {
        puVar2 = &DAT_043b8889;
      }
      FUN_00154450(param_1,puVar2);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_ba0._0_4_ = 0x1e;
      FUN_008fe304(&local_b70,param_1,&local_ba0,&local_b60,uVar9);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar12);
      FUN_00155a20(param_1,&local_410,2);
      FUN_00151fe0(param_1,0,3);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_ba0 = (undefined1 *)CONCAT44(local_ba0._4_4_,0x1e);
      FUN_008fe304(&local_b70,param_1,&local_ba0,&local_b60,uVar11);
      local_ba0 = *(undefined1 **)(lVar12 + 0x230);
      if (local_ba0 != (undefined1 *)0x0) {
        uStack_b98 = 0;
        local_b90 = lVar12;
        lStack_b88 = lVar18;
        FUN_01024230(param_1,4,&local_ba0,uVar11);
      }
      local_ba0 = &LAB_01024398;
      uStack_b98 = 0;
      local_b80 = 0;
      puStack_b78 = &DAT_03a788e0;
      local_b90 = lVar12;
      lStack_b88 = lVar18;
      FUN_010242e0(param_1,1,&local_ba0,uVar11);
      local_ba0 = &LAB_0102439c;
      uStack_b98 = 0;
      local_b80 = 0;
      puStack_b78 = &DAT_03a788e0;
      local_b90 = lVar12;
      lStack_b88 = lVar18;
      FUN_010242e0(param_1,2,&local_ba0,uVar11);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar11);
      }
      FUN_00152ae0(param_1,uVar9);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_b58[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


