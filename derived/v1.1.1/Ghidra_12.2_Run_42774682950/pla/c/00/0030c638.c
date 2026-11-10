/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030c638; name: FUN_0030c638
 */


void FUN_0030c638(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  puVar7 = (ulong *)(param_1 + 8);
  uVar4 = *puVar7;
  uVar6 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar6 | (uint)uVar4) & 1) == 0) goto LAB_0030c6ac;
  if ((uVar6 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_0030c8c0();
    uVar4 = *puVar7;
    if ((uVar4 & 1) == 0) goto LAB_0030c6ec;
LAB_0030c674:
    puVar3 = (undefined8 *)((uVar4 & 0xfffffffffffffffe) + 8);
  }
  else {
    puVar2 = (undefined8 *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((uVar4 & 1) != 0) goto LAB_0030c674;
LAB_0030c6ec:
    puVar3 = (undefined8 *)FUN_0030c8c0(puVar7);
  }
  uVar5 = *puVar3;
  *puVar3 = *puVar2;
  *puVar2 = uVar5;
  uVar5 = puVar3[1];
  puVar3[1] = puVar2[1];
  puVar2[1] = uVar5;
  uVar5 = puVar3[2];
  puVar3[2] = puVar2[2];
  puVar2[2] = uVar5;
LAB_0030c6ac:
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  return;
}


