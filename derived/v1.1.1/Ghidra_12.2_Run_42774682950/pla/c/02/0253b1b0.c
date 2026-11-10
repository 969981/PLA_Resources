/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0253b1b0; name: FUN_0253b1b0
 */


void FUN_0253b1b0(undefined8 param_1,int *param_2,undefined8 *param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  
  iVar2 = *param_2;
  lVar3 = FUN_008cca50();
  pbVar5 = (byte *)(lVar3 + (long)iVar2 * 0x18);
  bVar1 = *pbVar5;
  if ((bVar1 & 1) == 0) {
    pbVar5 = pbVar5 + 1;
    uVar4 = (ulong)(bVar1 >> 1);
  }
  else {
    lVar3 = lVar3 + (long)iVar2 * 0x18;
    uVar4 = *(ulong *)(lVar3 + 8);
    pbVar5 = *(byte **)(lVar3 + 0x10);
  }
  FUN_001514f0(param_1,pbVar5,uVar4);
  puVar6 = (undefined8 *)param_3[5];
  FUN_00151490(param_1);
  FUN_00151810(param_1,param_3[2]);
  FUN_00151810(param_1,param_3[3]);
  FUN_00151490(param_1);
  FUN_001514d0(param_1,*puVar6);
  FUN_001516f0(param_1,*param_3,5);
  FUN_001523e0(param_1,param_4);
  return;
}


