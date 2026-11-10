/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021e8e3c; name: FUN_021e8e3c
 */


void FUN_021e8e3c(long param_1,long param_2)

{
  ulong *puVar1;
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
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_a50;
  undefined8 uStack_a48;
  long local_a40;
  long lStack_a38;
  undefined8 local_a30;
  undefined *puStack_a28;
  undefined4 local_a20 [2];
  long local_a18;
  undefined4 local_a10;
  long local_a08;
  undefined4 local_a00 [2];
  string asStack_9f8 [800];
  undefined8 auStack_6d8 [2];
  string local_6c8;
  undefined1 auStack_6c7 [7];
  size_t local_6c0;
  undefined1 *local_6b8;
  char *apcStack_3a8 [2];
  char *local_398;
  code *local_390;
  long local_388;
  
  if (((DAT_043dd830 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dd830), iVar9 != 0)) {
    local_388 = 0;
    local_390 = (code *)0x0;
    local_398 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04384cb8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04384cb8);
      puVar3 = PTR_DAT_04384cc0;
      if (iVar9 != 0) {
        FUN_020faa40(PTR_DAT_04384cc0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04384cb8);
      }
    }
    pcVar26 = (char *)FUN_021e4a60(&local_398,PTR_DAT_04384cc0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043dd818,psVar17);
    lVar13 = local_388;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_398 & 1) != 0) && (local_388 != 0)) {
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
          goto LAB_021eb2e4;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_021eb2e4:
    FUN_00100250(PTR__string_04379718,&DAT_043dd818,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dd830);
  }
  std::string::string(&local_6c8,(string *)&DAT_043dd818);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043dd810);
  sVar2 = (ulong)((byte)local_6c8 >> 1);
  if (((byte)local_6c8 & 1) != 0) {
    sVar2 = local_6c0;
  }
  std::string::append((ulong)&local_6c8,(char)iVar9);
  if (((byte)local_6c8 & 1) == 0) {
    puVar27 = auStack_6c7;
    local_6c0 = (size_t)((byte)local_6c8 >> 1);
  }
  else {
    puVar27 = local_6b8;
  }
  snprintf(puVar27 + (sVar2 - 1),local_6c0,"%d",(ulong)DAT_043dd810);
  DAT_043dd810 = DAT_043dd810 + 1;
  if (((DAT_043dd850 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dd850), iVar9 != 0)) {
    local_388 = 0;
    local_390 = (code *)0x0;
    local_398 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04384cb8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04384cb8);
      puVar3 = PTR_DAT_04384cc0;
      if (iVar9 != 0) {
        FUN_020faa40(PTR_DAT_04384cc0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04384cb8);
      }
    }
    pcVar26 = (char *)FUN_021e4a60(&local_398,PTR_DAT_04384cc0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043dd838,psVar17);
    lVar13 = local_388;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_398 & 1) != 0) && (local_388 != 0)) {
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
          goto LAB_021eb438;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_021eb438:
    FUN_00100250(PTR__string_04379718,&DAT_043dd838,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dd850);
  }
  puVar3 = DAT_043dd848;
  if ((DAT_043dd838 & 1) == 0) {
    puVar3 = &DAT_043dd839;
  }
  if (((byte)local_6c8 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_6c8 | 1);
  }
  else {
    puVar27 = local_6b8;
  }
  if (((DAT_043dd860 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dd860), iVar9 != 0)) {
    DAT_043dd858 = 0x240;
    __cxa_guard_release(&DAT_043dd860);
  }
  if (((DAT_043dd870 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dd870), iVar9 != 0)) {
    DAT_043dd868 = 0x247;
    __cxa_guard_release(&DAT_043dd870);
  }
  uVar22 = DAT_043dd858;
  lVar13 = FUN_00153520(param_1,DAT_043dd858);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x240)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar22 = DAT_043dd868;
    lVar13 = FUN_00153520(param_1,DAT_043dd868);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x240)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_021eb8f0();
      puVar4 = DAT_043dd888;
      if ((DAT_043dd878 & 1) == 0) {
        puVar4 = &DAT_043dd879;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar4);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar18[3] = lVar13;
  lVar23 = *(long *)(param_2 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_2 + 0x28);
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
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar5;
  puVar18[8] = *(undefined8 *)(param_2 + 0x40);
  puVar18[9] = *(undefined8 *)(param_2 + 0x48);
  puVar18[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar18 = &PTR_FUN_0425b768;
  memcpy(puVar18 + 0xc,(void *)(param_2 + 0x60),0x1e0);
  iVar9 = FUN_00154450(param_1,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_021eb8b0,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar10 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar10);
  }
  FUN_001522a0(param_1,puVar3);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar3);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_6c8 & 1) != 0) && (local_6b8 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_6b8,0,8);
        goto LAB_021e91a8;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_6b8,0,8);
  }
