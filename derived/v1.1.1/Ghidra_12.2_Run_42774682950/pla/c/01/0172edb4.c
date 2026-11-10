/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0172edb4; name: FUN_0172edb4
 */


undefined8 FUN_0172edb4(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
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
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *local_7b0;
  undefined8 uStack_7a8;
  long local_7a0;
  long lStack_798;
  undefined8 local_790;
  undefined *puStack_788;
  long local_780;
  undefined4 local_778;
  long local_770;
  undefined4 local_768 [2];
  string asStack_760 [576];
  undefined8 auStack_520 [2];
  string local_510;
  undefined1 auStack_50f [7];
  size_t local_508;
  undefined1 *local_500;
  char *apcStack_2d0 [2];
  char *local_2c0;
  code *local_2b8;
  long local_2b0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043ce4d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce4d8), iVar9 != 0)) {
    local_2b0 = 0;
    local_2b8 = (code *)0x0;
    local_2c0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437bcf8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437bcf8);
      puVar2 = PTR_DAT_0437bd00;
      if (iVar9 != 0) {
        FUN_00df75f0(PTR_DAT_0437bd00);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437bcf8);
      }
    }
    pcVar27 = (char *)FUN_01731b60(&local_2c0,PTR_DAT_0437bd00);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043ce4c0,psVar17);
    lVar13 = local_2b0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2c0 & 1) != 0) && (local_2b0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
      }
      uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_017300b8;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_017300b8:
    FUN_00100250(PTR__string_04379718,&DAT_043ce4c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ce4d8);
  }
  std::string::string(&local_510,(string *)&DAT_043ce4c0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043ce4b8);
  sVar1 = (ulong)((byte)local_510 >> 1);
  if (((byte)local_510 & 1) != 0) {
    sVar1 = local_508;
  }
  std::string::append((ulong)&local_510,(char)iVar9);
  if (((byte)local_510 & 1) == 0) {
    puVar28 = auStack_50f;
    local_508 = (size_t)((byte)local_510 >> 1);
  }
  else {
    puVar28 = local_500;
  }
  snprintf(puVar28 + (sVar1 - 1),local_508,"%d",(ulong)DAT_043ce4b8);
  DAT_043ce4b8 = DAT_043ce4b8 + 1;
  if (((DAT_043ce4f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce4f8), iVar9 != 0)) {
    local_2b0 = 0;
    local_2b8 = (code *)0x0;
    local_2c0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437bcf8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437bcf8);
      puVar2 = PTR_DAT_0437bd00;
      if (iVar9 != 0) {
        FUN_00df75f0(PTR_DAT_0437bd00);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437bcf8);
      }
    }
    pcVar27 = (char *)FUN_01731b60(&local_2c0,PTR_DAT_0437bd00);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043ce4e0,psVar17);
    lVar13 = local_2b0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2c0 & 1) != 0) && (local_2b0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
      }
      uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_0173020c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_0173020c:
    FUN_00100250(PTR__string_04379718,&DAT_043ce4e0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ce4f8);
  }
  puVar2 = DAT_043ce4f0;
  if ((DAT_043ce4e0 & 1) == 0) {
    puVar2 = &DAT_043ce4e1;
  }
  if (((byte)local_510 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_510 | 1);
  }
  else {
    puVar28 = local_500;
  }
  if (((DAT_043ce508 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce508), iVar9 != 0)) {
    DAT_043ce500 = 0xd8;
    __cxa_guard_release(&DAT_043ce508);
  }
  if (((DAT_043ce518 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce518), iVar9 != 0)) {
    DAT_043ce510 = 0xdf;
    __cxa_guard_release(&DAT_043ce518);
  }
  uVar22 = DAT_043ce500;
  lVar13 = FUN_00153520(param_2,DAT_043ce500);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xd8)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043ce510;
    lVar13 = FUN_00153520(param_2,DAT_043ce510);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xd8)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_01733c30();
      puVar3 = DAT_043ce530;
      if ((DAT_043ce520 & 1) == 0) {
        puVar3 = &DAT_043ce521;
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
  lVar24 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar24;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar18[2];
    uVar22 = *(ulong *)(lVar13 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar22 = uVar25 - 1 & uVar22;
    }
    else if (uVar25 <= uVar22) {
      uVar6 = 0;
      if (uVar25 != 0) {
        uVar6 = uVar22 / uVar25;
      }
      uVar22 = uVar22 - uVar6 * uVar25;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar23 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar23;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar18 = &PTR_FUN_04224f88;
  *(undefined1 *)(puVar18 + 0xb) = uVar5;
  uVar23 = *(undefined8 *)(param_1 + 0x70);
  uVar19 = *(undefined8 *)(param_1 + 0x68);
  puVar18[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar18[0xd] = uVar19;
  puVar18[0xe] = uVar23;
  uVar19 = *(undefined8 *)(param_1 + 0x78);
  uVar23 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  puVar18[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar18[0x12] = uVar4;
  puVar18[0xf] = uVar19;
  puVar18[0x10] = uVar23;
  uVar19 = *(undefined8 *)(param_1 + 0x98);
  uVar23 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  puVar18[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar18[0x16] = uVar4;
  puVar18[0x13] = uVar19;
  puVar18[0x14] = uVar23;
  uVar19 = *(undefined8 *)(param_1 + 0xb8);
  uVar23 = *(undefined8 *)(param_1 + 0xc0);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  puVar18[0x19] = *(undefined8 *)(param_1 + 200);
  puVar18[0x1a] = uVar4;
  puVar18[0x17] = uVar19;
  puVar18[0x18] = uVar23;
  iVar9 = FUN_00154450(param_2,puVar28);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_01733bf0,0);
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
  if ((((byte)local_510 & 1) != 0) && (local_500 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar7;
    }
    uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar24 + 0x38d480)) {
        FUN_02bcc824(plVar26,local_500,0,8);
        goto LAB_0172f150;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_500,0,8);
  }
LAB_0172f150:
  memset(&local_2c0,0,0x250);
  pcVar27 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar24 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar22 = 0;
  pcVar20 = FUN_017323a0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_01731e9c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar13 + 0x88) = pcVar20;
            goto LAB_0172f368;
          }
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
      goto LAB_0172f368;
    }
    uVar22 = uVar22 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar22 != 0x20);
  uVar25 = 1;
  local_2c0 = pcVar27;
  local_2b8 = pcVar20;
