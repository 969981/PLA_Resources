/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023774d8; name: FUN_023774d8
 */


void FUN_023774d8(long param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  char cVar5;
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
  undefined *puVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  char *pcVar23;
  byte *pbVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  char *pcVar29;
  undefined1 *puVar30;
  undefined8 uVar31;
  undefined1 *local_c00;
  undefined8 uStack_bf8;
  long local_bf0;
  long lStack_be8;
  undefined8 local_be0;
  undefined *puStack_bd8;
  long local_bd0;
  undefined4 local_bc8;
  long local_bc0;
  undefined4 local_bb8 [2];
  string asStack_bb0 [944];
  undefined8 auStack_800 [2];
  string local_7f0;
  undefined1 auStack_7ef [7];
  size_t local_7e8;
  undefined1 *local_7e0;
  char *apcStack_440 [2];
  char *local_430 [2];
  long local_420;
  undefined1 auStack_70 [16];
  
  if (((DAT_043e2800 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2800), iVar9 != 0)) {
    local_420 = 0;
    local_430[1] = (undefined1 *)0x0;
    local_430[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04382ab8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04382ab8);
      puVar18 = PTR_DAT_04382ac0;
      if (iVar9 != 0) {
        FUN_01e19110(PTR_DAT_04382ac0);
        FUN_00100250(PTR__string_04379718,puVar18,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04382ab8);
      }
    }
    pcVar29 = (char *)FUN_02370ba0(local_430,PTR_DAT_04382ac0);
    psVar17 = (string *)std::string::append(pcVar29);
    std::string::string((string *)&DAT_043e27e8,psVar17);
    lVar13 = local_420;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_430[0] & 1) != 0) && (local_420 != 0)) {
      lVar26 = tpidr_el0;
      plVar28 = *(long **)(lVar26 + 0x20);
      if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
        *(long **)(lVar26 + 0x20) = DAT_043f1798;
        plVar28 = plVar7;
      }
      uVar25 = (**(code **)(*plVar28 + 0xc0))(plVar28);
      if ((uVar25 & 1) != 0) {
        if (*(char *)(lVar26 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar26 + 0x38d488) = 1;
          *(undefined8 *)(lVar26 + 0x38d478) = 0;
          *(undefined8 *)(lVar26 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar26 + 0x38d480)) {
          FUN_02bcc824(plVar28,lVar13,0,8);
          goto LAB_0237a3a0;
        }
      }
      (**(code **)(*plVar28 + 0x18))(plVar28,lVar13,0,8);
    }
LAB_0237a3a0:
    FUN_00100250(PTR__string_04379718,&DAT_043e27e8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2800);
  }
  std::string::string(&local_7f0,(string *)&DAT_043e27e8);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e27e0);
  sVar3 = (ulong)((byte)local_7f0 >> 1);
  if (((byte)local_7f0 & 1) != 0) {
    sVar3 = local_7e8;
  }
  std::string::append((ulong)&local_7f0,(char)iVar9);
  if (((byte)local_7f0 & 1) == 0) {
    puVar30 = auStack_7ef;
    local_7e8 = (size_t)((byte)local_7f0 >> 1);
  }
  else {
    puVar30 = local_7e0;
  }
  snprintf(puVar30 + (sVar3 - 1),local_7e8,"%d",(ulong)DAT_043e27e0);
  DAT_043e27e0 = DAT_043e27e0 + 1;
  if (((DAT_043e2820 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2820), iVar9 != 0)) {
    local_420 = 0;
    local_430[1] = (undefined1 *)0x0;
    local_430[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04382ab8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04382ab8);
      puVar18 = PTR_DAT_04382ac0;
      if (iVar9 != 0) {
        FUN_01e19110(PTR_DAT_04382ac0);
        FUN_00100250(PTR__string_04379718,puVar18,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04382ab8);
      }
    }
    pcVar29 = (char *)FUN_02370ba0(local_430,PTR_DAT_04382ac0);
    psVar17 = (string *)std::string::append(pcVar29);
    std::string::string((string *)&DAT_043e2808,psVar17);
    lVar13 = local_420;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_430[0] & 1) != 0) && (local_420 != 0)) {
      lVar26 = tpidr_el0;
      plVar28 = *(long **)(lVar26 + 0x20);
      if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
        *(long **)(lVar26 + 0x20) = DAT_043f1798;
        plVar28 = plVar7;
      }
      uVar25 = (**(code **)(*plVar28 + 0xc0))(plVar28);
      if ((uVar25 & 1) != 0) {
        if (*(char *)(lVar26 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar26 + 0x38d488) = 1;
          *(undefined8 *)(lVar26 + 0x38d478) = 0;
          *(undefined8 *)(lVar26 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar26 + 0x38d480)) {
          FUN_02bcc824(plVar28,lVar13,0,8);
          goto LAB_0237a4f4;
        }
      }
      (**(code **)(*plVar28 + 0x18))(plVar28,lVar13,0,8);
    }
