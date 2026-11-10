/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a68ac; name: FUN_032a68ac
 */


long FUN_032a68ac(int *param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = (uint)param_1[3] >> (ulong)(param_2 & 0x1f);
  uVar2 = (uint)param_1[4] >> (ulong)(param_2 & 0x1f);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  param_2 = param_2 + (param_3 + param_1[1] * param_4) * *param_1;
  lVar4 = *(long *)(*(long *)(param_1 + 8) +
                   (-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4));
  lVar5 = *(long *)(param_1 + 0x4c);
  uVar3 = FUN_032b55e8(param_1[6],uVar1,uVar2,param_5,param_6,param_7);
  return lVar5 + lVar4 + (uVar3 & 0xffffffff);
}


