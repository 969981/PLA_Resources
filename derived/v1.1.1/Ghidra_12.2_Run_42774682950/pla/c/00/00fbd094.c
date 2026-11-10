/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fbd094; name: FUN_00fbd094
 */


undefined8 FUN_00fbd094(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  string *psVar17;
  undefined1 *__maxlen;
  undefined8 *puVar18;
  byte *pbVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  undefined1 *local_750;
  undefined8 uStack_748;
  long local_740;
  long lStack_738;
  undefined8 local_730;
  undefined *puStack_728;
  long local_720;
  undefined4 local_718;
  long local_710;
  undefined4 local_708 [2];
  long alStack_700 [68];
  long alStack_4e0 [70];
  long alStack_2b0 [2];
  undefined8 local_2a0;
  undefined1 *local_298;
  ulong local_290;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b70d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b70d0), iVar9 != 0)) {
    local_290 = 0;
    local_298 = (undefined1 *)0x0;
    local_2a0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437dc98 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437dc98);
      puVar5 = PTR_DAT_0437dca0;
      if (iVar9 != 0) {
        FUN_00fc0b80(PTR_DAT_0437dca0);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437dc98);
      }
    }
    puVar5 = *(undefined **)(PTR_DAT_0437dca0 + 0x10);
    if ((*PTR_DAT_0437dca0 & 1) == 0) {
      puVar5 = PTR_DAT_0437dca0 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_2a0,(ulong)puVar5);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b70b8,psVar17);
    uVar29 = local_290;
    plVar28 = DAT_043f1798;
    if ((((ulong)local_2a0 & 1) != 0) && (local_290 != 0)) {
      lVar14 = tpidr_el0;
      plVar25 = *(long **)(lVar14 + 0x20);
      if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
        *(long **)(lVar14 + 0x20) = DAT_043f1798;
        plVar25 = plVar28;
      }
      uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar25,uVar29,0,8);
          goto LAB_00fbe150;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,uVar29,0,8);
    }
