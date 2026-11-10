/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00782a20; name: FUN_00782a20
 */


long FUN_00782a20(int *param_1,byte *param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  sockaddr *psVar5;
  long lVar6;
  undefined4 uVar7;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  iVar4 = *param_1;
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  psVar5 = (sockaddr *)FUN_007828b8(param_3);
  uVar3 = FUN_007828bc(param_3);
  lVar6 = nn::socket::SendTo(iVar4,pbVar2,uVar1,param_4,psVar5,uVar3);
  if (-1 < lVar6) {
    return lVar6;
  }
  if (param_5 == (undefined4 *)0x0) {
    return 0;
  }
  iVar4 = nn::socket::GetLastErrno();
  if (iVar4 != 0x16) {
    if (iVar4 == 0xb) {
      uVar7 = 2;
      goto LAB_00782ac8;
    }
    if (iVar4 != 9) {
      uVar7 = 1;
      goto LAB_00782ac8;
    }
  }
  uVar7 = 3;
LAB_00782ac8:
  *param_5 = uVar7;
  return 0;
}


