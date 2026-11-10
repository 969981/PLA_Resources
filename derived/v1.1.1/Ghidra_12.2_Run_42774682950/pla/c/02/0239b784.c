/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0239b784; name: FUN_0239b784
 */


void FUN_0239b784(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  size_t sVar16;
  byte *pbVar17;
  string *psVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *local_e40;
  undefined8 uStack_e38;
  long local_e30;
  long lStack_e28;
  undefined8 local_e20;
  undefined *puStack_e18;
  undefined4 local_e10 [2];
  long local_e08;
  undefined4 local_e00;
  long local_df8;
  undefined4 local_df0 [2];
  string asStack_de8 [1136];
  undefined8 auStack_978 [2];
  string local_968;
  undefined1 auStack_967 [7];
  size_t local_960;
  undefined1 *local_958;
  char *apcStack_4f8 [2];
  char *local_4e8;
  code *local_4e0;
  long local_4d8;
  
  if (((DAT_043e2ac0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2ac0), iVar8 != 0)) {
    local_4d8 = 0;
    local_4e0 = (code *)0x0;
    local_4e8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383de8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04383de8);
      puVar2 = PTR_DAT_04383df0;
      if (iVar8 != 0) {
        FUN_02042310(PTR_DAT_04383df0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383de8);
      }
    }
    pcVar27 = (char *)FUN_02398964(&local_4e8,PTR_DAT_04383df0);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e2aa8,psVar18);
    lVar13 = local_4d8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_4e8 & 1) != 0) && (local_4d8 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar6;
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
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_0239f574;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_0239f574:
    FUN_00100250(PTR__string_04379718,&DAT_043e2aa8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2ac0);
  }
  std::string::string(&local_968,(string *)&DAT_043e2aa8);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e2aa0);
  if (((byte)local_968 & 1) == 0) {
    uVar23 = (ulong)((byte)local_968 >> 1);
  }
  else {
    uVar23 = local_960;
  }
  std::string::append((ulong)&local_968,(char)iVar8);
  if (((byte)local_968 & 1) == 0) {
    puVar28 = auStack_967;
    local_960 = (size_t)((byte)local_968 >> 1);
  }
  else {
    puVar28 = local_958;
  }
  snprintf(puVar28 + (uVar23 - 1),local_960,"%d",(ulong)DAT_043e2aa0);
  DAT_043e2aa0 = DAT_043e2aa0 + 1;
  if (((DAT_043e2ae0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2ae0), iVar8 != 0)) {
    local_4d8 = 0;
    local_4e0 = (code *)0x0;
    local_4e8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383de8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04383de8);
      puVar2 = PTR_DAT_04383df0;
      if (iVar8 != 0) {
        FUN_02042310(PTR_DAT_04383df0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383de8);
      }
    }
    pcVar27 = (char *)FUN_02398964(&local_4e8,PTR_DAT_04383df0);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e2ac8,psVar18);
    lVar13 = local_4d8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_4e8 & 1) != 0) && (local_4d8 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar6;
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
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_0239f6c8;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_0239f6c8:
    FUN_00100250(PTR__string_04379718,&DAT_043e2ac8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2ae0);
  }
  puVar2 = DAT_043e2ad8;
  if ((DAT_043e2ac8 & 1) == 0) {
    puVar2 = &DAT_043e2ac9;
  }
  if (((byte)local_968 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_968 | 1);
  }
  else {
    puVar28 = local_958;
  }
  if (((DAT_043e2af0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2af0), iVar8 != 0)) {
    DAT_043e2ae8 = 0x448;
    __cxa_guard_release(&DAT_043e2af0);
  }
  if (((DAT_043e2b00 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2b00), iVar8 != 0)) {
    DAT_043e2af8 = 0x44f;
    __cxa_guard_release(&DAT_043e2b00);
  }
  uVar23 = DAT_043e2ae8;
  lVar13 = FUN_00153520(param_1,DAT_043e2ae8);
  if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x448)) ||
     (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043e2af8;
    lVar13 = FUN_00153520(param_1,DAT_043e2af8);
    if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x448)) ||
       (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_023a00c0();
      puVar3 = DAT_043e2b18;
      if ((DAT_043e2b08 & 1) == 0) {
        puVar3 = &DAT_043e2b09;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar3);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar13;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar13 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar5 = 0;
      if (uVar25 != 0) {
        uVar5 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar5 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_LAB_0425bda8;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),1000);
  iVar8 = FUN_00154450(param_1,puVar28);
  if (iVar8 != 0) {
    FUN_001516f0(param_1,&LAB_023a0080,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar9 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar9);
  }
  FUN_001522a0(param_1,puVar2);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar2);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_968 & 1) != 0) && (local_958 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar6;
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
        FUN_02bcc824(plVar26,local_958,0,8);
        goto LAB_0239bae8;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_958,0,8);
  }
