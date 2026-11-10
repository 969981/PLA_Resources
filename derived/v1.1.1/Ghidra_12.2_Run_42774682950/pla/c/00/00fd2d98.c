/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fd2d98; name: FUN_00fd2d98
 */


undefined8 FUN_00fd2d98(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
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
  string *psVar16;
  undefined *puVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_720;
  undefined8 uStack_718;
  long local_710;
  long lStack_708;
  undefined8 local_700;
  undefined *puStack_6f8;
  long local_6f0;
  undefined4 local_6e8;
  long local_6e0;
  undefined4 local_6d8 [2];
  string asStack_6d0 [528];
  undefined8 auStack_4c0 [2];
  string local_4b0;
  undefined1 auStack_4af [7];
  size_t local_4a8;
  undefined1 *local_4a0;
  char *apcStack_2a0 [2];
  char *local_290;
  code *local_288;
  long local_280;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b7af0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b7af0), iVar9 != 0)) {
    local_280 = 0;
    local_288 = (code *)0x0;
    local_290 = (char *)0x2e6c6f7308;
    if (((DAT_043b7820 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b7820), iVar9 != 0)) {
      FUN_00fd6d20();
      FUN_00100250(PTR__string_04379718,&DAT_043b7808,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b7820);
    }
    puVar27 = DAT_043b7818;
    if ((DAT_043b7808 & 1) == 0) {
      puVar27 = &DAT_043b7809;
    }
    pcVar26 = (char *)std::string::append((char *)&local_290,(ulong)puVar27);
    psVar16 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b7ad8,psVar16);
    lVar13 = local_280;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_290 & 1) != 0) && (local_280 != 0)) {
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
          goto LAB_00fd3d20;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00fd3d20:
    FUN_00100250(PTR__string_04379718,&DAT_043b7ad8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b7af0);
  }
  std::string::string(&local_4b0,(string *)&DAT_043b7ad8);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b7ad0);
  sVar1 = (ulong)((byte)local_4b0 >> 1);
  if (((byte)local_4b0 & 1) != 0) {
    sVar1 = local_4a8;
  }
  std::string::append((ulong)&local_4b0,(char)iVar9);
  if (((byte)local_4b0 & 1) == 0) {
    puVar27 = auStack_4af;
    local_4a8 = (size_t)((byte)local_4b0 >> 1);
  }
  else {
    puVar27 = local_4a0;
  }
  snprintf(puVar27 + (sVar1 - 1),local_4a8,"%d",(ulong)DAT_043b7ad0);
  DAT_043b7ad0 = DAT_043b7ad0 + 1;
  if (((DAT_043b7b10 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b7b10), iVar9 != 0)) {
    local_280 = 0;
    local_288 = (code *)0x0;
    local_290 = (char *)0x2e6c6f7308;
    if (((DAT_043b7820 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b7820), iVar9 != 0)) {
      FUN_00fd6d20();
      FUN_00100250(PTR__string_04379718,&DAT_043b7808,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b7820);
    }
    puVar27 = DAT_043b7818;
    if ((DAT_043b7808 & 1) == 0) {
      puVar27 = &DAT_043b7809;
    }
    pcVar26 = (char *)std::string::append((char *)&local_290,(ulong)puVar27);
    psVar16 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b7af8,psVar16);
    lVar13 = local_280;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_290 & 1) != 0) && (local_280 != 0)) {
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
          goto LAB_00fd3e90;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00fd3e90:
    FUN_00100250(PTR__string_04379718,&DAT_043b7af8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b7b10);
  }
  puVar17 = DAT_043b7b08;
  if ((DAT_043b7af8 & 1) == 0) {
    puVar17 = &DAT_043b7af9;
  }
  if (((byte)local_4b0 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_4b0 | 1);
  }
  else {
    puVar27 = local_4a0;
  }
  if (((DAT_043b7b20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b7b20), iVar9 != 0)) {
    DAT_043b7b18 = 0xc0;
    __cxa_guard_release(&DAT_043b7b20);
  }
  if (((DAT_043b7b30 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b7b30), iVar9 != 0)) {
    DAT_043b7b28 = 199;
    __cxa_guard_release(&DAT_043b7b30);
  }
  uVar22 = DAT_043b7b18;
  lVar13 = FUN_00153520(param_2,DAT_043b7b18);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xc0)) ||
     (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043b7b28;
    lVar13 = FUN_00153520(param_2,DAT_043b7b28);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xc0)) ||
       (puVar20 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00fdb140();
      puVar2 = DAT_043b7b48;
      if ((DAT_043b7b38 & 1) == 0) {
        puVar2 = &DAT_043b7b39;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar20[1] = uVar18;
  puVar20[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar20[3] = lVar13;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar20[4] = lVar23;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar20[2];
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
    *(undefined8 **)(puVar20[1] + uVar22 * 8) = puVar20 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar18;
  puVar20[7] = uVar3;
  puVar20[8] = *(undefined8 *)(param_1 + 0x40);
  puVar20[9] = *(undefined8 *)(param_1 + 0x48);
  puVar20[10] = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar20 = &PTR_FUN_041ef000;
  *(undefined1 *)(puVar20 + 0xb) = uVar5;
  uVar18 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  puVar20[0xe] = *(undefined8 *)(param_1 + 0x70);
  puVar20[0xf] = uVar4;
  puVar20[0xc] = uVar18;
  puVar20[0xd] = uVar3;
  uVar18 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  puVar20[0x12] = *(undefined8 *)(param_1 + 0x90);
  puVar20[0x13] = uVar4;
  puVar20[0x10] = uVar18;
  puVar20[0x11] = uVar3;
  uVar18 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  puVar20[0x16] = *(undefined8 *)(param_1 + 0xb0);
  puVar20[0x17] = uVar4;
  puVar20[0x14] = uVar18;
  puVar20[0x15] = uVar3;
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_00fdb100,0);
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
  FUN_001522a0(param_2,puVar17);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar17);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_4b0 & 1) != 0) && (local_4a0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_4a0,0,8);
        goto LAB_00fd3118;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_4a0,0,8);
  }
