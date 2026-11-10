/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024d8c60; name: FUN_024d8c60
 */


undefined8 FUN_024d8c60(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  string *psVar14;
  undefined *puVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  char *pcVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined1 *local_780;
  undefined8 uStack_778;
  long local_770;
  long lStack_768;
  undefined8 local_760;
  undefined *puStack_758;
  undefined4 local_750 [2];
  long local_748;
  undefined4 local_740;
  long local_738;
  undefined4 local_730 [2];
  string asStack_728 [560];
  undefined8 auStack_4f8 [2];
  string local_4e8;
  undefined1 auStack_4e7 [7];
  size_t local_4e0;
  undefined1 *local_4d8;
  char *apcStack_2b8 [2];
  char *local_2a8;
  code *local_2a0;
  long local_298;
  
  if (((DAT_043e81f8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e81f8), iVar7 != 0)) {
    local_298 = 0;
    local_2a0 = (code *)0x0;
    local_2a8 = (char *)0x2e6c6f7308;
    if (((DAT_043e8030 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e8030), iVar7 != 0)) {
      FUN_024dcab0();
      FUN_00100250(PTR__string_04379718,&DAT_043e8018,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e8030);
    }
    puVar15 = DAT_043e8028;
    if ((DAT_043e8018 & 1) == 0) {
      puVar15 = &DAT_043e8019;
    }
    pcVar24 = (char *)std::string::append((char *)&local_2a8,(ulong)puVar15);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043e81e0,psVar14);
    lVar11 = local_298;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2a8 & 1) != 0) && (local_298 != 0)) {
      lVar21 = tpidr_el0;
      plVar23 = *(long **)(lVar21 + 0x20);
      if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
        *(long **)(lVar21 + 0x20) = DAT_043f1798;
        plVar23 = plVar5;
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
          FUN_02bcc824(plVar23,lVar11,0,8);
          goto LAB_024d9e88;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_024d9e88:
    FUN_00100250(PTR__string_04379718,&DAT_043e81e0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e81f8);
  }
  std::string::string(&local_4e8,(string *)&DAT_043e81e0);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e81d8);
  sVar1 = (ulong)((byte)local_4e8 >> 1);
  if (((byte)local_4e8 & 1) != 0) {
    sVar1 = local_4e0;
  }
  std::string::append((ulong)&local_4e8,(char)iVar7);
  if (((byte)local_4e8 & 1) == 0) {
    puVar25 = auStack_4e7;
    local_4e0 = (size_t)((byte)local_4e8 >> 1);
  }
  else {
    puVar25 = local_4d8;
  }
  snprintf(puVar25 + (sVar1 - 1),local_4e0,"%d",(ulong)DAT_043e81d8);
  DAT_043e81d8 = DAT_043e81d8 + 1;
  if (((DAT_043e8218 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e8218), iVar7 != 0)) {
    local_298 = 0;
    local_2a0 = (code *)0x0;
    local_2a8 = (char *)0x2e6c6f7308;
    if (((DAT_043e8030 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e8030), iVar7 != 0)) {
      FUN_024dcab0();
      FUN_00100250(PTR__string_04379718,&DAT_043e8018,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e8030);
    }
    puVar15 = DAT_043e8028;
    if ((DAT_043e8018 & 1) == 0) {
      puVar15 = &DAT_043e8019;
    }
    pcVar24 = (char *)std::string::append((char *)&local_2a8,(ulong)puVar15);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043e8200,psVar14);
    lVar11 = local_298;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2a8 & 1) != 0) && (local_298 != 0)) {
      lVar21 = tpidr_el0;
      plVar23 = *(long **)(lVar21 + 0x20);
      if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
        *(long **)(lVar21 + 0x20) = DAT_043f1798;
        plVar23 = plVar5;
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
          FUN_02bcc824(plVar23,lVar11,0,8);
          goto LAB_024d9ff8;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_024d9ff8:
    FUN_00100250(PTR__string_04379718,&DAT_043e8200,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8218);
  }
  puVar15 = DAT_043e8210;
  if ((DAT_043e8200 & 1) == 0) {
    puVar15 = &DAT_043e8201;
  }
  if (((byte)local_4e8 & 1) == 0) {
    puVar25 = (undefined1 *)((ulong)&local_4e8 | 1);
  }
  else {
    puVar25 = local_4d8;
  }
  if (((DAT_043e8228 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e8228), iVar7 != 0)) {
    DAT_043e8220 = 0xe8;
    __cxa_guard_release(&DAT_043e8228);
  }
  if (((DAT_043e8238 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e8238), iVar7 != 0)) {
    DAT_043e8230 = 0xef;
    __cxa_guard_release(&DAT_043e8238);
  }
  uVar20 = DAT_043e8220;
  lVar11 = FUN_00153520(param_2,DAT_043e8220);
  if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0xe8)) ||
     (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar20 = DAT_043e8230;
    lVar11 = FUN_00153520(param_2,DAT_043e8230);
    if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0xe8)) ||
       (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_024e0370();
      puVar2 = DAT_043e8250;
      if ((DAT_043e8240 & 1) == 0) {
        puVar2 = &DAT_043e8241;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar16;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar11;
  lVar21 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar21;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar21 != 0) {
    uVar22 = puVar18[2];
    uVar20 = *(ulong *)(lVar11 + 8);
    if ((uVar22 & uVar22 - 1) == 0) {
      uVar20 = uVar22 - 1 & uVar20;
    }
    else if (uVar22 <= uVar20) {
      uVar4 = 0;
      if (uVar22 != 0) {
        uVar4 = uVar20 / uVar22;
      }
      uVar20 = uVar20 - uVar4 * uVar22;
    }
    *(undefined8 **)(puVar18[1] + uVar20 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar16;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425c2c8;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x88);
  iVar7 = FUN_00154450(param_2,puVar25);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_024e0330,0);
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
  FUN_001522a0(param_2,puVar15);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar15);
  lVar11 = FUN_001511d0(param_2,0xffffffff);
  lVar11 = lVar11 + ((ulong)(uint)-(int)lVar11 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar5 = DAT_043f1798;
  if ((((byte)local_4e8 & 1) != 0) && (local_4d8 != (undefined1 *)0x0)) {
    lVar21 = tpidr_el0;
    plVar23 = *(long **)(lVar21 + 0x20);
    if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
      *(long **)(lVar21 + 0x20) = DAT_043f1798;
      plVar23 = plVar5;
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
        FUN_02bcc824(plVar23,local_4d8,0,8);
        goto LAB_024d8fcc;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_4d8,0,8);
  }
