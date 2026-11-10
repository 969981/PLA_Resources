/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107afa0; name: FUN_0107afa0
 */


void FUN_0107afa0(undefined8 param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  
  lVar2 = FUN_008cca50();
  pbVar4 = (byte *)(lVar2 + (long)param_2 * 0x18);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    pbVar4 = pbVar4 + 1;
    uVar3 = (ulong)(bVar1 >> 1);
  }
  else {
    lVar2 = lVar2 + (long)param_2 * 0x18;
    uVar3 = *(ulong *)(lVar2 + 8);
    pbVar4 = *(byte **)(lVar2 + 0x10);
  }
  FUN_001514f0(param_1,pbVar4,uVar3);
  FUN_00151490(param_1);
  FUN_00151810(param_1,param_3[2]);
  FUN_00151810(param_1,param_3[3]);
  FUN_001516f0(param_1,*param_3,3);
  FUN_001523e0(param_1,param_4);
  return;
}


