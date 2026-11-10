/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c99460; name: FUN_02c99460
 */


void FUN_02c99460(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  byte *__s;
  size_t sVar17;
  long lVar18;
  code *pcVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 *puVar24;
  ulong uVar25;
  byte *pbVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  undefined1 *local_130;
  undefined1 *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  long local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long local_70 [2];
  
  puVar5 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar18 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04295478;
  param_1[1] = lVar18;
  param_1[9] = (long)&PTR_LAB_042954b0;
  param_1[0xb] = 0;
  param_1[0xc] = (long)&PTR_LAB_042954e0;
  param_1[0xe] = (long)&PTR_LAB_042954e0;
  plVar23 = param_1 + 0x10;
  *plVar23 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = -1;
  param_1[0x15] = -1;
  param_1[0x16] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0xbc,0,1);
  param_1[0x1b] = 0;
  param_1[0x9c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xff00000000;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x50c,0,1);
  param_1[0xa3] = 0;
  param_1[0xa4] = 0x3f00000000;
  param_1[0xa5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x644,0,1);
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar18 = DAT_043f1798;
  lVar9 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar10 = lVar18;
  }
  param_1[0xcd] = lVar10;
  param_1[0xce] = 0xfffffffffffffff;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xd1] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar18 = DAT_043f1798;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar10 = lVar18;
  }
  param_1[0xd2] = lVar10;
  param_1[0xd3] = 0xfffffffffffffff;
  pbVar2 = (byte *)(param_1 + 0x2dc);
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0x3f800000;
  FUN_02c3b4e4(param_1 + 0xd8);
  FUN_02c49cec(param_1 + 0xe5);
  param_1[0xf2] = 0;
  FUN_02a70d04(param_1 + 0xf3);
  nn::os::InitializeLightEvent((long)param_1 + 0x7d4,0,1);
  param_1[0x102] = 2;
  param_1[0x103] = 0x200000025;
  param_1[0x104] = 0x400000003;
  *(undefined4 *)(param_1 + 0x105) = 5;
  param_1[0x100] = 0;
  param_1[0xff] = 0;
  param_1[0xfe] = 0;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0x101] = 1;
  *(undefined8 *)((long)param_1 + 0x82c) = 0;
  *(undefined8 *)((long)param_1 + 0x834) = 0;
  *(undefined4 *)((long)param_1 + 0x83c) = 0;
  param_1[0x108] = (long)&DAT_cbf29ce484222645;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = (long)&DAT_03996322;
  param_1[0x10d] = (long)&DAT_cbf29ce484222645;
  param_1[0x10e] = (long)&DAT_03996322;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar18 = DAT_043f1798;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar10 = lVar18;
  }
  param_1[0x116] = lVar10;
  param_1[0x117] = 0x1fffffffffffffff;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x119) = 0;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  param_1[0x11b] = 0;
  FUN_0087e1f0(param_1 + 0x11c);
  FUN_0087e1f0((long)param_1 + 0x8fc);
  FUN_0087e1f0(param_1 + 0x123);
  FUN_0087e1f0((long)param_1 + 0x934);
  FUN_0087e1f0(param_1 + 0x12a);
  FUN_0087e1f0((long)param_1 + 0x96c);
  FUN_0087e1f0(param_1 + 0x131);
  FUN_0087e1f0((long)param_1 + 0x9a4);
  FUN_0087e1f0(param_1 + 0x138);
  FUN_0087e1f0((long)param_1 + 0x9dc);
  FUN_0087e1f0(param_1 + 0x13f);
  FUN_0087e1f0((long)param_1 + 0xa14);
  FUN_0087e1f0(param_1 + 0x146);
  FUN_0087e1f0((long)param_1 + 0xa4c);
  FUN_0087e1f0(param_1 + 0x14d);
  FUN_0087e1f0((long)param_1 + 0xa84);
  FUN_0087e1f0(param_1 + 0x154);
  FUN_0087e1f0((long)param_1 + 0xabc);
  FUN_0087e1f0(param_1 + 0x15b);
  FUN_0087e1f0((long)param_1 + 0xaf4);
  FUN_0087e1f0(param_1 + 0x162);
  FUN_0087e1f0((long)param_1 + 0xb2c);
  FUN_0087e1f0(param_1 + 0x169);
  FUN_0087e1f0((long)param_1 + 0xb64);
  FUN_0087e1f0(param_1 + 0x170);
  FUN_0087e1f0((long)param_1 + 0xb9c);
  FUN_0087e1f0(param_1 + 0x177);
  FUN_0087e1f0((long)param_1 + 0xbd4);
  FUN_0087e1f0(param_1 + 0x17e);
  FUN_0087e1f0((long)param_1 + 0xc0c);
  FUN_0087e1f0(param_1 + 0x185);
  FUN_0087e1f0((long)param_1 + 0xc44);
  FUN_0087e1f0(param_1 + 0x18c);
  FUN_0087e1f0((long)param_1 + 0xc7c);
  FUN_0087e1f0(param_1 + 0x193);
  FUN_0087e1f0((long)param_1 + 0xcb4);
  FUN_0087e1f0(param_1 + 0x19a);
  FUN_0087e1f0((long)param_1 + 0xcec);
  FUN_0087e1f0(param_1 + 0x1a1);
  FUN_0087e1f0((long)param_1 + 0xd24);
  FUN_0087e1f0(param_1 + 0x1a8);
  FUN_0087e1f0((long)param_1 + 0xd5c);
  FUN_0087e1f0(param_1 + 0x1af);
  FUN_0087e1f0((long)param_1 + 0xd94);
  FUN_0087e1f0(param_1 + 0x1b6);
  FUN_0087e1f0((long)param_1 + 0xdcc);
  FUN_0087e1f0(param_1 + 0x1bd);
  FUN_0087e1f0((long)param_1 + 0xe04);
  FUN_0087e1f0(param_1 + 0x1c4);
  FUN_0087e1f0((long)param_1 + 0xe3c);
  FUN_0087e1f0(param_1 + 0x1cb);
  FUN_0087e1f0((long)param_1 + 0xe74);
  FUN_0087e1f0(param_1 + 0x1d2);
  FUN_0087e1f0((long)param_1 + 0xeac);
  FUN_0087e1f0(param_1 + 0x1d9);
  FUN_0087e1f0((long)param_1 + 0xee4);
  FUN_0087e1f0(param_1 + 0x1e0);
  FUN_0087e1f0((long)param_1 + 0xf1c);
  FUN_0087e1f0(param_1 + 0x1e7);
  FUN_0087e1f0((long)param_1 + 0xf54);
  FUN_0087e1f0(param_1 + 0x1ee);
  FUN_0087e1f0((long)param_1 + 0xf8c);
  FUN_0087e1f0(param_1 + 0x1f5);
  FUN_0087e1f0((long)param_1 + 0xfc4);
  FUN_0087e1f0(param_1 + 0x1fc);
  FUN_0087e1f0((long)param_1 + 0xffc);
  FUN_0087e1f0(param_1 + 0x203);
  FUN_0087e1f0((long)param_1 + 0x1034);
  FUN_0087e1f0(param_1 + 0x20a);
  FUN_0087e1f0((long)param_1 + 0x106c);
  FUN_0087e1f0(param_1 + 0x211);
  FUN_0087e1f0((long)param_1 + 0x10a4);
  FUN_0087e1f0(param_1 + 0x218);
  FUN_0087e1f0((long)param_1 + 0x10dc);
  FUN_0087e1f0(param_1 + 0x21f);
  FUN_0087e1f0((long)param_1 + 0x1114);
  FUN_0087e1f0(param_1 + 0x226);
  FUN_0087e1f0((long)param_1 + 0x114c);
  FUN_0087e1f0(param_1 + 0x22d);
  FUN_0087e1f0((long)param_1 + 0x1184);
  FUN_0087e1f0(param_1 + 0x234);
  FUN_0087e1f0((long)param_1 + 0x11bc);
  FUN_0087e1f0(param_1 + 0x23b);
  FUN_0087e1f0((long)param_1 + 0x11f4);
  FUN_0087e1f0(param_1 + 0x242);
  FUN_0087e1f0((long)param_1 + 0x122c);
  FUN_0087e1f0(param_1 + 0x249);
  FUN_0087e1f0((long)param_1 + 0x1264);
  FUN_0087e1f0(param_1 + 0x250);
  FUN_0087e1f0((long)param_1 + 0x129c);
  FUN_0087e1f0(param_1 + 599);
  FUN_0087e1f0((long)param_1 + 0x12d4);
  FUN_0087e1f0(param_1 + 0x25e);
  FUN_0087e1f0((long)param_1 + 0x130c);
  FUN_0087e1f0(param_1 + 0x265);
  FUN_0087e1f0((long)param_1 + 0x1344);
  FUN_0087e1f0(param_1 + 0x26c);
  FUN_0087e1f0((long)param_1 + 0x137c);
  FUN_0087e1f0(param_1 + 0x273);
  FUN_0087e1f0((long)param_1 + 0x13b4);
  FUN_0087e1f0(param_1 + 0x27a);
  FUN_0087e1f0((long)param_1 + 0x13ec);
  FUN_0087e1f0(param_1 + 0x281);
  FUN_0087e1f0((long)param_1 + 0x1424);
  FUN_0087e1f0(param_1 + 0x288);
  FUN_0087e1f0((long)param_1 + 0x145c);
  FUN_0087e1f0(param_1 + 0x28f);
  FUN_0087e1f0((long)param_1 + 0x1494);
  FUN_0087e1f0(param_1 + 0x296);
  FUN_0087e1f0((long)param_1 + 0x14cc);
  FUN_0087e1f0(param_1 + 0x29d);
  FUN_0087e1f0((long)param_1 + 0x1504);
  FUN_0087e1f0(param_1 + 0x2a4);
  FUN_0087e1f0((long)param_1 + 0x153c);
  FUN_0087e1f0(param_1 + 0x2ab);
  FUN_0087e1f0((long)param_1 + 0x1574);
  FUN_0087e1f0(param_1 + 0x2b2);
  FUN_0087e1f0((long)param_1 + 0x15ac);
  FUN_0087e1f0(param_1 + 0x2b9);
  FUN_0087e1f0((long)param_1 + 0x15e4);
  FUN_0087e1f0(param_1 + 0x2c0);
  FUN_0087e1f0((long)param_1 + 0x161c);
  FUN_0087e1f0(param_1 + 0x2c7);
  FUN_0087e1f0((long)param_1 + 0x1654);
  FUN_0087e1f0(param_1 + 0x2ce);
  FUN_0087e1f0((long)param_1 + 0x168c);
  FUN_0087e1f0(param_1 + 0x2d5);
  FUN_0087e1f0((long)param_1 + 0x16c4);
  param_1[0x2e1] = 0;
  plVar28 = param_1 + 0x2e0;
  *plVar28 = 0;
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2de] = 0;
  param_1[0x2df] = 0;
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  param_1[0x2dd] = 0;
  FUN_0087dfb8();
  param_1[0x2fc] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2fa] = 0;
  param_1[0x2f9] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f1] = 0;
  param_1[0x2f0] = 0;
  param_1[0x2ef] = 0;
  param_1[0x2ee] = 0;
  param_1[0x2ed] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2eb] = 0;
  FUN_0087dfb8();
  *(undefined1 *)(param_1 + 0x310) = 0;
  param_1[0x306] = 0;
  param_1[0x305] = 0;
  param_1[0x304] = 0;
  param_1[0x303] = 0;
  param_1[0x302] = 0;
  (*DAT_043ef6c0)(&local_d0,&DAT_043ef6e0);
  if (local_d0 != (long *)0x0) {
    plVar11 = local_d0 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)param_1[0xb];
  param_1[0xb] = (long)local_d0;
  if (plVar11 != (long *)0x0) {
    plVar16 = plVar11 + 10;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  if (local_d0 != (long *)0x0) {
    plVar11 = local_d0 + 10;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  plVar11 = (long *)param_1[1];
  param_1[0xd] = (long)plVar11;
  param_1[0xf] = param_3;
  local_d0 = (long *)(PTR_DAT_043882e8 + 0x10);
  uStack_b0 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = *(undefined8 *)(param_2 + 0x28);
  uStack_a0 = *(undefined8 *)(param_2 + 0x30);
  local_98 = *(undefined8 *)(param_2 + 0x38);
  uStack_90 = *(undefined8 *)(param_2 + 0x40);
  uStack_80 = *(undefined8 *)(param_2 + 0x50);
  local_c8 = *(long *)(param_1[0xb] + 0x58) + 0x3010;
  local_88 = CONCAT35((int3)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x28),0x100000000);
  iVar8 = *(int *)(param_2 + 0x48) * 3;
  *(int *)(param_1 + 0x112) = iVar8;
  local_88 = CONCAT44(local_88._4_4_,iVar8);
  local_c0 = param_1 + 0xc;
  local_b8 = param_1 + 0xe;
  lVar18 = (**(code **)(*plVar11 + 0x10))(plVar11,0x1708,8);
  local_130 = &DAT_cbf29ce484222645;
  if (lVar18 == 0) {
    lVar27 = 0;
    lVar10 = 0;
    plVar11 = (long *)0x0;
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
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_02c9b518:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar11;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    FUN_00281ae0(lVar18,&local_d0);
    lVar10 = 0x1708;
    lVar27 = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  puVar24 = (undefined8 *)*plVar23;
  *plVar23 = lVar18;
  if (puVar24 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_f0,0);
    (**(code **)*puVar24)(puVar24);
    plVar16 = (long *)param_1[0x11];
    lVar18 = param_1[0x12];
    lVar12 = param_1[0x13];
    uVar13 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar13 & 1) == 0) {
LAB_02c99f80:
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar24,lVar18,lVar12);
    }
    else {
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02c99f80;
      FUN_02bcc824(plVar16,puVar24,lVar18,lVar12);
    }
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar8 = *(int *)(lVar9 + 0x38d480) + -1;
    *(int *)(lVar9 + 0x38d480) = iVar8;
    if (iVar8 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar9 + 0x38d484) = 0;
    }
    lVar18 = *plVar23;
  }
  param_1[0x13] = lVar27;
  param_1[0x11] = (long)plVar11;
  param_1[0x12] = lVar10;
  FUN_002848f8(lVar18,&LAB_02c9b5fc,param_1);
  FUN_00284910(param_1[0x10],&LAB_02c9b6c4,param_1);
  *(undefined1 **)(param_1[0x10] + 0x1180) = &LAB_02c9b788;
  lVar10 = param_1[0x113];
  uVar13 = (ulong)*(int *)(param_2 + 0x48);
  uVar25 = param_1[0x114] - lVar10 >> 3;
  lVar18 = uVar25 - uVar13;
  if (uVar25 < uVar13) {
    plVar23 = param_1 + 0x116;
    if ((ulong)(param_1[0x115] - param_1[0x114] >> 3) < uVar13 - uVar25) {
      uVar22 = param_1[0x117];
      if (0x7ffffffffffffffe < uVar22) {
        uVar22 = 0x7fffffffffffffff;
      }
      if (uVar22 < uVar13) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = param_1[0x115] - lVar10;
      if ((ulong)(lVar10 >> 3) < uVar22 >> 1) {
        uVar21 = lVar10 >> 2;
        uVar22 = uVar13;
        if (uVar13 <= uVar21) {
          uVar22 = uVar21;
        }
      }
      if (uVar22 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = (**(code **)(*(long *)*plVar23 + 0x10))((long *)*plVar23,uVar22 << 3,8);
        if (lVar10 == 0) {
          (**(code **)(*(long *)*plVar23 + 0xb8))();
        }
      }
      lVar12 = lVar10 + uVar25 * 8;
      lVar27 = lVar12;
      do {
        FUN_02c9e8d4(plVar23,lVar27);
        lVar27 = lVar27 + 8;
        bVar7 = lVar18 != -1;
        lVar18 = lVar18 + 1;
      } while (bVar7);
      lVar30 = param_1[0x113];
      lVar18 = param_1[0x114];
      if (lVar18 != lVar30) {
        do {
          lVar29 = *plVar23;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), iVar8 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar14 == 0) {
            *(undefined8 *)(lVar12 + -8) = *(undefined8 *)(lVar18 + -8);
          }
          else {
            if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_02c9b518;
            *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar29;
            *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
            *(undefined8 *)(lVar12 + -8) = *(undefined8 *)(lVar18 + -8);
            *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
          }
          lVar18 = lVar18 + -8;
          lVar12 = lVar12 + -8;
        } while (lVar30 != lVar18);
        lVar30 = param_1[0x113];
      }
      lVar18 = param_1[0x115];
      param_1[0x113] = lVar12;
      param_1[0x114] = lVar27;
      param_1[0x115] = lVar10 + uVar22 * 8;
      if (lVar30 != 0) {
        plVar23 = (long *)*plVar23;
        uVar13 = (**(code **)(*plVar23 + 0xc0))(plVar23);
        if ((uVar13 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            FUN_02bcc824(plVar23,lVar30,lVar18 - lVar30,8);
            goto LAB_02c9a2d8;
          }
        }
        (**(code **)(*plVar23 + 0x18))(plVar23,lVar30,lVar18 - lVar30,8);
      }
    }
    else {
      do {
        FUN_02c9e8d4(plVar23);
        bVar7 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        param_1[0x114] = param_1[0x114] + 8;
      } while (bVar7);
    }
  }
  else if (lVar18 != 0) {
    param_1[0x114] = lVar10 + uVar13 * 8;
  }
