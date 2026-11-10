/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec8c7c; name: FUN_02ec8c7c
 */


undefined8 FUN_02ec8c7c(long param_1)

{
  uint uVar1;
  undefined ***pppuVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined2 local_d8;
  byte local_d6;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  local_c0 = 0;
  uStack_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0xff;
  local_98 = 0xff;
  local_70 = (long *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_d0 = &PTR_FUN_042a9648;
  local_c8 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xae0007;
  if (*(int *)(param_1 + 0x58) == 0) {
    plVar4 = (long *)0x0;
    puVar5 = (undefined8 *)FUN_02eacd1c(0xae0007);
  }
  else {
    plVar4 = (long *)FUN_02e786d8(DAT_0440a120 + 0x2a0);
    if (plVar4 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0xe611314a;
      puVar5 = (undefined8 *)FUN_02eacd1c(*(undefined4 *)(param_1 + 0x18));
    }
    else {
      *(int *)(param_1 + 0x18) = (int)plVar4[6];
      puVar5 = (undefined8 *)FUN_02eacd1c();
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
LAB_02ec8f70:
    uVar10 = 0;
  }
  else {
    do {
      local_70 = (long *)(*(code *)*puVar5)(&PTR_PTR_042a9250);
      if (local_70 == (long *)0x0) goto LAB_02ec8f70;
      local_dc = *(uint *)(param_1 + 100);
      local_e0 = DAT_042ab258;
      uVar11 = (local_d6 & 0xf8) << 0x10 | (local_dc & 0xff) << 8 | 0x50020;
      local_d8 = (undefined2)uVar11;
      local_d6 = (byte)(uVar11 >> 0x10);
      if (plVar4 != (long *)0x0) {
        local_110 = 0;
        local_100 = 0;
        local_108 = 0;
        local_f8 = 0xff;
        local_f0 = 0xff;
        local_e8 = 0;
        FUN_02eaf838(&local_d0,plVar4,&local_110,0,0);
      }
      iVar3 = (**(code **)(*local_70 + 0x38))(local_70,&PTR_PTR_042a9250,param_1,local_c8,&local_e0)
      ;
      if (iVar3 == 1) {
        uVar11 = local_dc;
        if ((local_dc & 0xf00) == 0x100) {
          uVar11 = local_dc >> 0xc;
          if (((local_dc >> 0x10 ^ local_dc >> 0x15) & 1) != 0) {
            uVar11 = local_dc >> 0xc & 0xffffffcf | 0x600;
          }
          uVar1 = uVar11 - (uVar11 >> 1 & 0x55555555);
          uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
          uVar11 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar11 << 0xc | 0x100;
        }
        if (*(int *)(param_1 + 0x58) == 0) {
          *(undefined4 *)(param_1 + 0x58) = 0xe611314a;
        }
        if (local_70 == (long *)0x0) goto LAB_02ec8f70;
LAB_02ec8e7c:
        iVar3 = (**(code **)(*local_70 + 0x18))();
        if (iVar3 == 1) {
          pppuVar2 = (undefined ***)(param_1 + 0xd8);
          uVar10 = 1;
          if (&local_d0 != pppuVar2) {
            FUN_02eb04e4(pppuVar2,&local_d0);
            local_110 = 0;
            local_100 = 0;
            local_108 = 0;
            local_f8 = 0xff;
            local_f0 = 0xff;
            local_e8 = 0;
            FUN_02eaf850(pppuVar2,&local_110,0);
            *(uint *)(param_1 + 0x3c) = uVar11;
            *(undefined4 *)(param_1 + 0x160) = 1;
          }
        }
        else {
          (*(code *)local_d0[5])(&local_d0);
          uVar10 = 0;
        }
        break;
      }
      FUN_02eb04a0(&local_d0);
      uVar6 = 0xae0007;
      if (iVar3 == 4) {
LAB_02ec8fec:
        *(undefined4 *)(param_1 + 0x18) = uVar6;
      }
      else {
        if (iVar3 == 0x5a) {
          uVar6 = 0xb50007;
          goto LAB_02ec8fec;
        }
        if (iVar3 == 2) {
          uVar11 = 0;
          if (local_70 != (long *)0x0) goto LAB_02ec8e7c;
          goto LAB_02ec8f70;
        }
      }
      uVar11 = *(uint *)(DAT_0440a120 + 0x2c8);
      if (uVar11 == 0) {
LAB_02ec9014:
        iVar3 = *(int *)(param_1 + 0x18);
      }
      else {
        plVar7 = *(long **)(DAT_0440a120 + 0x2c0);
        lVar9 = *plVar7;
        if (lVar9 == 0) {
          uVar8 = 0;
          do {
            if (uVar11 - 1 == uVar8) goto LAB_02ec9014;
            uVar8 = uVar8 + 1;
            lVar9 = plVar7[uVar8 & 0xffffffff];
          } while (lVar9 == 0);
        }
        else {
          uVar8 = 0;
        }
        iVar3 = *(int *)(param_1 + 0x18);
        while (*(int *)(lVar9 + 0x30) != iVar3) {
          lVar9 = *(long *)(lVar9 + 8);
          while (lVar9 == 0) {
            uVar1 = (int)uVar8 + 1;
            uVar8 = (ulong)uVar1;
            if (uVar11 <= uVar1) goto LAB_02ec9018;
            lVar9 = plVar7[uVar1];
          }
        }
        *(ulong *)(param_1 + 0x10) = (ulong)*(uint *)(lVar9 + 0x10);
      }
LAB_02ec9018:
      puVar5 = (undefined8 *)FUN_02eacd1c(iVar3);
      uVar10 = 0;
    } while (puVar5 != (undefined8 *)0x0);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_d0 = &PTR_FUN_042a9648;
  (*(code *)PTR_FUN_042a9670)(&local_d0);
  local_d0 = &PTR_LAB_042a9608;
  (*(code *)PTR_FUN_042a9630)(&local_d0);
  return uVar10;
}


