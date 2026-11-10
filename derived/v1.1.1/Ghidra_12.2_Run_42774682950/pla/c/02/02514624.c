/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02514624; name: FUN_02514624
 */


undefined8 FUN_02514624(long param_1,long param_2)

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
  
  if (((DAT_043e8ac8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8ac8), iVar9 != 0)) {
    local_280 = 0;
    local_288 = (code *)0x0;
    local_290 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043849b0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043849b0);
      puVar2 = PTR_DAT_043849b8;
      if (iVar9 != 0) {
        FUN_020d53e0(PTR_DAT_043849b8);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043849b0);
      }
    }
    pcVar27 = (char *)FUN_02516fd4(&local_290,PTR_DAT_043849b8);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e8ab0,psVar17);
    lVar13 = local_280;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_290 & 1) != 0) && (local_280 != 0)) {
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
          goto LAB_02515568;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_02515568:
    FUN_00100250(PTR__string_04379718,&DAT_043e8ab0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8ac8);
  }
  std::string::string(&local_4b0,(string *)&DAT_043e8ab0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e8aa8);
  sVar1 = (ulong)((byte)local_4b0 >> 1);
  if (((byte)local_4b0 & 1) != 0) {
    sVar1 = local_4a8;
  }
  std::string::append((ulong)&local_4b0,(char)iVar9);
  if (((byte)local_4b0 & 1) == 0) {
    puVar28 = auStack_4af;
    local_4a8 = (size_t)((byte)local_4b0 >> 1);
  }
  else {
    puVar28 = local_4a0;
  }
  snprintf(puVar28 + (sVar1 - 1),local_4a8,"%d",(ulong)DAT_043e8aa8);
  DAT_043e8aa8 = DAT_043e8aa8 + 1;
  if (((DAT_043e8ae8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8ae8), iVar9 != 0)) {
    local_280 = 0;
    local_288 = (code *)0x0;
    local_290 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043849b0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043849b0);
      puVar2 = PTR_DAT_043849b8;
      if (iVar9 != 0) {
        FUN_020d53e0(PTR_DAT_043849b8);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043849b0);
      }
    }
    pcVar27 = (char *)FUN_02516fd4(&local_290,PTR_DAT_043849b8);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e8ad0,psVar17);
    lVar13 = local_280;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_290 & 1) != 0) && (local_280 != 0)) {
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
          goto LAB_025156bc;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_025156bc:
    FUN_00100250(PTR__string_04379718,&DAT_043e8ad0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8ae8);
  }
  puVar2 = DAT_043e8ae0;
  if ((DAT_043e8ad0 & 1) == 0) {
    puVar2 = &DAT_043e8ad1;
  }
  if (((byte)local_4b0 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_4b0 | 1);
  }
  else {
    puVar28 = local_4a0;
  }
  if (((DAT_043e8af8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8af8), iVar9 != 0)) {
    DAT_043e8af0 = 0xd8;
    __cxa_guard_release(&DAT_043e8af8);
  }
  if (((DAT_043e8b08 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e8b08), iVar9 != 0)) {
    DAT_043e8b00 = 0xdf;
    __cxa_guard_release(&DAT_043e8b08);
  }
  uVar22 = DAT_043e8af0;
  lVar13 = FUN_00153520(param_2,DAT_043e8af0);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xd8)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e8b00;
    lVar13 = FUN_00153520(param_2,DAT_043e8b00);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xd8)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02517790();
      puVar3 = DAT_043e8b20;
      if ((DAT_043e8b10 & 1) == 0) {
        puVar3 = &DAT_043e8b11;
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
  *puVar18 = &PTR_FUN_0425c450;
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
    FUN_001516f0(param_2,&LAB_02517750,0);
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
  if ((((byte)local_4b0 & 1) != 0) && (local_4a0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_4a0,0,8);
        goto LAB_025149b4;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_4a0,0,8);
  }
LAB_025149b4:
  memset(&local_290,0,0x220);
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
  pcVar20 = FUN_02517360;
  if (uVar11 != 0) {
    pcVar20 = FUN_0251730c;
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
        uVar25 = 0;
        *(code **)(lVar13 + 0x88) = pcVar20;
        goto LAB_02514aac;
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
      uVar25 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
      goto LAB_02514aac;
    }
    uVar22 = uVar22 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar22 != 0x20);
  uVar25 = 1;
  local_290 = pcVar27;
  local_288 = pcVar20;
