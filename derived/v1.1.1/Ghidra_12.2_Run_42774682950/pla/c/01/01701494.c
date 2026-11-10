/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01701494; name: FUN_01701494
 */


undefined8 FUN_01701494(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
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
  undefined1 *local_840;
  undefined8 uStack_838;
  long local_830;
  long lStack_828;
  undefined8 local_820;
  undefined *puStack_818;
  undefined4 local_810 [2];
  long local_808;
  undefined4 local_800;
  long local_7f8;
  undefined4 local_7f0 [2];
  string asStack_7e8 [624];
  undefined8 auStack_578 [2];
  string local_568;
  undefined1 auStack_567 [7];
  size_t local_560;
  undefined1 *local_558;
  char *apcStack_2f8 [2];
  char *local_2e8;
  code *local_2e0;
  long local_2d8;
  
  if (((DAT_043cd950 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043cd950), iVar7 != 0)) {
    local_2d8 = 0;
    local_2e0 = (code *)0x0;
    local_2e8 = (char *)0x2e6c6f7308;
    if (((DAT_043cd820 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043cd820), iVar7 != 0)) {
      FUN_01705900();
      FUN_00100250(PTR__string_04379718,&DAT_043cd808,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043cd820);
    }
    puVar25 = DAT_043cd818;
    if ((DAT_043cd808 & 1) == 0) {
      puVar25 = &DAT_043cd809;
    }
    pcVar24 = (char *)std::string::append((char *)&local_2e8,(ulong)puVar25);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043cd938,psVar14);
    lVar11 = local_2d8;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2e8 & 1) != 0) && (local_2d8 != 0)) {
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
          goto LAB_01702bc8;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_01702bc8:
    FUN_00100250(PTR__string_04379718,&DAT_043cd938,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cd950);
  }
  std::string::string(&local_568,(string *)&DAT_043cd938);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043cd930);
  sVar1 = (ulong)((byte)local_568 >> 1);
  if (((byte)local_568 & 1) != 0) {
    sVar1 = local_560;
  }
  std::string::append((ulong)&local_568,(char)iVar7);
  if (((byte)local_568 & 1) == 0) {
    puVar25 = auStack_567;
    local_560 = (size_t)((byte)local_568 >> 1);
  }
  else {
    puVar25 = local_558;
  }
  snprintf(puVar25 + (sVar1 - 1),local_560,"%d",(ulong)DAT_043cd930);
  DAT_043cd930 = DAT_043cd930 + 1;
  if (((DAT_043cd970 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043cd970), iVar7 != 0)) {
    local_2d8 = 0;
    local_2e0 = (code *)0x0;
    local_2e8 = (char *)0x2e6c6f7308;
    if (((DAT_043cd820 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043cd820), iVar7 != 0)) {
      FUN_01705900();
      FUN_00100250(PTR__string_04379718,&DAT_043cd808,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043cd820);
    }
    puVar25 = DAT_043cd818;
    if ((DAT_043cd808 & 1) == 0) {
      puVar25 = &DAT_043cd809;
    }
    pcVar24 = (char *)std::string::append((char *)&local_2e8,(ulong)puVar25);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043cd958,psVar14);
    lVar11 = local_2d8;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2e8 & 1) != 0) && (local_2d8 != 0)) {
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
          goto LAB_01702d2c;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_01702d2c:
    FUN_00100250(PTR__string_04379718,&DAT_043cd958,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cd970);
  }
  puVar15 = DAT_043cd968;
  if ((DAT_043cd958 & 1) == 0) {
    puVar15 = &DAT_043cd959;
  }
  if (((byte)local_568 & 1) == 0) {
    puVar25 = (undefined1 *)((ulong)&local_568 | 1);
  }
  else {
    puVar25 = local_558;
  }
  if (((DAT_043cd980 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043cd980), iVar7 != 0)) {
    DAT_043cd978 = 0x150;
    __cxa_guard_release(&DAT_043cd980);
  }
  if (((DAT_043cd990 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043cd990), iVar7 != 0)) {
    DAT_043cd988 = 0x157;
    __cxa_guard_release(&DAT_043cd990);
  }
  uVar20 = DAT_043cd978;
  lVar11 = FUN_00153520(param_2,DAT_043cd978);
  if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0x150)) ||
     (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar20 = DAT_043cd988;
    lVar11 = FUN_00153520(param_2,DAT_043cd988);
    if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0x150)) ||
       (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_01707d50();
      puVar2 = DAT_043cd9a8;
      if ((DAT_043cd998 & 1) == 0) {
        puVar2 = &DAT_043cd999;
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
  *puVar18 = &PTR_FUN_04224ec0;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xf0);
  iVar7 = FUN_00154450(param_2,puVar25);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_01707d10,0);
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
  if ((((byte)local_568 & 1) != 0) && (local_558 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar23,local_558,0,8);
        goto LAB_01701808;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_558,0,8);
  }
