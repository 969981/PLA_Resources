/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020ac89c; name: FUN_020ac89c
 */


void FUN_020ac89c(long param_1,long param_2)

{
  ulong *puVar1;
  code *__maxlen;
  size_t sVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  string *psVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  long *plVar29;
  undefined1 *local_b40;
  undefined8 uStack_b38;
  long local_b30;
  long lStack_b28;
  undefined8 local_b20;
  undefined *puStack_b18;
  long local_b10;
  undefined4 local_b08;
  long local_b00;
  undefined4 local_af8 [2];
  long alStack_af0 [110];
  long alStack_780 [112];
  long alStack_400 [2];
  undefined8 local_3f0;
  code *local_3e8;
  ulong local_3e0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043d9420 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d9420), iVar7 != 0)) {
    local_3e0 = 0;
    local_3e8 = (code *)0x0;
    local_3f0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437d018 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_0437d018);
      puVar16 = PTR_DAT_0437d020;
      if (iVar7 != 0) {
        FUN_00ef79c0(PTR_DAT_0437d020);
        FUN_00100250(PTR__string_04379718,puVar16,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437d018);
      }
    }
    pcVar28 = (char *)FUN_020aa5bc(&local_3f0,PTR_DAT_0437d020);
    psVar15 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043d9408,psVar15);
    uVar26 = local_3e0;
    plVar29 = DAT_043f1798;
    if ((((ulong)local_3f0 & 1) != 0) && (local_3e0 != 0)) {
      lVar12 = tpidr_el0;
      plVar27 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar27 = plVar29;
      }
      uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar27,uVar26,0,8);
          goto LAB_020af2b4;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,uVar26,0,8);
    }
LAB_020af2b4:
    FUN_00100250(PTR__string_04379718,&DAT_043d9408,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d9420);
  }
  std::string::string((string *)&local_3f0,(string *)&DAT_043d9408);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d9400);
  pcVar21 = (code *)((ulong)local_3f0 >> 1 & 0x7f);
  if (((ulong)local_3f0 & 1) != 0) {
    pcVar21 = local_3e8;
  }
  std::string::append((ulong)&local_3f0,(char)iVar7);
  bVar6 = ((ulong)local_3f0 & 1) == 0;
  uVar26 = local_3e0;
  if (bVar6) {
    uVar26 = (long)&local_3f0 + 1;
  }
  __maxlen = (code *)((ulong)local_3f0 >> 1 & 0x7f);
  if (!bVar6) {
    __maxlen = local_3e8;
  }
  iVar7 = snprintf((char *)(pcVar21 + (uVar26 - 1)),(size_t)__maxlen,"%d",(ulong)DAT_043d9400);
  DAT_043d9400 = DAT_043d9400 + 1;
  pbVar11 = (byte *)FUN_020afb90(iVar7);
  if ((*pbVar11 & 1) == 0) {
    pbVar11 = pbVar11 + 1;
    if (((ulong)local_3f0 & 1) == 0) goto LAB_020acf54;
LAB_020ac984:
    uVar26 = local_3e0;
  }
  else {
    pbVar11 = *(byte **)(pbVar11 + 0x10);
    if (((ulong)local_3f0 & 1) != 0) goto LAB_020ac984;
LAB_020acf54:
    uVar26 = (ulong)&local_3f0 | 1;
  }
  if (((DAT_043d9450 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d9450), iVar7 != 0)) {
    DAT_043d9448 = 0x2d0;
    __cxa_guard_release(&DAT_043d9450);
  }
  if (((DAT_043d9460 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d9460), iVar7 != 0)) {
    DAT_043d9458 = 0x2d7;
    __cxa_guard_release(&DAT_043d9460);
  }
  uVar23 = DAT_043d9448;
  lVar12 = FUN_00153520(param_1,DAT_043d9448);
  if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x2d0)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043d9458;
    lVar12 = FUN_00153520(param_1,DAT_043d9458);
    if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x2d0)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_020afe20();
      if ((DAT_043d9468 & 1) == 0) {
        puVar17 = &DAT_043d9469;
      }
      else {
        puVar17 = DAT_043d9478;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar17);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar12 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar12;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar12 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar4 = 0;
      if (uVar25 != 0) {
        uVar4 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar4 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar3;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_FUN_0425b3d0;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x270);
  iVar7 = FUN_00154450(param_1,uVar26);
  if (iVar7 != 0) {
    FUN_001516f0(param_1,&LAB_020afde0,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar8 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar8);
  }
  FUN_001522a0(param_1,pbVar11);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,pbVar11);
  lVar12 = FUN_001511d0(param_1,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  uVar26 = local_3e0;
  plVar29 = DAT_043f1798;
  if ((((ulong)local_3f0 & 1) != 0) && (local_3e0 != 0)) {
    lVar24 = tpidr_el0;
    plVar27 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar27 = plVar29;
    }
    uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar24 + 0x38d480)) {
        FUN_02bcc824(plVar27,uVar26,0,8);
        goto LAB_020acbfc;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,uVar26,0,8);
  }