LAB_00fbe150:
    FUN_00100250(PTR__string_04379718,&DAT_043b70b8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b70d0);
  }
  std::string::string((string *)&local_2a0,(string *)&DAT_043b70b8);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b70b0);
  puVar21 = (undefined1 *)((ulong)local_2a0 >> 1 & 0x7f);
  if (((ulong)local_2a0 & 1) != 0) {
    puVar21 = local_298;
  }
  std::string::append((ulong)&local_2a0,(char)iVar9);
  if (((ulong)local_2a0 & 1) == 0) {
    uVar29 = (long)&local_2a0 + 1;
    __maxlen = (undefined1 *)((ulong)local_2a0 >> 1 & 0x7f);
  }
  else {
    __maxlen = local_298;
    uVar29 = local_290;
  }
  iVar9 = snprintf(puVar21 + (uVar29 - 1),(size_t)__maxlen,"%d",(ulong)DAT_043b70b0);
  DAT_043b70b0 = DAT_043b70b0 + 1;
  pbVar13 = (byte *)FUN_00fc1e40(iVar9);
  pbVar19 = *(byte **)(pbVar13 + 0x10);
  if ((*pbVar13 & 1) == 0) {
    pbVar19 = pbVar13 + 1;
  }
  if (((ulong)local_2a0 & 1) == 0) {
    uVar29 = (ulong)&local_2a0 | 1;
  }
  else {
    uVar29 = local_290;
  }
  if (((DAT_043b7100 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b7100), iVar9 != 0)) {
    DAT_043b70f8 = 0xe0;
    __cxa_guard_release(&DAT_043b7100);
  }
  if (((DAT_043b7110 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b7110), iVar9 != 0)) {
    DAT_043b7108 = 0xe7;
    __cxa_guard_release(&DAT_043b7110);
  }
  uVar22 = DAT_043b70f8;
  lVar14 = FUN_00153520(param_2,DAT_043b70f8);
  if ((uVar22 < ((ulong)(uint)-(int)lVar14 & 7 | 0xe0)) ||
     (puVar18 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043b7108;
    lVar14 = FUN_00153520(param_2,DAT_043b7108);
    if ((uVar22 < ((ulong)(uint)-(int)lVar14 & 7 | 0xe0)) ||
       (puVar18 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00fc20e0();
      puVar5 = DAT_043b7128;
      if ((DAT_043b7118 & 1) == 0) {
        puVar5 = &DAT_043b7119;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar5);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar20;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar14;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar14 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar7 = 0;
      if (uVar24 != 0) {
        uVar7 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar7 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar20;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar18 = &PTR_FUN_041eefb0;
  *(undefined1 *)(puVar18 + 0xb) = uVar6;
  uVar20 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  puVar18[0xe] = *(undefined8 *)(param_1 + 0x70);
  puVar18[0xf] = uVar4;
  puVar18[0xc] = uVar20;
  puVar18[0xd] = uVar3;
  uVar20 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  puVar18[0x12] = *(undefined8 *)(param_1 + 0x90);
  puVar18[0x13] = uVar4;
  puVar18[0x10] = uVar20;
  puVar18[0x11] = uVar3;
  uVar20 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  puVar18[0x16] = *(undefined8 *)(param_1 + 0xb0);
  puVar18[0x17] = uVar4;
  puVar18[0x14] = uVar20;
  puVar18[0x15] = uVar3;
  uVar20 = *(undefined8 *)(param_1 + 0xc0);
  uVar3 = *(undefined8 *)(param_1 + 200);
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  puVar18[0x1a] = *(undefined8 *)(param_1 + 0xd0);
  puVar18[0x1b] = uVar4;
  puVar18[0x18] = uVar20;
  puVar18[0x19] = uVar3;
  iVar9 = FUN_00154450(param_2,uVar29);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_00fc20a0,0);
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
  FUN_001522a0(param_2,pbVar19);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,pbVar19);
  lVar14 = FUN_001511d0(param_2,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  uVar29 = local_290;
  plVar28 = DAT_043f1798;
  if ((((ulong)local_2a0 & 1) != 0) && (local_290 != 0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar28;
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
        FUN_02bcc824(plVar25,uVar29,0,8);
        goto LAB_00fbd418;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,uVar29,0,8);
  }
LAB_00fbd418:
  memset(&local_2a0,0,0x230);
  pcVar26 = *(char **)(lVar14 + 0x60);
  sVar15 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar23 = lVar14 + 8;
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar27 = 0;
  uVar29 = 0;
  puVar21 = &LAB_00fc1378;
  if (uVar11 != 0) {
    puVar21 = &LAB_00fc1340;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar19 = (byte *)(lVar16 + lVar27);
    sVar15 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar29;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar14 + 0x30) = puVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar22 = 0;
            *(undefined1 **)(lVar14 + 0x90) = puVar21;
            goto LAB_00fbd538;
          }
          *(ulong *)(lVar14 + 0xd8) = *(ulong *)(lVar14 + 0xd8) | 1L << (uVar29 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar21;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xd8) = *(ulong *)(lVar14 + 0xd8) | 1L << (uVar29 & 0x3f);
      goto LAB_00fbd538;
    }
    uVar29 = uVar29 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar29 != 0x20);
  uVar22 = 1;
  local_2a0 = pcVar26;
  local_298 = puVar21;
LAB_00fbd538:
  pcVar26 = *(char **)(lVar14 + 0x68);
  sVar15 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar27 = 0;
  uVar29 = 0;
  pcVar1 = FUN_00fc1528;
  if (uVar11 != 0) {
    pcVar1 = (code *)&LAB_00fc13b0;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar19 = (byte *)(lVar16 + lVar27);
    sVar15 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar29;
      if (iVar9 == 0x13) {
        *(code **)(lVar14 + 0x90) = pcVar1;
        goto LAB_00fbd618;
      }
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar14 + 0xd8) = *(ulong *)(lVar14 + 0xd8) | 1L << (uVar29 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xd8) = *(ulong *)(lVar14 + 0xd8) | 1L << (uVar29 & 0x3f);
      goto LAB_00fbd618;
    }
    uVar29 = uVar29 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar29 != 0x20);
  alStack_2b0[uVar22 * 2 + 2] = (long)pcVar26;
  (&local_298)[uVar22 * 2] = pcVar1;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00fbd618:
  pcVar26 = *(char **)(lVar14 + 0x78);
  sVar15 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar27 = 0;
  uVar29 = 0;
  pcVar1 = FUN_00fc1ae4;
  if (uVar11 != 0) {
    pcVar1 = FUN_00fc15e8;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar19 = (byte *)(lVar16 + lVar27);
    sVar15 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar29;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x90) = pcVar1;
            uVar11 = (uint)*(undefined8 *)(lVar14 + 0xd8);
            goto joined_r0x00fbd70c;
          }
          *(ulong *)(lVar14 + 0xd8) = *(ulong *)(lVar14 + 0xd8) | 1L << (uVar29 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xd8) = *(ulong *)(lVar14 + 0xd8) | 1L << (uVar29 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar14 + 0xd8);
      goto joined_r0x00fbd70c;
    }
    uVar29 = uVar29 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar29 != 0x20);
  alStack_2b0[uVar22 * 2 + 2] = (long)pcVar26;
  (&local_298)[uVar22 * 2] = pcVar1;
  uVar11 = (uint)*(undefined8 *)(lVar14 + 0xd8);
  uVar22 = (ulong)((int)uVar22 + 1);
