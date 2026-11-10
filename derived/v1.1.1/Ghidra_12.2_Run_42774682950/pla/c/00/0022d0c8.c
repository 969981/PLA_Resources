/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d0c8; name: FUN_0022d0c8
 */


void FUN_0022d0c8(long param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  uVar1 = -(param_2 >> 0x1f & 1) & 0xffffffe000000000 | (param_2 & 0xffffffff) << 5;
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1) = *param_3;
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 8) = param_3[1];
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 0x10) = param_3[2];
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 0x18) = param_3[3];
  return;
}


