/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016e817c; name: FUN_016e817c
 */


undefined8 FUN_016e817c(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
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
  undefined8 *puVar18;
  undefined8 uVar19;
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_7e0;
  undefined8 uStack_7d8;
  long local_7d0;
  long lStack_7c8;
  undefined8 local_7c0;
  undefined *puStack_7b8;
  undefined4 local_7b0 [2];
  long local_7a8;
  undefined4 local_7a0;
  long local_798;
  undefined4 local_790 [2];
  string asStack_788 [592];
  undefined8 auStack_538 [2];
  string local_528;
  undefined1 auStack_527 [7];
  size_t local_520;
  undefined1 *local_518;
  char *apcStack_2d8 [2];
  char *local_2c8;
  code *local_2c0;
  long local_2b8;
  
  puVar4 = PTR_DAT_0437ff58;
  if (((DAT_043cd260 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043cd260), iVar9 != 0)) {
    local_2b8 = 0;
    local_2c0 = (code *)0x0;
    local_2c8 = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437ff50 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437ff50), puVar2 = PTR_DAT_0437ff58, iVar9 != 0)) {
      FUN_015c54a0(PTR_DAT_0437ff58);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437ff50);
    }
    puVar2 = *(undefined **)(puVar4 + 0x10);
    if ((*puVar4 & 1) == 0) {
      puVar2 = puVar4 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_2c8,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043cd248,psVar17);
    lVar13 = local_2b8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2c8 & 1) != 0) && (local_2b8 != 0)) {
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
          goto LAB_016e95f4;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_016e95f4:
    FUN_00100250(PTR__string_04379718,&DAT_043cd248,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cd260);
  }
  std::string::string(&local_528,(string *)&DAT_043cd248);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043cd240);
  sVar1 = (ulong)((byte)local_528 >> 1);
  if (((byte)local_528 & 1) != 0) {
    sVar1 = local_520;
  }
  std::string::append((ulong)&local_528,(char)iVar9);
  if (((byte)local_528 & 1) == 0) {
    puVar27 = auStack_527;
    local_520 = (size_t)((byte)local_528 >> 1);
  }
  else {
    puVar27 = local_518;
  }
  snprintf(puVar27 + (sVar1 - 1),local_520,"%d",(ulong)DAT_043cd240);
  DAT_043cd240 = DAT_043cd240 + 1;
  if (((DAT_043cd280 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043cd280), iVar9 != 0)) {
    local_2b8 = 0;
    local_2c0 = (code *)0x0;
    local_2c8 = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437ff50 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437ff50), puVar2 = PTR_DAT_0437ff58, iVar9 != 0)) {
      FUN_015c54a0(PTR_DAT_0437ff58);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437ff50);
    }
    puVar2 = *(undefined **)(puVar4 + 0x10);
    if ((*puVar4 & 1) == 0) {
      puVar2 = puVar4 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_2c8,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043cd268,psVar17);
    lVar13 = local_2b8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2c8 & 1) != 0) && (local_2b8 != 0)) {
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
          goto LAB_016e9758;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_016e9758:
    FUN_00100250(PTR__string_04379718,&DAT_043cd268,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cd280);
  }
  puVar2 = DAT_043cd278;
  if ((DAT_043cd268 & 1) == 0) {
    puVar2 = &DAT_043cd269;
  }
  if (((byte)local_528 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_528 | 1);
  }
  else {
    puVar27 = local_518;
  }
  if (((DAT_043cd290 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043cd290), iVar9 != 0)) {
    DAT_043cd288 = 0x120;
    __cxa_guard_release(&DAT_043cd290);
  }
  if (((DAT_043cd2a0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043cd2a0), iVar9 != 0)) {
    DAT_043cd298 = 0x127;
    __cxa_guard_release(&DAT_043cd2a0);
  }
  uVar22 = DAT_043cd288;
  lVar13 = FUN_00153520(param_2,DAT_043cd288);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x120)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043cd298;
    lVar13 = FUN_00153520(param_2,DAT_043cd298);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x120)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_016ec1c0();
      puVar3 = DAT_043cd2b8;
      if ((DAT_043cd2a8 & 1) == 0) {
        puVar3 = &DAT_043cd2a9;
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
      uVar6 = 0;
      if (uVar24 != 0) {
        uVar6 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar6 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar5;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_04224e48;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xc0);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_016ec180,0);
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
  if ((((byte)local_528 & 1) != 0) && (local_518 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_518,0,8);
        goto LAB_016e84f0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_518,0,8);
  }
