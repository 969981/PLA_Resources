/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00de6e54; name: FUN_00de6e54
 */


undefined8 FUN_00de6e54(long param_1,long param_2)

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
  undefined1 *local_840;
  undefined8 uStack_838;
  long local_830;
  long lStack_828;
  undefined8 local_820;
  undefined *puStack_818;
  long local_810;
  undefined4 local_808;
  long local_800;
  undefined4 local_7f8 [2];
  string asStack_7f0 [624];
  undefined8 auStack_580 [2];
  string local_570;
  undefined1 auStack_56f [7];
  size_t local_568;
  undefined1 *local_560;
  char *apcStack_300 [2];
  char *local_2f0;
  code *local_2e8;
  long local_2e0;
  undefined1 auStack_70 [16];
  
  puVar5 = PTR_DAT_0437bad8;
  if (((DAT_043ae038 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ae038), iVar9 != 0)) {
    local_2e0 = 0;
    local_2e8 = (code *)0x0;
    local_2f0 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437bad8);
      puVar2 = PTR_DAT_0437baf0;
      if (iVar9 != 0) {
        FUN_00deb210(PTR_DAT_0437baf0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437bad8);
      }
    }
    pcVar26 = (char *)FUN_00dea5e4(&local_2f0,PTR_DAT_0437baf0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043ae020,psVar17);
    lVar13 = local_2e0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2f0 & 1) != 0) && (local_2e0 != 0)) {
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
          goto LAB_00de84fc;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00de84fc:
    FUN_00100250(PTR__string_04379718,&DAT_043ae020,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ae038);
  }
  std::string::string(&local_570,(string *)&DAT_043ae020);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043ae018);
  sVar1 = (ulong)((byte)local_570 >> 1);
  if (((byte)local_570 & 1) != 0) {
    sVar1 = local_568;
  }
  std::string::append((ulong)&local_570,(char)iVar9);
  if (((byte)local_570 & 1) == 0) {
    puVar27 = auStack_56f;
    local_568 = (size_t)((byte)local_570 >> 1);
  }
  else {
    puVar27 = local_560;
  }
  snprintf(puVar27 + (sVar1 - 1),local_568,"%d",(ulong)DAT_043ae018);
  DAT_043ae018 = DAT_043ae018 + 1;
  if (((DAT_043ae058 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ae058), iVar9 != 0)) {
    local_2e0 = 0;
    local_2e8 = (code *)0x0;
    local_2f0 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437bad8);
      puVar2 = PTR_DAT_0437baf0;
      if (iVar9 != 0) {
        FUN_00deb210(PTR_DAT_0437baf0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437bad8);
      }
    }
    pcVar26 = (char *)FUN_00dea5e4(&local_2f0,PTR_DAT_0437baf0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043ae040,psVar17);
    lVar13 = local_2e0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2f0 & 1) != 0) && (local_2e0 != 0)) {
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
          goto LAB_00de8648;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00de8648:
    FUN_00100250(PTR__string_04379718,&DAT_043ae040,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ae058);
  }
  puVar2 = DAT_043ae050;
  if ((DAT_043ae040 & 1) == 0) {
    puVar2 = &DAT_043ae041;
  }
  if (((byte)local_570 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_570 | 1);
  }
  else {
    puVar27 = local_560;
  }
  if (((DAT_043ae068 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ae068), iVar9 != 0)) {
    DAT_043ae060 = 0xf0;
    __cxa_guard_release(&DAT_043ae068);
  }
  if (((DAT_043ae078 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ae078), iVar9 != 0)) {
    DAT_043ae070 = 0xf7;
    __cxa_guard_release(&DAT_043ae078);
  }
  uVar22 = DAT_043ae060;
  lVar13 = FUN_00153520(param_2,DAT_043ae060);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xf0)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043ae070;
    lVar13 = FUN_00153520(param_2,DAT_043ae070);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xf0)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00dee340();
      puVar3 = DAT_043ae090;
      if ((DAT_043ae080 & 1) == 0) {
        puVar3 = &DAT_043ae081;
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
  *puVar18 = &PTR_FUN_041ee5d0;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x90);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_00dee300,0);
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
  if ((((byte)local_570 & 1) != 0) && (local_560 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_560,0,8);
        goto LAB_00de71c8;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_560,0,8);
  }
LAB_00de71c8:
  memset(&local_2f0,0,0x280);
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
  pcVar20 = FUN_00deba14;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00deb5f4;
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
            *(code **)(lVar13 + 0xa0) = pcVar20;
            goto LAB_00de73e4;
          }
          *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_00de73e4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2f0 = pcVar26;
  local_2e8 = pcVar20;