joined_r0x00fbd70c:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar14 + 0xd8);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar14 + 0xd8);
  }
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar16 = FUN_008cca50();
    lVar27 = lVar16 + 0x181;
    if ((*(byte *)(lVar16 + 0x180) & 1) != 0) {
      lVar27 = *(long *)(lVar16 + 400);
    }
    alStack_2b0[uVar22 * 2 + 2] = lVar27;
    (&local_298)[uVar22 * 2] = &LAB_00fc2920;
    uVar11 = (uint)*(undefined8 *)(lVar14 + 0xd8);
    uVar22 = (ulong)((int)uVar22 + 1);
  }
  uVar29 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar16 = FUN_008cca50();
    uVar29 = (ulong)((int)uVar22 + 1);
    lVar27 = lVar16 + 0x289;
    if ((*(byte *)(lVar16 + 0x288) & 1) != 0) {
      lVar27 = *(long *)(lVar16 + 0x298);
    }
    alStack_2b0[uVar22 * 2 + 2] = lVar27;
    (&local_298)[uVar22 * 2] = &LAB_00fc2914;
  }
  uVar22 = uVar29;
  if (*(long *)(lVar14 + 0x90) != 0) {
    lVar16 = FUN_008cca50();
    lVar27 = lVar16 + 0x1c9;
    if ((*(byte *)(lVar16 + 0x1c8) & 1) != 0) {
      lVar27 = *(long *)(lVar16 + 0x1d8);
    }
    puVar21 = *(undefined1 **)(lVar14 + 0x90);
    uVar22 = (ulong)((int)uVar29 + 1);
    alStack_2b0[uVar29 * 2 + 2] = lVar27;
    (&local_298)[uVar29 * 2] = puVar21;
  }
  alStack_2b0[uVar22 * 2 + 2] = 0;
  (&local_298)[uVar22 * 2] = (undefined1 *)0x0;
  memcpy(alStack_4e0 + 2,&local_2a0,0x230);
  memcpy(alStack_700,&local_2a0,0x230);
  lVar27 = FUN_008cca50();
  lVar16 = uVar22 - 1;
  pcVar26 = (char *)alStack_2b0[lVar16 * 2 + 2];
  sVar15 = strlen(pcVar26);
  sVar2 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar9 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    alStack_4e0[lVar16 * 2 + 2] = 0;
    alStack_4e0[lVar16 * 2 + 3] = 0;
  }
  alStack_700[lVar16 * 2] = alStack_2b0[lVar16 * 2 + 2];
  alStack_700[lVar16 * 2 + 1] = (long)&LAB_00fc1c30;
  FUN_00151fe0(param_2,0,2);
  local_708[0] = FUN_0014feb0(param_2,0xffffffff);
  local_710 = param_2;
  if ((*PTR_DAT_0437dc98 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_0437dc98);
    puVar5 = PTR_DAT_0437dca0;
    if (iVar9 != 0) {
      FUN_00fc0b80(PTR_DAT_0437dca0);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437dc98);
    }
  }
  uVar10 = local_708[0];
  uVar29 = *(ulong *)(PTR_DAT_0437dca0 + 8);
  puVar5 = *(undefined **)(PTR_DAT_0437dca0 + 0x10);
  if ((*PTR_DAT_0437dca0 & 1) == 0) {
    puVar5 = PTR_DAT_0437dca0 + 1;
    uVar29 = (ulong)((byte)*PTR_DAT_0437dca0 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar29);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00fc1c80,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      plVar28 = alStack_700;
      FUN_00fbf384();
      pbVar19 = DAT_043b6f78;
      if ((DAT_043b6f68 & 1) == 0) {
        pbVar19 = &DAT_043b6f69;
      }
    }
    else if (lVar27 == 0) {
      plVar28 = alStack_4e0 + 2;
      FUN_00fbf190();
      pbVar19 = DAT_043b6f00;
      if ((DAT_043b6ef0 & 1) == 0) {
        pbVar19 = &DAT_043b6ef1;
      }
    }
    else {
      plVar28 = &local_2a0;
      pbVar13 = (byte *)FUN_00fbf578();
      pbVar19 = *(byte **)(pbVar13 + 0x10);
      if ((*pbVar13 & 1) == 0) {
        pbVar19 = pbVar13 + 1;
      }
    }
    FUN_00154450(param_2,pbVar19);
    local_718 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_720 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,local_718);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,plVar28,2);
    uVar10 = local_718;
    if (*(long *)(lVar14 + 0xc0) == 0) {
      lVar16 = *(long *)(lVar14 + 200);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar16 = *(long *)(lVar14 + 200);
      uVar10 = local_718;
    }
    local_718 = uVar10;
    if (lVar16 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_718;
    uVar20 = *(undefined8 *)(lVar14 + 0xa0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_718;
    uVar20 = *(undefined8 *)(lVar14 + 0xa8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_750,&local_720,local_718);
    }
    else {
      local_750 = &LAB_00fc1d70;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_00fc1cd0(param_2,1,&local_750,local_718);
      local_750 = &LAB_00fc1d74;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_00fc1cd0(param_2,2,&local_750,local_718);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,uVar10);
    if (*(undefined1 **)(lVar14 + 0x98) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0xd0) != '\0') goto LAB_00fbdf20;
