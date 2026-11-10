/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012c57f4; name: FUN_012c57f4
 */


undefined8 FUN_012c57f4(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
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
  undefined1 *local_7b0;
  undefined8 uStack_7a8;
  long local_7a0;
  long lStack_798;
  undefined8 local_790;
  undefined *puStack_788;
  long local_780;
  undefined4 local_778;
  long local_770;
  undefined4 local_768 [2];
  string asStack_760 [576];
  undefined8 auStack_520 [2];
  string local_510;
  undefined1 auStack_50f [7];
  size_t local_508;
  undefined1 *local_500;
  char *apcStack_2d0 [2];
  char *local_2c0 [2];
  long local_2b0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043c1428 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1428), iVar8 != 0)) {
    local_2b0 = 0;
    local_2c0[1] = (undefined1 *)0x0;
    local_2c0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043c1390 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1390), iVar8 != 0)) {
      FUN_012c9770();
      FUN_00100250(PTR__string_04379718,&DAT_043c1378,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c1390);
    }
    pcVar25 = (char *)FUN_012c8b64(local_2c0,&DAT_043c1378);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043c1410,psVar15);
    lVar12 = local_2b0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2c0[0] & 1) != 0) && (local_2b0 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar6;
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
          FUN_02bcc824(plVar24,lVar12,0,8);
          goto LAB_012c6afc;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_012c6afc:
    FUN_00100250(PTR__string_04379718,&DAT_043c1410,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c1428);
  }
  std::string::string(&local_510,(string *)&DAT_043c1410);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043c1408);
  sVar2 = (ulong)((byte)local_510 >> 1);
  if (((byte)local_510 & 1) != 0) {
    sVar2 = local_508;
  }
  std::string::append((ulong)&local_510,(char)iVar8);
  if (((byte)local_510 & 1) == 0) {
    puVar26 = auStack_50f;
    local_508 = (size_t)((byte)local_510 >> 1);
  }
  else {
    puVar26 = local_500;
  }
  snprintf(puVar26 + (sVar2 - 1),local_508,"%d",(ulong)DAT_043c1408);
  DAT_043c1408 = DAT_043c1408 + 1;
  if (((DAT_043c1448 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1448), iVar8 != 0)) {
    local_2b0 = 0;
    local_2c0[1] = (undefined1 *)0x0;
    local_2c0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043c1390 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1390), iVar8 != 0)) {
      FUN_012c9770();
      FUN_00100250(PTR__string_04379718,&DAT_043c1378,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c1390);
    }
    pcVar25 = (char *)FUN_012c8b64(local_2c0,&DAT_043c1378);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043c1430,psVar15);
    lVar12 = local_2b0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2c0[0] & 1) != 0) && (local_2b0 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar6;
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
          FUN_02bcc824(plVar24,lVar12,0,8);
          goto LAB_012c6c50;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_012c6c50:
    FUN_00100250(PTR__string_04379718,&DAT_043c1430,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c1448);
  }
  puVar16 = DAT_043c1440;
  if ((DAT_043c1430 & 1) == 0) {
    puVar16 = &DAT_043c1431;
  }
  if (((byte)local_510 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_510 | 1);
  }
  else {
    puVar26 = local_500;
  }
  if (((DAT_043c1458 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1458), iVar8 != 0)) {
    DAT_043c1450 = 0xf8;
    __cxa_guard_release(&DAT_043c1458);
  }
  if (((DAT_043c1468 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1468), iVar8 != 0)) {
    DAT_043c1460 = 0xff;
    __cxa_guard_release(&DAT_043c1468);
  }
  uVar21 = DAT_043c1450;
  lVar12 = FUN_00153520(param_2,DAT_043c1450);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xf8)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043c1460;
    lVar12 = FUN_00153520(param_2,DAT_043c1460);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xf8)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_012ca270();
      puVar3 = DAT_043c1480;
      if ((DAT_043c1470 & 1) == 0) {
        puVar3 = &DAT_043c1471;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar17 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar17;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar12;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar22;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar19[2];
    uVar21 = *(ulong *)(lVar12 + 8);
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
    *(undefined8 **)(puVar19[1] + uVar21 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar17;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_04203260;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0x98);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_012ca230,0);
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
  FUN_001522a0(param_2,puVar16);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar16);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_510 & 1) != 0) && (local_500 != (undefined1 *)0x0)) {
    lVar22 = tpidr_el0;
    plVar24 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar24 = plVar6;
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
        FUN_02bcc824(plVar24,local_500,0,8);
        goto LAB_012c5b60;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_500,0,8);
  }
