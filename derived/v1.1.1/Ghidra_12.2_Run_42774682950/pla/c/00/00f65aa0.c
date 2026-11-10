/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f65aa0; name: FUN_00f65aa0
 */


undefined8 FUN_00f65aa0(long param_1,long param_2)

{
  code *pcVar1;
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
  size_t sVar14;
  string *psVar15;
  undefined *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  undefined1 *puVar26;
  long lVar27;
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
  
  if (((DAT_043b5b68 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b5b68), iVar7 != 0)) {
    local_2e0 = 0;
    local_2f0[1] = (undefined1 *)0x0;
    local_2f0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b58b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b58b8), iVar7 != 0)) {
      FUN_00f6a400();
      FUN_00100250(PTR__string_04379718,&DAT_043b58a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b58b8);
    }
    puVar16 = DAT_043b58b0;
    if ((DAT_043b58a0 & 1) == 0) {
      puVar16 = &DAT_043b58a1;
    }
    pcVar25 = (char *)std::string::append((char *)local_2f0,(ulong)puVar16);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043b5b50,psVar15);
    lVar11 = local_2e0;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2f0[0] & 1) != 0) && (local_2e0 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar5;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar24,lVar11,0,8);
          goto LAB_00f67198;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar11,0,8);
    }
LAB_00f67198:
    FUN_00100250(PTR__string_04379718,&DAT_043b5b50,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b5b68);
  }
  std::string::string(&local_570,(string *)&DAT_043b5b50);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b5b48);
  if (((byte)local_570 & 1) == 0) {
    uVar21 = (ulong)((byte)local_570 >> 1);
  }
  else {
    uVar21 = local_568;
  }
  std::string::append((ulong)&local_570,(char)iVar7);
  if (((byte)local_570 & 1) == 0) {
    puVar26 = auStack_56f;
    local_568 = (size_t)((byte)local_570 >> 1);
  }
  else {
    puVar26 = local_560;
  }
  snprintf(puVar26 + (uVar21 - 1),local_568,"%d",(ulong)DAT_043b5b48);
  DAT_043b5b48 = DAT_043b5b48 + 1;
  if (((DAT_043b5b88 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b5b88), iVar7 != 0)) {
    local_2e0 = 0;
    local_2f0[1] = (undefined1 *)0x0;
    local_2f0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043b58b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b58b8), iVar7 != 0)) {
      FUN_00f6a400();
      FUN_00100250(PTR__string_04379718,&DAT_043b58a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b58b8);
    }
    puVar16 = DAT_043b58b0;
    if ((DAT_043b58a0 & 1) == 0) {
      puVar16 = &DAT_043b58a1;
    }
    pcVar25 = (char *)std::string::append((char *)local_2f0,(ulong)puVar16);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043b5b70,psVar15);
    lVar11 = local_2e0;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2f0[0] & 1) != 0) && (local_2e0 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar5;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar24,lVar11,0,8);
          goto LAB_00f672fc;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar11,0,8);
    }
