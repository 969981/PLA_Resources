/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024ff084; name: FUN_024ff084
 */


void FUN_024ff084(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  size_t sVar16;
  byte *pbVar17;
  string *psVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  code *pcVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  undefined1 *puVar29;
  undefined1 *local_b40;
  undefined8 uStack_b38;
  long local_b30;
  long lStack_b28;
  undefined8 local_b20;
  undefined *puStack_b18;
  long local_b10;
  undefined4 local_b08;
  long local_b00;
  undefined4 local_af8 [2];
  string asStack_af0 [880];
  undefined8 auStack_780 [2];
  string local_770;
  undefined1 auStack_76f [7];
  size_t local_768;
  undefined1 *local_760;
  char *apcStack_400 [2];
  char *local_3f0;
  code *local_3e8;
  long local_3e0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043e8658 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8658), iVar9 != 0)) {
    local_3e0 = 0;
    local_3e8 = (code *)0x0;
    local_3f0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04387788 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04387788);
      puVar2 = PTR_DAT_04387790;
      if (iVar9 != 0) {
        FUN_024fcbc0(PTR_DAT_04387790);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04387788);
      }
    }
    pcVar28 = (char *)FUN_024fbf90(&local_3f0,PTR_DAT_04387790);
    psVar18 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043e8640,psVar18);
    lVar13 = local_3e0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3f0 & 1) != 0) && (local_3e0 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar7;
      }
      uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar13,0,8);
          goto LAB_02501a98;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar13,0,8);
    }
LAB_02501a98:
    FUN_00100250(PTR__string_04379718,&DAT_043e8640,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8658);
  }
  std::string::string(&local_770,(string *)&DAT_043e8640);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e8638);
  if (((byte)local_770 & 1) == 0) {
    uVar24 = (ulong)((byte)local_770 >> 1);
  }
  else {
    uVar24 = local_768;
  }
  std::string::append((ulong)&local_770,(char)iVar9);
  if (((byte)local_770 & 1) == 0) {
    puVar29 = auStack_76f;
    local_768 = (size_t)((byte)local_770 >> 1);
  }
  else {
    puVar29 = local_760;
  }
  snprintf(puVar29 + (uVar24 - 1),local_768,"%d",(ulong)DAT_043e8638);
  DAT_043e8638 = DAT_043e8638 + 1;
  if (((DAT_043e8678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8678), iVar9 != 0)) {
    local_3e0 = 0;
    local_3e8 = (code *)0x0;
    local_3f0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04387788 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04387788);
      puVar2 = PTR_DAT_04387790;
      if (iVar9 != 0) {
        FUN_024fcbc0(PTR_DAT_04387790);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04387788);
      }
    }
    pcVar28 = (char *)FUN_024fbf90(&local_3f0,PTR_DAT_04387790);
    psVar18 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043e8660,psVar18);
    lVar13 = local_3e0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3f0 & 1) != 0) && (local_3e0 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar7;
      }
      uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar13,0,8);
          goto LAB_02501bec;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar13,0,8);
    }
