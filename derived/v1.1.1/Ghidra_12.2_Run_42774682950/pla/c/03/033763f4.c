/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033763f4; name: FUN_033763f4
 */


undefined8 FUN_033763f4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 *local_260;
  undefined8 local_258;
  undefined8 local_250 [64];
  
  piVar7 = *(int **)(param_1 + 8);
  local_260 = local_250;
  local_258 = -0x7fffffe000000000;
  uVar8 = FUN_033767d0(piVar7,param_2,&local_260);
  if (*piVar7 < 0) {
    uVar8 = 0;
    *piVar7 = 0;
  }
  else {
    iVar12 = (int)local_258;
    if (0 < (int)local_258) {
      lVar11 = 0;
      lVar13 = 0;
      do {
        FUN_032dab00(*(undefined8 *)((long)local_260 + lVar11),piVar7 + 2);
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 0x10;
        iVar12 = (int)local_258;
      } while (lVar13 < (int)local_258);
    }
    puVar5 = local_260;
    if (param_3 != (long *)0x0) {
      iVar4 = (int)param_3[1];
      iVar2 = iVar4 + iVar12;
      lVar13 = *param_3;
      if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) < iVar2) {
        lVar13 = FUN_033778f8(PTR_PTR_0434a080,iVar2,lVar13,iVar4);
        *param_3 = lVar13;
      }
      if (iVar12 != 0) {
        puVar9 = (undefined8 *)(lVar13 + (long)iVar4 * 0x10);
        lVar13 = (long)iVar12 * 0x10 + -0x10;
        puVar10 = puVar5;
        if (((uint)lVar13 >> 4 & 1) == 0) {
          uVar3 = puVar5[1];
          *puVar9 = *puVar5;
          puVar9[1] = uVar3;
          puVar9 = puVar9 + 2;
          puVar10 = puVar5 + 2;
        }
        if (lVar13 != 0) {
          do {
            uVar3 = puVar10[1];
            *puVar9 = *puVar10;
            puVar9[1] = uVar3;
            puVar1 = puVar10 + 2;
            uVar3 = puVar10[3];
            puVar10 = puVar10 + 4;
            puVar9[2] = *puVar1;
            puVar9[3] = uVar3;
            puVar9 = puVar9 + 4;
          } while (puVar10 != puVar5 + (long)iVar12 * 2);
        }
      }
      *(int *)(param_3 + 1) = iVar2;
    }
  }
  lVar13 = local_258;
  uVar6 = local_258._4_4_;
  local_258 = (ulong)local_258._4_4_ << 0x20;
  if ((-1 < lVar13) && (local_260 != (undefined8 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_260,0x10,uVar6 & 0x3fffffff);
  }
  return uVar8;
}


