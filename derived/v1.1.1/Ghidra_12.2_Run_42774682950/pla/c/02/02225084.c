/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02225084; name: FUN_02225084
 */


undefined8 FUN_02225084(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  byte *pbVar17;
  string *psVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  char *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
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
  string asStack_7f0 [624];
  undefined8 auStack_580 [2];
  string local_570;
  undefined1 auStack_56f [7];
  size_t local_568;
  undefined1 *local_560;
  char *apcStack_300 [2];
  char *local_2f0 [2];
  long local_2e0;
  undefined1 auStack_70 [16];
  
  puVar6 = PTR_DAT_04385a00;
  if (((DAT_043dea08 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dea08), iVar10 != 0)) {
    local_2e0 = 0;
    local_2f0[1] = (undefined1 *)0x0;
    local_2f0[0] = (char *)0x2e6c6f7308;
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04385a00);
      puVar3 = PTR_DAT_04385a08;
      if (iVar10 != 0) {
        FUN_021f6aa0(PTR_DAT_04385a08);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385a00);
      }
    }
    pcVar27 = (char *)FUN_02228214(local_2f0,PTR_DAT_04385a08);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043de9f0,psVar18);
    lVar14 = local_2e0;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2f0[0] & 1) != 0) && (local_2e0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
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
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_0222672c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_0222672c:
    FUN_00100250(PTR__string_04379718,&DAT_043de9f0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dea08);
  }
  std::string::string(&local_570,(string *)&DAT_043de9f0);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043de9e8);
  sVar2 = (ulong)((byte)local_570 >> 1);
  if (((byte)local_570 & 1) != 0) {
    sVar2 = local_568;
  }
  std::string::append((ulong)&local_570,(char)iVar10);
  if (((byte)local_570 & 1) == 0) {
    puVar28 = auStack_56f;
    local_568 = (size_t)((byte)local_570 >> 1);
  }
  else {
    puVar28 = local_560;
  }
  snprintf(puVar28 + (sVar2 - 1),local_568,"%d",(ulong)DAT_043de9e8);
  DAT_043de9e8 = DAT_043de9e8 + 1;
  if (((DAT_043dea28 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dea28), iVar10 != 0)) {
    local_2e0 = 0;
    local_2f0[1] = (undefined1 *)0x0;
    local_2f0[0] = (char *)0x2e6c6f7308;
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04385a00);
      puVar3 = PTR_DAT_04385a08;
      if (iVar10 != 0) {
        FUN_021f6aa0(PTR_DAT_04385a08);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385a00);
      }
    }
    pcVar27 = (char *)FUN_02228214(local_2f0,PTR_DAT_04385a08);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043dea10,psVar18);
    lVar14 = local_2e0;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2f0[0] & 1) != 0) && (local_2e0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
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
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_02226878;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_02226878:
    FUN_00100250(PTR__string_04379718,&DAT_043dea10,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dea28);
  }
  puVar3 = DAT_043dea20;
  if ((DAT_043dea10 & 1) == 0) {
    puVar3 = &DAT_043dea11;
  }
  if (((byte)local_570 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_570 | 1);
  }
  else {
    puVar28 = local_560;
  }
  if (((DAT_043dea38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dea38), iVar10 != 0)) {
    DAT_043dea30 = 0x158;
    __cxa_guard_release(&DAT_043dea38);
  }
  if (((DAT_043dea48 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dea48), iVar10 != 0)) {
    DAT_043dea40 = 0x15f;
    __cxa_guard_release(&DAT_043dea48);
  }
  uVar23 = DAT_043dea30;
  lVar14 = FUN_00153520(param_2,DAT_043dea30);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x158)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043dea40;
    lVar14 = FUN_00153520(param_2,DAT_043dea40);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x158)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02229660();
      puVar4 = DAT_043dea60;
      if ((DAT_043dea50 & 1) == 0) {
        puVar4 = &DAT_043dea51;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar14;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar14 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar7 = 0;
      if (uVar25 != 0) {
        uVar7 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar7 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar5;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_0425b7e0;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xf8);
  iVar10 = FUN_00154450(param_2,puVar28);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_02229620,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar11 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar11);
  }
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar14 = FUN_001511d0(param_2,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar8 = DAT_043f1798;
  if ((((byte)local_570 & 1) != 0) && (local_560 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar8;
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
        FUN_02bcc824(plVar26,local_560,0,8);
        goto LAB_022253f8;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_560,0,8);
  }
LAB_022253f8:
  memset(local_2f0,0,0x280);
  pcVar27 = *(char **)(lVar14 + 0x60);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar24 = lVar14 + 8;
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  puVar28 = &LAB_02228584;
  if (uVar12 != 0) {
    puVar28 = &LAB_0222854c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(undefined1 **)(lVar14 + 0x30) = puVar28;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar25 = 0;
            *(undefined1 **)(lVar14 + 0x108) = puVar28;
            goto LAB_0222551c;
          }
          *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
      goto LAB_0222551c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_2f0[0] = pcVar27;
  local_2f0[1] = puVar28;
LAB_0222551c:
  pcVar27 = *(char **)(lVar14 + 0x68);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0222867c;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_022285bc;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 0x13) {
        *(code **)(lVar14 + 0x108) = pcVar1;
        goto LAB_022255fc;
      }
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
      goto LAB_022255fc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2f0[uVar25 * 2] = pcVar27;
  local_2f0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022255fc:
  pcVar27 = *(char **)(lVar14 + 0x78);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_022288cc;
  if (uVar12 != 0) {
    pcVar1 = FUN_0222873c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x108) = pcVar1;
            goto LAB_02225894;
          }
          *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
      goto LAB_02225894;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2f0[uVar25 * 2] = pcVar27;
  local_2f0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02225894:
  pcVar27 = *(char **)(lVar14 + 0x90);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_02228a00;
  if (uVar12 != 0) {
    pcVar1 = FUN_022289b8;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x108) = pcVar1;
            goto LAB_022259d4;
          }
          *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
      goto LAB_022259d4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2f0[uVar25 * 2] = pcVar27;
  local_2f0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022259d4:
  pcVar27 = *(char **)(lVar14 + 0xa8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_02228c1c;
  if (uVar12 != 0) {
    pcVar1 = FUN_02228a48;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x108) = pcVar1;
            goto LAB_02225b14;
          }
          *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
      goto LAB_02225b14;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2f0[uVar25 * 2] = pcVar27;
  local_2f0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02225b14:
  pcVar27 = *(char **)(lVar14 + 0xc0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_02228f00;
  if (uVar12 != 0) {
    pcVar1 = FUN_02228d08;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x108) = pcVar1;
            goto LAB_02225c54;
          }
          *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
      goto LAB_02225c54;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2f0[uVar25 * 2] = pcVar27;
  local_2f0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02225c54:
  pcVar27 = *(char **)(lVar14 + 0xd8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_022290cc;
  if (uVar12 != 0) {
    pcVar1 = FUN_02228fec;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x108) = pcVar1;
            goto LAB_02225d94;
          }
          *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
      goto LAB_02225d94;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2f0[uVar25 * 2] = pcVar27;
  local_2f0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02225d94:
  pcVar27 = *(char **)(lVar14 + 0xf0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0222931c;
  if (uVar12 != 0) {
    pcVar1 = FUN_022291dc;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x108) = pcVar1;
            uVar12 = (uint)*(undefined8 *)(lVar14 + 0x150);
            goto joined_r0x02225e88;
          }
          *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x150) = *(ulong *)(lVar14 + 0x150) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0x150);
      goto joined_r0x02225e88;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_2f0[uVar25 * 2] = pcVar27;
  local_2f0[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0x150);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x02225e88:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x150);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x150);
  }
  uVar23 = uVar25;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    local_2f0[uVar25 * 2] = pcVar27;
    local_2f0[uVar25 * 2 + 1] = PTR_LAB_043859d8;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x150);
  }
  uVar25 = uVar23;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    local_2f0[uVar23 * 2] = pcVar27;
    local_2f0[uVar23 * 2 + 1] = PTR_LAB_043859e0;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar14 + 0x108) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(char **)(lVar14 + 0x108);
    uVar23 = (ulong)((int)uVar25 + 1);
    local_2f0[uVar25 * 2] = pcVar27;
    local_2f0[uVar25 * 2 + 1] = pcVar21;
  }
  local_2f0[uVar23 * 2] = (char *)0x0;
  local_2f0[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_570,local_2f0,0x280);
  memcpy(asStack_7f0,local_2f0,0x280);
  lVar29 = FUN_008cca50();
  lVar16 = uVar23 - 1;
  pcVar27 = local_2f0[lVar16 * 2];
  sVar15 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar10 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar10 == 0)) {
    auStack_580[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_56f + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7f0 + lVar16 * 0x10) = local_2f0[lVar16 * 2];
  *(undefined1 **)(asStack_7f0 + (lVar16 * 2 + 1) * 8) = &LAB_02229410;
  FUN_00151fe0(param_2,0,2);
  local_7f8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_800 = param_2;
  if ((*puVar6 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04385a00);
    puVar6 = PTR_DAT_04385a08;
    if (iVar10 != 0) {
      FUN_021f6aa0(PTR_DAT_04385a08);
      FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04385a00);
    }
  }
  uVar11 = local_7f8[0];
  uVar23 = *(ulong *)(PTR_DAT_04385a08 + 8);
  puVar6 = *(undefined **)(PTR_DAT_04385a08 + 0x10);
  if ((*PTR_DAT_04385a08 & 1) == 0) {
    puVar6 = PTR_DAT_04385a08 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_04385a08 >> 1);
  }
  FUN_001514f0(param_2,puVar6,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_02229460,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_7f0;
      pbVar17 = (byte *)FUN_021f7274();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_570;
      pbVar17 = (byte *)FUN_021f540c();
    }
    else {
      psVar18 = (string *)local_2f0;
      pbVar17 = (byte *)FUN_021f6844();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_808 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    local_810 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_840,&local_800,local_808);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar18,2);
    uVar11 = local_808;
    if (*(long *)(lVar14 + 0x138) == 0) {
      lVar16 = *(long *)(lVar14 + 0x140);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
      lVar16 = *(long *)(lVar14 + 0x140);
      uVar11 = local_808;
    }
    local_808 = uVar11;
    if (lVar16 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_808;
    uVar20 = *(undefined8 *)(lVar14 + 0x118);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_808;
    uVar20 = *(undefined8 *)(lVar14 + 0x120);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_840,&local_810,local_808);
    }
    else {
      local_840 = &LAB_02229550;
      uStack_838 = 0;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_022294b0(param_2,1,&local_840,local_808);
      local_840 = &LAB_02229554;
      uStack_838 = 0;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_022294b0(param_2,2,&local_840,local_808);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_840,&local_800,uVar11);
    if (*(undefined1 **)(lVar14 + 0x110) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0x148) != '\0') goto LAB_02226534;
