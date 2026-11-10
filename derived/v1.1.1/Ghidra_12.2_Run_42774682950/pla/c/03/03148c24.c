/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03148c24; name: FUN_03148c24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03148c24(long param_1,long *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_a0;
  undefined2 local_88;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  fVar14 = (float)*param_3;
  fVar15 = (float)((ulong)*param_3 >> 0x20);
  fVar16 = (float)param_3[1];
  fVar17 = (float)((ulong)param_3[1] >> 0x20);
  fVar10 = fVar14 + (float)param_3[6];
  fVar11 = fVar15 + (float)((ulong)param_3[6] >> 0x20);
  uStack_50 = CONCAT44(fVar11,fVar10);
  fVar12 = fVar16 + (float)param_3[7];
  fVar13 = fVar17 + (float)((ulong)param_3[7] >> 0x20);
  uStack_48 = CONCAT44(fVar13,fVar12);
  local_60 = CONCAT44(fVar15 * 200.0 + fVar11,fVar14 * 200.0 + fVar10);
  uStack_58 = CONCAT44(fVar17 * 200.0 + fVar13,fVar16 * 200.0 + fVar12);
  if (*(short *)(param_1 + 0x78) == -1) {
    FUN_03012a50(&local_110);
    local_f8 = local_f8 & 0xffffffffffff;
    local_f8._0_4_ = CONCAT22(0x3f80,(undefined2)local_f8);
    uVar4 = FUN_030131f8(param_2[0x113],&local_110);
    *(undefined2 *)(param_1 + 0x78) = uVar4;
    if (CONCAT44(uStack_104,local_108) != 0) {
      FUN_032d647c();
    }
    FUN_032c7b9c(&local_110);
  }
  if (*(short *)(param_1 + 0x7a) == -1) {
    local_110 = local_110 & 0xffffffff00000000;
    FUN_03017c48(0x411cf5c3,&local_110,1);
    local_f8 = 0x3ecccccd00000000;
    uVar4 = FUN_03017280(param_2[0x114],&local_110);
    *(undefined2 *)(param_1 + 0x7a) = uVar4;
    lVar8 = *(long *)(param_1 + 0x80);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x80);
  }
  if (lVar8 == 0) {
    FUN_02fd8d60(&local_110,*(undefined4 *)(param_1 + 0x44));
    uVar9 = local_110;
    local_110 = 0;
    lVar8 = *(long *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0x80) = uVar9;
    if ((lVar8 != 0) && (FUN_032d647c(), local_110 != 0)) {
      FUN_032d647c();
    }
  }
  FUN_02ffefa0(&local_110);
  uVar9 = *(ulong *)(param_1 + 0x80);
  if (local_110 != uVar9) {
    if (uVar9 == 0) {
      uVar3 = 0;
      uVar9 = local_110;
    }
    else {
      FUN_032d645c(uVar9);
      uVar3 = *(ulong *)(param_1 + 0x80);
      uVar9 = local_110;
    }
    local_110 = uVar3;
    if (uVar9 != 0) {
      FUN_032d647c();
    }
  }
  local_fa = 0xc;
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  local_e0 = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20),
                      (float)uVar6 + (float)*(undefined8 *)(param_1 + 0x60));
  uStack_d8 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20),
                       (float)*(undefined8 *)(param_1 + 0xa8) +
                       (float)*(undefined8 *)(param_1 + 0x68));
  uStack_c8 = _UNK_0388a138;
  local_d0 = _DAT_0388a130;
  local_fc = *(undefined2 *)(param_1 + 0x78);
  local_108 = *(undefined4 *)(param_1 + 0x90);
  local_e8 = 2;
  local_a0 = 0x3f800000;
  local_88 = *(undefined2 *)(param_1 + 0x7a);
  iVar5 = FUN_0314347c(0x3d4ccccd,param_2,&uStack_50,&local_60,&local_140,0);
  if (iVar5 < 0) {
    fVar10 = *(float *)(param_1 + 0x48);
    local_c0 = CONCAT44(fVar15 * fVar10,fVar14 * fVar10);
    uStack_b8 = CONCAT44(fVar17 * fVar10,fVar16 * fVar10);
  }
  else {
    uVar6 = (**(code **)(*param_2 + 0x38))(param_2);
    FUN_0314375c(*(undefined4 *)(param_1 + 0x48),&local_e0,&local_140,uVar6,&local_c0);
  }
  local_150 = local_140;
  uStack_148 = uStack_138;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar8 = 0;
    do {
      plVar7 = *(long **)(*(long *)(param_1 + 0x30) + lVar8 * 8);
      (**(code **)(*plVar7 + 0x30))(plVar7,(undefined8 *)(param_1 + 0xa0),&local_150);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x38));
  }
  local_150 = (**(code **)(*param_2 + 0xc0))(param_2,&local_110,0xffffffffffffffff);
  (**(code **)(*param_2 + 200))(param_2,local_150,1,0);
  if (0 < *(int *)(param_1 + 0x54)) {
    FUN_03147cc4(*(undefined8 *)(param_1 + 0x70),&local_150);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar8 = 0;
    do {
      plVar7 = *(long **)(*(long *)(param_1 + 0x30) + lVar8 * 8);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_150,param_2);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x38));
  }
  if (0 < *(int *)(param_1 + 0x54)) {
    plVar7 = *(long **)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x54) < *(int *)((long)plVar7 + 0x14)) {
      iVar2 = *(int *)((long)plVar7 + 0xc);
      local_158 = *(undefined8 *)(*plVar7 + (long)iVar2 * 8);
      iVar5 = 0;
      if (iVar2 + 1 != (int)plVar7[1]) {
        iVar5 = iVar2 + 1;
      }
      *(int *)((long)plVar7 + 0xc) = iVar5;
      *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + -1;
      iVar5 = *(int *)(param_1 + 0x38);
      if ((0 < iVar5) &&
         (lVar8 = (long)iVar5 + -1, plVar7 = *(long **)(*(long *)(param_1 + 0x30) + lVar8 * 8),
         (**(code **)(*plVar7 + 0x28))(plVar7,local_158,param_2), 0 < lVar8)) {
        lVar8 = (long)iVar5 + -2;
        do {
          plVar7 = *(long **)(*(long *)(param_1 + 0x30) + lVar8 * 8);
          (**(code **)(*plVar7 + 0x28))(plVar7,local_158,param_2);
          bVar1 = 0 < lVar8;
          lVar8 = lVar8 + -1;
        } while (bVar1);
      }
      (**(code **)(*param_2 + 0xe0))(param_2,&local_158,1,0);
    }
  }
  FUN_02fff010(&local_110);
  return;
}


