/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f66258; name: FUN_02f66258
 */


void FUN_02f66258(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar13;
  undefined1 auVar12 [16];
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 local_210;
  undefined8 local_208 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined5 uStack_b4;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined1 local_78;
  
  puVar2 = PTR_PTR_0434a080;
  auVar12 = NEON_fmov(0x3f800000,4);
  local_c8 = 0xffffffff;
  local_d0 = 0;
  local_c4 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_98 = auVar12._8_8_;
  local_a0 = auVar12._0_8_;
  local_ac = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_78 = *(char *)(param_5 + 0x18) != '\0';
  local_f8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10);
  local_e0 = *(undefined8 *)(param_3 + 0x38);
  local_d8 = *(undefined8 *)(param_3 + 0x28);
  uStack_c0 = (undefined4)param_4;
  local_bc = (undefined4)((ulong)param_4 >> 0x20);
  local_218 = local_208;
  local_210 = 0x8000002000000000;
  uVar11 = NEON_fmin(CONCAT44(*(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x30)),
                     *(undefined8 *)(param_5 + 0x10),4);
  fVar13 = (float)((ulong)uVar11 >> 0x20);
  local_108 = CONCAT44(fVar13 * fVar13,(float)uVar11 * (float)uVar11);
  iVar4 = *(int *)(param_1 + 0x18);
  local_100 = param_2;
  local_f0 = param_3;
  local_80 = param_5;
  if (iVar4 < 1) {
    iVar8 = 0;
  }
  else {
    plVar9 = *(long **)(param_3 + 8);
    if (plVar9 == (long *)0x0) {
      iVar8 = 0;
      lVar7 = 0;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0x10) + lVar7 * 8);
        if (((*(char *)(lVar5 + 0x20) != '\0') &&
            ((*(byte *)(param_3 + 0x21) & *(byte *)(lVar5 + 0x1ae0)) == 0)) &&
           ((*(byte *)(param_3 + 0x22) & *(byte *)(lVar5 + 0x1ae0)) != 0)) {
          iVar1 = iVar8 + 1;
          if ((int)(local_210._4_4_ & 0x3fffffff) <= iVar8) {
            local_218 = (undefined8 *)
                        FUN_02f6a1c4(puVar2,iVar1,local_218,iVar8,(long)&local_210 + 4);
            iVar8 = (int)local_210;
          }
          local_218[iVar8] = lVar5 + 8;
          local_210 = CONCAT44(local_210._4_4_,iVar1);
          iVar4 = *(int *)(param_1 + 0x18);
          iVar8 = iVar1;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar4);
    }
    else {
      uVar10 = 0;
      do {
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + uVar10 * 8);
        if (((*(char *)(lVar7 + 0x20) != '\0') &&
            ((*(byte *)(param_3 + 0x21) & *(byte *)(lVar7 + 0x1ae0)) == 0)) &&
           (((*(byte *)(param_3 + 0x22) & *(byte *)(lVar7 + 0x1ae0)) != 0 &&
            (uVar3 = (**(code **)(*plVar9 + 0x28))
                               (plVar9,5,uVar10 & 0xffffffff,*(undefined8 *)(param_3 + 0x18)),
            (uVar3 & 1) != 0)))) {
          iVar4 = (int)local_210 + 1;
          if ((int)(local_210._4_4_ & 0x3fffffff) <= (int)local_210) {
            local_218 = (undefined8 *)
                        FUN_02f6a1c4(puVar2,iVar4,local_218,local_210 & 0xffffffff,
                                     (long)&local_210 + 4);
          }
          local_218[(int)local_210] = lVar7 + 8;
          local_210 = CONCAT44(local_210._4_4_,iVar4);
        }
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)*(int *)(param_1 + 0x18));
      iVar8 = (int)local_210;
    }
  }
  local_220 = 0x7f7fffee7f7fffee;
  if (iVar8 != 0) {
    lVar7 = (long)iVar8 << 3;
    puVar6 = local_218;
    do {
      FUN_02f6654c(*puVar6,param_4 + 0x30,&local_108,&local_220,&local_100);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar10 = local_210;
  uVar11 = NEON_fmin(*(undefined8 *)(param_5 + 0xe8),local_220,4);
  *(undefined8 *)(param_5 + 0xe8) = uVar11;
  uVar3 = (ulong)local_210._4_4_;
  local_210 = (ulong)local_210._4_4_ << 0x20;
  if ((-1 < (long)uVar10) && (local_218 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_218,(uVar3 & 0x3fffffff) << 3);
  }
  return;
}


