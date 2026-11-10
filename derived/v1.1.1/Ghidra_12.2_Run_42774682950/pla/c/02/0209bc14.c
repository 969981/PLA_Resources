/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0209bc14; name: FUN_0209bc14
 */


undefined8 FUN_0209bc14(long param_1,long param_2)

{
  code *__maxlen;
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  string *psVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined8 uVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  char *pcVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
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
  long alStack_7f0 [78];
  long alStack_580 [80];
  long alStack_300 [2];
  undefined8 local_2f0;
  code *local_2e8;
  ulong local_2e0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043d9340 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d9340), iVar7 != 0)) {
    local_2e0 = 0;
    local_2e8 = (code *)0x0;
    local_2f0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383568 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04383568);
      puVar4 = PTR_DAT_04383570;
      if (iVar7 != 0) {
        FUN_01fd9e70(PTR_DAT_04383570);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383568);
      }
    }
    pcVar24 = (char *)FUN_0209ea5c(&local_2f0,PTR_DAT_04383570);
    psVar15 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043d9328,psVar15);
    uVar26 = local_2e0;
    plVar27 = DAT_043f1798;
    if ((((ulong)local_2f0 & 1) != 0) && (local_2e0 != 0)) {
      lVar12 = tpidr_el0;
      plVar23 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar23 = plVar27;
      }
      uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar20 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar23,uVar26,0,8);
          goto LAB_0209d184;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,uVar26,0,8);
    }
