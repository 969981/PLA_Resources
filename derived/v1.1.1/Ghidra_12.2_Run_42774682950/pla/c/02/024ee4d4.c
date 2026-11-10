/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024ee4d4; name: FUN_024ee4d4
 */


undefined8 FUN_024ee4d4(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  undefined1 *local_960;
  undefined8 uStack_958;
  long local_950;
  long lStack_948;
  undefined8 local_940;
  undefined *puStack_938;
  undefined4 local_930 [2];
  long local_928;
  undefined4 local_920;
  long local_918;
  undefined4 local_910 [2];
  string asStack_908 [720];
  undefined8 auStack_638 [2];
  string local_628;
  undefined1 auStack_627 [7];
  size_t local_620;
  undefined1 *local_618;
  char *apcStack_358 [2];
  char *local_348;
  code *local_340;
  long local_338;
  
  puVar5 = PTR_DAT_04387018;
  if (((DAT_043e83f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e83f8), iVar9 != 0)) {
    local_338 = 0;
    local_340 = (code *)0x0;
    local_348 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04387018);
      puVar2 = PTR_DAT_04387020;
      if (iVar9 != 0) {
        FUN_0240dae0(PTR_DAT_04387020);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04387018);
      }
    }
    pcVar26 = (char *)FUN_024f1ebc(&local_348,PTR_DAT_04387020);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e83e0,psVar17);
    lVar13 = local_338;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_348 & 1) != 0) && (local_338 != 0)) {
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
          goto LAB_024f0334;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_024f0334:
    FUN_00100250(PTR__string_04379718,&DAT_043e83e0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e83f8);
  }
  std::string::string(&local_628,(string *)&DAT_043e83e0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e83d8);
  sVar1 = (ulong)((byte)local_628 >> 1);
  if (((byte)local_628 & 1) != 0) {
    sVar1 = local_620;
  }
  std::string::append((ulong)&local_628,(char)iVar9);
  if (((byte)local_628 & 1) == 0) {
    puVar27 = auStack_627;
    local_620 = (size_t)((byte)local_628 >> 1);
  }
  else {
    puVar27 = local_618;
  }
  snprintf(puVar27 + (sVar1 - 1),local_620,"%d",(ulong)DAT_043e83d8);
  DAT_043e83d8 = DAT_043e83d8 + 1;
  if (((DAT_043e8418 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8418), iVar9 != 0)) {
    local_338 = 0;
    local_340 = (code *)0x0;
    local_348 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04387018);
      puVar2 = PTR_DAT_04387020;
      if (iVar9 != 0) {
        FUN_0240dae0(PTR_DAT_04387020);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04387018);
      }
    }
    pcVar26 = (char *)FUN_024f1ebc(&local_348,PTR_DAT_04387020);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e8400,psVar17);
    lVar13 = local_338;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_348 & 1) != 0) && (local_338 != 0)) {
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
          goto LAB_024f0480;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_024f0480:
    FUN_00100250(PTR__string_04379718,&DAT_043e8400,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8418);
  }
  puVar2 = DAT_043e8410;
  if ((DAT_043e8400 & 1) == 0) {
    puVar2 = &DAT_043e8401;
  }
  if (((byte)local_628 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_628 | 1);
  }
  else {
    puVar27 = local_618;
  }
  if (((DAT_043e8428 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8428), iVar9 != 0)) {
    DAT_043e8420 = 0x1e0;
    __cxa_guard_release(&DAT_043e8428);
  }
  if (((DAT_043e8438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8438), iVar9 != 0)) {
    DAT_043e8430 = 0x1e7;
    __cxa_guard_release(&DAT_043e8438);
  }
  uVar22 = DAT_043e8420;
  lVar13 = FUN_00153520(param_2,DAT_043e8420);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1e0)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e8430;
    lVar13 = FUN_00153520(param_2,DAT_043e8430);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1e0)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_024f3d30();
      puVar3 = DAT_043e8450;
      if ((DAT_043e8440 & 1) == 0) {
        puVar3 = &DAT_043e8441;
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
  *puVar18 = &PTR_FUN_0425c3d8;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x180);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_024f3cf0,0);
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
  if ((((byte)local_628 & 1) != 0) && (local_618 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_618,0,8);
        goto LAB_024ee848;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_618,0,8);
  }
LAB_024ee848:
  memset(&local_348,0,0x2e0);
  pcVar26 = *(char **)(lVar13 + 0x60);
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
  pcVar20 = FUN_024f23cc;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f21fc;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024eea64;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024eea64;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_348 = pcVar26;
  local_340 = pcVar20;