LAB_00f672fc:
    FUN_00100250(PTR__string_04379718,&DAT_043b5b70,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b5b88);
  }
  puVar16 = DAT_043b5b80;
  if ((DAT_043b5b70 & 1) == 0) {
    puVar16 = &DAT_043b5b71;
  }
  if (((byte)local_570 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_570 | 1);
  }
  else {
    puVar26 = local_560;
  }
  if (((DAT_043b5b98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b5b98), iVar7 != 0)) {
    DAT_043b5b90 = 0xf8;
    __cxa_guard_release(&DAT_043b5b98);
  }
  if (((DAT_043b5ba8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b5ba8), iVar7 != 0)) {
    DAT_043b5ba0 = 0xff;
    __cxa_guard_release(&DAT_043b5ba8);
  }
  uVar21 = DAT_043b5b90;
  lVar11 = FUN_00153520(param_2,DAT_043b5b90);
  if ((uVar21 < ((ulong)(uint)-(int)lVar11 & 7 | 0xf8)) ||
     (puVar19 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043b5ba0;
    lVar11 = FUN_00153520(param_2,DAT_043b5ba0);
    if ((uVar21 < ((ulong)(uint)-(int)lVar11 & 7 | 0xf8)) ||
       (puVar19 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00f6f8c0();
      puVar2 = DAT_043b5bc0;
      if ((DAT_043b5bb0 & 1) == 0) {
        puVar2 = &DAT_043b5bb1;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar17 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar17;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar11;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar22;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar19[2];
    uVar21 = *(ulong *)(lVar11 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar23 - 1 & uVar21;
    }
    else if (uVar23 <= uVar21) {
      uVar4 = 0;
      if (uVar23 != 0) {
        uVar4 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar4 * uVar23;
    }
    *(undefined8 **)(puVar19[1] + uVar21 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar17;
  puVar19[7] = uVar3;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_041eeca0;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0x98);
  iVar7 = FUN_00154450(param_2,puVar26);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_00f6f880,0);
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
  FUN_001522a0(param_2,puVar16);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar16);
  lVar11 = FUN_001511d0(param_2,0xffffffff);
  lVar11 = lVar11 + ((ulong)(uint)-(int)lVar11 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar5 = DAT_043f1798;
  if ((((byte)local_570 & 1) != 0) && (local_560 != (undefined1 *)0x0)) {
    lVar22 = tpidr_el0;
    plVar24 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar24 = plVar5;
    }
    uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar24,local_560,0,8);
        goto LAB_00f65e0c;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_560,0,8);
  }
LAB_00f65e0c:
  memset(local_2f0,0,0x280);
  pcVar25 = *(char **)(lVar11 + 0x60);
  sVar12 = strlen(pcVar25);
  sVar14 = 10;
  if (sVar12 < 0xb) {
    sVar14 = sVar12;
  }
  if (sVar14 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar14);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  lVar22 = lVar11 + 8;
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  puVar26 = &LAB_00f6ac60;
  if (uVar9 != 0) {
    puVar26 = &LAB_00f6ac28;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar20 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar14 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar14 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar12 == sVar14) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(undefined1 **)(lVar11 + 0x30) = puVar26;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            uVar23 = 0;
            *(undefined1 **)(lVar11 + 0xa8) = puVar26;
            goto LAB_00f65f30;
          }
          *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar11 + 0x38) = puVar26;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_00f65f30;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_2f0[0] = pcVar25;
  local_2f0[1] = puVar26;
