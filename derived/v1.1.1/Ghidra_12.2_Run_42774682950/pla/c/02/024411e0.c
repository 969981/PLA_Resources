/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024411e0; name: FUN_024411e0
 */


void FUN_024411e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  long local_50;
  undefined *puStack_48;
  
  FUN_0243e6a8();
  uVar5 = FUN_0014fef0(param_1);
  if (0 < (int)uVar5) {
    FUN_0243e8e8();
    puVar4 = DAT_043e5858;
    bVar3 = DAT_043e5848;
    iVar6 = FUN_0014fef0(param_1);
    if (iVar6 != 0) {
      puVar1 = &DAT_043e5849;
      if ((bVar3 & 1) != 0) {
        puVar1 = puVar4;
      }
      FUN_00151a70(param_1,0xfff0b9d8,puVar1);
      iVar6 = FUN_001508c0(param_1,0xffffffff,1,0);
      uVar8 = (uint)(iVar6 == 1);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_02441280;
    }
  }
  uVar8 = 0;
LAB_02441280:
  puVar7 = (undefined8 *)FUN_0243fe90(param_1);
  FUN_00150260(param_1,0xffffffff);
  iVar6 = FUN_00155070(param_1,0xfff0b9d8);
  if (uVar5 == uVar8) {
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    uVar2 = *(undefined8 *)(PTR_DAT_0437a0f8 + 8);
    puVar7[4] = *(undefined8 *)PTR_DAT_0437a0f8;
    puVar7[5] = uVar2;
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
    FUN_00151e00(param_1,0xfff0b9d8,(long)iVar6);
  }
  puStack_48 = DAT_043e57e0;
  if ((DAT_043e57d0 & 1) == 0) {
    puStack_48 = &DAT_043e57d1;
  }
  local_50 = param_1;
  FUN_02440088(&local_50);
  if ((param_1 == 0) || (iVar6 == -2)) {
    return;
  }
  FUN_00155150(param_1,0xfff0b9d8,iVar6);
  return;
}


