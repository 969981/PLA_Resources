/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e512e4; name: FUN_02e512e4
 */


void FUN_02e512e4(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  uint auStack_e0 [4];
  float afStack_d0 [2];
  float *local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  long local_80;
  undefined4 local_78;
  float local_74;
  
  lVar7 = *(long *)(param_2 + 8);
  if (*(uint *)(lVar7 + 0x40) < 6) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar7 + 0x38) + 0x28);
  }
  if (*(int *)(param_1 + 0x70) == *(int *)(param_2 + 0x54)) {
    lVar8 = *(long *)(lVar10 + 0xa8);
    if (lVar8 == *(long *)(param_1 + 0x40)) {
      lVar11 = -4;
      if (lVar8 != -1) {
        lVar11 = lVar8;
      }
      puVar3 = (undefined8 *)
               FUN_02e4ff70(lVar11,*(undefined4 *)(param_1 + 0x60),*(undefined8 *)(lVar7 + 0x48));
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      FUN_02e5188c(param_2 + 0x40,puVar3);
      if (*(long *)(lVar10 + 0x98) == -1) {
        FUN_02e52098(param_1,puVar3,lVar10,param_3);
      }
      else {
        FUN_02e518e8();
      }
      FUN_02ef2f28(DAT_0440a140,puVar3,afStack_d0 + 0x18,0.0 < *(float *)(param_1 + 0x74));
    }
    else {
      lVar7 = FUN_02e5113c(param_1,param_2);
      if (lVar7 == 0) {
        return;
      }
      lVar8 = -4;
      if (*(long *)(param_1 + 0x40) != -1) {
        lVar8 = *(long *)(param_1 + 0x40);
      }
      puVar3 = (undefined8 *)
               FUN_02e4ff70(lVar8,*(undefined4 *)(param_1 + 0x60),
                            *(undefined8 *)(*(long *)(param_2 + 8) + 0x48));
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      FUN_02e5188c(param_2 + 0x40,puVar3);
      FUN_02e50f04(*(undefined8 *)(lVar7 + (ulong)(*(int *)(lVar7 + 0x80) - 1) * 8 + 0x40),param_2);
      if (*(float *)(param_1 + 0x74) <= 0.0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
      FUN_02ef2f28(DAT_0440a140,puVar3,afStack_d0 + 0x18,uVar4);
      if ((*(long *)(lVar10 + 0x98) == -1) ||
         (*(long *)(lVar10 + 0xc0) != *(long *)(param_1 + 0x40))) {
        FUN_02e51d68(param_1,puVar3,lVar7,lVar10,param_3);
      }
      else {
        FUN_02e518e8(param_1,puVar3,lVar10,param_3);
      }
    }
    iVar1 = *(int *)(puVar3 + 10);
    *(int *)(puVar3 + 10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar3)(puVar3);
      FUN_02f59e60(4,puVar3);
    }
    return;
  }
  lVar7 = -4;
  if (*(long *)(param_1 + 0x40) != -1) {
    lVar7 = *(long *)(param_1 + 0x40);
  }
  puVar3 = (undefined8 *)FUN_02ef21f4(DAT_0440a140,lVar7);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  if (*(float *)(param_1 + 0x74) <= 0.0) {
    uVar4 = 0;
  }
  else {
    local_80 = -4;
    if (*(long *)(param_1 + 0x40) != -1) {
      local_80 = *(long *)(param_1 + 0x40);
    }
    local_78 = *(undefined4 *)(param_1 + 0x60);
    local_74 = *(float *)(param_1 + 100) * *(float *)(param_1 + 0x74);
    uVar4 = 1;
  }
  FUN_02ef2f28(DAT_0440a140,puVar3,&local_80,uVar4);
  lVar7 = *(long *)(lVar10 + 8);
  if (*(uint *)(lVar7 + 0x40) < 8) {
    if (*(uint *)(lVar7 + 0x40) < 3) {
      lVar11 = 0;
      lVar8 = 0;
      goto LAB_02e51688;
    }
    lVar8 = *(long *)(lVar7 + 0x38);
    lVar11 = 0;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x38);
    lVar11 = *(long *)(lVar8 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
LAB_02e51688:
  local_90 = *(undefined4 *)(lVar8 + 0x78);
  local_8c = *(undefined4 *)(lVar8 + 0x7c);
  local_88 = *(undefined4 *)(lVar8 + 0x80);
  local_a0 = *(undefined4 *)(lVar8 + 0x6c);
  local_9c = *(undefined4 *)(lVar8 + 0x70);
  uStack_98 = *(undefined4 *)(lVar8 + 0x74);
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar12 = (ulong)uVar2;
  uVar9 = uVar12 * 4 + 0xf & 0x7fffffff0;
  lVar6 = (long)afStack_d0 - uVar9;
  lVar8 = lVar6 - uVar9;
  pfVar5 = (float *)(lVar8 - (uVar12 * 8 + 0xf & 0xffffffff0));
  lVar13 = (long)pfVar5 - (uVar12 * 0x28 + 0xf & 0x7ffffffff0);
  if (uVar2 != 0) {
    uVar9 = 0;
    fVar14 = *(float *)(lVar10 + 0xd8) * *(float *)(lVar10 + 0xb8) +
             (1.0 - *(float *)(lVar10 + 0xd8)) * *(float *)(lVar10 + 0xd0);
    lVar7 = lVar13;
    fVar15 = *(float *)(param_1 + 0x6c);
    local_c8 = pfVar5;
    lStack_c0 = lVar8;
    local_b8 = lVar6;
    lStack_b0 = lVar10;
    local_a4 = param_3;
    if (*(float *)(param_1 + 0x6c) <= fVar14) {
      fVar15 = fVar14;
    }
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x28) + uVar9 * 8);
      if (*(long *)(lVar10 + 0x98) != 0) {
        *(undefined4 *)(lVar10 + 0xa0) = 0;
        (*DAT_0442d158)(9);
        *(undefined8 *)(lVar10 + 0x98) = 0;
        *(undefined4 *)(lVar10 + 0xa4) = 0;
      }
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x38) + 0x28) + 0xa8);
      *(float **)(lVar13 + -0x10) = pfVar5;
      FUN_02e527d4(param_1,lVar10,uVar4,&local_90,&local_a0,lVar7,lVar6,lVar8);
      fVar14 = *pfVar5;
      if (*pfVar5 <= fVar15) {
        fVar14 = fVar15;
      }
      uVar9 = uVar9 + 1;
      *pfVar5 = fVar14;
      lVar8 = lVar8 + 4;
      lVar6 = lVar6 + 4;
      lVar7 = lVar7 + 0x28;
      pfVar5 = pfVar5 + 2;
    } while (uVar9 < *(uint *)(param_1 + 0x30));
    lVar7 = *(long *)(lStack_b0 + 8);
    pfVar5 = local_c8;
    lVar6 = local_b8;
    lVar8 = lStack_c0;
    param_3 = local_a4;
  }
  uVar4 = *(undefined8 *)(lVar7 + 0x48);
  *(undefined4 *)(lVar13 + -8) = param_3;
  *(uint *)(lVar13 + -0x10) = uVar2;
  FUN_02e52200(0,param_1,puVar3,uVar4,&local_90,pfVar5,lVar13,lVar6,lVar8);
  iVar1 = *(int *)(puVar3 + 10);
  *(int *)(puVar3 + 10) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)*puVar3)(puVar3);
    FUN_02f59e60(4,puVar3);
  }
  return;
}


