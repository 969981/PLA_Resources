/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01020a54; name: FUN_01020a54
 */


undefined8 FUN_01020a54(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  long local_50;
  byte *pbStack_48;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  pbVar6 = (byte *)FUN_00b3c384();
  uVar4 = FUN_0014fef0(param_1);
  if (0 < (int)uVar4) {
    FUN_0101e4d4();
    puVar3 = DAT_043b8898;
    bVar2 = DAT_043b8888;
    iVar5 = FUN_0014fef0(param_1);
    if (iVar5 != 0) {
      puVar1 = &DAT_043b8889;
      if ((bVar2 & 1) != 0) {
        puVar1 = puVar3;
      }
      FUN_00151a70(param_1,0xfff0b9d8,puVar1);
      iVar5 = FUN_001508c0(param_1,0xffffffff,1,0);
      uVar7 = (uint)(iVar5 == 1);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_01020aa0;
    }
  }
  uVar7 = 0;
LAB_01020aa0:
  FUN_0101fa30(param_1);
  FUN_00150260(param_1,0xffffffff);
  iVar5 = FUN_00155070(param_1,0xfff0b9d8);
  if (uVar4 == uVar7) {
    FUN_0014ff10(param_1,0);
  }
  else {
    FUN_00154110(param_1,
                 "sol: no matching function call takes this number of arguments and the specified types"
                );
  }
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(param_1,0xfff0b9d8,(long)iVar5);
  }
  pbStack_48 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbStack_48 = pbVar6 + 1;
  }
  local_50 = param_1;
  FUN_0101fc38(&local_50);
  if ((param_1 != 0) && (iVar5 != -2)) {
    FUN_00155150(param_1,0xfff0b9d8,iVar5);
  }
  return 1;
}