LAB_0209d184:
    FUN_00100250(PTR__string_04379718,&DAT_043d9328,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d9340);
  }
  std::string::string((string *)&local_2f0,(string *)&DAT_043d9328);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d9320);
  pcVar19 = (code *)((ulong)local_2f0 >> 1 & 0x7f);
  if (((ulong)local_2f0 & 1) != 0) {
    pcVar19 = local_2e8;
  }
  std::string::append((ulong)&local_2f0,(char)iVar7);
  bVar6 = ((ulong)local_2f0 & 1) == 0;
  uVar26 = local_2e0;
  if (bVar6) {
    uVar26 = (long)&local_2f0 + 1;
  }
  __maxlen = (code *)((ulong)local_2f0 >> 1 & 0x7f);
  if (!bVar6) {
    __maxlen = local_2e8;
  }
  iVar7 = snprintf((char *)(pcVar19 + (uVar26 - 1)),(size_t)__maxlen,"%d",(ulong)DAT_043d9320);
  DAT_043d9320 = DAT_043d9320 + 1;
  pbVar11 = (byte *)FUN_020a26d0(iVar7);
  pbVar17 = *(byte **)(pbVar11 + 0x10);
  if ((*pbVar11 & 1) == 0) {
    pbVar17 = pbVar11 + 1;
  }
  if (((ulong)local_2f0 & 1) == 0) {
    uVar26 = (ulong)&local_2f0 | 1;
  }
  else {
    uVar26 = local_2e0;
  }
  if (((DAT_043d9370 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d9370), iVar7 != 0)) {
    DAT_043d9368 = 0x140;
    __cxa_guard_release(&DAT_043d9370);
  }
  if (((DAT_043d9380 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d9380), iVar7 != 0)) {
    DAT_043d9378 = 0x147;
    __cxa_guard_release(&DAT_043d9380);
  }
  uVar20 = DAT_043d9368;
  lVar12 = FUN_00153520(param_2,DAT_043d9368);
  if ((uVar20 < ((ulong)(uint)-(int)lVar12 & 7 | 0x140)) ||
     (puVar16 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar16 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar20 = DAT_043d9378;
    lVar12 = FUN_00153520(param_2,DAT_043d9378);
    if ((uVar20 < ((ulong)(uint)-(int)lVar12 & 7 | 0x140)) ||
       (puVar16 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar16 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_020a2960();
      puVar2 = DAT_043d9398;
      if ((DAT_043d9388 & 1) == 0) {
        puVar2 = &DAT_043d9389;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar16 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar16[1] = uVar18;
  puVar16[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar16[3] = lVar12;
  lVar21 = *(long *)(param_1 + 0x20);
  puVar16[4] = lVar21;
  *(undefined4 *)(puVar16 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar21 != 0) {
    uVar22 = puVar16[2];
    uVar20 = *(ulong *)(lVar12 + 8);
    if ((uVar22 & uVar22 - 1) == 0) {
      uVar20 = uVar22 - 1 & uVar20;
    }
    else if (uVar22 <= uVar20) {
      uVar5 = 0;
      if (uVar22 != 0) {
        uVar5 = uVar20 / uVar22;
      }
      uVar20 = uVar20 - uVar5 * uVar22;
    }
    *(undefined8 **)(puVar16[1] + uVar20 * 8) = puVar16 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar16[10] = 0;
  puVar16[8] = 0;
  puVar16[9] = 0;
  puVar16[6] = uVar18;
  puVar16[7] = uVar3;
  puVar16[8] = *(undefined8 *)(param_1 + 0x40);
  puVar16[9] = *(undefined8 *)(param_1 + 0x48);
  puVar16[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar16 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar16 = &PTR_FUN_0425b3a8;
  memcpy(puVar16 + 0xc,(void *)(param_1 + 0x60),0xe0);
  iVar7 = FUN_00154450(param_2,uVar26);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_020a2920,0);
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
  FUN_001522a0(param_2,pbVar17);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,pbVar17);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  uVar26 = local_2e0;
  plVar27 = DAT_043f1798;
  if ((((ulong)local_2f0 & 1) != 0) && (local_2e0 != 0)) {
    lVar21 = tpidr_el0;
    plVar23 = *(long **)(lVar21 + 0x20);
    if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
      *(long **)(lVar21 + 0x20) = DAT_043f1798;
      plVar23 = plVar27;
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
        FUN_02bcc824(plVar23,uVar26,0,8);
        goto LAB_0209bf78;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,uVar26,0,8);
  }
LAB_0209bf78:
  memset(&local_2f0,0,0x280);
  pcVar24 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  lVar21 = lVar12 + 8;
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = FUN_0209ee60;
  if (uVar9 != 0) {
    pcVar19 = FUN_0209eda0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 0x13) {
        uVar20 = 0;
        *(code **)(lVar12 + 0xf0) = pcVar19;
        goto LAB_0209c070;
      }
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      uVar20 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
      goto LAB_0209c070;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  uVar20 = 1;
  local_2f0 = pcVar24;
  local_2e8 = pcVar19;
LAB_0209c070:
  puVar4 = PTR_DAT_0437dcc8;
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *puVar4 = 1;
  pcVar24 = *(char **)(lVar12 + 0x70);
  *(undefined1 **)(lVar12 + 0x120) = &LAB_020a2d90;
  *(undefined1 **)(lVar12 + 0x128) = &LAB_020a2e4c;
  *(undefined1 **)(lVar12 + 0x110) = &LAB_020a2f10;
  *(undefined1 **)(lVar12 + 0x118) = &LAB_020a2f20;
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = FUN_020a172c;
  if (uVar9 != 0) {
    pcVar19 = (code *)&LAB_0209ef60;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0xf0) = pcVar19;
            goto LAB_0209c2f8;
          }
          *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
      goto LAB_0209c2f8;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  alStack_300[uVar20 * 2 + 2] = (long)pcVar24;
  (&local_2e8)[uVar20 * 2] = pcVar19;
  uVar20 = (ulong)((int)uVar20 + 1);
LAB_0209c2f8:
  pcVar24 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = FUN_020a1990;
  if (uVar9 != 0) {
    pcVar19 = FUN_020a1784;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0xf0) = pcVar19;
            goto LAB_0209c438;
          }
          *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
      goto LAB_0209c438;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  alStack_300[uVar20 * 2 + 2] = (long)pcVar24;
  (&local_2e8)[uVar20 * 2] = pcVar19;
  uVar20 = (ulong)((int)uVar20 + 1);
LAB_0209c438:
  pcVar24 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = FUN_020a1bdc;
  if (uVar9 != 0) {
    pcVar19 = FUN_020a1a78;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0xf0) = pcVar19;
            goto LAB_0209c578;
          }
          *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
      goto LAB_0209c578;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  alStack_300[uVar20 * 2 + 2] = (long)pcVar24;
  (&local_2e8)[uVar20 * 2] = pcVar19;
  uVar20 = (ulong)((int)uVar20 + 1);
LAB_0209c578:
  pcVar24 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = FUN_020a1d0c;
  if (uVar9 != 0) {
    pcVar19 = FUN_020a1cc4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0xf0) = pcVar19;
            goto LAB_0209c6b8;
          }
          *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
      goto LAB_0209c6b8;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  alStack_300[uVar20 * 2 + 2] = (long)pcVar24;
  (&local_2e8)[uVar20 * 2] = pcVar19;
  uVar20 = (ulong)((int)uVar20 + 1);
LAB_0209c6b8:
  pcVar24 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = FUN_020a1ed4;
  if (uVar9 != 0) {
    pcVar19 = FUN_020a1d54;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0xf0) = pcVar19;
            goto LAB_0209c7f8;
          }
          *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
      goto LAB_0209c7f8;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  alStack_300[uVar20 * 2 + 2] = (long)pcVar24;
  (&local_2e8)[uVar20 * 2] = pcVar19;
  uVar20 = (ulong)((int)uVar20 + 1);
