/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031958c4; name: FUN_031958c4
 */


undefined8
FUN_031958c4(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,int *param_4,
            undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar11 = param_2._8_8_;
  piVar1 = (int *)(*(long *)(param_3 + 0x18) + (long)*param_4 * 0x10);
  lVar5 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(param_3 + 0x38);
  puVar2 = (undefined8 *)(lVar6 + (long)*(int *)(lVar5 + (long)*piVar1 * 0x14) * 0x10);
  uStack_68 = puVar2[1];
  local_70 = *puVar2;
  iVar4 = *piVar1 + 1;
  if (iVar4 < *piVar1 + (int)(short)piVar1[2] + -1) {
    lVar7 = (long)iVar4;
    uVar10 = NEON_fmov(0x3f800000,4);
    bVar9 = false;
    lVar8 = (lVar7 + (long)iVar4 * 4) * 4;
    while( true ) {
      lVar7 = lVar7 + 1;
      puVar2 = (undefined8 *)(lVar6 + (long)*(int *)(lVar5 + lVar8) * 0x10);
      uStack_78 = puVar2[1];
      local_80 = *puVar2;
      puVar2 = (undefined8 *)(lVar6 + (long)((int *)(lVar5 + lVar8))[1] * 0x10);
      uStack_88 = puVar2[1];
      local_90 = *puVar2;
      local_98 = uVar10;
      iVar4 = FUN_001d3f30(param_5,param_6,&local_70,&local_80,&local_90,&local_98,auStack_b0,
                           param_10,uVar10,uVar11);
      if (iVar4 != 0) {
        bVar3 = (float)local_98 < (float)uVar10;
        if (bVar3) {
          uVar10 = local_98;
        }
        uVar11 = 0;
        if (bVar3) {
          bVar9 = true;
        }
      }
      if ((int)(short)piVar1[2] + *piVar1 + -1 <= lVar7) break;
      lVar5 = *(long *)(param_3 + 0x28);
      lVar8 = lVar8 + 0x14;
      lVar6 = *(long *)(param_3 + 0x38);
    }
    if (bVar9) {
      *param_7 = uVar10;
      return 1;
    }
  }
  return 0;
}


