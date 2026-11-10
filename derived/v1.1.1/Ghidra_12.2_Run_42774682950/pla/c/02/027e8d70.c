/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027e8d70; name: FUN_027e8d70
 */


void FUN_027e8d70(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  long local_50;
  undefined *puStack_48;
  
  FUN_027e5368();
  uVar4 = FUN_0014fef0(param_1);
  if (0 < (int)uVar4) {
    FUN_027e55a8();
    puVar3 = DAT_043eac00;
    bVar2 = DAT_043eabf0;
    iVar5 = FUN_0014fef0(param_1);
    if (iVar5 != 0) {
      puVar1 = &DAT_043eabf1;
      if ((bVar2 & 1) != 0) {
        puVar1 = puVar3;
      }
      FUN_00151a70(param_1,0xfff0b9d8,puVar1);
      iVar5 = FUN_001508c0(param_1,0xffffffff,1,0);
      uVar7 = (uint)(iVar5 == 1);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_027e8e10;
    }
  }
  uVar7 = 0;
LAB_027e8e10:
  puVar6 = (undefined8 *)FUN_027e7870(param_1);
  FUN_00150260(param_1,0xffffffff);
  iVar5 = FUN_00155070(param_1,0xfff0b9d8);
  if (uVar4 == uVar7) {
    *(undefined4 *)(puVar6 + 2) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
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
  puStack_48 = DAT_043eab88;
  if ((DAT_043eab78 & 1) == 0) {
    puStack_48 = &DAT_043eab79;
  }
  local_50 = param_1;
  FUN_027e7a04(&local_50);
  if ((param_1 == 0) || (iVar5 == -2)) {
    return;
  }
  FUN_00155150(param_1,0xfff0b9d8,iVar5);
  return;
}


