/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013adfc0; name: FUN_013adfc0
 */


ulong FUN_013adfc0(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x21;
  long *local_38;
  long *local_28;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x11:
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_0114924c(&local_28);
    uVar12 = FUN_013974d0();
    uVar7 = 0x12;
    if ((uVar12 & 1) == 0) {
      uVar7 = 0x14;
    }
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    if (local_28 != (long *)0x0) {
      lVar11 = local_28[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
    break;
  case 0x12:
    uVar12 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0x1b);
    if ((uVar12 & 1) != 0) {
      uVar7 = 0x13;
LAB_013ae0e0:
      *(undefined4 *)(param_1 + 0xac) = uVar7;
    }
    break;
  case 0x13:
    uVar12 = 1;
    uVar8 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),1);
    if ((uVar8 & 1) != 0) {
      unaff_x21 = 0;
      goto LAB_013ae0e8;
    }
    break;
  case 0x14:
    uVar12 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),5);
    if ((uVar12 & 1) != 0) {
      uVar7 = 0x15;
      goto LAB_013ae0e0;
    }
    break;
  case 0x15:
    uVar12 = FUN_013c6200(*(undefined8 *)(param_1 + 0xc0),5);
    if ((uVar12 & 1) != 0) {
      uVar7 = 0x16;
      goto LAB_013ae0e0;
    }
    break;
  case 0x16:
    if (*(char *)(param_1 + 0x48c) != '\0') {
      *(undefined1 *)(param_1 + 0x48c) = 0;
    }
    if (*(char *)(param_1 + 0x49e) != '\0') {
      *(undefined1 *)(param_1 + 0x49e) = 0;
    }
    plVar9 = (long *)FUN_00d48784(&local_28,*(undefined8 *)(param_1 + 0xa0),&DAT_03a7e324);
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar10 = FUN_013a3acc(*(undefined8 *)(param_1 + 0x98));
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_38 = plVar9;
    iVar6 = FUN_00d75290(uVar10,&local_38);
    if (local_38 == (long *)0x0) {
LAB_013ae19c:
      if (iVar6 != 0) goto LAB_013ae1a0;
LAB_013ae1dc:
      *(undefined1 *)(param_1 + 0x49d) = 0;
      *(undefined8 *)(param_1 + 0x48d) = 0;
      *(undefined8 *)(param_1 + 0x495) = 0;
      if (*(char *)(param_1 + 0x48c) == '\0') {
        *(undefined1 *)(param_1 + 0x48c) = 1;
      }
      uVar10 = FUN_02c2f268(plVar9);
      uVar7 = FUN_02c30040(plVar9);
      FUN_02c30960((undefined8 *)(param_1 + 0x48d),0x11,uVar10,uVar7);
      unaff_x21 = 6;
    }
    else {
      plVar2 = local_38 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 != 0) goto LAB_013ae19c;
      (**(code **)(*local_38 + 0x10))();
      if (iVar6 == 0) goto LAB_013ae1dc;
LAB_013ae1a0:
      unaff_x21 = 0;
    }
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 10;
      do {
        lVar11 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar11 == 1) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    uVar12 = 1;
    goto LAB_013ae0e8;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar12 = 0;
LAB_013ae0e8:
  return uVar12 | unaff_x21 << 0x20;
}