LAB_020acbfc:
  memset(&local_3f0,0,0x380);
  pcVar28 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar18 = lVar12 + 8;
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020aaaa8;
  if (uVar9 != 0) {
    pcVar21 = FUN_020aa8fc;
  }
  puVar1 = (ulong *)(lVar12 + 0x2c8);
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 0x13) {
        uVar23 = 0;
        *(code **)(lVar12 + 0x280) = pcVar21;
        goto LAB_020acd00;
      }
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020acd00;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  uVar23 = 1;
  local_3f0 = pcVar28;
  local_3e8 = pcVar21;
LAB_020acd00:
  puVar5 = PTR_DAT_04383550;
  *(undefined1 *)(lVar12 + 0x58) = 1;
  puVar16 = PTR_DAT_0437dcc8;
  *puVar5 = 1;
  *puVar16 = 1;
  *(undefined1 **)(lVar12 + 0x2b0) = &LAB_020b0250;
  pcVar28 = *(char **)(lVar12 + 0x70);
  *(undefined1 **)(lVar12 + 0x2b8) = &LAB_020b03ac;
  *(undefined1 **)(lVar12 + 0x2a0) = &LAB_020b05b0;
  *(undefined1 **)(lVar12 + 0x2a8) = &LAB_020b07d0;
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020aae28;
  if (uVar9 != 0) {
    pcVar21 = FUN_020aab3c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020acfac;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020acfac;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020acfac:
  pcVar28 = *(char **)(lVar12 + 0x88);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020aaf34;
  if (uVar9 != 0) {
    pcVar21 = FUN_020aaeb4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ad0f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ad0f0;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ad0f0:
  pcVar28 = *(char **)(lVar12 + 0xa0);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020ab08c;
  if (uVar9 != 0) {
    pcVar21 = FUN_020aaffc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ad234;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ad234;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ad234:
  pcVar28 = *(char **)(lVar12 + 0xb8);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020ab278;
  if (uVar9 != 0) {
    pcVar21 = FUN_020ab13c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ad378;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ad378;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ad378:
  pcVar28 = *(char **)(lVar12 + 0xd0);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020ab5c4;
  if (uVar9 != 0) {
    pcVar21 = FUN_020ab3a4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ad4bc;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ad4bc;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ad4bc:
  pcVar28 = *(char **)(lVar12 + 0xe8);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020ab6ac;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020ab650;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ad600;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ad600;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ad600:
  pcVar28 = *(char **)(lVar12 + 0x100);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020ab764;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020ab6f4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ad744;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ad744;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ad744:
  pcVar28 = *(char **)(lVar12 + 0x118);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020ab988;
  if (uVar9 != 0) {
    pcVar21 = FUN_020ab7ac;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ad888;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ad888;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ad888:
  pcVar28 = *(char **)(lVar12 + 0x130);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020abb30;
  if (uVar9 != 0) {
    pcVar21 = FUN_020aba14;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ad9cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ad9cc;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ad9cc:
  pcVar28 = *(char **)(lVar12 + 0x148);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020abd64;
  if (uVar9 != 0) {
    pcVar21 = FUN_020abbbc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020adb10;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020adb10;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020adb10:
  pcVar28 = *(char **)(lVar12 + 0x160);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020abe80;
  if (uVar9 != 0) {
    pcVar21 = FUN_020abdf0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020adc54;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020adc54;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020adc54:
  pcVar28 = *(char **)(lVar12 + 0x178);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020abf70;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020abec8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020add98;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020add98;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020add98:
  pcVar28 = *(char **)(lVar12 + 400);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020ac0bc;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020ac04c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020adedc;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020adedc;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020adedc:
  pcVar28 = *(char **)(lVar12 + 0x1a8);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020ac174;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020ac104;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ae020;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ae020;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ae020:
  pcVar28 = *(char **)(lVar12 + 0x1c0);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020ac23c;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020ac1bc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ae164;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ae164;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ae164:
  pcVar28 = *(char **)(lVar12 + 0x1d8);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020ac314;
  if (uVar9 != 0) {
    pcVar21 = FUN_020ac284;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ae2a8;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ae2a8;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ae2a8:
  pcVar28 = *(char **)(lVar12 + 0x1f0);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = FUN_020ac3f8;
  if (uVar9 != 0) {
    pcVar21 = FUN_020ac35c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ae3ec;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ae3ec;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ae3ec:
  pcVar28 = *(char **)(lVar12 + 0x208);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020ac528;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020ac4b4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ae530;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ae530;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ae530:
  pcVar28 = *(char **)(lVar12 + 0x220);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020ac5e4;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020ac570;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ae674;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ae674;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ae674:
  pcVar28 = *(char **)(lVar12 + 0x238);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020ac6b0;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020ac62c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ae7b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ae7b8;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ae7b8:
  pcVar28 = *(char **)(lVar12 + 0x250);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020ac788;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020ac6f8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0x280) = pcVar21;
            goto LAB_020ae8fc;
          }
          *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
      goto LAB_020ae8fc;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020ae8fc:
  pcVar28 = *(char **)(lVar12 + 0x268);
  sVar13 = strlen(pcVar28);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar28,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar26 = 0;
  pcVar21 = (code *)&LAB_020ac854;
  if (uVar9 != 0) {
    pcVar21 = (code *)&LAB_020ac7d0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar11 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar28);
    sVar2 = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar11 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(undefined1 *)(lVar12 + 0x58) = 1;
        *(code **)(lVar12 + 0x30) = pcVar21;
        *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
        goto LAB_020aea68;
      }
      if (iVar7 == 2) {
        *(undefined1 *)(lVar12 + 0x58) = 1;
        *(code **)(lVar12 + 0x38) = pcVar21;
        *(ulong *)(lVar12 + 0x2c8) = *(ulong *)(lVar12 + 0x2c8) | 1L << (uVar26 & 0x3f);
        uVar9 = (uint)*puVar1;
        goto joined_r0x020aea1c;
      }
      if (iVar7 == 0x13) {
        *(code **)(lVar12 + 0x280) = pcVar21;
        uVar9 = (uint)*puVar1;
        goto joined_r0x020aea1c;
      }
      *puVar1 = *puVar1 | 1L << (uVar26 & 0x3f);
      break;
    }
    uVar26 = uVar26 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar26 != 0x20);
  alStack_400[uVar23 * 2 + 2] = (long)pcVar28;
  (&local_3e8)[uVar23 * 2] = pcVar21;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020aea68:
  uVar9 = (uint)*puVar1;
joined_r0x020aea1c:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*puVar1;
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*puVar1;
  }
  uVar26 = uVar23;
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar24 = FUN_008cca50();
    if ((*(byte *)(lVar24 + 0x180) & 1) == 0) {
      lVar24 = lVar24 + 0x181;
    }
    else {
      lVar24 = *(long *)(lVar24 + 400);
    }
    uVar26 = (ulong)((int)uVar23 + 1);
    alStack_400[uVar23 * 2 + 2] = lVar24;
    (&local_3e8)[uVar23 * 2] = (code *)PTR_LAB_0437cff0;
    uVar9 = (uint)*puVar1;
  }
  uVar23 = uVar26;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar24 = FUN_008cca50();
    if ((*(byte *)(lVar24 + 0x288) & 1) == 0) {
      lVar24 = lVar24 + 0x289;
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x298);
    }
    uVar23 = (ulong)((int)uVar26 + 1);
    alStack_400[uVar26 * 2 + 2] = lVar24;
    (&local_3e8)[uVar26 * 2] = (code *)PTR_LAB_0437cff8;
  }
  uVar26 = uVar23;
  if (*(long *)(lVar12 + 0x280) != 0) {
    lVar24 = FUN_008cca50();
    if ((*(byte *)(lVar24 + 0x1c8) & 1) == 0) {
      lVar24 = lVar24 + 0x1c9;
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar12 + 0x280);
    uVar26 = (ulong)((int)uVar23 + 1);
    alStack_400[uVar23 * 2 + 2] = lVar24;
    (&local_3e8)[uVar23 * 2] = pcVar21;
  }
  alStack_400[uVar26 * 2 + 2] = 0;
  (&local_3e8)[uVar26 * 2] = (code *)0x0;
  memcpy(alStack_780 + 2,&local_3f0,0x380);
  memcpy(alStack_af0,&local_3f0,0x380);
  lVar24 = FUN_008cca50();
  lVar14 = uVar26 - 1;
  pcVar28 = (char *)alStack_400[lVar14 * 2 + 2];
  sVar13 = strlen(pcVar28);
  sVar2 = (ulong)(*(byte *)(lVar24 + 0x1c8) >> 1);
  if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar24 + 0x1d0);
  }
  if ((sVar13 == sVar2) &&
     (iVar7 = std::string::compare(lVar24 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
     iVar7 == 0)) {
    alStack_780[lVar14 * 2 + 2] = 0;
    alStack_780[lVar14 * 2 + 3] = 0;
  }
  alStack_af0[lVar14 * 2] = alStack_400[lVar14 * 2 + 2];
  alStack_af0[lVar14 * 2 + 1] = (long)&LAB_020af680;
  FUN_00151fe0(param_1,0,2);
  local_af8[0] = FUN_0014feb0(param_1,0xffffffff);
  local_b00 = param_1;
  if ((*PTR_DAT_0437d018 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_0437d018);
    puVar16 = PTR_DAT_0437d020;
    if (iVar7 != 0) {
      FUN_00ef79c0(PTR_DAT_0437d020);
      FUN_00100250(PTR__string_04379718,puVar16,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d018);
    }
  }
  uVar8 = local_af8[0];
  uVar26 = *(ulong *)(PTR_DAT_0437d020 + 8);
  puVar16 = *(undefined **)(PTR_DAT_0437d020 + 0x10);
  if ((*PTR_DAT_0437d020 & 1) == 0) {
    puVar16 = PTR_DAT_0437d020 + 1;
    uVar26 = (ulong)((byte)*PTR_DAT_0437d020 >> 1);
  }
  FUN_001514f0(param_1,puVar16,uVar26);
  FUN_00152550(param_1,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_020af6d0,0);
  FUN_00152550(param_1,uVar8,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      plVar29 = alStack_af0;
      pbVar11 = (byte *)FUN_00ef81d0();
    }
    else if (lVar24 == 0) {
      plVar29 = alStack_780 + 2;
      pbVar11 = (byte *)FUN_00ef6274();
    }
    else {
      plVar29 = &local_3f0;
      pbVar11 = (byte *)FUN_00ef776c();
    }
    pbVar22 = *(byte **)(pbVar11 + 0x10);
    if ((*pbVar11 & 1) == 0) {
      pbVar22 = pbVar11 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_b08 = FUN_0014feb0(param_1,0xffffffff);
    local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
    local_b10 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_b40,&local_b00,local_b08);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00155a20(param_1,plVar29,2);
    uVar8 = local_b08;
    if (*(long *)(lVar12 + 0x2b0) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar8,"class_check");
    }
    uVar8 = local_b08;
    if (*(long *)(lVar12 + 0x2b8) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar8,"class_cast");
    }
    uVar8 = local_b08;
    uVar20 = *(undefined8 *)(lVar12 + 0x290);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar8,&DAT_03955ac7);
    uVar8 = local_b08;
    uVar20 = *(undefined8 *)(lVar12 + 0x298);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar8,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_b40,&local_b10,local_b08);
    }
    else {
      local_b40 = &LAB_020af7c0;
      uStack_b38 = 0;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_020af720(param_1,1,&local_b40,local_b08);
      local_b40 = &LAB_020afacc;
      uStack_b38 = 0;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_020af720(param_1,2,&local_b40,local_b08);
    }
    FUN_00151fe0(param_1,0,3);
    uVar8 = FUN_0014feb0(param_1,0xffffffff);
    local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_b40,&local_b00,uVar8);
    if (*(undefined1 **)(lVar12 + 0x288) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x2c0) == '\0') goto LAB_020aee5c;