LAB_00fd3118:
  memset(&local_290,0,0x220);
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
  pcVar19 = FUN_00fdadfc;
  if (uVar11 != 0) {
    pcVar19 = FUN_00fd7350;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar21 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar19;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar13 + 0x70) = pcVar19;
            goto LAB_00fd3320;
          }
          *(ulong *)(lVar13 + 0xb8) = *(ulong *)(lVar13 + 0xb8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar19;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xb8) = *(ulong *)(lVar13 + 0xb8) | 1L << (uVar22 & 0x3f);
      goto LAB_00fd3320;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_290 = pcVar26;
  local_288 = pcVar19;
LAB_00fd3320:
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
  pcVar19 = (code *)&LAB_00fdaeb4;
  if (uVar11 != 0) {
    pcVar19 = (code *)&LAB_00fdae54;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar21 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x70) = pcVar19;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xb8);
        goto joined_r0x00fd3404;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar19;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0xb8) = *(ulong *)(lVar13 + 0xb8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xb8) = *(ulong *)(lVar13 + 0xb8) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0xb8);
      goto joined_r0x00fd3404;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_290)[uVar24 * 2] = pcVar26;
  (&local_288)[uVar24 * 2] = pcVar19;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0xb8);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x00fd3404:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xb8);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xb8);
  }
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    (&local_290)[uVar24 * 2] = pcVar26;
    (&local_288)[uVar24 * 2] = (code *)&LAB_00fdb7a0;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xb8);
    uVar24 = (ulong)((int)uVar24 + 1);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    uVar22 = (ulong)((int)uVar24 + 1);
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    (&local_290)[uVar24 * 2] = pcVar26;
    (&local_288)[uVar24 * 2] = (code *)&LAB_00fdb79c;
  }
  uVar24 = uVar22;
  if (*(long *)(lVar13 + 0x70) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar13 + 0x70);
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_290)[uVar22 * 2] = pcVar26;
    (&local_288)[uVar22 * 2] = pcVar19;
  }
  (&local_290)[uVar24 * 2] = (char *)0x0;
  (&local_288)[uVar24 * 2] = (code *)0x0;
  memcpy(&local_4b0,&local_290,0x220);
  memcpy(asStack_6d0,&local_290,0x220);
  lVar28 = FUN_008cca50();
  lVar15 = uVar24 - 1;
  pcVar26 = (&local_290)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_4c0[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4af + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_6d0 + lVar15 * 0x10) = (&local_290)[lVar15 * 2];
  *(undefined1 **)(asStack_6d0 + (lVar15 * 2 + 1) * 8) = &LAB_00fdaef0;
  FUN_00151fe0(param_2,0,2);
  local_6d8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_6e0 = param_2;
  if (((DAT_043b7820 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b7820), iVar9 != 0)) {
    FUN_00fd6d20();
    FUN_00100250(PTR__string_04379718,&DAT_043b7808,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b7820);
  }
  uVar10 = local_6d8[0];
  if ((DAT_043b7808 & 1) == 0) {
    uVar22 = (ulong)(DAT_043b7808 >> 1);
    puVar27 = &DAT_043b7809;
  }
  else {
    uVar22 = DAT_043b7810;
    puVar27 = DAT_043b7818;
  }
  FUN_001514f0(param_2,puVar27,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00fdaf40,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar16 = asStack_6d0;
      FUN_00fd5148();
      pbVar21 = &DAT_043b7770;
      puVar17 = &DAT_043b7771;
      puVar20 = &DAT_043b7780;
    }
    else if (lVar28 == 0) {
      psVar16 = &local_4b0;
      FUN_00fd4f54();
      puVar17 = &DAT_043b76f9;
      puVar20 = &DAT_043b7708;
      pbVar21 = &DAT_043b76f8;
    }
    else {
      psVar16 = (string *)&local_290;
      FUN_00fd533c();
      puVar17 = &DAT_043b77e9;
      puVar20 = &DAT_043b77f8;
      pbVar21 = &DAT_043b77e8;
    }
    if ((*pbVar21 & 1) != 0) {
      puVar17 = (undefined *)*puVar20;
    }
    FUN_00154450(param_2,puVar17);
    local_6e8 = FUN_0014feb0(param_2,0xffffffff);
    local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
    local_6f0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_720,&local_6e0,local_6e8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar16,2);
    uVar10 = local_6e8;
    if (*(long *)(lVar13 + 0xa0) == 0) {
      lVar15 = *(long *)(lVar13 + 0xa8);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0xa8);
      uVar10 = local_6e8;
    }
    local_6e8 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_6e8;
    uVar18 = *(undefined8 *)(lVar13 + 0x80);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_6e8;
    uVar18 = *(undefined8 *)(lVar13 + 0x88);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_720 = (undefined1 *)CONCAT44(local_720._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_720,&local_6f0,local_6e8);
    }
    else {
      local_720 = &LAB_00fdb030;
      uStack_718 = 0;
      local_710 = lVar13;
      lStack_708 = lVar23;
      FUN_00fdaf90(param_2,1,&local_720,local_6e8);
      local_720 = &LAB_00fdb034;
      uStack_718 = 0;
      local_710 = lVar13;
      lStack_708 = lVar23;
      FUN_00fdaf90(param_2,2,&local_720,local_6e8);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_720,&local_6e0,uVar10);
    if (*(undefined1 **)(lVar13 + 0x78) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0xb0) == '\0') goto LAB_00fd37d4;
