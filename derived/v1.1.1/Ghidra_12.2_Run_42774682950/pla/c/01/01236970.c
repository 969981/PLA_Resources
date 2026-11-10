/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01236970; name: FUN_01236970
 */


void FUN_01236970(long *param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 local_b0 [2];
  long *local_a8;
  undefined1 local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  iVar1 = FUN_01236600(param_1 + 0x3a);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      puVar2 = (undefined4 *)FUN_012364f4(param_1 + 0x3a,iVar4,param_2);
      local_b0[0] = *puVar2;
      local_a8 = *(long **)(puVar2 + 2);
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x18))();
      }
      local_a0 = *(undefined1 *)(puVar2 + 4);
      local_98 = *(long **)(puVar2 + 6);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x18))();
      }
      local_90 = *(long **)(puVar2 + 8);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x18))();
      }
      local_88 = *(undefined8 *)(puVar2 + 10);
      local_80 = *(long **)(puVar2 + 0xc);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x18))();
      }
      local_78 = *(undefined8 *)(puVar2 + 0xe);
      local_70 = *(undefined8 *)(puVar2 + 0x10);
      uStack_68 = *(undefined8 *)(puVar2 + 0x12);
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_2,local_b0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_3 + 8) == *(long *)(param_3 + 0x10)) {
          FUN_01236e9c(param_3,local_b0);
        }
        else {
          FUN_01236698(param_3 + 0x18,*(long *)(param_3 + 8),local_b0);
          *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 0x50;
        }
      }
      uVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,local_b0);
      if ((uVar3 & 1) != 0) {
        if (param_1[0x34] == param_1[0x35]) {
          FUN_01236e9c(param_1 + 0x33,local_b0);
        }
        else {
          FUN_01236698(param_1 + 0x36,param_1[0x34],local_b0);
          param_1[0x34] = param_1[0x34] + 0x50;
        }
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return;
}


