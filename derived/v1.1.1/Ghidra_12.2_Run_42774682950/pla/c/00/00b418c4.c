/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b418c4; name: FUN_00b418c4
 */


undefined8 FUN_00b418c4(long param_1,long param_2)

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
  undefined1 *local_810;
  undefined8 uStack_808;
  long local_800;
  long lStack_7f8;
  undefined8 local_7f0;
  undefined *puStack_7e8;
  undefined4 local_7e0 [2];
  long local_7d8;
  undefined4 local_7d0;
  long local_7c8;
  undefined4 local_7c0 [2];
  string asStack_7b8 [608];
  undefined8 auStack_558 [2];
  string local_548;
  undefined1 auStack_547 [7];
  size_t local_540;
  undefined1 *local_538;
  char *apcStack_2e8 [2];
  char *local_2d8;
  code *local_2d0;
  long local_2c8;
  
  puVar5 = PTR_DAT_0437abc8;
  if (((DAT_043aac48 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aac48), iVar9 != 0)) {
    local_2c8 = 0;
    local_2d0 = (code *)0x0;
    local_2d8 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437abc8);
      puVar2 = PTR_DAT_0437abe0;
      if (iVar9 != 0) {
        FUN_00b45b70(PTR_DAT_0437abe0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437abc8);
      }
    }
    pcVar26 = (char *)FUN_00b44f3c(&local_2d8,PTR_DAT_0437abe0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043aac30,psVar17);
    lVar13 = local_2c8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2d8 & 1) != 0) && (local_2c8 != 0)) {
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
          goto LAB_00b42e64;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00b42e64:
    FUN_00100250(PTR__string_04379718,&DAT_043aac30,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043aac48);
  }
  std::string::string(&local_548,(string *)&DAT_043aac30);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043aac28);
  sVar1 = (ulong)((byte)local_548 >> 1);
  if (((byte)local_548 & 1) != 0) {
    sVar1 = local_540;
  }
  std::string::append((ulong)&local_548,(char)iVar9);
  if (((byte)local_548 & 1) == 0) {
    puVar27 = auStack_547;
    local_540 = (size_t)((byte)local_548 >> 1);
  }
  else {
    puVar27 = local_538;
  }
  snprintf(puVar27 + (sVar1 - 1),local_540,"%d",(ulong)DAT_043aac28);
  DAT_043aac28 = DAT_043aac28 + 1;
  if (((DAT_043aac68 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aac68), iVar9 != 0)) {
    local_2c8 = 0;
    local_2d0 = (code *)0x0;
    local_2d8 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437abc8);
      puVar2 = PTR_DAT_0437abe0;
      if (iVar9 != 0) {
        FUN_00b45b70(PTR_DAT_0437abe0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437abc8);
      }
    }
    pcVar26 = (char *)FUN_00b44f3c(&local_2d8,PTR_DAT_0437abe0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043aac50,psVar17);
    lVar13 = local_2c8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2d8 & 1) != 0) && (local_2c8 != 0)) {
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
          goto LAB_00b42fb0;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00b42fb0:
    FUN_00100250(PTR__string_04379718,&DAT_043aac50,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043aac68);
  }
  puVar2 = DAT_043aac60;
  if ((DAT_043aac50 & 1) == 0) {
    puVar2 = &DAT_043aac51;
  }
  if (((byte)local_548 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_548 | 1);
  }
  else {
    puVar27 = local_538;
  }
  if (((DAT_043aac78 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aac78), iVar9 != 0)) {
    DAT_043aac70 = 0x138;
    __cxa_guard_release(&DAT_043aac78);
  }
  if (((DAT_043aac88 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aac88), iVar9 != 0)) {
    DAT_043aac80 = 0x13f;
    __cxa_guard_release(&DAT_043aac88);
  }
  uVar22 = DAT_043aac70;
  lVar13 = FUN_00153520(param_2,DAT_043aac70);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x138)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043aac80;
    lVar13 = FUN_00153520(param_2,DAT_043aac80);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x138)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00b48710();
      puVar3 = DAT_043aaca0;
      if ((DAT_043aac90 & 1) == 0) {
        puVar3 = &DAT_043aac91;
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
  *puVar18 = &PTR_FUN_041d5268;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xd8);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_00b486d0,0);
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
  if ((((byte)local_548 & 1) != 0) && (local_538 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_538,0,8);
        goto LAB_00b41c38;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_538,0,8);
  }
