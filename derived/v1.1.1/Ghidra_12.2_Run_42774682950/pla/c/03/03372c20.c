/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03372c20; name: FUN_03372c20
 */


void FUN_03372c20(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_032d59e0(param_3,0,8);
  uVar2 = *param_1 >> 0x20;
  uVar1 = *param_1 & 0xffffffff;
  uVar4 = *param_2 >> 0x20;
  uVar3 = *param_2 & 0xffffffff;
  uVar5 = uVar3 * uVar1;
  uVar3 = uVar3 * uVar2 + (uVar5 >> 0x20);
  uVar1 = uVar4 * uVar1 + (uVar3 & 0xffffffff);
  uVar3 = uVar4 * uVar2 + (uVar3 >> 0x20) + (uVar1 >> 0x20);
  uVar1 = uVar5 & 0xffffffff | uVar1 << 0x20;
  uVar2 = *param_3;
  uVar4 = param_3[1];
  *param_3 = uVar2 + uVar1;
  uVar2 = (ulong)CARRY8(uVar2,uVar1);
  uVar1 = uVar4 + uVar3;
  param_3[1] = uVar1 + uVar2;
  uVar3 = (ulong)(CARRY8(uVar4,uVar3) || CARRY8(uVar1,uVar2));
  uVar1 = param_3[2];
  param_3[2] = uVar1 + uVar3;
  param_3[3] = param_3[3] + (ulong)CARRY8(uVar1,uVar3);
  uVar2 = param_1[1] >> 0x20;
  uVar1 = param_1[1] & 0xffffffff;
  uVar4 = *param_2 >> 0x20;
  uVar3 = *param_2 & 0xffffffff;
  uVar5 = uVar3 * uVar1;
  uVar3 = uVar3 * uVar2 + (uVar5 >> 0x20);
  uVar1 = uVar4 * uVar1 + (uVar3 & 0xffffffff);
  uVar3 = uVar4 * uVar2 + (uVar3 >> 0x20) + (uVar1 >> 0x20);
  uVar1 = uVar5 & 0xffffffff | uVar1 << 0x20;
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  param_3[1] = uVar2 + uVar1;
  uVar2 = (ulong)CARRY8(uVar2,uVar1);
  uVar1 = uVar4 + uVar3;
  param_3[2] = uVar1 + uVar2;
  param_3[3] = param_3[3] + (ulong)(CARRY8(uVar4,uVar3) || CARRY8(uVar1,uVar2));
  return;
}


