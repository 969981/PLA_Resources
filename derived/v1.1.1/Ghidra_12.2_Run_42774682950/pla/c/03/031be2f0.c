/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031be2f0; name: FUN_031be2f0
 */


undefined8 FUN_031be2f0(long param_1,long param_2,int *param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar19;
  undefined1 auVar18 [16];
  long local_130;
  long lStack_128;
  uint *local_120;
  undefined1 local_118;
  uint local_110 [2];
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_2 + 0x38) < 2) {
    iVar6 = 0;
  }
  else {
    puVar8 = *(undefined8 **)(param_2 + 0x30);
    iVar6 = 0;
    lVar7 = 1;
    fVar9 = (float)*(undefined8 *)(param_2 + 0x20);
    fVar13 = fVar9 - (float)*puVar8;
    fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    fVar14 = fVar10 - (float)((ulong)*puVar8 >> 0x20);
    fVar11 = (float)*(undefined8 *)(param_2 + 0x28);
    fVar15 = fVar11 - (float)puVar8[1];
    fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    fVar16 = fVar12 - (float)((ulong)puVar8[1] >> 0x20);
    fVar13 = fVar13 * fVar13;
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    fVar16 = fVar16 * fVar16;
    auVar17._4_4_ = fVar14;
    auVar17._0_4_ = fVar13;
    auVar17._8_4_ = fVar15;
    auVar17._12_4_ = fVar16;
    auVar2._4_4_ = fVar14;
    auVar2._0_4_ = fVar13;
    auVar2._8_4_ = fVar15;
    auVar2._12_4_ = fVar16;
    auVar17 = NEON_ext(auVar17,auVar2,8,1);
    fVar13 = fVar13 + fVar14 + auVar17._0_4_;
    do {
      pfVar1 = (float *)(puVar8 + lVar7 * 2);
      fVar14 = fVar9 - *pfVar1;
      fVar15 = fVar10 - pfVar1[1];
      fVar16 = fVar11 - pfVar1[2];
      fVar19 = fVar12 - pfVar1[3];
      auVar18._0_4_ = fVar14 * fVar14;
      auVar18._4_4_ = fVar15 * fVar15;
      auVar18._8_4_ = fVar16 * fVar16;
      auVar18._12_4_ = fVar19 * fVar19;
      auVar17 = NEON_ext(auVar18,auVar18,8,1);
      fVar14 = auVar18._0_4_ + auVar18._4_4_ + auVar17._0_4_;
      iVar3 = (int)lVar7;
      if (fVar13 <= fVar14) {
        fVar14 = fVar13;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      lVar7 = lVar7 + 1;
      fVar13 = fVar14;
    } while (*(int *)(param_2 + 0x38) != (int)lVar7);
  }
  *param_3 = iVar6;
  local_110[0] = *(uint *)(*(long *)(param_2 + 0x48) + (long)iVar6 * 4);
  if (*(uint *)(param_2 + 0x40) == local_110[0]) {
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_c8 = ((ulong)local_110[0] & 0x3fffff) * 0x18;
    uStack_38 = 0x7f7fffee7f7fffee;
    local_40 = 0x7f7fffee7f7fffee;
    uStack_28 = 0xff7fffeeff7fffee;
    uStack_30 = 0xff7fffeeff7fffee;
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(local_110[0] >> 0x16) * 0xf0 + 8
                               ) + 0x20);
    local_108 = *(long *)(lVar7 + 0x18) + local_c8;
    uStack_f8 = *(undefined8 *)(param_2 + 0x28);
    local_100 = *(undefined8 *)(param_2 + 0x20);
    local_c8 = *(long *)(lVar7 + 0x18) + local_c8;
    local_120 = local_110;
    puVar8 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)iVar6 * 0x10);
    uStack_b8 = puVar8[1];
    local_c0 = *puVar8;
    lStack_128 = param_2 + 0x5c;
    local_88 = 0;
    local_90 = 0xffffffff;
    local_118 = 0x52;
    plVar4 = *(long **)(param_2 + 0x88);
    if ((plVar4 == (long *)0x0) ||
       (local_130 = param_1, local_d0 = local_110[0],
       uVar5 = (**(code **)(*plVar4 + 0x28))(plVar4,&local_130), (uVar5 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}


