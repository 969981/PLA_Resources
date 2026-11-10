/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8cf9c; name: FUN_02c8cf9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c8cf9c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined **ppuVar16;
  int *piVar17;
  undefined8 uVar18;
  long *local_90 [4];
  long *local_70;
  
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x268,8);
  puVar4 = PTR_DAT_04379528;
  if (puVar9 == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
    uVar14 = 0;
    uVar18 = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar5 = PTR_DAT_04379528;
      if (iVar8 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02c8d7c0;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_1;
    uVar14 = 0x268;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    memset(puVar9,0,0x268);
    *(undefined4 *)(puVar9 + 0xb) = 0;
    puVar9[0x10] = 0;
    puVar9[0x43] = &DAT_cbf29ce484222645;
    puVar9[7] = &DAT_cbf29ce484222645;
    puVar9[8] = &DAT_03996322;
    uVar18 = 8;
    *(undefined4 *)(puVar9 + 0x11) = 0;
    puVar9[0x16] = 0;
    *(undefined4 *)(puVar9 + 0x17) = 0;
    *(undefined4 *)(puVar9 + 0x1d) = 0;
    puVar9[0x1a] = &DAT_03996322;
    puVar9[0x22] = 0;
    *(undefined4 *)(puVar9 + 0x23) = 0;
    puVar9[0x28] = 0;
    *(undefined4 *)(puVar9 + 0x29) = 0;
    *(undefined4 *)(puVar9 + 0x2f) = 0;
    puVar9[0x2c] = &DAT_03996322;
    *(undefined4 *)(puVar9 + 0x35) = 0;
    puVar9[0x32] = &DAT_03996322;
    *(undefined4 *)(puVar9 + 0x3b) = 0;
    puVar9[0x38] = &DAT_03996322;
    *(undefined4 *)(puVar9 + 0x41) = 0;
    puVar9[0x3e] = &DAT_03996322;
    puVar9[0x42] = 0;
    puVar9[0x44] = &DAT_03996322;
    *(undefined4 *)(puVar9 + 0x47) = 0;
    puVar9[0x46] = 0;
    puVar9[0x45] = 0;
    puVar9[0xc] = 0;
    puVar9[0xd] = &DAT_cbf29ce484222645;
    puVar9[0x12] = 0;
    puVar9[0x13] = &DAT_cbf29ce484222645;
    puVar9[0x18] = 0;
    puVar9[0x19] = &DAT_cbf29ce484222645;
    puVar9[0x1e] = 0;
    puVar9[0x1f] = &DAT_cbf29ce484222645;
    puVar9[0x24] = 0;
    puVar9[0x25] = &DAT_cbf29ce484222645;
    puVar9[0x2a] = 0;
    puVar9[0x2b] = &DAT_cbf29ce484222645;
    puVar9[0x30] = 0;
    puVar9[0x31] = &DAT_cbf29ce484222645;
    puVar9[0x36] = 0;
    puVar9[0x37] = &DAT_cbf29ce484222645;
    puVar9[0x3c] = 0;
    puVar9[0x3d] = &DAT_cbf29ce484222645;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xe] = &DAT_03996322;
    puVar9[0xf] = 0;
    puVar9[0x14] = &DAT_03996322;
    puVar9[0x15] = 0;
    puVar9[0x1b] = 0;
    puVar9[0x1c] = 0;
    puVar9[0x20] = &DAT_03996322;
    puVar9[0x21] = 0;
    puVar9[0x26] = &DAT_03996322;
    puVar9[0x27] = 0;
    puVar9[0x2d] = 0;
    puVar9[0x2e] = 0;
    puVar9[0x33] = 0;
    puVar9[0x34] = 0;
    puVar9[0x39] = 0;
    puVar9[0x3a] = 0;
    puVar9[0x3f] = 0;
    puVar9[0x40] = 0;
    *(undefined8 *)((long)puVar9 + 0x25c) = 0;
    *(undefined4 *)((long)puVar9 + 0x264) = 0;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    plVar15 = param_1;
  }
  puVar6 = DAT_04407c08;
  bVar2 = DAT_04407c08 != (undefined8 *)0x0;
  DAT_04407c08 = puVar9;
  if (bVar2) {
    FUN_02bcbe58(local_90,0);
    FUN_00d141fc(puVar6);
    uVar7 = DAT_04407c20;
    uVar13 = DAT_04407c18;
    plVar12 = DAT_04407c10;
    uVar11 = (**(code **)(*DAT_04407c10 + 0xc0))(DAT_04407c10);
    lVar10 = tpidr_el0;
    if ((uVar11 & 1) == 0) {
LAB_02c8d1c0:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar6,uVar13,uVar7);
    }
    else {
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02c8d1c0;
      FUN_02bcc824(plVar12,puVar6,uVar13,uVar7);
    }
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar8 = *(int *)(lVar10 + 0x38d480) + -1;
    *(int *)(lVar10 + 0x38d480) = iVar8;
    if (iVar8 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar10 + 0x38d484) = 0;
    }
  }
  puVar9 = DAT_04407c08;
  uVar13 = param_2[1];
  DAT_04407c10 = plVar15;
  DAT_04407c18 = uVar14;
  DAT_04407c20 = uVar18;
  *DAT_04407c08 = *param_2;
  puVar9[1] = uVar13;
  uVar14 = param_2[2];
  uVar18 = param_2[3];
  uVar13 = param_2[5];
  puVar9[4] = param_2[4];
  puVar9[5] = uVar13;
  puVar9[2] = uVar14;
  puVar9[3] = uVar18;
  lVar10 = 0;
  do {
    plVar15 = *(long **)((long)param_2 + lVar10 + 0x30);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    plVar12 = *(long **)((long)puVar9 + lVar10 + 0x30);
    *(long **)((long)puVar9 + lVar10 + 0x30) = plVar15;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    *(undefined8 *)((long)puVar9 + lVar10 + 0x38) = *(undefined8 *)((long)param_2 + lVar10 + 0x38);
    *(undefined8 *)((long)puVar9 + lVar10 + 0x40) = *(undefined8 *)((long)param_2 + lVar10 + 0x40);
    *(undefined8 *)((long)puVar9 + lVar10 + 0x48) = *(undefined8 *)((long)param_2 + lVar10 + 0x48);
    plVar15 = *(long **)((long)param_2 + lVar10 + 0x50);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    plVar12 = *(long **)((long)puVar9 + lVar10 + 0x50);
    *(long **)((long)puVar9 + lVar10 + 0x50) = plVar15;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    lVar1 = lVar10 + 0x30;
    *(undefined4 *)((long)puVar9 + lVar10 + 0x58) = *(undefined4 *)((long)param_2 + lVar10 + 0x58);
    lVar10 = lVar1;
  } while (lVar1 != 0x210);
  puVar9[0x48] = param_2[0x48];
  uVar14 = param_2[0x49];
  uVar18 = param_2[0x4a];
  uVar13 = param_2[0x4b];
  puVar9[0x4c] = param_2[0x4c];
  puVar9[0x4b] = uVar13;
  puVar9[0x4a] = uVar18;
  puVar9[0x49] = uVar14;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar4 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (*(ulong *)(lVar10 + 0x80) < 0x10) {
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_1;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x58,8);
    if (puVar9 == (undefined8 *)0x0) {
      (**(code **)(*param_1 + 0xb8))(param_1);
      _DAT_00000050 = 0;
      _DAT_00000048 = 0;
      _DAT_00000040 = 0;
      _DAT_00000038 = 0;
      _DAT_00000030 = 0;
      _DAT_00000020 = 0;
      _DAT_00000018 = 0;
      _DAT_00000028 = 0;
      _DAT_00000010 = (undefined8 *)0x0;
      _DAT_00000008 = (long *)0x0;
      uRam0000000000000000 = 0;
      FUN_02c8daac(0);
      _DAT_00000018 = 0x58;
      _DAT_00000020 = 8;
      _DAT_00000008 = param_1;
      _DAT_00000010 = puVar9;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    else {
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      piVar17 = (int *)(puVar9 + 10);
      piVar17[0] = 0;
      piVar17[1] = 0;
      FUN_02c8daac(puVar9);
      puVar9[1] = param_1;
      puVar9[2] = puVar9;
      puVar9[3] = 0x58;
      puVar9[4] = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      do {
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar2) {
          *piVar17 = *piVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar15 = DAT_04407c28;
    DAT_04407c28 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      plVar12 = plVar15 + 10;
      do {
        iVar8 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    DAT_04407930 = 0;
    DAT_04407928 = 0x10000;
    DAT_04407a40 = 0;
    DAT_04407a48 = 0;
    DAT_04407a90 = 0;
    DAT_044079e0 = 0;
    DAT_04407988 = 0;
    DAT_04407a50 = 0;
    DAT_04407a58 = 0;
    _DAT_04407a60 = 0;
    DAT_04407a68 = 0;
    DAT_04407a70 = 0;
    DAT_04407a78 = 0;
    DAT_04407a80 = 0;
    DAT_04407a88 = 0;
    DAT_04407990 = 0;
    DAT_04407998 = 0;
    DAT_044079a0 = 0;
    DAT_044079a8 = 0;
    DAT_044079b0 = 0;
    DAT_044079b8 = 0;
    DAT_044079c0 = 0;
    DAT_044079c8 = 0;
    DAT_044079d0 = 0;
    DAT_044079d8 = 0;
    DAT_044079e8 = 0;
    DAT_04407940 = 0;
    _DAT_04407938 = 0x38a;
    DAT_04407948 = 0;
    DAT_04407950 = 0;
    DAT_04407958 = 0;
    DAT_04407960 = 0;
    DAT_04407968 = 0;
    DAT_04407970 = 0;
    DAT_04407978 = 0;
    DAT_04407980 = 0;
    DAT_04407a30 = 0;
    DAT_04407a38 = 0;
    DAT_04407a28 = 0;
    DAT_04407a10 = 0;
    DAT_04407a18 = 0;
    DAT_04407a00 = 0;
    DAT_04407a08 = 0;
    DAT_044079f0 = 0;
    DAT_044079f8 = 0;
    DAT_04407a20 = (ulong)*(byte *)(DAT_04407c08 + 0x4b) << 0x10;
    DAT_04407c28 = puVar9;
    FUN_02c517d0(param_1);
    uVar11 = 0;
    ppuVar16 = &PTR_PTR_0428af28;
    do {
      FUN_02c51370(local_90,uVar11 & 0xffffffff);
      FUN_00938764(ppuVar16,0,local_90,0,param_1,0);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_90[0] != (long *)0x0) {
        (**(code **)(*local_90[0] + 0x20))();
      }
      uVar11 = uVar11 + 1;
      ppuVar16 = ppuVar16 + 6;
    } while (uVar11 != 0x353);
    return;
  }
LAB_02c8d7c0:
                    /* WARNING: Subroutine does not return */
  abort();
}


