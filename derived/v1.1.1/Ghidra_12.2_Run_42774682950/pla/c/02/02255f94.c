/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02255f94; name: FUN_02255f94
 */


undefined8 FUN_02255f94(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  string *psVar14;
  undefined *puVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  char *pcVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined1 *local_750;
  undefined8 uStack_748;
  long local_740;
  long lStack_738;
  undefined8 local_730;
  undefined *puStack_728;
  long local_720;
  undefined4 local_718;
  long local_710;
  undefined4 local_708 [2];
  string asStack_700 [544];
  undefined8 auStack_4e0 [2];
  string local_4d0;
  undefined1 auStack_4cf [7];
  size_t local_4c8;
  undefined1 *local_4c0;
  char *apcStack_2b0 [2];
  char *local_2a0;
  code *local_298;
  long local_290;
  undefined1 auStack_70 [16];
  
  if (((DAT_043df5f0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df5f0), iVar7 != 0)) {
    local_290 = 0;
    local_298 = (code *)0x0;
    local_2a0 = (char *)0x2e6c6f7308;
    if (((DAT_043df538 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df538), iVar7 != 0)) {
      FUN_02259c80();
      FUN_00100250(PTR__string_04379718,&DAT_043df520,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043df538);
    }
    pcVar24 = (char *)FUN_02259058(&local_2a0,&DAT_043df520);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043df5d8,psVar14);
    lVar11 = local_290;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2a0 & 1) != 0) && (local_290 != 0)) {
      lVar21 = tpidr_el0;
      plVar23 = *(long **)(lVar21 + 0x20);
      if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
        *(long **)(lVar21 + 0x20) = DAT_043f1798;
        plVar23 = plVar5;
      }
      uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar20 & 1) != 0) {
        if (*(char *)(lVar21 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar21 + 0x38d488) = 1;
          *(undefined8 *)(lVar21 + 0x38d478) = 0;
          *(undefined8 *)(lVar21 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar21 + 0x38d480)) {
          FUN_02bcc824(plVar23,lVar11,0,8);
          goto LAB_0225701c;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_0225701c:
    FUN_00100250(PTR__string_04379718,&DAT_043df5d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043df5f0);
  }
  std::string::string(&local_4d0,(string *)&DAT_043df5d8);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043df5d0);
  sVar1 = (ulong)((byte)local_4d0 >> 1);
  if (((byte)local_4d0 & 1) != 0) {
    sVar1 = local_4c8;
  }
  std::string::append((ulong)&local_4d0,(char)iVar7);
  if (((byte)local_4d0 & 1) == 0) {
    puVar25 = auStack_4cf;
    local_4c8 = (size_t)((byte)local_4d0 >> 1);
  }
  else {
    puVar25 = local_4c0;
  }
  snprintf(puVar25 + (sVar1 - 1),local_4c8,"%d",(ulong)DAT_043df5d0);
  DAT_043df5d0 = DAT_043df5d0 + 1;
  if (((DAT_043df610 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df610), iVar7 != 0)) {
    local_290 = 0;
    local_298 = (code *)0x0;
    local_2a0 = (char *)0x2e6c6f7308;
    if (((DAT_043df538 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df538), iVar7 != 0)) {
      FUN_02259c80();
      FUN_00100250(PTR__string_04379718,&DAT_043df520,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043df538);
    }
    pcVar24 = (char *)FUN_02259058(&local_2a0,&DAT_043df520);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043df5f8,psVar14);
    lVar11 = local_290;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2a0 & 1) != 0) && (local_290 != 0)) {
      lVar21 = tpidr_el0;
      plVar23 = *(long **)(lVar21 + 0x20);
      if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
        *(long **)(lVar21 + 0x20) = DAT_043f1798;
        plVar23 = plVar5;
      }
      uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar20 & 1) != 0) {
        if (*(char *)(lVar21 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar21 + 0x38d488) = 1;
          *(undefined8 *)(lVar21 + 0x38d478) = 0;
          *(undefined8 *)(lVar21 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar21 + 0x38d480)) {
          FUN_02bcc824(plVar23,lVar11,0,8);
          goto LAB_02257170;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_02257170:
    FUN_00100250(PTR__string_04379718,&DAT_043df5f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043df610);
  }
  puVar15 = DAT_043df608;
  if ((DAT_043df5f8 & 1) == 0) {
    puVar15 = &DAT_043df5f9;
  }
  if (((byte)local_4d0 & 1) == 0) {
    puVar25 = (undefined1 *)((ulong)&local_4d0 | 1);
  }
  else {
    puVar25 = local_4c0;
  }
  if (((DAT_043df620 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df620), iVar7 != 0)) {
    DAT_043df618 = 0xf0;
    __cxa_guard_release(&DAT_043df620);
  }
  if (((DAT_043df630 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df630), iVar7 != 0)) {
    DAT_043df628 = 0xf7;
    __cxa_guard_release(&DAT_043df630);
  }
  uVar20 = DAT_043df618;
  lVar11 = FUN_00153520(param_2,DAT_043df618);
  if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0xf0)) ||
     (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar20 = DAT_043df628;
    lVar11 = FUN_00153520(param_2,DAT_043df628);
    if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0xf0)) ||
       (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0225ac90();
      puVar2 = DAT_043df648;
      if ((DAT_043df638 & 1) == 0) {
        puVar2 = &DAT_043df639;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar16;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar11;
  lVar21 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar21;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar21 != 0) {
    uVar22 = puVar18[2];
    uVar20 = *(ulong *)(lVar11 + 8);
    if ((uVar22 & uVar22 - 1) == 0) {
      uVar20 = uVar22 - 1 & uVar20;
    }
    else if (uVar22 <= uVar20) {
      uVar4 = 0;
      if (uVar22 != 0) {
        uVar4 = uVar20 / uVar22;
      }
      uVar20 = uVar20 - uVar4 * uVar22;
    }
    *(undefined8 **)(puVar18[1] + uVar20 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar16;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425b8a8;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x90);
  iVar7 = FUN_00154450(param_2,puVar25);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_0225ac50,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar8 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar8);
  }
  FUN_001522a0(param_2,puVar15);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar15);
  lVar11 = FUN_001511d0(param_2,0xffffffff);
  lVar11 = lVar11 + ((ulong)(uint)-(int)lVar11 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar5 = DAT_043f1798;
  if ((((byte)local_4d0 & 1) != 0) && (local_4c0 != (undefined1 *)0x0)) {
    lVar21 = tpidr_el0;
    plVar23 = *(long **)(lVar21 + 0x20);
    if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
      *(long **)(lVar21 + 0x20) = DAT_043f1798;
      plVar23 = plVar5;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar21 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar21 + 0x38d488) = 1;
        *(undefined8 *)(lVar21 + 0x38d478) = 0;
        *(undefined8 *)(lVar21 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar21 + 0x38d480)) {
        FUN_02bcc824(plVar23,local_4c0,0,8);
        goto LAB_022562f4;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_4c0,0,8);
  }
