/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f654cc; name: FUN_02f654cc
 */


void FUN_02f654cc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  float local_250;
  float fStack_24c;
  float fStack_248;
  undefined8 *local_240;
  undefined8 local_238;
  undefined8 local_230 [32];
  undefined1 local_130 [8];
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e0;
  long lStack_d8;
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
  
  auVar13 = NEON_fmov(0x3f800000,4);
  local_c8 = 0xffffffff;
  local_d0 = 0;
  local_c4 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_98 = auVar13._8_8_;
  local_a0 = auVar13._0_8_;
  local_ac = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = *(char *)(param_5 + 0x18) != '\0';
  local_f8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10);
  fStack_248 = 0.0;
  local_250 = 0.0;
  fStack_24c = 0.0;
  local_e0 = *(undefined8 *)(param_3 + 0x38);
  lStack_d8 = *(long *)(param_3 + 0x28);
  uStack_c0 = (undefined4)param_4;
  local_bc = (undefined4)((ulong)param_4 >> 0x20);
  uVar12 = NEON_fmin(CONCAT44(*(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x30)),
                     *(undefined8 *)(param_5 + 0x10),4);
  fVar2 = (float)((ulong)uVar12 >> 0x20);
  local_108 = CONCAT44(fVar2 * fVar2,(float)uVar12 * (float)uVar12);
  local_100 = param_2;
  local_f0 = param_3;
  local_80 = param_5;
  if ((*(float *)(lStack_d8 + 0x20) != 0.0) || (*(byte *)(lStack_d8 + 0x18) != 1)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lStack_d8 + 0x18) * 0x200 + 0x18))
              (lStack_d8,param_4,local_130);
    local_250 = (fStack_120 - local_130._0_4_) * 0.5;
    fStack_24c = (fStack_11c - local_130._4_4_) * 0.5;
    fStack_248 = (fStack_118 - fStack_128) * 0.5;
  }
  puVar3 = PTR_PTR_0434a080;
  local_240 = local_230;
  local_238 = 0x8000002000000000;
  iVar5 = *(int *)(param_1 + 0x18);
  if (0 < iVar5) {
    plVar10 = *(long **)(param_3 + 8);
    if (plVar10 == (long *)0x0) {
      iVar9 = 0;
      lVar8 = 0;
      do {
        lVar6 = *(long *)(*(long *)(param_1 + 0x10) + lVar8 * 8);
        if (((*(char *)(lVar6 + 0x20) != '\0') &&
            ((*(byte *)(param_3 + 0x21) & *(byte *)(lVar6 + 0x1ae0)) == 0)) &&
           ((*(byte *)(param_3 + 0x22) & *(byte *)(lVar6 + 0x1ae0)) != 0)) {
          iVar1 = iVar9 + 1;
          if ((int)(local_238._4_4_ & 0x3fffffff) <= iVar9) {
            local_240 = (undefined8 *)
                        FUN_02f6a1c4(puVar3,iVar1,local_240,iVar9,(long)&local_238 + 4);
            iVar9 = (int)local_238;
          }
          local_240[iVar9] = lVar6 + 8;
          local_238 = CONCAT44(local_238._4_4_,iVar1);
          iVar5 = *(int *)(param_1 + 0x18);
          iVar9 = iVar1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar5);
    }
    else {
      uVar11 = 0;
      do {
        lVar8 = *(long *)(*(long *)(param_1 + 0x10) + uVar11 * 8);
        if (((*(char *)(lVar8 + 0x20) != '\0') &&
            ((*(byte *)(param_3 + 0x21) & *(byte *)(lVar8 + 0x1ae0)) == 0)) &&
           (((*(byte *)(param_3 + 0x22) & *(byte *)(lVar8 + 0x1ae0)) != 0 &&
            (uVar4 = (**(code **)(*plVar10 + 0x28))
                               (plVar10,5,uVar11 & 0xffffffff,*(undefined8 *)(param_3 + 0x18)),
            (uVar4 & 1) != 0)))) {
          iVar5 = (int)local_238 + 1;
          if ((int)(local_238._4_4_ & 0x3fffffff) <= (int)local_238) {
            local_240 = (undefined8 *)
                        FUN_02f6a1c4(puVar3,iVar5,local_240,local_238 & 0xffffffff,
                                     (long)&local_238 + 4);
          }
          local_240[(int)local_238] = lVar8 + 8;
          local_238 = CONCAT44(local_238._4_4_,iVar5);
        }
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)*(int *)(param_1 + 0x18));
    }
  }
  if (fStack_248 == 0.0 && (local_250 == 0.0 && fStack_24c == 0.0)) {
    if ((int)local_238 != 0) {
      lVar8 = (long)(int)local_238 << 3;
      puVar7 = local_240;
      do {
        FUN_02f65864(*puVar7,param_4 + 0x30,&local_108,&local_100);
        lVar8 = lVar8 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar8 != 0);
    }
  }
  else if ((*(byte *)(param_5 + 8) & 0x41) == 0) {
    if ((int)local_238 != 0) {
      lVar8 = (long)(int)local_238 << 3;
      puVar7 = local_240;
      do {
        FUN_02f65e0c(*puVar7,local_130,&local_108,&local_100);
        lVar8 = lVar8 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar8 != 0);
    }
  }
  else if ((int)local_238 != 0) {
    lVar8 = (long)(int)local_238 << 3;
    puVar7 = local_240;
    do {
      FUN_02f65c2c(*puVar7,local_130,&local_108,&local_100);
      lVar8 = lVar8 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  uVar11 = local_238;
  uVar4 = (ulong)local_238._4_4_;
  local_238 = (ulong)local_238._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_240 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_240,(uVar4 & 0x3fffffff) << 3);
  }
  return;
}


