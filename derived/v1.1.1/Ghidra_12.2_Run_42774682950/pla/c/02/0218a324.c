/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0218a324; name: FUN_0218a324
 */


void FUN_0218a324(long param_1,long param_2)

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
  undefined1 *local_bd0;
  undefined8 uStack_bc8;
  long local_bc0;
  long lStack_bb8;
  undefined8 local_bb0;
  undefined *puStack_ba8;
  long local_ba0;
  undefined4 local_b98;
  long local_b90;
  undefined4 local_b88 [2];
  string asStack_b80 [928];
  undefined8 auStack_7e0 [2];
  string local_7d0;
  undefined1 auStack_7cf [7];
  size_t local_7c8;
  undefined1 *local_7c0;
  char *apcStack_430 [2];
  char *local_420;
  code *local_418;
  long local_410;
  undefined1 auStack_70 [16];
  
  if (((DAT_043dc090 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dc090), iVar9 != 0)) {
    local_410 = 0;
    local_418 = (code *)0x0;
    local_420 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437d100 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437d100);
      puVar3 = PTR_DAT_0437d108;
      if (iVar9 != 0) {
        FUN_00efb100(PTR_DAT_0437d108);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d100);
      }
    }
    pcVar27 = (char *)FUN_02185a3c(&local_420,PTR_DAT_0437d108);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043dc078,psVar17);
    lVar13 = local_410;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_420 & 1) != 0) && (local_410 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
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
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_0218d208;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_0218d208:
    FUN_00100250(PTR__string_04379718,&DAT_043dc078,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dc090);
  }
  std::string::string(&local_7d0,(string *)&DAT_043dc078);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043dc070);
  sVar2 = (ulong)((byte)local_7d0 >> 1);
  if (((byte)local_7d0 & 1) != 0) {
    sVar2 = local_7c8;
  }
  std::string::append((ulong)&local_7d0,(char)iVar9);
  if (((byte)local_7d0 & 1) == 0) {
    puVar28 = auStack_7cf;
    local_7c8 = (size_t)((byte)local_7d0 >> 1);
  }
  else {
    puVar28 = local_7c0;
  }
  snprintf(puVar28 + (sVar2 - 1),local_7c8,"%d",(ulong)DAT_043dc070);
  DAT_043dc070 = DAT_043dc070 + 1;
  if (((DAT_043dc0b0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dc0b0), iVar9 != 0)) {
    local_410 = 0;
    local_418 = (code *)0x0;
    local_420 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437d100 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437d100);
      puVar3 = PTR_DAT_0437d108;
      if (iVar9 != 0) {
        FUN_00efb100(PTR_DAT_0437d108);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d100);
      }
    }
    pcVar27 = (char *)FUN_02185a3c(&local_420,PTR_DAT_0437d108);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043dc098,psVar17);
    lVar13 = local_410;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_420 & 1) != 0) && (local_410 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
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
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_0218d35c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_0218d35c:
    FUN_00100250(PTR__string_04379718,&DAT_043dc098,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dc0b0);
  }
  puVar3 = DAT_043dc0a8;
  if ((DAT_043dc098 & 1) == 0) {
    puVar3 = &DAT_043dc099;
  }
  if (((byte)local_7d0 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_7d0 | 1);
  }
  else {
    puVar28 = local_7c0;
  }
  if (((DAT_043dc0c0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dc0c0), iVar9 != 0)) {
    DAT_043dc0b8 = 0x2f8;
    __cxa_guard_release(&DAT_043dc0c0);
  }
  if (((DAT_043dc0d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dc0d0), iVar9 != 0)) {
    DAT_043dc0c8 = 0x2ff;
    __cxa_guard_release(&DAT_043dc0d0);
  }
  uVar23 = DAT_043dc0b8;
  lVar13 = FUN_00153520(param_1,DAT_043dc0b8);
  if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2f8)) ||
     (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043dc0c8;
    lVar13 = FUN_00153520(param_1,DAT_043dc0c8);
    if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2f8)) ||
       (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0218da30();
      puVar4 = DAT_043dc0e8;
      if ((DAT_043dc0d8 & 1) == 0) {
        puVar4 = &DAT_043dc0d9;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar4);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar13;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar13 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar6 = 0;
      if (uVar25 != 0) {
        uVar6 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar6 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar5;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_FUN_0425b650;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x298);
  iVar9 = FUN_00154450(param_1,puVar28);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_0218d9f0,0);
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
  if ((((byte)local_7d0 & 1) != 0) && (local_7c0 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar7;
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
        FUN_02bcc824(plVar26,local_7c0,0,8);
        goto LAB_0218a690;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_7c0,0,8);
  }
