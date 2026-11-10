/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a4f04; name: FUN_011a4f04
 */


undefined1 * FUN_011a4f04(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined2 uVar18;
  byte local_60 [32];
  
  if (*(int *)(param_1 + 0x6d8) == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar13 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar13;
    plVar17 = *(long **)(lVar13 + 0x280);
    if (plVar17 != (long *)0x0) {
      lVar13 = plVar17[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    iVar3 = *(int *)(param_1 + 0x16c4);
    lVar13 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8);
    lVar14 = *(long *)(lVar13 + 0x8b0);
    iVar9 = *(int *)(lVar14 + 0x10);
    iVar2 = *(int *)(lVar14 + 0x14);
    piVar1 = (int *)(lVar14 + 0x20);
    if (*(int *)(lVar14 + 0x28) != 0) {
      piVar1 = (int *)(lVar14 + 0x24);
    }
    iVar4 = *piVar1;
    uVar8 = FUN_010dac08(lVar13,iVar3);
    if (iVar3 == 0) {
      plVar15 = plVar17 + 0xd;
LAB_011a5044:
      uVar5 = iVar2 + iVar4 * iVar9;
      if (uVar8 <= uVar5) goto LAB_011a5120;
      uVar18 = *(undefined2 *)((long)plVar15 + (ulong)uVar5 * 4);
    }
    else {
      if (iVar3 == 1) {
        plVar15 = (long *)((long)plVar17 + 0xaf4);
        goto LAB_011a5044;
      }
      if (iVar3 == 2) {
        plVar15 = (long *)((long)plVar17 + 0xc84);
        goto LAB_011a5044;
      }
LAB_011a5120:
      uVar18 = 0;
    }
    if (plVar17 != (long *)0x0) {
      lVar13 = plVar17[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    FUN_02c4fb44(local_60,uVar18);
    uVar11 = FUN_02c50610(local_60,0xf);
    if ((uVar11 & 1) != 0) {
      iVar9 = FUN_02c4fc60(local_60,0x17);
      goto LAB_011a4f28;
    }
  }
  iVar9 = 0;
LAB_011a4f28:
  puVar16 = &DAT_cbf29ce484222645;
  snprintf((char *)local_60,0x20,"poem_%02d",iVar9);
  if (local_60[0] != 0) {
    pbVar12 = (byte *)((ulong)local_60 | 1);
    do {
      puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)local_60[0]) * 0x100000001b3);
      local_60[0] = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (local_60[0] != 0);
  }
  return puVar16;
}


