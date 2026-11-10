/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02171d50; name: FUN_02171d50
 */


void FUN_02171d50(long param_1,long param_2)

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
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  undefined1 *local_a80;
  undefined8 uStack_a78;
  long local_a70;
  long lStack_a68;
  undefined8 local_a60;
  undefined *puStack_a58;
  long local_a50;
  undefined4 local_a48;
  long local_a40;
  undefined4 local_a38 [2];
  string asStack_a30 [816];
  undefined8 auStack_700 [2];
  string local_6f0;
  undefined1 auStack_6ef [7];
  size_t local_6e8;
  undefined1 *local_6e0;
  char *apcStack_3c0 [2];
  char *local_3b0;
  code *local_3a8;
  long local_3a0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043dbc78 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dbc78), iVar9 != 0)) {
    local_3a0 = 0;
    local_3a8 = (code *)0x0;
    local_3b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043848c8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043848c8);
      puVar3 = PTR_DAT_043848d0;
      if (iVar9 != 0) {
        FUN_020d2250(PTR_DAT_043848d0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043848c8);
      }
    }
    pcVar27 = (char *)FUN_0216d74c(&local_3b0,PTR_DAT_043848d0);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043dbc60,psVar17);
    lVar13 = local_3a0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3b0 & 1) != 0) && (local_3a0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
      }
      uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_02174370;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_02174370:
    FUN_00100250(PTR__string_04379718,&DAT_043dbc60,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dbc78);
  }
  std::string::string(&local_6f0,(string *)&DAT_043dbc60);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043dbc58);
  sVar2 = (ulong)((byte)local_6f0 >> 1);
  if (((byte)local_6f0 & 1) != 0) {
    sVar2 = local_6e8;
  }
  std::string::append((ulong)&local_6f0,(char)iVar9);
  if (((byte)local_6f0 & 1) == 0) {
    puVar28 = auStack_6ef;
    local_6e8 = (size_t)((byte)local_6f0 >> 1);
  }
  else {
    puVar28 = local_6e0;
  }
  snprintf(puVar28 + (sVar2 - 1),local_6e8,"%d",(ulong)DAT_043dbc58);
  DAT_043dbc58 = DAT_043dbc58 + 1;
  if (((DAT_043dbc98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dbc98), iVar9 != 0)) {
    local_3a0 = 0;
    local_3a8 = (code *)0x0;
    local_3b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043848c8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043848c8);
      puVar3 = PTR_DAT_043848d0;
      if (iVar9 != 0) {
        FUN_020d2250(PTR_DAT_043848d0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043848c8);
      }
    }
    pcVar27 = (char *)FUN_0216d74c(&local_3b0,PTR_DAT_043848d0);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043dbc80,psVar17);
    lVar13 = local_3a0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_3b0 & 1) != 0) && (local_3a0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
      }
      uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_021744c4;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_021744c4:
    FUN_00100250(PTR__string_04379718,&DAT_043dbc80,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dbc98);
  }
  puVar3 = DAT_043dbc90;
  if ((DAT_043dbc80 & 1) == 0) {
    puVar3 = &DAT_043dbc81;
  }
  if (((byte)local_6f0 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_6f0 | 1);
  }
  else {
    puVar28 = local_6e0;
  }
  if (((DAT_043dbca8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dbca8), iVar9 != 0)) {
    DAT_043dbca0 = 600;
    __cxa_guard_release(&DAT_043dbca8);
  }
  if (((DAT_043dbcb8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043dbcb8), iVar9 != 0)) {
    DAT_043dbcb0 = 0x25f;
    __cxa_guard_release(&DAT_043dbcb8);
  }
  uVar23 = DAT_043dbca0;
  lVar13 = FUN_00153520(param_1,DAT_043dbca0);
  if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 600)) ||
     (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043dbcb0;
    lVar13 = FUN_00153520(param_1,DAT_043dbcb0);
    if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 600)) ||
       (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_02174b40();
      puVar4 = DAT_043dbcd0;
      if ((DAT_043dbcc0 & 1) == 0) {
        puVar4 = &DAT_043dbcc1;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar4);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar13;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar13 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar6 = 0;
      if (uVar25 != 0) {
        uVar6 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar6 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar5;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_FUN_0425b600;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x1f8);
  iVar9 = FUN_00154450(param_1,puVar28);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_02174b00,0);
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
  if ((((byte)local_6f0 & 1) != 0) && (local_6e0 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar7;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar24 + 0x38d480)) {
        FUN_02bcc824(plVar26,local_6e0,0,8);
        goto LAB_021720bc;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_6e0,0,8);
  }