LAB_00fbdc74:
      if (param_2 == 0) goto LAB_00fbdf70;
LAB_00fbdc7c:
      uVar12 = local_718;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar14 + 0x98);
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_00fc1cd0(param_2,4,&local_750,uVar10);
      if (*(char *)(lVar14 + 0xd0) == '\0') goto LAB_00fbdc74;
LAB_00fbdf20:
      local_750 = &LAB_00fc1d70;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_00fc1cd0(param_2,1,&local_750,uVar10);
      local_750 = &LAB_00fc1d74;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_00fc1cd0(param_2,2,&local_750,uVar10);
      if (param_2 != 0) goto LAB_00fbdc7c;
LAB_00fbdf70:
      uVar12 = local_718;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_720,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_00fbf7c8();
      puVar5 = DAT_043b7068;
      if ((DAT_043b7058 & 1) == 0) {
        puVar5 = &DAT_043b7059;
      }
      FUN_00154450(param_2,puVar5);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,&local_2a0,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar12);
      local_750 = *(undefined1 **)(lVar14 + 0x98);
      if (local_750 != (undefined1 *)0x0) {
        uStack_748 = 0;
        local_740 = lVar14;
        lStack_738 = lVar23;
        FUN_00fc1cd0(param_2,4,&local_750,uVar12);
      }
      local_750 = &LAB_00fc1e38;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a788c8;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_00fc1d80(param_2,1,&local_750,uVar12);
      local_750 = &LAB_00fc1e3c;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a788c8;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_00fc1d80(param_2,2,&local_750,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_708[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


