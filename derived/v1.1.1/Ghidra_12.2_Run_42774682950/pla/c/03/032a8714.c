/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a8714; name: FUN_032a8714
 */


long FUN_032a8714(int *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = param_2 + (param_3 + param_1[1] * param_4) * *param_1;
  lVar7 = *(long *)(*(long *)(param_1 + 8) +
                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
  lVar8 = *(long *)(param_1 + 0x4c);
  uVar1 = (uint)param_1[3] >> (ulong)(param_2 & 0x1f);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar4 = (uint)param_1[4] >> (ulong)(param_2 & 0x1f);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  iVar3 = FUN_032b55a4(param_1[6],uVar1,uVar4);
  uVar4 = FUN_032b552c(param_1[6]);
  iVar5 = FUN_032b5544(param_1[6]);
  iVar6 = FUN_032b5430(param_1[6]);
  uVar1 = (uint)param_1[3] >> (ulong)(param_2 & 0x1f);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = uVar1 / uVar4;
  }
  return (ulong)(uint)(iVar3 * param_6) + lVar8 + lVar7 +
         (ulong)(uVar4 * param_5 * iVar5 * iVar6 * uVar2 >> 3);
}


