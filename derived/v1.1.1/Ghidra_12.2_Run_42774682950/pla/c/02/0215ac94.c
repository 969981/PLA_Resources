/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0215ac94; name: FUN_0215ac94
 */


undefined8 FUN_0215ac94(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
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
  char *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_7e0;
  undefined8 uStack_7d8;
  long local_7d0;
  long lStack_7c8;
  undefined8 local_7c0;
  undefined *puStack_7b8;
  long local_7b0;
  undefined4 local_7a8;
  long local_7a0;
  undefined4 local_798 [2];
  string asStack_790 [592];
  undefined8 auStack_540 [2];
  string local_530;
  undefined1 auStack_52f [7];
  size_t local_528;
  undefined1 *local_520;
  char *apcStack_2e0 [2];
  char *local_2d0 [2];
  long local_2c0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043dba98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dba98), iVar9 != 0)) {
    local_2c0 = 0;
    local_2d0[1] = (undefined1 *)0x0;
    local_2d0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04384550 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04384550);
      puVar3 = PTR_DAT_04384558;
      if (iVar9 != 0) {
        FUN_0208dcb0(PTR_DAT_04384558);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04384550);
      }
    }
    pcVar26 = (char *)FUN_0215da44(local_2d0,PTR_DAT_04384558);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043dba80,psVar17);
    lVar13 = local_2c0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2d0[0] & 1) != 0) && (local_2c0 != 0)) {
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
          goto LAB_0215bf9c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0215bf9c:
    FUN_00100250(PTR__string_04379718,&DAT_043dba80,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dba98);
  }
  std::string::string(&local_530,(string *)&DAT_043dba80);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043dba78);
  sVar2 = (ulong)((byte)local_530 >> 1);
  if (((byte)local_530 & 1) != 0) {
    sVar2 = local_528;
  }
  std::string::append((ulong)&local_530,(char)iVar9);
  if (((byte)local_530 & 1) == 0) {
    puVar27 = auStack_52f;
    local_528 = (size_t)((byte)local_530 >> 1);
  }
  else {
    puVar27 = local_520;
  }
  snprintf(puVar27 + (sVar2 - 1),local_528,"%d",(ulong)DAT_043dba78);
  DAT_043dba78 = DAT_043dba78 + 1;
  if (((DAT_043dbab8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dbab8), iVar9 != 0)) {
    local_2c0 = 0;
    local_2d0[1] = (undefined1 *)0x0;
    local_2d0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04384550 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04384550);
      puVar3 = PTR_DAT_04384558;
      if (iVar9 != 0) {
        FUN_0208dcb0(PTR_DAT_04384558);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04384550);
      }
    }
    pcVar26 = (char *)FUN_0215da44(local_2d0,PTR_DAT_04384558);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043dbaa0,psVar17);
    lVar13 = local_2c0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2d0[0] & 1) != 0) && (local_2c0 != 0)) {
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
          goto LAB_0215c0f0;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0215c0f0:
    FUN_00100250(PTR__string_04379718,&DAT_043dbaa0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dbab8);
  }
  puVar3 = DAT_043dbab0;
  if ((DAT_043dbaa0 & 1) == 0) {
    puVar3 = &DAT_043dbaa1;
  }
  if (((byte)local_530 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_530 | 1);
  }
  else {
    puVar27 = local_520;
  }
  if (((DAT_043dbac8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dbac8), iVar9 != 0)) {
    DAT_043dbac0 = 0x110;
    __cxa_guard_release(&DAT_043dbac8);
  }
  if (((DAT_043dbad8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dbad8), iVar9 != 0)) {
    DAT_043dbad0 = 0x117;
    __cxa_guard_release(&DAT_043dbad8);
  }
  uVar22 = DAT_043dbac0;
  lVar13 = FUN_00153520(param_2,DAT_043dbac0);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x110)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043dbad0;
    lVar13 = FUN_00153520(param_2,DAT_043dbad0);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x110)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0215e5c0();
      puVar4 = DAT_043dbaf0;
      if ((DAT_043dbae0 & 1) == 0) {
        puVar4 = &DAT_043dbae1;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
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
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar5;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425b5b0;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xb0);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_0215e580,0);
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
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_530 & 1) != 0) && (local_520 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_520,0,8);
        goto LAB_0215b000;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_520,0,8);
  }