LAB_016e84f0:
  memset(&local_2c8,0,0x260);
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
  pcVar20 = FUN_016ead60;
  if (uVar11 != 0) {
    pcVar20 = FUN_016eab58;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar13 + 0xd0) = pcVar20;
            goto LAB_016e86f0;
          }
          *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
      goto LAB_016e86f0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2c8 = pcVar26;
  local_2c0 = pcVar20;
LAB_016e86f0:
  pcVar26 = *(char **)(lVar13 + 0x78);
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
  pcVar20 = FUN_016eb428;
  if (uVar11 != 0) {
    pcVar20 = FUN_016eadf0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0xd0) = pcVar20;
            goto LAB_016e8830;
          }
          *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
      goto LAB_016e8830;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2c8)[uVar24 * 2] = pcVar26;
  (&local_2c0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_016e8830:
  pcVar26 = *(char **)(lVar13 + 0x90);
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
  pcVar20 = FUN_016eb59c;
  if (uVar11 != 0) {
    pcVar20 = FUN_016eb4b8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0xd0) = pcVar20;
            goto LAB_016e8970;
          }
          *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
      goto LAB_016e8970;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2c8)[uVar24 * 2] = pcVar26;
  (&local_2c0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_016e8970:
  pcVar26 = *(char **)(lVar13 + 0xa8);
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
  pcVar20 = FUN_016eb6f8;
  if (uVar11 != 0) {
    pcVar20 = FUN_016eb62c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0xd0) = pcVar20;
            goto LAB_016e8ab0;
          }
          *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
      goto LAB_016e8ab0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2c8)[uVar24 * 2] = pcVar26;
  (&local_2c0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_016e8ab0:
  pcVar26 = *(char **)(lVar13 + 0xc0);
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
  pcVar20 = (code *)&LAB_016ebf08;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_016eb7c4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0xd0) = pcVar20;
            goto LAB_016e8bc0;
          }
          *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
      goto LAB_016e8bc0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2c8)[uVar24 * 2] = pcVar26;
  (&local_2c0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_016e8bc0:
  pcVar26 = *(char **)(lVar13 + 200);
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
  pcVar20 = (code *)&LAB_016ec0e0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_016ec0ac;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0xd0) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x118);
        goto joined_r0x016e8ca4;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x118) = *(ulong *)(lVar13 + 0x118) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x118);
      goto joined_r0x016e8ca4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2c8)[uVar24 * 2] = pcVar26;
  (&local_2c0)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x118);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x016e8ca4:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x118);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x118);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2c8)[uVar24 * 2] = pcVar26;
    (&local_2c0)[uVar24 * 2] = (code *)PTR_LAB_0437ff28;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x118);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_2c8)[uVar22 * 2] = pcVar26;
    (&local_2c0)[uVar22 * 2] = (code *)PTR_LAB_0437ff30;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0xd0) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0xd0);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2c8)[uVar24 * 2] = pcVar26;
    (&local_2c0)[uVar24 * 2] = pcVar20;
  }
  (&local_2c8)[uVar22 * 2] = (char *)0x0;
  (&local_2c0)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_528,&local_2c8,0x260);
  memcpy(asStack_788,&local_2c8,0x260);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_2c8)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_538[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_527 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_788 + lVar15 * 0x10) = (&local_2c8)[lVar15 * 2];
  *(undefined1 **)(asStack_788 + (lVar15 * 2 + 1) * 8) = &LAB_016ec120;
  FUN_00151fe0(param_2,0,2);
  local_790[0] = FUN_0014feb0(param_2,0xffffffff);
  local_798 = param_2;
  if (((*PTR_DAT_0437ff50 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_0437ff50), puVar2 = PTR_DAT_0437ff58, iVar9 != 0)) {
    FUN_015c54a0(PTR_DAT_0437ff58);
    FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437ff50);
  }
  uVar10 = local_790[0];
  uVar22 = (ulong)((byte)*puVar4 >> 1);
  puVar2 = *(undefined **)(puVar4 + 0x10);
  if ((*puVar4 & 1) == 0) {
    puVar2 = puVar4 + 1;
  }
  else {
    uVar22 = *(ulong *)(puVar4 + 8);
  }
  FUN_001514f0(param_2,puVar2,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_016ebda0,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_788;
      pbVar16 = (byte *)FUN_015c5c68();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_528;
      pbVar16 = (byte *)FUN_015c3e90();
    }
    else {
      psVar17 = (string *)&local_2c8;
      pbVar16 = (byte *)FUN_015c5244();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_7a0 = FUN_0014feb0(param_2,0xffffffff);
    local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
    local_7a8 = param_2;
    FUN_008fe304(local_7b0,param_2,&local_7e0,&local_798,local_7a0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_7a0;
    if (*(long *)(lVar13 + 0x100) == 0) {
      lVar15 = *(long *)(lVar13 + 0x108);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x108);
      uVar10 = local_7a0;
    }
    local_7a0 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_7a0;
    uVar19 = *(undefined8 *)(lVar13 + 0xe0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_7a0;
    uVar19 = *(undefined8 *)(lVar13 + 0xe8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,1);
      FUN_008fe304(local_7b0,param_2,&local_7e0,&local_7a8,local_7a0);
    }
    else {
      local_7b0[0] = 1;
      local_7e0 = &LAB_016ec170;
      uStack_7d8 = 0;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_016ec5fc(param_2,local_7b0,&local_7e0,local_7a0);
      local_7b0[0] = 2;
      local_7e0 = &LAB_016ec174;
      uStack_7d8 = 0;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_016ec5fc(param_2,local_7b0,&local_7e0,local_7a0);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
    FUN_008fe304(local_7b0,param_2,&local_7e0,&local_798,uVar10);
    if (*(undefined1 **)(lVar13 + 0xd8) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x110) == '\0') goto LAB_016e9038;
LAB_016e9354:
      local_7b0[0] = 1;
      local_7e0 = &LAB_016ec170;
      uStack_7d8 = 0;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_016ec5fc(param_2,local_7b0,&local_7e0,uVar10);
      local_7b0[0] = 2;
      local_7e0 = &LAB_016ec174;
      uStack_7d8 = 0;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_016ec5fc(param_2,local_7b0,&local_7e0,uVar10);
      if (param_2 == 0) goto LAB_016e93b4;
LAB_016e9040:
      uVar12 = local_7a0;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_7d8 = 0;
      local_7b0[0] = 4;
      local_7e0 = *(undefined1 **)(lVar13 + 0xd8);
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_016ec5fc(param_2,local_7b0,&local_7e0,uVar10);
      if (*(char *)(lVar13 + 0x110) != '\0') goto LAB_016e9354;
LAB_016e9038:
      if (param_2 != 0) goto LAB_016e9040;
LAB_016e93b4:
      uVar12 = local_7a0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_7a8,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_016ea894();
      puVar4 = DAT_043cd1f0;
      if ((DAT_043cd1e0 & 1) == 0) {
        puVar4 = &DAT_043cd1e1;
      }
      FUN_00154450(param_2,puVar4);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_7e0._0_4_ = 0x1e;
      FUN_008fe304(&local_7a8,param_2,&local_7e0,&local_798,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_2c8,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
      FUN_008fe304(&local_7a8,param_2,&local_7e0,&local_798,uVar12);
      local_7e0 = *(undefined1 **)(lVar13 + 0xd8);
      if (local_7e0 != (undefined1 *)0x0) {
        uStack_7d8 = 0;
        local_7a8 = CONCAT44(local_7a8._4_4_,4);
        local_7d0 = lVar13;
        lStack_7c8 = lVar23;
        FUN_016ec5fc(param_2,&local_7a8,&local_7e0,uVar12);
      }
      local_7a8._0_4_ = 1;
      local_7e0 = &LAB_016ec178;
      uStack_7d8 = 0;
      local_7c0 = 0;
      puStack_7b8 = &DAT_03a7c518;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_016eccb0(param_2,&local_7a8,&local_7e0,uVar12);
      local_7a8 = CONCAT44(local_7a8._4_4_,2);
      local_7e0 = &LAB_016ec17c;
      uStack_7d8 = 0;
      local_7c0 = 0;
      puStack_7b8 = &DAT_03a7c518;
      local_7d0 = lVar13;
      lStack_7c8 = lVar23;
      FUN_016eccb0(param_2,&local_7a8,&local_7e0,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_790[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


