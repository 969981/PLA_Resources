/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f19b0; name: FUN_007f19b0
 */


void FUN_007f19b0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_18;
  uint local_14;
  
  uVar2 = *(uint *)(param_1 + 9);
  uVar1 = uVar2 * 8 + *(int *)((long)param_1 + 0x4c) * 0x200;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  local_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (uint)(*(ulong *)((long)param_1 + 0x4c) >> 0x17);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  iVar3 = 0x38;
  if (0x37 < uVar2) {
    iVar3 = 0x78;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&DAT_041aaf98,iVar3 - uVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_18,8);
  return;
}


