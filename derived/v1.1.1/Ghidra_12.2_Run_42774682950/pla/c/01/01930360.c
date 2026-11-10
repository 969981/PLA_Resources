/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01930360; name: FUN_01930360
 */


void FUN_01930360(undefined8 param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  long *plVar12;
  uint *puVar13;
  uint *puVar15;
  uint *puVar14;
  undefined1 *local_48;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar12 = *(long **)(lVar7 + 0x228);
  if (plVar12 != (long *)0x0) {
    lVar7 = plVar12[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = (ulong)*(ushort *)((long)param_2 + (0x22 - (long)*param_2));
  puVar14 = (uint *)((long)param_2 + uVar8);
  uVar9 = (ulong)*puVar14;
  puVar14 = (uint *)((long)puVar14 + uVar9);
  puVar13 = puVar14 + 1;
  uVar10 = (ulong)*puVar14;
  if (uVar10 != 0) {
    lVar7 = (long)param_2 + uVar9 + uVar8 + 9;
    puVar14 = puVar13;
    do {
      puVar15 = puVar14 + 1;
      uVar8 = (ulong)*puVar14;
      bVar2 = *(byte *)((long)puVar15 + uVar8);
      if (bVar2 != 0) {
        pcVar11 = (char *)(lVar7 + uVar8);
        do {
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        local_48 = &DAT_cbf29ce484222645;
        do {
          local_48 = (undefined1 *)(((ulong)local_48 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *(byte *)(lVar7 + uVar8);
          uVar8 = uVar8 + 1;
        } while (bVar2 != 0);
        FUN_010f5104(plVar12,&local_48);
      }
      lVar7 = lVar7 + 4;
      puVar14 = puVar15;
    } while (puVar15 != puVar13 + uVar10);
  }
  if (plVar12 != (long *)0x0) {
    lVar7 = plVar12[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x019304e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x20))(plVar12);
      return;
    }
  }
  return;
}


