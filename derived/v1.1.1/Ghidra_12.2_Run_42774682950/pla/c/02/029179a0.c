/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029179a0; name: FUN_029179a0
 */


long * FUN_029179a0(long *param_1,ulong *param_2,uint param_3,long *param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  ulong unaff_x24;
  ulong uVar12;
  ulong uVar13;
  long local_108;
  long local_100;
  ulong local_f8;
  long *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [4];
  undefined4 local_6c [3];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xe));
  plVar4 = (long *)FUN_02917fa0(param_1,param_2);
  local_80 = param_5;
  if (plVar4 == (long *)0x0) {
    lVar9 = *param_1;
    plVar4 = param_1 + 1;
    FUN_00befc74(&local_108,param_2);
    local_100 = 0;
    local_f8 = local_f8 & 0xffffffffffff0000;
    local_e0 = 0;
    local_c0 = 0;
    local_88 = 0;
    local_f0 = (long *)0x0;
    local_e8 = 0;
    local_d0 = 0x1c71c71c71c71c7;
    local_c8 = 0;
    local_a8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_98 = 0x1c71c71c71c71c7;
    local_90 = 0;
    uVar13 = *param_2;
    uVar12 = param_1[2];
    local_d8 = lVar9;
    local_a0 = lVar9;
    if (uVar12 == 0) {
LAB_02917c5c:
      plVar10 = (long *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0xa0,8);
      if (plVar10 == (long *)0x0) {
        (**(code **)(*(long *)param_1[8] + 0xb8))();
      }
      lVar9 = param_1[8];
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), iVar3 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      lVar2 = local_108;
      if (lVar5 != 0) {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      }
      plVar10[2] = *param_2;
      local_108 = 0;
      plVar10[3] = lVar2;
      plVar10[6] = 0;
      plVar10[7] = 0;
      plVar10[8] = 0;
      *(undefined2 *)(plVar10 + 5) = (undefined2)local_f8;
      plVar10[4] = local_100;
      plVar10[0xb] = local_c8;
      plVar10[0xc] = CONCAT44(uStack_bc,local_c0);
      plVar10[9] = local_d8;
      plVar10[10] = local_d0;
      plVar10[6] = (long)local_f0;
      plVar10[7] = local_e8;
      plVar10[8] = local_e0;
      local_f0 = (long *)0x0;
      local_e8 = 0;
      local_e0 = 0;
      plVar10[0xd] = 0;
      plVar10[0xe] = 0;
      plVar10[0xf] = 0;
      plVar10[0x12] = local_90;
      plVar10[0x13] = CONCAT44(uStack_84,local_88);
      plVar10[0x10] = local_a0;
      plVar10[0x11] = local_98;
      plVar10[0xd] = local_b8;
      plVar10[0xe] = local_b0;
      plVar10[0xf] = local_a8;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      *plVar10 = 0;
      plVar10[1] = uVar13;
      if ((uVar12 == 0) || (*(float *)(param_1 + 0xd) * (float)uVar12 < (float)(param_1[0xc] + 1)))
      {
        uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
        uVar6 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
        if (uVar6 <= uVar12) {
          uVar6 = uVar12;
        }
        FUN_029149f0(plVar4,uVar6);
        uVar12 = param_1[2];
        if ((uVar12 & uVar12 - 1) == 0) {
          unaff_x24 = uVar12 - 1 & uVar13;
        }
        else if (uVar13 < uVar12) {
          unaff_x24 = uVar13;
        }
        else {
          uVar6 = 0;
          if (uVar12 != 0) {
            uVar6 = uVar13 / uVar12;
          }
          unaff_x24 = uVar13 - uVar6 * uVar12;
        }
      }
      plVar7 = *(long **)(*plVar4 + unaff_x24 * 8);
      if (plVar7 == (long *)0x0) {
        plVar7 = param_1 + 7;
        *plVar10 = *plVar7;
        *plVar7 = (long)plVar10;
        *(long **)(param_1[1] + unaff_x24 * 8) = plVar7;
        if (*plVar10 != 0) {
          uVar13 = *(ulong *)(*plVar10 + 8);
          if ((uVar12 & uVar12 - 1) == 0) {
            uVar13 = uVar13 & uVar12 - 1;
          }
          else if (uVar12 <= uVar13) {
            uVar6 = 0;
            if (uVar12 != 0) {
              uVar6 = uVar13 / uVar12;
            }
            uVar13 = uVar13 - uVar6 * uVar12;
          }
          plVar7 = (long *)(*plVar4 + uVar13 * 8);
          goto LAB_02917e7c;
        }
      }
      else {
        *plVar10 = *plVar7;
LAB_02917e7c:
        *plVar7 = (long)plVar10;
      }
      param_1[0xc] = param_1[0xc] + 1;
    }
    else {
      uVar6 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        unaff_x24 = uVar12 - 1 & uVar13;
      }
      else {
        unaff_x24 = uVar13;
        if (uVar12 <= uVar13) {
          uVar1 = 0;
          if (uVar12 != 0) {
            uVar1 = uVar13 / uVar12;
          }
          unaff_x24 = uVar13 - uVar1 * uVar12;
        }
      }
      plVar10 = *(long **)(*plVar4 + unaff_x24 * 8);
      if (plVar10 == (long *)0x0) goto LAB_02917c5c;
      if (uVar6 < 2) {
        do {
          plVar10 = (long *)*plVar10;
          if ((plVar10 == (long *)0x0) ||
             (plVar10[1] != uVar13 && (plVar10[1] & uVar12 - 1) != unaff_x24)) goto LAB_02917c5c;
        } while (plVar10[2] != uVar13);
      }
      else {
        do {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_02917c5c;
          uVar6 = plVar10[1];
          if (uVar6 != uVar13) {
            if (uVar12 <= uVar6) {
              uVar1 = 0;
              if (uVar12 != 0) {
                uVar1 = uVar6 / uVar12;
              }
              uVar6 = uVar6 - uVar1 * uVar12;
            }
            if (uVar6 != unaff_x24) goto LAB_02917c5c;
          }
        } while (plVar10[2] != uVar13);
      }
    }
    FUN_029141b8(&local_108);
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(plVar10 + 5) = 1;
    }
    *(int *)((long)plVar10 + 0x24) = *(int *)((long)plVar10 + 0x24) + 1;
    pcVar8 = (code *)*param_4;
    plVar4 = plVar10 + 3;
    if (pcVar8 == (code *)0x0) goto LAB_02917ed8;
    if ((char)plVar10[5] == '\0') {
      uVar11 = (undefined4)plVar10[4];
      plVar10 = (long *)plVar10[3];
      if (plVar10 != (long *)0x0) goto LAB_02917b60;
LAB_02917f10:
      local_108 = *(long *)PTR_DAT_04379c88;
      if (plVar10 != (long *)0x0) goto LAB_02917b6c;
LAB_02917f20:
      local_100 = *(long *)PTR_PTR_04379d00;
      if (plVar10 != (long *)0x0) goto LAB_02917b78;
LAB_02917f30:
      local_f8 = 0;
      goto LAB_02917b7c;
    }
    plVar10 = plVar10 + 6;
  }
  else {
    if (*(char *)((long)plVar4 + 0x11) != '\0') {
      lVar9 = plVar4[3];
      lVar2 = plVar4[4];
      while (lVar5 = lVar2, lVar5 != lVar9) {
        pcVar8 = *(code **)(lVar5 + -0x88);
        lVar2 = lVar5 + -0x90;
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar5 + -0x80) = 0;
          *(undefined8 *)(lVar5 + -0x78) = 0;
          *(undefined8 *)(lVar5 + -0x90) = 0;
          *(undefined8 *)(lVar5 + -0x88) = 0;
          (*pcVar8)(lVar5 + -0x70);
        }
      }
      plVar4[4] = lVar9;
      lVar9 = plVar4[10];
      lVar2 = plVar4[0xb];
      while (lVar5 = lVar2, lVar5 != lVar9) {
        pcVar8 = *(code **)(lVar5 + -0x88);
        lVar2 = lVar5 + -0x90;
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar5 + -0x80) = 0;
          *(undefined8 *)(lVar5 + -0x78) = 0;
          *(undefined8 *)(lVar5 + -0x90) = 0;
          *(undefined8 *)(lVar5 + -0x88) = 0;
          (*pcVar8)(lVar5 + -0x70);
        }
      }
      plVar4[0xb] = lVar9;
    }
    *(int *)((long)plVar4 + 0xc) = *(int *)((long)plVar4 + 0xc) + 1;
    pcVar8 = (code *)*param_4;
    if (pcVar8 == (code *)0x0) goto LAB_02917ed8;
    if ((char)plVar4[2] == '\0') {
      uVar11 = (undefined4)plVar4[1];
      plVar10 = (long *)*plVar4;
      if (plVar10 == (long *)0x0) goto LAB_02917f10;
LAB_02917b60:
      local_108 = plVar10[0xb];
      if (plVar10 == (long *)0x0) goto LAB_02917f20;
LAB_02917b6c:
      local_100 = plVar10[0xc];
      if (plVar10 == (long *)0x0) goto LAB_02917f30;
LAB_02917b78:
      local_f8 = plVar10[0xd];
LAB_02917b7c:
      local_f0 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pcVar8 = (code *)*param_4;
      }
      local_70[0] = 1;
      local_f0 = plVar10;
      local_78 = param_5;
      local_6c[0] = uVar11;
      (*pcVar8)(param_4 + 4,local_6c,&local_108,local_70,&local_78);
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      goto LAB_02917ed8;
    }
    plVar10 = plVar4 + 3;
  }
  FUN_02917208(plVar10,param_4,&local_80);
LAB_02917ed8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xe));
  return plVar4;
}