LAB_02501bec:
    FUN_00100250(PTR__string_04379718,&DAT_043e8660,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8678);
  }
  puVar2 = DAT_043e8670;
  if ((DAT_043e8660 & 1) == 0) {
    puVar2 = &DAT_043e8661;
  }
  if (((byte)local_770 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_770 | 1);
  }
  else {
    puVar29 = local_760;
  }
  if (((DAT_043e8688 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8688), iVar9 != 0)) {
    DAT_043e8680 = 0x2b8;
    __cxa_guard_release(&DAT_043e8688);
  }
  if (((DAT_043e8698 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8698), iVar9 != 0)) {
    DAT_043e8690 = 0x2bf;
    __cxa_guard_release(&DAT_043e8698);
  }
  uVar24 = DAT_043e8680;
  lVar13 = FUN_00153520(param_1,DAT_043e8680);
  if ((uVar24 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2b8)) ||
     (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar24 = DAT_043e8690;
    lVar13 = FUN_00153520(param_1,DAT_043e8690);
    if ((uVar24 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2b8)) ||
       (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_025025b0();
      puVar3 = DAT_043e86b0;
      if ((DAT_043e86a0 & 1) == 0) {
        puVar3 = &DAT_043e86a1;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar3);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar21 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar20[1] = uVar21;
  puVar20[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar20[3] = lVar13;
  lVar25 = *(long *)(param_2 + 0x20);
  puVar20[4] = lVar25;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar20[2];
    uVar24 = *(ulong *)(lVar13 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar24 = uVar26 - 1 & uVar24;
    }
    else if (uVar26 <= uVar24) {
      uVar5 = 0;
      if (uVar26 != 0) {
        uVar5 = uVar24 / uVar26;
      }
      uVar24 = uVar24 - uVar5 * uVar26;
    }
    *(undefined8 **)(puVar20[1] + uVar24 * 8) = puVar20 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar21 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar21;
  puVar20[7] = uVar4;
  puVar20[8] = *(undefined8 *)(param_2 + 0x40);
  puVar20[9] = *(undefined8 *)(param_2 + 0x48);
  puVar20[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar20 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar20 = &PTR_FUN_0425c400;
  memcpy(puVar20 + 0xc,(void *)(param_2 + 0x60),600);
  iVar9 = FUN_00154450(param_1,puVar29);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_02502570,0);
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
  FUN_001522a0(param_1,puVar2);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar2);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_770 & 1) != 0) && (local_760 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar27 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar27 = plVar7;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar25 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar25 + 0x38d488) = 1;
        *(undefined8 *)(lVar25 + 0x38d478) = 0;
        *(undefined8 *)(lVar25 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar25 + 0x38d480)) {
        FUN_02bcc824(plVar27,local_760,0,8);
        goto LAB_024ff3e8;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,local_760,0,8);
  }
LAB_024ff3e8:
  memset(&local_3f0,0,0x380);
  puVar6 = PTR_DAT_04386a88;
  puVar2 = PTR_DAT_043816f8;
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *puVar6 = 1;
  *puVar2 = 1;
  pcVar28 = *(char **)(lVar13 + 0x60);
  *(undefined1 **)(lVar13 + 0x298) = &LAB_02502a04;
  *(undefined1 **)(lVar13 + 0x2a0) = &LAB_02502ac0;
  *(undefined1 **)(lVar13 + 0x288) = &LAB_02502b10;
  *(undefined1 **)(lVar13 + 0x290) = &LAB_02502b50;
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar19 = lVar13 + 8;
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fd428;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024fd010;
  }
  puVar1 = (ulong *)(lVar13 + 0x2b0);
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar26 = 0;
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_024ff66c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_024ff66c;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  uVar26 = 1;
  local_3f0 = pcVar28;
  local_3e8 = pcVar22;
