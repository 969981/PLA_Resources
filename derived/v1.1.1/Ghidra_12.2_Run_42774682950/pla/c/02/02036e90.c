/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02036e90; name: FUN_02036e90
 */


undefined8 FUN_02036e90(long param_1,long param_2)

{
  size_t sVar1;
  byte *pbVar2;
  undefined8 uVar3;
  char cVar4;
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
  undefined8 *puVar17;
  undefined8 uVar18;
  code *pcVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  undefined1 *puVar26;
  long lVar27;
  undefined8 uVar28;
  undefined1 *local_9c0;
  undefined8 uStack_9b8;
  long local_9b0;
  long lStack_9a8;
  undefined8 local_9a0;
  undefined *puStack_998;
  long local_990;
  undefined4 local_988;
  long local_980;
  undefined4 local_978 [2];
  string asStack_970 [752];
  undefined8 auStack_680 [2];
  string local_670;
  undefined1 auStack_66f [7];
  size_t local_668;
  undefined1 *local_660;
  char *apcStack_380 [2];
  char *local_370;
  code *local_368;
  long local_360;
  undefined1 auStack_70 [16];
  
  if (((DAT_043d7840 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7840), iVar8 != 0)) {
    local_360 = 0;
    local_368 = (code *)0x0;
    local_370 = (char *)0x2e6c6f7308;
    if (((DAT_043d72e0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d72e0), iVar8 != 0)) {
      FUN_0203ba20();
      FUN_00100250(PTR__string_04379718,&DAT_043d72c8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043d72e0);
    }
    puVar16 = DAT_043d72d8;
    if ((DAT_043d72c8 & 1) == 0) {
      puVar16 = &DAT_043d72c9;
    }
    pcVar25 = (char *)std::string::append((char *)&local_370,(ulong)puVar16);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043d7828,psVar15);
    lVar12 = local_360;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_370 & 1) != 0) && (local_360 != 0)) {
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
          goto LAB_02038cd0;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_02038cd0:
    FUN_00100250(PTR__string_04379718,&DAT_043d7828,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d7840);
  }
  std::string::string(&local_670,(string *)&DAT_043d7828);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d7820);
  sVar1 = (ulong)((byte)local_670 >> 1);
  if (((byte)local_670 & 1) != 0) {
    sVar1 = local_668;
  }
  std::string::append((ulong)&local_670,(char)iVar8);
  if (((byte)local_670 & 1) == 0) {
    puVar26 = auStack_66f;
    local_668 = (size_t)((byte)local_670 >> 1);
  }
  else {
    puVar26 = local_660;
  }
  snprintf(puVar26 + (sVar1 - 1),local_668,"%d",(ulong)DAT_043d7820);
  DAT_043d7820 = DAT_043d7820 + 1;
  if (((DAT_043d7860 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7860), iVar8 != 0)) {
    local_360 = 0;
    local_368 = (code *)0x0;
    local_370 = (char *)0x2e6c6f7308;
    if (((DAT_043d72e0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d72e0), iVar8 != 0)) {
      FUN_0203ba20();
      FUN_00100250(PTR__string_04379718,&DAT_043d72c8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043d72e0);
    }
    if ((DAT_043d72c8 & 1) == 0) {
      puVar16 = &DAT_043d72c9;
    }
    else {
      puVar16 = DAT_043d72d8;
    }
    pcVar25 = (char *)std::string::append((char *)&local_370,(ulong)puVar16);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043d7848,psVar15);
    lVar12 = local_360;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_370 & 1) != 0) && (local_360 != 0)) {
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
          goto LAB_02038e38;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_02038e38:
    FUN_00100250(PTR__string_04379718,&DAT_043d7848,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d7860);
  }
  if ((DAT_043d7848 & 1) == 0) {
    uVar28 = 0x43d7849;
    if (((byte)local_670 & 1) != 0) goto LAB_02036f80;
LAB_02037330:
    puVar26 = (undefined1 *)((ulong)&local_670 | 1);
  }
  else {
    uVar28 = DAT_043d7858;
    if (((byte)local_670 & 1) == 0) goto LAB_02037330;
LAB_02036f80:
    puVar26 = local_660;
  }
  if (((DAT_043d7870 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7870), iVar8 != 0)) {
    DAT_043d7868 = 0x180;
    __cxa_guard_release(&DAT_043d7870);
  }
  if (((DAT_043d7880 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7880), iVar8 != 0)) {
    DAT_043d7878 = 0x187;
    __cxa_guard_release(&DAT_043d7880);
  }
  uVar21 = DAT_043d7868;
  lVar12 = FUN_00153520(param_2,DAT_043d7868);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x180)) ||
     (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043d7878;
    lVar12 = FUN_00153520(param_2,DAT_043d7878);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x180)) ||
       (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02046560();
      if ((DAT_043d7888 & 1) == 0) {
        puVar16 = &DAT_043d7889;
      }
      else {
        puVar16 = DAT_043d7898;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar16);
      puVar17 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar17[1] = uVar18;
  puVar17[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar17[3] = lVar12;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar17[4] = lVar22;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar17[2];
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
    *(undefined8 **)(puVar17[1] + uVar21 * 8) = puVar17 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar18;
  puVar17[7] = uVar3;
  puVar17[8] = *(undefined8 *)(param_1 + 0x40);
  puVar17[9] = *(undefined8 *)(param_1 + 0x48);
  puVar17[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar17 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar17 = &PTR_FUN_0425b2b8;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x120);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_02046520,0);
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
  FUN_001522a0(param_2,uVar28);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,uVar28);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_670 & 1) != 0) && (local_660 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar24,local_660,0,8);
        goto LAB_020371f8;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_660,0,8);
  }
