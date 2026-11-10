/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ffae70; name: FUN_01ffae70
 */


void FUN_01ffae70(long param_1)

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
  
  FUN_01ff799c();
  uVar5 = FUN_0014fef0(param_1);
  if (0 < (int)uVar5) {
    FUN_01ff7bc4();
    puVar4 = DAT_043d6120;
    bVar3 = DAT_043d6110;
    iVar6 = FUN_0014fef0(param_1);
    if (iVar6 != 0) {
      puVar1 = &DAT_043d6111;
      if ((bVar3 & 1) != 0) {
        puVar1 = puVar4;
      }
      FUN_00151a70(param_1,0xfff0b9d8,puVar1);
      iVar6 = FUN_001508c0(param_1,0xffffffff,1,0);
      uVar8 = (uint)(iVar6 == 1);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_01ffaf10;
    }
  }
  uVar8 = 0;
LAB_01ffaf10:
  puVar7 = (undefined8 *)FUN_01ff9bb0(param_1);
  FUN_00150260(param_1,0xffffffff);
  iVar6 = FUN_00155070(param_1,0xfff0b9d8);
  if (uVar5 == uVar8) {
    *puVar7 = 0;
    puVar7[1] = 0;
    uVar2 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    puVar7[2] = *(undefined8 *)PTR_DAT_04379570;
    puVar7[3] = uVar2;
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
  puStack_48 = DAT_043d60a8;
  if ((DAT_043d6098 & 1) == 0) {
    puStack_48 = &DAT_043d6099;
  }
  local_50 = param_1;
  FUN_01ff9d44(&local_50);
  if ((param_1 == 0) || (iVar6 == -2)) {
    return;
  }
  FUN_00155150(param_1,0xfff0b9d8,iVar6);
  return;
}