LAB_02c9a2d8:
  local_f0 = (undefined1 *)0x0;
  plVar23 = (long *)FUN_00957dc4(local_70,param_1[1],&local_f0);
  plVar23[0x3c] = plVar23[0x3c] | 8;
  if (plVar23 != (long *)0x0) {
    lVar18 = plVar23[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_02c9b568;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = param_1 + 0x2f7;
  (**(code **)(*plVar23 + 0x60))(plVar23,0);
  pcVar19 = (code *)plVar23[0x75];
  if (pcVar19 != (code *)0x0) {
    plVar23[0x76] = 0;
    plVar23[0x77] = 0;
    plVar23[0x74] = 0;
    plVar23[0x75] = 0;
    (*pcVar19)(plVar23 + 0x78);
  }
  plVar23[0x74] = (long)&LAB_02c9e9a0;
  plVar23[0x75] = (long)&LAB_02c9f2e4;
  plVar23[0x76] = (long)&LAB_02c9f590;
  plVar23[0x78] = (long)param_1;
  plVar23[0x77] = (long)&LAB_02c9f59c;
  lVar18 = nn::os::GetCurrentThread();
  plVar16 = plVar23 + 0x41;
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar23 + 0x1fc));
        while (*plVar16 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = lVar18;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02c9a3f4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = lVar18;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02c9a3f4:
  pbVar26 = PTR_DAT_0437b4f8;
  if (((*PTR_DAT_0437b4f8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  puVar6 = PTR_DAT_0437b508;
  puVar5 = PTR_DAT_0437b500;
  lVar18 = *(long *)PTR_DAT_0437b500;
  *(long *)PTR_DAT_0437b508 = lVar18;
  FUN_02a70468(plVar23,*(undefined8 *)(lVar18 + 0x50),0);
  if (((*pbVar26 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  lVar18 = *(long *)puVar5;
  *(long *)puVar6 = lVar18;
  FUN_02a70468(plVar23,0,*(undefined8 *)(lVar18 + 0x58));
  plVar16 = (long *)param_1[0xf2];
  param_1[0xf2] = 0;
  if (plVar16 != (long *)0x0) {
    lVar18 = plVar16[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
    }
  }
  param_1[0xf2] = (long)plVar23;
  lVar18 = param_1[0xf3];
  if ((ulong)(param_1[0xf5] - lVar18 >> 7) < 0x40) {
    lVar27 = param_1[0xf4];
    plVar16 = param_1 + 0xf6;
    lVar10 = (**(code **)(*(long *)param_1[0xf6] + 0x10))((long *)param_1[0xf6],0x2000,0x10);
    if (lVar10 == 0) {
      (**(code **)(*(long *)*plVar16 + 0xb8))();
    }
    lVar18 = lVar10 + (lVar27 - lVar18 >> 7) * 0x80;
    lVar30 = param_1[0xf3];
    lVar12 = param_1[0xf4];
    lVar27 = lVar18;
    if (lVar12 == lVar30) {
      lVar12 = lVar30;
    }
    else {
      do {
        lVar27 = lVar27 + -0x80;
        lVar12 = lVar12 + -0x80;
        FUN_00d9361c(plVar16,lVar27,lVar12);
      } while (lVar30 != lVar12);
      lVar30 = param_1[0xf3];
      lVar12 = param_1[0xf4];
    }
    param_1[0xf3] = lVar27;
    lVar27 = param_1[0xf5];
    param_1[0xf4] = lVar18;
    param_1[0xf5] = lVar10 + 0x2000;
    pbVar26 = PTR_DAT_0437b4f8;
    while( true ) {
      lVar18 = lVar12;
      PTR_DAT_0437b4f8 = pbVar26;
      if (lVar18 == lVar30) break;
      pcVar19 = *(code **)(lVar18 + -0x78);
      lVar12 = lVar18 + -0x80;
      if (pcVar19 != (code *)0x0) {
        *(undefined8 *)(lVar18 + -0x70) = 0;
        *(undefined8 *)(lVar18 + -0x68) = 0;
        *(undefined8 *)(lVar18 + -0x80) = 0;
        *(undefined8 *)(lVar18 + -0x78) = 0;
        (*pcVar19)(lVar18 + -0x60);
        pbVar26 = PTR_DAT_0437b4f8;
      }
    }
    if (lVar30 != 0) {
      plVar16 = (long *)*plVar16;
      uVar13 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar13 & 1) != 0) {
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar16,lVar30,lVar27 - lVar30,0x10);
          goto LAB_02c9a5ec;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar30,lVar27 - lVar30,0x10);
    }
  }
LAB_02c9a5ec:
  plVar23[0x41] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar23 + 0x1fc));
  param_1[0xfd] = 0x780;
  param_1[0xfe] = 0x438;
  param_1[0x106] = 0x200000008;
  *(undefined4 *)(param_1 + 0x103) = 0x35;
  local_f0 = (undefined1 *)param_1[0xb];
  lVar18 = FUN_01b34908(local_70,*(undefined8 *)(local_f0 + 8),&local_f0);
  if (lVar18 != 0) {
    piVar1 = (int *)(lVar18 + 0x50);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02bc011c(lVar18,param_1 + 0xfd,1,1,0);
  plVar23 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar23 != (long *)0x0) {
    plVar16 = plVar23 + 10;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  param_1[0x16] = lVar18;
  local_f0 = (undefined1 *)0x0;
  plVar23 = (long *)FUN_00957dc4(local_70,param_1[1],&local_f0);
  plVar23[0x3c] = plVar23[0x3c] | 8;
  if (plVar23 != (long *)0x0) {
    lVar18 = plVar23[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_02c9b568;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (**(code **)(*plVar23 + 0x60))(plVar23,0);
  pcVar19 = (code *)plVar23[0x75];
  if (pcVar19 != (code *)0x0) {
    plVar23[0x76] = 0;
    plVar23[0x77] = 0;
    plVar23[0x74] = 0;
    plVar23[0x75] = 0;
    (*pcVar19)(plVar23 + 0x78);
  }
  plVar23[0x74] = (long)&LAB_02c9f5a8;
  plVar23[0x78] = (long)param_1;
  plVar23[0x75] = (long)&LAB_02c9f82c;
  plVar23[0x76] = (long)&LAB_02c9f830;
  plVar23[0x77] = (long)&LAB_02c9f83c;
  lVar18 = nn::os::GetCurrentThread();
  plVar16 = plVar23 + 0x41;
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar23 + 0x1fc));
        while (*plVar16 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = lVar18;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02c9a78c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = lVar18;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02c9a78c:
  if (((*pbVar26 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  puVar6 = PTR_DAT_0437b508;
  puVar5 = PTR_DAT_0437b500;
  lVar18 = *(long *)PTR_DAT_0437b500;
  *(long *)PTR_DAT_0437b508 = lVar18;
  FUN_02a70468(plVar23,*(undefined8 *)(lVar18 + 0x50),0);
  if (((*pbVar26 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  lVar18 = *(long *)puVar5;
  *(long *)puVar6 = lVar18;
  FUN_02a70468(plVar23,0,*(undefined8 *)(lVar18 + 0x58));
  plVar16 = (long *)param_1[0x107];
  param_1[0x107] = 0;
  if (plVar16 != (long *)0x0) {
    lVar18 = plVar16[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
    }
  }
  param_1[0x107] = (long)plVar23;
  plVar23[0x41] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar23 + 0x1fc));
  local_f0 = &DAT_462237f7b07aa897;
  pcStack_e8 = "vfx2";
  local_e0 = 4;
  local_d8 = (long *)0x0;
  __s = (byte *)(**(code **)(*DAT_043ef740 + 0x38))(DAT_043ef740,&local_f0,3);
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_130 = *(undefined1 **)PTR_DAT_0437a0d8;
    __s = *(byte **)(PTR_DAT_0437a0d8 + 8);
    sVar17 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar23 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  else {
    sVar17 = strlen((char *)__s);
    bVar3 = *__s;
    if (bVar3 == 0) {
      plVar23 = (long *)0x0;
      local_130 = &DAT_cbf29ce484222645;
    }
    else {
      pbVar20 = __s;
      do {
        pbVar20 = pbVar20 + 1;
        local_130 = (undefined1 *)(((ulong)local_130 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar20;
      } while (bVar3 != 0);
      plVar23 = (long *)0x0;
    }
  }
  plVar16 = (long *)param_1[0x110];
  param_1[0x10d] = (long)local_130;
  param_1[0x10e] = (long)__s;
  param_1[0x10f] = sVar17;
  param_1[0x110] = 0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))();
  }
  param_1[0x110] = (long)plVar23;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_f0 = (undefined1 *)0xf94cd125c094c1da;
  pcStack_e8 = "VFX2:SyncDepthBufferTexture";
  local_e0 = 0x1b;
  local_d8 = (long *)0x0;
  local_70[0] = DAT_043ef598;
  lVar18 = FUN_02b5a848(auStack_78,*(undefined8 *)(DAT_043ef598 + 8),local_70,&local_f0);
  if (lVar18 != 0) {
    piVar1 = (int *)(lVar18 + 0x50);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(char *)param_1[0x10e] != '\0') {
    FUN_02bba5e0(local_70,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x58) + 0x58) + 0x78),
                 param_1 + 0x10d);
    plVar23 = *(long **)(lVar18 + 0x68);
    *(undefined8 *)(lVar18 + 0x68) = 0;
    if (plVar23 != (long *)0x0) {
      plVar16 = plVar23 + 10;
      do {
        iVar8 = (int)*plVar16 + -1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar23 + 0x10))();
      }
    }
    *(long *)(lVar18 + 0x68) = local_70[0];
  }
  plVar23 = (long *)param_1[0x111];
  param_1[0x111] = 0;
  if (plVar23 != (long *)0x0) {
    plVar16 = plVar23 + 10;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  param_1[0x111] = lVar18;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
    lVar18 = param_1[0x111];
  }
  *(undefined4 *)(lVar18 + 0x90) = 0xffffff9c;
  local_f0 = (undefined1 *)0x0;
  plVar23 = (long *)FUN_00957dc4(local_70,param_1[1],&local_f0);
  plVar23[0x3c] = plVar23[0x3c] | 8;
  if (plVar23 != (long *)0x0) {
    lVar18 = plVar23[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_02c9b568:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (**(code **)(*plVar23 + 0x60))(plVar23,0);
  pcVar19 = (code *)plVar23[0x75];
  if (pcVar19 != (code *)0x0) {
    plVar23[0x76] = 0;
    plVar23[0x77] = 0;
    plVar23[0x74] = 0;
    plVar23[0x75] = 0;
    (*pcVar19)(plVar23 + 0x78);
  }
  plVar23[0x74] = (long)&LAB_02c9f848;
  plVar23[0x78] = (long)param_1;
  plVar23[0x75] = (long)&LAB_02c9fc20;
  plVar23[0x76] = (long)&LAB_02c9fc24;
  plVar23[0x77] = (long)&LAB_02c9fc30;
  lVar18 = nn::os::GetCurrentThread();
  plVar16 = plVar23 + 0x41;
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar23 + 0x1fc));
        while (*plVar16 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = lVar18;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02c9aaa0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = lVar18;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02c9aaa0:
  if (((*pbVar26 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  puVar6 = PTR_DAT_0437b508;
  puVar5 = PTR_DAT_0437b500;
  lVar18 = *(long *)PTR_DAT_0437b500;
  *(long *)PTR_DAT_0437b508 = lVar18;
  FUN_02a70468(plVar23,*(undefined8 *)(lVar18 + 0x50),0);
  if (((*pbVar26 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  lVar18 = *(long *)puVar5;
  *(long *)puVar6 = lVar18;
  FUN_02a70468(plVar23,0,*(undefined8 *)(lVar18 + 0x58));
  plVar16 = (long *)param_1[0x10c];
  param_1[0x10c] = 0;
  if (plVar16 != (long *)0x0) {
    lVar18 = plVar16[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
    }
  }
  param_1[0x10c] = (long)plVar23;
  plVar23[0x41] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar23 + 0x1fc));
  FUN_00876cac(pbVar2);
  *(undefined2 *)((long)param_1 + 0x16e1) = 0x701;
  *(undefined1 *)((long)param_1 + 0x16e6) = 0;
  *pbVar2 = *pbVar2 | 1;
  *(undefined1 *)((long)param_1 + 0x16e3) = 0;
  *(undefined2 *)((long)param_1 + 0x16e4) = 0x700;
  FUN_00876cd4(plVar28);
  *(undefined1 *)(param_1 + 0x2e0) = 1;
  param_1[0x2e3] = (long)pbVar2;
  lVar18 = FUN_0087dfac(plVar28);
  plVar23 = (long *)param_1[1];
  lVar10 = (**(code **)(*plVar23 + 0x10))(plVar23,lVar18,8);
  lVar27 = param_1[0x2eb];
  param_1[0x2eb] = lVar10;
  if (lVar27 != 0) {
    plVar16 = (long *)param_1[0x2ec];
    lVar10 = param_1[0x2ed];
    lVar12 = param_1[0x2ee];
    uVar13 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar9 + 0x38d480)) {
        FUN_02bcc824(plVar16,lVar27,lVar10,lVar12);
        goto LAB_02c9ac24;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar27,lVar10,lVar12);
  }
LAB_02c9ac24:
  param_1[0x2ee] = 8;
  param_1[0x2ec] = (long)plVar23;
  param_1[0x2ed] = lVar18;
  FUN_0087dfcc(param_1 + 0x2e6,param_1[0x2eb],lVar18);
  FUN_0087dfe0(param_1 + 0x2e6,*(long *)(param_1[0xb] + 0x58) + 0x3010,plVar28);
  FUN_00876cac(param_1 + 0x2ef);
  *(byte *)(param_1 + 0x2ef) = *(byte *)(param_1 + 0x2ef) | 1;
  *(undefined2 *)((long)param_1 + 0x1779) = 0x706;
  *(undefined2 *)((long)param_1 + 0x177c) = 0x706;
  FUN_00876cac(param_1 + 0x2f3);
  *(undefined2 *)((long)param_1 + 0x1799) = 0x300;
  *(undefined2 *)((long)param_1 + 0x179c) = 1;
  *(undefined1 *)((long)param_1 + 0x179b) = 0;
  *(byte *)(param_1 + 0x2f3) = *(byte *)(param_1 + 0x2f3) | 1;
  *(undefined1 *)((long)param_1 + 0x179e) = 0;
  FUN_00876cd4(plVar11);
  *(ushort *)((long)param_1 + 0x17ba) = *(ushort *)((long)param_1 + 0x17ba) | 4;
  *(undefined1 *)(param_1 + 0x2f7) = 2;
  param_1[0x2fa] = (long)(param_1 + 0x2ef);
  lVar18 = FUN_0087dfac(plVar11);
  plVar23 = (long *)param_1[1];
  lVar10 = (**(code **)(*plVar23 + 0x10))(plVar23,lVar18,8);
  lVar27 = param_1[0x302];
  param_1[0x302] = lVar10;
  if (lVar27 != 0) {
    plVar28 = (long *)param_1[0x303];
    lVar10 = param_1[0x304];
    lVar12 = param_1[0x305];
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar9 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar27,lVar10,lVar12);
        goto LAB_02c9ad8c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar27,lVar10,lVar12);
  }
LAB_02c9ad8c:
  param_1[0x303] = (long)plVar23;
  param_1[0x305] = 8;
  param_1[0x304] = lVar18;
  FUN_0087dfcc(param_1 + 0x2fd,param_1[0x302],lVar18);
  FUN_0087dfe0(param_1 + 0x2fd,*(long *)(param_1[0xb] + 0x58) + 0x3010,plVar11);
  lVar9 = param_1[0x10];
  *(long **)(lVar9 + 0x12d0) = param_1 + 0x312;
  *(undefined8 *)(lVar9 + 0x12f8) = 0x20;
  *(undefined1 **)(param_1[0x10] + 0x1200) = &LAB_02c9b924;
  return;
}


