/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02091994; name: FUN_02091994
 */


void FUN_02091994(long param_1,long param_2)

{
  ulong *puVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  byte *pbVar18;
  string *psVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  code *pcVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  undefined1 *puVar29;
  long lVar30;
  undefined1 *local_1080;
  undefined8 uStack_1078;
  long local_1070;
  long lStack_1068;
  undefined8 local_1060;
  undefined *puStack_1058;
  long local_1050;
  undefined4 local_1048;
  long local_1040;
  undefined4 local_1038 [2];
  string asStack_1030 [1328];
  undefined8 auStack_b00 [2];
  string local_af0;
  undefined1 auStack_aef [7];
  size_t local_ae8;
  undefined1 *local_ae0;
  char *apcStack_5c0 [2];
  char *local_5b0;
  code *local_5a8;
  long local_5a0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043d8f78 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d8f78), iVar10 != 0)) {
    local_5a0 = 0;
    local_5a8 = (code *)0x0;
    local_5b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043811d0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_043811d0);
      puVar3 = PTR_DAT_043811d8;
      if (iVar10 != 0) {
        FUN_017a5dd0(PTR_DAT_043811d8);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043811d0);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_043811d8 + 0x10);
    if ((*PTR_DAT_043811d8 & 1) == 0) {
      puVar3 = PTR_DAT_043811d8 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)&local_5b0,(ulong)puVar3);
    psVar19 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043d8f60,psVar19);
    lVar15 = local_5a0;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_5b0 & 1) != 0) && (local_5a0 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar8;
      }
      uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar15,0,8);
          goto LAB_020968ec;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar15,0,8);
    }
LAB_020968ec:
    FUN_00100250(PTR__string_04379718,&DAT_043d8f60,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d8f78);
  }
  std::string::string(&local_af0,(string *)&DAT_043d8f60);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d8f58);
  sVar2 = (ulong)((byte)local_af0 >> 1);
  if (((byte)local_af0 & 1) != 0) {
    sVar2 = local_ae8;
  }
  std::string::append((ulong)&local_af0,(char)iVar10);
  if (((byte)local_af0 & 1) == 0) {
    puVar29 = auStack_aef;
    local_ae8 = (size_t)((byte)local_af0 >> 1);
  }
  else {
    puVar29 = local_ae0;
  }
  snprintf(puVar29 + (sVar2 - 1),local_ae8,"%d",(ulong)DAT_043d8f58);
  DAT_043d8f58 = DAT_043d8f58 + 1;
  if (((DAT_043d8f98 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d8f98), iVar10 != 0)) {
    local_5a0 = 0;
    local_5a8 = (code *)0x0;
    local_5b0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043811d0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_043811d0);
      puVar3 = PTR_DAT_043811d8;
      if (iVar10 != 0) {
        FUN_017a5dd0(PTR_DAT_043811d8);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043811d0);
      }
    }
    puVar3 = *(undefined **)(PTR_DAT_043811d8 + 0x10);
    if ((*PTR_DAT_043811d8 & 1) == 0) {
      puVar3 = PTR_DAT_043811d8 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)&local_5b0,(ulong)puVar3);
    psVar19 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043d8f80,psVar19);
    lVar15 = local_5a0;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_5b0 & 1) != 0) && (local_5a0 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar8;
      }
      uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar15,0,8);
          goto LAB_02096a5c;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar15,0,8);
    }