LAB_01701808:
  memset(&local_2e8,0,0x280);
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
  pcVar17 = FUN_01705f8c;
  if (uVar9 != 0) {
    pcVar17 = FUN_01705d18;
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
            *(code **)(lVar11 + 0x100) = pcVar17;
            goto LAB_01701a08;
          }
          *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
      goto LAB_01701a08;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  uVar22 = 1;
  local_2e8 = pcVar24;
  local_2e0 = pcVar17;
LAB_01701a08:
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
  pcVar17 = FUN_01706060;
  if (uVar9 != 0) {
    pcVar17 = FUN_01706018;
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
            *(code **)(lVar11 + 0x100) = pcVar17;
            goto LAB_01701b48;
          }
          *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
      goto LAB_01701b48;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2e8)[uVar22 * 2] = pcVar24;
  (&local_2e0)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_01701b48:
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
  pcVar17 = FUN_0170618c;
  if (uVar9 != 0) {
    pcVar17 = FUN_017060a8;
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
            *(code **)(lVar11 + 0x100) = pcVar17;
            goto LAB_01701c88;
          }
          *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
      goto LAB_01701c88;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2e8)[uVar22 * 2] = pcVar24;
  (&local_2e0)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_01701c88:
  pcVar24 = *(char **)(lVar11 + 0xa8);
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
  pcVar17 = FUN_017062fc;
  if (uVar9 != 0) {
    pcVar17 = FUN_01706218;
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
            *(code **)(lVar11 + 0x100) = pcVar17;
            goto LAB_01701dc8;
          }
          *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
      goto LAB_01701dc8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2e8)[uVar22 * 2] = pcVar24;
  (&local_2e0)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_01701dc8:
  pcVar24 = *(char **)(lVar11 + 0xc0);
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
  pcVar17 = FUN_0170646c;
  if (uVar9 != 0) {
    pcVar17 = FUN_01706388;
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
            *(code **)(lVar11 + 0x100) = pcVar17;
            goto LAB_01701f08;
          }
          *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
      goto LAB_01701f08;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2e8)[uVar22 * 2] = pcVar24;
  (&local_2e0)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_01701f08:
  pcVar24 = *(char **)(lVar11 + 0xd8);
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
  pcVar17 = FUN_01706540;
  if (uVar9 != 0) {
    pcVar17 = FUN_017064f8;
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
            *(code **)(lVar11 + 0x100) = pcVar17;
            goto LAB_01702048;
          }
          *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
      goto LAB_01702048;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2e8)[uVar22 * 2] = pcVar24;
  (&local_2e0)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_01702048:
  pcVar24 = *(char **)(lVar11 + 0xf0);
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
  pcVar17 = (code *)&LAB_01707a7c;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_01706588;
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
            *(code **)(lVar11 + 0x100) = pcVar17;
            goto LAB_01702158;
          }
          *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
      goto LAB_01702158;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2e8)[uVar22 * 2] = pcVar24;
  (&local_2e0)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_01702158:
  pcVar24 = *(char **)(lVar11 + 0xf8);
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
  pcVar17 = (code *)&LAB_01707c70;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_01707c3c;
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
        *(code **)(lVar11 + 0x100) = pcVar17;
        uVar9 = (uint)*(undefined8 *)(lVar11 + 0x148);
        goto joined_r0x0170223c;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x148) = *(ulong *)(lVar11 + 0x148) | 1L << (uVar20 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar11 + 0x148);
      goto joined_r0x0170223c;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2e8)[uVar22 * 2] = pcVar24;
  (&local_2e0)[uVar22 * 2] = pcVar17;
  uVar9 = (uint)*(undefined8 *)(lVar11 + 0x148);
  uVar22 = (ulong)((int)uVar22 + 1);