LAB_021720bc:
  memset(&local_3b0,0,0x340);
  pcVar27 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar18 = lVar13 + 8;
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0216db4c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0216da8c;
  }
  puVar1 = (ulong *)(lVar13 + 0x250);
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 0x13) {
        uVar25 = 0;
        *(code **)(lVar13 + 0x208) = pcVar21;
        goto LAB_021721c0;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_021721c0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_3b0 = pcVar27;
  local_3a8 = pcVar21;
LAB_021721c0:
  pcVar27 = *(char **)(lVar13 + 0x70);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0216dea4;
  if (uVar11 != 0) {
    pcVar21 = FUN_0216dc0c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02172428;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02172428;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02172428:
  pcVar27 = *(char **)(lVar13 + 0x88);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0216e240;
  if (uVar11 != 0) {
    pcVar21 = FUN_0216df9c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_0217256c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_0217256c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0217256c:
  pcVar27 = *(char **)(lVar13 + 0xa0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0216e6d8;
  if (uVar11 != 0) {
    pcVar21 = FUN_0216e338;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_021726b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_021726b0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_021726b0:
  pcVar27 = *(char **)(lVar13 + 0xb8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0216ec3c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0216e7d0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_021727f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_021727f4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_021727f4:
  pcVar27 = *(char **)(lVar13 + 0xd0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0216efe4;
  if (uVar11 != 0) {
    pcVar21 = FUN_0216ed34;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02172938;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02172938;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02172938:
  pcVar27 = *(char **)(lVar13 + 0xe8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0216f28c;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_0216f0dc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02172a7c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02172a7c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02172a7c:
  pcVar27 = *(char **)(lVar13 + 0x100);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0216f860;
  if (uVar11 != 0) {
    pcVar21 = FUN_0216f384;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02172bc0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02172bc0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02172bc0:
  pcVar27 = *(char **)(lVar13 + 0x118);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0216fbdc;
  if (uVar11 != 0) {
    pcVar21 = FUN_0216f958;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02172d04;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02172d04;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02172d04:
  pcVar27 = *(char **)(lVar13 + 0x130);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0216fef8;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_0216fcd4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02172e48;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02172e48;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02172e48:
  pcVar27 = *(char **)(lVar13 + 0x148);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_021704a4;
  if (uVar11 != 0) {
    pcVar21 = FUN_02170030;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02172f8c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02172f8c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02172f8c:
  pcVar27 = *(char **)(lVar13 + 0x160);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_021709cc;
  if (uVar11 != 0) {
    pcVar21 = FUN_0217059c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_021730d0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_021730d0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_021730d0:
  pcVar27 = *(char **)(lVar13 + 0x168);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02170f88;
  if (uVar11 != 0) {
    pcVar21 = FUN_02170a24;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02173214;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02173214;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02173214:
  pcVar27 = *(char **)(lVar13 + 0x170);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02171690;
  if (uVar11 != 0) {
    pcVar21 = FUN_02170fe0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02173358;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02173358;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02173358:
  pcVar27 = *(char **)(lVar13 + 0x178);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_021717ec;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_021716e8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_0217349c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_0217349c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0217349c:
  pcVar27 = *(char **)(lVar13 + 400);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02171948;
  if (uVar11 != 0) {
    pcVar21 = FUN_02171900;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_021735e0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_021735e0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_021735e0:
  pcVar27 = *(char **)(lVar13 + 0x1a8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02171a9c;
  if (uVar11 != 0) {
    pcVar21 = FUN_02171990;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02173724;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02173724;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02173724:
  pcVar27 = *(char **)(lVar13 + 0x1c0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_02171c08;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02171bd0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_02173868;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_02173868;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02173868:
  pcVar27 = *(char **)(lVar13 + 0x1d8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_02171c88;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02171c50;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x208) = pcVar21;
            goto LAB_021739ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
      goto LAB_021739ac;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_021739ac:
  pcVar27 = *(char **)(lVar13 + 0x1f0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_02171d08;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_02171cd0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(undefined1 *)(lVar13 + 0x58) = 1;
        *(code **)(lVar13 + 0x30) = pcVar21;
        *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
        goto LAB_02173b18;
      }
      if (iVar9 == 2) {
        *(undefined1 *)(lVar13 + 0x58) = 1;
        *(code **)(lVar13 + 0x38) = pcVar21;
        *(ulong *)(lVar13 + 0x250) = *(ulong *)(lVar13 + 0x250) | 1L << (uVar23 & 0x3f);
        uVar11 = (uint)*puVar1;
        goto joined_r0x02173acc;
      }
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x208) = pcVar21;
        uVar11 = (uint)*puVar1;
        goto joined_r0x02173acc;
      }
      *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
      break;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3b0)[uVar25 * 2] = pcVar27;
  (&local_3a8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02173b18:
  uVar11 = (uint)*puVar1;
joined_r0x02173acc:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  uVar23 = uVar25;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x181);
    if ((*(byte *)(lVar24 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_3b0)[uVar25 * 2] = pcVar27;
    (&local_3a8)[uVar25 * 2] = (code *)PTR_LAB_043848a0;
    uVar11 = (uint)*puVar1;
  }
  uVar25 = uVar23;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x289);
    if ((*(byte *)(lVar24 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    (&local_3b0)[uVar23 * 2] = pcVar27;
    (&local_3a8)[uVar23 * 2] = (code *)PTR_LAB_043848a8;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar13 + 0x208) != 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x1c9);
    if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar13 + 0x208);
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_3b0)[uVar25 * 2] = pcVar27;
    (&local_3a8)[uVar25 * 2] = pcVar21;
  }
  (&local_3b0)[uVar23 * 2] = (char *)0x0;
  (&local_3a8)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_6f0,&local_3b0,0x340);
  memcpy(asStack_a30,&local_3b0,0x340);
  lVar24 = FUN_008cca50();
  lVar15 = uVar23 - 1;
  pcVar27 = (&local_3b0)[lVar15 * 2];
  sVar14 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar24 + 0x1c8) >> 1);
  if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar24 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar9 = std::string::compare(lVar24 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    auStack_700[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_6ef + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_a30 + lVar15 * 0x10) = (&local_3b0)[lVar15 * 2];
  *(undefined1 **)(asStack_a30 + (lVar15 * 2 + 1) * 8) = &LAB_021748f0;
  FUN_00151fe0(param_1,0,2);
  local_a38[0] = FUN_0014feb0(param_1,0xffffffff);
  local_a40 = param_1;
  if ((*PTR_DAT_043848c8 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_043848c8);
    puVar3 = PTR_DAT_043848d0;
    if (iVar9 != 0) {
      FUN_020d2250(PTR_DAT_043848d0);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043848c8);
    }
  }
  uVar10 = local_a38[0];
  uVar23 = *(ulong *)(PTR_DAT_043848d0 + 8);
  puVar3 = *(undefined **)(PTR_DAT_043848d0 + 0x10);
  if ((*PTR_DAT_043848d0 & 1) == 0) {
    puVar3 = PTR_DAT_043848d0 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_043848d0 >> 1);
  }
  FUN_001514f0(param_1,puVar3,uVar23);
  FUN_00152550(param_1,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_02174940,0);
  FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      psVar17 = asStack_a30;
      pbVar16 = (byte *)FUN_020d2870();
    }
    else if (lVar24 == 0) {
      psVar17 = &local_6f0;
      pbVar16 = (byte *)FUN_020d0db4();
    }
    else {
      psVar17 = (string *)&local_3b0;
      pbVar16 = (byte *)FUN_020d2014();
    }
    pbVar22 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar22 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_a48 = FUN_0014feb0(param_1,0xffffffff);
    local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
    local_a50 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_a80,&local_a40,local_a48);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,psVar17,2);
    uVar10 = local_a48;
    if (*(long *)(lVar13 + 0x238) == 0) {
      lVar15 = *(long *)(lVar13 + 0x240);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x240);
      uVar10 = local_a48;
    }
    local_a48 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_cast");
    }
    uVar10 = local_a48;
    uVar20 = *(undefined8 *)(lVar13 + 0x218);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar10,&DAT_03955ac7);
    uVar10 = local_a48;
    uVar20 = *(undefined8 *)(lVar13 + 0x220);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_a80,&local_a50,local_a48);
    }
    else {
      local_a80 = &LAB_02174a30;
      uStack_a78 = 0;
      local_a70 = lVar13;
      lStack_a68 = lVar18;
      FUN_02174990(param_1,1,&local_a80,local_a48);
      local_a80 = &LAB_02174a34;
      uStack_a78 = 0;
      local_a70 = lVar13;
      lStack_a68 = lVar18;
      FUN_02174990(param_1,2,&local_a80,local_a48);
    }
    FUN_00151fe0(param_1,0,3);
    uVar10 = FUN_0014feb0(param_1,0xffffffff);
    local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_a80,&local_a40,uVar10);
    if (*(undefined1 **)(lVar13 + 0x210) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x248) != '\0') goto LAB_02174170;
