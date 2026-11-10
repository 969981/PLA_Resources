/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fa840c; name: FUN_00fa840c
 */


undefined8 FUN_00fa840c(long param_1,long param_2)

{
  undefined1 *__maxlen;
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
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
  undefined1 *puVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  long lVar28;
  long *plVar29;
  undefined1 *local_8d0;
  undefined8 uStack_8c8;
  long local_8c0;
  long lStack_8b8;
  undefined8 local_8b0;
  undefined *puStack_8a8;
  long local_8a0;
  undefined4 local_898;
  long local_890;
  undefined4 local_888 [2];
  long alStack_880 [84];
  long alStack_5e0 [86];
  long alStack_330 [2];
  undefined8 local_320;
  undefined1 *local_318;
  ulong local_310;
  undefined1 auStack_70 [16];
  
  puVar5 = PTR_DAT_0437d9b0;
  if (((DAT_043b6b00 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b6b00), iVar9 != 0)) {
    local_310 = 0;
    local_318 = (undefined1 *)0x0;
    local_320 = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437d9c8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437d9c8), puVar3 = PTR_DAT_0437d9b0, iVar9 != 0)) {
      FUN_00fac8f0(PTR_DAT_0437d9b0);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d9c8);
    }
    puVar3 = *(undefined **)(puVar5 + 0x10);
    if ((*puVar5 & 1) == 0) {
      puVar3 = puVar5 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)&local_320,(ulong)puVar3);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b6ae8,psVar17);
    uVar25 = local_310;
    plVar29 = DAT_043f1798;
    if ((((ulong)local_320 & 1) != 0) && (local_310 != 0)) {
      lVar13 = tpidr_el0;
      plVar26 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar26 = plVar29;
      }
      uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar26,uVar25,0,8);
          goto LAB_00fa9e7c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,uVar25,0,8);
    }
LAB_00fa9e7c:
    FUN_00100250(PTR__string_04379718,&DAT_043b6ae8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b6b00);
  }
  std::string::string((string *)&local_320,(string *)&DAT_043b6ae8);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b6ae0);
  puVar20 = (undefined1 *)((ulong)local_320 >> 1 & 0x7f);
  if (((ulong)local_320 & 1) != 0) {
    puVar20 = local_318;
  }
  std::string::append((ulong)&local_320,(char)iVar9);
  bVar8 = ((ulong)local_320 & 1) == 0;
  uVar25 = local_310;
  if (bVar8) {
    uVar25 = (long)&local_320 + 1;
  }
  __maxlen = (undefined1 *)((ulong)local_320 >> 1 & 0x7f);
  if (!bVar8) {
    __maxlen = local_318;
  }
  iVar9 = snprintf(puVar20 + (uVar25 - 1),(size_t)__maxlen,"%d",(ulong)DAT_043b6ae0);
  DAT_043b6ae0 = DAT_043b6ae0 + 1;
  FUN_00fb1cd0(iVar9);
  puVar3 = DAT_043b6b18;
  if ((DAT_043b6b08 & 1) == 0) {
    puVar3 = &DAT_043b6b09;
  }
  if (((ulong)local_320 & 1) == 0) {
    uVar25 = (ulong)&local_320 | 1;
  }
  else {
    uVar25 = local_310;
  }
  if (((DAT_043b6b30 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b6b30), iVar9 != 0)) {
    DAT_043b6b28 = 0x1a0;
    __cxa_guard_release(&DAT_043b6b30);
  }
  if (((DAT_043b6b40 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b6b40), iVar9 != 0)) {
    DAT_043b6b38 = 0x1a7;
    __cxa_guard_release(&DAT_043b6b40);
  }
  uVar22 = DAT_043b6b28;
  lVar13 = FUN_00153520(param_2,DAT_043b6b28);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1a0)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043b6b38;
    lVar13 = FUN_00153520(param_2,DAT_043b6b38);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1a0)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00fb1f70();
      puVar4 = DAT_043b6b58;
      if ((DAT_043b6b48 & 1) == 0) {
        puVar4 = &DAT_043b6b49;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
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
      uVar7 = 0;
      if (uVar24 != 0) {
        uVar7 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar7 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar6;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_041eef60;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x140);
  iVar9 = FUN_00154450(param_2,uVar25);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_00fb1f30,0);
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
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  uVar25 = local_310;
  plVar29 = DAT_043f1798;
  if ((((ulong)local_320 & 1) != 0) && (local_310 != 0)) {
    lVar23 = tpidr_el0;
    plVar26 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar26 = plVar29;
    }
    uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar26,uVar25,0,8);
        goto LAB_00fa8780;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,uVar25,0,8);
  }