joined_r0x0170223c:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x148);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x148);
  }
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x181);
    if ((*(byte *)(lVar26 + 0x180) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 400);
    }
    (&local_2e8)[uVar22 * 2] = pcVar24;
    (&local_2e0)[uVar22 * 2] = (code *)&LAB_01706c20;
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x148);
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
    (&local_2e8)[uVar22 * 2] = pcVar24;
    (&local_2e0)[uVar22 * 2] = (code *)&LAB_01706c18;
  }
  uVar22 = uVar20;
  if (*(long *)(lVar11 + 0x100) != 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x1c9);
    if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x1d8);
    }
    pcVar17 = *(code **)(lVar11 + 0x100);
    uVar22 = (ulong)((int)uVar20 + 1);
    (&local_2e8)[uVar20 * 2] = pcVar24;
    (&local_2e0)[uVar20 * 2] = pcVar17;
  }
  (&local_2e8)[uVar22 * 2] = (char *)0x0;
  (&local_2e0)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_568,&local_2e8,0x280);
  memcpy(asStack_7e8,&local_2e8,0x280);
  lVar26 = FUN_008cca50();
  lVar13 = uVar22 - 1;
  pcVar24 = (&local_2e8)[lVar13 * 2];
  sVar12 = strlen(pcVar24);
  sVar1 = (ulong)(*(byte *)(lVar26 + 0x1c8) >> 1);
  if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar26 + 0x1d0);
  }
  if ((sVar12 == sVar1) &&
     (iVar7 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
     iVar7 == 0)) {
    auStack_578[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_567 + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_7e8 + lVar13 * 0x10) = (&local_2e8)[lVar13 * 2];
  *(undefined1 **)(asStack_7e8 + (lVar13 * 2 + 1) * 8) = &LAB_01707cb0;
  FUN_00151fe0(param_2,0,2);
  local_7f0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_7f8 = param_2;
  if (((DAT_043cd820 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043cd820), iVar7 != 0)) {
    FUN_01705900();
    FUN_00100250(PTR__string_04379718,&DAT_043cd808,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cd820);
  }
  uVar8 = local_7f0[0];
  uVar20 = (ulong)(DAT_043cd808 >> 1);
  if ((DAT_043cd808 & 1) == 0) {
    puVar25 = &DAT_043cd809;
  }
  else {
    puVar25 = DAT_043cd818;
    uVar20 = DAT_043cd810;
  }
  FUN_001514f0(param_2,puVar25,uVar20);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_01706b30,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar26 = 0;
  do {
    if (lVar26 == 1) {
      psVar14 = asStack_7e8;
      FUN_01704074();
      pbVar19 = &DAT_043cd770;
      puVar15 = &DAT_043cd771;
      puVar18 = &DAT_043cd780;
    }
    else if (lVar26 == 0) {
      psVar14 = &local_568;
      FUN_01703e80();
      puVar15 = &DAT_043cd6f9;
      puVar18 = &DAT_043cd708;
      pbVar19 = &DAT_043cd6f8;
    }
    else {
      psVar14 = (string *)&local_2e8;
      FUN_01704268();
      puVar15 = &DAT_043cd7e9;
      puVar18 = &DAT_043cd7f8;
      pbVar19 = &DAT_043cd7e8;
    }
    if ((*pbVar19 & 1) != 0) {
      puVar15 = (undefined *)*puVar18;
    }
    FUN_00154450(param_2,puVar15);
    local_800 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    local_808 = param_2;
    FUN_008fe304(local_810,param_2,&local_840,&local_7f8,local_800);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar14,2);
    uVar8 = local_800;
    if (*(long *)(lVar11 + 0x130) == 0) {
      lVar13 = *(long *)(lVar11 + 0x138);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
      lVar13 = *(long *)(lVar11 + 0x138);
      uVar8 = local_800;
    }
    local_800 = uVar8;
    if (lVar13 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_800;
    uVar16 = *(undefined8 *)(lVar11 + 0x110);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_800;
    uVar16 = *(undefined8 *)(lVar11 + 0x118);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,1);
      FUN_008fe304(local_810,param_2,&local_840,&local_808,local_800);
    }
    else {
      local_810[0] = 1;
      local_840 = &LAB_01707d00;
      uStack_838 = 0;
      local_830 = lVar11;
      lStack_828 = lVar21;
      FUN_0170818c(param_2,local_810,&local_840,local_800);
      local_810[0] = 2;
      local_840 = &LAB_01707d04;
      uStack_838 = 0;
      local_830 = lVar11;
      lStack_828 = lVar21;
      FUN_0170818c(param_2,local_810,&local_840,local_800);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
    FUN_008fe304(local_810,param_2,&local_840,&local_7f8,uVar8);
    if (*(undefined1 **)(lVar11 + 0x108) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0x140) == '\0') goto LAB_01702604;