LAB_02096a5c:
    FUN_00100250(PTR__string_04379718,&DAT_043d8f80,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d8f98);
  }
  puVar3 = DAT_043d8f90;
  if ((DAT_043d8f80 & 1) == 0) {
    puVar3 = &DAT_043d8f81;
  }
  if (((byte)local_af0 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_af0 | 1);
  }
  else {
    puVar29 = local_ae0;
  }
  if (((DAT_043d8fa8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d8fa8), iVar10 != 0)) {
    DAT_043d8fa0 = 0x528;
    __cxa_guard_release(&DAT_043d8fa8);
  }
  if (((DAT_043d8fb8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d8fb8), iVar10 != 0)) {
    DAT_043d8fb0 = 0x52f;
    __cxa_guard_release(&DAT_043d8fb8);
  }
  uVar24 = DAT_043d8fa0;
  lVar15 = FUN_00153520(param_1,DAT_043d8fa0);
  if ((uVar24 < ((ulong)(uint)-(int)lVar15 & 7 | 0x528)) ||
     (puVar20 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar24 = DAT_043d8fb0;
    lVar15 = FUN_00153520(param_1,DAT_043d8fb0);
    if ((uVar24 < ((ulong)(uint)-(int)lVar15 & 7 | 0x528)) ||
       (puVar20 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_020976c0();
      puVar4 = DAT_043d8fd0;
      if ((DAT_043d8fc0 & 1) == 0) {
        puVar4 = &DAT_043d8fc1;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar4);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar21 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar20[1] = uVar21;
  puVar20[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar15 = *(long *)(param_2 + 0x18);
  puVar20[3] = lVar15;
  lVar25 = *(long *)(param_2 + 0x20);
  puVar20[4] = lVar25;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar20[2];
    uVar24 = *(ulong *)(lVar15 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar24 = uVar26 - 1 & uVar24;
    }
    else if (uVar26 <= uVar24) {
      uVar6 = 0;
      if (uVar26 != 0) {
        uVar6 = uVar24 / uVar26;
      }
      uVar24 = uVar24 - uVar6 * uVar26;
    }
    *(undefined8 **)(puVar20[1] + uVar24 * 8) = puVar20 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar21 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar21;
  puVar20[7] = uVar5;
  puVar20[8] = *(undefined8 *)(param_2 + 0x40);
  puVar20[9] = *(undefined8 *)(param_2 + 0x48);
  puVar20[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar20 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar20 = &PTR_LAB_0425b380;
  memcpy(puVar20 + 0xc,(void *)(param_2 + 0x60),0x4c8);
  iVar10 = FUN_00154450(param_1,puVar29);
  if (iVar10 != 0) {
    FUN_001516f0(param_1,&LAB_02097680,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar11 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar11);
  }
  FUN_001522a0(param_1,puVar3);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar3);
  lVar15 = FUN_001511d0(param_1,0xffffffff);
  lVar15 = lVar15 + ((ulong)(uint)-(int)lVar15 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar8 = DAT_043f1798;
  if ((((byte)local_af0 & 1) != 0) && (local_ae0 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar27 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar27 = plVar8;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar25 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar25 + 0x38d488) = 1;
        *(undefined8 *)(lVar25 + 0x38d478) = 0;
        *(undefined8 *)(lVar25 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar25 + 0x38d480)) {
        FUN_02bcc824(plVar27,local_ae0,0,8);
        goto LAB_02091d04;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,local_ae0,0,8);
  }
LAB_02091d04:
  memset(&local_5b0,0,0x540);
  puVar7 = PTR_DAT_043845e0;
  puVar3 = PTR_DAT_04380660;
  *(undefined1 *)(lVar15 + 0x58) = 1;
  *puVar7 = 1;
  *puVar3 = 1;
  pcVar28 = *(char **)(lVar15 + 0x60);
  *(undefined1 **)(lVar15 + 0x508) = &LAB_02097af4;
  *(undefined1 **)(lVar15 + 0x510) = &LAB_02097bb0;
  *(undefined1 **)(lVar15 + 0x4f8) = &LAB_02097c00;
  *(undefined1 **)(lVar15 + 0x500) = &LAB_02097c40;
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar25 = lVar15 + 8;
  pcVar22 = FUN_0208ac38;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208aa30;
  }
  lVar30 = 0;
  uVar24 = 0;
  puVar1 = (ulong *)(lVar15 + 0x520);
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar26 = 0;
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02091e3c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02091e3c;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  uVar26 = 1;
  local_5b0 = pcVar28;
  local_5a8 = pcVar22;
LAB_02091e3c:
  pcVar28 = *(char **)(lVar15 + 0x78);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_0208ae1c;
  if (uVar12 != 0) {
    pcVar22 = (code *)&LAB_0208ad30;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02091f00;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02091f00;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02091f00:
  pcVar28 = *(char **)(lVar15 + 0x90);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208b090;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208af38;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02091fc4;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02091fc4;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02091fc4:
  pcVar28 = *(char **)(lVar15 + 0xa8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208b284;
  if (uVar12 != 0) {
    pcVar22 = (code *)&LAB_0208b188;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092088;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092088;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092088:
  pcVar28 = *(char **)(lVar15 + 0xc0);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208b400;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208b3b8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_0209214c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_0209214c;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_0209214c:
  pcVar28 = *(char **)(lVar15 + 0xd8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208b60c;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208b448;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092210;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092210;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092210:
  pcVar28 = *(char **)(lVar15 + 0xe0);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208b780;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208b664;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020922d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020922d4;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_020922d4:
  pcVar28 = *(char **)(lVar15 + 0xf8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208ba6c;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208b89c;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092398;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092398;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092398:
  pcVar28 = *(char **)(lVar15 + 0x100);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208bef8;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208bac4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_0209245c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_0209245c;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_0209245c:
  pcVar28 = *(char **)(lVar15 + 0x118);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208c15c;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208bff0;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092520;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092520;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092520:
  pcVar28 = *(char **)(lVar15 + 0x130);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208c29c;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208c254;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020925e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020925e4;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_020925e4:
  pcVar28 = *(char **)(lVar15 + 0x148);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208c32c;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208c2e4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020926a8;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020926a8;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_020926a8:
  pcVar28 = *(char **)(lVar15 + 0x160);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208c3bc;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208c374;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_0209276c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_0209276c;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_0209276c:
  pcVar28 = *(char **)(lVar15 + 0x178);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208c44c;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208c404;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092830;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092830;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092830:
  pcVar28 = *(char **)(lVar15 + 400);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208c4dc;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208c494;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020928f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020928f4;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_020928f4:
  pcVar28 = *(char **)(lVar15 + 0x1a8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208c56c;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208c524;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020929b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020929b8;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_020929b8:
  pcVar28 = *(char **)(lVar15 + 0x1c0);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208c5fc;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208c5b4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092a7c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092a7c;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092a7c:
  pcVar28 = *(char **)(lVar15 + 0x1d8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_0208c67c;
  if (uVar12 != 0) {
    pcVar22 = (code *)&LAB_0208c644;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092b40;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092b40;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092b40:
  pcVar28 = *(char **)(lVar15 + 0x1f0);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f00c;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208c6c4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092c04;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092c04;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092c04:
  pcVar28 = *(char **)(lVar15 + 0x1f8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f3c0;
  if (uVar12 != 0) {
    pcVar22 = (code *)&LAB_0208f064;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092cc8;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092cc8;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092cc8:
  pcVar28 = *(char **)(lVar15 + 0x200);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f460;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208f418;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092d8c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092d8c;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092d8c:
  pcVar28 = *(char **)(lVar15 + 0x218);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f4f0;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208f4a8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092e50;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092e50;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092e50:
  pcVar28 = *(char **)(lVar15 + 0x230);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_0208f570;
  if (uVar12 != 0) {
    pcVar22 = (code *)&LAB_0208f538;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092f14;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092f14;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092f14:
  pcVar28 = *(char **)(lVar15 + 0x248);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f600;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208f5b8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02092fd8;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02092fd8;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02092fd8:
  pcVar28 = *(char **)(lVar15 + 0x260);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f690;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208f648;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_0209309c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_0209309c;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_0209309c:
  pcVar28 = *(char **)(lVar15 + 0x278);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f720;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208f6d8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093160;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093160;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02093160:
  pcVar28 = *(char **)(lVar15 + 0x290);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f7b0;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208f768;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093224;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093224;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02093224:
  pcVar28 = *(char **)(lVar15 + 0x2a8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f840;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208f7f8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020932e8;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020932e8;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_020932e8:
  pcVar28 = *(char **)(lVar15 + 0x2c0);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f8d0;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208f888;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020933ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020933ac;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_020933ac:
  pcVar28 = *(char **)(lVar15 + 0x2d8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f960;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208f918;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093470;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093470;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02093470:
  pcVar28 = *(char **)(lVar15 + 0x2f0);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208f9f0;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208f9a8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093534;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093534;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_02093534:
  iVar10 = (int)uVar26;
  pcVar28 = *(char **)(lVar15 + 0x308);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208fa80;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208fa38;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020935f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020935f8;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  iVar10 = iVar10 + 1;
  (&local_5b0)[uVar26 * 2] = pcVar28;
  (&local_5a8)[uVar26 * 2] = pcVar22;
LAB_020935f8:
  pcVar28 = *(char **)(lVar15 + 800);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_0208fb00;
  if (uVar12 != 0) {
    pcVar22 = (code *)&LAB_0208fac8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020936bc;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020936bc;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_020936bc:
  pcVar28 = *(char **)(lVar15 + 0x338);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208fb90;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208fb48;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093780;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093780;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093780:
  pcVar28 = *(char **)(lVar15 + 0x350);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208fc20;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208fbd8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093844;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093844;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093844:
  pcVar28 = *(char **)(lVar15 + 0x368);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0208fdac;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208fc68;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093908;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093908;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093908:
  pcVar28 = *(char **)(lVar15 + 0x380);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_020901f4;
  if (uVar12 != 0) {
    pcVar22 = FUN_0208fea4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020939cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020939cc;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_020939cc:
  pcVar28 = *(char **)(lVar15 + 0x398);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_02090460;
  if (uVar12 != 0) {
    pcVar22 = FUN_020902ec;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093a90;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093a90;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093a90:
  pcVar28 = *(char **)(lVar15 + 0x3b0);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_020905a0;
  if (uVar12 != 0) {
    pcVar22 = FUN_02090558;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093b54;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093b54;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093b54:
  pcVar28 = *(char **)(lVar15 + 0x3c8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0209072c;
  if (uVar12 != 0) {
    pcVar22 = FUN_020905e8;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093c18;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093c18;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093c18:
  pcVar28 = *(char **)(lVar15 + 0x3e0);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0209086c;
  if (uVar12 != 0) {
    pcVar22 = FUN_02090824;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093cdc;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093cdc;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093cdc:
  pcVar28 = *(char **)(lVar15 + 0x3f8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_02090c6c;
  if (uVar12 != 0) {
    pcVar22 = FUN_020908b4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093da0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093da0;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093da0:
  pcVar28 = *(char **)(lVar15 + 0x410);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_02090ebc;
  if (uVar12 != 0) {
    pcVar22 = FUN_02090d64;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093e64;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093e64;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093e64:
  pcVar28 = *(char **)(lVar15 + 0x428);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0209111c;
  if (uVar12 != 0) {
    pcVar22 = FUN_02090fb4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093f28;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093f28;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093f28:
  pcVar28 = *(char **)(lVar15 + 0x440);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0209135c;
  if (uVar12 != 0) {
    pcVar22 = FUN_02091214;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02093fec;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02093fec;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02093fec:
  pcVar28 = *(char **)(lVar15 + 0x458);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0209149c;
  if (uVar12 != 0) {
    pcVar22 = FUN_02091454;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020940b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020940b0;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_020940b0:
  pcVar28 = *(char **)(lVar15 + 0x470);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0209163c;
  if (uVar12 != 0) {
    pcVar22 = FUN_020914e4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02094174;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02094174;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02094174:
  pcVar28 = *(char **)(lVar15 + 0x488);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0209177c;
  if (uVar12 != 0) {
    pcVar22 = FUN_02091734;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_02094238;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_02094238;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_02094238:
  pcVar28 = *(char **)(lVar15 + 0x4a0);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = (code *)&LAB_020917fc;
  if (uVar12 != 0) {
    pcVar22 = (code *)&LAB_020917c4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020942fc;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020942fc;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_020942fc:
  pcVar28 = *(char **)(lVar15 + 0x4b8);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_0209188c;
  if (uVar12 != 0) {
    pcVar22 = FUN_02091844;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 == 0x13) {
            *(code **)(lVar15 + 0x4d8) = pcVar22;
            goto LAB_020943c0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      goto LAB_020943c0;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
LAB_020943c0:
  pcVar28 = *(char **)(lVar15 + 0x4d0);
  sVar16 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar16 < 0xb) {
    sVar2 = sVar16;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar24 = 0;
  pcVar22 = FUN_02091934;
  if (uVar12 != 0) {
    pcVar22 = FUN_020918d4;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar18 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar18 >> 1);
    if ((*pbVar18 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar18 + 8);
    }
    if ((sVar16 == sVar2) &&
       (iVar13 = std::string::compare((ulong)pbVar18,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar13 == 0)) {
      iVar13 = (int)uVar24;
      if (iVar13 == 0x13) {
        *(code **)(lVar15 + 0x4d8) = pcVar22;
        uVar12 = (uint)*puVar1;
        goto joined_r0x02095918;
      }
      if (iVar13 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar13 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 0x520) = *(ulong *)(lVar15 + 0x520) | 1L << (uVar24 & 0x3f);
      uVar12 = (uint)*puVar1;
      goto joined_r0x02095918;
    }
    uVar24 = uVar24 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar24 != 0x20);
  lVar30 = (long)iVar10;
  iVar10 = iVar10 + 1;
  (&local_5b0)[lVar30 * 2] = pcVar28;
  (&local_5a8)[lVar30 * 2] = pcVar22;
  uVar12 = (uint)*puVar1;
joined_r0x02095918:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*puVar1;
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*puVar1;
  }
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x181);
    if ((*(byte *)(lVar30 + 0x180) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 400);
    }
    lVar30 = (long)iVar10;
    iVar10 = iVar10 + 1;
    (&local_5b0)[lVar30 * 2] = pcVar28;
    (&local_5a8)[lVar30 * 2] = (code *)PTR_LAB_04381248;
    uVar12 = (uint)*puVar1;
  }
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x289);
    if ((*(byte *)(lVar30 + 0x288) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0x298);
    }
    lVar30 = (long)iVar10;
    iVar10 = iVar10 + 1;
    (&local_5b0)[lVar30 * 2] = pcVar28;
    (&local_5a8)[lVar30 * 2] = (code *)PTR_LAB_04381250;
  }
  if (*(long *)(lVar15 + 0x4d8) != 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x1c9);
    if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0x1d8);
    }
    pcVar22 = *(code **)(lVar15 + 0x4d8);
    lVar30 = (long)iVar10;
    iVar10 = iVar10 + 1;
    (&local_5b0)[lVar30 * 2] = pcVar28;
    (&local_5a8)[lVar30 * 2] = pcVar22;
  }
  (&local_5b0)[(long)iVar10 * 2] = (char *)0x0;
  (&local_5a8)[(long)iVar10 * 2] = (code *)0x0;
  memcpy(&local_af0,&local_5b0,0x540);
  memcpy(asStack_1030,&local_5b0,0x540);
  lVar30 = FUN_008cca50();
  lVar17 = (long)iVar10 + -1;
  pcVar28 = (&local_5b0)[lVar17 * 2];
  sVar16 = strlen(pcVar28);
  sVar2 = (ulong)(*(byte *)(lVar30 + 0x1c8) >> 1);
  if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar30 + 0x1d0);
  }
  if ((sVar16 == sVar2) &&
     (iVar10 = std::string::compare(lVar30 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
     iVar10 == 0)) {
    auStack_b00[lVar17 * 2 + 2] = 0;
    *(undefined8 *)(auStack_aef + lVar17 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_1030 + lVar17 * 0x10) = (&local_5b0)[lVar17 * 2];
  *(undefined1 **)(asStack_1030 + (lVar17 * 2 + 1) * 8) = &LAB_02097170;
  FUN_00151fe0(param_1,0,2);
  local_1038[0] = FUN_0014feb0(param_1,0xffffffff);
  local_1040 = param_1;
  if ((*PTR_DAT_043811d0 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_043811d0);
    puVar3 = PTR_DAT_043811d8;
    if (iVar10 != 0) {
      FUN_017a5dd0(PTR_DAT_043811d8);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043811d0);
    }
  }
  uVar11 = local_1038[0];
  uVar24 = *(ulong *)(PTR_DAT_043811d8 + 8);
  puVar3 = *(undefined **)(PTR_DAT_043811d8 + 0x10);
  if ((*PTR_DAT_043811d8 & 1) == 0) {
    puVar3 = PTR_DAT_043811d8 + 1;
    uVar24 = (ulong)((byte)*PTR_DAT_043811d8 >> 1);
  }
  FUN_001514f0(param_1,puVar3,uVar24);
  FUN_00152550(param_1,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_020971c0,0);
  FUN_00152550(param_1,uVar11,&DAT_0397bfcb);
  lVar30 = 0;
  do {
    if (lVar30 == 1) {
      psVar19 = asStack_1030;
      pbVar18 = (byte *)FUN_017a7d8c();
    }
    else if (lVar30 == 0) {
      psVar19 = &local_af0;
      pbVar18 = (byte *)FUN_017a6974();
    }
    else {
      psVar19 = (string *)&local_5b0;
      pbVar18 = (byte *)FUN_017a7b3c();
    }
    pbVar23 = *(byte **)(pbVar18 + 0x10);
    if ((*pbVar18 & 1) == 0) {
      pbVar23 = pbVar18 + 1;
    }
    FUN_00154450(param_1,pbVar23);
    local_1048 = FUN_0014feb0(param_1,0xffffffff);
    local_1080 = (undefined1 *)CONCAT44(local_1080._4_4_,0x1e);
    local_1050 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_1080,&local_1040,local_1048);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar15);
    FUN_00155a20(param_1,psVar19,2);
    uVar11 = local_1048;
    if (*(long *)(lVar15 + 0x508) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar11,"class_check");
    }
    uVar11 = local_1048;
    if (*(long *)(lVar15 + 0x510) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar11,"class_cast");
    }
    uVar11 = local_1048;
    uVar21 = *(undefined8 *)(lVar15 + 0x4e8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar15);
    FUN_00151810(param_1,lVar25);
    FUN_001516f0(param_1,uVar21,3);
    FUN_00152550(param_1,uVar11,&DAT_03955ac7);
    uVar11 = local_1048;
    uVar21 = *(undefined8 *)(lVar15 + 0x4f0);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar15);
    FUN_00151810(param_1,lVar25);
    FUN_001516f0(param_1,uVar21,3);
    FUN_00152550(param_1,uVar11,&DAT_0397c077);
    if (*(char *)(lVar15 + 0x58) == '\0') {
      local_1080 = (undefined1 *)CONCAT44(local_1080._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_1080,&local_1050,local_1048);
    }
    else {
      local_1080 = &LAB_020972b0;
      uStack_1078 = 0;
      local_1070 = lVar15;
      lStack_1068 = lVar25;
      FUN_02097210(param_1,1,&local_1080,local_1048);
      local_1080 = &LAB_020975bc;
      uStack_1078 = 0;
      local_1070 = lVar15;
      lStack_1068 = lVar25;
      FUN_02097210(param_1,2,&local_1080,local_1048);
    }
    FUN_00151fe0(param_1,0,3);
    uVar11 = FUN_0014feb0(param_1,0xffffffff);
    local_1080 = (undefined1 *)CONCAT44(local_1080._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_1080,&local_1040,uVar11);
    if (*(undefined1 **)(lVar15 + 0x4e0) == (undefined1 *)0x0) {
      if (*(char *)(lVar15 + 0x518) == '\0') goto LAB_020948c8;
LAB_020957f0:
      local_1080 = &LAB_020972b0;
      uStack_1078 = 0;
      local_1070 = lVar15;
      lStack_1068 = lVar25;
      FUN_02097210(param_1,1,&local_1080,uVar11);
      local_1080 = &LAB_020975bc;
      uStack_1078 = 0;
      local_1070 = lVar15;
      lStack_1068 = lVar25;
      FUN_02097210(param_1,2,&local_1080,uVar11);
      if (param_1 == 0) goto LAB_0209583c;
LAB_020948d0:
      uVar14 = local_1048;
      FUN_00150260(param_1,uVar11);
    }
    else {
      uStack_1078 = 0;
      local_1080 = *(undefined1 **)(lVar15 + 0x4e0);
      local_1070 = lVar15;
      lStack_1068 = lVar25;
      FUN_02097210(param_1,4,&local_1080,uVar11);
      if (*(char *)(lVar15 + 0x518) != '\0') goto LAB_020957f0;
LAB_020948c8:
      if (param_1 != 0) goto LAB_020948d0;
LAB_0209583c:
      uVar14 = local_1048;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar14);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_1050,0xfffffffe);
    lVar30 = lVar30 + 1;
    if (lVar30 == 3) {
      FUN_02089e7c();
      puVar3 = DAT_043d8d30;
      if ((DAT_043d8d20 & 1) == 0) {
        puVar3 = &DAT_043d8d21;
      }
      FUN_00154450(param_1,puVar3);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_1080._0_4_ = 0x1e;
      FUN_008fe304(&local_1050,param_1,&local_1080,&local_1040,uVar11);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar15);
      FUN_00155a20(param_1,&local_5b0,2);
      FUN_00151fe0(param_1,0,3);
      uVar14 = FUN_0014feb0(param_1,0xffffffff);
      local_1080 = (undefined1 *)CONCAT44(local_1080._4_4_,0x1e);
      FUN_008fe304(&local_1050,param_1,&local_1080,&local_1040,uVar14);
      local_1080 = *(undefined1 **)(lVar15 + 0x4e0);
      if (local_1080 != (undefined1 *)0x0) {
        uStack_1078 = 0;
        local_1070 = lVar15;
        lStack_1068 = lVar25;
        FUN_02097210(param_1,4,&local_1080,uVar14);
      }
      local_1080 = &LAB_02097678;
      uStack_1078 = 0;
      local_1060 = 0;
      puStack_1058 = &DAT_03a7d300;
      local_1070 = lVar15;
      lStack_1068 = lVar25;
      FUN_020975c0(param_1,1,&local_1080,uVar14);
      local_1080 = &LAB_0209767c;
      uStack_1078 = 0;
      local_1060 = 0;
      puStack_1058 = &DAT_03a7d300;
      local_1070 = lVar15;
      lStack_1068 = lVar25;
      FUN_020975c0(param_1,2,&local_1080,uVar14);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar14);
      }
      FUN_00152ae0(param_1,uVar11);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_1038[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