LAB_024d8fcc:
  memset(&local_2a8,0,0x240);
  pcVar24 = *(char **)(lVar11 + 0x60);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
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
  lVar21 = lVar11 + 8;
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_024de0bc;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_024dd2b0;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            uVar22 = 0;
            *(code **)(lVar11 + 0x98) = pcVar17;
            goto LAB_024d91c8;
          }
          *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
      goto LAB_024d91c8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  uVar22 = 1;
  local_2a8 = pcVar24;
  local_2a0 = pcVar17;
LAB_024d91c8:
  pcVar24 = *(char **)(lVar11 + 0x78);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
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
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_024df874;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_024de1fc;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x98) = pcVar17;
            goto LAB_024d9308;
          }
          *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
      goto LAB_024d9308;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2a8)[uVar22 * 2] = pcVar24;
  (&local_2a0)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_024d9308:
  pcVar24 = *(char **)(lVar11 + 0x88);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
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
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = (code *)&LAB_024e0064;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_024df914;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x98) = pcVar17;
            goto LAB_024d9418;
          }
          *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
      goto LAB_024d9418;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2a8)[uVar22 * 2] = pcVar24;
  (&local_2a0)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_024d9418:
  pcVar24 = *(char **)(lVar11 + 0x90);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
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
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_024e026c;
  if (uVar9 != 0) {
    pcVar17 = FUN_024e020c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 0x13) {
        *(code **)(lVar11 + 0x98) = pcVar17;
        uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
        goto joined_r0x024d94fc;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
      goto joined_r0x024d94fc;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2a8)[uVar22 * 2] = pcVar24;
  (&local_2a0)[uVar22 * 2] = pcVar17;
  uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
  uVar22 = (ulong)((int)uVar22 + 1);