LAB_022562f4:
  memset(&local_2a0,0,0x230);
  pcVar24 = *(char **)(lVar11 + 0x60);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  lVar21 = lVar11 + 8;
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_0225a288;
  if (uVar9 != 0) {
    pcVar17 = FUN_0225a0a0;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 0x13) {
        uVar22 = 0;
        *(code **)(lVar11 + 0xa0) = pcVar17;
        goto LAB_022563ec;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0xe8) = *(ulong *)(lVar11 + 0xe8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe8) = *(ulong *)(lVar11 + 0xe8) | 1L << (uVar20 & 0x3f);
      goto LAB_022563ec;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  uVar22 = 1;
  local_2a0 = pcVar24;
  local_298 = pcVar17;
LAB_022563ec:
  pcVar24 = *(char **)(lVar11 + 0x70);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_0225a810;
  if (uVar9 != 0) {
    pcVar17 = FUN_0225a2dc;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xa0) = pcVar17;
            goto LAB_02256658;
          }
          *(ulong *)(lVar11 + 0xe8) = *(ulong *)(lVar11 + 0xe8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe8) = *(ulong *)(lVar11 + 0xe8) | 1L << (uVar20 & 0x3f);
      goto LAB_02256658;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2a0)[uVar22 * 2] = pcVar24;
  (&local_298)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_02256658:
  pcVar24 = *(char **)(lVar11 + 0x88);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_0225a9b4;
  if (uVar9 != 0) {
    pcVar17 = FUN_0225a89c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xa0) = pcVar17;
            uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe8);
            goto joined_r0x0225674c;
          }
          *(ulong *)(lVar11 + 0xe8) = *(ulong *)(lVar11 + 0xe8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe8) = *(ulong *)(lVar11 + 0xe8) | 1L << (uVar20 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe8);
      goto joined_r0x0225674c;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2a0)[uVar22 * 2] = pcVar24;
  (&local_298)[uVar22 * 2] = pcVar17;
  uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe8);
  uVar22 = (ulong)((int)uVar22 + 1);