LAB_024eea64:
  pcVar26 = *(char **)(lVar13 + 0x78);
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
  pcVar20 = FUN_024f253c;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f245c;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024eeba4;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024eeba4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024eeba4:
  pcVar26 = *(char **)(lVar13 + 0x90);
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
  pcVar20 = FUN_024f2760;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f25cc;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024eece4;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024eece4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024eece4:
  pcVar26 = *(char **)(lVar13 + 0xa8);
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
  pcVar20 = FUN_024f28cc;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f27f0;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024eee24;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024eee24;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024eee24:
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
  pcVar20 = FUN_024f29a4;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f295c;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024eef64;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024eef64;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024eef64:
  pcVar26 = *(char **)(lVar13 + 0xd8);
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
  pcVar20 = FUN_024f2a34;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f29ec;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024ef0a4;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024ef0a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024ef0a4:
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
  pcVar20 = FUN_024f2b84;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f2a7c;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024ef1e4;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024ef1e4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024ef1e4:
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
  pcVar20 = FUN_024f2d1c;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f2c14;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024ef324;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024ef324;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024ef324:
  pcVar26 = *(char **)(lVar13 + 0x120);
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
  pcVar20 = FUN_024f2eac;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f2dac;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024ef464;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024ef464;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024ef464:
  pcVar26 = *(char **)(lVar13 + 0x138);
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
  pcVar20 = FUN_024f2f84;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f2f3c;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024ef5a4;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024ef5a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024ef5a4:
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
  pcVar20 = FUN_024f30cc;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f2fcc;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024ef6e4;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024ef6e4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024ef6e4:
  pcVar26 = *(char **)(lVar13 + 0x168);
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
  pcVar20 = FUN_024f3244;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f315c;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024ef824;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024ef824;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024ef824:
  pcVar26 = *(char **)(lVar13 + 0x180);
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
  pcVar20 = (code *)&LAB_024f3a28;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_024f32d4;
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
            *(code **)(lVar13 + 400) = pcVar20;
            goto LAB_024ef934;
          }
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      goto LAB_024ef934;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024ef934:
  pcVar26 = *(char **)(lVar13 + 0x188);
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
  pcVar20 = FUN_024f3c2c;
  if (uVar11 != 0) {
    pcVar20 = FUN_024f3bcc;
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
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 400) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1d8);
        goto joined_r0x024efa18;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1d8) = *(ulong *)(lVar13 + 0x1d8) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1d8);
      goto joined_r0x024efa18;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_348)[uVar24 * 2] = pcVar26;
  (&local_340)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1d8);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x024efa18:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1d8);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1d8);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_348)[uVar24 * 2] = pcVar26;
    (&local_340)[uVar24 * 2] = (code *)PTR_LAB_04386ff0;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1d8);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_348)[uVar22 * 2] = pcVar26;
    (&local_340)[uVar22 * 2] = (code *)PTR_LAB_04386ff8;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 400) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 400);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_348)[uVar24 * 2] = pcVar26;
    (&local_340)[uVar24 * 2] = pcVar20;
  }
  (&local_348)[uVar22 * 2] = (char *)0x0;
  (&local_340)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_628,&local_348,0x2e0);
  memcpy(asStack_908,&local_348,0x2e0);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_348)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_638[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_627 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_908 + lVar15 * 0x10) = (&local_348)[lVar15 * 2];
  *(undefined1 **)(asStack_908 + (lVar15 * 2 + 1) * 8) = &LAB_024f3c90;
  FUN_00151fe0(param_2,0,2);
  local_910[0] = FUN_0014feb0(param_2,0xffffffff);
  local_918 = param_2;
  if ((*puVar5 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04387018);
    puVar5 = PTR_DAT_04387020;
    if (iVar9 != 0) {
      FUN_0240dae0(PTR_DAT_04387020);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04387018);
    }
  }
  uVar10 = local_910[0];
  uVar22 = *(ulong *)(PTR_DAT_04387020 + 8);
  puVar5 = *(undefined **)(PTR_DAT_04387020 + 0x10);
  if ((*PTR_DAT_04387020 & 1) == 0) {
    puVar5 = PTR_DAT_04387020 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_04387020 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_024f38b0,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_908;
      pbVar16 = (byte *)FUN_0240e100();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_628;
      pbVar16 = (byte *)FUN_0240c684();
    }
    else {
      psVar17 = (string *)&local_348;
      pbVar16 = (byte *)FUN_0240d884();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_920 = FUN_0014feb0(param_2,0xffffffff);
    local_960 = (undefined1 *)CONCAT44(local_960._4_4_,0x1e);
    local_928 = param_2;
    FUN_008fe304(local_930,param_2,&local_960,&local_918,local_920);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_920;
    if (*(long *)(lVar13 + 0x1c0) == 0) {
      lVar15 = *(long *)(lVar13 + 0x1c8);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x1c8);
      uVar10 = local_920;
    }
    local_920 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_920;
    uVar19 = *(undefined8 *)(lVar13 + 0x1a0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_920;
    uVar19 = *(undefined8 *)(lVar13 + 0x1a8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_960 = (undefined1 *)CONCAT44(local_960._4_4_,1);
      FUN_008fe304(local_930,param_2,&local_960,&local_928,local_920);
    }
    else {
      local_930[0] = 1;
      local_960 = &LAB_024f3ce0;
      uStack_958 = 0;
      local_950 = lVar13;
      lStack_948 = lVar23;
      FUN_024f416c(param_2,local_930,&local_960,local_920);
      local_930[0] = 2;
      local_960 = &LAB_024f3ce4;
      uStack_958 = 0;
      local_950 = lVar13;
      lStack_948 = lVar23;
      FUN_024f416c(param_2,local_930,&local_960,local_920);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_960 = (undefined1 *)CONCAT44(local_960._4_4_,0x1e);
    FUN_008fe304(local_930,param_2,&local_960,&local_918,uVar10);
    if (*(undefined1 **)(lVar13 + 0x198) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x1d0) != '\0') goto LAB_024f00c8;
LAB_024efdac:
      if (param_2 == 0) goto LAB_024f0128;
LAB_024efdb4:
      uVar12 = local_920;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_958 = 0;
      local_930[0] = 4;
      local_960 = *(undefined1 **)(lVar13 + 0x198);
      local_950 = lVar13;
      lStack_948 = lVar23;
      FUN_024f416c(param_2,local_930,&local_960,uVar10);
      if (*(char *)(lVar13 + 0x1d0) == '\0') goto LAB_024efdac;
LAB_024f00c8:
      local_930[0] = 1;
      local_960 = &LAB_024f3ce0;
      uStack_958 = 0;
      local_950 = lVar13;
      lStack_948 = lVar23;
      FUN_024f416c(param_2,local_930,&local_960,uVar10);
      local_930[0] = 2;
      local_960 = &LAB_024f3ce4;
      uStack_958 = 0;
      local_950 = lVar13;
      lStack_948 = lVar23;
      FUN_024f416c(param_2,local_930,&local_960,uVar10);
      if (param_2 != 0) goto LAB_024efdb4;
LAB_024f0128:
      uVar12 = local_920;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_928,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_024f167c();
      puVar5 = DAT_043e83a8;
      if ((DAT_043e8398 & 1) == 0) {
        puVar5 = &DAT_043e8399;
      }
      FUN_00154450(param_2,puVar5);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_960._0_4_ = 0x1e;
      FUN_008fe304(&local_928,param_2,&local_960,&local_918,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_348,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_960 = (undefined1 *)CONCAT44(local_960._4_4_,0x1e);
      FUN_008fe304(&local_928,param_2,&local_960,&local_918,uVar12);
      local_960 = *(undefined1 **)(lVar13 + 0x198);
      if (local_960 != (undefined1 *)0x0) {
        uStack_958 = 0;
        local_928 = CONCAT44(local_928._4_4_,4);
        local_950 = lVar13;
        lStack_948 = lVar23;
        FUN_024f416c(param_2,&local_928,&local_960,uVar12);
      }
      local_928._0_4_ = 1;
      local_960 = &LAB_024f3ce8;
      uStack_958 = 0;
      local_940 = 0;
      puStack_938 = &DAT_03a7d5c0;
      local_950 = lVar13;
      lStack_948 = lVar23;
      FUN_024f4820(param_2,&local_928,&local_960,uVar12);
      local_928 = CONCAT44(local_928._4_4_,2);
      local_960 = &LAB_024f3cec;
      uStack_958 = 0;
      local_940 = 0;
      puStack_938 = &DAT_03a7d5c0;
      local_950 = lVar13;
      lStack_948 = lVar23;
      FUN_024f4820(param_2,&local_928,&local_960,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_910[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