LAB_0218a690:
  memset(&local_420,0,0x3b0);
  pcVar27 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar18 = lVar13 + 8;
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02186110;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02185d7c;
  }
  puVar1 = (ulong *)(lVar13 + 0x2f0);
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218a8bc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218a8bc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_420 = pcVar27;
  local_418 = pcVar21;
LAB_0218a8bc:
  pcVar27 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02186780;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02186234;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218aa00;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218aa00;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218aa00:
  pcVar27 = *(char **)(lVar13 + 0x80);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02186934;
  if (uVar11 != 0) {
    pcVar21 = FUN_021867d8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218ab44;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218ab44;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218ab44:
  pcVar27 = *(char **)(lVar13 + 0x98);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02186b08;
  if (uVar11 != 0) {
    pcVar21 = FUN_02186ac0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218ac88;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218ac88;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218ac88:
  pcVar27 = *(char **)(lVar13 + 0xb0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02186c5c;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02186b50;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218adcc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218adcc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218adcc:
  pcVar27 = *(char **)(lVar13 + 200);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02186e60;
  if (uVar11 != 0) {
    pcVar21 = FUN_02186d78;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218af10;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218af10;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218af10:
  pcVar27 = *(char **)(lVar13 + 0xe0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_02187054;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02186f78;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218b054;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218b054;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218b054:
  pcVar27 = *(char **)(lVar13 + 0xf8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_021871c0;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02187188;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218b198;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218b198;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218b198:
  pcVar27 = *(char **)(lVar13 + 0x110);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_02187240;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02187208;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218b2dc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218b2dc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218b2dc:
  pcVar27 = *(char **)(lVar13 + 0x128);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_021872d0;
  if (uVar11 != 0) {
    pcVar21 = FUN_02187288;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218b420;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218b420;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218b420:
  pcVar27 = *(char **)(lVar13 + 0x140);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_02187350;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02187318;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218b564;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218b564;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218b564:
  pcVar27 = *(char **)(lVar13 + 0x158);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0218760c;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02187398;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218b6a8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218b6a8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218b6a8:
  pcVar27 = *(char **)(lVar13 + 0x170);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02187c30;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02187720;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218b7ec;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218b7ec;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218b7ec:
  pcVar27 = *(char **)(lVar13 + 0x178);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02187db4;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02187c88;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218b930;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218b930;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218b930:
  pcVar27 = *(char **)(lVar13 + 400);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02187f38;
  if (uVar11 != 0) {
    pcVar21 = FUN_02187ef0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218ba74;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218ba74;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218ba74:
  pcVar27 = *(char **)(lVar13 + 0x1a8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02188250;
  if (uVar11 != 0) {
    pcVar21 = FUN_02187f80;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218bbb8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218bbb8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218bbb8:
  pcVar27 = *(char **)(lVar13 + 0x1c0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0218857c;
  if (uVar11 != 0) {
    pcVar21 = FUN_02188348;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218bcfc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218bcfc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218bcfc:
  pcVar27 = *(char **)(lVar13 + 0x1d8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_021888e0;
  if (uVar11 != 0) {
    pcVar21 = FUN_02188674;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218be40;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218be40;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218be40:
  pcVar27 = *(char **)(lVar13 + 0x1f0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02188a20;
  if (uVar11 != 0) {
    pcVar21 = FUN_021889d8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218bf84;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218bf84;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218bf84:
  pcVar27 = *(char **)(lVar13 + 0x208);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02188d84;
  if (uVar11 != 0) {
    pcVar21 = FUN_02188a68;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218c0c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218c0c8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218c0c8:
  pcVar27 = *(char **)(lVar13 + 0x220);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02188ec4;
  if (uVar11 != 0) {
    pcVar21 = FUN_02188e7c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218c20c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218c20c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218c20c:
  pcVar27 = *(char **)(lVar13 + 0x238);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02188f54;
  if (uVar11 != 0) {
    pcVar21 = FUN_02188f0c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218c350;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218c350;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218c350:
  pcVar27 = *(char **)(lVar13 + 0x250);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02188fe4;
  if (uVar11 != 0) {
    pcVar21 = FUN_02188f9c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218c494;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218c494;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218c494:
  pcVar27 = *(char **)(lVar13 + 0x268);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02189418;
  if (uVar11 != 0) {
    pcVar21 = FUN_0218902c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218c5d8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218c5d8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218c5d8:
  pcVar27 = *(char **)(lVar13 + 0x280);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_021898d8;
  if (uVar11 != 0) {
    pcVar21 = FUN_02189510;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218c71c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218c71c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218c71c:
  pcVar27 = *(char **)(lVar13 + 0x298);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0218a118;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_021899d0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a8) = pcVar21;
            goto LAB_0218c830;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      goto LAB_0218c830;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0218c830:
  pcVar27 = *(char **)(lVar13 + 0x2a0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0218a2f0;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_0218a2bc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x2a8) = pcVar21;
        uVar11 = (uint)*puVar1;
        goto joined_r0x0218c918;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2f0) = *(ulong *)(lVar13 + 0x2f0) | 1L << (uVar23 & 0x3f);
      uVar11 = (uint)*puVar1;
      goto joined_r0x0218c918;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_420)[uVar25 * 2] = pcVar27;
  (&local_418)[uVar25 * 2] = pcVar21;
  uVar11 = (uint)*puVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x0218c918:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  uVar23 = uVar25;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x181);
    if ((*(byte *)(lVar24 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_420)[uVar25 * 2] = pcVar27;
    (&local_418)[uVar25 * 2] = (code *)PTR_LAB_0437d0d8;
    uVar11 = (uint)*puVar1;
  }
  uVar25 = uVar23;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x289);
    if ((*(byte *)(lVar24 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    (&local_420)[uVar23 * 2] = pcVar27;
    (&local_418)[uVar23 * 2] = (code *)PTR_LAB_0437d0e0;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar13 + 0x2a8) != 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x1c9);
    if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar13 + 0x2a8);
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_420)[uVar25 * 2] = pcVar27;
    (&local_418)[uVar25 * 2] = pcVar21;
  }
  (&local_420)[uVar23 * 2] = (char *)0x0;
  (&local_418)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_7d0,&local_420,0x3b0);
  memcpy(asStack_b80,&local_420,0x3b0);
  lVar24 = FUN_008cca50();
  lVar15 = uVar23 - 1;
  pcVar27 = (&local_420)[lVar15 * 2];
  sVar14 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar24 + 0x1c8) >> 1);
  if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar24 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar9 = std::string::compare(lVar24 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    auStack_7e0[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_7cf + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_b80 + lVar15 * 0x10) = (&local_420)[lVar15 * 2];
  *(undefined1 **)(asStack_b80 + (lVar15 * 2 + 1) * 8) = &LAB_0218d830;
  FUN_00151fe0(param_1,0,2);
  local_b88[0] = FUN_0014feb0(param_1,0xffffffff);
  local_b90 = param_1;
  if ((*PTR_DAT_0437d100 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_0437d100);
    puVar3 = PTR_DAT_0437d108;
    if (iVar9 != 0) {
      FUN_00efb100(PTR_DAT_0437d108);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d100);
    }
  }
  uVar10 = local_b88[0];
  uVar23 = *(ulong *)(PTR_DAT_0437d108 + 8);
  puVar3 = *(undefined **)(PTR_DAT_0437d108 + 0x10);
  if ((*PTR_DAT_0437d108 & 1) == 0) {
    puVar3 = PTR_DAT_0437d108 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_0437d108 >> 1);
  }
  FUN_001514f0(param_1,puVar3,uVar23);
  FUN_00152550(param_1,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_02189fb0,0);
  FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      psVar17 = asStack_b80;
      pbVar16 = (byte *)FUN_00efb914();
    }
    else if (lVar24 == 0) {
      psVar17 = &local_7d0;
      pbVar16 = (byte *)FUN_00ef9a58();
    }
    else {
      psVar17 = (string *)&local_420;
      pbVar16 = (byte *)FUN_00efaea4();
    }
    pbVar22 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar22 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_b98 = FUN_0014feb0(param_1,0xffffffff);
    local_bd0 = (undefined1 *)CONCAT44(local_bd0._4_4_,0x1e);
    local_ba0 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_bd0,&local_b90,local_b98);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,psVar17,2);
    uVar10 = local_b98;
    if (*(long *)(lVar13 + 0x2d8) == 0) {
      lVar15 = *(long *)(lVar13 + 0x2e0);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x2e0);
      uVar10 = local_b98;
    }
    local_b98 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_cast");
    }
    uVar10 = local_b98;
    uVar20 = *(undefined8 *)(lVar13 + 0x2b8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar10,&DAT_03955ac7);
    uVar10 = local_b98;
    uVar20 = *(undefined8 *)(lVar13 + 0x2c0);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_bd0 = (undefined1 *)CONCAT44(local_bd0._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_bd0,&local_ba0,local_b98);
    }
    else {
      local_bd0 = &LAB_0218d920;
      uStack_bc8 = 0;
      local_bc0 = lVar13;
      lStack_bb8 = lVar18;
      FUN_0218d880(param_1,1,&local_bd0,local_b98);
      local_bd0 = &LAB_0218d924;
      uStack_bc8 = 0;
      local_bc0 = lVar13;
      lStack_bb8 = lVar18;
      FUN_0218d880(param_1,2,&local_bd0,local_b98);
    }
    FUN_00151fe0(param_1,0,3);
    uVar10 = FUN_0014feb0(param_1,0xffffffff);
    local_bd0 = (undefined1 *)CONCAT44(local_bd0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_bd0,&local_b90,uVar10);
    if (*(undefined1 **)(lVar13 + 0x2b0) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x2e8) != '\0') goto LAB_0218cfa8;
LAB_0218ccb4:
      if (param_1 == 0) goto LAB_0218cffc;
LAB_0218ccbc:
      uVar12 = local_b98;
      FUN_00150260(param_1,uVar10);
    }
    else {
      uStack_bc8 = 0;
      local_bd0 = *(undefined1 **)(lVar13 + 0x2b0);
      local_bc0 = lVar13;
      lStack_bb8 = lVar18;
      FUN_0218d880(param_1,4,&local_bd0,uVar10);
      if (*(char *)(lVar13 + 0x2e8) == '\0') goto LAB_0218ccb4;
LAB_0218cfa8:
      local_bd0 = &LAB_0218d920;
      uStack_bc8 = 0;
      local_bc0 = lVar13;
      lStack_bb8 = lVar18;
      FUN_0218d880(param_1,1,&local_bd0,uVar10);
      local_bd0 = &LAB_0218d924;
      uStack_bc8 = 0;
      local_bc0 = lVar13;
      lStack_bb8 = lVar18;
      FUN_0218d880(param_1,2,&local_bd0,uVar10);
      if (param_1 != 0) goto LAB_0218ccbc;
LAB_0218cffc:
      uVar12 = local_b98;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar12);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_ba0,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_021851fc();
      puVar3 = DAT_043dc000;
      if ((DAT_043dbff0 & 1) == 0) {
        puVar3 = &DAT_043dbff1;
      }
      FUN_00154450(param_1,puVar3);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_bd0._0_4_ = 0x1e;
      FUN_008fe304(&local_ba0,param_1,&local_bd0,&local_b90,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,&local_420,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_bd0 = (undefined1 *)CONCAT44(local_bd0._4_4_,0x1e);
      FUN_008fe304(&local_ba0,param_1,&local_bd0,&local_b90,uVar12);
      local_bd0 = *(undefined1 **)(lVar13 + 0x2b0);
      if (local_bd0 != (undefined1 *)0x0) {
        uStack_bc8 = 0;
        local_bc0 = lVar13;
        lStack_bb8 = lVar18;
        FUN_0218d880(param_1,4,&local_bd0,uVar12);
      }
      local_bd0 = &LAB_0218d9e8;
      uStack_bc8 = 0;
      local_bb0 = 0;
      puStack_ba8 = &DAT_03a7d378;
      local_bc0 = lVar13;
      lStack_bb8 = lVar18;
      FUN_0218d930(param_1,1,&local_bd0,uVar12);
      local_bd0 = &LAB_0218d9ec;
      uStack_bc8 = 0;
      local_bb0 = 0;
      puStack_ba8 = &DAT_03a7d378;
      local_bc0 = lVar13;
      lStack_bb8 = lVar18;
      FUN_0218d930(param_1,2,&local_bd0,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_b88[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


