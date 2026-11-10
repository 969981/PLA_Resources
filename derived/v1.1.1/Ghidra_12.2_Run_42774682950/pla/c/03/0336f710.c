/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336f710; name: FUN_0336f710
 */


void FUN_0336f710(ulong *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *param_2 & 0xffffffff;
  uVar5 = *param_3 & 0xffffffff;
  lVar2 = (long)*param_2 >> 0x20;
  uVar6 = uVar5 * uVar4;
  lVar3 = (long)*param_3 >> 0x20;
  uVar5 = uVar5 * lVar2 + (uVar6 >> 0x20);
  lVar1 = lVar3 * uVar4 + (uVar5 & 0xffffffff);
  *param_1 = uVar6 & 0xffffffff | lVar1 << 0x20;
  param_1[1] = lVar3 * lVar2 + ((long)uVar5 >> 0x20) + (lVar1 >> 0x20);
  uVar4 = param_2[1] & 0xffffffff;
  uVar5 = param_3[1] & 0xffffffff;
  lVar2 = (long)param_2[1] >> 0x20;
  uVar6 = uVar5 * uVar4;
  lVar3 = (long)param_3[1] >> 0x20;
  uVar5 = uVar5 * lVar2 + (uVar6 >> 0x20);
  lVar1 = lVar3 * uVar4 + (uVar5 & 0xffffffff);
  param_1[2] = uVar6 & 0xffffffff | lVar1 << 0x20;
  param_1[3] = lVar3 * lVar2 + ((long)uVar5 >> 0x20) + (lVar1 >> 0x20);
  uVar4 = param_2[2] & 0xffffffff;
  uVar5 = param_3[2] & 0xffffffff;
  lVar2 = (long)param_2[2] >> 0x20;
  uVar6 = uVar5 * uVar4;
  lVar3 = (long)param_3[2] >> 0x20;
  uVar5 = uVar5 * lVar2 + (uVar6 >> 0x20);
  lVar1 = lVar3 * uVar4 + (uVar5 & 0xffffffff);
  param_1[4] = uVar6 & 0xffffffff | lVar1 << 0x20;
  param_1[5] = lVar3 * lVar2 + ((long)uVar5 >> 0x20) + (lVar1 >> 0x20);
  return;
}


