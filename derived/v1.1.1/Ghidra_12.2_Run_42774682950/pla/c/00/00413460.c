/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413460; name: FUN_00413460
 */


undefined8 FUN_00413460(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [128];
  
  puVar8 = auStack_c0;
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  FUN_0040e090(param_3);
  puVar4 = param_1;
  if (param_2 == param_1) {
    puVar4 = (undefined8 *)FUN_0040e240(param_3);
  }
  puVar5 = (undefined8 *)FUN_0040e240(param_3);
  uVar9 = 0;
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 == (undefined8 *)0x0)) goto LAB_004135f0;
  iVar2 = iVar1 << 1;
  lVar6 = FUN_0040c660(puVar4,iVar2);
  if (lVar6 == 0) goto LAB_00413514;
  if (iVar1 == 8) {
    FUN_0040fd40(*puVar4,*param_2);
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 1) = 0x10;
joined_r0x004135b0:
    if ((puVar4 == param_1) || (lVar6 = FUN_0040c5d0(param_1,puVar4), lVar6 != 0)) {
      uVar9 = 1;
      goto LAB_004135f0;
    }
  }
  else {
    if (iVar1 == 4) {
      FUN_004102a0(*puVar4,*param_2);
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined4 *)(puVar4 + 1) = 8;
      goto joined_r0x004135b0;
    }
    if (iVar1 < 0x10) {
      uVar9 = *puVar4;
      uVar7 = *param_2;
LAB_004135d4:
      FUN_00413620(uVar9,uVar7,iVar1,puVar8);
      *(undefined4 *)(puVar4 + 2) = 0;
      *(int *)(puVar4 + 1) = iVar2;
      goto joined_r0x004135b0;
    }
    iVar3 = FUN_0040bfd0(iVar1);
    if (iVar1 == 1 << (ulong)(iVar3 - 1U & 0x1f)) {
      lVar6 = FUN_0040c660(puVar5,iVar1 << 2);
      if (lVar6 != 0) {
        FUN_00413720(*puVar4,*param_2,iVar1,*puVar5);
        *(undefined4 *)(puVar4 + 2) = 0;
        *(int *)(puVar4 + 1) = iVar2;
        goto joined_r0x004135b0;
      }
    }
    else {
      lVar6 = FUN_0040c660(puVar5,iVar2);
      if (lVar6 != 0) {
        uVar9 = *puVar4;
        uVar7 = *param_2;
        puVar8 = (undefined1 *)*puVar5;
        goto LAB_004135d4;
      }
    }
  }
LAB_00413514:
  uVar9 = 0;
LAB_004135f0:
  FUN_0040e1b0(param_3);
  return uVar9;
}


