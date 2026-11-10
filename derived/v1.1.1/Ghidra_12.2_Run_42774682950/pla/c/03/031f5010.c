/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f5010; name: FUN_031f5010
 */


void FUN_031f5010(long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = -(param_2 >> 0x1f & 1) & 0xffffffc000000000 | (param_2 & 0xffffffff) << 6;
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar3);
  uVar4 = *puVar2;
  param_3[1] = puVar2[1];
  *param_3 = uVar4;
  lVar1 = uVar3 + *(long *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(lVar1 + 0x40);
  param_4[1] = *(undefined8 *)(lVar1 + 0x48);
  *param_4 = uVar4;
  return;
}