LAB_02514aac:
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
  pcVar20 = FUN_025174b0;
  if (uVar11 != 0) {
    pcVar20 = FUN_025173b4;
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
            uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
            goto joined_r0x02514ba0;
          }
          *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
      goto joined_r0x02514ba0;
    }
    uVar22 = uVar22 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar22 != 0x20);
  (&local_290)[uVar25 * 2] = pcVar27;
  (&local_288)[uVar25 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0xd0);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x02514ba0:
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
    (&local_290)[uVar25 * 2] = pcVar27;
    (&local_288)[uVar25 * 2] = (code *)PTR_LAB_04384988;
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
    (&local_290)[uVar22 * 2] = pcVar27;
    (&local_288)[uVar22 * 2] = (code *)PTR_LAB_04384990;
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
    (&local_290)[uVar25 * 2] = pcVar27;
    (&local_288)[uVar25 * 2] = pcVar20;
  }
  (&local_290)[uVar22 * 2] = (char *)0x0;
  (&local_288)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_4b0,&local_290,0x220);
  memcpy(asStack_6d0,&local_290,0x220);
  lVar29 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar27 = (&local_290)[lVar15 * 2];
  sVar14 = strlen(pcVar27);
  sVar1 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    auStack_4c0[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4af + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_6d0 + lVar15 * 0x10) = (&local_290)[lVar15 * 2];
  *(code **)(asStack_6d0 + (lVar15 * 2 + 1) * 8) = FUN_02517540;
  FUN_00151fe0(param_2,0,2);
  local_6d8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_6e0 = param_2;
  if ((*PTR_DAT_043849b0 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_043849b0);
    puVar2 = PTR_DAT_043849b8;
    if (iVar9 != 0) {
      FUN_020d53e0(PTR_DAT_043849b8);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043849b0);
    }
  }
  uVar10 = local_6d8[0];
  uVar22 = *(ulong *)(PTR_DAT_043849b8 + 8);
  puVar2 = *(undefined **)(PTR_DAT_043849b8 + 0x10);
  if ((*PTR_DAT_043849b8 & 1) == 0) {
    puVar2 = PTR_DAT_043849b8 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_043849b8 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,FUN_02517590,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar17 = asStack_6d0;
      pbVar16 = (byte *)FUN_020d5a08();
    }
    else if (lVar29 == 0) {
      psVar17 = &local_4b0;
      pbVar16 = (byte *)FUN_020d3fb0();
    }
    else {
      psVar17 = (string *)&local_290;
      pbVar16 = (byte *)FUN_020d51a4();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_6e8 = FUN_0014feb0(param_2,0xffffffff);
    local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
    local_6f0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_720,&local_6e0,local_6e8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_6e8;
    if (*(long *)(lVar13 + 0xb8) == 0) {
      lVar15 = *(long *)(lVar13 + 0xc0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0xc0);
      uVar10 = local_6e8;
    }
    local_6e8 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_6e8;
    uVar19 = *(undefined8 *)(lVar13 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_6e8;
    uVar19 = *(undefined8 *)(lVar13 + 0xa0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_720 = (undefined1 *)CONCAT44(local_720._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_720,&local_6f0,local_6e8);
    }
    else {
      local_720 = &LAB_02517680;
      uStack_718 = 0;
      local_710 = lVar13;
      lStack_708 = lVar24;
      FUN_025175e0(param_2,1,&local_720,local_6e8);
      local_720 = &LAB_02517684;
      uStack_718 = 0;
      local_710 = lVar13;
      lStack_708 = lVar24;
      FUN_025175e0(param_2,2,&local_720,local_6e8);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_720,&local_6e0,uVar10);
    if (*(undefined1 **)(lVar13 + 0x90) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 200) != '\0') goto LAB_02515370;
LAB_025150c4:
      if (param_2 == 0) goto LAB_025153c0;
LAB_025150cc:
      uVar12 = local_6e8;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_718 = 0;
      local_720 = *(undefined1 **)(lVar13 + 0x90);
      local_710 = lVar13;
      lStack_708 = lVar24;
      FUN_025175e0(param_2,4,&local_720,uVar10);
      if (*(char *)(lVar13 + 200) == '\0') goto LAB_025150c4;
LAB_02515370:
      local_720 = &LAB_02517680;
      uStack_718 = 0;
      local_710 = lVar13;
      lStack_708 = lVar24;
      FUN_025175e0(param_2,1,&local_720,uVar10);
      local_720 = &LAB_02517684;
      uStack_718 = 0;
      local_710 = lVar13;
      lStack_708 = lVar24;
      FUN_025175e0(param_2,2,&local_720,uVar10);
      if (param_2 != 0) goto LAB_025150cc;
LAB_025153c0:
      uVar12 = local_6e8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_6f0,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_02516798();
      puVar2 = DAT_043e8a98;
      if ((DAT_043e8a88 & 1) == 0) {
        puVar2 = &DAT_043e8a89;
      }
      FUN_00154450(param_2,puVar2);
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
      local_720 = *(undefined1 **)(lVar13 + 0x90);
      if (local_720 != (undefined1 *)0x0) {
        uStack_718 = 0;
        local_710 = lVar13;
        lStack_708 = lVar24;
        FUN_025175e0(param_2,4,&local_720,uVar12);
      }
      local_720 = &LAB_02517748;
      uStack_718 = 0;
      local_700 = 0;
      puStack_6f8 = &DAT_03a7d5d8;
      local_710 = lVar13;
      lStack_708 = lVar24;
      FUN_02517690(param_2,1,&local_720,uVar12);
      local_720 = &LAB_0251774c;
      uStack_718 = 0;
      local_700 = 0;
      puStack_6f8 = &DAT_03a7d5d8;
      local_710 = lVar13;
      lStack_708 = lVar24;
      FUN_02517690(param_2,2,&local_720,uVar12);
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