LAB_021e91a8:
  memset(&local_398,0,0x330);
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
  pcVar20 = FUN_021e4dec;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e4d9c;
  }
  puVar1 = (ulong *)(lVar13 + 0x238);
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021e93c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021e93c8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_398 = pcVar26;
  local_390 = pcVar20;
LAB_021e93c8:
  pcVar26 = *(char **)(lVar13 + 0x70);
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
  pcVar20 = FUN_021e4edc;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e4e7c;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021e9508;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021e9508;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021e9508:
  pcVar26 = *(char **)(lVar13 + 0x80);
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
  pcVar20 = FUN_021e4f74;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e4f24;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021e9648;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021e9648;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021e9648:
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
  pcVar20 = FUN_021e5114;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e4fbc;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021e9788;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021e9788;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021e9788:
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
  pcVar20 = FUN_021e53a0;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e520c;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021e98c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021e98c8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021e98c8:
  pcVar26 = *(char **)(lVar13 + 0xc0);
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
  pcVar20 = FUN_021e55fc;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e5498;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021e9a08;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021e9a08;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021e9a08:
  pcVar26 = *(char **)(lVar13 + 0xd8);
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
  pcVar20 = FUN_021e5abc;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e56f4;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021e9b48;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021e9b48;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021e9b48:
  pcVar26 = *(char **)(lVar13 + 0xf0);
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
  pcVar20 = FUN_021e5bfc;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e5bb4;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021e9c88;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021e9c88;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021e9c88:
  pcVar26 = *(char **)(lVar13 + 0x108);
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
  pcVar20 = FUN_021e6038;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e5c44;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021e9dc8;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021e9dc8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021e9dc8:
  pcVar26 = *(char **)(lVar13 + 0x120);
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
  pcVar20 = FUN_021e672c;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e6130;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021e9f08;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021e9f08;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021e9f08:
  pcVar26 = *(char **)(lVar13 + 0x138);
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
  pcVar20 = FUN_021e686c;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e6824;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021ea048;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021ea048;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021ea048:
  pcVar26 = *(char **)(lVar13 + 0x150);
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
  pcVar20 = FUN_021e6cc0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_021e68b4;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021ea188;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021ea188;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021ea188:
  pcVar26 = *(char **)(lVar13 + 0x168);
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
  pcVar20 = FUN_021e7350;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e6de4;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021ea2c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021ea2c8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021ea2c8:
  pcVar26 = *(char **)(lVar13 + 0x180);
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
  pcVar20 = FUN_021e79b0;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e7448;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021ea408;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021ea408;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021ea408:
  pcVar26 = *(char **)(lVar13 + 0x198);
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
  pcVar20 = FUN_021e7af0;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e7aa8;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021ea548;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021ea548;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021ea548:
  pcVar26 = *(char **)(lVar13 + 0x1b0);
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
  pcVar20 = FUN_021e80d4;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e7b38;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021ea688;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021ea688;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021ea688:
  pcVar26 = *(char **)(lVar13 + 0x1c8);
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
  pcVar20 = FUN_021e8394;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e81cc;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021ea7c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021ea7c8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021ea7c8:
  pcVar26 = *(char **)(lVar13 + 0x1e0);
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
  pcVar20 = (code *)&LAB_021e8bd8;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_021e848c;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1f0) = pcVar20;
            goto LAB_021ea8d8;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      goto LAB_021ea8d8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_021ea8d8:
  pcVar26 = *(char **)(lVar13 + 0x1e8);
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
  pcVar20 = FUN_021e8ddc;
  if (uVar11 != 0) {
    pcVar20 = FUN_021e8d7c;
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
        *(code **)(lVar13 + 0x1f0) = pcVar20;
        uVar11 = (uint)*puVar1;
        goto joined_r0x021ea9bc;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x238) = *(ulong *)(lVar13 + 0x238) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*puVar1;
      goto joined_r0x021ea9bc;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_398)[uVar24 * 2] = pcVar26;
  (&local_390)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*puVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x021ea9bc:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_398)[uVar24 * 2] = pcVar26;
    (&local_390)[uVar24 * 2] = (code *)PTR_LAB_04384c90;
    uVar11 = (uint)*puVar1;
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_398)[uVar22 * 2] = pcVar26;
    (&local_390)[uVar22 * 2] = (code *)PTR_LAB_04384c98;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0x1f0) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x1f0);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_398)[uVar24 * 2] = pcVar26;
    (&local_390)[uVar24 * 2] = pcVar20;
  }
  (&local_398)[uVar22 * 2] = (char *)0x0;
  (&local_390)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_6c8,&local_398,0x330);
  memcpy(asStack_9f8,&local_398,0x330);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_398)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar2 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_6d8[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_6c7 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_9f8 + lVar15 * 0x10) = (&local_398)[lVar15 * 2];
  *(undefined1 **)(asStack_9f8 + (lVar15 * 2 + 1) * 8) = &LAB_021eb850;
  FUN_00151fe0(param_1,0,2);
  local_a00[0] = FUN_0014feb0(param_1,0xffffffff);
  local_a08 = param_1;
  if ((*PTR_DAT_04384cb8 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04384cb8);
    puVar3 = PTR_DAT_04384cc0;
    if (iVar9 != 0) {
      FUN_020faa40(PTR_DAT_04384cc0);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04384cb8);
    }
  }
  uVar10 = local_a00[0];
  uVar22 = *(ulong *)(PTR_DAT_04384cc0 + 8);
  puVar3 = *(undefined **)(PTR_DAT_04384cc0 + 0x10);
  if ((*PTR_DAT_04384cc0 & 1) == 0) {
    puVar3 = PTR_DAT_04384cc0 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_04384cc0 >> 1);
  }
  FUN_001514f0(param_1,puVar3,uVar22);
  FUN_00152550(param_1,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_021e8a60,0);
  FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_9f8;
      pbVar16 = (byte *)FUN_020fb254();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_6c8;
      pbVar16 = (byte *)FUN_020f93ac();
    }
    else {
      psVar17 = (string *)&local_398;
      pbVar16 = (byte *)FUN_020fa7e4();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar21);
    local_a10 = FUN_0014feb0(param_1,0xffffffff);
    local_a50 = (undefined1 *)CONCAT44(local_a50._4_4_,0x1e);
    local_a18 = param_1;
    FUN_008fe304(local_a20,param_1,&local_a50,&local_a08,local_a10);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,psVar17,2);
    uVar10 = local_a10;
    if (*(long *)(lVar13 + 0x220) == 0) {
      lVar15 = *(long *)(lVar13 + 0x228);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x228);
      uVar10 = local_a10;
    }
    local_a10 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_cast");
    }
    uVar10 = local_a10;
    uVar19 = *(undefined8 *)(lVar13 + 0x200);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar23);
    FUN_001516f0(param_1,uVar19,3);
    FUN_00152550(param_1,uVar10,&DAT_03955ac7);
    uVar10 = local_a10;
    uVar19 = *(undefined8 *)(lVar13 + 0x208);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar23);
    FUN_001516f0(param_1,uVar19,3);
    FUN_00152550(param_1,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_a50 = (undefined1 *)CONCAT44(local_a50._4_4_,1);
      FUN_008fe304(local_a20,param_1,&local_a50,&local_a18,local_a10);
    }
    else {
      local_a20[0] = 1;
      local_a50 = &LAB_021eb8a0;
      uStack_a48 = 0;
      local_a40 = lVar13;
      lStack_a38 = lVar23;
      FUN_021ebd2c(param_1,local_a20,&local_a50,local_a10);
      local_a20[0] = 2;
      local_a50 = &LAB_021eb8a4;
      uStack_a48 = 0;
      local_a40 = lVar13;
      lStack_a38 = lVar23;
      FUN_021ebd2c(param_1,local_a20,&local_a50,local_a10);
    }
    FUN_00151fe0(param_1,0,3);
    uVar10 = FUN_0014feb0(param_1,0xffffffff);
    local_a50 = (undefined1 *)CONCAT44(local_a50._4_4_,0x1e);
    FUN_008fe304(local_a20,param_1,&local_a50,&local_a08,uVar10);
    if (*(undefined1 **)(lVar13 + 0x1f8) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x230) != '\0') goto LAB_021eb070;
