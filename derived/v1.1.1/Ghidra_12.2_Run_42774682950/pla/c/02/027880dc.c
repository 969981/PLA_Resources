/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027880dc; name: FUN_027880dc
 */


void FUN_027880dc(undefined8 param_1,undefined8 *param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  short *psVar12;
  long lVar13;
  long *plVar14;
  short sVar15;
  undefined8 uStack_1c4a8;
  undefined4 uStack_1c4a0;
  undefined4 uStack_1c49c;
  undefined8 uStack_1c498;
  undefined8 uStack_1c490;
  undefined8 uStack_1c488;
  undefined8 uStack_1c480;
  undefined8 uStack_1c478;
  undefined8 uStack_1c470;
  undefined8 uStack_1c468;
  undefined8 uStack_1c460;
  int iStack_1c458;
  undefined2 uStack_1c454;
  short sStack_1c452;
  undefined8 uStack_1c450;
  undefined8 uStack_1c448;
  undefined8 uStack_1c440;
  undefined8 uStack_1c438;
  undefined1 auStack_1c430 [2704];
  char acStack_1b9a0 [8];
  undefined8 uStack_1b998;
  undefined4 local_dcf8 [14122];
  
  sVar15 = 0;
  psVar12 = param_3;
  do {
    psVar1 = psVar12 + 2;
    if (*psVar12 != 0) {
      sVar15 = sVar15 + 1;
    }
    psVar2 = psVar12 + 4;
    psVar12 = psVar12 + 6;
    if (*psVar1 != 0) {
      sVar15 = sVar15 + 1;
    }
    if (*psVar2 != 0) {
      sVar15 = sVar15 + 1;
    }
  } while (psVar12 != param_3 + 0x546);
  if (sVar15 != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar13 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar13;
    plVar14 = *(long **)(lVar13 + 0x2a8);
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar10;
      }
      piVar3 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = *piVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      memcpy(local_dcf8,plVar14 + 0xe,0xdca8);
      FUN_0275d180(acStack_1b9a0);
      uStack_1c4a8 = 0;
      if (acStack_1b9a0[0] != '\0') {
        acStack_1b9a0[0] = '\0';
        uStack_1c4a8 = uStack_1b998;
      }
      iVar9 = 0;
      psVar12 = param_3;
      do {
        psVar1 = psVar12 + 2;
        if (*psVar12 != 0) {
          iVar9 = iVar9 + 1;
        }
        psVar2 = psVar12 + 4;
        psVar12 = psVar12 + 6;
        if (*psVar1 != 0) {
          iVar9 = iVar9 + 1;
        }
        if (*psVar2 != 0) {
          iVar9 = iVar9 + 1;
        }
      } while (psVar12 != param_3 + 0x546);
      if ((uint)(iVar9 * 0x19) < 10) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uint)(iVar9 * 0x19) / 10;
      }
      if (0x31 < uVar11) {
        uVar11 = 0x32;
      }
      uStack_1c454 = FUN_02786b28(param_3);
      iStack_1c458 = uVar11 + 0x32;
      uStack_1c4a0 = 0;
      uStack_1c49c = local_dcf8[0];
      uStack_1c498 = 0;
      uStack_1c490 = 0;
      uStack_1c488 = 0;
      uStack_1c480 = 0;
      uStack_1c478 = 0;
      uStack_1c470 = 0;
      uStack_1c468 = *param_2;
      uStack_1c460 = param_2[1];
      uStack_1c450 = 0;
      uStack_1c448 = 0;
      uStack_1c440 = 0;
      uStack_1c438 = 0;
      sStack_1c452 = sVar15;
      memcpy(auStack_1c430,param_3,0xa8c);
      FUN_027852b0(acStack_1b9a0,local_dcf8,&uStack_1c4a8);
      memcpy(local_dcf8,acStack_1b9a0,0xdca8);
      FUN_0110b874(plVar14,local_dcf8);
      puVar6 = PTR_DAT_0437b630;
      uVar8 = *(undefined1 *)((long)param_2 + 1);
      if (((*PTR_DAT_0437b630 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b630);
      }
      puVar7 = PTR_DAT_0437b638;
      DAT_043ad1d0 = *(long *)PTR_DAT_0437b638;
      if (DAT_043ad1d0 != 0) {
        FUN_00db0b58(DAT_043ad1d0,"area_id",uVar8);
      }
      FUN_00db1124((double)*(float *)((long)param_2 + 4),"point_x");
      FUN_00db1124((double)*(float *)(param_2 + 1),"point_y");
      FUN_00db1124((double)*(float *)((long)param_2 + 0xc),"point_z");
      uVar8 = FUN_02786460();
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b630);
      }
      DAT_043ad1d0 = *(long *)puVar7;
      if (DAT_043ad1d0 != 0) {
        FUN_00db0b58(DAT_043ad1d0,"ridelv",uVar8);
      }
      FUN_00db16f8(0x10);
      lVar13 = plVar14[0xb];
      piVar3 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  return;
}