LAB_0237a4f4:
    FUN_00100250(PTR__string_04379718,&DAT_043e2808,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2820);
  }
  if ((DAT_043e2808 & 1) == 0) {
    uVar31 = 0x43e2809;
    if (((byte)local_7f0 & 1) == 0) goto LAB_0237a1ec;
LAB_023775c8:
    puVar30 = local_7e0;
  }
  else {
    uVar31 = DAT_043e2818;
    if (((byte)local_7f0 & 1) != 0) goto LAB_023775c8;
LAB_0237a1ec:
    puVar30 = (undefined1 *)((ulong)&local_7f0 | 1);
  }
  if (((DAT_043e2830 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2830), iVar9 != 0)) {
    DAT_043e2828 = 0x228;
    __cxa_guard_release(&DAT_043e2830);
  }
  if (((DAT_043e2840 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2840), iVar9 != 0)) {
    DAT_043e2838 = 0x22f;
    __cxa_guard_release(&DAT_043e2840);
  }
  uVar25 = DAT_043e2828;
  lVar13 = FUN_00153520(param_1,DAT_043e2828);
  if ((uVar25 < ((ulong)(uint)-(int)lVar13 & 7 | 0x228)) ||
     (puVar21 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar21 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar25 = DAT_043e2838;
    lVar13 = FUN_00153520(param_1,DAT_043e2838);
    if ((uVar25 < ((ulong)(uint)-(int)lVar13 & 7 | 0x228)) ||
       (puVar21 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar21 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0237aed0();
      if ((DAT_043e2848 & 1) == 0) {
        puVar19 = &DAT_043e2849;
      }
      else {
        puVar19 = DAT_043e2858;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar19);
      puVar21 = (undefined8 *)0x0;
    }
  }
  uVar22 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar21[1] = uVar22;
  puVar21[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar21[3] = lVar13;
  lVar26 = *(long *)(param_2 + 0x20);
  puVar21[4] = lVar26;
  *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar26 != 0) {
    uVar27 = puVar21[2];
    uVar25 = *(ulong *)(lVar13 + 8);
    if ((uVar27 & uVar27 - 1) == 0) {
      uVar25 = uVar27 - 1 & uVar25;
    }
    else if (uVar27 <= uVar25) {
      uVar6 = 0;
      if (uVar27 != 0) {
        uVar6 = uVar25 / uVar27;
      }
      uVar25 = uVar25 - uVar6 * uVar27;
    }
    *(undefined8 **)(puVar21[1] + uVar25 * 8) = puVar21 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar22 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar21[10] = 0;
  puVar21[8] = 0;
  puVar21[9] = 0;
  puVar21[6] = uVar22;
  puVar21[7] = uVar4;
  puVar21[8] = *(undefined8 *)(param_2 + 0x40);
  puVar21[9] = *(undefined8 *)(param_2 + 0x48);
  puVar21[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar21 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar21 = &PTR_FUN_0425bd30;
  memcpy(puVar21 + 0xc,(void *)(param_2 + 0x60),0x1c8);
  iVar9 = FUN_00154450(param_1,puVar30);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_0237ae90,0);
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
  FUN_001522a0(param_1,uVar31);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,uVar31);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_7f0 & 1) != 0) && (local_7e0 != (undefined1 *)0x0)) {
    lVar26 = tpidr_el0;
    plVar28 = *(long **)(lVar26 + 0x20);
    if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
      *(long **)(lVar26 + 0x20) = DAT_043f1798;
      plVar28 = plVar7;
    }
    uVar25 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar26 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar26 + 0x38d488) = 1;
        *(undefined8 *)(lVar26 + 0x38d478) = 0;
        *(undefined8 *)(lVar26 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar26 + 0x38d480)) {
        FUN_02bcc824(plVar28,local_7e0,0,8);
        goto LAB_02377840;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,local_7e0,0,8);
  }
