/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020113a8; name: FUN_020113a8
 */


void FUN_020113a8(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  uint uVar8;
  long local_60;
  byte *pbStack_58;
  
  pbVar6 = (byte *)FUN_0200e238();
  uVar4 = FUN_0014fef0(param_1);
  if (0 < (int)uVar4) {
    FUN_0200e470();
    puVar3 = DAT_043d6518;
    bVar2 = DAT_043d6508;
    iVar5 = FUN_0014fef0(param_1);
    if (iVar5 != 0) {
      puVar1 = &DAT_043d6509;
      if ((bVar2 & 1) != 0) {
        puVar1 = puVar3;
      }
      FUN_00151a70(param_1,0xfff0b9d8,puVar1);
      iVar5 = FUN_001508c0(param_1,0xffffffff,1,0);
      uVar8 = (uint)(iVar5 == 1);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_02011450;
    }
  }
  uVar8 = 0;
LAB_02011450:
  puVar7 = (undefined8 *)FUN_020100d0(param_1);
  FUN_00150260(param_1,0xffffffff);
  iVar5 = FUN_00155070(param_1,0xfff0b9d8);
  if (uVar4 == uVar8) {
    *puVar7 = 0x41f0000042340000;
    *(undefined4 *)(puVar7 + 1) = 0x41100000;
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
  FUN_0201026c(&local_60);
  if ((param_1 != 0) && (iVar5 != -2)) {
    FUN_00155150(param_1,0xfff0b9d8,iVar5);
  }
  return;
}