LAB_0239bae8:
  memset(&local_4e8,0,0x480);
  puVar2 = PTR_DAT_043847e0;
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *puVar2 = 1;
  pcVar27 = *(char **)(lVar13 + 0x60);
  *(undefined1 **)(lVar13 + 0x430) = &LAB_023a05e4;
  *(undefined1 **)(lVar13 + 0x428) = &LAB_023a0528;
  *(undefined1 **)(lVar13 + 0x420) = &LAB_023a0650;
  *(undefined1 **)(lVar13 + 0x418) = &LAB_023a0640;
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar24 = lVar13 + 8;
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02398e30;
  if (uVar10 != 0) {
    pcVar21 = FUN_02398cdc;
  }
  puVar1 = (ulong *)(lVar13 + 0x440);
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239bd50;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239bd50;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_4e8 = pcVar27;
  local_4e0 = pcVar21;
LAB_0239bd50:
  pcVar27 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239902c;
  if (uVar10 != 0) {
    pcVar21 = FUN_02398f1c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239be94;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239be94;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239be94:
  pcVar27 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02399184;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239913c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239bfd4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239bfd4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239bfd4:
  pcVar27 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239931c;
  if (uVar10 != 0) {
    pcVar21 = FUN_023991cc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239c114;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239c114;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239c114:
  pcVar27 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02399530;
  if (uVar10 != 0) {
    pcVar21 = FUN_02399408;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239c254;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239c254;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239c254:
  pcVar27 = *(char **)(lVar13 + 0xd8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_023996a0;
  if (uVar10 != 0) {
    pcVar21 = FUN_02399658;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239c394;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239c394;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239c394:
  pcVar27 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02399730;
  if (uVar10 != 0) {
    pcVar21 = FUN_023996e8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239c4d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239c4d4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239c4d4:
  pcVar27 = *(char **)(lVar13 + 0x108);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_023998cc;
  if (uVar10 != 0) {
    pcVar21 = FUN_02399778;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239c614;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239c614;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239c614:
  pcVar27 = *(char **)(lVar13 + 0x120);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02399a00;
  if (uVar10 != 0) {
    pcVar21 = FUN_023999b8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239c754;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239c754;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239c754:
  pcVar27 = *(char **)(lVar13 + 0x138);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02399a90;
  if (uVar10 != 0) {
    pcVar21 = FUN_02399a48;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239c894;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239c894;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239c894:
  pcVar27 = *(char **)(lVar13 + 0x150);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02399c3c;
  if (uVar10 != 0) {
    pcVar21 = FUN_02399ad8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239c9d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239c9d4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239c9d4:
  pcVar27 = *(char **)(lVar13 + 0x168);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02399e7c;
  if (uVar10 != 0) {
    pcVar21 = FUN_02399d28;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239cb14;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239cb14;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239cb14:
  pcVar27 = *(char **)(lVar13 + 0x180);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a0bc;
  if (uVar10 != 0) {
    pcVar21 = FUN_02399f68;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239cc54;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239cc54;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239cc54:
  pcVar27 = *(char **)(lVar13 + 0x198);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a2fc;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a1a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239cd94;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239cd94;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239cd94:
  pcVar27 = *(char **)(lVar13 + 0x1b0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0239a420;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_0239a3e8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239ced4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239ced4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239ced4:
  pcVar27 = *(char **)(lVar13 + 0x1c8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a4b0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a468;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239d014;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239d014;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239d014:
  pcVar27 = *(char **)(lVar13 + 0x1e0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a540;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a4f8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239d154;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239d154;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239d154:
  pcVar27 = *(char **)(lVar13 + 0x1f8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a5d0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a588;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239d294;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239d294;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239d294:
  pcVar27 = *(char **)(lVar13 + 0x210);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a660;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a618;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239d3d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239d3d4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239d3d4:
  pcVar27 = *(char **)(lVar13 + 0x228);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a6f0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a6a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239d514;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239d514;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239d514:
  pcVar27 = *(char **)(lVar13 + 0x240);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a780;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a738;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239d654;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239d654;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239d654:
  pcVar27 = *(char **)(lVar13 + 600);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a810;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a7c8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239d794;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239d794;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239d794:
  pcVar27 = *(char **)(lVar13 + 0x270);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a8a0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a858;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239d8d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239d8d4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239d8d4:
  pcVar27 = *(char **)(lVar13 + 0x288);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a930;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a8e8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239da14;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239da14;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239da14:
  pcVar27 = *(char **)(lVar13 + 0x2a0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239a9c0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239a978;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239db54;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239db54;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239db54:
  pcVar27 = *(char **)(lVar13 + 0x2b8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239aa50;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239aa08;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239dc94;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239dc94;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239dc94:
  pcVar27 = *(char **)(lVar13 + 0x2d0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239aae0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239aa98;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239ddd4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239ddd4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239ddd4:
  pcVar27 = *(char **)(lVar13 + 0x2e8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239ab70;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239ab28;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239df14;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239df14;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239df14:
  pcVar27 = *(char **)(lVar13 + 0x300);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239ac00;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239abb8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239e054;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239e054;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239e054:
  pcVar27 = *(char **)(lVar13 + 0x318);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239ac90;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239ac48;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239e194;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239e194;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239e194:
  pcVar27 = *(char **)(lVar13 + 0x330);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239ad20;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239acd8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar8 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239e2d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239e2d4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0239e2d4:
  iVar8 = (int)uVar25;
  pcVar27 = *(char **)(lVar13 + 0x348);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239adb0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239ad68;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar11 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar23;
      if (iVar11 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239e414;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239e414;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  iVar8 = iVar8 + 1;
  (&local_4e8)[uVar25 * 2] = pcVar27;
  (&local_4e0)[uVar25 * 2] = pcVar21;
LAB_0239e414:
  pcVar27 = *(char **)(lVar13 + 0x360);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239ae40;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239adf8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar11 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar23;
      if (iVar11 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239e554;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239e554;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  (&local_4e8)[lVar29 * 2] = pcVar27;
  (&local_4e0)[lVar29 * 2] = pcVar21;
LAB_0239e554:
  pcVar27 = *(char **)(lVar13 + 0x378);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239aed0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239ae88;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar11 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar23;
      if (iVar11 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239e694;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239e694;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  (&local_4e8)[lVar29 * 2] = pcVar27;
  (&local_4e0)[lVar29 * 2] = pcVar21;
LAB_0239e694:
  pcVar27 = *(char **)(lVar13 + 0x390);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239af60;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239af18;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar11 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar23;
      if (iVar11 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239e7d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239e7d4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  (&local_4e8)[lVar29 * 2] = pcVar27;
  (&local_4e0)[lVar29 * 2] = pcVar21;
LAB_0239e7d4:
  pcVar27 = *(char **)(lVar13 + 0x3a8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239aff0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239afa8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar11 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar23;
      if (iVar11 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239e914;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239e914;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  (&local_4e8)[lVar29 * 2] = pcVar27;
  (&local_4e0)[lVar29 * 2] = pcVar21;
LAB_0239e914:
  pcVar27 = *(char **)(lVar13 + 0x3c0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239b18c;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239b038;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar11 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar23;
      if (iVar11 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239ea54;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239ea54;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  (&local_4e8)[lVar29 * 2] = pcVar27;
  (&local_4e0)[lVar29 * 2] = pcVar21;
LAB_0239ea54:
  pcVar27 = *(char **)(lVar13 + 0x3d8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0239b484;
  if (uVar10 != 0) {
    pcVar21 = FUN_0239b278;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar11 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar23;
      if (iVar11 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 == 0x13) {
            *(code **)(lVar13 + 0x3f8) = pcVar21;
            goto LAB_0239eb94;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      goto LAB_0239eb94;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  (&local_4e8)[lVar29 * 2] = pcVar27;
  (&local_4e0)[lVar29 * 2] = pcVar21;
LAB_0239eb94:
  pcVar27 = *(char **)(lVar13 + 0x3f0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar7) {
    uVar10 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0239b750;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_0239b570;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar11 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar11 == 0)) {
      iVar11 = (int)uVar23;
      if (iVar11 == 0x13) {
        *(code **)(lVar13 + 0x3f8) = pcVar21;
        uVar10 = (uint)*puVar1;
        goto joined_r0x0239ec78;
      }
      if (iVar11 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar11 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x440) = *(ulong *)(lVar13 + 0x440) | 1L << (uVar23 & 0x3f);
      uVar10 = (uint)*puVar1;
      goto joined_r0x0239ec78;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar8;
  iVar8 = iVar8 + 1;
  (&local_4e8)[lVar29 * 2] = pcVar27;
  (&local_4e0)[lVar29 * 2] = pcVar21;
  uVar10 = (uint)*puVar1;
joined_r0x0239ec78:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    lVar29 = (long)iVar8;
    iVar8 = iVar8 + 1;
    (&local_4e8)[lVar29 * 2] = pcVar27;
    (&local_4e0)[lVar29 * 2] = (code *)PTR_LAB_04383dc0;
    uVar10 = (uint)*puVar1;
  }
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    lVar29 = (long)iVar8;
    iVar8 = iVar8 + 1;
    (&local_4e8)[lVar29 * 2] = pcVar27;
    (&local_4e0)[lVar29 * 2] = (code *)PTR_LAB_04383dc8;
  }
  if (*(long *)(lVar13 + 0x3f8) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar13 + 0x3f8);
    lVar29 = (long)iVar8;
    iVar8 = iVar8 + 1;
    (&local_4e8)[lVar29 * 2] = pcVar27;
    (&local_4e0)[lVar29 * 2] = pcVar21;
  }
  (&local_4e8)[(long)iVar8 * 2] = (char *)0x0;
  (&local_4e0)[(long)iVar8 * 2] = (code *)0x0;
  memcpy(&local_968,&local_4e8,0x480);
  memcpy(asStack_de8,&local_4e8,0x480);
  lVar29 = FUN_008cca50();
  lVar15 = (long)iVar8 + -1;
  pcVar27 = (&local_4e8)[lVar15 * 2];
  sVar16 = strlen(pcVar27);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) == 0) {
    sVar14 = (size_t)(*(byte *)(lVar29 + 0x1c8) >> 1);
  }
  else {
    sVar14 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar16 == sVar14) &&
     (iVar8 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar8 == 0)) {
    auStack_978[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_967 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_de8 + lVar15 * 0x10) = (&local_4e8)[lVar15 * 2];
  *(undefined1 **)(asStack_de8 + (lVar15 * 2 + 1) * 8) = &LAB_0239fcc0;
  FUN_00151fe0(param_1,0,2);
  local_df0[0] = FUN_0014feb0(param_1,0xffffffff);
  local_df8 = param_1;
  if ((*PTR_DAT_04383de8 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04383de8);
    puVar2 = PTR_DAT_04383df0;
    if (iVar8 != 0) {
      FUN_02042310(PTR_DAT_04383df0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04383de8);
    }
  }
  uVar9 = local_df0[0];
  uVar23 = *(ulong *)(PTR_DAT_04383df0 + 8);
  puVar2 = *(undefined **)(PTR_DAT_04383df0 + 0x10);
  if ((*PTR_DAT_04383df0 & 1) == 0) {
    puVar2 = PTR_DAT_04383df0 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_04383df0 >> 1);
  }
  FUN_001514f0(param_1,puVar2,uVar23);
  FUN_00152550(param_1,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_0239fd10,0);
  FUN_00152550(param_1,uVar9,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_de8;
      pbVar17 = (byte *)FUN_02042b24();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_968;
      pbVar17 = (byte *)FUN_02040c48();
    }
    else {
      psVar18 = (string *)&local_4e8;
      pbVar17 = (byte *)FUN_020420b4();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_e00 = FUN_0014feb0(param_1,0xffffffff);
    local_e40 = (undefined1 *)CONCAT44(local_e40._4_4_,0x1e);
    local_e08 = param_1;
    FUN_008fe304(local_e10,param_1,&local_e40,&local_df8,local_e00);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,psVar18,2);
    uVar9 = local_e00;
    if (*(long *)(lVar13 + 0x428) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_check");
    }
    uVar9 = local_e00;
    if (*(long *)(lVar13 + 0x430) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_cast");
    }
    uVar9 = local_e00;
    uVar20 = *(undefined8 *)(lVar13 + 0x408);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar24);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_03955ac7);
    uVar9 = local_e00;
    uVar20 = *(undefined8 *)(lVar13 + 0x410);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar24);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_e40 = (undefined1 *)CONCAT44(local_e40._4_4_,1);
      FUN_008fe304(local_e10,param_1,&local_e40,&local_e08,local_e00);
    }
    else {
      local_e10[0] = 1;
      local_e40 = &LAB_0239fd60;
      uStack_e38 = 0;
      local_e30 = lVar13;
      lStack_e28 = lVar24;
      FUN_023a0a78(param_1,local_e10,&local_e40,local_e00);
      local_e10[0] = 2;
      local_e40 = &LAB_023a006c;
      uStack_e38 = 0;
      local_e30 = lVar13;
      lStack_e28 = lVar24;
      FUN_023a0a78(param_1,local_e10,&local_e40,local_e00);
    }
    FUN_00151fe0(param_1,0,3);
    uVar9 = FUN_0014feb0(param_1,0xffffffff);
    local_e40 = (undefined1 *)CONCAT44(local_e40._4_4_,0x1e);
    FUN_008fe304(local_e10,param_1,&local_e40,&local_df8,uVar9);
    if (*(undefined1 **)(lVar13 + 0x400) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x438) != '\0') goto LAB_0239f330;
LAB_0239f094:
      if (param_1 == 0) goto LAB_0239f394;
LAB_0239f09c:
      uVar12 = local_e00;
      FUN_00150260(param_1,uVar9);
    }
    else {
      uStack_e38 = 0;
      local_e10[0] = 4;
      local_e40 = *(undefined1 **)(lVar13 + 0x400);
      local_e30 = lVar13;
      lStack_e28 = lVar24;
      FUN_023a0a78(param_1,local_e10,&local_e40,uVar9);
      if (*(char *)(lVar13 + 0x438) == '\0') goto LAB_0239f094;
LAB_0239f330:
      local_e10[0] = 1;
      local_e40 = &LAB_0239fd60;
      uStack_e38 = 0;
      local_e30 = lVar13;
      lStack_e28 = lVar24;
      FUN_023a0a78(param_1,local_e10,&local_e40,uVar9);
      local_e10[0] = 2;
      local_e40 = &LAB_023a006c;
      uStack_e38 = 0;
      local_e30 = lVar13;
      lStack_e28 = lVar24;
      FUN_023a0a78(param_1,local_e10,&local_e40,uVar9);
      if (param_1 != 0) goto LAB_0239f09c;
LAB_0239f394:
      uVar12 = local_e00;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar12);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_e08,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_0239811c();
      puVar2 = DAT_043e2a90;
      if ((DAT_043e2a80 & 1) == 0) {
        puVar2 = &DAT_043e2a81;
      }
      FUN_00154450(param_1,puVar2);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_e40._0_4_ = 0x1e;
      FUN_008fe304(&local_e08,param_1,&local_e40,&local_df8,uVar9);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,&local_4e8,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_e40 = (undefined1 *)CONCAT44(local_e40._4_4_,0x1e);
      FUN_008fe304(&local_e08,param_1,&local_e40,&local_df8,uVar12);
      local_e40 = *(undefined1 **)(lVar13 + 0x400);
      if (local_e40 != (undefined1 *)0x0) {
        local_e08 = CONCAT44(local_e08._4_4_,4);
        uStack_e38 = 0;
        local_e30 = lVar13;
        lStack_e28 = lVar24;
        FUN_023a0a78(param_1,&local_e08,&local_e40,uVar12);
      }
      local_e08._0_4_ = 1;
      local_e40 = &LAB_023a0070;
      uStack_e38 = 0;
      local_e20 = 0;
      puStack_e18 = &DAT_03a7d500;
      local_e30 = lVar13;
      lStack_e28 = lVar24;
      FUN_023a0e20(param_1,&local_e08,&local_e40,uVar12);
      local_e08 = CONCAT44(local_e08._4_4_,2);
      local_e40 = &LAB_023a0074;
      uStack_e38 = 0;
      local_e20 = 0;
      puStack_e18 = &DAT_03a7d500;
      local_e30 = lVar13;
      lStack_e28 = lVar24;
      FUN_023a0e20(param_1,&local_e08,&local_e40,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar9);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_df0[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


