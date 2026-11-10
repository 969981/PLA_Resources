/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024476d0; name: FUN_024476d0
 */


void FUN_024476d0(long param_1,long param_2)

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
  undefined1 *local_a20;
  undefined8 uStack_a18;
  long local_a10;
  long lStack_a08;
  undefined8 local_a00;
  undefined *puStack_9f8;
  undefined4 local_9f0 [2];
  long local_9e8;
  undefined4 local_9e0;
  long local_9d8;
  undefined4 local_9d0 [2];
  string asStack_9c8 [784];
  undefined8 auStack_6b8 [2];
  string local_6a8;
  undefined1 auStack_6a7 [7];
  size_t local_6a0;
  undefined1 *local_698;
  char *apcStack_398 [2];
  char *local_388;
  code *local_380;
  long local_378;
  
  if (((DAT_043e5a18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5a18), iVar9 != 0)) {
    local_378 = 0;
    local_380 = (code *)0x0;
    local_388 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386f30 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04386f30);
      puVar3 = PTR_DAT_04386f38;
      if (iVar9 != 0) {
        FUN_0240a7d0(PTR_DAT_04386f38);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386f30);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_04386f38 + 0x10);
    if ((*PTR_DAT_04386f38 & 1) == 0) {
      puVar3 = PTR_DAT_04386f38 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_388,(ulong)puVar3);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e5a00,psVar17);
    lVar13 = local_378;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_388 & 1) != 0) && (local_378 != 0)) {
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
          goto LAB_02449a58;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_02449a58:
    FUN_00100250(PTR__string_04379718,&DAT_043e5a00,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5a18);
  }
  std::string::string(&local_6a8,(string *)&DAT_043e5a00);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e59f8);
  sVar2 = (ulong)((byte)local_6a8 >> 1);
  if (((byte)local_6a8 & 1) != 0) {
    sVar2 = local_6a0;
  }
  std::string::append((ulong)&local_6a8,(char)iVar9);
  if (((byte)local_6a8 & 1) == 0) {
    puVar27 = auStack_6a7;
    local_6a0 = (size_t)((byte)local_6a8 >> 1);
  }
  else {
    puVar27 = local_698;
  }
  snprintf(puVar27 + (sVar2 - 1),local_6a0,"%d",(ulong)DAT_043e59f8);
  DAT_043e59f8 = DAT_043e59f8 + 1;
  if (((DAT_043e5a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5a38), iVar9 != 0)) {
    local_378 = 0;
    local_380 = (code *)0x0;
    local_388 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386f30 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04386f30);
      puVar3 = PTR_DAT_04386f38;
      if (iVar9 != 0) {
        FUN_0240a7d0(PTR_DAT_04386f38);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386f30);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_04386f38 + 0x10);
    if ((*PTR_DAT_04386f38 & 1) == 0) {
      puVar3 = PTR_DAT_04386f38 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_388,(ulong)puVar3);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e5a20,psVar17);
    lVar13 = local_378;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_388 & 1) != 0) && (local_378 != 0)) {
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
          goto LAB_02449bc8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_02449bc8:
    FUN_00100250(PTR__string_04379718,&DAT_043e5a20,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5a38);
  }
  puVar3 = DAT_043e5a30;
  if ((DAT_043e5a20 & 1) == 0) {
    puVar3 = &DAT_043e5a21;
  }
  if (((byte)local_6a8 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_6a8 | 1);
  }
  else {
    puVar27 = local_698;
  }
  if (((DAT_043e5a48 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5a48), iVar9 != 0)) {
    DAT_043e5a40 = 0x250;
    __cxa_guard_release(&DAT_043e5a48);
  }
  if (((DAT_043e5a58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5a58), iVar9 != 0)) {
    DAT_043e5a50 = 599;
    __cxa_guard_release(&DAT_043e5a58);
  }
  uVar22 = DAT_043e5a40;
  lVar13 = FUN_00153520(param_1,DAT_043e5a40);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x250)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar22 = DAT_043e5a50;
    lVar13 = FUN_00153520(param_1,DAT_043e5a50);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x250)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0244a0b0();
      puVar4 = DAT_043e5a70;
      if ((DAT_043e5a60 & 1) == 0) {
        puVar4 = &DAT_043e5a61;
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
  *puVar18 = &PTR_FUN_0425bfd8;
  memcpy(puVar18 + 0xc,(void *)(param_2 + 0x60),0x1f0);
  iVar9 = FUN_00154450(param_1,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_0244a070,0);
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
  if ((((byte)local_6a8 & 1) != 0) && (local_698 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_698,0,8);
        goto LAB_02447a3c;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_698,0,8);
  }
