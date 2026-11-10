/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00231ee4; name: FUN_00231ee4
 */


void FUN_00231ee4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [40];
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  iVar16 = *(int *)(param_2 + 0xe0);
  iVar17 = *(int *)(param_2 + 0xe4);
  local_58 = 0;
  FUN_00876e30(&local_58);
  local_60 = 0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_00876e3c(&local_80);
  FUN_00876e3c(&local_a8);
  lVar10 = *(long *)(param_1 + 0x38);
  lVar12 = *(long *)(lVar10 + 0x18);
  auVar6 = *(undefined1 (*) [12])(lVar12 + 0x70);
  auVar5 = *(undefined1 (*) [12])(lVar12 + 0x80);
  iVar15 = iVar16;
  if (iVar16 < 0) {
    iVar15 = iVar16 + 1;
  }
  iVar14 = (int)*(float *)(lVar10 + 0x54);
  iVar13 = (int)*(float *)(lVar10 + 0x50);
  iVar2 = iVar13;
  if (iVar13 < 0) {
    iVar2 = iVar13 + 1;
  }
  uVar1 = ((iVar15 >> 1) - (iVar2 >> 1)) +
          (int)((float)((ulong)*(undefined8 *)(lVar12 + 0x78) >> 0x20) +
               auVar6._0_4_ * *(float *)(lVar10 + 0x30) + auVar6._4_4_ * *(float *)(lVar10 + 0x34) +
               SUB124(*(undefined1 (*) [12])(lVar12 + 0x70),8) * *(float *)(lVar10 + 0x38));
  iVar15 = iVar17;
  if (iVar17 < 0) {
    iVar15 = iVar17 + 1;
  }
  iVar2 = iVar14;
  if (iVar14 < 0) {
    iVar2 = iVar14 + 1;
  }
  uVar9 = ((iVar15 >> 1) -
          (int)((float)((ulong)*(undefined8 *)(lVar12 + 0x88) >> 0x20) +
               auVar5._0_4_ * *(float *)(lVar10 + 0x30) + auVar5._4_4_ * *(float *)(lVar10 + 0x34) +
               SUB124(*(undefined1 (*) [12])(lVar12 + 0x80),8) * *(float *)(lVar10 + 0x38))) -
          (iVar2 >> 1);
  uVar11 = 0;
  if (-1 < (int)uVar1) {
    uVar11 = uVar1;
  }
  iVar13 = ((int)uVar1 >> 0x1f & uVar1) + iVar13;
  uVar3 = 0;
  if (-1 < (int)uVar9) {
    uVar3 = uVar9;
  }
  iVar14 = ((int)uVar9 >> 0x1f & uVar9) + iVar14;
  iVar15 = iVar13 + uVar11;
  iVar2 = iVar16 - iVar15;
  if (iVar15 <= iVar16) {
    iVar2 = 0;
  }
  iVar2 = iVar2 + iVar13;
  iVar15 = iVar14 + uVar3;
  iVar13 = iVar17 - iVar15;
  if (iVar15 <= iVar17) {
    iVar13 = 0;
  }
  iVar13 = iVar13 + iVar14;
  if ((((int)uVar3 < iVar17 && (int)uVar11 < iVar16) && 0 < (int)(iVar2 + uVar11)) &&
      0 < (int)(iVar13 + uVar3)) {
    uVar4 = iVar17 - (iVar13 + uVar3);
    if ((*(byte *)(param_2 + 0x18e) & 8) == 0) {
      uVar4 = uVar3;
    }
    if ((*(float *)(param_2 + 0x108) == 0.0) && (*(float *)(param_2 + 0x10c) == 0.0)) {
      iVar15 = (iVar17 - iVar13) - uVar4;
      iVar16 = iVar2;
      iVar17 = iVar13;
    }
    else {
      fVar19 = *(float *)(param_2 + 0x108) / (float)iVar16;
      fVar18 = *(float *)(param_2 + 0x10c) / (float)iVar17;
      uVar11 = (uint)(fVar19 * (float)(int)uVar11 + *(float *)(param_2 + 0x100));
      iVar15 = (int)(fVar18 * (float)(int)((iVar17 - iVar13) - uVar4) + *(float *)(param_2 + 0x104))
      ;
      iVar16 = (int)(fVar19 * (float)iVar2);
      iVar17 = (int)(fVar18 * (float)iVar13);
    }
    local_80 = CONCAT44(iVar15,uVar11);
    uVar1 = (int)uVar1 >> 0x1f & -uVar1;
    uVar11 = (int)uVar9 >> 0x1f & -uVar9;
    uStack_78 = CONCAT44(iVar16,(undefined4)uStack_78);
    local_70 = CONCAT44(local_70._4_4_,iVar17);
    lVar12 = *(long *)(param_2 + 0xd8);
    lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    if ((*(byte *)(param_2 + 0x18e) >> 3 & 1) == 0) {
      uVar9 = (**(code **)PTR_DAT_04372b70)(*(undefined8 *)(lVar12 + 8));
      puVar7 = PTR_DAT_04372b78;
      local_c0 = local_80;
      uStack_b8 = uStack_78;
      local_b0 = (undefined4)local_70;
      uStack_ac = 1;
      if (uVar9 == 3) {
        local_d4 = local_58._4_4_;
        local_d0 = 0;
      }
      else {
        local_d4 = uVar11;
        if ((uVar9 | 2) == 6) {
          local_d0 = local_58._4_4_;
        }
        else {
          local_d0 = 0;
        }
      }
      uStack_c4 = 1;
      local_d8 = uVar1;
      iStack_cc = iVar2;
      local_c8 = iVar13;
      (**(code **)PTR_DAT_04372b78)(auStack_100);
      puVar8 = PTR_DAT_04372b80;
      (**(code **)PTR_DAT_04372b80)(auStack_100,local_68 & 0xffff,1);
      (**(code **)puVar7)(auStack_128);
      (**(code **)puVar8)(auStack_128,local_58 & 0xffff,1);
      (**(code **)PTR_DAT_04372b88)
                (*(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(lVar12 + 8),auStack_100,&local_c0,
                 *(undefined8 *)(lVar10 + 8),auStack_128,&local_d8,8);
    }
    else {
      local_a8 = CONCAT44(uVar11,uVar1);
      uStack_a0 = CONCAT44(iVar2,(undefined4)uStack_a0);
      local_98 = CONCAT44(local_98._4_4_,iVar13);
      FUN_00877bbc(param_3,lVar10,&local_a8,lVar12,&local_80,0);
    }
  }
  return;
}