LAB_0209c7f8:
  pcVar24 = *(char **)(lVar12 + 0xd8);
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = (code *)&LAB_020a20a0;
  if (uVar9 != 0) {
    pcVar19 = (code *)&LAB_020a1fbc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0xf0) = pcVar19;
            uVar9 = (uint)*(undefined8 *)(lVar12 + 0x138);
            goto joined_r0x0209c8ec;
          }
          *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x138) = *(ulong *)(lVar12 + 0x138) | 1L << (uVar26 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar12 + 0x138);
      goto joined_r0x0209c8ec;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  alStack_300[uVar20 * 2 + 2] = (long)pcVar24;
  (&local_2e8)[uVar20 * 2] = pcVar19;
  uVar9 = (uint)*(undefined8 *)(lVar12 + 0x138);
  uVar20 = (ulong)((int)uVar20 + 1);
joined_r0x0209c8ec:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar12 + 0x138);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar12 + 0x138);
  }
  uVar26 = uVar20;
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar14 = FUN_008cca50();
    lVar25 = lVar14 + 0x181;
    if ((*(byte *)(lVar14 + 0x180) & 1) != 0) {
      lVar25 = *(long *)(lVar14 + 400);
    }
    uVar26 = (ulong)((int)uVar20 + 1);
    alStack_300[uVar20 * 2 + 2] = lVar25;
    (&local_2e8)[uVar20 * 2] = (code *)PTR_LAB_04383540;
    uVar9 = (uint)*(undefined8 *)(lVar12 + 0x138);
  }
  uVar20 = uVar26;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar14 = FUN_008cca50();
    lVar25 = lVar14 + 0x289;
    if ((*(byte *)(lVar14 + 0x288) & 1) != 0) {
      lVar25 = *(long *)(lVar14 + 0x298);
    }
    uVar20 = (ulong)((int)uVar26 + 1);
    alStack_300[uVar26 * 2 + 2] = lVar25;
    (&local_2e8)[uVar26 * 2] = (code *)PTR_LAB_04383548;
  }
  uVar26 = uVar20;
  if (*(long *)(lVar12 + 0xf0) != 0) {
    lVar14 = FUN_008cca50();
    lVar25 = lVar14 + 0x1c9;
    if ((*(byte *)(lVar14 + 0x1c8) & 1) != 0) {
      lVar25 = *(long *)(lVar14 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar12 + 0xf0);
    uVar26 = (ulong)((int)uVar20 + 1);
    alStack_300[uVar20 * 2 + 2] = lVar25;
    (&local_2e8)[uVar20 * 2] = pcVar19;
  }
  alStack_300[uVar26 * 2 + 2] = 0;
  (&local_2e8)[uVar26 * 2] = (code *)0x0;
  memcpy(alStack_580 + 2,&local_2f0,0x280);
  memcpy(alStack_7f0,&local_2f0,0x280);
  lVar25 = FUN_008cca50();
  lVar14 = uVar26 - 1;
  pcVar24 = (char *)alStack_300[lVar14 * 2 + 2];
  sVar13 = strlen(pcVar24);
  sVar1 = (ulong)(*(byte *)(lVar25 + 0x1c8) >> 1);
  if ((*(byte *)(lVar25 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar25 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar7 = std::string::compare(lVar25 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
     iVar7 == 0)) {
    alStack_580[lVar14 * 2 + 2] = 0;
    alStack_580[lVar14 * 2 + 3] = 0;
  }
  alStack_7f0[lVar14 * 2] = alStack_300[lVar14 * 2 + 2];
  alStack_7f0[lVar14 * 2 + 1] = (long)&LAB_020a21c0;
  FUN_00151fe0(param_2,0,2);
  local_7f8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_800 = param_2;
  if ((*PTR_DAT_04383568 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04383568);
    puVar4 = PTR_DAT_04383570;
    if (iVar7 != 0) {
      FUN_01fd9e70(PTR_DAT_04383570);
      FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04383568);
    }
  }
  uVar8 = local_7f8[0];
  uVar26 = *(ulong *)(PTR_DAT_04383570 + 8);
  puVar4 = *(undefined **)(PTR_DAT_04383570 + 0x10);
  if ((*PTR_DAT_04383570 & 1) == 0) {
    puVar4 = PTR_DAT_04383570 + 1;
    uVar26 = (ulong)((byte)*PTR_DAT_04383570 >> 1);
  }
  FUN_001514f0(param_2,puVar4,uVar26);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_020a2210,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar25 = 0;
  do {
    if (lVar25 == 1) {
      plVar27 = alStack_7f0;
      pbVar17 = (byte *)FUN_01fda498();
    }
    else if (lVar25 == 0) {
      plVar27 = alStack_580 + 2;
      pbVar17 = (byte *)FUN_01fd8c2c();
    }
    else {
      plVar27 = &local_2f0;
      pbVar17 = (byte *)FUN_01fd9c14();
    }
    pbVar11 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar11 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar11);
    local_808 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    local_810 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_840,&local_800,local_808);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,plVar27,2);
    uVar8 = local_808;
    if (*(long *)(lVar12 + 0x120) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
    }
    uVar8 = local_808;
    if (*(long *)(lVar12 + 0x128) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_808;
    uVar18 = *(undefined8 *)(lVar12 + 0x100);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_808;
    uVar18 = *(undefined8 *)(lVar12 + 0x108);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_840,&local_810,local_808);
    }
    else {
      local_840 = &LAB_020a2300;
      uStack_838 = 0;
      local_830 = lVar12;
      lStack_828 = lVar21;
      FUN_020a2260(param_2,1,&local_840,local_808);
      local_840 = &LAB_020a260c;
      uStack_838 = 0;
      local_830 = lVar12;
      lStack_828 = lVar21;
      FUN_020a2260(param_2,2,&local_840,local_808);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_840,&local_800,uVar8);
    if (*(undefined1 **)(lVar12 + 0xf8) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x130) == '\0') goto LAB_0209cd50;
