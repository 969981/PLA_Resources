/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a87e4; name: FUN_032a87e4
 */


long FUN_032a87e4(int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = param_2 + (param_3 + param_1[1] * param_4) * *param_1;
  lVar4 = *(long *)(*(long *)(param_1 + 8) +
                   (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4));
  lVar5 = *(long *)(param_1 + 0x4c);
  uVar2 = (uint)param_1[3] >> (ulong)(param_2 & 0x1f);
  uVar1 = (uint)param_1[4] >> (ulong)(param_2 & 0x1f);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  iVar3 = FUN_032b55a4(param_1[6],uVar2,uVar1);
  FUN_032b552c(param_1[6]);
  FUN_032b5544(param_1[6]);
  FUN_032b5430(param_1[6]);
  return (ulong)(uint)(iVar3 * param_5) + lVar5 + lVar4;
}


