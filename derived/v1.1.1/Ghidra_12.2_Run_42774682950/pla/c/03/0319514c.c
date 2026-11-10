/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319514c; name: FUN_0319514c
 */


undefined8 FUN_0319514c(long param_1,int *param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_x7;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  undefined8 unaff_x27;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_58;
  
  piVar1 = (int *)(*(long *)(param_1 + 0x18) + (long)*param_2 * 0x10);
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x38);
  puVar2 = (undefined8 *)(lVar5 + (long)*(int *)(lVar4 + (long)*piVar1 * 0x14) * 0x10);
  uStack_78 = puVar2[1];
  local_80 = *puVar2;
  iVar3 = *piVar1 + 1;
  if (iVar3 < *piVar1 + (int)(short)piVar1[2] + -1) {
    fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
    lVar6 = (long)iVar3;
    lVar8 = (lVar6 + (long)iVar3 * 4) * 4;
    uVar10 = CONCAT44(ABS(fVar9 + -0.5),ABS(fVar9 + -0.5));
    uVar11 = 0;
    bVar7 = false;
    while( true ) {
      lVar6 = lVar6 + 1;
      puVar2 = (undefined8 *)(lVar5 + (long)*(int *)(lVar4 + lVar8) * 0x10);
      uStack_88 = puVar2[1];
      local_90 = *puVar2;
      puVar2 = (undefined8 *)(lVar5 + (long)((int *)(lVar4 + lVar8))[1] * 0x10);
      uStack_98 = puVar2[1];
      local_a0 = *puVar2;
      local_58 = CONCAT44((float)((ulong)uVar10 >> 0x20) + 0.5,(float)uVar10 + 0.5);
      iVar3 = FUN_001d42c0(param_3,&local_80,&local_90,&local_a0,0,&local_58,auStack_b0,in_x7,uVar10
                           ,uVar11);
      if (iVar3 == 0) {
      }
      else {
        fVar9 = ABS((float)local_58 + -0.5);
        if (fVar9 < (float)uVar10) {
          uVar11 = 0;
          bVar7 = true;
          unaff_x27 = local_58;
          uVar10 = CONCAT44(ABS((float)((ulong)local_58 >> 0x20) + -0.5),fVar9);
        }
      }
      if ((int)(short)piVar1[2] + *piVar1 + -1 <= lVar6) break;
      lVar4 = *(long *)(param_1 + 0x28);
      lVar8 = lVar8 + 0x14;
      lVar5 = *(long *)(param_1 + 0x38);
    }
    if (bVar7) {
      *param_4 = unaff_x27;
      return 1;
    }
  }
  return 0;
}


