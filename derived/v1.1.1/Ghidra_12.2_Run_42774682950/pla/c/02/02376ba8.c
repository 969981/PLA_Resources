/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02376ba8; name: FUN_02376ba8
 */


void FUN_02376ba8(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  void *__s;
  uint uVar7;
  long local_60;
  byte *pbStack_58;
  
  pbVar6 = (byte *)FUN_01e18eb4();
  uVar4 = FUN_0014fef0(param_1);
  if (0 < (int)uVar4) {
    FUN_02370358();
    puVar3 = DAT_043e2538;
    bVar2 = DAT_043e2528;
    iVar5 = FUN_0014fef0(param_1);
    if (iVar5 != 0) {
      puVar1 = &DAT_043e2529;
      if ((bVar2 & 1) != 0) {
        puVar1 = puVar3;
      }
      FUN_00151a70(param_1,0xfff0b9d8,puVar1);
      iVar5 = FUN_001508c0(param_1,0xffffffff,1,0);
      uVar7 = (uint)(iVar5 == 1);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_02376c50;
    }
  }
  uVar7 = 0;
LAB_02376c50:
  __s = (void *)FUN_02376d50(param_1);
  FUN_00150260(param_1,0xffffffff);
  iVar5 = FUN_00155070(param_1,0xfff0b9d8);
  if (uVar4 == uVar7) {
    memset(__s,0,0x180);
    FUN_0014ff10(param_1,0);
  }
  else {
    FUN_00154110(param_1,
                 "sol: no matching function call takes this number of arguments and the specified types"
                );
  }
  if (param_1 == 0) {
    FUN_00151490(0);
    bVar2 = *pbVar6;
  }
  else {
    FUN_00151e00(param_1,0xfff0b9d8,(long)iVar5);
    bVar2 = *pbVar6;
  }
  if ((bVar2 & 1) == 0) {
    pbStack_58 = pbVar6 + 1;
  }
  else {
    pbStack_58 = *(byte **)(pbVar6 + 0x10);
  }
  local_60 = param_1;
  FUN_02376edc(&local_60);
  if ((param_1 == 0) || (iVar5 == -2)) {
    return;
  }
  FUN_00155150(param_1,0xfff0b9d8,iVar5);
  return;
}


