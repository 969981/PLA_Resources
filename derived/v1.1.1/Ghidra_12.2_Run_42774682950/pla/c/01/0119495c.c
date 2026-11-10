/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119495c; name: FUN_0119495c
 */


void FUN_0119495c(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar12 = *(long **)(lVar10 + 0x280);
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar8 = (int *)(lVar10 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  iVar4 = FUN_00d5294c(*(undefined8 *)(param_1 + 0x1a8));
  uVar7 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x1a8),iVar4);
  if (iVar4 == 0) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x1a8) + 0x16c4);
    uVar5 = FUN_010dac08(uVar7,iVar4);
    if (iVar4 == 0) {
      plVar11 = plVar12 + 0xd;
joined_r0x01194cf4:
      if (uVar5 <= (uint)uVar7) goto LAB_01194cf8;
LAB_01194a24:
      uVar5 = *(uint *)((long)plVar11 + (uVar7 & 0xffffffff) * 4);
    }
    else {
      if (iVar4 == 1) {
        plVar11 = (long *)((long)plVar12 + 0xaf4);
        if ((uint)uVar7 < uVar5) goto LAB_01194a24;
      }
      else if (iVar4 == 2) {
        plVar11 = (long *)((long)plVar12 + 0xc84);
        goto joined_r0x01194cf4;
      }
LAB_01194cf8:
      uVar5 = 0;
    }
    lVar10 = FUN_011945c8(param_1);
    if (lVar10 != 0) {
      piVar8 = (int *)FUN_0118f90c();
      if (*piVar8 == 0) {
LAB_01194b10:
        FUN_011a0914(*(undefined8 *)(param_1 + 0x1a8));
        uVar6 = 0xd;
LAB_01194ad0:
        *(undefined8 *)(param_1 + 0x1d0) = uVar6;
      }
      else {
        uVar9 = FUN_0118fd1c(lVar10);
        if ((uVar9 & 1) == 0) {
          uVar6 = 0xcf43f9ca23510965;
        }
        else {
          FUN_02c4fb44(&local_d0,uVar5 & 0xffff);
          iVar4 = FUN_02c4fc60(&local_d0,0x11);
          FUN_02c4fc5c(&local_d0);
          if (iVar4 == 1) goto LAB_01194b10;
          uVar9 = FUN_0118ff80(lVar10);
          if (((uVar9 & 1) == 0) || (iVar4 = FUN_02c50554(uVar5), iVar4 == 0)) {
            if (((char)piVar8[1] == '\0') || (iVar4 = FUN_02c50554(uVar5), iVar4 == 0)) {
              iVar4 = FUN_02c50554(uVar5);
              if ((iVar4 == 0) ||
                 (uVar9 = FUN_011a2ec0(*(undefined8 *)(param_1 + 0x1a8)), (uVar9 & 1) != 0)) {
                FUN_0118fb1c(lVar10,uVar5,1,uVar7 & 0xffffffff);
                FUN_0118fb34(lVar10,1);
                uVar6 = 6;
                goto LAB_01194ad0;
              }
              uVar6 = 0xcf586bca23627425;
            }
            else {
              uVar6 = 0xcf40fdca234eda5a;
            }
          }
          else {
            uVar6 = 0xcf54feca235f8517;
          }
        }
        uStack_a0 = 0;
        local_a8 = &LAB_01196318;
        local_c8 = FUN_011997f8;
        local_d0 = &LAB_011997dc;
        local_c0 = &LAB_011997fc;
        puStack_b8 = &LAB_01199810;
        local_b0 = param_1;
        FUN_0119541c(param_1,uVar6,&local_d0,1,0,1);
        pcVar3 = local_c8;
        bVar2 = local_c8 != (code *)0x0;
        local_c8 = (code *)0x0;
        if (bVar2) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar3)(&local_b0);
        }
      }
      goto joined_r0x01194b68;
    }
  }
  FUN_00d42438(*(undefined8 *)(param_1 + 0x1a8),1,1);
  FUN_00d4ba88(*(undefined8 *)(param_1 + 0x1a8),2,1);
  FUN_00d469b4(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x68),*(long *)(param_1 + 0x1a8),0);
joined_r0x01194b68:
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    piVar8 = (int *)(lVar10 + 0xc);
    do {
      iVar4 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
}