LAB_00fd3ac0:
      local_720 = &LAB_00fdb030;
      uStack_718 = 0;
      local_710 = lVar13;
      lStack_708 = lVar23;
      FUN_00fdaf90(param_2,1,&local_720,uVar10);
      local_720 = &LAB_00fdb034;
      uStack_718 = 0;
      local_710 = lVar13;
      lStack_708 = lVar23;
      FUN_00fdaf90(param_2,2,&local_720,uVar10);
      if (param_2 == 0) goto LAB_00fd3b10;
LAB_00fd37dc:
      uVar12 = local_6e8;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_718 = 0;
      local_720 = *(undefined1 **)(lVar13 + 0x78);
      local_710 = lVar13;
      lStack_708 = lVar23;
      FUN_00fdaf90(param_2,4,&local_720,uVar10);
      if (*(char *)(lVar13 + 0xb0) != '\0') goto LAB_00fd3ac0;
LAB_00fd37d4:
      if (param_2 != 0) goto LAB_00fd37dc;
LAB_00fd3b10:
      uVar12 = local_6e8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_6f0,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_00fd557c();
      puVar17 = DAT_043b7870;
      if ((DAT_043b7860 & 1) == 0) {
        puVar17 = &DAT_043b7861;
      }
      FUN_00154450(param_2,puVar17);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_720._0_4_ = 0x1e;
      FUN_008fe304(&local_6f0,param_2,&local_720,&local_6e0,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_290,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
      FUN_008fe304(&local_6f0,param_2,&local_720,&local_6e0,uVar12);
      local_720 = *(undefined1 **)(lVar13 + 0x78);
      if (local_720 != (undefined1 *)0x0) {
        uStack_718 = 0;
        local_710 = lVar13;
        lStack_708 = lVar23;
        FUN_00fdaf90(param_2,4,&local_720,uVar12);
      }
      local_720 = &LAB_00fdb0f8;
      uStack_718 = 0;
      local_700 = 0;
      puStack_6f8 = &DAT_03a788d0;
      local_710 = lVar13;
      lStack_708 = lVar23;
      FUN_00fdb040(param_2,1,&local_720,uVar12);
      local_720 = &LAB_00fdb0fc;
      uStack_718 = 0;
      local_700 = 0;
      puStack_6f8 = &DAT_03a788d0;
      local_710 = lVar13;
      lStack_708 = lVar23;
      FUN_00fdb040(param_2,2,&local_720,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_6d8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