LAB_020af094:
      local_b40 = &LAB_020af7c0;
      uStack_b38 = 0;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_020af720(param_1,1,&local_b40,uVar8);
      local_b40 = &LAB_020afacc;
      uStack_b38 = 0;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_020af720(param_1,2,&local_b40,uVar8);
      if (param_1 == 0) goto LAB_020af0e8;
LAB_020aee64:
      uVar10 = local_b08;
      FUN_00150260(param_1,uVar8);
    }
    else {
      uStack_b38 = 0;
      local_b40 = *(undefined1 **)(lVar12 + 0x288);
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_020af720(param_1,4,&local_b40,uVar8);
      if (*(char *)(lVar12 + 0x2c0) != '\0') goto LAB_020af094;
LAB_020aee5c:
      if (param_1 != 0) goto LAB_020aee64;
LAB_020af0e8:
      uVar10 = local_b08;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar10);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_b10,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_020a9d8c();
      if ((DAT_043d93e0 & 1) == 0) {
        puVar16 = &DAT_043d93e1;
      }
      else {
        puVar16 = DAT_043d93f0;
      }
      FUN_00154450(param_1,puVar16);
      uVar8 = FUN_0014feb0(param_1,0xffffffff);
      local_b40._0_4_ = 0x1e;
      FUN_008fe304(&local_b10,param_1,&local_b40,&local_b00,uVar8);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar12);
      FUN_00155a20(param_1,&local_3f0,2);
      FUN_00151fe0(param_1,0,3);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
      FUN_008fe304(&local_b10,param_1,&local_b40,&local_b00,uVar10);
      local_b40 = *(undefined1 **)(lVar12 + 0x288);
      if (local_b40 != (undefined1 *)0x0) {
        uStack_b38 = 0;
        local_b30 = lVar12;
        lStack_b28 = lVar18;
        FUN_020af720(param_1,4,&local_b40,uVar10);
      }
      local_b40 = &LAB_020afb88;
      uStack_b38 = 0;
      local_b20 = 0;
      puStack_b18 = &DAT_03a7d310;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_020afad0(param_1,1,&local_b40,uVar10);
      local_b40 = &LAB_020afb8c;
      uStack_b38 = 0;
      local_b20 = 0;
      puStack_b18 = &DAT_03a7d310;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_020afad0(param_1,2,&local_b40,uVar10);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar10);
      }
      FUN_00152ae0(param_1,uVar8);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_af8[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


