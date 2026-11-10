/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ac840; name: FUN_007ac840
 */


void FUN_007ac840(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar6 = (ulong *)(param_1 + 8);
  uVar3 = *puVar6;
  uVar5 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar5 | (uint)uVar3) & 1) == 0) goto LAB_007ac8b8;
  if ((uVar5 & 1) == 0) {
    puVar1 = (undefined8 *)FUN_0033aecc();
    uVar3 = *puVar6;
    if ((uVar3 & 1) == 0) goto LAB_007ac8e4;
LAB_007ac880:
    puVar2 = (undefined8 *)((uVar3 & 0xfffffffffffffffe) + 8);
  }
  else {
    puVar1 = (undefined8 *)((uVar5 & 0xfffffffffffffffe) + 8);
    if ((uVar3 & 1) != 0) goto LAB_007ac880;
LAB_007ac8e4:
    puVar2 = (undefined8 *)FUN_0033aecc(puVar6);
  }
  uVar9 = puVar2[1];
  uVar7 = *puVar2;
  uVar4 = puVar2[2];
  uVar10 = puVar1[1];
  uVar8 = *puVar1;
  puVar2[2] = puVar1[2];
  puVar2[1] = uVar10;
  *puVar2 = uVar8;
  puVar1[2] = uVar4;
  puVar1[1] = uVar9;
  *puVar1 = uVar7;
LAB_007ac8b8:
  FUN_0032bcc4(param_1 + 0x10,param_2 + 0x10);
  return;
}


