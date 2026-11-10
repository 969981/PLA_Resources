/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013add44; name: FUN_013add44
 */


ulong FUN_013add44(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  uVar7 = 0;
  uVar6 = 0xe00000000;
  uVar9 = 1;
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0xb:
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148cdc(&local_a0);
    if (local_a0 == (long *)0x0) {
      uVar6 = 0xe00000000;
      goto LAB_013aded8;
    }
    uVar6 = FUN_01124014();
    if (((uVar6 & 1) != 0) &&
       ((uVar6 = FUN_02728960(), (uVar6 & 1) != 0 || (uVar6 = FUN_02728974(), (uVar6 & 1) != 0)))) {
      *(undefined4 *)(param_1 + 0xac) = 0xe;
      uVar9 = FUN_013add44(param_1);
      uVar6 = uVar9 & 0xffffffff00000000;
      if (local_a0 != (long *)0x0) {
        lVar8 = local_a0[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_a0 + 0x20))();
        }
      }
      uVar7 = uVar9 & 0xffffff00;
      uVar9 = uVar9 & 0xff;
      goto switchD_013add88_caseD_f;
    }
    uVar6 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),4);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0xc;
    }
    if (local_a0 != (long *)0x0) {
      lVar8 = local_a0[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
      }
    }
    break;
  case 0xc:
    uVar6 = FUN_013c6104(*(undefined8 *)(param_1 + 0xc0));
    if ((uVar6 & 1) == 0) {
      local_a0 = (long *)&LAB_013b1710;
      local_98 = FUN_013b1798;
      local_90 = &LAB_013b1980;
      local_88 = &LAB_013b198c;
      alStack_80[0] = param_1;
      FUN_027a7e5c(*(undefined8 *)(param_1 + 0xd0),0,&local_a0);
      pcVar4 = local_98;
      if (local_98 != (code *)0x0) {
        local_90 = (undefined1 *)0x0;
        local_88 = (undefined1 *)0x0;
        local_a0 = (long *)0x0;
        local_98 = (code *)0x0;
        (*pcVar4)(alStack_80);
      }
      *(undefined4 *)(param_1 + 0xac) = 0xd;
    }
    break;
  case 0xd:
    if (*(long *)(param_1 + 0xd0) != 0) {
      FUN_027a7418();
    }
    break;
  case 0xe:
    uVar6 = 0x700000000;
    if (*(int *)(param_1 + 0xb4) != 0) {
      uVar6 = 0x500000000;
    }
    goto LAB_013aded8;
  case 0xf:
    goto switchD_013add88_caseD_f;
  case 0x10:
    uVar6 = 0;
LAB_013aded8:
    uVar7 = 0;
    uVar9 = 1;
    goto switchD_013add88_caseD_f;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar9 = 0;
  uVar6 = 0;
  uVar7 = 0;
switchD_013add88_caseD_f:
  return uVar6 | uVar9 | uVar7;
}


