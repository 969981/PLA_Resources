/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a66e0; name: FUN_007a66e0
 */


void FUN_007a66e0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined1 local_60 [8];
  long local_58;
  undefined8 uStack_50;
  long local_48;
  long local_40;
  undefined8 uStack_38;
  
  local_40 = *(long *)(param_1 + 0x20);
  FUN_007b17a0(&local_48,*(undefined8 *)(local_40 + 0x18));
  if (local_48 != 0) {
    do {
      uStack_50 = uStack_38;
      local_58 = local_40;
      FUN_007b1258(&local_48,param_1 + 0x10,local_60);
    } while (local_48 != 0);
  }
  puVar1 = PTR_DAT_043730c0;
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 == PTR_DAT_043730c0) {
LAB_007a6778:
    pbVar3 = *(byte **)(param_1 + 0x30);
  }
  else {
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_007a6778;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x30);
  }
  if (pbVar3 != puVar1) {
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      uVar2 = *(ulong *)(param_1 + 8);
      goto joined_r0x007a6794;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
  }
  uVar2 = *(ulong *)(param_1 + 8);
joined_r0x007a6794:
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) == 0) {
      *(undefined2 *)(uVar2 + 8) = 0;
    }
    else {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
    }
  }
  return;
}


