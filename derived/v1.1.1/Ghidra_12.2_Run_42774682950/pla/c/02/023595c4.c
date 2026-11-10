/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023595c4; name: FUN_023595c4
 */


undefined8 FUN_023595c4(long param_1,long param_2)

{
  code *__maxlen;
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
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
  undefined8 *puVar16;
  byte *pbVar17;
  undefined8 uVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  char *pcVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
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
  long alStack_728 [70];
  long alStack_4f8 [72];
  long alStack_2b8 [2];
  undefined8 local_2a8;
  code *local_2a0;
  ulong local_298;
  
  if (((DAT_043e2350 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e2350), iVar7 != 0)) {
    local_298 = 0;
    local_2a0 = (code *)0x0;
    local_2a8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386700 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04386700);
      puVar4 = PTR_DAT_04386708;
      if (iVar7 != 0) {
        FUN_02355f30(PTR_DAT_04386708);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386700);
      }
    }
    pcVar24 = (char *)FUN_0235c3d4(&local_2a8,PTR_DAT_04386708);
    psVar15 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043e2338,psVar15);
    uVar26 = local_298;
    plVar27 = DAT_043f1798;
    if ((((ulong)local_2a8 & 1) != 0) && (local_298 != 0)) {
      lVar12 = tpidr_el0;
      plVar23 = *(long **)(lVar12 + 0x20);
      if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
        *(long **)(lVar12 + 0x20) = DAT_043f1798;
        plVar23 = plVar27;
      }
      uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar20 & 1) != 0) {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar23,uVar26,0,8);
          goto LAB_0235a778;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,uVar26,0,8);
    }