LAB_024ff66c:
  pcVar28 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fd594;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fd480;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_024ff7b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_024ff7b0;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_024ff7b0:
  pcVar28 = *(char **)(lVar13 + 0x80);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fd8c0;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fd6a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_024ff8f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_024ff8f4;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_024ff8f4:
  pcVar28 = *(char **)(lVar13 + 0x98);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fdc34;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fd9b8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_024ffa38;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_024ffa38;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_024ffa38:
  pcVar28 = *(char **)(lVar13 + 0xb0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fdd74;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fdd2c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_024ffb7c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_024ffb7c;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_024ffb7c:
  pcVar28 = *(char **)(lVar13 + 200);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fdf3c;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fddbc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_024ffcc0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_024ffcc0;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_024ffcc0:
  pcVar28 = *(char **)(lVar13 + 0xe0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fe07c;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fe034;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_024ffe04;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_024ffe04;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_024ffe04:
  pcVar28 = *(char **)(lVar13 + 0xf8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fe1d0;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fe0c4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_024fff48;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_024fff48;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_024fff48:
  pcVar28 = *(char **)(lVar13 + 0x110);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_024fe33c;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024fe304;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_0250008c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_0250008c;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_0250008c:
  pcVar28 = *(char **)(lVar13 + 0x128);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_024fe3bc;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024fe384;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_025001d0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_025001d0;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_025001d0:
  pcVar28 = *(char **)(lVar13 + 0x140);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_024fe43c;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024fe404;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_02500314;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_02500314;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02500314:
  pcVar28 = *(char **)(lVar13 + 0x158);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fe590;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024fe484;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_02500458;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_02500458;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02500458:
  pcVar28 = *(char **)(lVar13 + 0x170);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fe6f4;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fe6ac;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_0250059c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_0250059c;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_0250059c:
  pcVar28 = *(char **)(lVar13 + 0x188);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fe824;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fe73c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_025006e0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_025006e0;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_025006e0:
  pcVar28 = *(char **)(lVar13 + 0x1a0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fe984;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fe93c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_02500824;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_02500824;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02500824:
  pcVar28 = *(char **)(lVar13 + 0x1b8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_024fea04;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024fe9cc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_02500968;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_02500968;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02500968:
  pcVar28 = *(char **)(lVar13 + 0x1d0);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_024feba8;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024fea4c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_02500aac;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_02500aac;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02500aac:
  pcVar28 = *(char **)(lVar13 + 0x1e8);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_024fed6c;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024fed34;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_02500bf0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_02500bf0;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02500bf0:
  pcVar28 = *(char **)(lVar13 + 0x200);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_024fedec;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024fedb4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_02500d34;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_02500d34;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02500d34:
  pcVar28 = *(char **)(lVar13 + 0x218);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024fee7c;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fee34;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_02500e78;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_02500e78;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02500e78:
  pcVar28 = *(char **)(lVar13 + 0x230);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_024feefc;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024feec4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_02500fbc;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_02500fbc;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02500fbc:
  pcVar28 = *(char **)(lVar13 + 0x248);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_024fef7c;
  if (uVar11 != 0) {
    pcVar22 = (code *)&LAB_024fef44;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x268) = pcVar22;
            goto LAB_02501100;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      goto LAB_02501100;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02501100:
  pcVar28 = *(char **)(lVar13 + 0x260);
  sVar14 = strlen(pcVar28);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar28,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar22 = FUN_024ff024;
  if (uVar11 != 0) {
    pcVar22 = FUN_024fefc4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar25);
    sVar14 = strlen(pcVar28);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar9 == 0)) {
      iVar9 = (int)uVar24;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x268) = pcVar22;
        uVar11 = (uint)*puVar1;
        goto joined_r0x025011e8;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar22;
      }
      else {
        if (iVar9 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b0) = *(ulong *)(lVar13 + 0x2b0) | 1L << (uVar24 & 0x3f);
      uVar11 = (uint)*puVar1;
      goto joined_r0x025011e8;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  (&local_3f0)[uVar26 * 2] = pcVar28;
  (&local_3e8)[uVar26 * 2] = pcVar22;
  uVar11 = (uint)*puVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
joined_r0x025011e8:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  uVar24 = uVar26;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar25 = FUN_008cca50();
    pcVar28 = (char *)(lVar25 + 0x181);
    if ((*(byte *)(lVar25 + 0x180) & 1) != 0) {
      pcVar28 = *(char **)(lVar25 + 400);
    }
    uVar24 = (ulong)((int)uVar26 + 1);
    (&local_3f0)[uVar26 * 2] = pcVar28;
    (&local_3e8)[uVar26 * 2] = (code *)PTR_LAB_04387800;
    uVar11 = (uint)*puVar1;
  }
  uVar26 = uVar24;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar25 = FUN_008cca50();
    pcVar28 = (char *)(lVar25 + 0x289);
    if ((*(byte *)(lVar25 + 0x288) & 1) != 0) {
      pcVar28 = *(char **)(lVar25 + 0x298);
    }
    uVar26 = (ulong)((int)uVar24 + 1);
    (&local_3f0)[uVar24 * 2] = pcVar28;
    (&local_3e8)[uVar24 * 2] = (code *)PTR_LAB_04387808;
  }
  uVar24 = uVar26;
  if (*(long *)(lVar13 + 0x268) != 0) {
    lVar25 = FUN_008cca50();
    pcVar28 = (char *)(lVar25 + 0x1c9);
    if ((*(byte *)(lVar25 + 0x1c8) & 1) != 0) {
      pcVar28 = *(char **)(lVar25 + 0x1d8);
    }
    pcVar22 = *(code **)(lVar13 + 0x268);
    uVar24 = (ulong)((int)uVar26 + 1);
    (&local_3f0)[uVar26 * 2] = pcVar28;
    (&local_3e8)[uVar26 * 2] = pcVar22;
  }
  (&local_3f0)[uVar24 * 2] = (char *)0x0;
  (&local_3e8)[uVar24 * 2] = (code *)0x0;
  memcpy(&local_770,&local_3f0,0x380);
  memcpy(asStack_af0,&local_3f0,0x380);
  lVar25 = FUN_008cca50();
  lVar15 = uVar24 - 1;
  pcVar28 = (&local_3f0)[lVar15 * 2];
  sVar16 = strlen(pcVar28);
  if ((*(byte *)(lVar25 + 0x1c8) & 1) == 0) {
    sVar14 = (size_t)(*(byte *)(lVar25 + 0x1c8) >> 1);
  }
  else {
    sVar14 = *(size_t *)(lVar25 + 0x1d0);
  }
  if ((sVar16 == sVar14) &&
     (iVar9 = std::string::compare(lVar25 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
     iVar9 == 0)) {
    auStack_780[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_76f + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_af0 + lVar15 * 0x10) = (&local_3f0)[lVar15 * 2];
  *(undefined1 **)(asStack_af0 + (lVar15 * 2 + 1) * 8) = &LAB_02502060;
  FUN_00151fe0(param_1,0,2);
  local_af8[0] = FUN_0014feb0(param_1,0xffffffff);
  local_b00 = param_1;
  if ((*PTR_DAT_04387788 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04387788);
    puVar2 = PTR_DAT_04387790;
    if (iVar9 != 0) {
      FUN_024fcbc0(PTR_DAT_04387790);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04387788);
    }
  }
  uVar10 = local_af8[0];
  uVar24 = *(ulong *)(PTR_DAT_04387790 + 8);
  puVar2 = *(undefined **)(PTR_DAT_04387790 + 0x10);
  if ((*PTR_DAT_04387790 & 1) == 0) {
    puVar2 = PTR_DAT_04387790 + 1;
    uVar24 = (ulong)((byte)*PTR_DAT_04387790 >> 1);
  }
  FUN_001514f0(param_1,puVar2,uVar24);
  FUN_00152550(param_1,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_025020b0,0);
  FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
  lVar25 = 0;
  do {
    if (lVar25 == 1) {
      psVar18 = asStack_af0;
      pbVar17 = (byte *)FUN_024fb33c();
    }
    else if (lVar25 == 0) {
      psVar18 = &local_770;
      pbVar17 = (byte *)FUN_024fb15c();
    }
    else {
      psVar18 = (string *)&local_3f0;
      pbVar17 = (byte *)FUN_024fb51c();
    }
    pbVar23 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar23 = pbVar17 + 1;
    }
    FUN_00154450(param_1,pbVar23);
    local_b08 = FUN_0014feb0(param_1,0xffffffff);
    local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
    local_b10 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_b40,&local_b00,local_b08);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,psVar18,2);
    uVar10 = local_b08;
    if (*(long *)(lVar13 + 0x298) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_check");
    }
    uVar10 = local_b08;
    if (*(long *)(lVar13 + 0x2a0) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_cast");
    }
    uVar10 = local_b08;
    uVar21 = *(undefined8 *)(lVar13 + 0x278);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar19);
    FUN_001516f0(param_1,uVar21,3);
    FUN_00152550(param_1,uVar10,&DAT_03955ac7);
    uVar10 = local_b08;
    uVar21 = *(undefined8 *)(lVar13 + 0x280);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar19);
    FUN_001516f0(param_1,uVar21,3);
    FUN_00152550(param_1,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_b40,&local_b10,local_b08);
    }
    else {
      local_b40 = &LAB_025021a0;
      uStack_b38 = 0;
      local_b30 = lVar13;
      lStack_b28 = lVar19;
      FUN_02502100(param_1,1,&local_b40,local_b08);
      local_b40 = &LAB_025024ac;
      uStack_b38 = 0;
      local_b30 = lVar13;
      lStack_b28 = lVar19;
      FUN_02502100(param_1,2,&local_b40,local_b08);
    }
    FUN_00151fe0(param_1,0,3);
    uVar10 = FUN_0014feb0(param_1,0xffffffff);
    local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_b40,&local_b00,uVar10);
    if (*(undefined1 **)(lVar13 + 0x270) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x2a8) != '\0') goto LAB_0250186c;