LAB_0209cf88:
      local_840 = &LAB_020a2300;
      uStack_838 = 0;
      local_830 = lVar12;
      lStack_828 = lVar21;
      FUN_020a2260(param_2,1,&local_840,uVar8);
      local_840 = &LAB_020a260c;
      uStack_838 = 0;
      local_830 = lVar12;
      lStack_828 = lVar21;
      FUN_020a2260(param_2,2,&local_840,uVar8);
      if (param_2 == 0) goto LAB_0209cfd8;
LAB_0209cd58:
      uVar10 = local_808;
      FUN_00150260(param_2,uVar8);
    }
    else {
      uStack_838 = 0;
      local_840 = *(undefined1 **)(lVar12 + 0xf8);
      local_830 = lVar12;
      lStack_828 = lVar21;
      FUN_020a2260(param_2,4,&local_840,uVar8);
      if (*(char *)(lVar12 + 0x130) != '\0') goto LAB_0209cf88;
LAB_0209cd50:
      if (param_2 != 0) goto LAB_0209cd58;
LAB_0209cfd8:
      uVar10 = local_808;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_810,0xfffffffe);
    lVar25 = lVar25 + 1;
    if (lVar25 == 3) {
      FUN_0209e224();
      puVar4 = DAT_043d90f8;
      if ((DAT_043d90e8 & 1) == 0) {
        puVar4 = &DAT_043d90e9;
      }
      FUN_00154450(param_2,puVar4);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_840._0_4_ = 0x1e;
      FUN_008fe304(&local_810,param_2,&local_840,&local_800,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2f0,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
      FUN_008fe304(&local_810,param_2,&local_840,&local_800,uVar10);
      local_840 = *(undefined1 **)(lVar12 + 0xf8);
      if (local_840 != (undefined1 *)0x0) {
        uStack_838 = 0;
        local_830 = lVar12;
        lStack_828 = lVar21;
        FUN_020a2260(param_2,4,&local_840,uVar10);
      }
      local_840 = &LAB_020a26c8;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7d308;
      local_830 = lVar12;
      lStack_828 = lVar21;
      FUN_020a2610(param_2,1,&local_840,uVar10);
      local_840 = &LAB_020a26cc;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7d308;
      local_830 = lVar12;
      lStack_828 = lVar21;
      FUN_020a2610(param_2,2,&local_840,uVar10);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar10);
      }
      FUN_00152ae0(param_2,uVar8);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7f8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


