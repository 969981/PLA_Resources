/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0227fa94; name: FUN_0227fa94
 */


undefined8 FUN_0227fa94(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  size_t sVar15;
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
  char *local_2f0;
  code *local_2e8;
  long local_2e0;
  undefined1 auStack_70 [16];
  
  puVar4 = PTR_DAT_0437ca08;
  if (((DAT_043e0030 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e0030), iVar8 != 0)) {
    local_2e0 = 0;
    local_2e8 = (code *)0x0;
    local_2f0 = (char *)0x2e6c6f7308;
    if ((*puVar4 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437ca08);
      puVar1 = PTR_DAT_0437ca10;
      if (iVar8 != 0) {
        FUN_00ee2ec0(PTR_DAT_0437ca10);
        FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437ca08);
      }
    }
    pcVar26 = (char *)FUN_02282c34(&local_2f0,PTR_DAT_0437ca10);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e0018,psVar17);
    lVar12 = local_2e0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2f0 & 1) != 0) && (local_2e0 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
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
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_02281140;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_02281140:
    FUN_00100250(PTR__string_04379718,&DAT_043e0018,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e0030);
  }
  std::string::string(&local_570,(string *)&DAT_043e0018);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e0010);
  if (((byte)local_570 & 1) == 0) {
    uVar22 = (ulong)((byte)local_570 >> 1);
  }
  else {
    uVar22 = local_568;
  }
  std::string::append((ulong)&local_570,(char)iVar8);
  if (((byte)local_570 & 1) == 0) {
    puVar27 = auStack_56f;
    local_568 = (size_t)((byte)local_570 >> 1);
  }
  else {
    puVar27 = local_560;
  }
  snprintf(puVar27 + (uVar22 - 1),local_568,"%d",(ulong)DAT_043e0010);
  DAT_043e0010 = DAT_043e0010 + 1;
  if (((DAT_043e0050 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e0050), iVar8 != 0)) {
    local_2e0 = 0;
    local_2e8 = (code *)0x0;
    local_2f0 = (char *)0x2e6c6f7308;
    if ((*puVar4 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437ca08);
      puVar1 = PTR_DAT_0437ca10;
      if (iVar8 != 0) {
        FUN_00ee2ec0(PTR_DAT_0437ca10);
        FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437ca08);
      }
    }
    pcVar26 = (char *)FUN_02282c34(&local_2f0,PTR_DAT_0437ca10);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e0038,psVar17);
    lVar12 = local_2e0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2f0 & 1) != 0) && (local_2e0 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
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
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_0228128c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_0228128c:
    FUN_00100250(PTR__string_04379718,&DAT_043e0038,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e0050);
  }
  puVar1 = DAT_043e0048;
  if ((DAT_043e0038 & 1) == 0) {
    puVar1 = &DAT_043e0039;
  }
  if (((byte)local_570 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_570 | 1);
  }
  else {
    puVar27 = local_560;
  }
  if (((DAT_043e0060 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e0060), iVar8 != 0)) {
    DAT_043e0058 = 0x150;
    __cxa_guard_release(&DAT_043e0060);
  }
  if (((DAT_043e0070 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e0070), iVar8 != 0)) {
    DAT_043e0068 = 0x157;
    __cxa_guard_release(&DAT_043e0070);
  }
  uVar22 = DAT_043e0058;
  lVar12 = FUN_00153520(param_2,DAT_043e0058);
  if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x150)) ||
     (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e0068;
    lVar12 = FUN_00153520(param_2,DAT_043e0068);
    if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x150)) ||
       (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02283ff0();
      puVar2 = DAT_043e0088;
      if ((DAT_043e0078 & 1) == 0) {
        puVar2 = &DAT_043e0079;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar12;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar12 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar5 = 0;
      if (uVar24 != 0) {
        uVar5 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar5 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425b948;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xf0);
  iVar8 = FUN_00154450(param_2,puVar27);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_02283fb0,0);
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
  FUN_001522a0(param_2,puVar1);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar1);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_570 & 1) != 0) && (local_560 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar6;
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
        FUN_02bcc824(plVar25,local_560,0,8);
        goto LAB_0227fe00;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_560,0,8);
  }
