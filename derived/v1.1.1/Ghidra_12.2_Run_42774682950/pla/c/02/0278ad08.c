/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278ad08; name: FUN_0278ad08
 */


void FUN_0278ad08(undefined1 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  char acStack_3010 [120];
  char acStack_2f98 [96];
  undefined8 local_2f38;
  undefined8 local_2f30;
  undefined8 uStack_2f28;
  char local_2f20 [16];
  char acStack_2f10 [11984];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar13 = *(long **)(lVar9 + 0x2a8);
  if (plVar13 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    lVar9 = plVar13[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar10 = (undefined8 *)((long)plVar13 + 0xdd1c);
    pcVar11 = local_2f20;
    lVar9 = 100;
    do {
      *pcVar11 = '\0';
      if (*(char *)((long)puVar10 + -4) != '\0') {
        uVar8 = *puVar10;
        uVar4 = puVar10[1];
        *(undefined8 *)(pcVar11 + 0x14) = puVar10[2];
        *(undefined8 *)(pcVar11 + 0xc) = uVar4;
        *(undefined8 *)(pcVar11 + 4) = uVar8;
        uVar8 = puVar10[3];
        uVar12 = puVar10[4];
        uVar4 = puVar10[5];
        *(undefined8 *)(pcVar11 + 0x34) = puVar10[6];
        *(undefined8 *)(pcVar11 + 0x2c) = uVar4;
        *(undefined8 *)(pcVar11 + 0x24) = uVar12;
        *(undefined8 *)(pcVar11 + 0x1c) = uVar8;
        uVar8 = puVar10[7];
        uVar12 = puVar10[8];
        uVar4 = puVar10[9];
        *(undefined8 *)(pcVar11 + 0x54) = puVar10[10];
        *(undefined8 *)(pcVar11 + 0x4c) = uVar4;
        *(undefined8 *)(pcVar11 + 0x44) = uVar12;
        *(undefined8 *)(pcVar11 + 0x3c) = uVar8;
        uVar8 = puVar10[0xb];
        uVar4 = puVar10[0xc];
        uVar12 = puVar10[0xd];
        *(undefined4 *)(pcVar11 + 0x74) = *(undefined4 *)(puVar10 + 0xe);
        *(undefined8 *)(pcVar11 + 0x6c) = uVar12;
        *(undefined8 *)(pcVar11 + 100) = uVar4;
        *(undefined8 *)(pcVar11 + 0x5c) = uVar8;
        *pcVar11 = '\x01';
      }
      lVar9 = lVar9 + -1;
      puVar10 = puVar10 + 0xf;
      pcVar11 = pcVar11 + 0x78;
    } while (lVar9 != 0);
    lVar9 = 12000;
    local_2f30 = param_2[1];
    uStack_2f28 = param_2[2];
    local_2f38 = *param_2;
    pcVar11 = acStack_2f10;
    if (local_2f20[0] != '\0') goto LAB_0278ae68;
    do {
      do {
        pcVar3 = pcVar11 + 0x78;
        lVar9 = lVar9 + -0x78;
        if (lVar9 == 0) goto LAB_0278af0c;
        pcVar1 = pcVar11 + 0x68;
        pcVar11 = pcVar3;
      } while (*pcVar1 == '\0');
LAB_0278ae68:
      iVar7 = strcmp(pcVar11,(char *)&local_2f38);
    } while (iVar7 != 0);
    if (lVar9 == 0) {
LAB_0278af0c:
      *param_1 = 0;
    }
    else {
      cVar5 = pcVar11[-0x10];
      *param_1 = 0;
      if (cVar5 != '\0') {
        *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(pcVar11 + 4);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(pcVar11 + -4);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(pcVar11 + -0xc);
        *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(pcVar11 + 0x24);
        *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(pcVar11 + 0x1c);
        *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(pcVar11 + 0x14);
        *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(pcVar11 + 0xc);
        *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(pcVar11 + 0x44);
        *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(pcVar11 + 0x3c);
        *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(pcVar11 + 0x34);
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(pcVar11 + 0x2c);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(pcVar11 + 100);
        *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(pcVar11 + 0x5c);
        *(undefined8 *)(param_1 + 100) = *(undefined8 *)(pcVar11 + 0x54);
        *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(pcVar11 + 0x4c);
        *param_1 = 1;
      }
    }
    lVar9 = 12000;
    do {
      if (acStack_2f98[lVar9] != '\0') {
        acStack_2f98[lVar9] = '\0';
      }
      if (acStack_3010[lVar9] != '\0') {
        acStack_3010[lVar9] = '\0';
      }
      lVar9 = lVar9 + -0xf0;
    } while (lVar9 != 0);
    lVar9 = plVar13[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


