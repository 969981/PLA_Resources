/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007121d0; name: FUN_007121d0
 */


void FUN_007121d0(long param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_0071315c(param_1 + 0x10);
  pbVar1 = *(byte **)(param_1 + 0x28);
  if (pbVar1 != PTR_DAT_043730c0) {
    if ((*pbVar1 & 1) != 0) {
      **(undefined1 **)(pbVar1 + 0x10) = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      uVar2 = *(ulong *)(param_1 + 8);
      goto joined_r0x00712214;
    }
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  uVar2 = *(ulong *)(param_1 + 8);
joined_r0x00712214:
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
  FUN_00712070(param_1,param_2);
  return;
}