LAB_012c5b60:
  memset(local_2c0,0,0x250);
  pcVar25 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar22 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  puVar26 = &LAB_012c9bc0;
  if (uVar10 != 0) {
    puVar26 = &LAB_012c9b88;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(undefined1 **)(lVar12 + 0x30) = puVar26;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar23 = 0;
            *(undefined1 **)(lVar12 + 0xa8) = puVar26;
            goto LAB_012c5c80;
          }
          *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar26;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_012c5c80;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_2c0[0] = pcVar25;
  local_2c0[1] = puVar26;
LAB_012c5c80:
  pcVar25 = *(char **)(lVar12 + 0x68);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_012c9de0;
  if (uVar10 != 0) {
    pcVar1 = (code *)&LAB_012c9bf8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0xa8) = pcVar1;
        goto LAB_012c5d60;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_012c5d60;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2c0[uVar23 * 2] = pcVar25;
  local_2c0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012c5d60:
  pcVar25 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_012c9e84;
  if (uVar10 != 0) {
    pcVar1 = FUN_012c9e34;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xa8) = pcVar1;
            goto LAB_012c5ff8;
          }
          *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_012c5ff8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2c0[uVar23 * 2] = pcVar25;
  local_2c0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012c5ff8:
  pcVar25 = *(char **)(lVar12 + 0x88);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_012c9f24;
  if (uVar10 != 0) {
    pcVar1 = FUN_012c9ed4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xa8) = pcVar1;
            goto LAB_012c6138;
          }
          *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
      goto LAB_012c6138;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2c0[uVar23 * 2] = pcVar25;
  local_2c0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_012c6138:
  pcVar25 = *(char **)(lVar12 + 0x98);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_012c9fc4;
  if (uVar10 != 0) {
    pcVar1 = FUN_012c9f74;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xa8) = pcVar1;
            uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
            goto joined_r0x012c622c;
          }
          *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf0) = *(ulong *)(lVar12 + 0xf0) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
      goto joined_r0x012c622c;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2c0[uVar23 * 2] = pcVar25;
  local_2c0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x012c622c:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    local_2c0[uVar23 * 2] = pcVar25;
    local_2c0[uVar23 * 2 + 1] = &LAB_012ca6b0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xf0);
    uVar23 = (ulong)((int)uVar23 + 1);
  }
  uVar21 = uVar23;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    uVar21 = (ulong)((int)uVar23 + 1);
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    local_2c0[uVar23 * 2] = pcVar25;
    local_2c0[uVar23 * 2 + 1] = &LAB_012ca6a0;
  }
  uVar23 = uVar21;
  if (*(long *)(lVar12 + 0xa8) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar18 = *(char **)(lVar12 + 0xa8);
    uVar23 = (ulong)((int)uVar21 + 1);
    local_2c0[uVar21 * 2] = pcVar25;
    local_2c0[uVar21 * 2 + 1] = pcVar18;
  }
  local_2c0[uVar23 * 2] = (char *)0x0;
  local_2c0[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_510,local_2c0,0x250);
  memcpy(asStack_760,local_2c0,0x250);
  lVar27 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar25 = local_2c0[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar2 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar2) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_520[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_50f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_760 + lVar14 * 0x10) = local_2c0[lVar14 * 2];
  *(undefined1 **)(asStack_760 + (lVar14 * 2 + 1) * 8) = &LAB_012ca020;
  FUN_00151fe0(param_2,0,2);
  local_768[0] = FUN_0014feb0(param_2,0xffffffff);
  local_770 = param_2;
  if (((DAT_043c1390 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c1390), iVar8 != 0)) {
    FUN_012c9770();
    FUN_00100250(PTR__string_04379718,&DAT_043c1378,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c1390);
  }
  uVar9 = local_768[0];
  if ((DAT_043c1378 & 1) == 0) {
    uVar21 = (ulong)(DAT_043c1378 >> 1);
    puVar26 = &DAT_043c1379;
  }
  else {
    uVar21 = DAT_043c1380;
    puVar26 = DAT_043c1388;
  }
  FUN_001514f0(param_2,puVar26,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_012ca070,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar15 = asStack_760;
      FUN_012c7f38();
      pbVar20 = &DAT_043c12e0;
      puVar16 = &DAT_043c12e1;
      puVar19 = &DAT_043c12f0;
    }
    else if (lVar27 == 0) {
      psVar15 = &local_510;
      FUN_012c7d5c();
      puVar16 = &DAT_043c1269;
      puVar19 = &DAT_043c1278;
      pbVar20 = &DAT_043c1268;
    }
    else {
      psVar15 = (string *)local_2c0;
      FUN_012c8114();
      puVar16 = &DAT_043c1359;
      puVar19 = &DAT_043c1368;
      pbVar20 = &DAT_043c1358;
    }
    if ((*pbVar20 & 1) != 0) {
      puVar16 = (undefined *)*puVar19;
    }
    FUN_00154450(param_2,puVar16);
    local_778 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    local_780 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_7b0,&local_770,local_778);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar15,2);
    uVar9 = local_778;
    if (*(long *)(lVar12 + 0xd8) == 0) {
      lVar14 = *(long *)(lVar12 + 0xe0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0xe0);
      uVar9 = local_778;
    }
    local_778 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_778;
    uVar17 = *(undefined8 *)(lVar12 + 0xb8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_778;
    uVar17 = *(undefined8 *)(lVar12 + 0xc0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_7b0,&local_780,local_778);
    }
    else {
      local_7b0 = &LAB_012ca160;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_012ca0c0(param_2,1,&local_7b0,local_778);
      local_7b0 = &LAB_012ca164;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_012ca0c0(param_2,2,&local_7b0,local_778);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_7b0,&local_770,uVar9);
    if (*(undefined1 **)(lVar12 + 0xb0) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0xe8) == '\0') goto LAB_012c6658;
