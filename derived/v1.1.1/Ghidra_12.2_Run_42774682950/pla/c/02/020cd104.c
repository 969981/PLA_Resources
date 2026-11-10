/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020cd104; name: FUN_020cd104
 */


undefined8 FUN_020cd104(long param_1,long param_2)

{
  code *__maxlen;
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  string *psVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined8 uVar19;
  code *pcVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  long lVar27;
  long *plVar28;
  undefined1 *local_900;
  undefined8 uStack_8f8;
  long local_8f0;
  long lStack_8e8;
  undefined8 local_8e0;
  undefined *puStack_8d8;
  long local_8d0;
  undefined4 local_8c8;
  long local_8c0;
  undefined4 local_8b8 [2];
  long alStack_8b0 [86];
  long alStack_600 [88];
  long alStack_340 [2];
  undefined8 local_330;
  code *local_328;
  ulong local_320;
  undefined1 auStack_70 [16];
  
  puVar4 = PTR_DAT_04380678;
  if (((DAT_043d9c68 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d9c68), iVar8 != 0)) {
    local_320 = 0;
    local_328 = (code *)0x0;
    local_330 = (char *)0x2e6c6f7308;
    if ((*puVar4 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04380678);
      puVar6 = PTR_DAT_04380680;
      if (iVar8 != 0) {
        FUN_01602e50(PTR_DAT_04380680);
        FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04380678);
      }
    }
    pcVar26 = (char *)FUN_020d05ec(&local_330,PTR_DAT_04380680);
    psVar16 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043d9c50,psVar16);
    uVar24 = local_320;
    plVar28 = DAT_043f1798;
    if ((((ulong)local_330 & 1) != 0) && (local_320 != 0)) {
      lVar13 = tpidr_el0;
      plVar25 = *(long **)(lVar13 + 0x20);
      if (*(long **)(lVar13 + 0x20) == (long *)0x0) {
        *(long **)(lVar13 + 0x20) = DAT_043f1798;
        plVar25 = plVar28;
      }
      uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar25,uVar24,0,8);
          goto LAB_020cec94;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,uVar24,0,8);
    }
