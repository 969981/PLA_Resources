/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02db6480; name: FUN_02db6480
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02db6480(long param_1,long param_2)

{
  undefined *puVar1;
  LightEventType *pLVar2;
  int *piVar3;
  undefined *puVar4;
  long *plVar5;
  uint *puVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined4 uVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  undefined8 *puVar32;
  code *pcVar33;
  long *plVar34;
  long *plVar35;
  long lVar36;
  long *plVar37;
  code *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  long *aplStack_f0 [12];
  long *local_90 [4];
  undefined8 local_68;
  
  FUN_028a4e60(param_2,param_1 + 0x98);
  lVar24 = *(long *)(param_2 + 0x58);
  lVar16 = lVar24 + 0x1a8;
  if (*(char *)(lVar24 + 0x304) != '\0') {
    lVar16 = lVar24 + 0x1f0;
  }
  FUN_00956dac(&local_110,lVar16);
  if (local_110 == (code *)0x0) {
LAB_02db6574:
    plVar37 = (long *)0x0;
  }
  else {
    lVar16 = FUN_00a3e9dc(local_110 + 0xf0,local_90);
    if (local_110 != (code *)0x0) {
      lVar24 = *(long *)(local_110 + 0x58);
      piVar27 = (int *)(lVar24 + 0xc);
      do {
        iVar15 = *piVar27;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar9) {
          *piVar27 = iVar15 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*(long *)local_110 + 0x20))();
      }
    }
    if (lVar16 == 0) goto LAB_02db6574;
    plVar37 = *(long **)(lVar16 + 0x1f0);
    if (plVar37 != (long *)0x0) {
      plVar31 = plVar37 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar9) {
          *(int *)plVar31 = (int)*plVar31 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
  }
  plVar31 = *(long **)(param_2 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar1 = PTR_DAT_04379528;
    if (iVar15 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_02db8f7c;
  *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar31;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  plVar17 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x140,8);
  if (plVar17 == (long *)0x0) {
LAB_02db8f98:
    lVar16 = *plVar31;
    goto LAB_02db8fb8;
  }
  FUN_00afa5ac();
  puVar4 = PTR_DAT_0437a7b8;
  puVar1 = PTR_DAT_0437a7b8 + 0x88;
  *plVar17 = (long)(PTR_DAT_0437a7b8 + 0x10);
  pcVar33 = (code *)(plVar17 + 9);
  *(undefined **)pcVar33 = puVar1;
  plVar17[10] = (long)(puVar4 + 0x128);
  nn::os::InitializeLightEvent((long)plVar17 + 0x6c,0,1);
  *plVar17 = (long)&PTR_LAB_04272e90;
  *(undefined8 *)((long)plVar17 + 0x85) = 0;
  plVar17[0xf] = 0;
  plVar17[0x10] = 0;
  *(undefined ***)pcVar33 = &PTR_LAB_04272f20;
  plVar17[10] = (long)&PTR_LAB_04272fc0;
  plVar17[0x16] = 0;
  plVar17[0x12] = 0;
  plVar17[0x13] = 0;
  plVar17[0x14] = 0;
  plVar17[0x15] = 0;
  FUN_028b90e4(plVar17 + 0x17);
  FUN_028b91e0(plVar17 + 0x1e);
  nn::os::InitializeLightEvent((long)plVar17 + 300,0,1);
  plVar17[0x27] = 0;
  plVar17[1] = (long)plVar31;
  plVar17[2] = (long)plVar17;
  plVar17[3] = 0x140;
  plVar17[4] = 8;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  lVar16 = plVar17[0xb];
  if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02db8f80;
  if (*(long *)(lVar16 + 0x10) == 0) {
    uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
    *(undefined8 *)(lVar16 + 0x10) = uVar18;
  }
  piVar27 = (int *)(lVar16 + 0xc);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
    if (bVar9) {
      *piVar27 = *piVar27 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  (**(code **)(*plVar17 + 0x48))(plVar17,2000);
  local_110 = pcVar33;
  (**(code **)(plVar17[9] + 0x10))(pcVar33);
  FUN_028a4b90(param_2,&local_110);
  if (local_110 != (code *)0x0) {
    (**(code **)(*(long *)local_110 + 0x18))();
  }
  lVar16 = *(long *)(param_1 + 0xd0);
  if (lVar16 == 0) {
    iVar15 = 0;
LAB_02db6890:
    local_68 = 0x1f;
  }
  else {
    cVar8 = *(char *)(lVar16 + 0x1e1);
    if (*(long *)(param_1 + 0x100) == 0) {
LAB_02db685c:
      iVar15 = 0;
    }
    else {
      if (cVar8 == '\0') {
        piVar27 = (int *)0x0;
      }
      else {
        piVar27 = (int *)((long)*(uint **)(lVar16 + 0x250) + (ulong)**(uint **)(lVar16 + 0x250));
      }
      if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 5) ||
         (uVar30 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[2], uVar30 == 0)) {
        lVar24 = 0;
      }
      else {
        puVar25 = (uint *)((long)piVar27 + uVar30);
        lVar24 = (long)puVar25 + (ulong)*puVar25;
      }
      puVar25 = *(uint **)(*(long *)(param_1 + 0x100) + 0x250);
      piVar27 = (int *)((long)puVar25 + (ulong)*puVar25);
      if (((*(ushort *)((long)piVar27 - (long)*piVar27) < 5) ||
          (uVar30 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[2], uVar30 == 0)) ||
         (puVar25 = (uint *)((long)piVar27 + uVar30),
         piVar27 = (int *)((long)puVar25 + (ulong)*puVar25), piVar27 == (int *)0x0))
      goto LAB_02db685c;
      puVar25 = (uint *)((long)piVar27 + (ulong)*(ushort *)((long)piVar27 + (4 - (long)*piVar27)));
      puVar25 = (uint *)((long)puVar25 + (ulong)*puVar25);
      uVar7 = *puVar25;
      if ((ulong)uVar7 == 0) goto LAB_02db685c;
      lVar36 = 0;
      iVar15 = 0;
      do {
        uVar30 = (ulong)*(uint *)((long)puVar25 + lVar36 + 4);
        lVar26 = lVar36 + (uVar30 - (long)*(int *)((long)puVar25 + lVar36 + uVar30 + 4));
        if ((*(ushort *)((long)puVar25 + lVar26 + 4) < 7) ||
           (uVar28 = (ulong)*(ushort *)((long)puVar25 + lVar26 + 10), uVar28 == 0)) {
          lVar26 = 0;
        }
        else {
          lVar26 = uVar30 + uVar28;
          lVar26 = (long)puVar25 +
                   lVar36 + lVar26 + (ulong)*(uint *)((long)puVar25 + lVar36 + lVar26 + 4) + 4;
        }
        iVar14 = FUN_02dbb080(lVar24,lVar26);
        lVar36 = lVar36 + 4;
        iVar15 = iVar14 + iVar15;
      } while ((ulong)uVar7 * 4 != lVar36);
    }
    if (cVar8 == '\0') {
      local_68 = 0x1f;
    }
    else {
      if (*(long *)(lVar16 + 0x270) == 0) goto LAB_02db6890;
      uVar30 = FUN_02901220();
      local_68 = 0x1f;
      if ((uVar30 & 1) == 0) {
        local_68 = 0x1d;
      }
    }
  }
  FUN_028b92dc(plVar17,iVar15,plVar37,&local_68);
  lVar16 = plVar17[0x12];
  plVar31 = *(long **)(param_2 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar1 = PTR_DAT_04379528;
    if (iVar15 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_02db8f7c;
  *(long **)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = plVar31;
  *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
  plVar19 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x1a0,0x10);
  if (plVar19 == (long *)0x0) goto LAB_02db8f98;
  FUN_00afa5ac();
  puVar4 = PTR_DAT_0437a7b8;
  puVar1 = PTR_DAT_0437a7b8 + 0x88;
  *plVar19 = (long)(PTR_DAT_0437a7b8 + 0x10);
  pcVar33 = (code *)(plVar19 + 9);
  *(undefined **)pcVar33 = puVar1;
  plVar19[10] = (long)(puVar4 + 0x128);
  nn::os::InitializeLightEvent((long)plVar19 + 0x6c,0,1);
  *(undefined8 *)((long)plVar19 + 0x85) = 0;
  plVar19[0xf] = 0;
  plVar19[0x10] = 0;
  plVar19[0x12] = (long)&PTR_LAB_04274490;
  *plVar19 = (long)&PTR_LAB_042742f0;
  *(undefined ***)pcVar33 = &PTR_LAB_042743c8;
  plVar19[10] = (long)&PTR_LAB_04274468;
  plVar19[0x15] = 0;
  plVar19[0x16] = 0;
  puVar1 = PTR_DAT_04388568 + 0x10;
  plVar19[0x17] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x13] = 0;
  plVar19[0x14] = (long)puVar1;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  lVar36 = *(long *)PTR_DAT_0437a120;
  lVar29 = *(long *)(PTR_DAT_0437a120 + 8);
  plVar19[0x20] = lVar36;
  plVar19[0x21] = lVar29;
  lVar26 = *(long *)PTR_DAT_04379570;
  lVar22 = *(long *)(PTR_DAT_04379570 + 8);
  *(undefined1 *)(plVar19 + 0x32) = 1;
  plVar19[0x26] = lVar36;
  plVar19[0x27] = lVar29;
  plVar19[0x2c] = 0x200000002;
  plVar19[0x24] = 0;
  plVar19[0x25] = 0;
  plVar19[0x2a] = 0;
  plVar19[0x2b] = 0;
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  plVar19[0x28] = lVar26;
  plVar19[0x29] = lVar22;
  plVar19[0x22] = lVar26;
  plVar19[0x23] = lVar22;
  plVar19[0x30] = lVar26;
  plVar19[0x31] = lVar22;
  plVar19[1] = (long)plVar31;
  plVar19[2] = (long)plVar19;
  plVar19[3] = 0x1a0;
  plVar19[4] = 0x10;
  *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
  lVar24 = plVar19[0xb];
  if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_02db8f80;
  if (*(long *)(lVar24 + 0x10) == 0) {
    uVar18 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
    *(undefined8 *)(lVar24 + 0x10) = uVar18;
  }
  piVar27 = (int *)(lVar24 + 0xc);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
    if (bVar9) {
      *piVar27 = *piVar27 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  (**(code **)(*plVar19 + 0x48))(plVar19,3000);
  local_110 = pcVar33;
  (**(code **)(plVar19[9] + 0x10))(pcVar33);
  FUN_028a4b90(param_2,&local_110);
  if (local_110 != (code *)0x0) {
    (**(code **)(*(long *)local_110 + 0x18))();
  }
  FUN_028f03dc(plVar19,param_1 + 200,plVar37);
  plVar31 = *(long **)(param_2 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar1 = PTR_DAT_04379528;
    if (iVar15 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_02db8f7c;
  *(long **)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = plVar31;
  *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
  plVar20 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x290,0x10);
  if (plVar20 == (long *)0x0) goto LAB_02db8f98;
  FUN_00afa5ac();
  puVar4 = PTR_DAT_0437a7b8;
  puVar1 = PTR_DAT_0437a7b8 + 0x88;
  *plVar20 = (long)(PTR_DAT_0437a7b8 + 0x10);
  pcVar33 = (code *)(plVar20 + 9);
  *(undefined **)pcVar33 = puVar1;
  plVar20[10] = (long)(puVar4 + 0x128);
  nn::os::InitializeLightEvent((long)plVar20 + 0x6c,0,1);
  *(undefined8 *)((long)plVar20 + 0x85) = 0;
  plVar20[0xf] = 0;
  plVar20[0x10] = 0;
  plVar20[0x13] = (long)&PTR_LAB_04273a78;
  *plVar20 = (long)&PTR_LAB_04273800;
  *(undefined ***)pcVar33 = &PTR_LAB_04273920;
  plVar20[0x12] = (long)&PTR_LAB_042739e8;
  plVar20[10] = (long)&PTR_LAB_042739c0;
  *(undefined4 *)(plVar20 + 0x1a) = 0;
  *(undefined4 *)(plVar20 + 0x29) = 0;
  plVar20[0x4b] = 0;
  plVar20[0x50] = 0;
  plVar20[0x4f] = 0;
  plVar20[0x4e] = 0;
  plVar20[0x4d] = 0;
  plVar20[0x16] = 0;
  plVar20[0x17] = plVar20[1];
  plVar20[0x25] = 0;
  plVar20[0x26] = plVar20[1];
  plVar20[0x18] = 0x7ffffffffffffff;
  plVar20[0x19] = 0;
  plVar20[0x27] = 0x1ffffffffffffff;
  plVar20[0x28] = 0;
  plVar20[0x14] = 0;
  plVar20[0x15] = 0;
  plVar20[0x1b] = 0;
  plVar20[0x1c] = 0;
  plVar20[0x1d] = 0;
  plVar20[0x1e] = 0;
  plVar20[0x1f] = 0;
  plVar20[0x20] = 0;
  plVar20[0x21] = 0;
  plVar20[0x22] = 0;
  plVar20[0x23] = 0;
  plVar20[0x24] = 0;
  plVar20[0x2a] = 0;
  plVar20[0x2b] = 0;
  plVar20[0x2c] = 0;
  plVar20[0x2d] = 0;
  plVar20[0x3c] = 0;
  plVar20[0x3d] = 0;
  plVar20[0x3a] = 0;
  plVar20[0x3b] = 0;
  plVar20[1] = (long)plVar31;
  plVar20[2] = (long)plVar20;
  plVar20[3] = 0x290;
  plVar20[4] = 0x10;
  *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
  lVar24 = plVar20[0xb];
  if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_02db8f80;
  if (*(long *)(lVar24 + 0x10) == 0) {
    uVar18 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
    *(undefined8 *)(lVar24 + 0x10) = uVar18;
  }
  piVar27 = (int *)(lVar24 + 0xc);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
    if (bVar9) {
      *piVar27 = *piVar27 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  (**(code **)(*plVar20 + 0x48))(plVar20,1000);
  local_110 = pcVar33;
  (**(code **)(plVar20[9] + 0x10))(pcVar33);
  FUN_028a4b90(param_2,&local_110);
  if (local_110 != (code *)0x0) {
    (**(code **)(*(long *)local_110 + 0x18))();
  }
  plVar20[0x4a] = lVar16;
  plVar20[0x4c] = (long)(plVar19 + 0x12);
  plVar31 = *(long **)(plVar20[0x10] + 0x68);
  if (plVar31 != (long *)0x0) {
    (**(code **)(*plVar31 + 0x10))(plVar31);
  }
  plVar21 = (long *)plVar20[0x4b];
  plVar20[0x4b] = (long)plVar31;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x18))();
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_028db740(plVar20,param_1 + 0x128,plVar37);
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    FUN_028dc588(plVar20,param_1 + 0xf8);
  }
  plVar19[0x1e] = (long)(plVar20 + 0x13);
  lVar16 = *(long *)(param_1 + 0x160);
  if (((lVar16 != 0) && (*(char *)(lVar16 + 0x1e1) != '\0')) &&
     ((piVar27 = (int *)((long)*(uint **)(lVar16 + 0x250) + (ulong)**(uint **)(lVar16 + 0x250)),
      piVar27 != (int *)0x0 &&
      ((4 < *(ushort *)((long)piVar27 - (long)*piVar27) &&
       (uVar30 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[2], uVar30 != 0)))))) {
    puVar6 = (uint *)((long)piVar27 + uVar30);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    puVar25 = puVar6 + 1;
    uVar30 = (ulong)*puVar6;
    if (uVar30 != 0) {
      iVar15 = 0;
      puVar6 = puVar25 + uVar30;
      do {
        piVar27 = (int *)((long)puVar25 + (ulong)*puVar25);
        if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 0x11) ||
           (uVar30 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[8], uVar30 == 0)) {
          uVar23 = 5000;
        }
        else {
          uVar23 = 5000;
          if (*(char *)((long)piVar27 + uVar30) != '\0') {
            uVar23 = 0x1389;
          }
        }
        plVar31 = *(long **)(param_2 + 8);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar14 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar1 = PTR_DAT_04379528;
          if (iVar14 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_02db8f7c;
        *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar31;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        plVar21 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x2630,0x10);
        if (plVar21 == (long *)0x0) {
          lVar16 = *plVar31;
          goto LAB_02db8fb8;
        }
        FUN_00afa5ac();
        puVar4 = PTR_DAT_0437a7b8;
        pLVar2 = (LightEventType *)((long)plVar21 + 0x6c);
        puVar1 = PTR_DAT_0437a7b8 + 0x88;
        *plVar21 = (long)(PTR_DAT_0437a7b8 + 0x10);
        pcVar33 = (code *)(plVar21 + 9);
        *(undefined **)pcVar33 = puVar1;
        plVar21[10] = (long)(puVar4 + 0x128);
        nn::os::InitializeLightEvent(pLVar2,0,1);
        plVar35 = plVar21 + 0xf;
        *plVar35 = 0;
        *plVar21 = (long)&PTR_LAB_0429a338;
        *(undefined8 *)((long)plVar21 + 0x85) = 0;
        plVar21[0x10] = 0;
        *(undefined ***)pcVar33 = &PTR_LAB_0429a3c8;
        plVar21[10] = (long)&PTR_LAB_0429a468;
        *(undefined4 *)((long)plVar21 + 0x8d) = 0;
        plVar21[0x13] = 0;
        plVar21[0x14] = (long)&DAT_cbf29ce484222645;
        plVar21[0x1d] = 0;
        plVar21[0x17] = 0;
        plVar21[0x18] = (long)&DAT_cbf29ce484222645;
        lVar24 = 0xf0;
        plVar21[0x15] = (long)&DAT_03996322;
        plVar21[0x16] = 0;
        plVar21[0x19] = (long)&DAT_03996322;
        plVar21[0x1a] = 0;
        plVar21[0x1b] = 0;
        plVar21[0x1c] = 0;
        do {
          puVar32 = (undefined8 *)((long)plVar21 + lVar24);
          lVar24 = lVar24 + 0x1c0;
          *(undefined4 *)(puVar32 + 0xc) = 0;
          *(undefined4 *)(puVar32 + 0x1a) = 0;
          puVar32[6] = 0;
          puVar32[7] = 0;
          *(undefined4 *)(puVar32 + 0x28) = 0;
          *(undefined4 *)(puVar32 + 0x36) = 0;
          puVar32[4] = 0;
          puVar32[5] = 0;
          puVar32[2] = 0;
          puVar32[3] = 0;
          *puVar32 = 0;
          puVar32[1] = 0;
          puVar32[8] = lVar26;
          puVar32[9] = lVar22;
          puVar32[10] = 0;
          puVar32[0xb] = 0;
          puVar32[0xe] = 0;
          puVar32[0xf] = 0;
          puVar32[0x10] = 0;
          puVar32[0x11] = 0;
          puVar32[0x12] = 0;
          puVar32[0x13] = 0;
          puVar32[0x14] = 0;
          puVar32[0x15] = 0;
          puVar32[0x16] = lVar26;
          puVar32[0x17] = lVar22;
          puVar32[0x18] = 0;
          puVar32[0x19] = 0;
          puVar32[0x22] = 0;
          puVar32[0x23] = 0;
          puVar32[0x20] = 0;
          puVar32[0x21] = 0;
          puVar32[0x1e] = 0;
          puVar32[0x1f] = 0;
          puVar32[0x1c] = 0;
          puVar32[0x1d] = 0;
          puVar32[0x24] = lVar26;
          puVar32[0x25] = lVar22;
          puVar32[0x26] = 0;
          puVar32[0x27] = 0;
          puVar32[0x30] = 0;
          puVar32[0x31] = 0;
          puVar32[0x2e] = 0;
          puVar32[0x2f] = 0;
          puVar32[0x2c] = 0;
          puVar32[0x2d] = 0;
          puVar32[0x2a] = 0;
          puVar32[0x2b] = 0;
          puVar32[0x32] = lVar26;
          puVar32[0x33] = lVar22;
          puVar32[0x34] = 0;
          puVar32[0x35] = 0;
        } while (puVar32 + 0x38 != plVar21 + 0x39e);
        memset(plVar21 + 0x39e,0,0x104);
        lVar24 = 0x1e00;
        do {
          puVar32 = (undefined8 *)((long)plVar21 + lVar24);
          lVar24 = lVar24 + 0x80;
          *puVar32 = 0;
          puVar32[1] = 0;
          puVar32[2] = lVar26;
          puVar32[3] = lVar22;
          puVar32[4] = 0;
          puVar32[5] = 0;
          puVar32[6] = lVar26;
          puVar32[7] = lVar22;
          puVar32[8] = 0;
          puVar32[9] = 0;
          puVar32[10] = lVar26;
          puVar32[0xb] = lVar22;
          puVar32[0xc] = 0;
          puVar32[0xd] = 0;
          puVar32[0xe] = lVar26;
          puVar32[0xf] = lVar22;
        } while (puVar32 + 0x10 != plVar21 + 0x4c0);
        *(undefined2 *)((long)plVar21 + 0x2604) = 0;
        *(undefined4 *)(plVar21 + 0x4c0) = 0;
        plVar21[0x4c1] = 0x3e4ccccd42340000;
        plVar21[0x4c2] = 0x3dcccccd3dcccccd;
        plVar21[1] = (long)plVar31;
        plVar21[2] = (long)plVar21;
        plVar21[0x4c3] = 0x3dcccccd3eb33333;
        plVar21[3] = 0x2630;
        plVar21[0x4c4] = 0;
        plVar21[4] = 0x10;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        lVar16 = plVar21[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02db8f80;
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar18;
        }
        piVar3 = (int *)(lVar16 + 0xc);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar9) {
            *piVar3 = *piVar3 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar16 = nn::os::GetCurrentThread();
        do {
          if (*plVar35 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent(pLVar2);
              while (*plVar35 == 0) {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                if (bVar9) {
                  *plVar35 = lVar16;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB_02db7064;
              }
            } while( true );
          }
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar9) {
            *plVar35 = lVar16;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
LAB_02db7064:
        *(undefined4 *)(plVar21 + 0x11) = uVar23;
        plVar21[0xf] = 0;
        nn::os::SignalLightEvent(pLVar2);
        local_110 = pcVar33;
        (**(code **)(plVar21[9] + 0x10))(pcVar33);
        FUN_028a4b90(param_2,&local_110);
        if (local_110 != (code *)0x0) {
          (**(code **)(*(long *)local_110 + 0x18))();
        }
        FUN_02dc0e48(plVar21,piVar27);
        lVar16 = plVar21[0xb];
        *(int *)((long)plVar21 + 0x2624) = iVar15;
        iVar15 = iVar15 + 1;
        piVar27 = (int *)(lVar16 + 0xc);
        do {
          iVar14 = *piVar27;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar9) {
            *piVar27 = iVar14 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar21 + 0x20))(plVar21);
        }
        puVar25 = puVar25 + 1;
      } while (puVar25 != puVar6);
    }
  }
  lVar16 = *(long *)(param_1 + 0x1f0);
  if (((lVar16 == 0) || (*(char *)(lVar16 + 0x1e1) == '\0')) ||
     (lVar16 = (long)*(uint **)(lVar16 + 0x250) + (ulong)**(uint **)(lVar16 + 0x250), lVar16 == 0))
  goto LAB_02db7354;
  plVar31 = *(long **)(param_2 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar1 = PTR_DAT_04379528;
    if (iVar15 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_02db8f7c;
  *(long **)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = plVar31;
  *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
  plVar21 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x160,0x10);
  if (plVar21 == (long *)0x0) {
    (**(code **)(*plVar31 + 0xb8))(plVar31);
    FUN_02dda798(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x160;
    _DAT_00000020 = 0x10;
    _DAT_00000008 = plVar31;
    *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
  }
  else {
    FUN_02dda798(plVar21);
    plVar21[1] = (long)plVar31;
    plVar21[2] = (long)plVar21;
    plVar21[3] = 0x160;
    plVar21[4] = 0x10;
    *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
    lVar24 = plVar21[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_02db8f80;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar18;
    }
    piVar27 = (int *)(lVar24 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = *piVar27 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar24 = nn::os::GetCurrentThread();
  plVar31 = plVar21 + 0xf;
  do {
    if (*plVar31 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar21 + 0x6c));
        while (*plVar31 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar9) {
            *plVar31 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_02db72d0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar9) {
      *plVar31 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_02db72d0:
  *(undefined4 *)(plVar21 + 0x11) = 9000;
  plVar21[0xf] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar21 + 0x6c));
  local_110 = (code *)(plVar21 + 9);
  pcVar33 = (code *)0x0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*(long *)local_110 + 0x10))();
    pcVar33 = local_110;
  }
  local_110 = pcVar33;
  FUN_028a4b90(param_2,&local_110);
  if (local_110 != (code *)0x0) {
    (**(code **)(*(long *)local_110 + 0x18))();
  }
  FUN_02dda8f4(plVar21,lVar16);
  if (plVar21 == (long *)0x0) {
LAB_02db7354:
    if (*(long *)(param_1 + 400) != 0) goto LAB_02db7364;
LAB_02db735c:
    if (*(char *)(param_1 + 0x2b0) != '\0') goto LAB_02db7364;
  }
  else {
    lVar16 = plVar21[0xb];
    piVar27 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar27;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = iVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar15 + -1 != 0) goto LAB_02db7354;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
    if (*(long *)(param_1 + 400) == 0) goto LAB_02db735c;