LAB_0235a778:
    FUN_00100250(PTR__string_04379718,&DAT_043e2338,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2350);
  }
  std::string::string((string *)&local_2a8,(string *)&DAT_043e2338);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e2330);
  pcVar19 = (code *)((ulong)local_2a8 >> 1 & 0x7f);
  if (((ulong)local_2a8 & 1) != 0) {
    pcVar19 = local_2a0;
  }
  std::string::append((ulong)&local_2a8,(char)iVar7);
  bVar6 = ((ulong)local_2a8 & 1) == 0;
  uVar26 = local_298;
  if (bVar6) {
    uVar26 = (long)&local_2a8 + 1;
  }
  __maxlen = (code *)((ulong)local_2a8 >> 1 & 0x7f);
  if (!bVar6) {
    __maxlen = local_2a0;
  }
  iVar7 = snprintf((char *)(pcVar19 + (uVar26 - 1)),(size_t)__maxlen,"%d",(ulong)DAT_043e2330);
  DAT_043e2330 = DAT_043e2330 + 1;
  pbVar11 = (byte *)FUN_02356740(iVar7);
  pbVar17 = *(byte **)(pbVar11 + 0x10);
  if ((*pbVar11 & 1) == 0) {
    pbVar17 = pbVar11 + 1;
  }
  if (((ulong)local_2a8 & 1) == 0) {
    uVar26 = (ulong)&local_2a8 | 1;
  }
  else {
    uVar26 = local_298;
  }
  if (((DAT_043e2360 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e2360), iVar7 != 0)) {
    DAT_043e2358 = 0x100;
    __cxa_guard_release(&DAT_043e2360);
  }
  if (((DAT_043e2370 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e2370), iVar7 != 0)) {
    DAT_043e2368 = 0x107;
    __cxa_guard_release(&DAT_043e2370);
  }
  uVar20 = DAT_043e2358;
  lVar12 = FUN_00153520(param_2,DAT_043e2358);
  if ((uVar20 < ((ulong)(uint)-(int)lVar12 & 7 | 0x100)) ||
     (puVar16 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar16 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar20 = DAT_043e2368;
    lVar12 = FUN_00153520(param_2,DAT_043e2368);
    if ((uVar20 < ((ulong)(uint)-(int)lVar12 & 7 | 0x100)) ||
       (puVar16 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar16 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0235d5f0();
      puVar2 = DAT_043e2388;
      if ((DAT_043e2378 & 1) == 0) {
        puVar2 = &DAT_043e2379;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar16 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar16[1] = uVar18;
  puVar16[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar16[3] = lVar12;
  lVar21 = *(long *)(param_1 + 0x20);
  puVar16[4] = lVar21;
  *(undefined4 *)(puVar16 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar21 != 0) {
    uVar22 = puVar16[2];
    uVar20 = *(ulong *)(lVar12 + 8);
    if ((uVar22 & uVar22 - 1) == 0) {
      uVar20 = uVar22 - 1 & uVar20;
    }
    else if (uVar22 <= uVar20) {
      uVar5 = 0;
      if (uVar22 != 0) {
        uVar5 = uVar20 / uVar22;
      }
      uVar20 = uVar20 - uVar5 * uVar22;
    }
    *(undefined8 **)(puVar16[1] + uVar20 * 8) = puVar16 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar16[10] = 0;
  puVar16[8] = 0;
  puVar16[9] = 0;
  puVar16[6] = uVar18;
  puVar16[7] = uVar3;
  puVar16[8] = *(undefined8 *)(param_1 + 0x40);
  puVar16[9] = *(undefined8 *)(param_1 + 0x48);
  puVar16[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar16 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar16 = &PTR_FUN_0425bce0;
  memcpy(puVar16 + 0xc,(void *)(param_1 + 0x60),0xa0);
  iVar7 = FUN_00154450(param_2,uVar26);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_0235d5b0,0);
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
  FUN_001522a0(param_2,pbVar17);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,pbVar17);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  uVar26 = local_298;
  plVar27 = DAT_043f1798;
  if ((((ulong)local_2a8 & 1) != 0) && (local_298 != 0)) {
    lVar21 = tpidr_el0;
    plVar23 = *(long **)(lVar21 + 0x20);
    if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
      *(long **)(lVar21 + 0x20) = DAT_043f1798;
      plVar23 = plVar27;
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
        FUN_02bcc824(plVar23,uVar26,0,8);
        goto LAB_0235991c;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,uVar26,0,8);
  }
LAB_0235991c:
  memset(&local_2a8,0,0x240);
  pcVar24 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  lVar21 = lVar12 + 8;
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = FUN_0235d17c;
  if (uVar9 != 0) {
    pcVar19 = FUN_0235cfb4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            uVar20 = 0;
            *(code **)(lVar12 + 0xb0) = pcVar19;
            goto LAB_02359b2c;
          }
          *(ulong *)(lVar12 + 0xf8) = *(ulong *)(lVar12 + 0xf8) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      uVar20 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf8) = *(ulong *)(lVar12 + 0xf8) | 1L << (uVar26 & 0x3f);
      goto LAB_02359b2c;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  uVar20 = 1;
  local_2a8 = pcVar24;
  local_2a0 = pcVar19;
LAB_02359b2c:
  pcVar24 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = FUN_0235d254;
  if (uVar9 != 0) {
    pcVar19 = FUN_0235d20c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0xb0) = pcVar19;
            goto LAB_02359c6c;
          }
          *(ulong *)(lVar12 + 0xf8) = *(ulong *)(lVar12 + 0xf8) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf8) = *(ulong *)(lVar12 + 0xf8) | 1L << (uVar26 & 0x3f);
      goto LAB_02359c6c;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  alStack_2b8[uVar20 * 2 + 2] = (long)pcVar24;
  (&local_2a0)[uVar20 * 2] = pcVar19;
  uVar20 = (ulong)((int)uVar20 + 1);
LAB_02359c6c:
  pcVar24 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = FUN_0235d368;
  if (uVar9 != 0) {
    pcVar19 = FUN_0235d29c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar12 + 0xb0) = pcVar19;
            goto LAB_02359dac;
          }
          *(ulong *)(lVar12 + 0xf8) = *(ulong *)(lVar12 + 0xf8) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf8) = *(ulong *)(lVar12 + 0xf8) | 1L << (uVar26 & 0x3f);
      goto LAB_02359dac;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  alStack_2b8[uVar20 * 2 + 2] = (long)pcVar24;
  (&local_2a0)[uVar20 * 2] = pcVar19;
  uVar20 = (ulong)((int)uVar20 + 1);
