/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016e1228; name: FUN_016e1228
 */


undefined8 FUN_016e1228(long param_1,long param_2)

{
  size_t sVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char cVar7;
  ulong uVar8;
  long *plVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  string *psVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  undefined1 *puVar29;
  long lVar30;
  undefined1 *local_750;
  undefined8 uStack_748;
  long local_740;
  long lStack_738;
  undefined8 local_730;
  undefined *puStack_728;
  undefined4 local_720 [2];
  long local_718;
  undefined4 local_710;
  long local_708;
  undefined4 local_700 [2];
  string asStack_6f8 [544];
  undefined8 auStack_4d8 [2];
  string local_4c8;
  undefined1 auStack_4c7 [7];
  size_t local_4c0;
  undefined1 *local_4b8;
  char *apcStack_2a8 [2];
  char *local_298;
  code *local_290;
  long local_288;
  
  if (((DAT_043cd0c8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043cd0c8), iVar11 != 0)) {
    local_288 = 0;
    local_290 = (code *)0x0;
    local_298 = (char *)0x2e6c6f7308;
    if (((DAT_043cd030 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043cd030), iVar11 != 0)) {
      FUN_016e4d10();
      FUN_00100250(PTR__string_04379718,&DAT_043cd018,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043cd030);
    }
    puVar29 = DAT_043cd028;
    if ((DAT_043cd018 & 1) == 0) {
      puVar29 = &DAT_043cd019;
    }
    pcVar28 = (char *)std::string::append((char *)&local_298,(ulong)puVar29);
    psVar18 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043cd0b0,psVar18);
    lVar15 = local_288;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar9;
      }
      uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar15,0,8);
          goto LAB_016e2084;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar15,0,8);
    }
LAB_016e2084:
    FUN_00100250(PTR__string_04379718,&DAT_043cd0b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cd0c8);
  }
  std::string::string(&local_4c8,(string *)&DAT_043cd0b0);
  iVar11 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043cd0a8);
  sVar1 = (ulong)((byte)local_4c8 >> 1);
  if (((byte)local_4c8 & 1) != 0) {
    sVar1 = local_4c0;
  }
  std::string::append((ulong)&local_4c8,(char)iVar11);
  if (((byte)local_4c8 & 1) == 0) {
    puVar29 = auStack_4c7;
    local_4c0 = (size_t)((byte)local_4c8 >> 1);
  }
  else {
    puVar29 = local_4b8;
  }
  snprintf(puVar29 + (sVar1 - 1),local_4c0,"%d",(ulong)DAT_043cd0a8);
  DAT_043cd0a8 = DAT_043cd0a8 + 1;
  if (((DAT_043cd0e8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043cd0e8), iVar11 != 0)) {
    local_288 = 0;
    local_290 = (code *)0x0;
    local_298 = (char *)0x2e6c6f7308;
    if (((DAT_043cd030 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043cd030), iVar11 != 0)) {
      FUN_016e4d10();
      FUN_00100250(PTR__string_04379718,&DAT_043cd018,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043cd030);
    }
    puVar29 = DAT_043cd028;
    if ((DAT_043cd018 & 1) == 0) {
      puVar29 = &DAT_043cd019;
    }
    pcVar28 = (char *)std::string::append((char *)&local_298,(ulong)puVar29);
    psVar18 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043cd0d0,psVar18);
    lVar15 = local_288;
    plVar9 = DAT_043f1798;
    if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar9;
      }
      uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar15,0,8);
          goto LAB_016e21e8;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar15,0,8);
    }
