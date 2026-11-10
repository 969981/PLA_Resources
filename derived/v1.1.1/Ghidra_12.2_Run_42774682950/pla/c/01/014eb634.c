/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014eb634; name: FUN_014eb634
 */


undefined8 FUN_014eb634(long param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80;
  code *local_78;
  undefined8 uStack_70;
  
  if (param_2 == 0) {
    iVar3 = FUN_014eb374(param_1);
    if (iVar3 == 1) {
      local_78 = FUN_014eb968;
      uStack_70 = 0;
      local_a0 = &LAB_014ebcb8;
      local_98 = FUN_014ebcd4;
      local_90 = &LAB_014ebcd8;
      puStack_88 = &LAB_014ebcec;
      local_80 = param_1;
      FUN_014fee44(*(undefined8 *)(param_1 + 0x1a8),0);
      iVar3 = FUN_014fe55c(*(undefined8 *)(param_1 + 0x1a8));
      iVar4 = FUN_014fe69c(*(undefined8 *)(param_1 + 0x1a8),0);
      uVar1 = 0xf5837d0d9f6e494c;
      if (iVar3 != 1) {
        uVar1 = 0x3d3ce546c4aa7af2;
      }
      FUN_014eb764(param_1,uVar1,&local_a0,iVar4 == 0);
      pcVar2 = local_98;
      if (local_98 != (code *)0x0) {
        local_90 = (undefined1 *)0x0;
        puStack_88 = (undefined1 *)0x0;
        local_a0 = (undefined1 *)0x0;
        local_98 = (code *)0x0;
        (*pcVar2)(&local_80);
      }
    }
    else {
      if (iVar3 != 0) {
        FUN_014eb3bc(param_1);
        return 1;
      }
      uVar5 = FUN_014fe69c(*(undefined8 *)(param_1 + 0x1a8),0);
      FUN_014eb80c(param_1,uVar5);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x1c8) = 3;
  }
  return 0;
}