LAB_02359dac:
  pcVar24 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
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
  if (sVar13 < 0xb && bVar6) {
    uVar9 = (uint)(sVar13 < 10);
  }
  lVar25 = 0;
  uVar26 = 0;
  pcVar19 = FUN_0235d494;
  if (uVar9 != 0) {
    pcVar19 = FUN_0235d434;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar17 = (byte *)(lVar14 + lVar25);
    sVar13 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar26;
      if (iVar7 == 0x13) {
        *(code **)(lVar12 + 0xb0) = pcVar19;
        uVar9 = (uint)*(undefined8 *)(lVar12 + 0xf8);
        goto joined_r0x02359e90;
      }
      if (iVar7 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar12 + 0xf8) = *(ulong *)(lVar12 + 0xf8) | 1L << (uVar26 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xf8) = *(ulong *)(lVar12 + 0xf8) | 1L << (uVar26 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar12 + 0xf8);
      goto joined_r0x02359e90;
    }
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar26 != 0x20);
  alStack_2b8[uVar20 * 2 + 2] = (long)pcVar24;
  (&local_2a0)[uVar20 * 2] = pcVar19;
  uVar9 = (uint)*(undefined8 *)(lVar12 + 0xf8);
  uVar20 = (ulong)((int)uVar20 + 1);
joined_r0x02359e90:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar12 + 0xf8);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar12 + 0xf8);
  }
  uVar26 = uVar20;
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar14 = FUN_008cca50();
    lVar25 = lVar14 + 0x181;
    if ((*(byte *)(lVar14 + 0x180) & 1) != 0) {
      lVar25 = *(long *)(lVar14 + 400);
    }
    uVar26 = (ulong)((int)uVar20 + 1);
    alStack_2b8[uVar20 * 2 + 2] = lVar25;
    (&local_2a0)[uVar20 * 2] = (code *)PTR_LAB_04386740;
    uVar9 = (uint)*(undefined8 *)(lVar12 + 0xf8);
  }
  uVar20 = uVar26;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar14 = FUN_008cca50();
    lVar25 = lVar14 + 0x289;
    if ((*(byte *)(lVar14 + 0x288) & 1) != 0) {
      lVar25 = *(long *)(lVar14 + 0x298);
    }
    uVar20 = (ulong)((int)uVar26 + 1);
    alStack_2b8[uVar26 * 2 + 2] = lVar25;
    (&local_2a0)[uVar26 * 2] = (code *)PTR_LAB_04386748;
  }
  uVar26 = uVar20;
  if (*(long *)(lVar12 + 0xb0) != 0) {
    lVar14 = FUN_008cca50();
    lVar25 = lVar14 + 0x1c9;
    if ((*(byte *)(lVar14 + 0x1c8) & 1) != 0) {
      lVar25 = *(long *)(lVar14 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar12 + 0xb0);
    uVar26 = (ulong)((int)uVar20 + 1);
    alStack_2b8[uVar20 * 2 + 2] = lVar25;
    (&local_2a0)[uVar20 * 2] = pcVar19;
  }
  alStack_2b8[uVar26 * 2 + 2] = 0;
  (&local_2a0)[uVar26 * 2] = (code *)0x0;
  memcpy(alStack_4f8 + 2,&local_2a8,0x240);
  memcpy(alStack_728,&local_2a8,0x240);
  lVar25 = FUN_008cca50();
  lVar14 = uVar26 - 1;
  pcVar24 = (char *)alStack_2b8[lVar14 * 2 + 2];
  sVar13 = strlen(pcVar24);
  sVar1 = (ulong)(*(byte *)(lVar25 + 0x1c8) >> 1);
  if ((*(byte *)(lVar25 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar25 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar7 = std::string::compare(lVar25 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
     iVar7 == 0)) {
    alStack_4f8[lVar14 * 2 + 2] = 0;
    alStack_4f8[lVar14 * 2 + 3] = 0;
  }
  alStack_728[lVar14 * 2] = alStack_2b8[lVar14 * 2 + 2];
  alStack_728[lVar14 * 2 + 1] = (long)&LAB_0235d500;
  FUN_00151fe0(param_2,0,2);
  local_730[0] = FUN_0014feb0(param_2,0xffffffff);
  local_738 = param_2;
  if ((*PTR_DAT_04386700 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04386700);
    puVar4 = PTR_DAT_04386708;
    if (iVar7 != 0) {
      FUN_02355f30(PTR_DAT_04386708);
      FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04386700);
    }
  }
  uVar8 = local_730[0];
  uVar26 = *(ulong *)(PTR_DAT_04386708 + 8);
  puVar4 = *(undefined **)(PTR_DAT_04386708 + 0x10);
  if ((*PTR_DAT_04386708 & 1) == 0) {
    puVar4 = PTR_DAT_04386708 + 1;
    uVar26 = (ulong)((byte)*PTR_DAT_04386708 >> 1);
  }
  FUN_001514f0(param_2,puVar4,uVar26);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0235d550,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar25 = 0;
  do {
    if (lVar25 == 1) {
      plVar27 = alStack_728;
      pbVar17 = (byte *)FUN_0235b9b0();
    }
    else if (lVar25 == 0) {
      plVar27 = alStack_4f8 + 2;
      pbVar17 = (byte *)FUN_0235b7d0();
    }
    else {
      plVar27 = &local_2a8;
      pbVar17 = (byte *)FUN_02356508();
    }
    pbVar11 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar11 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar11);
    local_740 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    local_748 = param_2;
    FUN_008fe304(local_750,param_2,&local_780,&local_738,local_740);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,plVar27,2);
    uVar8 = local_740;
    if (*(long *)(lVar12 + 0xe0) == 0) {
      lVar14 = *(long *)(lVar12 + 0xe8);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
      lVar14 = *(long *)(lVar12 + 0xe8);
      uVar8 = local_740;
    }
    local_740 = uVar8;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_740;
    uVar18 = *(undefined8 *)(lVar12 + 0xc0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_740;
    uVar18 = *(undefined8 *)(lVar12 + 200);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,1);
      FUN_008fe304(local_750,param_2,&local_780,&local_748,local_740);
    }
    else {
      local_750[0] = 1;
      local_780 = &LAB_0235d5a0;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar21;
      FUN_0235e7b4(param_2,local_750,&local_780,local_740);
      local_750[0] = 2;
      local_780 = &LAB_0235d5a4;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar21;
      FUN_0235e7b4(param_2,local_750,&local_780,local_740);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
    FUN_008fe304(local_750,param_2,&local_780,&local_738,uVar8);
    if (*(undefined1 **)(lVar12 + 0xb8) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0xf0) != '\0') goto LAB_0235a538;