LAB_0172f368:
  pcVar27 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar22 = 0;
  pcVar20 = FUN_017329e0;
  if (uVar11 != 0) {
    pcVar20 = FUN_017323f8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x88) = pcVar20;
            goto LAB_0172f4a8;
          }
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
      goto LAB_0172f4a8;
    }
    uVar22 = uVar22 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2c0)[uVar25 * 2] = pcVar27;
  (&local_2b8)[uVar25 * 2] = pcVar20;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0172f4a8:
  pcVar27 = *(char **)(lVar13 + 0x70);
  sVar14 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar22 = 0;
  pcVar20 = FUN_01733020;
  if (uVar11 != 0) {
    pcVar20 = FUN_01732a38;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x88) = pcVar20;
            goto LAB_0172f5e8;
          }
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
      goto LAB_0172f5e8;
    }
    uVar22 = uVar22 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2c0)[uVar25 * 2] = pcVar27;
  (&local_2b8)[uVar25 * 2] = pcVar20;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0172f5e8:
  pcVar27 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_017337c8;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_01733078;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x88) = pcVar20;
            goto LAB_0172f6f8;
          }
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
      goto LAB_0172f6f8;
    }
    uVar22 = uVar22 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2c0)[uVar25 * 2] = pcVar27;
  (&local_2b8)[uVar25 * 2] = pcVar20;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0172f6f8:
  pcVar27 = *(char **)(lVar13 + 0x80);
  sVar14 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar22 = 0;
  pcVar20 = FUN_017339cc;
  if (uVar11 != 0) {
    pcVar20 = FUN_0173396c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x88) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
        goto joined_r0x0172f7dc;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
      goto joined_r0x0172f7dc;
    }
    uVar22 = uVar22 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2c0)[uVar25 * 2] = pcVar27;
  (&local_2b8)[uVar25 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x0172f7dc:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
  }
  uVar22 = uVar25;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar22 = (ulong)((int)uVar25 + 1);
    (&local_2c0)[uVar25 * 2] = pcVar27;
    (&local_2b8)[uVar25 * 2] = (code *)PTR_LAB_0437bcd0;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
  }
  uVar25 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar22 + 1);
    (&local_2c0)[uVar22 * 2] = pcVar27;
    (&local_2b8)[uVar22 * 2] = (code *)PTR_LAB_0437bcd8;
  }
  uVar22 = uVar25;
  if (*(long *)(lVar13 + 0x88) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x88);
    uVar22 = (ulong)((int)uVar25 + 1);
    (&local_2c0)[uVar25 * 2] = pcVar27;
    (&local_2b8)[uVar25 * 2] = pcVar20;
  }
  (&local_2c0)[uVar22 * 2] = (char *)0x0;
  (&local_2b8)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_510,&local_2c0,0x250);
  memcpy(asStack_760,&local_2c0,0x250);
  lVar29 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar27 = (&local_2c0)[lVar15 * 2];
  sVar14 = strlen(pcVar27);
  sVar1 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    auStack_520[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_50f + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_760 + lVar15 * 0x10) = (&local_2c0)[lVar15 * 2];
  *(undefined1 **)(asStack_760 + (lVar15 * 2 + 1) * 8) = &LAB_01733a30;
  FUN_00151fe0(param_2,0,2);
  local_768[0] = FUN_0014feb0(param_2,0xffffffff);
  local_770 = param_2;
  if ((*PTR_DAT_0437bcf8 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_0437bcf8);
    puVar2 = PTR_DAT_0437bd00;
    if (iVar9 != 0) {
      FUN_00df75f0(PTR_DAT_0437bd00);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437bcf8);
    }
  }
  uVar10 = local_768[0];
  uVar22 = *(ulong *)(PTR_DAT_0437bd00 + 8);
  puVar2 = *(undefined **)(PTR_DAT_0437bd00 + 0x10);
  if ((*PTR_DAT_0437bd00 & 1) == 0) {
    puVar2 = PTR_DAT_0437bd00 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_0437bd00 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_01733650,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar17 = asStack_760;
      pbVar16 = (byte *)FUN_00df7c18();
    }
    else if (lVar29 == 0) {
      psVar17 = &local_510;
      pbVar16 = (byte *)FUN_00df6118();
    }
    else {
      psVar17 = (string *)&local_2c0;
      pbVar16 = (byte *)FUN_00df7394();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_778 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    local_780 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_7b0,&local_770,local_778);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_778;
    if (*(long *)(lVar13 + 0xb8) == 0) {
      lVar15 = *(long *)(lVar13 + 0xc0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0xc0);
      uVar10 = local_778;
    }
    local_778 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_778;
    uVar19 = *(undefined8 *)(lVar13 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_778;
    uVar19 = *(undefined8 *)(lVar13 + 0xa0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_7b0,&local_780,local_778);
    }
    else {
      local_7b0 = &LAB_01733b20;
      uStack_7a8 = 0;
      local_7a0 = lVar13;
      lStack_798 = lVar24;
      FUN_01733a80(param_2,1,&local_7b0,local_778);
      local_7b0 = &LAB_01733b24;
      uStack_7a8 = 0;
      local_7a0 = lVar13;
      lStack_798 = lVar24;
      FUN_01733a80(param_2,2,&local_7b0,local_778);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_7b0,&local_770,uVar10);
    if (*(undefined1 **)(lVar13 + 0x90) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 200) != '\0') goto LAB_0172fe60;