LAB_02173ebc:
      if (param_1 == 0) goto LAB_021741c4;
LAB_02173ec4:
      uVar12 = local_a48;
      FUN_00150260(param_1,uVar10);
    }
    else {
      uStack_a78 = 0;
      local_a80 = *(undefined1 **)(lVar13 + 0x210);
      local_a70 = lVar13;
      lStack_a68 = lVar18;
      FUN_02174990(param_1,4,&local_a80,uVar10);
      if (*(char *)(lVar13 + 0x248) == '\0') goto LAB_02173ebc;
LAB_02174170:
      local_a80 = &LAB_02174a30;
      uStack_a78 = 0;
      local_a70 = lVar13;
      lStack_a68 = lVar18;
      FUN_02174990(param_1,1,&local_a80,uVar10);
      local_a80 = &LAB_02174a34;
      uStack_a78 = 0;
      local_a70 = lVar13;
      lStack_a68 = lVar18;
      FUN_02174990(param_1,2,&local_a80,uVar10);
      if (param_1 != 0) goto LAB_02173ec4;
LAB_021741c4:
      uVar12 = local_a48;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar12);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_a50,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_0216cf0c();
      puVar3 = DAT_043dbc48;
      if ((DAT_043dbc38 & 1) == 0) {
        puVar3 = &DAT_043dbc39;
      }
      FUN_00154450(param_1,puVar3);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_a80._0_4_ = 0x1e;
      FUN_008fe304(&local_a50,param_1,&local_a80,&local_a40,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,&local_3b0,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
      FUN_008fe304(&local_a50,param_1,&local_a80,&local_a40,uVar12);
      local_a80 = *(undefined1 **)(lVar13 + 0x210);
      if (local_a80 != (undefined1 *)0x0) {
        uStack_a78 = 0;
        local_a70 = lVar13;
        lStack_a68 = lVar18;
        FUN_02174990(param_1,4,&local_a80,uVar12);
      }
      local_a80 = &LAB_02174af8;
      uStack_a78 = 0;
      local_a60 = 0;
      puStack_a58 = &DAT_03a7d368;
      local_a70 = lVar13;
      lStack_a68 = lVar18;
      FUN_02174a40(param_1,1,&local_a80,uVar12);
      local_a80 = &LAB_02174afc;
      uStack_a78 = 0;
      local_a60 = 0;
      puStack_a58 = &DAT_03a7d368;
      local_a70 = lVar13;
      lStack_a68 = lVar18;
      FUN_02174a40(param_1,2,&local_a80,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_a38[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