LAB_020cec94:
    FUN_00100250(PTR__string_04379718,&DAT_043d9c50,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d9c68);
  }
  std::string::string((string *)&local_330,(string *)&DAT_043d9c50);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d9c48);
  pcVar20 = (code *)((ulong)local_330 >> 1 & 0x7f);
  if (((ulong)local_330 & 1) != 0) {
    pcVar20 = local_328;
  }
  std::string::append((ulong)&local_330,(char)iVar8);
  bVar7 = ((ulong)local_330 & 1) == 0;
  uVar24 = local_320;
  if (bVar7) {
    uVar24 = (long)&local_330 + 1;
  }
  __maxlen = (code *)((ulong)local_330 >> 1 & 0x7f);
  if (!bVar7) {
    __maxlen = local_328;
  }
  iVar8 = snprintf((char *)(pcVar20 + (uVar24 - 1)),(size_t)__maxlen,"%d",(ulong)DAT_043d9c48);
  DAT_043d9c48 = DAT_043d9c48 + 1;
  pbVar12 = (byte *)FUN_02098ab4(iVar8);
  pbVar18 = *(byte **)(pbVar12 + 0x10);
  if ((*pbVar12 & 1) == 0) {
    pbVar18 = pbVar12 + 1;
  }
  if (((ulong)local_330 & 1) == 0) {
    uVar24 = (ulong)&local_330 | 1;
  }
  else {
    uVar24 = local_320;
  }
  if (((DAT_043d9c78 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d9c78), iVar8 != 0)) {
    DAT_043d9c70 = 0x170;
    __cxa_guard_release(&DAT_043d9c78);
  }
  if (((DAT_043d9c88 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d9c88), iVar8 != 0)) {
    DAT_043d9c80 = 0x177;
    __cxa_guard_release(&DAT_043d9c88);
  }
  uVar21 = DAT_043d9c70;
  lVar13 = FUN_00153520(param_2,DAT_043d9c70);
  if ((uVar21 < ((ulong)(uint)-(int)lVar13 & 7 | 0x170)) ||
     (puVar17 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043d9c80;
    lVar13 = FUN_00153520(param_2,DAT_043d9c80);
    if ((uVar21 < ((ulong)(uint)-(int)lVar13 & 7 | 0x170)) ||
       (puVar17 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_020d89d0();
      puVar2 = DAT_043d9ca0;
      if ((DAT_043d9c90 & 1) == 0) {
        puVar2 = &DAT_043d9c91;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar17 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar17[1] = uVar19;
  puVar17[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar17[3] = lVar13;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar17[4] = lVar22;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar17[2];
    uVar21 = *(ulong *)(lVar13 + 8);
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
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar19;
  puVar17[7] = uVar3;
  puVar17[8] = *(undefined8 *)(param_1 + 0x40);
  puVar17[9] = *(undefined8 *)(param_1 + 0x48);
  puVar17[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar17 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar17 = &PTR_FUN_0425b420;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x110);
  iVar8 = FUN_00154450(param_2,uVar24);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_020d8990,0);
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
  FUN_001522a0(param_2,pbVar18);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,pbVar18);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  uVar24 = local_320;
  plVar28 = DAT_043f1798;
  if ((((ulong)local_330 & 1) != 0) && (local_320 != 0)) {
    lVar22 = tpidr_el0;
    plVar25 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar25 = plVar28;
    }
    uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar25,uVar24,0,8);
        goto LAB_020cd470;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,uVar24,0,8);
  }
LAB_020cd470:
  memset(&local_330,0,0x2c0);
  pcVar26 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar22 = lVar13 + 8;
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d0948;
  if (uVar10 != 0) {
    pcVar20 = FUN_020d0860;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar21 = 0;
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020cd678;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar21 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020cd678;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  uVar21 = 1;
  local_330 = pcVar26;
  local_328 = pcVar20;
LAB_020cd678:
  pcVar26 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d3b80;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_020d0a60;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020cd7b8;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020cd7b8;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_020cd7b8:
  pcVar26 = *(char **)(lVar13 + 0x80);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d6dbc;
  if (uVar10 != 0) {
    pcVar20 = FUN_020d3bd8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020cd8f8;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020cd8f8;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_020cd8f8:
  pcVar26 = *(char **)(lVar13 + 0x88);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d6f54;
  if (uVar10 != 0) {
    pcVar20 = FUN_020d6e14;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020cda38;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020cda38;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_020cda38:
  pcVar26 = *(char **)(lVar13 + 0xa0);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d7168;
  if (uVar10 != 0) {
    pcVar20 = FUN_020d7040;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020cdb78;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020cdb78;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_020cdb78:
  pcVar26 = *(char **)(lVar13 + 0xb8);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d72d8;
  if (uVar10 != 0) {
    pcVar20 = FUN_020d7290;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020cdcb8;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020cdcb8;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_020cdcb8:
  pcVar26 = *(char **)(lVar13 + 0xd0);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d7844;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_020d7320;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020cddf8;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020cddf8;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_020cddf8:
  pcVar26 = *(char **)(lVar13 + 0xe8);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d79d4;
  if (uVar10 != 0) {
    pcVar20 = FUN_020d798c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020cdf38;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020cdf38;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_020cdf38:
  pcVar26 = *(char **)(lVar13 + 0x100);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d7bc4;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_020d7a1c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020ce078;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020ce078;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_020ce078:
  pcVar26 = *(char **)(lVar13 + 0x108);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d7dc4;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_020d7c1c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020ce1b8;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020ce1b8;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_020ce1b8:
  pcVar26 = *(char **)(lVar13 + 0x110);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = (code *)&LAB_020d8568;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_020d7e1c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_020ce2c8;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      goto LAB_020ce2c8;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar21 = (ulong)((int)uVar21 + 1);
LAB_020ce2c8:
  pcVar26 = *(char **)(lVar13 + 0x118);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar27 = 0;
  uVar24 = 0;
  pcVar20 = FUN_020d876c;
  if (uVar10 != 0) {
    pcVar20 = FUN_020d870c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar18 = (byte *)(lVar15 + lVar27);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar24;
      if (iVar8 == 0x13) {
        *(code **)(lVar13 + 0x120) = pcVar20;
        uVar10 = (uint)*(undefined8 *)(lVar13 + 0x168);
        goto joined_r0x020ce3ac;
      }
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar24 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar13 + 0x168);
      goto joined_r0x020ce3ac;
    }
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar24 != 0x20);
  alStack_340[uVar21 * 2 + 2] = (long)pcVar26;
  (&local_328)[uVar21 * 2] = pcVar20;
  uVar10 = (uint)*(undefined8 *)(lVar13 + 0x168);
  uVar21 = (ulong)((int)uVar21 + 1);
joined_r0x020ce3ac:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar13 + 0x168);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar13 + 0x168);
  }
  uVar24 = uVar21;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar15 = FUN_008cca50();
    lVar27 = lVar15 + 0x181;
    if ((*(byte *)(lVar15 + 0x180) & 1) != 0) {
      lVar27 = *(long *)(lVar15 + 400);
    }
    uVar24 = (ulong)((int)uVar21 + 1);
    alStack_340[uVar21 * 2 + 2] = lVar27;
    (&local_328)[uVar21 * 2] = (code *)PTR_LAB_04381320;
    uVar10 = (uint)*(undefined8 *)(lVar13 + 0x168);
  }
  uVar21 = uVar24;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar15 = FUN_008cca50();
    lVar27 = lVar15 + 0x289;
    if ((*(byte *)(lVar15 + 0x288) & 1) != 0) {
      lVar27 = *(long *)(lVar15 + 0x298);
    }
    uVar21 = (ulong)((int)uVar24 + 1);
    alStack_340[uVar24 * 2 + 2] = lVar27;
    (&local_328)[uVar24 * 2] = (code *)PTR_LAB_04381328;
  }
  uVar24 = uVar21;
  if (*(long *)(lVar13 + 0x120) != 0) {
    lVar15 = FUN_008cca50();
    lVar27 = lVar15 + 0x1c9;
    if ((*(byte *)(lVar15 + 0x1c8) & 1) != 0) {
      lVar27 = *(long *)(lVar15 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x120);
    uVar24 = (ulong)((int)uVar21 + 1);
    alStack_340[uVar21 * 2 + 2] = lVar27;
    (&local_328)[uVar21 * 2] = pcVar20;
  }
  alStack_340[uVar24 * 2 + 2] = 0;
  (&local_328)[uVar24 * 2] = (code *)0x0;
  memcpy(alStack_600 + 2,&local_330,0x2c0);
  memcpy(alStack_8b0,&local_330,0x2c0);
  lVar27 = FUN_008cca50();
  lVar15 = uVar24 - 1;
  pcVar26 = (char *)alStack_340[lVar15 * 2 + 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar8 == 0)) {
    alStack_600[lVar15 * 2 + 2] = 0;
    alStack_600[lVar15 * 2 + 3] = 0;
  }
  alStack_8b0[lVar15 * 2] = alStack_340[lVar15 * 2 + 2];
  alStack_8b0[lVar15 * 2 + 1] = (long)&LAB_020d87d0;
  FUN_00151fe0(param_2,0,2);
  local_8b8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_8c0 = param_2;
  if ((*puVar4 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04380678);
    puVar4 = PTR_DAT_04380680;
    if (iVar8 != 0) {
      FUN_01602e50(PTR_DAT_04380680);
      FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04380678);
    }
  }
  uVar9 = local_8b8[0];
  uVar24 = *(ulong *)(PTR_DAT_04380680 + 8);
  puVar4 = *(undefined **)(PTR_DAT_04380680 + 0x10);
  if ((*PTR_DAT_04380680 & 1) == 0) {
    puVar4 = PTR_DAT_04380680 + 1;
    uVar24 = (ulong)((byte)*PTR_DAT_04380680 >> 1);
  }
  FUN_001514f0(param_2,puVar4,uVar24);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_020d83f0,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      plVar28 = alStack_8b0;
      pbVar18 = (byte *)FUN_017aa744();
    }
    else if (lVar27 == 0) {
      plVar28 = alStack_600 + 2;
      pbVar18 = (byte *)FUN_017a9274();
    }
    else {
      plVar28 = &local_330;
      pbVar18 = (byte *)FUN_017aa4f4();
    }
    pbVar12 = *(byte **)(pbVar18 + 0x10);
    if ((*pbVar18 & 1) == 0) {
      pbVar12 = pbVar18 + 1;
    }
    FUN_00154450(param_2,pbVar12);
    local_8c8 = FUN_0014feb0(param_2,0xffffffff);
    local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
    local_8d0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_900,&local_8c0,local_8c8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,plVar28,2);
    uVar9 = local_8c8;
    if (*(long *)(lVar13 + 0x150) == 0) {
      lVar15 = *(long *)(lVar13 + 0x158);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar15 = *(long *)(lVar13 + 0x158);
      uVar9 = local_8c8;
    }
    local_8c8 = uVar9;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_8c8;
    uVar19 = *(undefined8 *)(lVar13 + 0x130);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_8c8;
    uVar19 = *(undefined8 *)(lVar13 + 0x138);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_900 = (undefined1 *)CONCAT44(local_900._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_900,&local_8d0,local_8c8);
    }
    else {
      local_900 = &LAB_020d88c0;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar22;
      FUN_020d8820(param_2,1,&local_900,local_8c8);
      local_900 = &LAB_020d88c4;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar22;
      FUN_020d8820(param_2,2,&local_900,local_8c8);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_900,&local_8c0,uVar9);
    if (*(undefined1 **)(lVar13 + 0x128) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x160) != '\0') goto LAB_020cea38;