LAB_00fa8780:
  memset(&local_320,0,0x2b0);
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
  lVar23 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar25 = 0;
  puVar20 = &LAB_00fad0f0;
  if (uVar11 != 0) {
    puVar20 = &LAB_00fad0b8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar22 = 0;
            *(undefined1 **)(lVar13 + 0x150) = puVar20;
            goto LAB_00fa88a4;
          }
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar20;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      goto LAB_00fa88a4;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  uVar22 = 1;
  local_320 = pcVar27;
  local_318 = puVar20;
LAB_00fa88a4:
  pcVar27 = *(char **)(lVar13 + 0x68);
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
  lVar28 = 0;
  uVar25 = 0;
  pcVar1 = FUN_00fad2a0;
  if (uVar11 != 0) {
    pcVar1 = (code *)&LAB_00fad128;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x150) = pcVar1;
        goto LAB_00fa8984;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      goto LAB_00fa8984;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  alStack_330[uVar22 * 2 + 2] = (long)pcVar27;
  (&local_318)[uVar22 * 2] = pcVar1;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00fa8984:
  pcVar27 = *(char **)(lVar13 + 0x78);
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
  lVar28 = 0;
  uVar25 = 0;
  pcVar1 = FUN_00fad4e8;
  if (uVar11 != 0) {
    pcVar1 = FUN_00fad360;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x150) = pcVar1;
            goto LAB_00fa8c00;
          }
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      goto LAB_00fa8c00;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  alStack_330[uVar22 * 2 + 2] = (long)pcVar27;
  (&local_318)[uVar22 * 2] = pcVar1;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00fa8c00:
  pcVar27 = *(char **)(lVar13 + 0x90);
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
  lVar28 = 0;
  uVar25 = 0;
  pcVar1 = FUN_00fad7ac;
  if (uVar11 != 0) {
    pcVar1 = FUN_00fad670;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x150) = pcVar1;
            goto LAB_00fa8d40;
          }
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      goto LAB_00fa8d40;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  alStack_330[uVar22 * 2 + 2] = (long)pcVar27;
  (&local_318)[uVar22 * 2] = pcVar1;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00fa8d40:
  pcVar27 = *(char **)(lVar13 + 0xa8);
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
  lVar28 = 0;
  uVar25 = 0;
  pcVar1 = FUN_00fada24;
  if (uVar11 != 0) {
    pcVar1 = FUN_00fad8e8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x150) = pcVar1;
            goto LAB_00fa8e80;
          }
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      goto LAB_00fa8e80;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  alStack_330[uVar22 * 2 + 2] = (long)pcVar27;
  (&local_318)[uVar22 * 2] = pcVar1;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00fa8e80:
  pcVar27 = *(char **)(lVar13 + 0xc0);
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
  lVar28 = 0;
  uVar25 = 0;
  pcVar1 = FUN_00fae538;
  if (uVar11 != 0) {
    pcVar1 = FUN_00fadb60;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x150) = pcVar1;
            goto LAB_00fa8fc0;
          }
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      goto LAB_00fa8fc0;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  alStack_330[uVar22 * 2 + 2] = (long)pcVar27;
  (&local_318)[uVar22 * 2] = pcVar1;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00fa8fc0:
  pcVar27 = *(char **)(lVar13 + 0xd8);
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
  lVar28 = 0;
  uVar25 = 0;
  pcVar1 = FUN_00fb15b4;
  if (uVar11 != 0) {
    pcVar1 = (code *)&LAB_00fae6c0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x150) = pcVar1;
            goto LAB_00fa9100;
          }
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      goto LAB_00fa9100;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  alStack_330[uVar22 * 2 + 2] = (long)pcVar27;
  (&local_318)[uVar22 * 2] = pcVar1;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00fa9100:
  pcVar27 = *(char **)(lVar13 + 0xf0);
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
  lVar28 = 0;
  uVar25 = 0;
  pcVar1 = FUN_00fb17f8;
  if (uVar11 != 0) {
    pcVar1 = FUN_00fb16f0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x150) = pcVar1;
            goto LAB_00fa9240;
          }
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      goto LAB_00fa9240;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  alStack_330[uVar22 * 2 + 2] = (long)pcVar27;
  (&local_318)[uVar22 * 2] = pcVar1;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00fa9240:
  pcVar27 = *(char **)(lVar13 + 0x108);
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
  lVar28 = 0;
  uVar25 = 0;
  puVar20 = &LAB_00fb196c;
  if (uVar11 != 0) {
    puVar20 = &LAB_00fb1934;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(undefined1 **)(lVar13 + 0x150) = puVar20;
            goto LAB_00fa9380;
          }
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      goto LAB_00fa9380;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  alStack_330[uVar22 * 2 + 2] = (long)pcVar27;
  (&local_318)[uVar22 * 2] = puVar20;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00fa9380:
  pcVar27 = *(char **)(lVar13 + 0x120);
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
  lVar28 = 0;
  uVar25 = 0;
  puVar20 = &LAB_00fb19ec;
  if (uVar11 != 0) {
    puVar20 = &LAB_00fb19b4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(undefined1 **)(lVar13 + 0x150) = puVar20;
            goto LAB_00fa94c0;
          }
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      goto LAB_00fa94c0;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  alStack_330[uVar22 * 2 + 2] = (long)pcVar27;
  (&local_318)[uVar22 * 2] = puVar20;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00fa94c0:
  pcVar27 = *(char **)(lVar13 + 0x138);
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
  lVar28 = 0;
  uVar25 = 0;
  puVar20 = &LAB_00fb1a6c;
  if (uVar11 != 0) {
    puVar20 = &LAB_00fb1a34;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(undefined1 **)(lVar13 + 0x150) = puVar20;
            uVar11 = (uint)*(undefined8 *)(lVar13 + 0x198);
            goto joined_r0x00fa95b4;
          }
          *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x198) = *(ulong *)(lVar13 + 0x198) | 1L << (uVar25 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x198);
      goto joined_r0x00fa95b4;
    }
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar25 != 0x20);
  alStack_330[uVar22 * 2 + 2] = (long)pcVar27;
  (&local_318)[uVar22 * 2] = puVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x198);
  uVar22 = (ulong)((int)uVar22 + 1);
