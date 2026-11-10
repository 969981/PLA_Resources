/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5523c; name: FUN_02e5523c
 */


void FUN_02e5523c(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  
  uVar3 = (ulong)param_4;
  FUN_02e54d0c(param_2,param_1,param_4);
  fVar7 = *(float *)(param_2 + 0x5c);
  fVar8 = *(float *)(param_2 + 0x60);
  fVar9 = -*(float *)(param_2 + 100);
  local_b0 = -fVar7;
  fStack_ac = -fVar8;
  local_a8 = fVar9;
  FUN_02e546e8(&local_a0,param_2,&local_b0);
  FUN_02e555e0(&local_90,param_3,&local_a0);
  local_c0 = -fVar7;
  fStack_bc = fVar8;
  local_b8 = fVar9;
  FUN_02e546e8(&local_b0,param_2,&local_c0);
  FUN_02e555e0(&local_a0,param_3,&local_b0);
  local_d0 = fVar7;
  fStack_cc = fVar8;
  local_c8 = fVar9;
  FUN_02e546e8(&local_c0,param_2,&local_d0);
  FUN_02e555e0(&local_b0,param_3,&local_c0);
  local_e0 = fVar7;
  fStack_dc = -fVar8;
  local_d8 = fVar9;
  FUN_02e546e8(&local_d0,param_2,&local_e0);
  FUN_02e555e0(&local_c0,param_3,&local_d0);
  lVar4 = *(long *)(param_3 + 0x38);
  FUN_02e56138(param_3);
  lVar6 = param_2 + uVar3 * 0x2b0;
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  FUN_02e487c0(lVar6 + 0xc0,&local_90,&local_a0,&local_b0);
  *(undefined8 *)(lVar6 + 0xf0) = 0;
  *(long *)(lVar6 + 0xf8) = lVar4;
  plVar1 = (long *)FUN_02e49324(lVar4 + 0x20);
  if (plVar1 != (long *)0x0) {
    *plVar1 = lVar6 + 0xc0;
  }
  lVar6 = param_2 + uVar3 * 0x2b0;
  FUN_02e487c0(lVar6 + 0x100,&local_b0,&local_c0,&local_90);
  *(undefined8 *)(lVar6 + 0x130) = 0;
  *(long *)(lVar6 + 0x138) = lVar4;
  plVar1 = (long *)FUN_02e49324(lVar4 + 0x20);
  if (plVar1 != (long *)0x0) {
    *plVar1 = lVar6 + 0x100;
  }
  local_d0 = local_90 * 2.0 - local_c0;
  fStack_cc = fStack_8c * 2.0 - fStack_bc;
  local_c8 = local_88 * 2.0 - local_b8;
  lVar2 = param_2 + uVar3 * 0x2b0;
  lVar6 = lVar2 + 0x140;
  *(undefined8 *)(lVar2 + 0x170) = uVar5;
  FUN_02e4b768(lVar6,&local_90,&local_a0,&local_d0,param_3);
  if (*(uint *)(lVar4 + 0x38) != 0) {
    lVar2 = (ulong)*(uint *)(lVar4 + 0x38) << 3;
    plVar1 = *(long **)(lVar4 + 0x30);
    do {
      if (*plVar1 == lVar6) goto LAB_02e55438;
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  plVar1 = (long *)FUN_02e4b104(lVar4 + 0x30);
  if (plVar1 != (long *)0x0) {
    *plVar1 = lVar6;
  }
LAB_02e55438:
  local_d0 = local_b0 * 2.0 - local_a0;
  fStack_cc = fStack_ac * 2.0 - fStack_9c;
  local_c8 = local_a8 * 2.0 - local_98;
  lVar2 = param_2 + uVar3 * 0x2b0;
  lVar6 = lVar2 + 0x1c8;
  *(undefined8 *)(lVar2 + 0x1f8) = uVar5;
  FUN_02e4b768(lVar6,&local_c0,&local_b0,&local_d0,param_3);
  if (*(uint *)(lVar4 + 0x38) != 0) {
    lVar2 = (ulong)*(uint *)(lVar4 + 0x38) << 3;
    plVar1 = *(long **)(lVar4 + 0x30);
    do {
      if (*plVar1 == lVar6) goto LAB_02e554b8;
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  plVar1 = (long *)FUN_02e4b104(lVar4 + 0x30);
  if (plVar1 != (long *)0x0) {
    *plVar1 = lVar6;
  }
LAB_02e554b8:
  local_d0 = local_a0 * 2.0 - local_90;
  fStack_cc = fStack_9c * 2.0 - fStack_8c;
  local_c8 = local_98 * 2.0 - local_88;
  lVar2 = param_2 + uVar3 * 0x2b0;
  lVar6 = lVar2 + 0x250;
  *(undefined8 *)(lVar2 + 0x280) = uVar5;
  FUN_02e4b768(lVar6,&local_a0,&local_b0,&local_d0,param_3);
  if (*(uint *)(lVar4 + 0x38) != 0) {
    lVar2 = (ulong)*(uint *)(lVar4 + 0x38) << 3;
    plVar1 = *(long **)(lVar4 + 0x30);
    do {
      if (*plVar1 == lVar6) goto LAB_02e55538;
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  plVar1 = (long *)FUN_02e4b104(lVar4 + 0x30);
  if (plVar1 != (long *)0x0) {
    *plVar1 = lVar6;
  }
LAB_02e55538:
  local_d0 = local_90 * 2.0 - local_a0;
  fStack_cc = fStack_8c * 2.0 - fStack_9c;
  local_c8 = local_88 * 2.0 - local_98;
  param_2 = param_2 + uVar3 * 0x2b0;
  lVar6 = param_2 + 0x2d8;
  *(undefined8 *)(param_2 + 0x308) = uVar5;
  FUN_02e4b768(lVar6,&local_90,&local_c0,&local_d0,param_3);
  if (*(uint *)(lVar4 + 0x38) != 0) {
    lVar2 = (ulong)*(uint *)(lVar4 + 0x38) << 3;
    plVar1 = *(long **)(lVar4 + 0x30);
    do {
      if (*plVar1 == lVar6) {
        return;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  plVar1 = (long *)FUN_02e4b104(lVar4 + 0x30);
  if (plVar1 != (long *)0x0) {
    *plVar1 = lVar6;
  }
  return;
}