LAB_02447a3c:
  memset(&local_388,0,800);
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
  pcVar20 = FUN_02444ad4;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_024449b8;
  }
  puVar1 = (ulong *)(lVar13 + 0x248);
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02447c40;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02447c40;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_388 = pcVar26;
  local_380 = pcVar20;
LAB_02447c40:
  pcVar26 = *(char **)(lVar13 + 0x78);
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
  pcVar20 = FUN_02444c48;
  if (uVar11 != 0) {
    pcVar20 = FUN_02444c00;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02447d80;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02447d80;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02447d80:
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
  pcVar20 = FUN_02444cd8;
  if (uVar11 != 0) {
    pcVar20 = FUN_02444c90;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02447ec0;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02447ec0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02447ec0:
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
  pcVar20 = FUN_02444d68;
  if (uVar11 != 0) {
    pcVar20 = FUN_02444d20;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448000;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448000;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448000:
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
  pcVar20 = FUN_02444df8;
  if (uVar11 != 0) {
    pcVar20 = FUN_02444db0;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448140;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448140;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448140:
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
  pcVar20 = FUN_0244516c;
  if (uVar11 != 0) {
    pcVar20 = FUN_02444e40;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448280;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448280;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448280:
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
  pcVar20 = FUN_0244558c;
  if (uVar11 != 0) {
    pcVar20 = FUN_02445264;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_024483c0;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_024483c0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024483c0:
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
  pcVar20 = FUN_02445ad4;
  if (uVar11 != 0) {
    pcVar20 = FUN_02445684;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448500;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448500;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448500:
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
  pcVar20 = FUN_02445f24;
  if (uVar11 != 0) {
    pcVar20 = FUN_02445bcc;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448640;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448640;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448640:
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
  pcVar20 = FUN_02446064;
  if (uVar11 != 0) {
    pcVar20 = FUN_0244601c;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448780;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448780;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448780:
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
  pcVar20 = FUN_0244620c;
  if (uVar11 != 0) {
    pcVar20 = FUN_024460ac;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_024488c0;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_024488c0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024488c0:
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
  pcVar20 = FUN_02446438;
  if (uVar11 != 0) {
    pcVar20 = FUN_02446304;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448a00;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448a00;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448a00:
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
  pcVar20 = FUN_024466c0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0244656c;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448b40;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448b40;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448b40:
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
  pcVar20 = FUN_02446a34;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02446824;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448c80;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448c80;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448c80:
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
  pcVar20 = FUN_02446b74;
  if (uVar11 != 0) {
    pcVar20 = FUN_02446b2c;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448dc0;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448dc0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448dc0:
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
  pcVar20 = FUN_02446c04;
  if (uVar11 != 0) {
    pcVar20 = FUN_02446bbc;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02448f00;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02448f00;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02448f00:
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
  pcVar20 = (code *)&LAB_02446c84;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02446c4c;
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
            *(code **)(lVar13 + 0x200) = pcVar20;
            goto LAB_02449040;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      goto LAB_02449040;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02449040:
  pcVar26 = *(char **)(lVar13 + 0x1f8);
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
  pcVar20 = (code *)&LAB_0244769c;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02446ccc;
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
        *(code **)(lVar13 + 0x200) = pcVar20;
        uVar11 = (uint)*puVar1;
        goto joined_r0x02449124;
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
      *(ulong *)(lVar13 + 0x248) = *(ulong *)(lVar13 + 0x248) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*puVar1;
      goto joined_r0x02449124;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_388)[uVar24 * 2] = pcVar26;
  (&local_380)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*puVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x02449124:
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
    (&local_388)[uVar24 * 2] = pcVar26;
    (&local_380)[uVar24 * 2] = (code *)PTR_LAB_04386f08;
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
    (&local_388)[uVar22 * 2] = pcVar26;
    (&local_380)[uVar22 * 2] = (code *)PTR_LAB_04386f10;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0x200) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x200);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_388)[uVar24 * 2] = pcVar26;
    (&local_380)[uVar24 * 2] = pcVar20;
  }
  (&local_388)[uVar22 * 2] = (char *)0x0;
  (&local_380)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_6a8,&local_388,800);
  memcpy(asStack_9c8,&local_388,800);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_388)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar2 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_6b8[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_6a7 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_9c8 + lVar15 * 0x10) = (&local_388)[lVar15 * 2];
  *(code **)(asStack_9c8 + (lVar15 * 2 + 1) * 8) = FUN_02449fc0;
  FUN_00151fe0(param_1,0,2);
  local_9d0[0] = FUN_0014feb0(param_1,0xffffffff);
  local_9d8 = param_1;
  if ((*PTR_DAT_04386f30 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04386f30);
    puVar3 = PTR_DAT_04386f38;
    if (iVar9 != 0) {
      FUN_0240a7d0(PTR_DAT_04386f38);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04386f30);
    }
  }
  uVar10 = local_9d0[0];
  uVar22 = *(ulong *)(PTR_DAT_04386f38 + 8);
  puVar3 = *(undefined **)(PTR_DAT_04386f38 + 0x10);
  if ((*PTR_DAT_04386f38 & 1) == 0) {
    puVar3 = PTR_DAT_04386f38 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_04386f38 >> 1);
  }
  FUN_001514f0(param_1,puVar3,uVar22);
  FUN_00152550(param_1,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_1,FUN_0244a010,0);
  FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_9c8;
      pbVar16 = (byte *)FUN_0240adf0();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_6a8;
      pbVar16 = (byte *)FUN_024092f0();
    }
    else {
      psVar17 = (string *)&local_388;
      pbVar16 = (byte *)FUN_0240a574();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar21);
    local_9e0 = FUN_0014feb0(param_1,0xffffffff);
    local_a20 = (undefined1 *)CONCAT44(local_a20._4_4_,0x1e);
    local_9e8 = param_1;
    FUN_008fe304(local_9f0,param_1,&local_a20,&local_9d8,local_9e0);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,psVar17,2);
    uVar10 = local_9e0;
    if (*(long *)(lVar13 + 0x230) == 0) {
      lVar15 = *(long *)(lVar13 + 0x238);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x238);
      uVar10 = local_9e0;
    }
    local_9e0 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_cast");
    }
    uVar10 = local_9e0;
    uVar19 = *(undefined8 *)(lVar13 + 0x210);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar23);
    FUN_001516f0(param_1,uVar19,3);
    FUN_00152550(param_1,uVar10,&DAT_03955ac7);
    uVar10 = local_9e0;
    uVar19 = *(undefined8 *)(lVar13 + 0x218);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar23);
    FUN_001516f0(param_1,uVar19,3);
    FUN_00152550(param_1,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_a20 = (undefined1 *)CONCAT44(local_a20._4_4_,1);
      FUN_008fe304(local_9f0,param_1,&local_a20,&local_9e8,local_9e0);
    }
    else {
      local_9f0[0] = 1;
      local_a20 = &LAB_0244a060;
      uStack_a18 = 0;
      local_a10 = lVar13;
      lStack_a08 = lVar23;
      FUN_0244a538(param_1,local_9f0,&local_a20,local_9e0);
      local_9f0[0] = 2;
      local_a20 = &LAB_0244a064;
      uStack_a18 = 0;
      local_a10 = lVar13;
      lStack_a08 = lVar23;
      FUN_0244a538(param_1,local_9f0,&local_a20,local_9e0);
    }
    FUN_00151fe0(param_1,0,3);
    uVar10 = FUN_0014feb0(param_1,0xffffffff);
    local_a20 = (undefined1 *)CONCAT44(local_a20._4_4_,0x1e);
    FUN_008fe304(local_9f0,param_1,&local_a20,&local_9d8,uVar10);
    if (*(undefined1 **)(lVar13 + 0x208) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x240) != '\0') goto LAB_024497dc;
