/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fa5be4; name: FUN_00fa5be4
 */


void FUN_00fa5be4(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  uint uVar10;
  long local_60;
  byte *pbStack_58;
  
  pbVar6 = (byte *)FUN_00e193bc();
  iVar4 = FUN_0014fef0(param_1);
  if (0 < iVar4) {
    FUN_00fa50b0();
    puVar3 = DAT_043b6658;
    bVar2 = DAT_043b6648;
    iVar5 = FUN_0014fef0(param_1);
    if (iVar5 != 0) {
      puVar1 = &DAT_043b6649;
      if ((bVar2 & 1) != 0) {
        puVar1 = puVar3;
      }
      FUN_00151a70(param_1,0xfff0b9d8,puVar1);
      iVar5 = FUN_001508c0(param_1,0xffffffff,1,0);
      uVar10 = (uint)(iVar5 == 1);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_00fa5c8c;
    }
  }
  uVar10 = 0;
LAB_00fa5c8c:
  puVar7 = (undefined8 *)FUN_00e337a0(param_1);
  FUN_00150260(param_1,0xffffffff);
  iVar5 = FUN_00155070(param_1,0xfff0b9d8);
  if (iVar4 - uVar10 == 1) {
    puVar9 = &DAT_cbf29ce484222645;
    pbVar8 = (byte *)FUN_00150da0(param_1,uVar10 + 1,&local_60);
    bVar2 = *pbVar8;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
    }
    *puVar7 = puVar9;
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
  pbStack_58 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbStack_58 = pbVar6 + 1;
  }
  local_60 = param_1;
  FUN_00e339b4(&local_60);
  if ((param_1 != 0) && (iVar5 != -2)) {
    FUN_00155150(param_1,0xfff0b9d8,iVar5);
  }
  return;
}


