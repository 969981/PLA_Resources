/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0105c734; name: FUN_0105c734
 */


void FUN_0105c734(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  long local_60;
  undefined *puStack_58;
  
  FUN_01058920();
  uVar4 = FUN_0014fef0(param_1);
  if (0 < (int)uVar4) {
    FUN_01058b68();
    puVar3 = DAT_043b9470;
    bVar2 = DAT_043b9460;
    iVar5 = FUN_0014fef0(param_1);
    if (iVar5 != 0) {
      puVar1 = &DAT_043b9461;
      if ((bVar2 & 1) != 0) {
        puVar1 = puVar3;
      }
      FUN_00151a70(param_1,0xfff0b9d8,puVar1);
      iVar5 = FUN_001508c0(param_1,0xffffffff,1,0);
      uVar7 = (uint)(iVar5 == 1);
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_0105c7d8;
    }
  }
  uVar7 = 0;
LAB_0105c7d8:
  puVar6 = (undefined8 *)FUN_0105af80(param_1);
  FUN_00150260(param_1,0xffffffff);
  iVar5 = FUN_00155070(param_1,0xfff0b9d8);
  if (uVar4 == uVar7) {
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0x7f7fffee;
    puVar6[0xd] = 0xffffffffffffffff;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x17] = 0;
    puVar6[0x16] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    *(undefined4 *)(puVar6 + 0x14) = 0xffffffff;
    *(undefined1 *)((long)puVar6 + 0xa4) = 0xf;
    *(undefined2 *)(puVar6 + 0x15) = 0xffff;
    *(undefined4 *)((long)puVar6 + 0xac) = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0xffffff;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    *(undefined2 *)(puVar6 + 0x10) = 0xffff;
    *(undefined4 *)((long)puVar6 + 0x84) = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0xffffff;
    *(undefined4 *)(puVar6 + 0xf) = 0xffffffff;
    *(undefined1 *)((long)puVar6 + 0x7c) = 0xf;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0xffffffffffffffff;
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
  puStack_58 = DAT_043b93f8;
  if ((DAT_043b93e8 & 1) == 0) {
    puStack_58 = &DAT_043b93e9;
  }
  local_60 = param_1;
  FUN_0105b188(&local_60);
  if ((param_1 == 0) || (iVar5 == -2)) {
    return;
  }
  FUN_00155150(param_1,0xfff0b9d8,iVar5);
  return;
}