LAB_01702924:
      local_810[0] = 1;
      local_840 = &LAB_01707d00;
      uStack_838 = 0;
      local_830 = lVar11;
      lStack_828 = lVar21;
      FUN_0170818c(param_2,local_810,&local_840,uVar8);
      local_810[0] = 2;
      local_840 = &LAB_01707d04;
      uStack_838 = 0;
      local_830 = lVar11;
      lStack_828 = lVar21;
      FUN_0170818c(param_2,local_810,&local_840,uVar8);
      if (param_2 == 0) goto LAB_01702988;
LAB_0170260c:
      uVar10 = local_800;
      FUN_00150260(param_2,uVar8);
    }
    else {
      uStack_838 = 0;
      local_810[0] = 4;
      local_840 = *(undefined1 **)(lVar11 + 0x108);
      local_830 = lVar11;
      lStack_828 = lVar21;
      FUN_0170818c(param_2,local_810,&local_840,uVar8);
      if (*(char *)(lVar11 + 0x140) != '\0') goto LAB_01702924;
LAB_01702604:
      if (param_2 != 0) goto LAB_0170260c;
LAB_01702988:
      uVar10 = local_800;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_808,0xfffffffe);
    lVar26 = lVar26 + 1;
    if (lVar26 == 3) {
      FUN_017044a8();
      puVar15 = DAT_043cd870;
      if ((DAT_043cd860 & 1) == 0) {
        puVar15 = &DAT_043cd861;
      }
      FUN_00154450(param_2,puVar15);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_840._0_4_ = 0x1e;
      FUN_008fe304(&local_808,param_2,&local_840,&local_7f8,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar11);
      FUN_00155a20(param_2,&local_2e8,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_840 = (undefined1 *)CONCAT44(local_840._4_4_,0x1e);
      FUN_008fe304(&local_808,param_2,&local_840,&local_7f8,uVar10);
      local_840 = *(undefined1 **)(lVar11 + 0x108);
      if (local_840 != (undefined1 *)0x0) {
        uStack_838 = 0;
        local_808 = CONCAT44(local_808._4_4_,4);
        local_830 = lVar11;
        lStack_828 = lVar21;
        FUN_0170818c(param_2,&local_808,&local_840,uVar10);
      }
      local_808._0_4_ = 1;
      local_840 = &LAB_01707d08;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7c528;
      local_830 = lVar11;
      lStack_828 = lVar21;
      FUN_01708840(param_2,&local_808,&local_840,uVar10);
      local_808 = CONCAT44(local_808._4_4_,2);
      local_840 = &LAB_01707d0c;
      uStack_838 = 0;
      local_820 = 0;
      puStack_818 = &DAT_03a7c528;
      local_830 = lVar11;
      lStack_828 = lVar21;
      FUN_01708840(param_2,&local_808,&local_840,uVar10);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar10);
      }
      FUN_00152ae0(param_2,uVar8);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_7f0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