LAB_020ce740:
      if (param_2 == 0) goto LAB_020cea8c;
LAB_020ce748:
      uVar11 = local_8c8;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_8f8 = 0;
      local_900 = *(undefined1 **)(lVar13 + 0x128);
      local_8f0 = lVar13;
      lStack_8e8 = lVar22;
      FUN_020d8820(param_2,4,&local_900,uVar9);
      if (*(char *)(lVar13 + 0x160) == '\0') goto LAB_020ce740;
LAB_020cea38:
      local_900 = &LAB_020d88c0;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar22;
      FUN_020d8820(param_2,1,&local_900,uVar9);
      local_900 = &LAB_020d88c4;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar22;
      FUN_020d8820(param_2,2,&local_900,uVar9);
      if (param_2 != 0) goto LAB_020ce748;
LAB_020cea8c:
      uVar11 = local_8c8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_8d0,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_020cfdac();
      puVar4 = DAT_043d97c8;
      if ((DAT_043d97b8 & 1) == 0) {
        puVar4 = &DAT_043d97b9;
      }
      FUN_00154450(param_2,puVar4);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_900._0_4_ = 0x1e;
      FUN_008fe304(&local_8d0,param_2,&local_900,&local_8c0,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_330,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
      FUN_008fe304(&local_8d0,param_2,&local_900,&local_8c0,uVar11);
      local_900 = *(undefined1 **)(lVar13 + 0x128);
      if (local_900 != (undefined1 *)0x0) {
        uStack_8f8 = 0;
        local_8f0 = lVar13;
        lStack_8e8 = lVar22;
        FUN_020d8820(param_2,4,&local_900,uVar11);
      }
      local_900 = &LAB_020d8988;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7d320;
      local_8f0 = lVar13;
      lStack_8e8 = lVar22;
      FUN_020d88d0(param_2,1,&local_900,uVar11);
      local_900 = &LAB_020d898c;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7d320;
      local_8f0 = lVar13;
      lStack_8e8 = lVar22;
      FUN_020d88d0(param_2,2,&local_900,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_8b8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


