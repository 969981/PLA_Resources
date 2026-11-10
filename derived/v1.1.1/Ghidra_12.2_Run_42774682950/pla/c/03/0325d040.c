/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325d040; name: FUN_0325d040
 */


undefined8
FUN_0325d040(undefined8 param_1,undefined4 param_2,float *param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  undefined8 local_68;
  long local_60;
  int local_58;
  
  lVar4 = tpidr_el0;
  lVar5 = *(long *)(lVar4 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar5;
    lVar9 = *(long *)(lVar5 + 0x10);
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x10);
  }
  if (lVar9 != 0) {
    FUN_032d5af0(lVar9,"TtgetSilhouetteFromPointCloud",0x1d);
    lVar5 = *(long *)(lVar4 + 0x38d490);
  }
  local_70 = 0;
  local_68 = 0x8000000000000000;
  local_58 = 0x80;
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar5;
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(ulong *)(lVar5 + 0x10) < 0x800) {
LAB_0325d2c8:
    local_60 = FUN_032ce670(lVar5,0x800);
  }
  else {
    local_60 = *(long *)(lVar5 + 0x18);
    if (*(ulong *)(lVar5 + 0x20) < local_60 + 0x800U) goto LAB_0325d2c8;
    *(ulong *)(lVar5 + 0x18) = local_60 + 0x800U;
  }
  local_68 = CONCAT44(0x80000080,(int)local_68);
  uStack_88 = *(undefined8 *)(param_3 + 10);
  local_90 = *(undefined8 *)(param_3 + 8);
  pfVar11 = param_3 + 4;
  uStack_98 = *(undefined8 *)(param_3 + 6);
  local_a0 = *(undefined8 *)pfVar11;
  local_b0 = param_1;
  local_a8 = param_2;
  local_80 = param_4;
  local_70 = local_60;
  iVar3 = FUN_0325c03c(&local_b0,&local_70);
  lVar5 = local_70;
  if (iVar3 != 0) {
    if (3 < (int)local_68) {
      if ((int)param_5[1] != (int)local_68) {
        *(int *)(param_5 + 1) = (int)local_68;
      }
      uVar7 = 0;
      do {
        lVar8 = uVar7 * 0x10;
        uVar7 = uVar7 + 1;
        puVar2 = (undefined8 *)(local_70 + lVar8);
        uVar15 = puVar2[1];
        uVar10 = *puVar2;
        fVar12 = (float)uVar10;
        fVar16 = (float)*(undefined8 *)pfVar11;
        fVar19 = fVar16 * fVar12;
        fVar13 = (float)((ulong)uVar10 >> 0x20);
        fVar17 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
        fVar21 = fVar17 * fVar13;
        fVar14 = (float)uVar15;
        fVar18 = (float)*(undefined8 *)(param_3 + 6);
        fVar22 = fVar18 * fVar14;
        fVar20 = -(fVar19 + fVar21 + fVar22);
        fVar19 = -(fVar19 + fVar21 + fVar22);
        puVar2 = (undefined8 *)(*param_5 + lVar8);
        puVar2[1] = CONCAT44((float)((ulong)uVar15 >> 0x20) +
                             (float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20) * fVar19,
                             fVar14 + fVar18 * fVar20);
        *puVar2 = CONCAT44(fVar13 + fVar17 * fVar19,fVar12 + fVar16 * fVar20);
      } while ((local_68 & 0xffffffff) != uVar7);
      FUN_0325cb78(param_3[3],param_5);
      FUN_0325cd68(param_3[2],param_5);
      if (0.0 < *param_3) {
        FUN_0325c57c(*param_3,param_3[1],param_5,pfVar11);
      }
      uVar10 = 1;
      goto LAB_0325d1e4;
    }
  }
  uVar10 = 0;
LAB_0325d1e4:
  iVar3 = local_58;
  lVar8 = local_60;
  if (local_60 == lVar5) {
    local_68 = local_68 & 0xffffffff00000000;
  }
  lVar6 = *(long *)(lVar4 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar6;
  }
  lVar4 = *(long *)(lVar6 + 8);
  uVar7 = (ulong)(int)(iVar3 * 0x10 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar4 + 0x10) < uVar7) || (*(long *)(lVar4 + 0x18) != uVar7 + lVar8)) ||
     (*(long *)(lVar4 + 0x28) == lVar8)) {
    FUN_032cedf0(lVar4,lVar8);
  }
  else {
    *(long *)(lVar4 + 0x18) = lVar8;
  }
  uVar7 = local_68 & 0xffffffff00000000;
  if ((lVar5 != 0) && (local_68._4_4_ = (uint)(uVar7 >> 0x20), -1 < (long)uVar7)) {
    uVar1 = local_68._4_4_ & 0x3fffffff;
    local_68 = uVar7;
    FUN_032cf244(PTR_PTR_0434a080,lVar5,0x10,uVar1);
    uVar7 = local_68;
  }
  local_68 = uVar7;
  if (lVar9 != 0) {
    FUN_032d5b34(lVar9,&DAT_0390f40e);
  }
  return uVar10;
}