LAB_02db7364:
    plVar31 = *(long **)(param_2 + 8);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar1 = PTR_DAT_04379528;
      if (iVar15 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_02db8f7c;
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar31;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    plVar21 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x140,0x10);
    if (plVar21 == (long *)0x0) {
      lVar16 = *plVar31;
LAB_02db8fb8:
      (**(code **)(lVar16 + 0xb8))(plVar31);
      FUN_00afa5ac(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00afa5ac();
    puVar4 = PTR_DAT_0437a7b8;
    puVar1 = PTR_DAT_0437a7b8 + 0x88;
    *plVar21 = (long)(PTR_DAT_0437a7b8 + 0x10);
    pcVar33 = (code *)(plVar21 + 9);
    *(undefined **)pcVar33 = puVar1;
    plVar21[10] = (long)(puVar4 + 0x128);
    nn::os::InitializeLightEvent((long)plVar21 + 0x6c,0,1);
    *(undefined8 *)((long)plVar21 + 0x85) = 0;
    *plVar21 = (long)&PTR_FUN_0429a800;
    plVar21[1] = (long)plVar31;
    plVar21[0xf] = 0;
    plVar21[0x10] = 0;
    *(undefined ***)pcVar33 = &PTR_LAB_0429a890;
    plVar21[10] = (long)&PTR_LAB_0429a930;
    plVar21[0x12] = 0;
    *(undefined2 *)(plVar21 + 0x26) = 0x100;
    plVar21[0x19] = 0;
    plVar21[4] = 0x10;
    plVar21[0x13] = 0;
    plVar21[0x14] = 0;
    plVar21[0x15] = 0;
    plVar21[0x16] = 0;
    plVar21[0x17] = 0;
    plVar21[0x18] = 0;
    plVar21[2] = (long)plVar21;
    plVar21[3] = 0x140;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    lVar16 = plVar21[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02db8f80;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar18;
    }
    piVar27 = (int *)(lVar16 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = *piVar27 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    (**(code **)(*plVar21 + 0x48))(plVar21,10000);
    local_110 = pcVar33;
    (**(code **)(plVar21[9] + 0x10))(pcVar33);
    FUN_028a4b90(param_2,&local_110);
    if (local_110 != (code *)0x0) {
      (**(code **)(*(long *)local_110 + 0x18))();
    }
    FUN_02dd0ce0(plVar21,param_1 + 0x188,plVar37);
    if ((*(char *)(param_1 + 0x2b0) != '\0') &&
       (lVar16 = **(long **)(param_1 + 0x2d8), lVar16 != (*(long **)(param_1 + 0x2d8))[1])) {
      do {
        FUN_02dd3c5c(0x3dcccccd,0,plVar21[0x12],lVar16,0);
        lVar16 = lVar16 + 0x30;
      } while (lVar16 != *(long *)(*(long *)(param_1 + 0x2d8) + 8));
    }
    lVar16 = plVar21[0xb];
    piVar27 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar27;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = iVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  puVar1 = PTR_DAT_0437a570;
  if (((*PTR_DAT_0437a570 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
    lVar16 = plVar37[0x19];
    if (lVar16 == 0) goto LAB_02db757c;
LAB_02db8bc0:
    if (*(long *)(lVar16 + 0x88) == 0) goto LAB_02db7a38;
LAB_02db758c:
    uVar18 = *(undefined8 *)(param_1 + 8);
    if (((*puVar1 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a570);
      lVar16 = plVar37[0x19];
      if (lVar16 == 0) goto LAB_02db75a4;
LAB_02db8ca8:
      puVar32 = (undefined8 *)(lVar16 + 0x88);
    }
    else {
      lVar16 = plVar37[0x19];
      if (lVar16 != 0) goto LAB_02db8ca8;
LAB_02db75a4:
      puVar32 = (undefined8 *)PTR_DAT_0437a578;
    }
    FUN_02ca0e60(&local_110,uVar18,param_1 + 0x1b8,*puVar32);
    if (local_110 == (code *)0x0) {
      local_110 = (code *)0x0;
      goto LAB_02db7a38;
    }
    if (((*puVar1 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a570);
      lVar16 = plVar37[0x19];
      if (lVar16 == 0) goto LAB_02db75d8;
LAB_02db8d74:
      puVar32 = (undefined8 *)(lVar16 + 0x88);
    }
    else {
      lVar16 = plVar37[0x19];
      if (lVar16 != 0) goto LAB_02db8d74;
LAB_02db75d8:
      puVar32 = (undefined8 *)PTR_DAT_0437a578;
    }
    plVar31 = *(long **)(param_2 + 8);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar4 = PTR_DAT_04379528;
      if (iVar15 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_02db8f7c;
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar31;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    plVar21 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0xb8,8);
    if (plVar21 == (long *)0x0) {
      (**(code **)(*plVar31 + 0xb8))(plVar31);
    }
    plVar35 = (long *)*puVar32;
    if (plVar35 != (long *)0x0) {
      plVar34 = plVar35 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar9) {
          *(int *)plVar34 = (int)*plVar34 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    FUN_00afa5ac(plVar21);
    puVar10 = PTR_DAT_0437a7b8;
    puVar4 = PTR_DAT_0437a7b8 + 0x88;
    *plVar21 = (long)(PTR_DAT_0437a7b8 + 0x10);
    plVar34 = plVar21 + 9;
    *plVar34 = (long)puVar4;
    plVar21[10] = (long)(puVar10 + 0x128);
    nn::os::InitializeLightEvent((long)plVar21 + 0x6c,0,1);
    *plVar21 = (long)&PTR_LAB_0429a088;
    *(undefined8 *)((long)plVar21 + 0x85) = 0;
    plVar21[0xf] = 0;
    plVar21[0x10] = 0;
    *plVar34 = (long)&PTR_LAB_0429a118;
    plVar21[10] = (long)&PTR_LAB_0429a1b8;
    plVar21[0x12] = (long)plVar35;
    if (plVar35 == (long *)0x0) {
      plVar21[0x15] = 0;
      plVar21[0x16] = 0;
      plVar21[0x13] = 0;
      plVar21[0x14] = 0;
    }
    else {
      plVar5 = plVar35 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      plVar21[0x15] = 0;
      plVar21[0x16] = 0;
      plVar21[0x13] = 0;
      plVar21[0x14] = 0;
      do {
        iVar15 = (int)*plVar5 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *(int *)plVar5 = iVar15;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
    }
    plVar21[1] = (long)plVar31;
    plVar21[2] = (long)plVar21;
    plVar21[3] = 0xb8;
    plVar21[4] = 8;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    lVar16 = plVar21[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02db8f80;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar18;
    }
    piVar27 = (int *)(lVar16 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = *piVar27 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    (**(code **)(*plVar21 + 0x48))(plVar21,4000);
    local_90[0] = plVar34;
    (**(code **)(plVar21[9] + 0x10))(plVar34);
    FUN_028a4b90(param_2,local_90);
    if (local_90[0] != (long *)0x0) {
      (**(code **)(*local_90[0] + 0x18))();
    }
    puVar13 = local_f8;
    puVar12 = local_100;
    pcVar11 = local_108;
    pcVar33 = local_110;
    local_110 = (code *)0x0;
    puVar32 = (undefined8 *)plVar21[0x13];
    plVar21[0x13] = (long)pcVar33;
    lVar16 = tpidr_el0;
    if (puVar32 != (undefined8 *)0x0) {
      FUN_02bcbe58(local_90,0);
      (**(code **)*puVar32)(puVar32);
      plVar31 = (long *)plVar21[0x14];
      lVar24 = plVar21[0x15];
      lVar36 = plVar21[0x16];
      uVar30 = (**(code **)(*plVar31 + 0xc0))(plVar31);
      if ((uVar30 & 1) == 0) {
LAB_02db7840:
        (**(code **)(*plVar31 + 0x18))(plVar31,puVar32,lVar24,lVar36);
      }
      else {
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_02db7840;
        FUN_02bcc824(plVar31,puVar32,lVar24,lVar36);
      }
      if (*(char *)(lVar16 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar16 + 0x38d488) = 1;
        *(undefined8 *)(lVar16 + 0x38d478) = 0;
        *(undefined8 *)(lVar16 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar15 = *(int *)(lVar16 + 0x38d480) + -1;
      *(int *)(lVar16 + 0x38d480) = iVar15;
      if (iVar15 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar16 + 0x38d484) = 0;
      }
    }
    lVar24 = plVar21[0xb];
    piVar27 = (int *)(lVar24 + 0xc);
    plVar21[0x16] = (long)puVar13;
    plVar21[0x14] = (long)pcVar11;
    plVar21[0x15] = (long)puVar12;
    do {
      iVar15 = *piVar27;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = iVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
    pcVar33 = local_110;
    local_110 = (code *)0x0;
    if (pcVar33 == (code *)0x0) goto LAB_02db7a38;
    FUN_02bcbe58(local_90,0);
    (*(code *)**(undefined8 **)pcVar33)(pcVar33);
    puVar13 = local_f8;
    puVar12 = local_100;
    pcVar11 = local_108;
    uVar30 = (**(code **)(*(long *)local_108 + 0xc0))(local_108);
    if ((uVar30 & 1) == 0) {
LAB_02db798c:
      (**(code **)(*(long *)pcVar11 + 0x18))(pcVar11,pcVar33,puVar12,puVar13);
    }
    else {
      if (*(char *)(lVar16 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar16 + 0x38d488) = 1;
        *(undefined8 *)(lVar16 + 0x38d478) = 0;
        *(undefined8 *)(lVar16 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_02db798c;
      FUN_02bcc824(pcVar11,pcVar33,puVar12,puVar13);
    }
    if (*(char *)(lVar16 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar16 + 0x38d488) = 1;
      *(undefined8 *)(lVar16 + 0x38d478) = 0;
      *(undefined8 *)(lVar16 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar15 = *(int *)(lVar16 + 0x38d480) + -1;
    *(int *)(lVar16 + 0x38d480) = iVar15;
    if (iVar15 != 0) goto LAB_02db7a38;
    FUN_02bcc320();
    if (*(char *)(lVar16 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar16 + 0x38d488) = 1;
      *(undefined8 *)(lVar16 + 0x38d478) = 0;
      *(undefined8 *)(lVar16 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar16 + 0x38d484) = 0;
    if ((*puVar1 & 1) == 0) goto LAB_02db8bd0;
LAB_02db7a40:
    lVar16 = plVar37[0x19];
    if (lVar16 != 0) goto LAB_02db8c10;
LAB_02db7a48:
    if (*(long *)PTR_DAT_0437a578 != 0) goto LAB_02db7a58;
LAB_02db7ffc:
    lVar16 = *(long *)(param_1 + 0x250);
    if (lVar16 == 0) goto LAB_02db812c;
LAB_02db7f08:
    if ((*(char *)(lVar16 + 0x1e1) == '\0') ||
       (lVar16 = (long)*(uint **)(lVar16 + 0x250) + (ulong)**(uint **)(lVar16 + 0x250), lVar16 == 0)
       ) goto LAB_02db812c;
    plVar31 = *(long **)(param_2 + 8);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar4 = PTR_DAT_04379528;
      if (iVar15 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_02db8f7c;
    *(long **)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = plVar31;
    *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
    plVar21 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x1a0,0x10);
    if (plVar21 == (long *)0x0) {
      (**(code **)(*plVar31 + 0xb8))(plVar31);
      memset((void *)0x0,0,0x1a0);
      FUN_02dc0bc8(0);
      _DAT_00000010 = 0;
      _DAT_00000018 = 0x1a0;
      _DAT_00000020 = 0x10;
      _DAT_00000008 = plVar31;
      *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
    }
    else {
      memset(plVar21,0,0x1a0);
      FUN_02dc0bc8(plVar21);
      plVar21[1] = (long)plVar31;
      plVar21[2] = (long)plVar21;
      plVar21[3] = 0x1a0;
      plVar21[4] = 0x10;
      *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
      lVar24 = plVar21[0xb];
      if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_02db8f80;
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar18 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar18;
      }
      piVar27 = (int *)(lVar24 + 0xc);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar9) {
          *piVar27 = *piVar27 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    lVar24 = nn::os::GetCurrentThread();
    plVar31 = plVar21 + 0xf;
    do {
      if (*plVar31 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar21 + 0x6c));
          while (*plVar31 == 0) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar9) {
              *plVar31 = lVar24;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_02db80a8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar9) {
        *plVar31 = lVar24;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_02db80a8:
    *(undefined4 *)(plVar21 + 0x11) = 0x1194;
    plVar21[0xf] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar21 + 0x6c));
    local_110 = (code *)(plVar21 + 9);
    pcVar33 = (code *)0x0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*(long *)local_110 + 0x10))();
      pcVar33 = local_110;
    }
    local_110 = pcVar33;
    FUN_028a4b90(param_2,&local_110);
    if (local_110 != (code *)0x0) {
      (**(code **)(*(long *)local_110 + 0x18))();
    }
    FUN_02de4534(plVar21,lVar16);
    if (plVar21 == (long *)0x0) goto LAB_02db812c;
    lVar16 = plVar21[0xb];
    piVar27 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar27;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = iVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar15 + -1 != 0) goto LAB_02db812c;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
    lVar16 = *(long *)(param_1 + 0x280);
  }
  else {
    lVar16 = plVar37[0x19];
    if (lVar16 != 0) goto LAB_02db8bc0;
LAB_02db757c:
    if (*(long *)PTR_DAT_0437a578 != 0) goto LAB_02db758c;
LAB_02db7a38:
    if ((*puVar1 & 1) != 0) goto LAB_02db7a40;
LAB_02db8bd0:
    iVar15 = __cxa_guard_acquire(PTR_DAT_0437a570);
    if (iVar15 == 0) goto LAB_02db7a40;
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
    lVar16 = plVar37[0x19];
    if (lVar16 == 0) goto LAB_02db7a48;
LAB_02db8c10:
    if (*(long *)(lVar16 + 0x88) == 0) goto LAB_02db7ffc;
LAB_02db7a58:
    uVar18 = *(undefined8 *)(param_1 + 8);
    if (((*puVar1 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a570);
      lVar16 = plVar37[0x19];
      if (lVar16 == 0) goto LAB_02db7a70;
LAB_02db8cf0:
      puVar32 = (undefined8 *)(lVar16 + 0x88);
    }
    else {
      lVar16 = plVar37[0x19];
      if (lVar16 != 0) goto LAB_02db8cf0;
LAB_02db7a70:
      puVar32 = (undefined8 *)PTR_DAT_0437a578;
    }
    FUN_02dc4960(&local_110,uVar18,param_1 + 0x218,*puVar32);
    if (local_110 == (code *)0x0) {
      local_110 = (code *)0x0;
      goto LAB_02db7ffc;
    }
    if (((*puVar1 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a570);
      lVar16 = plVar37[0x19];
      if (lVar16 == 0) goto LAB_02db7aa4;
LAB_02db8e04:
      puVar32 = (undefined8 *)(lVar16 + 0x88);
    }
    else {
      lVar16 = plVar37[0x19];
      if (lVar16 != 0) goto LAB_02db8e04;
LAB_02db7aa4:
      puVar32 = (undefined8 *)PTR_DAT_0437a578;
    }
    plVar31 = *(long **)(param_2 + 8);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar4 = PTR_DAT_04379528;
      if (iVar15 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_02db8f7c;
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar31;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    plVar21 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0xb8,8);
    if (plVar21 == (long *)0x0) {
      (**(code **)(*plVar31 + 0xb8))(plVar31);
    }
    plVar35 = (long *)*puVar32;
    if (plVar35 != (long *)0x0) {
      plVar34 = plVar35 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar9) {
          *(int *)plVar34 = (int)*plVar34 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    FUN_00afa5ac(plVar21);
    puVar10 = PTR_DAT_0437a7b8;
    puVar4 = PTR_DAT_0437a7b8 + 0x88;
    *plVar21 = (long)(PTR_DAT_0437a7b8 + 0x10);
    plVar34 = plVar21 + 9;
    *plVar34 = (long)puVar4;
    plVar21[10] = (long)(puVar10 + 0x128);
    nn::os::InitializeLightEvent((long)plVar21 + 0x6c,0,1);
    *plVar21 = (long)&PTR_LAB_0429a1e0;
    *(undefined8 *)((long)plVar21 + 0x85) = 0;
    plVar21[0xf] = 0;
    plVar21[0x10] = 0;
    *plVar34 = (long)&PTR_LAB_0429a270;
    plVar21[10] = (long)&PTR_LAB_0429a310;
    plVar21[0x12] = (long)plVar35;
    if (plVar35 == (long *)0x0) {
      plVar21[0x15] = 0;
      plVar21[0x16] = 0;
      plVar21[0x13] = 0;
      plVar21[0x14] = 0;
    }
    else {
      plVar5 = plVar35 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      plVar21[0x15] = 0;
      plVar21[0x16] = 0;
      plVar21[0x13] = 0;
      plVar21[0x14] = 0;
      do {
        iVar15 = (int)*plVar5 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *(int *)plVar5 = iVar15;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
    }
    plVar21[1] = (long)plVar31;
    plVar21[2] = (long)plVar21;
    plVar21[3] = 0xb8;
    plVar21[4] = 8;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    lVar16 = plVar21[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02db8f80;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar18;
    }
    piVar27 = (int *)(lVar16 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = *piVar27 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    (**(code **)(*plVar21 + 0x48))(plVar21,6000);
    local_90[0] = plVar34;
    (**(code **)(plVar21[9] + 0x10))(plVar34);
    FUN_028a4b90(param_2,local_90);
    if (local_90[0] != (long *)0x0) {
      (**(code **)(*local_90[0] + 0x18))();
    }
    puVar13 = local_f8;
    puVar12 = local_100;
    pcVar11 = local_108;
    pcVar33 = local_110;
    local_110 = (code *)0x0;
    puVar32 = (undefined8 *)plVar21[0x13];
    plVar21[0x13] = (long)pcVar33;
    if (puVar32 != (undefined8 *)0x0) {
      FUN_02bcbe58(local_90,0);
      (**(code **)*puVar32)(puVar32);
      plVar31 = (long *)plVar21[0x14];
      lVar16 = plVar21[0x15];
      lVar24 = plVar21[0x16];
      uVar30 = (**(code **)(*plVar31 + 0xc0))(plVar31);
      if ((uVar30 & 1) == 0) {
LAB_02db7d10:
        (**(code **)(*plVar31 + 0x18))(plVar31,puVar32,lVar16,lVar24);
      }
      else {
        lVar36 = tpidr_el0;
        if (*(char *)(lVar36 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar36 + 0x38d488) = 1;
          *(undefined8 *)(lVar36 + 0x38d478) = 0;
          *(undefined8 *)(lVar36 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar36 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar36 + 0x38d480) < 1) goto LAB_02db7d10;
        FUN_02bcc824(plVar31,puVar32,lVar16,lVar24);
      }
      lVar16 = tpidr_el0;
      if (*(char *)(lVar16 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar16 + 0x38d488) = 1;
        *(undefined8 *)(lVar16 + 0x38d478) = 0;
        *(undefined8 *)(lVar16 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar15 = *(int *)(lVar16 + 0x38d480) + -1;
      *(int *)(lVar16 + 0x38d480) = iVar15;
      if (iVar15 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar16 + 0x38d484) = 0;
      }
    }
    lVar16 = plVar21[0xb];
    piVar27 = (int *)(lVar16 + 0xc);
    plVar21[0x16] = (long)puVar13;
    plVar21[0x14] = (long)pcVar11;
    plVar21[0x15] = (long)puVar12;
    do {
      iVar15 = *piVar27;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = iVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
    pcVar33 = local_110;
    local_110 = (code *)0x0;
    if (pcVar33 == (code *)0x0) goto LAB_02db7ffc;
    FUN_02bcbe58(local_90,0);
    (*(code *)**(undefined8 **)pcVar33)(pcVar33);
    puVar13 = local_f8;
    puVar12 = local_100;
    pcVar11 = local_108;
    uVar30 = (**(code **)(*(long *)local_108 + 0xc0))(local_108);
    if ((uVar30 & 1) == 0) {
LAB_02db7e60:
      (**(code **)(*(long *)pcVar11 + 0x18))(pcVar11,pcVar33,puVar12,puVar13);
    }
    else {
      lVar16 = tpidr_el0;
      if (*(char *)(lVar16 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar16 + 0x38d488) = 1;
        *(undefined8 *)(lVar16 + 0x38d478) = 0;
        *(undefined8 *)(lVar16 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_02db7e60;
      FUN_02bcc824(pcVar11,pcVar33,puVar12,puVar13);
    }
    lVar16 = tpidr_el0;
    if (*(char *)(lVar16 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar16 + 0x38d488) = 1;
      *(undefined8 *)(lVar16 + 0x38d478) = 0;
      *(undefined8 *)(lVar16 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar15 = *(int *)(lVar16 + 0x38d480) + -1;
    *(int *)(lVar16 + 0x38d480) = iVar15;
    if (iVar15 != 0) goto LAB_02db7ffc;
    FUN_02bcc320();
    if (*(char *)(lVar16 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar16 + 0x38d488) = 1;
      *(undefined8 *)(lVar16 + 0x38d478) = 0;
      *(undefined8 *)(lVar16 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar16 + 0x38d484) = 0;
    lVar16 = *(long *)(param_1 + 0x250);
    if (lVar16 != 0) goto LAB_02db7f08;
LAB_02db812c:
    lVar16 = *(long *)(param_1 + 0x280);
  }
  if (lVar16 == 0) goto LAB_02db8440;
  if (((*puVar1 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
  }
  plVar31 = (long *)PTR_DAT_0437a578;
  if (plVar37[0x19] != 0) {
    plVar31 = (long *)(plVar37[0x19] + 0x88);
  }
  if ((((*plVar31 == 0) || (lVar16 = *(long *)(param_1 + 0x280), lVar16 == 0)) ||
      (*(char *)(lVar16 + 0x1e1) == '\0')) ||
     (lVar16 = (long)*(uint **)(lVar16 + 0x250) + (ulong)**(uint **)(lVar16 + 0x250), lVar16 == 0))
  goto LAB_02db8440;
  if (((*puVar1 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
  }
  if (plVar37[0x19] == 0) {
    puVar32 = (undefined8 *)PTR_DAT_0437a578;
  }
  else {
    puVar32 = (undefined8 *)(plVar37[0x19] + 0x88);
  }
  plVar31 = *(long **)(param_2 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar1 = PTR_DAT_04379528;
    if (iVar15 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar24 + 0x80)) {
LAB_02db8f7c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = plVar31;
  *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
  plVar21 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x288,8);
  if (plVar21 == (long *)0x0) {
    (**(code **)(*plVar31 + 0xb8))(plVar31);
  }
  local_110 = (code *)*puVar32;
  if (local_110 != (code *)0x0) {
    pcVar33 = local_110 + 0x50;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pcVar33,0x10);
      if (bVar9) {
        *(int *)pcVar33 = *(int *)pcVar33 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  FUN_02de7618(plVar21,&local_110);
  if (local_110 != (code *)0x0) {
    pcVar33 = local_110 + 0x50;
    do {
      iVar15 = *(int *)pcVar33;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pcVar33,0x10);
      if (bVar9) {
        *(int *)pcVar33 = iVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar15 + -1 == 0) {
      (**(code **)(*(long *)local_110 + 0x10))();
    }
  }
  plVar21[1] = (long)plVar31;
  plVar21[2] = (long)plVar21;
  plVar21[3] = 0x288;
  plVar21[4] = 8;
  *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
  if (plVar21 != (long *)0x0) {
    lVar24 = plVar21[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_02db8f80;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar18;
    }
    piVar27 = (int *)(lVar24 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = *piVar27 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar24 = nn::os::GetCurrentThread();
  plVar31 = plVar21 + 0xf;
  do {
    if (*plVar31 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar21 + 0x6c));
        while (*plVar31 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar9) {
            *plVar31 = lVar24;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_02db82f8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar9) {
      *plVar31 = lVar24;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_02db82f8:
  *(undefined4 *)(plVar21 + 0x11) = 7000;
  plVar21[0xf] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar21 + 0x6c));
  local_110 = (code *)(plVar21 + 9);
  pcVar33 = (code *)0x0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*(long *)local_110 + 0x10))();
    pcVar33 = local_110;
  }
  local_110 = pcVar33;
  FUN_028a4b90(param_2,&local_110);
  if (local_110 != (code *)0x0) {
    (**(code **)(*(long *)local_110 + 0x18))();
  }
  if (*(long *)(param_1 + 0x280) == 0) {
    lVar24 = FUN_00b779ac();
  }
  else {
    lVar24 = *(long *)(param_1 + 0x280) + 0x68;
  }
  lVar26 = *(long *)(param_1 + 0x70);
  lVar36 = *(long *)(lVar26 + 0x1e8);
  if (lVar36 == 0) {
    lVar36 = *(long *)(lVar26 + 8);
    lVar29 = *(long *)(lVar26 + 0x1b8);
    if (lVar29 != 0) goto LAB_02db8370;
LAB_02db8aa0:
    lVar22 = 0;
  }
  else {
    lVar29 = *(long *)(lVar26 + 0x1b8);
    if (lVar29 == 0) goto LAB_02db8aa0;
LAB_02db8370:
    lVar22 = 0;
    if (*(int *)(lVar29 + 0xc) != 0) {
      lVar22 = lVar26 + 0x1b0;
    }
  }
  FUN_02de7774(plVar21,lVar16,lVar24,lVar36,lVar22);
  if (plVar21 != (long *)0x0) {
    lVar16 = plVar21[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_02db8f80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar18;
    }
    piVar27 = (int *)(lVar16 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = *piVar27 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  local_110 = FUN_02dc0d58;
  local_108 = FUN_02dc0d8c;
  local_100 = &LAB_02dc0dc4;
  local_f8 = &LAB_02dc0e38;
  aplStack_f0[0] = plVar21;
  FUN_028dd5bc(plVar20,&local_110);
  pcVar33 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (undefined1 *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    (*pcVar33)(aplStack_f0);
  }
  if (plVar21 != (long *)0x0) {
    lVar16 = plVar21[0xb];
    piVar27 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar27;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar9) {
        *piVar27 = iVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
LAB_02db8440:
  lVar16 = plVar20[0xb];
  piVar27 = (int *)(lVar16 + 0xc);
  do {
    iVar15 = *piVar27;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
    if (bVar9) {
      *piVar27 = iVar15 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))();
  }
  lVar16 = plVar19[0xb];
  piVar27 = (int *)(lVar16 + 0xc);
  do {
    iVar15 = *piVar27;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
    if (bVar9) {
      *piVar27 = iVar15 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  lVar16 = plVar17[0xb];
  piVar27 = (int *)(lVar16 + 0xc);
  do {
    iVar15 = *piVar27;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
    if (bVar9) {
      *piVar27 = iVar15 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  if (plVar37 != (long *)0x0) {
    plVar31 = plVar37 + 10;
    do {
      iVar15 = (int)*plVar31 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar9) {
        *(int *)plVar31 = iVar15;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar37 + 0x10))(plVar37);
    }
  }
  return;
}


