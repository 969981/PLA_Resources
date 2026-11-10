/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141ca60; name: FUN_0141ca60
 */


void FUN_0141ca60(long param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0141cb58(param_1,*param_2);
  FUN_0141cce4(param_1,param_2[7]);
  FUN_0141cdbc(param_1,param_2[1],param_2[2]);
  FUN_0141cfd0(param_1,param_2[3],param_2[4]);
  FUN_0141d1e4(param_1,param_2[4] + param_2[2]);
  iVar2 = param_2[5];
  iVar3 = param_2[6];
  *(float *)(param_1 + 0x5b4) = (float)iVar3;
  *(float *)(param_1 + 0x5b0) = (float)iVar2;
  *(uint *)(param_1 + 0x5bc) = (uint)((float)iVar3 < (float)iVar2);
  iVar2 = param_2[8];
  iVar3 = param_2[9];
  *(float *)(param_1 + 0x5c4) = (float)iVar3;
  *(float *)(param_1 + 0x5c0) = (float)iVar2;
  *(uint *)(param_1 + 0x5cc) = (uint)((float)iVar3 < (float)iVar2);
  iVar2 = param_2[10];
  iVar3 = param_2[0xb];
  *(float *)(param_1 + 0x5d4) = (float)iVar3;
  *(float *)(param_1 + 0x5d0) = (float)iVar2;
  *(uint *)(param_1 + 0x5dc) = (uint)((float)iVar3 < (float)iVar2);
  FUN_0141d374(param_1);
  FUN_0141d3f0(param_1);
  FUN_0141d60c(param_1);
  if ((param_2[8] == 0) || (param_2[9] != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x5e0) = uVar1;
  return;
}


