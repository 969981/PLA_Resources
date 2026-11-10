/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337258c; name: FUN_0337258c
 */


void FUN_0337258c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = *param_2;
  uVar1 = *param_2;
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  iVar6 = (int)((long)uVar3 >> 0x3f);
  iVar7 = (int)((long)param_2[1] >> 0x3f);
  iVar8 = (int)((long)uVar4 >> 0x3f);
  iVar9 = (int)((long)uVar5 >> 0x3f);
  param_1[1] = param_2[1] ^ (param_2[1] ^ -param_2[1]) & CONCAT44(iVar7,iVar7);
  *param_1 = uVar1 ^ (uVar2 ^ -uVar3) & CONCAT44(iVar6,iVar6);
  uVar1 = param_2[2];
  uVar2 = param_2[2];
  param_1[3] = param_2[3] ^ (param_2[3] ^ -uVar5) & CONCAT44(iVar9,iVar9);
  param_1[2] = uVar1 ^ (uVar2 ^ -uVar4) & CONCAT44(iVar8,iVar8);
  return;
}