joined_r0x00fa95b4:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x198);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x198);
  }
  uVar25 = uVar22;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar15 = FUN_008cca50();
    lVar28 = lVar15 + 0x181;
    if ((*(byte *)(lVar15 + 0x180) & 1) != 0) {
      lVar28 = *(long *)(lVar15 + 400);
    }
    uVar25 = (ulong)((int)uVar22 + 1);
    alStack_330[uVar22 * 2 + 2] = lVar28;
    (&local_318)[uVar22 * 2] = PTR_LAB_0437d9b8;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x198);
  }
  uVar22 = uVar25;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar15 = FUN_008cca50();
    lVar28 = lVar15 + 0x289;
    if ((*(byte *)(lVar15 + 0x288) & 1) != 0) {
      lVar28 = *(long *)(lVar15 + 0x298);
    }
    uVar22 = (ulong)((int)uVar25 + 1);
    alStack_330[uVar25 * 2 + 2] = lVar28;
    (&local_318)[uVar25 * 2] = PTR_LAB_0437d9c0;
  }
  uVar25 = uVar22;
  if (*(long *)(lVar13 + 0x150) != 0) {
    lVar15 = FUN_008cca50();
    lVar28 = lVar15 + 0x1c9;
    if ((*(byte *)(lVar15 + 0x1c8) & 1) != 0) {
      lVar28 = *(long *)(lVar15 + 0x1d8);
    }
    puVar20 = *(undefined1 **)(lVar13 + 0x150);
    uVar25 = (ulong)((int)uVar22 + 1);
    alStack_330[uVar22 * 2 + 2] = lVar28;
    (&local_318)[uVar22 * 2] = puVar20;
  }
  alStack_330[uVar25 * 2 + 2] = 0;
  (&local_318)[uVar25 * 2] = (undefined1 *)0x0;
  memcpy(alStack_5e0 + 2,&local_320,0x2b0);
  memcpy(alStack_880,&local_320,0x2b0);
  lVar28 = FUN_008cca50();
  lVar15 = uVar25 - 1;
  pcVar27 = (char *)alStack_330[lVar15 * 2 + 2];
  sVar14 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    alStack_5e0[lVar15 * 2 + 2] = 0;
    alStack_5e0[lVar15 * 2 + 3] = 0;
  }
  alStack_880[lVar15 * 2] = alStack_330[lVar15 * 2 + 2];
  alStack_880[lVar15 * 2 + 1] = (long)&LAB_00fb1ac0;
  FUN_00151fe0(param_2,0,2);
  local_888[0] = FUN_0014feb0(param_2,0xffffffff);
  local_890 = param_2;
  if (((*PTR_DAT_0437d9c8 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_0437d9c8), puVar3 = PTR_DAT_0437d9b0, iVar9 != 0)) {
    FUN_00fac8f0(PTR_DAT_0437d9b0);
    FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437d9c8);
  }
  uVar10 = local_888[0];
  uVar25 = (ulong)((byte)*puVar5 >> 1);
  puVar3 = *(undefined **)(puVar5 + 0x10);
  if ((*puVar5 & 1) == 0) {
    puVar3 = puVar5 + 1;
  }
  else {
    uVar25 = *(ulong *)(puVar5 + 8);
  }
  FUN_001514f0(param_2,puVar3,uVar25);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00fb1b10,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      plVar29 = alStack_880;
      pbVar16 = (byte *)FUN_00fab170();
    }
    else if (lVar28 == 0) {
      plVar29 = alStack_5e0 + 2;
      pbVar16 = (byte *)FUN_00faaf7c();
    }
    else {
      plVar29 = &local_320;
      pbVar16 = (byte *)FUN_00fab364();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_898 = FUN_0014feb0(param_2,0xffffffff);
    local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
    local_8a0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_8d0,&local_890,local_898);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,plVar29,2);
    uVar10 = local_898;
    if (*(long *)(lVar13 + 0x180) == 0) {
      lVar15 = *(long *)(lVar13 + 0x188);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x188);
      uVar10 = local_898;
    }
    local_898 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_898;
    uVar19 = *(undefined8 *)(lVar13 + 0x160);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_898;
    uVar19 = *(undefined8 *)(lVar13 + 0x168);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_8d0,&local_8a0,local_898);
    }
    else {
      local_8d0 = &LAB_00fb1c00;
      uStack_8c8 = 0;
      local_8c0 = lVar13;
      lStack_8b8 = lVar23;
      FUN_00fb1b60(param_2,1,&local_8d0,local_898);
      local_8d0 = &LAB_00fb1c04;
      uStack_8c8 = 0;
      local_8c0 = lVar13;
      lStack_8b8 = lVar23;
      FUN_00fb1b60(param_2,2,&local_8d0,local_898);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_8d0,&local_890,uVar10);
    if (*(undefined1 **)(lVar13 + 0x158) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 400) == '\0') goto LAB_00fa99a8;
