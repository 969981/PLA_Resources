/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea01c4; name: FUN_02ea01c4
 */


void FUN_02ea01c4(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulong local_50;
  uint local_48;
  undefined4 uStack_44;
  long local_40;
  ulong local_38;
  
  FUN_02ed6688();
  local_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x58) == 0) {
    plVar7 = *(long **)(param_1 + 0x60);
  }
  else {
    FUN_02ed69d4(param_1,*(long *)(param_1 + 0x58),&local_40,param_2);
    plVar7 = *(long **)(param_1 + 0x60);
  }
  if (plVar7 != (long *)0x0) {
    plVar6 = (long *)*plVar7;
    uVar2 = *(uint *)(plVar7 + 1);
    if ((uVar2 == 0) || (*plVar6 == *param_3)) {
      plVar7 = plVar6;
    }
    else {
      lVar5 = (ulong)uVar2 * 0x10;
      plVar8 = plVar6;
      do {
        lVar5 = lVar5 + -0x10;
        if (lVar5 == 0) goto joined_r0x02ea0200;
        plVar7 = plVar8 + 2;
        plVar1 = plVar8 + 2;
        plVar8 = plVar7;
      } while (*plVar1 != *param_3);
    }
    if (plVar7 != plVar6 + (ulong)uVar2 * 2) {
      FUN_02ed69d4(param_1,plVar7[1],&local_40,param_2);
    }
  }
joined_r0x02ea0200:
  if (local_40 == 0) {
    plVar7 = *(long **)(param_1 + 0x148);
  }
  else {
    local_38 = local_38 & 0xffffffff00000000;
    (*DAT_0442d150)(0);
    local_38 = local_38 & 0xffffffff;
    plVar7 = *(long **)(param_1 + 0x148);
  }
  local_40 = 0;
  if (plVar7 == (long *)0x0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = 0.0;
    do {
      fVar9 = *(float *)(plVar7 + 5) + fVar9;
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  fVar3 = *(float *)(param_1 + 0xf0);
  if (*(float *)(param_1 + 0xf0) <= fVar9) {
    fVar3 = fVar9;
  }
  *(float *)(param_2 + 0x10) = fVar3 + *(float *)(param_2 + 0x10);
  plVar7 = *(long **)(param_1 + 0x88);
  if ((((plVar7 != (long *)0x0) &&
       ((lVar5 = plVar7[0xd], lVar5 == 0 ||
        ((((*(int *)(lVar5 + 4) == 0 && (*(int *)(lVar5 + 0xc) == 0)) &&
          (*(int *)(lVar5 + 0x14) == 0)) && (*(int *)(lVar5 + 0x1c) == 0)))))) &&
      (((((iVar4 = (**(code **)(*plVar7 + 0x88))(plVar7), iVar4 != 10 &&
          (*(char *)((long)plVar7 + 0xec) == '\0')) &&
         ((*(uint *)((long)plVar7 + 0xaa) & 0x780000) == 0)) &&
        ((plVar7[0x11] != 0 && ((*(byte *)((long)plVar7 + 0xa2) & 0xe) == 0)))) &&
       ((plVar7[0x19] == 0 &&
        (((*(uint *)((long)plVar7 + 0xaa) >> 0x12 & 1) == 0 && (plVar7[0x12] == 0)))))))) &&
     (((ulong *)plVar7[7] == (ulong *)0x0 || ((*(ulong *)plVar7[7] & 0x380000000020) == 0)))) {
    local_78 = 0;
    uStack_70 = 0;
    local_d0 = 0;
    local_64 = 0;
    local_5c = 0;
    local_68 = 0x3f800000;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_48 = *(uint *)(param_2 + 0x88) & 0xffffffc0;
    local_54 = 0;
    local_50 = *(ulong *)(param_2 + 0x80) & 0xfffffffff07ffff;
    uStack_44 = 0;
    FUN_02ea01c4(*(undefined8 *)(param_1 + 0x88),&local_d0,param_3);
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + (float)local_c0 + local_a8._4_4_;
    *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + local_a0._4_4_;
    *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + (float)local_a0;
  }
  return;
}