LAB_0227fe00:
  memset(&local_2f0,0,0x280);
  pcVar26 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar23 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02283134;
  if (uVar10 != 0) {
    pcVar20 = FUN_02282f6c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar12 + 0x100) = pcVar20;
            goto LAB_02280024;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_02280024;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2f0 = pcVar26;
  local_2e8 = pcVar20;
LAB_02280024:
  pcVar26 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02283338;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_0228322c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x100) = pcVar20;
            goto LAB_02280164;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_02280164;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02280164:
  pcVar26 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_0228348c;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_02283454;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x100) = pcVar20;
            goto LAB_022802a4;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_022802a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022802a4:
  pcVar26 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0228376c;
  if (uVar10 != 0) {
    pcVar20 = FUN_022834d4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x100) = pcVar20;
            goto LAB_022803e4;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_022803e4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022803e4:
  pcVar26 = *(char **)(lVar12 + 0xb0);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0228390c;
  if (uVar10 != 0) {
    pcVar20 = FUN_022837c4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x100) = pcVar20;
            goto LAB_02280524;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_02280524;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02280524:
  pcVar26 = *(char **)(lVar12 + 200);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02283b4c;
  if (uVar10 != 0) {
    pcVar20 = FUN_02283a04;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x100) = pcVar20;
            goto LAB_02280664;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_02280664;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02280664:
  pcVar26 = *(char **)(lVar12 + 0xe0);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02283c8c;
  if (uVar10 != 0) {
    pcVar20 = FUN_02283c44;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x100) = pcVar20;
            goto LAB_022807a4;
          }
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
      goto LAB_022807a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022807a4:
  pcVar26 = *(char **)(lVar12 + 0xf8);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02283d34;
  if (uVar10 != 0) {
    pcVar20 = FUN_02283cd4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x100) = pcVar20;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
        goto joined_r0x02280888;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x148) = *(ulong *)(lVar12 + 0x148) | 1L << (uVar22 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
      goto joined_r0x02280888;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_2f0)[uVar24 * 2] = pcVar26;
  (&local_2e8)[uVar24 * 2] = pcVar20;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x02280888:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
  }
  uVar22 = uVar24;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2f0)[uVar24 * 2] = pcVar26;
    (&local_2e8)[uVar24 * 2] = (code *)PTR_LAB_0437c9e0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x148);
  }
  uVar24 = uVar22;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_2f0)[uVar22 * 2] = pcVar26;
    (&local_2e8)[uVar22 * 2] = (code *)PTR_LAB_0437c9e8;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar12 + 0x100) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar12 + 0x100);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_2f0)[uVar24 * 2] = pcVar26;
    (&local_2e8)[uVar24 * 2] = pcVar20;
  }
  (&local_2f0)[uVar22 * 2] = (char *)0x0;
  (&local_2e8)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_570,&local_2f0,0x280);
  memcpy(asStack_7f0,&local_2f0,0x280);
  lVar28 = FUN_008cca50();
  lVar14 = uVar22 - 1;
  pcVar26 = (&local_2f0)[lVar14 * 2];
  sVar15 = strlen(pcVar26);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) == 0) {
    sVar13 = (size_t)(*(byte *)(lVar28 + 0x1c8) >> 1);
  }
  else {
    sVar13 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar15 == sVar13) &&
     (iVar8 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar8 == 0)) {
    auStack_580[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_56f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7f0 + lVar14 * 0x10) = (&local_2f0)[lVar14 * 2];
  *(undefined1 **)(asStack_7f0 + (lVar14 * 2 + 1) * 8) = &LAB_02283da0;
  FUN_00151fe0(param_2,0,2);
  local_7f8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_800 = param_2;
  if ((*puVar4 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_0437ca08);
    puVar4 = PTR_DAT_0437ca10;
    if (iVar8 != 0) {
      FUN_00ee2ec0(PTR_DAT_0437ca10);
      FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437ca08);
    }
  }
  uVar9 = local_7f8[0];
  uVar22 = *(ulong *)(PTR_DAT_0437ca10 + 8);
  puVar4 = *(undefined **)(PTR_DAT_0437ca10 + 0x10);
  if ((*PTR_DAT_0437ca10 & 1) == 0) {
    puVar4 = PTR_DAT_0437ca10 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_0437ca10 >> 1);
  }
  FUN_001514f0(param_2,puVar4,uVar22);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_02283df0,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_7f0;
      pbVar16 = (byte *)FUN_00ee36c8();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_570;
      pbVar16 = (byte *)FUN_00ee1820();
    }
    else {
      psVar17 = (string *)&local_2f0;
      pbVar16 = (byte *)FUN_00ee2c64();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_808 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    local_810 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_840,&local_800,local_808);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar17,2);
    uVar9 = local_808;
    if (*(long *)(lVar12 + 0x130) == 0) {
      lVar14 = *(long *)(lVar12 + 0x138);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x138);
      uVar9 = local_808;
    }
    local_808 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_808;
    uVar19 = *(undefined8 *)(lVar12 + 0x110);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_808;
    uVar19 = *(undefined8 *)(lVar12 + 0x118);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_840,&local_810,local_808);
    }
    else {
      local_840 = &LAB_02283ee0;
      uStack_838 = 0;
      local_830 = lVar12;
      lStack_828 = lVar23;
      FUN_02283e40(param_2,1,&local_840,local_808);
      local_840 = &LAB_02283ee4;
      uStack_838 = 0;
      local_830 = lVar12;
      lStack_828 = lVar23;
      FUN_02283e40(param_2,2,&local_840,local_808);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_840,&local_800,uVar9);
    if (*(undefined1 **)(lVar12 + 0x108) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x140) != '\0') goto LAB_02280f18;