LAB_025015e8:
      if (param_1 == 0) goto LAB_025018c0;
LAB_025015f0:
      uVar12 = local_b08;
      FUN_00150260(param_1,uVar10);
    }
    else {
      uStack_b38 = 0;
      local_b40 = *(undefined1 **)(lVar13 + 0x270);
      local_b30 = lVar13;
      lStack_b28 = lVar19;
      FUN_02502100(param_1,4,&local_b40,uVar10);
      if (*(char *)(lVar13 + 0x2a8) == '\0') goto LAB_025015e8;
LAB_0250186c:
      local_b40 = &LAB_025021a0;
      uStack_b38 = 0;
      local_b30 = lVar13;
      lStack_b28 = lVar19;
      FUN_02502100(param_1,1,&local_b40,uVar10);
      local_b40 = &LAB_025024ac;
      uStack_b38 = 0;
      local_b30 = lVar13;
      lStack_b28 = lVar19;
      FUN_02502100(param_1,2,&local_b40,uVar10);
      if (param_1 != 0) goto LAB_025015f0;
LAB_025018c0:
      uVar12 = local_b08;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar12);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_b10,0xfffffffe);
    lVar25 = lVar25 + 1;
    if (lVar25 == 3) {
      FUN_024fb754();
      puVar2 = DAT_043e8610;
      if ((DAT_043e8600 & 1) == 0) {
        puVar2 = &DAT_043e8601;
      }
      FUN_00154450(param_1,puVar2);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_b40._0_4_ = 0x1e;
      FUN_008fe304(&local_b10,param_1,&local_b40,&local_b00,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,&local_3f0,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
      FUN_008fe304(&local_b10,param_1,&local_b40,&local_b00,uVar12);
      local_b40 = *(undefined1 **)(lVar13 + 0x270);
      if (local_b40 != (undefined1 *)0x0) {
        uStack_b38 = 0;
        local_b30 = lVar13;
        lStack_b28 = lVar19;
        FUN_02502100(param_1,4,&local_b40,uVar12);
      }
      local_b40 = &LAB_02502568;
      uStack_b38 = 0;
      local_b20 = 0;
      puStack_b18 = &DAT_03a7d5c8;
      local_b30 = lVar13;
      lStack_b28 = lVar19;
      FUN_025024b0(param_1,1,&local_b40,uVar12);
      local_b40 = &LAB_0250256c;
      uStack_b38 = 0;
      local_b20 = 0;
      puStack_b18 = &DAT_03a7d5c8;
      local_b30 = lVar13;
      lStack_b28 = lVar19;
      FUN_025024b0(param_1,2,&local_b40,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_af8[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


