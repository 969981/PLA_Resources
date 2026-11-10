/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c920c; name: FUN_032c920c
 */


void FUN_032c920c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  float fVar2;
  ulong uVar3;
  
  uVar3 = param_2[1];
  uVar1 = *param_2;
  fVar2 = (float)(uVar1 >> 0x20);
  param_1[5] = 0;
  param_1[4] = CONCAT44(-(float)uVar1,fVar2);
  param_1[1] = (ulong)(uint)-fVar2;
  *param_1 = uVar3 << 0x20;
  param_1[3] = uVar1 & 0xffffffff;
  param_1[2] = (ulong)(uint)-(float)uVar3;
  return;
}


