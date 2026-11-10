/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007829d8; name: FUN_007829d8
 */


bool FUN_007829d8(int *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  sockaddr *psVar3;
  
  iVar2 = *param_1;
  psVar3 = (sockaddr *)FUN_007828b8(param_2);
  uVar1 = FUN_007828bc(param_2);
  iVar2 = nn::socket::Bind(iVar2,psVar3,uVar1);
  return iVar2 == 0;
}


