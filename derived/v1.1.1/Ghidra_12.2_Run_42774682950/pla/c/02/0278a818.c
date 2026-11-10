/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278a818; name: FUN_0278a818
 */


int FUN_0278a818(void)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  char acStack_3000 [120];
  char acStack_2f88 [120];
  char local_2f10 [12000];
  
  pcVar11 = local_2f10;
  pcVar10 = local_2f10;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar13 = *(long **)(lVar8 + 0x2a8);
  if (plVar13 == (long *)0x0) {
    iVar6 = 0;
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
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar9 = (undefined8 *)((long)plVar13 + 0xdd1c);
    lVar8 = 100;
    do {
      *pcVar11 = 0;
      if (*(char *)((long)puVar9 + -4) != '\0') {
        uVar7 = *puVar9;
        uVar3 = puVar9[1];
        *(undefined8 *)(pcVar11 + 0x14) = puVar9[2];
        *(undefined8 *)(pcVar11 + 0xc) = uVar3;
        *(undefined8 *)(pcVar11 + 4) = uVar7;
        uVar7 = puVar9[3];
        uVar12 = puVar9[4];
        uVar3 = puVar9[5];
        *(undefined8 *)(pcVar11 + 0x34) = puVar9[6];
        *(undefined8 *)(pcVar11 + 0x2c) = uVar3;
        *(undefined8 *)(pcVar11 + 0x24) = uVar12;
        *(undefined8 *)(pcVar11 + 0x1c) = uVar7;
        uVar7 = puVar9[7];
        uVar12 = puVar9[8];
        uVar3 = puVar9[9];
        *(undefined8 *)(pcVar11 + 0x54) = puVar9[10];
        *(undefined8 *)(pcVar11 + 0x4c) = uVar3;
        *(undefined8 *)(pcVar11 + 0x44) = uVar12;
        *(undefined8 *)(pcVar11 + 0x3c) = uVar7;
        uVar7 = puVar9[0xb];
        uVar3 = puVar9[0xc];
        uVar12 = puVar9[0xd];
        *(undefined4 *)(pcVar11 + 0x74) = *(undefined4 *)(puVar9 + 0xe);
        *(undefined8 *)(pcVar11 + 0x6c) = uVar12;
        *(undefined8 *)(pcVar11 + 100) = uVar3;
        *(undefined8 *)(pcVar11 + 0x5c) = uVar7;
        *pcVar11 = 1;
      }
      lVar8 = lVar8 + -1;
      puVar9 = puVar9 + 0xf;
      pcVar11 = pcVar11 + 0x78;
    } while (lVar8 != 0);
    iVar6 = 0;
    do {
      cVar4 = *pcVar10;
      pcVar11 = pcVar10 + 0x78;
      pcVar10 = pcVar10 + 0xf0;
      if (cVar4 != '\0') {
        iVar6 = iVar6 + 1;
      }
      if (*pcVar11 != '\0') {
        iVar6 = iVar6 + 1;
      }
    } while (pcVar10 != local_2f10 + 12000);
    lVar8 = 12000;
    do {
      if (acStack_2f88[lVar8] != '\0') {
        acStack_2f88[lVar8] = '\0';
      }
      if (acStack_3000[lVar8] != '\0') {
        acStack_3000[lVar8] = '\0';
      }
      lVar8 = lVar8 + -0xf0;
    } while (lVar8 != 0);
    lVar8 = plVar13[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return iVar6;
}