LAB_016e21e8:
    FUN_00100250(PTR__string_04379718,&DAT_043cd0d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cd0e8);
  }
  puVar3 = DAT_043cd0e0;
  if ((DAT_043cd0d0 & 1) == 0) {
    puVar3 = &DAT_043cd0d1;
  }
  if (((byte)local_4c8 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_4c8 | 1);
  }
  else {
    puVar29 = local_4b8;
  }
  if (((DAT_043cd0f8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043cd0f8), iVar11 != 0)) {
    DAT_043cd0f0 = 0xd8;
    __cxa_guard_release(&DAT_043cd0f8);
  }
  if (((DAT_043cd108 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043cd108), iVar11 != 0)) {
    DAT_043cd100 = 0xdf;
    __cxa_guard_release(&DAT_043cd108);
  }
  uVar23 = DAT_043cd0f0;
  lVar15 = FUN_00153520(param_2,DAT_043cd0f0);
  if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0xd8)) ||
     (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043cd100;
    lVar15 = FUN_00153520(param_2,DAT_043cd100);
    if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0xd8)) ||
       (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_016e55f0();
      puVar4 = DAT_043cd120;
      if ((DAT_043cd110 & 1) == 0) {
        puVar4 = &DAT_043cd111;
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
  lVar15 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar15;
  lVar25 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar25;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar19[2];
    uVar23 = *(ulong *)(lVar15 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar23 = uVar26 - 1 & uVar23;
    }
    else if (uVar26 <= uVar23) {
      uVar8 = 0;
      if (uVar26 != 0) {
        uVar8 = uVar23 / uVar26;
      }
      uVar23 = uVar23 - uVar8 * uVar26;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar24 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar24;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar19 = &PTR_FUN_04224e20;
  *(undefined1 *)(puVar19 + 0xb) = uVar6;
  uVar24 = *(undefined8 *)(param_1 + 0x70);
  uVar20 = *(undefined8 *)(param_1 + 0x68);
  puVar19[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar19[0xd] = uVar20;
  puVar19[0xe] = uVar24;
  uVar20 = *(undefined8 *)(param_1 + 0x78);
  uVar24 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  puVar19[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar19[0x12] = uVar5;
  puVar19[0xf] = uVar20;
  puVar19[0x10] = uVar24;
  uVar20 = *(undefined8 *)(param_1 + 0x98);
  uVar24 = *(undefined8 *)(param_1 + 0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  puVar19[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar19[0x16] = uVar5;
  puVar19[0x13] = uVar20;
  puVar19[0x14] = uVar24;
  uVar20 = *(undefined8 *)(param_1 + 0xb8);
  uVar24 = *(undefined8 *)(param_1 + 0xc0);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  puVar19[0x19] = *(undefined8 *)(param_1 + 200);
  puVar19[0x1a] = uVar5;
  puVar19[0x17] = uVar20;
  puVar19[0x18] = uVar24;
  iVar11 = FUN_00154450(param_2,puVar29);
  if (iVar11 != 0) {
    FUN_001516f0(param_2,&LAB_016e55b0,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar12 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar12);
  }
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar15 = FUN_001511d0(param_2,0xffffffff);
  lVar15 = lVar15 + ((ulong)(uint)-(int)lVar15 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar9 = DAT_043f1798;
  if ((((byte)local_4c8 & 1) != 0) && (local_4b8 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar27 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar27 = plVar9;
    }
    uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar25 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar25 + 0x38d488) = 1;
        *(undefined8 *)(lVar25 + 0x38d478) = 0;
        *(undefined8 *)(lVar25 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar25 + 0x38d480)) {
        FUN_02bcc824(plVar27,local_4b8,0,8);
        goto LAB_016e15cc;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,local_4b8,0,8);
  }
LAB_016e15cc:
  memset(&local_298,0,0x230);
  pcVar28 = *(char **)(lVar15 + 0x80);
  sVar16 = strlen(pcVar28);
  sVar1 = 10;
  if (sVar16 < 0xb) {
    sVar1 = sVar16;
  }
  if (sVar1 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = memcmp("__newindex",pcVar28,sVar1);
  }
  bVar10 = uVar13 == 0;
  if (uVar13 == 0) {
    uVar13 = 0xffffffff;
  }
  lVar25 = lVar15 + 8;
  if (sVar16 < 0xb && bVar10) {
    uVar13 = (uint)(sVar16 < 10);
  }
  lVar30 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_016e54ac;
  if (uVar13 != 0) {
    pcVar21 = FUN_016e5444;
  }
  while( true ) {
    lVar17 = FUN_008cca50();
    pbVar22 = (byte *)(lVar17 + lVar30);
    sVar16 = strlen(pcVar28);
    sVar1 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar16 == sVar1) &&
       (iVar11 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar11 == 0)) break;
    uVar23 = uVar23 + 1;
    lVar30 = lVar30 + 0x18;
    if (uVar23 == 0x20) {
LAB_016e1d3c:
      uVar26 = 1;
      uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd0);
      local_298 = pcVar28;
      local_290 = pcVar21;
joined_r0x016e16c8:
      if ((uVar13 >> 0x11 & 1) == 0) {
LAB_016e16cc:
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd0);
      }
LAB_016e16d4:
      if ((uVar13 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd0);
      }
      if ((uVar13 >> 0x10 & 1) == 0) {
        lVar30 = FUN_008cca50();
        pcVar28 = (char *)(lVar30 + 0x181);
        if ((*(byte *)(lVar30 + 0x180) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 400);
        }
        (&local_298)[uVar26 * 2] = pcVar28;
        (&local_290)[uVar26 * 2] = (code *)&LAB_016e5a30;
        uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd0);
        uVar26 = (ulong)((int)uVar26 + 1);
      }
      uVar23 = uVar26;
      if ((uVar13 >> 0x1b & 1) == 0) {
        lVar30 = FUN_008cca50();
        uVar23 = (ulong)((int)uVar26 + 1);
        pcVar28 = (char *)(lVar30 + 0x289);
        if ((*(byte *)(lVar30 + 0x288) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 0x298);
        }
        (&local_298)[uVar26 * 2] = pcVar28;
        (&local_290)[uVar26 * 2] = (code *)&LAB_016e5a2c;
      }
      uVar26 = uVar23;
      if (*(long *)(lVar15 + 0x88) != 0) {
        lVar30 = FUN_008cca50();
        pcVar28 = (char *)(lVar30 + 0x1c9);
        if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
          pcVar28 = *(char **)(lVar30 + 0x1d8);
        }
        pcVar21 = *(code **)(lVar15 + 0x88);
        uVar26 = (ulong)((int)uVar23 + 1);
        (&local_298)[uVar23 * 2] = pcVar28;
        (&local_290)[uVar23 * 2] = pcVar21;
      }
      (&local_298)[uVar26 * 2] = (char *)0x0;
      (&local_290)[uVar26 * 2] = (code *)0x0;
      memcpy(&local_4c8,&local_298,0x230);
      memcpy(asStack_6f8,&local_298,0x230);
      lVar30 = FUN_008cca50();
      lVar17 = uVar26 - 1;
      pcVar28 = (&local_298)[lVar17 * 2];
      sVar16 = strlen(pcVar28);
      sVar1 = (ulong)(*(byte *)(lVar30 + 0x1c8) >> 1);
      if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar30 + 0x1d0);
      }
      if ((sVar16 == sVar1) &&
         (iVar11 = std::string::compare(lVar30 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
         iVar11 == 0)) {
        auStack_4d8[lVar17 * 2 + 2] = 0;
        *(undefined8 *)(auStack_4c7 + lVar17 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_6f8 + lVar17 * 0x10) = (&local_298)[lVar17 * 2];
      *(undefined1 **)(asStack_6f8 + (lVar17 * 2 + 1) * 8) = &LAB_016e5500;
      FUN_00151fe0(param_2,0,2);
      local_700[0] = FUN_0014feb0(param_2,0xffffffff);
      local_708 = param_2;
      if (((DAT_043cd030 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043cd030), iVar11 != 0)) {
        FUN_016e4d10();
        FUN_00100250(PTR__string_04379718,&DAT_043cd018,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043cd030);
      }
      uVar12 = local_700[0];
      uVar23 = (ulong)(DAT_043cd018 >> 1);
      if ((DAT_043cd018 & 1) == 0) {
        puVar29 = &DAT_043cd019;
      }
      else {
        puVar29 = DAT_043cd028;
        uVar23 = DAT_043cd020;
      }
      FUN_001514f0(param_2,puVar29,uVar23);
      FUN_00152550(param_2,uVar12,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_016e5550,0);
      FUN_00152550(param_2,uVar12,&DAT_0397bfcb);
      lVar30 = 0;
      do {
        if (lVar30 == 1) {
          psVar18 = asStack_6f8;
          FUN_016e3488();
          pbVar22 = &DAT_043ccf80;
        }
        else if (lVar30 == 0) {
          psVar18 = &local_4c8;
          FUN_016e3294();
          pbVar22 = &DAT_043ccf08;
        }
        else {
          psVar18 = (string *)&local_298;
          FUN_016e367c();
          pbVar22 = &DAT_043ccff8;
        }
        pbVar2 = pbVar22 + 1;
        if ((*pbVar22 & 1) != 0) {
          pbVar2 = *(byte **)(pbVar22 + 0x10);
        }
        FUN_00154450(param_2,pbVar2);
        local_710 = FUN_0014feb0(param_2,0xffffffff);
        local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
        local_718 = param_2;
        FUN_008fe304(local_720,param_2,&local_750,&local_708,local_710);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00155a20(param_2,psVar18,2);
        uVar12 = local_710;
        if (*(long *)(lVar15 + 0xb8) == 0) {
          lVar17 = *(long *)(lVar15 + 0xc0);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_check");
          lVar17 = *(long *)(lVar15 + 0xc0);
          uVar12 = local_710;
        }
        local_710 = uVar12;
        if (lVar17 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar12,"class_cast");
        }
        uVar12 = local_710;
        uVar20 = *(undefined8 *)(lVar15 + 0x98);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar25);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar12,&DAT_03955ac7);
        uVar12 = local_710;
        uVar20 = *(undefined8 *)(lVar15 + 0xa0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar15);
        FUN_00151810(param_2,lVar25);
        FUN_001516f0(param_2,uVar20,3);
        FUN_00152550(param_2,uVar12,&DAT_0397c077);
        if (*(char *)(lVar15 + 0x58) == '\0') {
          local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
          FUN_008fe304(local_720,param_2,&local_750,&local_718,local_710);
        }
        else {
          local_720[0] = 1;
          local_750 = &LAB_016e55a0;
          uStack_748 = 0;
          local_740 = lVar15;
          lStack_738 = lVar25;
          FUN_016e682c(param_2,local_720,&local_750,local_710);
          local_720[0] = 2;
          local_750 = &LAB_016e55a4;
          uStack_748 = 0;
          local_740 = lVar15;
          lStack_738 = lVar25;
          FUN_016e682c(param_2,local_720,&local_750,local_710);
        }
        FUN_00151fe0(param_2,0,3);
        uVar12 = FUN_0014feb0(param_2,0xffffffff);
        local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
        FUN_008fe304(local_720,param_2,&local_750,&local_708,uVar12);
        if (*(undefined1 **)(lVar15 + 0x90) == (undefined1 *)0x0) {
          cVar7 = *(char *)(lVar15 + 200);
        }
        else {
          local_720[0] = 4;
          uStack_748 = 0;
          local_750 = *(undefined1 **)(lVar15 + 0x90);
          local_740 = lVar15;
          lStack_738 = lVar25;
          FUN_016e682c(param_2,local_720,&local_750,uVar12);
          cVar7 = *(char *)(lVar15 + 200);
        }
        if (cVar7 != '\0') {
          local_720[0] = 1;
          local_750 = &LAB_016e55a0;
          uStack_748 = 0;
          local_740 = lVar15;
          lStack_738 = lVar25;
          FUN_016e682c(param_2,local_720,&local_750,uVar12);
          local_720[0] = 2;
          local_750 = &LAB_016e55a4;
          uStack_748 = 0;
          local_740 = lVar15;
          lStack_738 = lVar25;
          FUN_016e682c(param_2,local_720,&local_750,uVar12);
        }
        uVar14 = local_710;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar12);
        }
        FUN_00152ae0(param_2,uVar14);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_718,0xfffffffe);
        lVar30 = lVar30 + 1;
      } while (lVar30 != 3);
      FUN_016e38bc();
      puVar3 = DAT_043cd080;
      if ((DAT_043cd070 & 1) == 0) {
        puVar3 = &DAT_043cd071;
      }
      FUN_00154450(param_2,puVar3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar12);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar15);
      FUN_00155a20(param_2,&local_298,2);
      FUN_00151fe0(param_2,0,3);
      uVar14 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar14);
      local_750 = *(undefined1 **)(lVar15 + 0x90);
      if (local_750 != (undefined1 *)0x0) {
        local_718 = CONCAT44(local_718._4_4_,4);
        uStack_748 = 0;
        local_740 = lVar15;
        lStack_738 = lVar25;
        FUN_016e682c(param_2,&local_718,&local_750,uVar14);
      }
      local_718._0_4_ = 1;
      local_750 = &LAB_016e55a8;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7c518;
      local_740 = lVar15;
      lStack_738 = lVar25;
      FUN_016e6ee0(param_2,&local_718,&local_750,uVar14);
      local_718 = CONCAT44(local_718._4_4_,2);
      local_750 = &LAB_016e55ac;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7c518;
      local_740 = lVar15;
      lStack_738 = lVar25;
      FUN_016e6ee0(param_2,&local_718,&local_750,uVar14);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar14);
      }
      FUN_00152ae0(param_2,uVar12);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_700[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar11 = (int)uVar23;
  if (iVar11 == 0x13) {
    uVar26 = 0;
    *(code **)(lVar15 + 0x88) = pcVar21;
    uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd0);
    goto joined_r0x016e16c8;
  }
  if (iVar11 == 1) {
    *(code **)(lVar15 + 0x30) = pcVar21;
  }
  else {
    if (iVar11 != 2) {
      *(ulong *)(lVar15 + 0xd0) = *(ulong *)(lVar15 + 0xd0) | 1L << (uVar23 & 0x3f);
      goto LAB_016e1d3c;
    }
    *(code **)(lVar15 + 0x38) = pcVar21;
  }
  uVar26 = 0;
  *(undefined1 *)(lVar15 + 0x58) = 1;
  *(ulong *)(lVar15 + 0xd0) = *(ulong *)(lVar15 + 0xd0) | 1L << (uVar23 & 0x3f);
  uVar13 = (uint)*(undefined8 *)(lVar15 + 0xd0);
  if ((uVar13 >> 0x11 & 1) != 0) goto LAB_016e16d4;
  goto LAB_016e16cc;
}


