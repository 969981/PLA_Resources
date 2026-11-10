/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017593bc; name: FUN_017593bc
 */


void FUN_017593bc(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  long local_50;
  byte *pbStack_48;
  
  pbVar6 = (byte *)FUN_017169b4();
  iVar4 = FUN_0014fef0(param_1);
  if (0 < iVar4) {
    FUN_01754db8();
    puVar3 = DAT_043cecd8;
    bVar2 = DAT_043cecc8;
    iVar5 = FUN_0014fef0(param_1);
    if (iVar5 != 0) {
      puVar1 = &DAT_043cecc9;
      if ((bVar2 & 1) != 0) {
        puVar1 = puVar3;
      }
      FUN_00151a70(param_1,0xfff0b9d8,puVar1);
      iVar5 = FUN_001508c0(param_1,0xffffffff,1,0);
      uVar8 = (uint)(iVar5 == 1);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_01759460;
    }
  }
  uVar8 = 0;
LAB_01759460:
  lVar7 = FUN_01758480(param_1);
  FUN_00150260(param_1,0xffffffff);
  iVar5 = FUN_00155070(param_1,0xfff0b9d8);
  local_50 = lVar7;
  FUN_01758860(&local_50,param_1,iVar4 - uVar8);
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
  FUN_01758608(&local_50);
  if ((param_1 == 0) || (iVar5 == -2)) {
    return;
  }
  FUN_00155150(param_1,0xfff0b9d8,iVar5);
  return;
}