LAB_02280c18:
      if (param_2 == 0) goto LAB_02280f6c;
LAB_02280c20:
      uVar11 = local_808;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_838 = 0;
      local_840 = *(undefined1 **)(lVar12 + 0x108);
      local_830 = lVar12;
      lStack_828 = lVar23;
      FUN_02283e40(param_2,4,&local_840,uVar9);
      if (*(char *)(lVar12 + 0x140) == '\0') goto LAB_02280c18;
LAB_02280f18:
      local_840 = &LAB_02283ee0;
      uStack_838 = 0;
      local_830 = lVar12;
      lStack_828 = lVar23;
      FUN_02283e40(param_2,1,&local_840,uVar9);
      local_840 = &LAB_02283ee4;
      uStack_838 = 0;
      local_830 = lVar12;
      lStack_828 = lVar23;
      FUN_02283e40(param_2,2,&local_840,uVar9);
      if (param_2 != 0) goto LAB_02280c20;
LAB_02280f6c:
      uVar11 = local_808;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_810,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_022823f8();
      puVar4 = DAT_043e0000;
      if ((DAT_043dfff0 & 1) == 0) {
        puVar4 = &DAT_043dfff1;
      }
      FUN_00154450(param_2,puVar4);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_840._0_4_ = 0x1e;
      FUN_008fe304(&local_810,param_2,&local_840,&local_800,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2f0,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
      FUN_008fe304(&local_810,param_2,&local_840,&local_800,uVar11);
      local_840 = *(undefined1 **)(lVar12 + 0x108);
      if (local_840 != (undefined1 *)0x0) {
        uStack_838 = 0;
        local_830 = lVar12;
        lStack_828 = lVar23;
        FUN_02283e40(param_2,4,&local_840,uVar11);
      }
      local_840 = &LAB_02283fa8;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7d410;
      local_830 = lVar12;
      lStack_828 = lVar23;
      FUN_02283ef0(param_2,1,&local_840,uVar11);
      local_840 = &LAB_02283fac;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7d410;
      local_830 = lVar12;
      lStack_828 = lVar23;
      FUN_02283ef0(param_2,2,&local_840,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7f8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