LAB_00b41c38:
  memset(&local_2d8,0,0x270);
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
  pcVar20 = FUN_00b462e0;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b45f58;
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
            *(code **)(lVar13 + 0xe8) = pcVar20;
            goto LAB_00b41e54;
          }
          *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_00b41e54;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2d8 = pcVar26;
  local_2d0 = pcVar20;
LAB_00b41e54:
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
  pcVar20 = FUN_00b46638;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b46370;
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
            *(code **)(lVar13 + 0xe8) = pcVar20;
            goto LAB_00b41f94;
          }
          *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_00b41f94;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2d8)[uVar24 * 2] = pcVar26;
  (&local_2d0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b41f94:
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
  pcVar20 = FUN_00b46890;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b466c8;
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
            *(code **)(lVar13 + 0xe8) = pcVar20;
            goto LAB_00b420d4;
          }
          *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_00b420d4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2d8)[uVar24 * 2] = pcVar26;
  (&local_2d0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b420d4:
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
  pcVar20 = FUN_00b46b34;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b46920;
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
            *(code **)(lVar13 + 0xe8) = pcVar20;
            goto LAB_00b42214;
          }
          *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_00b42214;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2d8)[uVar24 * 2] = pcVar26;
  (&local_2d0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b42214:
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
  pcVar20 = FUN_00b46c0c;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b46bc4;
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
            *(code **)(lVar13 + 0xe8) = pcVar20;
            goto LAB_00b42354;
          }
          *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_00b42354;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2d8)[uVar24 * 2] = pcVar26;
  (&local_2d0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b42354:
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
  pcVar20 = (code *)&LAB_00b48464;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00b46c54;
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
            *(code **)(lVar13 + 0xe8) = pcVar20;
            goto LAB_00b42464;
          }
          *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
      goto LAB_00b42464;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2d8)[uVar24 * 2] = pcVar26;
  (&local_2d0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b42464:
  pcVar26 = *(char **)(lVar13 + 0xe0);
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
  pcVar20 = (code *)&LAB_00b4863c;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_00b48608;
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
        *(code **)(lVar13 + 0xe8) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x130);
        goto joined_r0x00b42548;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x130) = *(ulong *)(lVar13 + 0x130) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x130);
      goto joined_r0x00b42548;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2d8)[uVar24 * 2] = pcVar26;
  (&local_2d0)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x130);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x00b42548:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x130);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x130);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2d8)[uVar24 * 2] = pcVar26;
    (&local_2d0)[uVar24 * 2] = (code *)PTR_LAB_0437abd0;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x130);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_2d8)[uVar22 * 2] = pcVar26;
    (&local_2d0)[uVar22 * 2] = (code *)PTR_LAB_0437abd8;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0xe8) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0xe8);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2d8)[uVar24 * 2] = pcVar26;
    (&local_2d0)[uVar24 * 2] = pcVar20;
  }
  (&local_2d8)[uVar22 * 2] = (char *)0x0;
  (&local_2d0)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_548,&local_2d8,0x270);
  memcpy(asStack_7b8,&local_2d8,0x270);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_2d8)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_558[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_547 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7b8 + lVar15 * 0x10) = (&local_2d8)[lVar15 * 2];
  *(undefined1 **)(asStack_7b8 + (lVar15 * 2 + 1) * 8) = &LAB_00b48670;
  FUN_00151fe0(param_2,0,2);
  local_7c0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_7c8 = param_2;
  if ((*puVar5 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_0437abc8);
    puVar5 = PTR_DAT_0437abe0;
    if (iVar9 != 0) {
      FUN_00b45b70(PTR_DAT_0437abe0);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437abc8);
    }
  }
  uVar10 = local_7c0[0];
  uVar22 = *(ulong *)(PTR_DAT_0437abe0 + 8);
  puVar5 = *(undefined **)(PTR_DAT_0437abe0 + 0x10);
  if ((*PTR_DAT_0437abe0 & 1) == 0) {
    puVar5 = PTR_DAT_0437abe0 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_0437abe0 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00b475d0,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_7b8;
      pbVar16 = (byte *)FUN_00b442e4();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_548;
      pbVar16 = (byte *)FUN_00b44104();
    }
    else {
      psVar17 = (string *)&local_2d8;
      pbVar16 = (byte *)FUN_00b444c4();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_7d0 = FUN_0014feb0(param_2,0xffffffff);
    local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
    local_7d8 = param_2;
    FUN_008fe304(local_7e0,param_2,&local_810,&local_7c8,local_7d0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_7d0;
    if (*(long *)(lVar13 + 0x118) == 0) {
      lVar15 = *(long *)(lVar13 + 0x120);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x120);
      uVar10 = local_7d0;
    }
    local_7d0 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_7d0;
    uVar19 = *(undefined8 *)(lVar13 + 0xf8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_7d0;
    uVar19 = *(undefined8 *)(lVar13 + 0x100);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_810 = (undefined1 *)CONCAT44(local_810._4_4_,1);
      FUN_008fe304(local_7e0,param_2,&local_810,&local_7d8,local_7d0);
    }
    else {
      local_7e0[0] = 1;
      local_810 = &LAB_00b486c0;
      uStack_808 = 0;
      local_800 = lVar13;
      lStack_7f8 = lVar23;
      FUN_00b48b4c(param_2,local_7e0,&local_810,local_7d0);
      local_7e0[0] = 2;
      local_810 = &LAB_00b486c4;
      uStack_808 = 0;
      local_800 = lVar13;
      lStack_7f8 = lVar23;
      FUN_00b48b4c(param_2,local_7e0,&local_810,local_7d0);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
    FUN_008fe304(local_7e0,param_2,&local_810,&local_7c8,uVar10);
    if (*(undefined1 **)(lVar13 + 0xf0) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x128) != '\0') goto LAB_00b42bf8;
LAB_00b428dc:
      if (param_2 == 0) goto LAB_00b42c58;
LAB_00b428e4:
      uVar12 = local_7d0;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_808 = 0;
      local_7e0[0] = 4;
      local_810 = *(undefined1 **)(lVar13 + 0xf0);
      local_800 = lVar13;
      lStack_7f8 = lVar23;
      FUN_00b48b4c(param_2,local_7e0,&local_810,uVar10);
      if (*(char *)(lVar13 + 0x128) == '\0') goto LAB_00b428dc;
LAB_00b42bf8:
      local_7e0[0] = 1;
      local_810 = &LAB_00b486c0;
      uStack_808 = 0;
      local_800 = lVar13;
      lStack_7f8 = lVar23;
      FUN_00b48b4c(param_2,local_7e0,&local_810,uVar10);
      local_7e0[0] = 2;
      local_810 = &LAB_00b486c4;
      uStack_808 = 0;
      local_800 = lVar13;
      lStack_7f8 = lVar23;
      FUN_00b48b4c(param_2,local_7e0,&local_810,uVar10);
      if (param_2 != 0) goto LAB_00b428e4;
LAB_00b42c58:
      uVar12 = local_7d0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_7d8,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_00b446fc();
      puVar5 = DAT_043aab68;
      if ((DAT_043aab58 & 1) == 0) {
        puVar5 = &DAT_043aab59;
      }
      FUN_00154450(param_2,puVar5);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_810._0_4_ = 0x1e;
      FUN_008fe304(&local_7d8,param_2,&local_810,&local_7c8,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_2d8,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_810 = (undefined1 *)CONCAT44(local_810._4_4_,0x1e);
      FUN_008fe304(&local_7d8,param_2,&local_810,&local_7c8,uVar12);
      local_810 = *(undefined1 **)(lVar13 + 0xf0);
      if (local_810 != (undefined1 *)0x0) {
        uStack_808 = 0;
        local_7d8 = CONCAT44(local_7d8._4_4_,4);
        local_800 = lVar13;
        lStack_7f8 = lVar23;
        FUN_00b48b4c(param_2,&local_7d8,&local_810,uVar12);
      }
      local_7d8._0_4_ = 1;
      local_810 = &LAB_00b486c8;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a77a78;
      local_800 = lVar13;
      lStack_7f8 = lVar23;
      FUN_00b49200(param_2,&local_7d8,&local_810,uVar12);
      local_7d8 = CONCAT44(local_7d8._4_4_,2);
      local_810 = &LAB_00b486cc;
      uStack_808 = 0;
      local_7f0 = 0;
      puStack_7e8 = &DAT_03a77a78;
      local_800 = lVar13;
      lStack_7f8 = lVar23;
      FUN_00b49200(param_2,&local_7d8,&local_810,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7c0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


