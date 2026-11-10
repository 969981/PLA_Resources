/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2e2f0; name: FUN_00d2e2f0
 */


undefined8 FUN_00d2e2f0(undefined8 param_1,long param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  ushort uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  undefined8 uStack_48;
  
  if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_50 = strlen((char *)param_3);
  bVar4 = *param_3;
  local_60 = &DAT_cbf29ce484222645;
  pbVar8 = param_3;
  while (bVar4 != 0) {
    pbVar8 = pbVar8 + 1;
    local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar4) * 0x100000001b3);
    bVar4 = *pbVar8;
  }
  uStack_48 = 0;
  lVar7 = *(long *)(param_2 + 0x148);
  if (lVar7 == 0) {
    return 0;
  }
  puVar2 = *(undefined8 **)(lVar7 + 0x1a0);
  lVar12 = *(long *)(lVar7 + 0x1a8);
  pbStack_58 = param_3;
  if ((lVar12 == 0) || ((undefined1 *)*puVar2 == local_60)) {
    puVar11 = puVar2;
  }
  else {
    lVar10 = lVar12 * 0x30;
    puVar5 = puVar2;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) goto LAB_00d2e454;
      puVar1 = puVar5 + 6;
      puVar11 = puVar5 + 6;
      puVar5 = puVar5 + 6;
    } while ((undefined1 *)*puVar1 != local_60);
  }
  if (puVar11 != puVar2 + lVar12 * 6) {
    lVar12 = puVar11[4];
    uVar3 = *(uint *)(puVar11 + 4 + 1);
    uVar9 = (ulong)uVar3;
    if (((uVar3 < *(uint *)(lVar12 + 0x278)) &&
        (lVar12 = *(long *)(lVar12 + 600), *(char *)(lVar12 + uVar9 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar12 + uVar9 * 0x48 + 0xb) != '\0')) {
      plVar13 = (long *)(lVar12 + uVar9 * 0x48 + 0x10);
      lVar7 = *plVar13;
      if ((lVar7 == 0) || (*(char *)(lVar12 + uVar9 * 0x48 + 9) != '\0')) goto LAB_00d2e460;
      fVar14 = *(float *)(lVar7 + 0x20);
      uVar6 = FUN_00227728();
      uVar9 = FUN_00227744(*plVar13);
      if ((fVar14 < (float)uVar6) || ((uVar9 & 1) != 0)) goto LAB_00d2e460;
      lVar7 = *(long *)(param_2 + 0x148);
    }
  }
LAB_00d2e454:
  if (lVar7 == 0) {
    return 0;
  }
  FUN_0283b1e8(lVar7,&local_60);
LAB_00d2e460:
  FUN_0283b748(param_1,*(undefined8 *)(param_2 + 0x148),&local_60);
  return 1;
}