LAB_00f65f30:
  pcVar25 = *(char **)(lVar11 + 0x68);
  sVar12 = strlen(pcVar25);
  sVar14 = 10;
  if (sVar12 < 0xb) {
    sVar14 = sVar12;
  }
  if (sVar14 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar14);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00f6ae80;
  if (uVar9 != 0) {
    pcVar1 = (code *)&LAB_00f6ac98;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar20 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar14 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar14 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar12 == sVar14) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 0x13) {
        *(code **)(lVar11 + 0xa8) = pcVar1;
        goto LAB_00f66010;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar1;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_00f66010;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2f0[uVar23 * 2] = pcVar25;
  local_2f0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f66010:
  pcVar25 = *(char **)(lVar11 + 0x78);
  sVar12 = strlen(pcVar25);
  sVar14 = 10;
  if (sVar12 < 0xb) {
    sVar14 = sVar12;
  }
  if (sVar14 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar14);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar18 = "\x01";
  if (uVar9 != 0) {
    pcVar18 = "\x01";
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar20 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar14 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar14 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar12 == sVar14) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(char **)(lVar11 + 0x30) = pcVar18;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(char **)(lVar11 + 0xa8) = pcVar18;
            goto LAB_00f66294;
          }
          *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(char **)(lVar11 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_00f66294;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2f0[uVar23 * 2] = pcVar25;
  local_2f0[uVar23 * 2 + 1] = pcVar18;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f66294:
  pcVar25 = *(char **)(lVar11 + 0x80);
  sVar12 = strlen(pcVar25);
  sVar14 = 10;
  if (sVar12 < 0xb) {
    sVar14 = sVar12;
  }
  if (sVar14 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar14);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00f6ec74;
  if (uVar9 != 0) {
    pcVar1 = (code *)&LAB_00f6e9d4;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar20 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar14 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar14 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar12 == sVar14) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar1;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xa8) = pcVar1;
            goto LAB_00f663d4;
          }
          *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_00f663d4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2f0[uVar23 * 2] = pcVar25;
  local_2f0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f663d4:
  pcVar25 = *(char **)(lVar11 + 0x88);
  sVar12 = strlen(pcVar25);
  sVar14 = 10;
  if (sVar12 < 0xb) {
    sVar14 = sVar12;
  }
  if (sVar14 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar14);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00f6ef28;
  if (uVar9 != 0) {
    pcVar1 = FUN_00f6eccc;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar20 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar14 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar14 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar12 == sVar14) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar1;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xa8) = pcVar1;
            goto LAB_00f66514;
          }
          *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_00f66514;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2f0[uVar23 * 2] = pcVar25;
  local_2f0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f66514:
  pcVar25 = *(char **)(lVar11 + 0x90);
  sVar12 = strlen(pcVar25);
  sVar14 = 10;
  if (sVar12 < 0xb) {
    sVar14 = sVar12;
  }
  if (sVar14 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar14);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00f6f1a8;
  if (uVar9 != 0) {
    pcVar1 = FUN_00f6ef80;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar20 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar14 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar14 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar12 == sVar14) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar1;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xa8) = pcVar1;
            goto LAB_00f66654;
          }
          *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_00f66654;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2f0[uVar23 * 2] = pcVar25;
  local_2f0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f66654:
  pcVar25 = *(char **)(lVar11 + 0x98);
  sVar12 = strlen(pcVar25);
  sVar14 = 10;
  if (sVar12 < 0xb) {
    sVar14 = sVar12;
  }
  if (sVar14 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar14);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = (code *)&LAB_00f6f378;
  if (uVar9 != 0) {
    pcVar1 = FUN_00f6f200;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar20 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar14 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar14 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar12 == sVar14) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar1;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xa8) = pcVar1;
            goto LAB_00f66794;
          }
          *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_00f66794;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2f0[uVar23 * 2] = pcVar25;
  local_2f0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00f66794:
  pcVar25 = *(char **)(lVar11 + 0xa0);
  sVar12 = strlen(pcVar25);
  sVar14 = 10;
  if (sVar12 < 0xb) {
    sVar14 = sVar12;
  }
  if (sVar14 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar14);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00f6f614;
  if (uVar9 != 0) {
    pcVar1 = FUN_00f6f3d0;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar20 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar14 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar14 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar12 == sVar14) &&
       (iVar7 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar1;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xa8) = pcVar1;
            uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf0);
            goto joined_r0x00f66888;
          }
          *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf0) = *(ulong *)(lVar11 + 0xf0) | 1L << (uVar21 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf0);
      goto joined_r0x00f66888;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2f0[uVar23 * 2] = pcVar25;
  local_2f0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf0);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x00f66888:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf0);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf0);
  }
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    local_2f0[uVar23 * 2] = pcVar25;
    local_2f0[uVar23 * 2 + 1] = &LAB_00f70120;
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf0);
    uVar23 = (ulong)((int)uVar23 + 1);
  }
  uVar21 = uVar23;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    uVar21 = (ulong)((int)uVar23 + 1);
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    local_2f0[uVar23 * 2] = pcVar25;
    local_2f0[uVar23 * 2 + 1] = "\x05\x04";
  }
  uVar23 = uVar21;
  if (*(long *)(lVar11 + 0xa8) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar18 = *(char **)(lVar11 + 0xa8);
    uVar23 = (ulong)((int)uVar21 + 1);
    local_2f0[uVar21 * 2] = pcVar25;
    local_2f0[uVar21 * 2 + 1] = pcVar18;
  }
  local_2f0[uVar23 * 2] = (char *)0x0;
  local_2f0[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_570,local_2f0,0x280);
  memcpy(asStack_7f0,local_2f0,0x280);
  lVar27 = FUN_008cca50();
  lVar13 = uVar23 - 1;
  pcVar25 = local_2f0[lVar13 * 2];
  sVar14 = strlen(pcVar25);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) == 0) {
    sVar12 = (size_t)(*(byte *)(lVar27 + 0x1c8) >> 1);
  }
  else {
    sVar12 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar14 == sVar12) &&
     (iVar7 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar7 == 0)) {
    auStack_580[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_56f + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7f0 + lVar13 * 0x10) = local_2f0[lVar13 * 2];
  *(undefined1 **)(asStack_7f0 + (lVar13 * 2 + 1) * 8) = &LAB_00f6f670;
  FUN_00151fe0(param_2,0,2);
  local_7f8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_800 = param_2;
  if (((DAT_043b58b8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b58b8), iVar7 != 0)) {
    FUN_00f6a400();
    FUN_00100250(PTR__string_04379718,&DAT_043b58a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b58b8);
  }
  uVar8 = local_7f8[0];
  uVar21 = (ulong)(DAT_043b58a0 >> 1);
  if ((DAT_043b58a0 & 1) == 0) {
    puVar16 = &DAT_043b58a1;
  }
  else {
    puVar16 = DAT_043b58b0;
    uVar21 = DAT_043b58a8;
  }
  FUN_001514f0(param_2,puVar16,uVar21);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00f6f6c0,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar15 = asStack_7f0;
      FUN_00f68644();
      pbVar20 = &DAT_043b5808;
      puVar16 = &DAT_043b5809;
      puVar19 = &DAT_043b5818;
    }
    else if (lVar27 == 0) {
      psVar15 = &local_570;
      FUN_00f68450();
      puVar16 = &DAT_043b5791;
      puVar19 = &DAT_043b57a0;
      pbVar20 = &DAT_043b5790;
    }
    else {
      psVar15 = (string *)local_2f0;
      FUN_00f68838();
      puVar16 = &DAT_043b5881;
      puVar19 = &DAT_043b5890;
      pbVar20 = &DAT_043b5880;
    }
    if ((*pbVar20 & 1) != 0) {
      puVar16 = (undefined *)*puVar19;
    }
    FUN_00154450(param_2,puVar16);
    local_808 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    local_810 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_840,&local_800,local_808);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar15,2);
    uVar8 = local_808;
    if (*(long *)(lVar11 + 0xd8) == 0) {
      lVar13 = *(long *)(lVar11 + 0xe0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
      lVar13 = *(long *)(lVar11 + 0xe0);
      uVar8 = local_808;
    }
    local_808 = uVar8;
    if (lVar13 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_808;
    uVar17 = *(undefined8 *)(lVar11 + 0xb8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_808;
    uVar17 = *(undefined8 *)(lVar11 + 0xc0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_840,&local_810,local_808);
    }
    else {
      local_840 = &LAB_00f6f7b0;
      uStack_838 = 0;
      local_830 = lVar11;
      lStack_828 = lVar22;
      FUN_00f6f710(param_2,1,&local_840,local_808);
      local_840 = &LAB_00f6f7b4;
      uStack_838 = 0;
      local_830 = lVar11;
      lStack_828 = lVar22;
      FUN_00f6f710(param_2,2,&local_840,local_808);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_840,&local_800,uVar8);
    if (*(undefined1 **)(lVar11 + 0xb0) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0xe8) == '\0') goto LAB_00f66cac;
LAB_00f66f6c:
      local_840 = &LAB_00f6f7b0;
      uStack_838 = 0;
      local_830 = lVar11;
      lStack_828 = lVar22;
      FUN_00f6f710(param_2,1,&local_840,uVar8);
      local_840 = &LAB_00f6f7b4;
      uStack_838 = 0;
      local_830 = lVar11;
      lStack_828 = lVar22;
      FUN_00f6f710(param_2,2,&local_840,uVar8);
      if (param_2 == 0) goto LAB_00f66fc0;
LAB_00f66cb4:
      uVar10 = local_808;
      FUN_00150260(param_2,uVar8);
    }
    else {
      uStack_838 = 0;
      local_840 = *(undefined1 **)(lVar11 + 0xb0);
      local_830 = lVar11;
      lStack_828 = lVar22;
      FUN_00f6f710(param_2,4,&local_840,uVar8);
      if (*(char *)(lVar11 + 0xe8) != '\0') goto LAB_00f66f6c;
LAB_00f66cac:
      if (param_2 != 0) goto LAB_00f66cb4;
LAB_00f66fc0:
      uVar10 = local_808;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_810,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_00f68a78();
      puVar16 = DAT_043b5908;
      if ((DAT_043b58f8 & 1) == 0) {
        puVar16 = &DAT_043b58f9;
      }
      FUN_00154450(param_2,puVar16);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_840._0_4_ = 0x1e;
      FUN_008fe304(&local_810,param_2,&local_840,&local_800,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar11);
      FUN_00155a20(param_2,local_2f0,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
      FUN_008fe304(&local_810,param_2,&local_840,&local_800,uVar10);
      local_840 = *(undefined1 **)(lVar11 + 0xb0);
      if (local_840 != (undefined1 *)0x0) {
        uStack_838 = 0;
        local_830 = lVar11;
        lStack_828 = lVar22;
        FUN_00f6f710(param_2,4,&local_840,uVar10);
      }
      local_840 = &LAB_00f6f878;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a788c0;
      local_830 = lVar11;
      lStack_828 = lVar22;
      FUN_00f6f7c0(param_2,1,&local_840,uVar10);
      local_840 = &LAB_00f6f87c;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a788c0;
      local_830 = lVar11;
      lStack_828 = lVar22;
      FUN_00f6f7c0(param_2,2,&local_840,uVar10);
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