joined_r0x0225674c:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe8);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe8);
  }
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x181);
    if ((*(byte *)(lVar26 + 0x180) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 400);
    }
    (&local_2a0)[uVar22 * 2] = pcVar24;
    (&local_298)[uVar22 * 2] = (code *)&LAB_0225b0d0;
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe8);
    uVar22 = (ulong)((int)uVar22 + 1);
  }
  uVar20 = uVar22;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar26 = FUN_008cca50();
    uVar20 = (ulong)((int)uVar22 + 1);
    pcVar24 = (char *)(lVar26 + 0x289);
    if ((*(byte *)(lVar26 + 0x288) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x298);
    }
    (&local_2a0)[uVar22 * 2] = pcVar24;
    (&local_298)[uVar22 * 2] = (code *)&LAB_0225b0c0;
  }
  uVar22 = uVar20;
  if (*(long *)(lVar11 + 0xa0) != 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x1c9);
    if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x1d8);
    }
    pcVar17 = *(code **)(lVar11 + 0xa0);
    uVar22 = (ulong)((int)uVar20 + 1);
    (&local_2a0)[uVar20 * 2] = pcVar24;
    (&local_298)[uVar20 * 2] = pcVar17;
  }
  (&local_2a0)[uVar22 * 2] = (char *)0x0;
  (&local_298)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_4d0,&local_2a0,0x230);
  memcpy(asStack_700,&local_2a0,0x230);
  lVar26 = FUN_008cca50();
  lVar13 = uVar22 - 1;
  pcVar24 = (&local_2a0)[lVar13 * 2];
  sVar12 = strlen(pcVar24);
  sVar1 = (ulong)(*(byte *)(lVar26 + 0x1c8) >> 1);
  if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar26 + 0x1d0);
  }
  if ((sVar12 == sVar1) &&
     (iVar7 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
     iVar7 == 0)) {
    auStack_4e0[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4cf + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_700 + lVar13 * 0x10) = (&local_2a0)[lVar13 * 2];
  *(code **)(asStack_700 + (lVar13 * 2 + 1) * 8) = FUN_0225aa40;
  FUN_00151fe0(param_2,0,2);
  local_708[0] = FUN_0014feb0(param_2,0xffffffff);
  local_710 = param_2;
  if (((DAT_043df538 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df538), iVar7 != 0)) {
    FUN_02259c80();
    FUN_00100250(PTR__string_04379718,&DAT_043df520,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043df538);
  }
  uVar8 = local_708[0];
  if ((DAT_043df520 & 1) == 0) {
    uVar20 = (ulong)(DAT_043df520 >> 1);
    puVar25 = &DAT_043df521;
  }
  else {
    uVar20 = DAT_043df528;
    puVar25 = DAT_043df530;
  }
  FUN_001514f0(param_2,puVar25,uVar20);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,FUN_0225aa90,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar26 = 0;
  do {
    if (lVar26 == 1) {
      psVar14 = asStack_700;
      FUN_02258428();
      pbVar19 = &DAT_043df488;
      puVar15 = &DAT_043df489;
      puVar18 = &DAT_043df498;
    }
    else if (lVar26 == 0) {
      psVar14 = &local_4d0;
      FUN_0225824c();
      puVar15 = &DAT_043df411;
      puVar18 = &DAT_043df420;
      pbVar19 = &DAT_043df410;
    }
    else {
      psVar14 = (string *)&local_2a0;
      FUN_02258604();
      puVar15 = &DAT_043df501;
      puVar18 = &DAT_043df510;
      pbVar19 = &DAT_043df500;
    }
    if ((*pbVar19 & 1) != 0) {
      puVar15 = (undefined *)*puVar18;
    }
    FUN_00154450(param_2,puVar15);
    local_718 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_720 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,local_718);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar14,2);
    uVar8 = local_718;
    if (*(long *)(lVar11 + 0xd0) == 0) {
      lVar13 = *(long *)(lVar11 + 0xd8);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
      lVar13 = *(long *)(lVar11 + 0xd8);
      uVar8 = local_718;
    }
    local_718 = uVar8;
    if (lVar13 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_718;
    uVar16 = *(undefined8 *)(lVar11 + 0xb0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_718;
    uVar16 = *(undefined8 *)(lVar11 + 0xb8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_750,&local_720,local_718);
    }
    else {
      local_750 = &LAB_0225ab80;
      uStack_748 = 0;
      local_740 = lVar11;
      lStack_738 = lVar21;
      FUN_0225aae0(param_2,1,&local_750,local_718);
      local_750 = &LAB_0225ab84;
      uStack_748 = 0;
      local_740 = lVar11;
      lStack_738 = lVar21;
      FUN_0225aae0(param_2,2,&local_750,local_718);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,uVar8);
    if (*(undefined1 **)(lVar11 + 0xa8) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0xe0) == '\0') goto LAB_02256b78;
