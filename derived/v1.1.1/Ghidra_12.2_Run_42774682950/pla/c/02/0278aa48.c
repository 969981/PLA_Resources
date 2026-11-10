/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278aa48; name: FUN_0278aa48
 */


void FUN_0278aa48(undefined1 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  char acStack_3010 [120];
  char acStack_2f98 [120];
  char local_2f20 [4];
  undefined8 local_2f1c [14];
  undefined4 local_2eac [2971];
  
  pcVar10 = local_2f20;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar13 = *(long **)(lVar8 + 0x2a8);
  if (plVar13 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    lVar8 = plVar13[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar9 = (undefined8 *)((long)plVar13 + 0xdd1c);
    lVar8 = 100;
    do {
      *pcVar10 = 0;
      if (*(char *)((long)puVar9 + -4) != '\0') {
        uVar7 = *puVar9;
        uVar2 = puVar9[1];
        *(undefined8 *)(pcVar10 + 0x14) = puVar9[2];
        *(undefined8 *)(pcVar10 + 0xc) = uVar2;
        *(undefined8 *)(pcVar10 + 4) = uVar7;
        uVar7 = puVar9[3];
        uVar12 = puVar9[4];
        uVar2 = puVar9[5];
        *(undefined8 *)(pcVar10 + 0x34) = puVar9[6];
        *(undefined8 *)(pcVar10 + 0x2c) = uVar2;
        *(undefined8 *)(pcVar10 + 0x24) = uVar12;
        *(undefined8 *)(pcVar10 + 0x1c) = uVar7;
        uVar7 = puVar9[7];
        uVar12 = puVar9[8];
        uVar2 = puVar9[9];
        *(undefined8 *)(pcVar10 + 0x54) = puVar9[10];
        *(undefined8 *)(pcVar10 + 0x4c) = uVar2;
        *(undefined8 *)(pcVar10 + 0x44) = uVar12;
        *(undefined8 *)(pcVar10 + 0x3c) = uVar7;
        uVar7 = puVar9[0xb];
        uVar2 = puVar9[0xc];
        uVar12 = puVar9[0xd];
        *(undefined4 *)(pcVar10 + 0x74) = *(undefined4 *)(puVar9 + 0xe);
        *(undefined8 *)(pcVar10 + 0x6c) = uVar12;
        *(undefined8 *)(pcVar10 + 100) = uVar2;
        *(undefined8 *)(pcVar10 + 0x5c) = uVar7;
        *pcVar10 = 1;
      }
      lVar8 = lVar8 + -1;
      puVar9 = puVar9 + 0xf;
      pcVar10 = pcVar10 + 0x78;
    } while (lVar8 != 0);
    uVar5 = FUN_0278a818();
    if (param_2 < uVar5) {
      cVar3 = local_2f20[(ulong)param_2 * 0x78];
      *param_1 = 0;
      if (cVar3 != '\0') {
        uVar11 = (ulong)param_2;
        *(undefined8 *)(param_1 + 0x14) = local_2f1c[uVar11 * 0xf + 2];
        *(undefined8 *)(param_1 + 0xc) = local_2f1c[uVar11 * 0xf + 1];
        *(undefined8 *)(param_1 + 4) = local_2f1c[uVar11 * 0xf];
        *(undefined8 *)(param_1 + 0x34) = local_2f1c[uVar11 * 0xf + 6];
        *(undefined8 *)(param_1 + 0x2c) = local_2f1c[uVar11 * 0xf + 5];
        *(undefined8 *)(param_1 + 0x24) = local_2f1c[uVar11 * 0xf + 4];
        *(undefined8 *)(param_1 + 0x1c) = local_2f1c[uVar11 * 0xf + 3];
        *(undefined8 *)(param_1 + 0x54) = local_2f1c[uVar11 * 0xf + 10];
        *(undefined8 *)(param_1 + 0x4c) = local_2f1c[uVar11 * 0xf + 9];
        *(undefined8 *)(param_1 + 0x44) = local_2f1c[uVar11 * 0xf + 8];
        *(undefined8 *)(param_1 + 0x3c) = local_2f1c[uVar11 * 0xf + 7];
        *(undefined4 *)(param_1 + 0x74) = local_2eac[uVar11 * 0x1e];
        *(undefined8 *)(param_1 + 0x6c) = local_2f1c[uVar11 * 0xf + 0xd];
        uVar7 = local_2f1c[uVar11 * 0xf + 0xc];
        *(undefined8 *)(param_1 + 0x5c) = local_2f1c[uVar11 * 0xf + 0xb];
        *(undefined8 *)(param_1 + 100) = uVar7;
        *param_1 = 1;
      }
    }
    else {
      *param_1 = 0;
    }
    lVar8 = 12000;
    do {
      if (acStack_2f98[lVar8] != '\0') {
        acStack_2f98[lVar8] = '\0';
      }
      if (acStack_3010[lVar8] != '\0') {
        acStack_3010[lVar8] = '\0';
      }
      lVar8 = lVar8 + -0xf0;
    } while (lVar8 != 0);
    lVar8 = plVar13[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


