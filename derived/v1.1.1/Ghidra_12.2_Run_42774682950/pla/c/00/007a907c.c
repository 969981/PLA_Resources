/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a907c; name: FUN_007a907c
 */


void FUN_007a907c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = (ulong *)(param_1 + 8);
  uVar4 = *puVar7;
  uVar6 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar6 | (uint)uVar4) & 1) == 0) goto LAB_007a90f4;
  if ((uVar6 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_0033aecc();
    uVar4 = *puVar7;
    if ((uVar4 & 1) == 0) goto LAB_007a9144;
LAB_007a90bc:
    puVar3 = (undefined8 *)((uVar4 & 0xfffffffffffffffe) + 8);
  }
  else {
    puVar2 = (undefined8 *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((uVar4 & 1) != 0) goto LAB_007a90bc;
LAB_007a9144:
    puVar3 = (undefined8 *)FUN_0033aecc(puVar7);
  }
  uVar10 = puVar3[1];
  uVar8 = *puVar3;
  uVar5 = puVar3[2];
  uVar11 = puVar2[1];
  uVar9 = *puVar2;
  puVar3[2] = puVar2[2];
  puVar3[1] = uVar11;
  *puVar3 = uVar9;
  puVar2[2] = uVar5;
  puVar2[1] = uVar10;
  *puVar2 = uVar8;
LAB_007a90f4:
  FUN_0032bcc4(param_1 + 0x10,param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  return;
}