LAB_020371f8:
  memset(&local_370,0,0x300);
  pcVar25 = *(char **)(lVar12 + 0x80);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_0203c818;
  if (uVar10 != 0) {
    pcVar19 = FUN_0203c6c8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar23 = 0;
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_02037408;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_02037408;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_370 = pcVar25;
  local_368 = pcVar19;
LAB_02037408:
  pcVar25 = *(char **)(lVar12 + 0x88);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_0203c9b8;
  if (uVar10 != 0) {
    pcVar19 = FUN_0203c870;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_02037548;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_02037548;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02037548:
  pcVar25 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_02040360;
  if (uVar10 != 0) {
    pcVar19 = FUN_0203ca10;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_02037688;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_02037688;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02037688:
  pcVar25 = *(char **)(lVar12 + 0x98);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_020404cc;
  if (uVar10 != 0) {
    pcVar19 = FUN_020403b8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_020377c8;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_020377c8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020377c8:
  pcVar25 = *(char **)(lVar12 + 0xb0);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_020406a8;
  if (uVar10 != 0) {
    pcVar19 = FUN_02040558;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_02037908;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_02037908;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02037908:
  pcVar25 = *(char **)(lVar12 + 0xb8);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_02040848;
  if (uVar10 != 0) {
    pcVar19 = FUN_02040700;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_02037a48;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_02037a48;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02037a48:
  pcVar25 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_020441f0;
  if (uVar10 != 0) {
    pcVar19 = FUN_020408a0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_02037b88;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_02037b88;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02037b88:
  pcVar25 = *(char **)(lVar12 + 200);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_02044290;
  if (uVar10 != 0) {
    pcVar19 = FUN_02044248;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_02037cc8;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_02037cc8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02037cc8:
  pcVar25 = *(char **)(lVar12 + 0xe0);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_020443ec;
  if (uVar10 != 0) {
    pcVar19 = FUN_020442d8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_02037e08;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_02037e08;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02037e08:
  pcVar25 = *(char **)(lVar12 + 0xf8);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_020445c8;
  if (uVar10 != 0) {
    pcVar19 = FUN_02044478;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_02037f48;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_02037f48;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02037f48:
  pcVar25 = *(char **)(lVar12 + 0x100);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = FUN_02044668;
  if (uVar10 != 0) {
    pcVar19 = FUN_02044620;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_02038088;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_02038088;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02038088:
  pcVar25 = *(char **)(lVar12 + 0x118);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = (code *)&LAB_020447b8;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_020446b0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_020381c8;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_020381c8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020381c8:
  pcVar25 = *(char **)(lVar12 + 0x120);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = (code *)&LAB_0204611c;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_020447fc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar19;
            goto LAB_020382d8;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_020382d8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020382d8:
  pcVar25 = *(char **)(lVar12 + 0x128);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
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
  pcVar19 = (code *)&LAB_02046328;
  if (uVar10 != 0) {
    pcVar19 = (code *)&LAB_020462f4;
  }
  while( true ) {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) break;
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
    if (uVar21 == 0x20) {
LAB_020389c8:
      (&local_370)[uVar23 * 2] = pcVar25;
      (&local_368)[uVar23 * 2] = pcVar19;
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
      uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x020383bc:
      if ((uVar10 >> 0x11 & 1) == 0) {
LAB_020383c0:
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
      }
LAB_020383c8:
      if ((uVar10 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
      }
      if ((uVar10 >> 0x10 & 1) == 0) {
        lVar27 = FUN_008cca50();
        if ((*(byte *)(lVar27 + 0x180) & 1) == 0) {
          pcVar25 = (char *)(lVar27 + 0x181);
        }
        else {
          pcVar25 = *(char **)(lVar27 + 400);
        }
        (&local_370)[uVar23 * 2] = pcVar25;
        (&local_368)[uVar23 * 2] = (code *)&LAB_02044eb0;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
        uVar23 = (ulong)((int)uVar23 + 1);
      }
      uVar21 = uVar23;
      if ((uVar10 >> 0x1b & 1) == 0) {
        lVar27 = FUN_008cca50();
        if ((*(byte *)(lVar27 + 0x288) & 1) == 0) {
          pcVar25 = (char *)(lVar27 + 0x289);
        }
        else {
          pcVar25 = *(char **)(lVar27 + 0x298);
        }
        uVar21 = (ulong)((int)uVar23 + 1);
        (&local_370)[uVar23 * 2] = pcVar25;
        (&local_368)[uVar23 * 2] = (code *)&LAB_02044ea8;
      }
      uVar23 = uVar21;
      if (*(long *)(lVar12 + 0x130) != 0) {
        lVar27 = FUN_008cca50();
        if ((*(byte *)(lVar27 + 0x1c8) & 1) == 0) {
          pcVar25 = (char *)(lVar27 + 0x1c9);
        }
        else {
          pcVar25 = *(char **)(lVar27 + 0x1d8);
        }
        pcVar19 = *(code **)(lVar12 + 0x130);
        uVar23 = (ulong)((int)uVar21 + 1);
        (&local_370)[uVar21 * 2] = pcVar25;
        (&local_368)[uVar21 * 2] = pcVar19;
      }
      (&local_370)[uVar23 * 2] = (char *)0x0;
      (&local_368)[uVar23 * 2] = (code *)0x0;
      memcpy(&local_670,&local_370,0x300);
      memcpy(asStack_970,&local_370,0x300);
      lVar27 = FUN_008cca50();
      lVar14 = uVar23 - 1;
      pcVar25 = (&local_370)[lVar14 * 2];
      sVar13 = strlen(pcVar25);
      sVar1 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
      if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar27 + 0x1d0);
      }
      if ((sVar13 == sVar1) &&
         (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
         iVar8 == 0)) {
        auStack_680[lVar14 * 2 + 2] = 0;
        *(undefined8 *)(auStack_66f + lVar14 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_970 + lVar14 * 0x10) = (&local_370)[lVar14 * 2];
      *(undefined1 **)(asStack_970 + (lVar14 * 2 + 1) * 8) = &LAB_02046360;
      FUN_00151fe0(param_2,0,2);
      local_978[0] = FUN_0014feb0(param_2,0xffffffff);
      local_980 = param_2;
      if (((DAT_043d72e0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d72e0), iVar8 != 0)) {
        FUN_0203ba20();
        FUN_00100250(PTR__string_04379718,&DAT_043d72c8,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043d72e0);
      }
      uVar9 = local_978[0];
      if ((DAT_043d72c8 & 1) == 0) {
        uVar21 = (ulong)(DAT_043d72c8 >> 1);
        puVar16 = &DAT_043d72c9;
      }
      else {
        uVar21 = DAT_043d72d0;
        puVar16 = DAT_043d72d8;
      }
      FUN_001514f0(param_2,puVar16,uVar21);
      FUN_00152550(param_2,uVar9,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_02044dc0,0);
      FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
      lVar27 = 0;
      do {
        if (lVar27 == 1) {
          psVar15 = asStack_970;
          FUN_0203a22c();
          pbVar20 = &DAT_043d7230;
        }
        else if (lVar27 == 0) {
          psVar15 = &local_670;
          FUN_0203a038();
          pbVar20 = &DAT_043d71b8;
        }
        else {
          psVar15 = (string *)&local_370;
          FUN_0203a420();
          pbVar20 = &DAT_043d72a8;
        }
        pbVar2 = pbVar20 + 1;
        if ((*pbVar20 & 1) != 0) {
          pbVar2 = *(byte **)(pbVar20 + 0x10);
        }
        FUN_00154450(param_2,pbVar2);
        local_988 = FUN_0014feb0(param_2,0xffffffff);
        local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
        local_990 = param_2;
        FUN_008fe304(auStack_70,param_2,&local_9c0,&local_980,local_988);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00155a20(param_2,psVar15,2);
        uVar9 = local_988;
        if (*(long *)(lVar12 + 0x160) == 0) {
          lVar14 = *(long *)(lVar12 + 0x168);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar9,"class_check");
          lVar14 = *(long *)(lVar12 + 0x168);
          uVar9 = local_988;
        }
        local_988 = uVar9;
        if (lVar14 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar9,"class_cast");
        }
        uVar9 = local_988;
        uVar28 = *(undefined8 *)(lVar12 + 0x140);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar22);
        FUN_001516f0(param_2,uVar28,3);
        FUN_00152550(param_2,uVar9,&DAT_03955ac7);
        uVar9 = local_988;
        uVar28 = *(undefined8 *)(lVar12 + 0x148);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar12);
        FUN_00151810(param_2,lVar22);
        FUN_001516f0(param_2,uVar28,3);
        FUN_00152550(param_2,uVar9,&DAT_0397c077);
        if (*(char *)(lVar12 + 0x58) == '\0') {
          local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,1);
          FUN_008fe304(auStack_70,param_2,&local_9c0,&local_990,local_988);
        }
        else {
          local_9c0 = &LAB_02046450;
          uStack_9b8 = 0;
          local_9b0 = lVar12;
          lStack_9a8 = lVar22;
          FUN_020463b0(param_2,1,&local_9c0,local_988);
          local_9c0 = &LAB_02046454;
          uStack_9b8 = 0;
          local_9b0 = lVar12;
          lStack_9a8 = lVar22;
          FUN_020463b0(param_2,2,&local_9c0,local_988);
        }
        FUN_00151fe0(param_2,0,3);
        uVar9 = FUN_0014feb0(param_2,0xffffffff);
        local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_2,&local_9c0,&local_980,uVar9);
        if (*(undefined1 **)(lVar12 + 0x138) == (undefined1 *)0x0) {
          cVar4 = *(char *)(lVar12 + 0x170);
        }
        else {
          uStack_9b8 = 0;
          local_9c0 = *(undefined1 **)(lVar12 + 0x138);
          local_9b0 = lVar12;
          lStack_9a8 = lVar22;
          FUN_020463b0(param_2,4,&local_9c0,uVar9);
          cVar4 = *(char *)(lVar12 + 0x170);
        }
        if (cVar4 != '\0') {
          local_9c0 = &LAB_02046450;
          uStack_9b8 = 0;
          local_9b0 = lVar12;
          lStack_9a8 = lVar22;
          FUN_020463b0(param_2,1,&local_9c0,uVar9);
          local_9c0 = &LAB_02046454;
          uStack_9b8 = 0;
          local_9b0 = lVar12;
          lStack_9a8 = lVar22;
          FUN_020463b0(param_2,2,&local_9c0,uVar9);
        }
        uVar11 = local_988;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar9);
        }
        FUN_00152ae0(param_2,uVar11);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_990,0xfffffffe);
        lVar27 = lVar27 + 1;
      } while (lVar27 != 3);
      FUN_0203a660();
      if ((DAT_043d7320 & 1) == 0) {
        puVar16 = &DAT_043d7321;
      }
      else {
        puVar16 = DAT_043d7330;
      }
      FUN_00154450(param_2,puVar16);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_9c0._0_4_ = 0x1e;
      FUN_008fe304(&local_990,param_2,&local_9c0,&local_980,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_370,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
      FUN_008fe304(&local_990,param_2,&local_9c0,&local_980,uVar11);
      local_9c0 = *(undefined1 **)(lVar12 + 0x138);
      if (local_9c0 != (undefined1 *)0x0) {
        uStack_9b8 = 0;
        local_9b0 = lVar12;
        lStack_9a8 = lVar22;
        FUN_020463b0(param_2,4,&local_9c0,uVar11);
      }
      local_9c0 = &LAB_02046518;
      uStack_9b8 = 0;
      local_9a0 = 0;
      puStack_998 = &DAT_03a7d2d8;
      local_9b0 = lVar12;
      lStack_9a8 = lVar22;
      FUN_02046460(param_2,1,&local_9c0,uVar11);
      local_9c0 = &LAB_0204651c;
      uStack_9b8 = 0;
      local_9a0 = 0;
      puStack_998 = &DAT_03a7d2d8;
      local_9b0 = lVar12;
      lStack_9a8 = lVar22;
      FUN_02046460(param_2,2,&local_9c0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_978[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar8 = (int)uVar21;
  if (iVar8 == 0x13) {
    *(code **)(lVar12 + 0x130) = pcVar19;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
    goto joined_r0x020383bc;
  }
  if (iVar8 == 1) {
    *(code **)(lVar12 + 0x30) = pcVar19;
  }
  else {
    if (iVar8 != 2) {
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
      goto LAB_020389c8;
    }
    *(code **)(lVar12 + 0x38) = pcVar19;
  }
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar21 & 0x3f);
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
  if ((uVar10 >> 0x11 & 1) != 0) goto LAB_020383c8;
  goto LAB_020383c0;
}