LAB_024494c4:
      if (param_1 == 0) goto LAB_0244983c;
LAB_024494cc:
      uVar12 = local_9e0;
      FUN_00150260(param_1,uVar10);
    }
    else {
      uStack_a18 = 0;
      local_9f0[0] = 4;
      local_a20 = *(undefined1 **)(lVar13 + 0x208);
      local_a10 = lVar13;
      lStack_a08 = lVar23;
      FUN_0244a538(param_1,local_9f0,&local_a20,uVar10);
      if (*(char *)(lVar13 + 0x240) == '\0') goto LAB_024494c4;
LAB_024497dc:
      local_9f0[0] = 1;
      local_a20 = &LAB_0244a060;
      uStack_a18 = 0;
      local_a10 = lVar13;
      lStack_a08 = lVar23;
      FUN_0244a538(param_1,local_9f0,&local_a20,uVar10);
      local_9f0[0] = 2;
      local_a20 = &LAB_0244a064;
      uStack_a18 = 0;
      local_a10 = lVar13;
      lStack_a08 = lVar23;
      FUN_0244a538(param_1,local_9f0,&local_a20,uVar10);
      if (param_1 != 0) goto LAB_024494cc;
LAB_0244983c:
      uVar12 = local_9e0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar12);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_9e8,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_024446f4();
      puVar3 = DAT_043e59e8;
      if ((DAT_043e59d8 & 1) == 0) {
        puVar3 = &DAT_043e59d9;
      }
      FUN_00154450(param_1,puVar3);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_a20._0_4_ = 0x1e;
      FUN_008fe304(&local_9e8,param_1,&local_a20,&local_9d8,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,&local_388,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_a20 = (undefined1 *)CONCAT44(local_a20._4_4_,0x1e);
      FUN_008fe304(&local_9e8,param_1,&local_a20,&local_9d8,uVar12);
      local_a20 = *(undefined1 **)(lVar13 + 0x208);
      if (local_a20 != (undefined1 *)0x0) {
        uStack_a18 = 0;
        local_9e8 = CONCAT44(local_9e8._4_4_,4);
        local_a10 = lVar13;
        lStack_a08 = lVar23;
        FUN_0244a538(param_1,&local_9e8,&local_a20,uVar12);
      }
      local_9e8._0_4_ = 1;
      local_a20 = &LAB_0244a068;
      uStack_a18 = 0;
      local_a00 = 0;
      puStack_9f8 = &DAT_03a7d560;
      local_a10 = lVar13;
      lStack_a08 = lVar23;
      FUN_0244abec(param_1,&local_9e8,&local_a20,uVar12);
      local_9e8 = CONCAT44(local_9e8._4_4_,2);
      local_a20 = &LAB_0244a06c;
      uStack_a18 = 0;
      local_a00 = 0;
      puStack_9f8 = &DAT_03a7d560;
      local_a10 = lVar13;
      lStack_a08 = lVar23;
      FUN_0244abec(param_1,&local_9e8,&local_a20,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_9d0[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