LAB_00de73e4:
  pcVar26 = *(char **)(lVar13 + 0x68);
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
  pcVar20 = FUN_00debde0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00deba90;
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
            *(code **)(lVar13 + 0xa0) = pcVar20;
            goto LAB_00de7524;
          }
          *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_00de7524;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00de7524:
  pcVar26 = *(char **)(lVar13 + 0x70);
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
  pcVar20 = (code *)&LAB_00debfe0;
  if (uVar11 != 0) {
    pcVar20 = FUN_00debe50;
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
            *(code **)(lVar13 + 0xa0) = pcVar20;
            goto LAB_00de7664;
          }
          *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_00de7664;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00de7664:
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
  pcVar20 = FUN_00dec3f0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00dec050;
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
            *(code **)(lVar13 + 0xa0) = pcVar20;
            goto LAB_00de77a4;
          }
          *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_00de77a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00de77a4:
  pcVar26 = *(char **)(lVar13 + 0x80);
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
  pcVar20 = (code *)&LAB_00dec5f8;
  if (uVar11 != 0) {
    pcVar20 = FUN_00dec460;
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
            *(code **)(lVar13 + 0xa0) = pcVar20;
            goto LAB_00de78e4;
          }
          *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_00de78e4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00de78e4:
  pcVar26 = *(char **)(lVar13 + 0x88);
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
  pcVar20 = FUN_00dec9c4;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00dec668;
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
            *(code **)(lVar13 + 0xa0) = pcVar20;
            goto LAB_00de7a24;
          }
          *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_00de7a24;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00de7a24:
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
  pcVar20 = (code *)&LAB_00dedf34;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00deca40;
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
            *(code **)(lVar13 + 0xa0) = pcVar20;
            goto LAB_00de7b34;
          }
          *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_00de7b34;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00de7b34:
  pcVar26 = *(char **)(lVar13 + 0x98);
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
  pcVar20 = (code *)&LAB_00dee10c;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00dee0d8;
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
        *(code **)(lVar13 + 0xa0) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
        goto joined_r0x00de7c18;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
      goto joined_r0x00de7c18;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x00de7c18:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2f0)[uVar24 * 2] = pcVar26;
    (&local_2e8)[uVar24 * 2] = (code *)PTR_LAB_0437bae0;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_2f0)[uVar22 * 2] = pcVar26;
    (&local_2e8)[uVar22 * 2] = (code *)PTR_LAB_0437bae8;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0xa0) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0xa0);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2f0)[uVar24 * 2] = pcVar26;
    (&local_2e8)[uVar24 * 2] = pcVar20;
  }
  (&local_2f0)[uVar22 * 2] = (char *)0x0;
  (&local_2e8)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_570,&local_2f0,0x280);
  memcpy(asStack_7f0,&local_2f0,0x280);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_2f0)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_580[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_56f + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7f0 + lVar15 * 0x10) = (&local_2f0)[lVar15 * 2];
  *(undefined1 **)(asStack_7f0 + (lVar15 * 2 + 1) * 8) = &LAB_00dee140;
  FUN_00151fe0(param_2,0,2);
  local_7f8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_800 = param_2;
  if ((*puVar5 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_0437bad8);
    puVar5 = PTR_DAT_0437baf0;
    if (iVar9 != 0) {
      FUN_00deb210(PTR_DAT_0437baf0);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437bad8);
    }
  }
  uVar10 = local_7f8[0];
  uVar22 = *(ulong *)(PTR_DAT_0437baf0 + 8);
  puVar5 = *(undefined **)(PTR_DAT_0437baf0 + 0x10);
  if ((*PTR_DAT_0437baf0 & 1) == 0) {
    puVar5 = PTR_DAT_0437baf0 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_0437baf0 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00ded020,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_7f0;
      pbVar16 = (byte *)FUN_00de9994();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_570;
      pbVar16 = (byte *)FUN_00de97b4();
    }
    else {
      psVar17 = (string *)&local_2f0;
      pbVar16 = (byte *)FUN_00de9b74();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_808 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    local_810 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_840,&local_800,local_808);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_808;
    if (*(long *)(lVar13 + 0xd0) == 0) {
      lVar15 = *(long *)(lVar13 + 0xd8);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0xd8);
      uVar10 = local_808;
    }
    local_808 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_808;
    uVar19 = *(undefined8 *)(lVar13 + 0xb0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_808;
    uVar19 = *(undefined8 *)(lVar13 + 0xb8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_840,&local_810,local_808);
    }
    else {
      local_840 = &LAB_00dee230;
      uStack_838 = 0;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dee190(param_2,1,&local_840,local_808);
      local_840 = &LAB_00dee234;
      uStack_838 = 0;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dee190(param_2,2,&local_840,local_808);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_840,&local_800,uVar10);
    if (*(undefined1 **)(lVar13 + 0xa8) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0xe0) != '\0') goto LAB_00de82a4;
LAB_00de7fac:
      if (param_2 == 0) goto LAB_00de82f8;
LAB_00de7fb4:
      uVar12 = local_808;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_838 = 0;
      local_840 = *(undefined1 **)(lVar13 + 0xa8);
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dee190(param_2,4,&local_840,uVar10);
      if (*(char *)(lVar13 + 0xe0) == '\0') goto LAB_00de7fac;
LAB_00de82a4:
      local_840 = &LAB_00dee230;
      uStack_838 = 0;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dee190(param_2,1,&local_840,uVar10);
      local_840 = &LAB_00dee234;
      uStack_838 = 0;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dee190(param_2,2,&local_840,uVar10);
      if (param_2 != 0) goto LAB_00de7fb4;
LAB_00de82f8:
      uVar12 = local_808;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_810,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_00de9dac();
      puVar5 = DAT_043adf58;
      if ((DAT_043adf48 & 1) == 0) {
        puVar5 = &DAT_043adf49;
      }
      FUN_00154450(param_2,puVar5);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_840._0_4_ = 0x1e;
      FUN_008fe304(&local_810,param_2,&local_840,&local_800,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_2f0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
      FUN_008fe304(&local_810,param_2,&local_840,&local_800,uVar12);
      local_840 = *(undefined1 **)(lVar13 + 0xa8);
      if (local_840 != (undefined1 *)0x0) {
        uStack_838 = 0;
        local_830 = lVar13;
        lStack_828 = lVar23;
        FUN_00dee190(param_2,4,&local_840,uVar12);
      }
      local_840 = &LAB_00dee2f8;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a78780;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dee240(param_2,1,&local_840,uVar12);
      local_840 = &LAB_00dee2fc;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a78780;
      local_830 = lVar13;
      lStack_828 = lVar23;
      FUN_00dee240(param_2,2,&local_840,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7f8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