LAB_0172fb74:
      if (param_2 == 0) goto LAB_0172feb0;
LAB_0172fb7c:
      uVar12 = local_778;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_7a8 = 0;
      local_7b0 = *(undefined1 **)(lVar13 + 0x90);
      local_7a0 = lVar13;
      lStack_798 = lVar24;
      FUN_01733a80(param_2,4,&local_7b0,uVar10);
      if (*(char *)(lVar13 + 200) == '\0') goto LAB_0172fb74;
LAB_0172fe60:
      local_7b0 = &LAB_01733b20;
      uStack_7a8 = 0;
      local_7a0 = lVar13;
      lStack_798 = lVar24;
      FUN_01733a80(param_2,1,&local_7b0,uVar10);
      local_7b0 = &LAB_01733b24;
      uStack_7a8 = 0;
      local_7a0 = lVar13;
      lStack_798 = lVar24;
      FUN_01733a80(param_2,2,&local_7b0,uVar10);
      if (param_2 != 0) goto LAB_0172fb7c;
LAB_0172feb0:
      uVar12 = local_778;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_780,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_01731330();
      puVar2 = DAT_043ce428;
      if ((DAT_043ce418 & 1) == 0) {
        puVar2 = &DAT_043ce419;
      }
      FUN_00154450(param_2,puVar2);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_780,param_2,&local_7b0,&local_770,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_2c0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_780,param_2,&local_7b0,&local_770,uVar12);
      local_7b0 = *(undefined1 **)(lVar13 + 0x90);
      if (local_7b0 != (undefined1 *)0x0) {
        uStack_7a8 = 0;
        local_7a0 = lVar13;
        lStack_798 = lVar24;
        FUN_01733a80(param_2,4,&local_7b0,uVar12);
      }
      local_7b0 = &LAB_01733be8;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7c548;
      local_7a0 = lVar13;
      lStack_798 = lVar24;
      FUN_01733b30(param_2,1,&local_7b0,uVar12);
      local_7b0 = &LAB_01733bec;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7c548;
      local_7a0 = lVar13;
      lStack_798 = lVar24;
      FUN_01733b30(param_2,2,&local_7b0,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_768[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


