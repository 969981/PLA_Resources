/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0159c20c; name: FUN_0159c20c
 */


void FUN_0159c20c(long param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar1 = **(undefined4 **)(param_1 + 0x90);
  param_2[1] = uVar3;
  *param_2 = CONCAT44((int)((ulong)*param_2 >> 0x20),uVar1);
  uVar2 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x90) + 4),uVar1);
  param_2[1] = uVar3;
  *param_2 = uVar2;
  param_2[1] = (ulong)*(uint *)(*(long *)(param_1 + 0x90) + 8);
  *param_2 = uVar2;
  if ((param_3 & 1) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 0xc;
  }
  return;
}