LAB_02256e24:
      local_750 = &LAB_0225ab80;
      uStack_748 = 0;
      local_740 = lVar11;
      lStack_738 = lVar21;
      FUN_0225aae0(param_2,1,&local_750,uVar8);
      local_750 = &LAB_0225ab84;
      uStack_748 = 0;
      local_740 = lVar11;
      lStack_738 = lVar21;
      FUN_0225aae0(param_2,2,&local_750,uVar8);
      if (param_2 == 0) goto LAB_02256e74;
LAB_02256b80:
      uVar10 = local_718;
      FUN_00150260(param_2,uVar8);
    }
    else {
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar11 + 0xa8);
      local_740 = lVar11;
      lStack_738 = lVar21;
      FUN_0225aae0(param_2,4,&local_750,uVar8);
      if (*(char *)(lVar11 + 0xe0) != '\0') goto LAB_02256e24;
LAB_02256b78:
      if (param_2 != 0) goto LAB_02256b80;
LAB_02256e74:
      uVar10 = local_718;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_720,0xfffffffe);
    lVar26 = lVar26 + 1;
    if (lVar26 == 3) {
      FUN_0225882c();
      puVar15 = DAT_043df588;
      if ((DAT_043df578 & 1) == 0) {
        puVar15 = &DAT_043df579;
      }
      FUN_00154450(param_2,puVar15);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar11);
      FUN_00155a20(param_2,&local_2a0,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar10);
      local_750 = *(undefined1 **)(lVar11 + 0xa8);
      if (local_750 != (undefined1 *)0x0) {
        uStack_748 = 0;
        local_740 = lVar11;
        lStack_738 = lVar21;
        FUN_0225aae0(param_2,4,&local_750,uVar10);
      }
      local_750 = &LAB_0225ac48;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7d3f8;
      local_740 = lVar11;
      lStack_738 = lVar21;
      FUN_0225ab90(param_2,1,&local_750,uVar10);
      local_750 = &LAB_0225ac4c;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7d3f8;
      local_740 = lVar11;
      lStack_738 = lVar21;
      FUN_0225ab90(param_2,2,&local_750,uVar10);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar10);
      }
      FUN_00152ae0(param_2,uVar8);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_708[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


