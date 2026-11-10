/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f6a0c; name: FUN_010f6a0c
 */


void FUN_010f6a0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_010f6be0(&local_50,param_2);
  uVar1 = local_50;
  local_50 = 0;
  lVar2 = *(long *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = uVar1;
  if (lVar2 != 0) {
    FUN_010f70c4(param_1 + 0x1c0);
  }
  *(undefined8 *)(param_1 + 0x1c8) = uStack_40;
  *(undefined8 *)(param_1 + 0x1d0) = local_38;
  *(undefined8 *)(param_1 + 0x1c0) = local_48;
  lVar2 = *(long *)(param_1 + 0x70);
  iVar3 = 0;
  if (lVar2 != 0) {
    iVar3 = (int)((ulong)((*(long *)(lVar2 + 0x278) - *(long *)(lVar2 + 0x270)) * 0x20000000) >>
                 0x20);
  }
  lVar2 = *(long *)(param_1 + 0xa0);
  iVar4 = 0;
  if (lVar2 != 0) {
    iVar4 = (int)(*(long *)(lVar2 + 0x278) - *(long *)(lVar2 + 0x270) >> 3);
  }
  lVar5 = *(long *)(param_1 + 0xd0);
  lVar2 = 0;
  if (lVar5 != 0) {
    lVar2 = (*(long *)(lVar5 + 0x278) - *(long *)(lVar5 + 0x270)) * 0x20000000;
  }
  FUN_00b7ccc4(*(long *)(param_1 + 0x1b8),
               (long)((float)(ulong)((long)(lVar2 + ((ulong)(uint)(iVar4 + iVar3) << 0x20)) >> 0x20)
                     / *(float *)(*(long *)(param_1 + 0x1b8) + 0x60)));
  FUN_010f6d00(&local_50,param_2);
  uVar1 = local_50;
  local_50 = 0;
  lVar2 = *(long *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = uVar1;
  if (lVar2 != 0) {
    FUN_010f7554(param_1 + 0x1e0);
  }
  *(undefined8 *)(param_1 + 0x1e8) = uStack_40;
  *(undefined8 *)(param_1 + 0x1f0) = local_38;
  *(undefined8 *)(param_1 + 0x1e0) = local_48;
  lVar2 = *(long *)(param_1 + 0x100);
  iVar3 = 0;
  if (lVar2 != 0) {
    iVar3 = (int)((ulong)((*(long *)(lVar2 + 0x278) - *(long *)(lVar2 + 0x270)) * 0x20000000) >>
                 0x20);
  }
  lVar2 = *(long *)(param_1 + 0x130);
  iVar4 = 0;
  if (lVar2 != 0) {
    iVar4 = (int)(*(long *)(lVar2 + 0x278) - *(long *)(lVar2 + 0x270) >> 3);
  }
  lVar5 = *(long *)(param_1 + 0x160);
  lVar2 = 0;
  if (lVar5 != 0) {
    lVar2 = (*(long *)(lVar5 + 0x278) - *(long *)(lVar5 + 0x270)) * 0x20000000;
  }
  lVar6 = *(long *)(param_1 + 400);
  lVar5 = 0;
  if (lVar6 != 0) {
    lVar5 = (*(long *)(lVar6 + 0x278) - *(long *)(lVar6 + 0x270)) * 0x20000000;
  }
  FUN_010f87cc(*(long *)(param_1 + 0x1d8),
               (long)((float)(ulong)((long)(lVar2 + ((ulong)(uint)(iVar4 + iVar3) << 0x20) + lVar5)
                                    >> 0x20) / *(float *)(*(long *)(param_1 + 0x1d8) + 0x60)));
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  return;
}


