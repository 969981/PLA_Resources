/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025e704; name: FUN_0025e704
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0025e704(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x10) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 **)(*(long *)(param_1 + 0x88) + 0x10) = puVar5 + 6;
  uVar2 = _UNK_03889a88;
  uVar1 = _DAT_03889a80;
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar4 = DAT_0388a148;
  uVar3 = DAT_0388a140;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  puVar5[1] = uVar2;
  *puVar5 = uVar1;
  puVar5[3] = uVar4;
  puVar5[2] = uVar3;
  uVar1 = _DAT_03888d10;
  puVar5[5] = _UNK_03888d18;
  puVar5[4] = uVar1;
  if ((*(long *)(param_1 + 0x30) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x28) + 0x91) >> 1 & 1) == 0)) {
    return;
  }
  FUN_0025da5c(param_1 + 0x40);
  return;
}


