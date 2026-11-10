/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278a3ac; name: FUN_0278a3ac
 */


undefined8 FUN_0278a3ac(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  char acStack_3010 [120];
  char acStack_2f98 [96];
  undefined8 local_2f38;
  undefined8 local_2f30;
  undefined8 uStack_2f28;
  char local_2f20 [4];
  char local_2f1c [8];
  char local_2f14 [4];
  char acStack_2f10 [4];
  undefined8 local_2f0c [5];
  byte abStack_2ee0 [12];
  byte local_2ed4 [4];
  int iStack_2ed0;
  ushort auStack_2eca [3];
  undefined8 local_2ec4 [3];
  char acStack_2ea8 [11880];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar18 = *(long **)(lVar10 + 0x2a8);
  if (plVar18 == (long *)0x0) {
    return 0;
  }
  lVar10 = plVar18[0xb];
  if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
    *(undefined8 *)(lVar10 + 0x10) = uVar8;
  }
  piVar12 = (int *)(lVar10 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
    if (bVar5) {
      *piVar12 = *piVar12 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar11 = (undefined8 *)((long)plVar18 + 0xdd1c);
  pcVar13 = local_2f20;
  lVar10 = 100;
  do {
    *pcVar13 = '\0';
    if (*(char *)((long)puVar11 + -4) != '\0') {
      uVar8 = *puVar11;
      uVar16 = puVar11[1];
      *(undefined8 *)(pcVar13 + 0x14) = puVar11[2];
      *(undefined8 *)(pcVar13 + 0xc) = uVar16;
      *(undefined8 *)(pcVar13 + 4) = uVar8;
      uVar8 = puVar11[3];
      uVar17 = puVar11[4];
      uVar16 = puVar11[5];
      *(undefined8 *)(pcVar13 + 0x34) = puVar11[6];
      *(undefined8 *)(pcVar13 + 0x2c) = uVar16;
      *(undefined8 *)(pcVar13 + 0x24) = uVar17;
      *(undefined8 *)(pcVar13 + 0x1c) = uVar8;
      uVar8 = puVar11[7];
      uVar17 = puVar11[8];
      uVar16 = puVar11[9];
      *(undefined8 *)(pcVar13 + 0x54) = puVar11[10];
      *(undefined8 *)(pcVar13 + 0x4c) = uVar16;
      *(undefined8 *)(pcVar13 + 0x44) = uVar17;
      *(undefined8 *)(pcVar13 + 0x3c) = uVar8;
      uVar8 = puVar11[0xb];
      uVar16 = puVar11[0xc];
      uVar17 = puVar11[0xd];
      *(undefined4 *)(pcVar13 + 0x74) = *(undefined4 *)(puVar11 + 0xe);
      *(undefined8 *)(pcVar13 + 0x6c) = uVar17;
      *(undefined8 *)(pcVar13 + 100) = uVar16;
      *(undefined8 *)(pcVar13 + 0x5c) = uVar8;
      *pcVar13 = '\x01';
    }
    lVar10 = lVar10 + -1;
    puVar11 = puVar11 + 0xf;
    pcVar13 = pcVar13 + 0x78;
  } while (lVar10 != 0);
  local_2f30 = *(undefined8 *)((long)param_2 + 0x14);
  uStack_2f28 = *(undefined8 *)((long)param_2 + 0x1c);
  local_2f38 = *(undefined8 *)((long)param_2 + 0xc);
  lVar10 = 0;
  if (local_2f20[0] != '\0') goto LAB_0278a50c;
  do {
    do {
      lVar1 = lVar10 + 0x78;
      if (lVar1 == 12000) goto LAB_0278a534;
      pcVar13 = acStack_2ea8 + lVar10;
      lVar10 = lVar1;
    } while (*pcVar13 == '\0');
LAB_0278a50c:
    iVar7 = strcmp(acStack_2f10 + lVar10,(char *)&local_2f38);
  } while (iVar7 != 0);
  if (lVar10 != 12000) {
    uVar8 = 0;
    goto LAB_0278a6e4;
  }
LAB_0278a534:
  uVar9 = FUN_0278a818();
  uVar8 = param_2[1];
  uVar16 = param_2[2];
  uVar6 = uVar9 & 0xffffffff;
  lVar10 = uVar6 * 0x78;
  *(undefined8 *)(local_2f20 + lVar10 + 4) = *param_2;
  *(undefined8 *)(acStack_2f10 + lVar10 + -4) = uVar8;
  local_2f0c[uVar6 * 0xf] = uVar16;
  uVar16 = param_2[4];
  uVar8 = param_2[5];
  uVar17 = param_2[6];
  local_2f0c[uVar6 * 0xf + 1] = param_2[3];
  local_2f0c[uVar6 * 0xf + 4] = uVar17;
  local_2f0c[uVar6 * 0xf + 3] = uVar8;
  local_2f0c[uVar6 * 0xf + 2] = uVar16;
  uVar16 = param_2[8];
  uVar8 = param_2[9];
  uVar17 = param_2[10];
  local_2f0c[uVar6 * 0xf + 5] = param_2[7];
  local_2ec4[uVar6 * 0xf + -1] = uVar17;
  *(undefined8 *)(abStack_2ee0 + lVar10 + 0xc) = uVar8;
  *(undefined8 *)(abStack_2ee0 + lVar10 + 4) = uVar16;
  uVar8 = param_2[0xc];
  uVar16 = param_2[0xd];
  uVar2 = *(undefined4 *)(param_2 + 0xe);
  local_2ec4[uVar6 * 0xf] = param_2[0xb];
  cVar4 = local_2f20[lVar10];
  uVar9 = uVar9 & 0xffffffff;
  *(undefined4 *)(local_2ec4 + uVar6 * 0xf + 3) = uVar2;
  local_2ec4[uVar6 * 0xf + 2] = uVar16;
  local_2ec4[uVar6 * 0xf + 1] = uVar8;
  if (cVar4 == '\0') {
    local_2f20[lVar10] = '\x01';
  }
  if (4 < *(byte *)((long)param_2 + 0x3d) - 1) {
    abStack_2ee0[uVar9 * 0x78 + 1] = 1;
  }
  if (3 < abStack_2ee0[uVar9 * 0x78]) {
    abStack_2ee0[uVar9 * 0x78] = 3;
  }
  sVar3 = *(short *)(param_2 + 10);
  for (lVar10 = 0; *(short *)((long)&DAT_03a7e06a + lVar10) != sVar3; lVar10 = lVar10 + 8) {
    if (*(short *)((long)&DAT_03a7e06c + lVar10) == sVar3) {
      puVar15 = (undefined *)((long)&DAT_03a7e06c + lVar10);
      goto LAB_0278a66c;
    }
    if (*(short *)((long)&DAT_03a7e06e + lVar10) == sVar3) {
      puVar15 = (undefined *)((long)&DAT_03a7e06e + lVar10);
      goto LAB_0278a66c;
    }
    if (lVar10 == 0x148) goto LAB_0278a684;
    if (*(short *)((long)&DAT_03a7e070 + lVar10) == sVar3) {
      puVar15 = (undefined *)((long)&DAT_03a7e070 + lVar10);
      goto LAB_0278a66c;
    }
  }
  puVar15 = (undefined *)((long)&DAT_03a7e06a + lVar10);
LAB_0278a66c:
  if (puVar15 == &DAT_03a7e1b8) {
LAB_0278a684:
    *(undefined2 *)(local_2ec4 + uVar9 * 0xf + -1) = 0x6ae;
    if (sVar3 != 0) goto LAB_0278a69c;
LAB_0278a6a8:
    piVar12 = (int *)((long)local_2ec4 + uVar9 * 0x78 + -0xc);
    iVar7 = *piVar12;
    *(undefined2 *)((long)local_2ec4 + uVar9 * 0x78 + -6) = 10;
    uVar14 = 0x19;
  }
  else {
    if (sVar3 == 0) goto LAB_0278a6a8;
LAB_0278a69c:
    if (0x14 < *(ushort *)((long)param_2 + 0x52)) goto LAB_0278a6a8;
    piVar12 = (int *)((long)local_2ec4 + uVar9 * 0x78 + -0xc);
    iVar7 = *piVar12;
    uVar14 = (uint)*(ushort *)((long)local_2ec4 + uVar9 * 0x78 + -6) * 0x19;
    if (uVar14 < 10) {
      uVar14 = 0;
    }
    else if (uVar14 < 500) {
      uVar14 = uVar14 / 10;
    }
    else {
      uVar14 = 0x32;
    }
  }
  if (iVar7 != uVar14 + 0x32) {
    *piVar12 = uVar14 + 0x32;
  }
  FUN_0110b880(plVar18,local_2f20);
  uVar8 = 1;
LAB_0278a6e4:
  lVar10 = 12000;
  do {
    if (acStack_2f98[lVar10] != '\0') {
      acStack_2f98[lVar10] = '\0';
    }
    if (acStack_3010[lVar10] != '\0') {
      acStack_3010[lVar10] = '\0';
    }
    lVar10 = lVar10 + -0xf0;
  } while (lVar10 != 0);
  lVar10 = plVar18[0xb];
  piVar12 = (int *)(lVar10 + 0xc);
  do {
    iVar7 = *piVar12;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
    if (bVar5) {
      *piVar12 = iVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  return uVar8;
}


