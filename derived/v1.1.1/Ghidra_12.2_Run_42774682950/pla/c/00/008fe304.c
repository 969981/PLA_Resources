/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008fe304; name: FUN_008fe304
 */


void FUN_008fe304(undefined8 param_1,long param_2,int *param_3,long *param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  
  iVar2 = *param_3;
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
  FUN_001514f0(param_2,pbVar5,uVar4);
  if (*param_4 == 0) {
    FUN_00151490(param_2);
  }
  else {
    FUN_00150260(*param_4,(int)param_4[1]);
    if (*param_4 != param_2) {
      FUN_0014fe00(*param_4,param_2,1);
    }
  }
  FUN_001523e0(param_2,param_5);
  return;
}