LAB_021ead58:
      if (param_1 == 0) goto LAB_021eb0d0;
LAB_021ead60:
      uVar12 = local_a10;
      FUN_00150260(param_1,uVar10);
    }
    else {
      uStack_a48 = 0;
      local_a20[0] = 4;
      local_a50 = *(undefined1 **)(lVar13 + 0x1f8);
      local_a40 = lVar13;
      lStack_a38 = lVar23;
      FUN_021ebd2c(param_1,local_a20,&local_a50,uVar10);
      if (*(char *)(lVar13 + 0x230) == '\0') goto LAB_021ead58;
LAB_021eb070:
      local_a20[0] = 1;
      local_a50 = &LAB_021eb8a0;
      uStack_a48 = 0;
      local_a40 = lVar13;
      lStack_a38 = lVar23;
      FUN_021ebd2c(param_1,local_a20,&local_a50,uVar10);
      local_a20[0] = 2;
      local_a50 = &LAB_021eb8a4;
      uStack_a48 = 0;
      local_a40 = lVar13;
      lStack_a38 = lVar23;
      FUN_021ebd2c(param_1,local_a20,&local_a50,uVar10);
      if (param_1 != 0) goto LAB_021ead60;
LAB_021eb0d0:
      uVar12 = local_a10;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar12);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_a18,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_021e421c();
      puVar3 = DAT_043dd7e0;
      if ((DAT_043dd7d0 & 1) == 0) {
        puVar3 = &DAT_043dd7d1;
      }
      FUN_00154450(param_1,puVar3);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_a50._0_4_ = 0x1e;
      FUN_008fe304(&local_a18,param_1,&local_a50,&local_a08,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,&local_398,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_a50 = (undefined1 *)CONCAT44(local_a50._4_4_,0x1e);
      FUN_008fe304(&local_a18,param_1,&local_a50,&local_a08,uVar12);
      local_a50 = *(undefined1 **)(lVar13 + 0x1f8);
      if (local_a50 != (undefined1 *)0x0) {
        uStack_a48 = 0;
        local_a18 = CONCAT44(local_a18._4_4_,4);
        local_a40 = lVar13;
        lStack_a38 = lVar23;
        FUN_021ebd2c(param_1,&local_a18,&local_a50,uVar12);
      }
      local_a18._0_4_ = 1;
      local_a50 = &LAB_021eb8a8;
      uStack_a48 = 0;
      local_a30 = 0;
      puStack_a28 = &DAT_03a7d3b8;
      local_a40 = lVar13;
      lStack_a38 = lVar23;
      FUN_021ec3e0(param_1,&local_a18,&local_a50,uVar12);
      local_a18 = CONCAT44(local_a18._4_4_,2);
      local_a50 = &LAB_021eb8ac;
      uStack_a48 = 0;
      local_a30 = 0;
      puStack_a28 = &DAT_03a7d3b8;
      local_a40 = lVar13;
      lStack_a38 = lVar23;
      FUN_021ec3e0(param_1,&local_a18,&local_a50,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_a00[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