LAB_0215b000:
  memset(local_2d0,0,0x260);
  pcVar26 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  puVar27 = &LAB_0215ddb4;
  if (uVar11 != 0) {
    puVar27 = &LAB_0215dd7c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar27;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(undefined1 **)(lVar13 + 0xc0) = puVar27;
            goto LAB_0215b120;
          }
          *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar27;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 1L << (uVar22 & 0x3f);
      goto LAB_0215b120;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2d0[0] = pcVar26;
  local_2d0[1] = puVar27;
LAB_0215b120:
  pcVar26 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0215de40;
  if (uVar11 != 0) {
    pcVar1 = (code *)&LAB_0215ddec;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0xc0) = pcVar1;
        goto LAB_0215b200;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 1L << (uVar22 & 0x3f);
      goto LAB_0215b200;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_2d0[uVar24 * 2] = pcVar26;
  local_2d0[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0215b200:
  puVar3 = PTR_DAT_0437dcc8;
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *puVar3 = 1;
  pcVar26 = *(char **)(lVar13 + 0x78);
  *(undefined1 **)(lVar13 + 0xf0) = &LAB_0215e9f0;
  *(undefined1 **)(lVar13 + 0xf8) = &LAB_0215eaac;
  *(undefined1 **)(lVar13 + 0xe0) = &LAB_0215eb00;
  *(undefined1 **)(lVar13 + 0xe8) = &LAB_0215eb10;
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0215dfd0;
  if (uVar11 != 0) {
    pcVar1 = FUN_0215ded4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0xc0) = pcVar1;
            goto LAB_0215b4d4;
          }
          *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 1L << (uVar22 & 0x3f);
      goto LAB_0215b4d4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_2d0[uVar24 * 2] = pcVar26;
  local_2d0[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0215b4d4:
  pcVar26 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0215e13c;
  if (uVar11 != 0) {
    pcVar1 = FUN_0215e060;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0xc0) = pcVar1;
            goto LAB_0215b614;
          }
          *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 1L << (uVar22 & 0x3f);
      goto LAB_0215b614;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_2d0[uVar24 * 2] = pcVar26;
  local_2d0[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0215b614:
  pcVar26 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0215e298;
  if (uVar11 != 0) {
    pcVar1 = FUN_0215e1cc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0xc0) = pcVar1;
            uVar11 = (uint)*(undefined8 *)(lVar13 + 0x108);
            goto joined_r0x0215b708;
          }
          *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x108) = *(ulong *)(lVar13 + 0x108) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x108);
      goto joined_r0x0215b708;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_2d0[uVar24 * 2] = pcVar26;
  local_2d0[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x108);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x0215b708:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x108);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x108);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    local_2d0[uVar24 * 2] = pcVar26;
    local_2d0[uVar24 * 2 + 1] = PTR_LAB_04384528;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x108);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    local_2d0[uVar22 * 2] = pcVar26;
    local_2d0[uVar22 * 2 + 1] = PTR_LAB_04384530;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0xc0) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(char **)(lVar13 + 0xc0);
    uVar22 = (ulong)((int)uVar24 + 1);
    local_2d0[uVar24 * 2] = pcVar26;
    local_2d0[uVar24 * 2 + 1] = pcVar20;
  }
  local_2d0[uVar22 * 2] = (char *)0x0;
  local_2d0[uVar22 * 2 + 1] = (char *)0x0;
  memcpy(&local_530,local_2d0,0x260);
  memcpy(asStack_790,local_2d0,0x260);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = local_2d0[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar2 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_540[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_52f + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_790 + lVar15 * 0x10) = local_2d0[lVar15 * 2];
  *(undefined1 **)(asStack_790 + (lVar15 * 2 + 1) * 8) = &LAB_0215e370;
  FUN_00151fe0(param_2,0,2);
  local_798[0] = FUN_0014feb0(param_2,0xffffffff);
  local_7a0 = param_2;
  if ((*PTR_DAT_04384550 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04384550);
    puVar3 = PTR_DAT_04384558;
    if (iVar9 != 0) {
      FUN_0208dcb0(PTR_DAT_04384558);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04384550);
    }
  }
  uVar10 = local_798[0];
  uVar22 = *(ulong *)(PTR_DAT_04384558 + 8);
  puVar3 = *(undefined **)(PTR_DAT_04384558 + 0x10);
  if ((*PTR_DAT_04384558 & 1) == 0) {
    puVar3 = PTR_DAT_04384558 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_04384558 >> 1);
  }
  FUN_001514f0(param_2,puVar3,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0215e3c0,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_790;
      pbVar16 = (byte *)FUN_0208e0a0();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_530;
      pbVar16 = (byte *)FUN_0208ca7c();
    }
    else {
      psVar17 = (string *)local_2d0;
      pbVar16 = (byte *)FUN_0208da54();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_7a8 = FUN_0014feb0(param_2,0xffffffff);
    local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
    local_7b0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_7e0,&local_7a0,local_7a8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_7a8;
    if (*(long *)(lVar13 + 0xf0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
    }
    uVar10 = local_7a8;
    if (*(long *)(lVar13 + 0xf8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_7a8;
    uVar19 = *(undefined8 *)(lVar13 + 0xd0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_7a8;
    uVar19 = *(undefined8 *)(lVar13 + 0xd8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_7e0,&local_7b0,local_7a8);
    }
    else {
      local_7e0 = &LAB_0215e4b0;
      uStack_7d8 = 0;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_0215e410(param_2,1,&local_7e0,local_7a8);
      local_7e0 = &LAB_0215e4b4;
      uStack_7d8 = 0;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_0215e410(param_2,2,&local_7e0,local_7a8);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_7e0,&local_7a0,uVar10);
    if (*(undefined1 **)(lVar13 + 200) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x100) == '\0') goto LAB_0215bb6c;
LAB_0215bda4:
      local_7e0 = &LAB_0215e4b0;
      uStack_7d8 = 0;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_0215e410(param_2,1,&local_7e0,uVar10);
      local_7e0 = &LAB_0215e4b4;
      uStack_7d8 = 0;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_0215e410(param_2,2,&local_7e0,uVar10);
      if (param_2 == 0) goto LAB_0215bdf4;
LAB_0215bb74:
      uVar12 = local_7a8;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_7d8 = 0;
      local_7e0 = *(undefined1 **)(lVar13 + 200);
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_0215e410(param_2,4,&local_7e0,uVar10);
      if (*(char *)(lVar13 + 0x100) != '\0') goto LAB_0215bda4;
LAB_0215bb6c:
      if (param_2 != 0) goto LAB_0215bb74;
LAB_0215bdf4:
      uVar12 = local_7a8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_7b0,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_0215d214();
      puVar3 = DAT_043dba68;
      if ((DAT_043dba58 & 1) == 0) {
        puVar3 = &DAT_043dba59;
      }
      FUN_00154450(param_2,puVar3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_7e0._0_4_ = 0x1e;
      FUN_008fe304(&local_7b0,param_2,&local_7e0,&local_7a0,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,local_2d0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
      FUN_008fe304(&local_7b0,param_2,&local_7e0,&local_7a0,uVar12);
      local_7e0 = *(undefined1 **)(lVar13 + 200);
      if (local_7e0 != (undefined1 *)0x0) {
        uStack_7d8 = 0;
        local_7d0 = lVar13;
        lStack_7c8 = lVar23;
        FUN_0215e410(param_2,4,&local_7e0,uVar12);
      }
      local_7e0 = &LAB_0215e578;
      uStack_7d8 = 0;
      local_7c0 = 0;
      puStack_7b8 = &DAT_03a7d358;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_0215e4c0(param_2,1,&local_7e0,uVar12);
      local_7e0 = &LAB_0215e57c;
      uStack_7d8 = 0;
      local_7c0 = 0;
      puStack_7b8 = &DAT_03a7d358;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_0215e4c0(param_2,2,&local_7e0,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_798[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