joined_r0x024d94fc:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
  }
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x181);
    if ((*(byte *)(lVar26 + 0x180) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 400);
    }
    (&local_2a8)[uVar22 * 2] = pcVar24;
    (&local_2a0)[uVar22 * 2] = (code *)&LAB_024de5f0;
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
    uVar22 = (ulong)((int)uVar22 + 1);
  }
  uVar20 = uVar22;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar26 = FUN_008cca50();
    uVar20 = (ulong)((int)uVar22 + 1);
    pcVar24 = (char *)(lVar26 + 0x289);
    if ((*(byte *)(lVar26 + 0x288) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x298);
    }
    (&local_2a8)[uVar22 * 2] = pcVar24;
    (&local_2a0)[uVar22 * 2] = (code *)&LAB_024de5e8;
  }
  uVar22 = uVar20;
  if (*(long *)(lVar11 + 0x98) != 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x1c9);
    if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x1d8);
    }
    pcVar17 = *(code **)(lVar11 + 0x98);
    uVar22 = (ulong)((int)uVar20 + 1);
    (&local_2a8)[uVar20 * 2] = pcVar24;
    (&local_2a0)[uVar20 * 2] = pcVar17;
  }
  (&local_2a8)[uVar22 * 2] = (char *)0x0;
  (&local_2a0)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_4e8,&local_2a8,0x240);
  memcpy(asStack_728,&local_2a8,0x240);
  lVar26 = FUN_008cca50();
  lVar13 = uVar22 - 1;
  pcVar24 = (&local_2a8)[lVar13 * 2];
  sVar12 = strlen(pcVar24);
  sVar1 = (ulong)(*(byte *)(lVar26 + 0x1c8) >> 1);
  if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar26 + 0x1d0);
  }
  if ((sVar12 == sVar1) &&
     (iVar7 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
     iVar7 == 0)) {
    auStack_4f8[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4e7 + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_728 + lVar13 * 0x10) = (&local_2a8)[lVar13 * 2];
  *(undefined1 **)(asStack_728 + (lVar13 * 2 + 1) * 8) = &LAB_024e02d0;
  FUN_00151fe0(param_2,0,2);
  local_730[0] = FUN_0014feb0(param_2,0xffffffff);
  local_738 = param_2;
  if (((DAT_043e8030 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e8030), iVar7 != 0)) {
    FUN_024dcab0();
    FUN_00100250(PTR__string_04379718,&DAT_043e8018,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8030);
  }
  uVar8 = local_730[0];
  if ((DAT_043e8018 & 1) == 0) {
    uVar20 = (ulong)(DAT_043e8018 >> 1);
    puVar15 = &DAT_043e8019;
  }
  else {
    uVar20 = DAT_043e8020;
    puVar15 = DAT_043e8028;
  }
  FUN_001514f0(param_2,puVar15,uVar20);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_024dfef0,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar26 = 0;
  do {
    if (lVar26 == 1) {
      psVar14 = asStack_728;
      FUN_024db2e0();
      pbVar19 = &DAT_043e7f80;
      puVar15 = &DAT_043e7f81;
      puVar18 = &DAT_043e7f90;
    }
    else if (lVar26 == 0) {
      psVar14 = &local_4e8;
      FUN_024db0ec();
      puVar15 = &DAT_043e7f09;
      puVar18 = &DAT_043e7f18;
      pbVar19 = &DAT_043e7f08;
    }
    else {
      psVar14 = (string *)&local_2a8;
      FUN_024db4d4();
      puVar15 = &DAT_043e7ff9;
      puVar18 = &DAT_043e8008;
      pbVar19 = &DAT_043e7ff8;
    }
    if ((*pbVar19 & 1) != 0) {
      puVar15 = (undefined *)*puVar18;
    }
    FUN_00154450(param_2,puVar15);
    local_740 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    local_748 = param_2;
    FUN_008fe304(local_750,param_2,&local_780,&local_738,local_740);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar14,2);
    uVar8 = local_740;
    if (*(long *)(lVar11 + 200) == 0) {
      lVar13 = *(long *)(lVar11 + 0xd0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
      lVar13 = *(long *)(lVar11 + 0xd0);
      uVar8 = local_740;
    }
    local_740 = uVar8;
    if (lVar13 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_740;
    uVar16 = *(undefined8 *)(lVar11 + 0xa8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_740;
    uVar16 = *(undefined8 *)(lVar11 + 0xb0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
      FUN_008fe304(local_750,param_2,&local_780,&local_748,local_740);
    }
    else {
      local_750[0] = 1;
      local_780 = &LAB_024e0320;
      uStack_778 = 0;
      local_770 = lVar11;
      lStack_768 = lVar21;
      FUN_024e0b9c(param_2,local_750,&local_780,local_740);
      local_750[0] = 2;
      local_780 = &LAB_024e0324;
      uStack_778 = 0;
      local_770 = lVar11;
      lStack_768 = lVar21;
      FUN_024e0b9c(param_2,local_750,&local_780,local_740);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    FUN_008fe304(local_750,param_2,&local_780,&local_738,uVar8);
    if (*(undefined1 **)(lVar11 + 0xa0) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0xd8) == '\0') goto LAB_024d98cc;
LAB_024d9be0:
      local_750[0] = 1;
      local_780 = &LAB_024e0320;
      uStack_778 = 0;
      local_770 = lVar11;
      lStack_768 = lVar21;
      FUN_024e0b9c(param_2,local_750,&local_780,uVar8);
      local_750[0] = 2;
      local_780 = &LAB_024e0324;
      uStack_778 = 0;
      local_770 = lVar11;
      lStack_768 = lVar21;
      FUN_024e0b9c(param_2,local_750,&local_780,uVar8);
      if (param_2 == 0) goto LAB_024d9c40;
LAB_024d98d4:
      uVar10 = local_740;
      FUN_00150260(param_2,uVar8);
    }
    else {
      local_750[0] = 4;
      uStack_778 = 0;
      local_780 = *(undefined1 **)(lVar11 + 0xa0);
      local_770 = lVar11;
      lStack_768 = lVar21;
      FUN_024e0b9c(param_2,local_750,&local_780,uVar8);
      if (*(char *)(lVar11 + 0xd8) != '\0') goto LAB_024d9be0;
LAB_024d98cc:
      if (param_2 != 0) goto LAB_024d98d4;
LAB_024d9c40:
      uVar10 = local_740;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_748,0xfffffffe);
    lVar26 = lVar26 + 1;
    if (lVar26 == 3) {
      FUN_024db714();
      puVar15 = DAT_043e8080;
      if ((DAT_043e8070 & 1) == 0) {
        puVar15 = &DAT_043e8071;
      }
      FUN_00154450(param_2,puVar15);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar11);
      FUN_00155a20(param_2,&local_2a8,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar10);
      local_780 = *(undefined1 **)(lVar11 + 0xa0);
      if (local_780 != (undefined1 *)0x0) {
        local_748 = CONCAT44(local_748._4_4_,4);
        uStack_778 = 0;
        local_770 = lVar11;
        lStack_768 = lVar21;
        FUN_024e0b9c(param_2,&local_748,&local_780,uVar10);
      }
      local_748._0_4_ = 1;
      local_780 = &LAB_024e0328;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7d5b0;
      local_770 = lVar11;
      lStack_768 = lVar21;
      FUN_024e1250(param_2,&local_748,&local_780,uVar10);
      local_748 = CONCAT44(local_748._4_4_,2);
      local_780 = &LAB_024e032c;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7d5b0;
      local_770 = lVar11;
      lStack_768 = lVar21;
      FUN_024e1250(param_2,&local_748,&local_780,uVar10);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar10);
      }
      FUN_00152ae0(param_2,uVar8);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_730[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