LAB_02377840:
  memset(local_430,0,0x3c0);
  pcVar29 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar20 = lVar13 + 8;
  lVar26 = 0;
  uVar25 = 0;
  puVar30 = &LAB_02370ff8;
  if (uVar11 != 0) {
    puVar30 = &LAB_02370ee0;
  }
  puVar1 = (ulong *)(lVar13 + 0x220);
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar30;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar27 = 0;
            *(undefined1 **)(lVar13 + 0x1d8) = puVar30;
            goto LAB_02377a5c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar30;
      }
      uVar27 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02377a5c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  uVar27 = 1;
  local_430[0] = pcVar29;
  local_430[1] = puVar30;
LAB_02377a5c:
  pcVar29 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0237121c;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_02371110;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02377ba0;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02377ba0;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02377ba0:
  pcVar29 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02373bc4;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_02373a1c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02377ce4;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02377ce4;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02377ce4:
  pcVar29 = *(char **)(lVar13 + 0x98);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02373c64;
  if (uVar11 != 0) {
    pcVar2 = FUN_02373c1c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02377e28;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02377e28;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02377e28:
  pcVar29 = *(char **)(lVar13 + 0xb0);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar23 = "\x01";
  if (uVar11 != 0) {
    pcVar23 = "\x01";
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1d8) = pcVar23;
            goto LAB_02377f6c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02377f6c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = pcVar23;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02377f6c:
  pcVar29 = *(char **)(lVar13 + 0xb8);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02374350;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_02374308;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_023780b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_023780b0;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_023780b0:
  pcVar29 = *(char **)(lVar13 + 0xd0);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02374544;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_02374398;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_023781f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_023781f4;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_023781f4:
  pcVar29 = *(char **)(lVar13 + 0xd8);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_023745e4;
  if (uVar11 != 0) {
    pcVar2 = FUN_0237459c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02378338;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02378338;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02378338:
  pcVar29 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02374674;
  if (uVar11 != 0) {
    pcVar2 = FUN_0237462c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_0237847c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_0237847c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0237847c:
  pcVar29 = *(char **)(lVar13 + 0x108);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar23 = "\x01";
  if (uVar11 != 0) {
    pcVar23 = &LAB_023746bc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1d8) = pcVar23;
            goto LAB_023785c0;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_023785c0;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = pcVar23;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_023785c0:
  pcVar29 = *(char **)(lVar13 + 0x110);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02374b48;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_02374b00;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02378704;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02378704;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02378704:
  pcVar29 = *(char **)(lVar13 + 0x128);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar23 = "\x01";
  if (uVar11 != 0) {
    pcVar23 = "\x01";
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1d8) = pcVar23;
            goto LAB_02378848;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02378848;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = pcVar23;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02378848:
  pcVar29 = *(char **)(lVar13 + 0x130);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02374db8;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_02374d70;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_0237898c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_0237898c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0237898c:
  pcVar29 = *(char **)(lVar13 + 0x148);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02374fc4;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_02374e00;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02378ad0;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02378ad0;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02378ad0:
  pcVar29 = *(char **)(lVar13 + 0x150);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_023751fc;
  if (uVar11 != 0) {
    pcVar2 = FUN_0237501c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02378c14;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02378c14;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02378c14:
  pcVar29 = *(char **)(lVar13 + 0x158);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0237542c;
  if (uVar11 != 0) {
    pcVar2 = FUN_02375254;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02378d58;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02378d58;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02378d58:
  pcVar29 = *(char **)(lVar13 + 0x160);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02375990;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_02375484;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02378e9c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02378e9c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02378e9c:
  pcVar29 = *(char **)(lVar13 + 0x168);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar23 = "\x01";
  if (uVar11 != 0) {
    pcVar23 = "\x01";
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1d8) = pcVar23;
            goto LAB_02378fe0;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02378fe0;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = pcVar23;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02378fe0:
  pcVar29 = *(char **)(lVar13 + 0x170);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02375d9c;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_02375bc0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02379124;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02379124;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02379124:
  pcVar29 = *(char **)(lVar13 + 0x178);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar23 = &LAB_02375e2c;
  if (uVar11 != 0) {
    pcVar23 = &LAB_02375df4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1d8) = pcVar23;
            goto LAB_02379268;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02379268;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = pcVar23;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02379268:
  pcVar29 = *(char **)(lVar13 + 400);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar23 = "\x01";
  if (uVar11 != 0) {
    pcVar23 = "\x01";
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1d8) = pcVar23;
            goto LAB_023793ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_023793ac;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = pcVar23;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_023793ac:
  pcVar29 = *(char **)(lVar13 + 0x198);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0237668c;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_023764a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_023794f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_023794f0;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_023794f0:
  pcVar29 = *(char **)(lVar13 + 0x1a0);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar23 = "\x01";
  if (uVar11 != 0) {
    pcVar23 = "\x01";
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1d8) = pcVar23;
            goto LAB_02379634;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02379634;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = pcVar23;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02379634:
  pcVar29 = *(char **)(lVar13 + 0x1a8);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02376a9c;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_023768c0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x1d8) = pcVar2;
            goto LAB_02379778;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_02379778;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_02379778:
  pcVar29 = *(char **)(lVar13 + 0x1b0);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar23 = &LAB_02376b2c;
  if (uVar11 != 0) {
    pcVar23 = &LAB_02376af4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1d8) = pcVar23;
            goto LAB_023798bc;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_023798bc;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = pcVar23;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_023798bc:
  pcVar29 = *(char **)(lVar13 + 0x1c8);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar23 = &LAB_02377298;
  if (uVar11 != 0) {
    pcVar23 = &LAB_02376b74;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar23;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x1d8) = pcVar23;
            goto LAB_023799d0;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar23;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
      goto LAB_023799d0;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_430[uVar27 * 2] = pcVar29;
  local_430[uVar27 * 2 + 1] = pcVar23;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_023799d0:
  pcVar29 = *(char **)(lVar13 + 0x1d0);
  sVar14 = strlen(pcVar29);
  sVar3 = 10;
  if (sVar14 < 0xb) {
    sVar3 = sVar14;
  }
  if (sVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar29,sVar3);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar23 = &LAB_023774a4;
  if (uVar11 != 0) {
    pcVar23 = &LAB_02377470;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar29);
    sVar3 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar3) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
       iVar9 == 0)) break;
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
    if (uVar25 == 0x20) {
LAB_0237a0a8:
      local_430[uVar27 * 2] = pcVar29;
      local_430[uVar27 * 2 + 1] = pcVar23;
      uVar11 = (uint)*puVar1;
      uVar27 = (ulong)((int)uVar27 + 1);
joined_r0x02379ab8:
      if ((uVar11 >> 0x11 & 1) == 0) {
LAB_02379abc:
        FUN_008cca50();
        uVar11 = (uint)*puVar1;
      }
LAB_02379ac4:
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*puVar1;
      }
      uVar25 = uVar27;
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar26 = FUN_008cca50();
        if ((*(byte *)(lVar26 + 0x180) & 1) == 0) {
          pcVar29 = (char *)(lVar26 + 0x181);
        }
        else {
          pcVar29 = *(char **)(lVar26 + 400);
        }
        uVar25 = (ulong)((int)uVar27 + 1);
        local_430[uVar27 * 2] = pcVar29;
        local_430[uVar27 * 2 + 1] = PTR_LAB_04382a90;
        uVar11 = (uint)*puVar1;
      }
      uVar27 = uVar25;
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar26 = FUN_008cca50();
        if ((*(byte *)(lVar26 + 0x288) & 1) == 0) {
          pcVar29 = (char *)(lVar26 + 0x289);
        }
        else {
          pcVar29 = *(char **)(lVar26 + 0x298);
        }
        uVar27 = (ulong)((int)uVar25 + 1);
        local_430[uVar25 * 2] = pcVar29;
        local_430[uVar25 * 2 + 1] = PTR_LAB_04382a98;
      }
      uVar25 = uVar27;
      if (*(long *)(lVar13 + 0x1d8) != 0) {
        lVar26 = FUN_008cca50();
        if ((*(byte *)(lVar26 + 0x1c8) & 1) == 0) {
          pcVar29 = (char *)(lVar26 + 0x1c9);
        }
        else {
          pcVar29 = *(char **)(lVar26 + 0x1d8);
        }
        pcVar23 = *(char **)(lVar13 + 0x1d8);
        uVar25 = (ulong)((int)uVar27 + 1);
        local_430[uVar27 * 2] = pcVar29;
        local_430[uVar27 * 2 + 1] = pcVar23;
      }
      local_430[uVar25 * 2] = (char *)0x0;
      local_430[uVar25 * 2 + 1] = (char *)0x0;
      memcpy(&local_7f0,local_430,0x3c0);
      memcpy(asStack_bb0,local_430,0x3c0);
      lVar26 = FUN_008cca50();
      lVar15 = uVar25 - 1;
      pcVar29 = local_430[lVar15 * 2];
      sVar14 = strlen(pcVar29);
      sVar3 = (ulong)(*(byte *)(lVar26 + 0x1c8) >> 1);
      if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
        sVar3 = *(size_t *)(lVar26 + 0x1d0);
      }
      if ((sVar14 == sVar3) &&
         (iVar9 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar29),
         iVar9 == 0)) {
        auStack_800[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_7ef + lVar15 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_bb0 + lVar15 * 0x10) = local_430[lVar15 * 2];
      *(undefined1 **)(asStack_bb0 + (lVar15 * 2 + 1) * 8) = &LAB_0237a9d0;
      FUN_00151fe0(param_1,0,2);
      local_bb8[0] = FUN_0014feb0(param_1,0xffffffff);
      local_bc0 = param_1;
      if ((*PTR_DAT_04382ab8 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_04382ab8);
        puVar18 = PTR_DAT_04382ac0;
        if (iVar9 != 0) {
          FUN_01e19110(PTR_DAT_04382ac0);
          FUN_00100250(PTR__string_04379718,puVar18,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04382ab8);
        }
      }
      uVar10 = local_bb8[0];
      uVar25 = *(ulong *)(PTR_DAT_04382ac0 + 8);
      puVar18 = *(undefined **)(PTR_DAT_04382ac0 + 0x10);
      if ((*PTR_DAT_04382ac0 & 1) == 0) {
        puVar18 = PTR_DAT_04382ac0 + 1;
        uVar25 = (ulong)((byte)*PTR_DAT_04382ac0 >> 1);
      }
      FUN_001514f0(param_1,puVar18,uVar25);
      FUN_00152550(param_1,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_1,&LAB_02377130,0);
      FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
      lVar26 = 0;
      do {
        if (lVar26 == 1) {
          psVar17 = asStack_bb0;
          pbVar16 = (byte *)FUN_01e194b8();
        }
        else if (lVar26 == 0) {
          psVar17 = &local_7f0;
          pbVar16 = (byte *)FUN_01e17ba8();
        }
        else {
          psVar17 = (string *)local_430;
          pbVar16 = (byte *)FUN_01e18eb4();
        }
        pbVar24 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar24 = pbVar16 + 1;
        }
        FUN_00154450(param_1,pbVar24);
        local_bc8 = FUN_0014feb0(param_1,0xffffffff);
        local_c00 = (undefined1 *)CONCAT44(local_c00._4_4_,0x1e);
        local_bd0 = param_1;
        FUN_008fe304(auStack_70,param_1,&local_c00,&local_bc0,local_bc8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00155a20(param_1,psVar17,2);
        uVar10 = local_bc8;
        if (*(long *)(lVar13 + 0x208) == 0) {
          lVar15 = *(long *)(lVar13 + 0x210);
        }
        else {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar10,"class_check");
          lVar15 = *(long *)(lVar13 + 0x210);
          uVar10 = local_bc8;
        }
        local_bc8 = uVar10;
        if (lVar15 != 0) {
          FUN_00151810(param_1);
          FUN_00152550(param_1,uVar10,"class_cast");
        }
        uVar10 = local_bc8;
        uVar31 = *(undefined8 *)(lVar13 + 0x1e8);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00151810(param_1,lVar20);
        FUN_001516f0(param_1,uVar31,3);
        FUN_00152550(param_1,uVar10,&DAT_03955ac7);
        uVar10 = local_bc8;
        uVar31 = *(undefined8 *)(lVar13 + 0x1f0);
        FUN_00151490(param_1);
        FUN_00151810(param_1,lVar13);
        FUN_00151810(param_1,lVar20);
        FUN_001516f0(param_1,uVar31,3);
        FUN_00152550(param_1,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_c00 = (undefined1 *)CONCAT44(local_c00._4_4_,1);
          FUN_008fe304(auStack_70,param_1,&local_c00,&local_bd0,local_bc8);
        }
        else {
          local_c00 = &LAB_0237aac0;
          uStack_bf8 = 0;
          local_bf0 = lVar13;
          lStack_be8 = lVar20;
          FUN_0237aa20(param_1,1,&local_c00,local_bc8);
          local_c00 = &LAB_0237adcc;
          uStack_bf8 = 0;
          local_bf0 = lVar13;
          lStack_be8 = lVar20;
          FUN_0237aa20(param_1,2,&local_c00,local_bc8);
        }
        FUN_00151fe0(param_1,0,3);
        uVar10 = FUN_0014feb0(param_1,0xffffffff);
        local_c00 = (undefined1 *)CONCAT44(local_c00._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_1,&local_c00,&local_bc0,uVar10);
        if (*(undefined1 **)(lVar13 + 0x1e0) == (undefined1 *)0x0) {
          cVar5 = *(char *)(lVar13 + 0x218);
        }
        else {
          uStack_bf8 = 0;
          local_c00 = *(undefined1 **)(lVar13 + 0x1e0);
          local_bf0 = lVar13;
          lStack_be8 = lVar20;
          FUN_0237aa20(param_1,4,&local_c00,uVar10);
          cVar5 = *(char *)(lVar13 + 0x218);
        }
        if (cVar5 != '\0') {
          local_c00 = &LAB_0237aac0;
          uStack_bf8 = 0;
          local_bf0 = lVar13;
          lStack_be8 = lVar20;
          FUN_0237aa20(param_1,1,&local_c00,uVar10);
          local_c00 = &LAB_0237adcc;
          uStack_bf8 = 0;
          local_bf0 = lVar13;
          lStack_be8 = lVar20;
          FUN_0237aa20(param_1,2,&local_c00,uVar10);
        }
        uVar12 = local_bc8;
        if (param_1 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_1,uVar10);
        }
        FUN_00152ae0(param_1,uVar12);
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_0014ff10(local_bd0,0xfffffffe);
        lVar26 = lVar26 + 1;
      } while (lVar26 != 3);
      FUN_02370358();
      if ((DAT_043e2528 & 1) == 0) {
        puVar18 = &DAT_043e2529;
      }
      else {
        puVar18 = DAT_043e2538;
      }
      FUN_00154450(param_1,puVar18);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_c00._0_4_ = 0x1e;
      FUN_008fe304(&local_bd0,param_1,&local_c00,&local_bc0,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,local_430,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_c00 = (undefined1 *)CONCAT44(local_c00._4_4_,0x1e);
      FUN_008fe304(&local_bd0,param_1,&local_c00,&local_bc0,uVar12);
      local_c00 = *(undefined1 **)(lVar13 + 0x1e0);
      if (local_c00 != (undefined1 *)0x0) {
        uStack_bf8 = 0;
        local_bf0 = lVar13;
        lStack_be8 = lVar20;
        FUN_0237aa20(param_1,4,&local_c00,uVar12);
      }
      local_c00 = &LAB_0237ae88;
      uStack_bf8 = 0;
      local_be0 = 0;
      puStack_bd8 = &DAT_03a7d4e8;
      local_bf0 = lVar13;
      lStack_be8 = lVar20;
      FUN_0237add0(param_1,1,&local_c00,uVar12);
      local_c00 = &LAB_0237ae8c;
      uStack_bf8 = 0;
      local_be0 = 0;
      puStack_bd8 = &DAT_03a7d4e8;
      local_bf0 = lVar13;
      lStack_be8 = lVar20;
      FUN_0237add0(param_1,2,&local_c00,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_bb8[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  iVar9 = (int)uVar25;
  if (iVar9 == 0x13) {
    *(char **)(lVar13 + 0x1d8) = pcVar23;
    uVar11 = (uint)*puVar1;
    goto joined_r0x02379ab8;
  }
  if (iVar9 == 1) {
    *(char **)(lVar13 + 0x30) = pcVar23;
  }
  else {
    if (iVar9 != 2) {
      *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
      goto LAB_0237a0a8;
    }
    *(char **)(lVar13 + 0x38) = pcVar23;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0x220) = *(ulong *)(lVar13 + 0x220) | 1L << (uVar25 & 0x3f);
  uVar11 = (uint)*puVar1;
  if ((uVar11 >> 0x11 & 1) == 0) goto LAB_02379abc;
  goto LAB_02379ac4;
}