LAB_0222627c:
      if (param_2 == 0) goto LAB_02226588;
LAB_02226284:
      uVar13 = local_808;
      FUN_00150260(param_2,uVar11);
    }
    else {
      uStack_838 = 0;
      local_840 = *(undefined1 **)(lVar14 + 0x110);
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_022294b0(param_2,4,&local_840,uVar11);
      if (*(char *)(lVar14 + 0x148) == '\0') goto LAB_0222627c;
LAB_02226534:
      local_840 = &LAB_02229550;
      uStack_838 = 0;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_022294b0(param_2,1,&local_840,uVar11);
      local_840 = &LAB_02229554;
      uStack_838 = 0;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_022294b0(param_2,2,&local_840,uVar11);
      if (param_2 != 0) goto LAB_02226284;
LAB_02226588:
      uVar13 = local_808;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_810,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_022279e4();
      puVar6 = DAT_043de9d8;
      if ((DAT_043de9c8 & 1) == 0) {
        puVar6 = &DAT_043de9c9;
      }
      FUN_00154450(param_2,puVar6);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_840._0_4_ = 0x1e;
      FUN_008fe304(&local_810,param_2,&local_840,&local_800,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_2f0,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
      FUN_008fe304(&local_810,param_2,&local_840,&local_800,uVar13);
      local_840 = *(undefined1 **)(lVar14 + 0x110);
      if (local_840 != (undefined1 *)0x0) {
        uStack_838 = 0;
        local_830 = lVar14;
        lStack_828 = lVar24;
        FUN_022294b0(param_2,4,&local_840,uVar13);
      }
      local_840 = &LAB_02229618;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7d3d0;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_02229560(param_2,1,&local_840,uVar13);
      local_840 = &LAB_0222961c;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7d3d0;
      local_830 = lVar14;
      lStack_828 = lVar24;
      FUN_02229560(param_2,2,&local_840,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7f8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