LAB_00fa9c60:
      local_8d0 = &LAB_00fb1c00;
      uStack_8c8 = 0;
      local_8c0 = lVar13;
      lStack_8b8 = lVar23;
      FUN_00fb1b60(param_2,1,&local_8d0,uVar10);
      local_8d0 = &LAB_00fb1c04;
      uStack_8c8 = 0;
      local_8c0 = lVar13;
      lStack_8b8 = lVar23;
      FUN_00fb1b60(param_2,2,&local_8d0,uVar10);
      if (param_2 == 0) goto LAB_00fa9cb4;
LAB_00fa99b0:
      uVar12 = local_898;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_8c8 = 0;
      local_8d0 = *(undefined1 **)(lVar13 + 0x158);
      local_8c0 = lVar13;
      lStack_8b8 = lVar23;
      FUN_00fb1b60(param_2,4,&local_8d0,uVar10);
      if (*(char *)(lVar13 + 400) != '\0') goto LAB_00fa9c60;
LAB_00fa99a8:
      if (param_2 != 0) goto LAB_00fa99b0;
LAB_00fa9cb4:
      uVar12 = local_898;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_8a0,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_00fab5b4();
      puVar5 = DAT_043b68a0;
      if ((DAT_043b6890 & 1) == 0) {
        puVar5 = &DAT_043b6891;
      }
      FUN_00154450(param_2,puVar5);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_8d0._0_4_ = 0x1e;
      FUN_008fe304(&local_8a0,param_2,&local_8d0,&local_890,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_320,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
      FUN_008fe304(&local_8a0,param_2,&local_8d0,&local_890,uVar12);
      local_8d0 = *(undefined1 **)(lVar13 + 0x158);
      if (local_8d0 != (undefined1 *)0x0) {
        uStack_8c8 = 0;
        local_8c0 = lVar13;
        lStack_8b8 = lVar23;
        FUN_00fb1b60(param_2,4,&local_8d0,uVar12);
      }
      local_8d0 = &LAB_00fb1cc8;
      uStack_8c8 = 0;
      local_8b0 = 0;
      puStack_8a8 = &DAT_03a788c8;
      local_8c0 = lVar13;
      lStack_8b8 = lVar23;
      FUN_00fb1c10(param_2,1,&local_8d0,uVar12);
      local_8d0 = &LAB_00fb1ccc;
      uStack_8c8 = 0;
      local_8b0 = 0;
      puStack_8a8 = &DAT_03a788c8;
      local_8c0 = lVar13;
      lStack_8b8 = lVar23;
      FUN_00fb1c10(param_2,2,&local_8d0,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_888[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