LAB_012c6904:
      local_7b0 = &LAB_012ca160;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_012ca0c0(param_2,1,&local_7b0,uVar9);
      local_7b0 = &LAB_012ca164;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_012ca0c0(param_2,2,&local_7b0,uVar9);
      if (param_2 == 0) goto LAB_012c6954;
LAB_012c6660:
      uVar11 = local_778;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_7a8 = 0;
      local_7b0 = *(undefined1 **)(lVar12 + 0xb0);
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_012ca0c0(param_2,4,&local_7b0,uVar9);
      if (*(char *)(lVar12 + 0xe8) != '\0') goto LAB_012c6904;
LAB_012c6658:
      if (param_2 != 0) goto LAB_012c6660;
LAB_012c6954:
      uVar11 = local_778;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_780,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_012c833c();
      puVar16 = DAT_043c13e0;
      if ((DAT_043c13d0 & 1) == 0) {
        puVar16 = &DAT_043c13d1;
      }
      FUN_00154450(param_2,puVar16);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_780,param_2,&local_7b0,&local_770,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,local_2c0,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_780,param_2,&local_7b0,&local_770,uVar11);
      local_7b0 = *(undefined1 **)(lVar12 + 0xb0);
      if (local_7b0 != (undefined1 *)0x0) {
        uStack_7a8 = 0;
        local_7a0 = lVar12;
        lStack_798 = lVar22;
        FUN_012ca0c0(param_2,4,&local_7b0,uVar11);
      }
      local_7b0 = &LAB_012ca228;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7a770;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_012ca170(param_2,1,&local_7b0,uVar11);
      local_7b0 = &LAB_012ca22c;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7a770;
      local_7a0 = lVar12;
      lStack_798 = lVar22;
      FUN_012ca170(param_2,2,&local_7b0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_768[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


