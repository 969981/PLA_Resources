/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03194a18; name: FUN_03194a18
 */


undefined8 FUN_03194a18(long param_1,int *param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_x7;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
    uVar9 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
    uVar10 = CONCAT44(uVar9,uVar9);
    lVar6 = (long)iVar3;
    bVar8 = false;
    lVar7 = (lVar6 + (long)iVar3 * 4) * 4;
    uVar13 = 0;
    uVar11 = uVar10;
    uVar12 = uVar10;
    while( true ) {
      lVar6 = lVar6 + 1;
      puVar2 = (undefined8 *)(lVar5 + (long)*(int *)(lVar4 + lVar7) * 0x10);
      uStack_88 = puVar2[1];
      local_90 = *puVar2;
      puVar2 = (undefined8 *)(lVar5 + (long)((int *)(lVar4 + lVar7))[1] * 0x10);
      uStack_98 = puVar2[1];
      local_a0 = *puVar2;
      local_58 = uVar10;
      iVar3 = FUN_001d42c0(param_3,&local_80,&local_90,&local_a0,0,&local_58,auStack_b0,in_x7,uVar12
                           ,uVar13);
      if (iVar3 != 0) {
        if ((float)local_58 < (float)uVar12) {
          bVar8 = true;
          uVar12 = local_58;
          uVar10 = local_58;
          uVar11 = local_58;
        }
        uVar13 = 0;
      }
      if ((int)(short)piVar1[2] + *piVar1 + -1 <= lVar6) break;
      lVar4 = *(long *)(param_1 + 0x28);
      lVar7 = lVar7 + 0x14;
      lVar5 = *(long *)(param_1 + 0x38);
    }
    if (bVar8) {
      *param_4 = uVar11;
      return 1;
    }
  }
  return 0;
}


