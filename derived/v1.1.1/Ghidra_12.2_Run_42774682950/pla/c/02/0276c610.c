/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276c610; name: FUN_0276c610
 */


void FUN_0276c610(undefined1 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined4 local_c18;
  undefined4 local_c14;
  undefined4 uStack_c10;
  undefined2 local_c0c;
  undefined8 local_c08;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined6 uStack_bf0;
  undefined2 local_bea;
  undefined6 uStack_be8;
  undefined4 local_be0;
  undefined2 local_bdc;
  undefined8 local_bd8;
  undefined8 local_bd0;
  undefined8 local_bc8;
  undefined2 local_bc0;
  undefined4 local_bbc;
  undefined2 local_bb8;
  char local_bb0 [8];
  undefined1 auStack_ba8 [8];
  int local_ba0;
  undefined4 local_b9c;
  undefined1 local_b67;
  undefined8 local_b64;
  undefined4 local_b5c;
  undefined4 local_b58;
  undefined4 uStack_b54;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar9 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar9;
  if (lVar9 != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar7 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar7;
    plVar8 = *(long **)(lVar7 + 0x268);
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0xb];
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
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_88 = *(undefined8 *)(param_2 + 8);
      local_70 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_80 = 0x28f5c28f5c28f5c;
      local_78 = 0;
      local_90 = 0;
      iVar5 = FUN_027884b0(lVar9);
      if (iVar5 == 0) {
        *param_1 = 0;
      }
      else {
        iVar10 = 0;
        do {
          FUN_02788704(local_bb0,lVar9,iVar10);
          if (((local_bb0[0] != '\0') && (local_ba0 == 0)) &&
             (lVar7 = FUN_02786a0c(auStack_ba8), lVar7 == 0)) {
            local_be0 = 0;
            local_bdc = 0;
            local_bc8 = 0;
            local_bc0 = 0;
            local_bd8 = 0;
            local_bd0 = 0;
            local_bbc = 0;
            local_bb8 = 0;
            local_c0c = 0;
            uStack_be8 = 0;
            local_bf8 = 0;
            uStack_bf0 = 0;
            local_bea = 0;
            local_c08 = 0;
            local_c00 = 0;
            local_c18 = local_b9c;
            local_c14 = local_b58;
            uStack_c10 = uStack_b54;
            uVar4 = FUN_02786460();
            local_c0c = CONCAT11(local_b67,uVar4);
            local_c08 = local_b64;
            local_c00 = CONCAT44(local_c00._4_4_,local_b5c);
            uVar4 = FUN_01123cf0(plVar8);
            local_bdc._1_1_ = uVar4;
            uVar4 = FUN_01123ce8(plVar8);
            local_bdc = CONCAT11(local_bdc._1_1_,uVar4);
            local_be0 = FUN_01123f68(plVar8);
            FUN_01123bb4(plVar8,(long)&local_c00 + 4);
            local_bc0 = 0;
            local_bd0 = 0;
            local_bc8 = 0;
            local_bd8 = 0;
            local_bbc = 0;
            local_bb8 = 0;
            FUN_0276c940(&local_a0,&local_c18);
          }
          uVar6 = local_90;
          lVar7 = local_98;
          if (local_bb0[0] != '\0') {
            local_bb0[0] = '\0';
          }
          iVar10 = iVar10 + 1;
        } while (iVar5 != iVar10);
        *param_1 = 0;
        if (local_a0 != local_98) {
          *(long *)(param_1 + 8) = local_a0;
          *(undefined8 *)(param_1 + 0x30) = local_78;
          *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_6c,local_70);
          local_a0 = 0;
          *(undefined8 *)(param_1 + 0x20) = local_88;
          *(undefined8 *)(param_1 + 0x28) = local_80;
          local_98 = 0;
          local_90 = 0;
          *(long *)(param_1 + 0x10) = lVar7;
          *(undefined8 *)(param_1 + 0x18) = uVar6;
          *param_1 = 1;
        }
      }
      FUN_0276e020(&local_a0);
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
        return;
      }
      return;
    }
  }
  *param_1 = 0;
  return;
}


