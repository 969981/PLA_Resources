/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0254b780; name: FUN_0254b780
 */


void FUN_0254b780(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long local_50;
  undefined *puStack_48;
  
  FUN_02548140();
  iVar4 = FUN_0014fef0(param_1);
  if (0 < iVar4) {
    FUN_02548380();
    puVar3 = DAT_043e93d8;
    bVar2 = DAT_043e93c8;
    iVar5 = FUN_0014fef0(param_1);
    if (iVar5 != 0) {
      puVar1 = &DAT_043e93c9;
      if ((bVar2 & 1) != 0) {
        puVar1 = puVar3;
      }
      FUN_00151a70(param_1,0xfff0b9d8,puVar1);
      iVar5 = FUN_001508c0(param_1,0xffffffff,1,0);
      uVar7 = (uint)(iVar5 == 1);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_0254b820;
    }
  }
  uVar7 = 0;
LAB_0254b820:
  lVar6 = FUN_0254a420(param_1);
  FUN_00150260(param_1,0xffffffff);
  iVar5 = FUN_00155070(param_1,0xfff0b9d8);
  local_50 = lVar6;
  FUN_0254a7c0(&local_50,param_1,iVar4 - uVar7);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(param_1,0xfff0b9d8,(long)iVar5);
  }
  puStack_48 = DAT_043e9360;
  if ((DAT_043e9350 & 1) == 0) {
    puStack_48 = &DAT_043e9351;
  }
  local_50 = param_1;
  FUN_0254a618(&local_50);
  if ((param_1 == 0) || (iVar5 == -2)) {
    return;
  }
  FUN_00155150(param_1,0xfff0b9d8,iVar5);
  return;
}