LAB_0235a228:
      if (param_2 == 0) goto LAB_0235a594;
LAB_0235a230:
      uVar10 = local_740;
      FUN_00150260(param_2,uVar8);
    }
    else {
      local_750[0] = 4;
      uStack_778 = 0;
      local_780 = *(undefined1 **)(lVar12 + 0xb8);
      local_770 = lVar12;
      lStack_768 = lVar21;
      FUN_0235e7b4(param_2,local_750,&local_780,uVar8);
      if (*(char *)(lVar12 + 0xf0) == '\0') goto LAB_0235a228;
LAB_0235a538:
      local_750[0] = 1;
      local_780 = &LAB_0235d5a0;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar21;
      FUN_0235e7b4(param_2,local_750,&local_780,uVar8);
      local_750[0] = 2;
      local_780 = &LAB_0235d5a4;
      uStack_778 = 0;
      local_770 = lVar12;
      lStack_768 = lVar21;
      FUN_0235e7b4(param_2,local_750,&local_780,uVar8);
      if (param_2 != 0) goto LAB_0235a230;
LAB_0235a594:
      uVar10 = local_740;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_748,0xfffffffe);
    lVar25 = lVar25 + 1;
    if (lVar25 == 3) {
      FUN_0235bb90();
      puVar4 = DAT_043e2320;
      if ((DAT_043e2310 & 1) == 0) {
        puVar4 = &DAT_043e2311;
      }
      FUN_00154450(param_2,puVar4);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_780._0_4_ = 0x1e;
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2a8,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_780 = (undefined1 *)CONCAT44(local_780._4_4_,0x1e);
      FUN_008fe304(&local_748,param_2,&local_780,&local_738,uVar10);
      local_780 = *(undefined1 **)(lVar12 + 0xb8);
      if (local_780 != (undefined1 *)0x0) {
        local_748 = CONCAT44(local_748._4_4_,4);
        uStack_778 = 0;
        local_770 = lVar12;
        lStack_768 = lVar21;
        FUN_0235e7b4(param_2,&local_748,&local_780,uVar10);
      }
      local_748._0_4_ = 1;
      local_780 = &LAB_0235d5a8;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7d4d8;
      local_770 = lVar12;
      lStack_768 = lVar21;
      FUN_0235ee68(param_2,&local_748,&local_780,uVar10);
      local_748 = CONCAT44(local_748._4_4_,2);
      local_780 = &LAB_0235d5ac;
      uStack_778 = 0;
      local_760 = 0;
      puStack_758 = &DAT_03a7d4d8;
      local_770 = lVar12;
      lStack_768 = lVar21;
      FUN_0235ee68(param_2,&local_748,&local_780,uVar10);
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


