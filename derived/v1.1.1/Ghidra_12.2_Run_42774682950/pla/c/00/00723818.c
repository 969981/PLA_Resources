/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00723818; name: FUN_00723818
 */


void FUN_00723818(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  
  puVar1 = PTR_DAT_043730c0;
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (pbVar3 == PTR_DAT_043730c0) {
LAB_00723838:
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 == puVar1) goto LAB_00723888;
LAB_00723844:
    if ((*pbVar3 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      goto LAB_00723888;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3 = *(byte **)(param_1 + 0x20);
  }
  else {
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_00723838;
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
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 != puVar1) goto LAB_00723844;
LAB_00723888:
    pbVar3 = *(byte **)(param_1 + 0x20);
  }
  if (pbVar3 != puVar1) {
    if ((*pbVar3 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      uVar2 = *(ulong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto joined_r0x007238c4;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
joined_r0x007238c4:
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar2 = uVar2 & 0xfffffffffffffffe;
  if ((*(byte *)(uVar2 + 8) & 1) == 0) {
    *(undefined2 *)(uVar2 + 8) = 0;
    return;
  }
  **(undefined1 **)(uVar2 + 0x18) = 0;
  *(undefined8 *)(uVar2 + 0x10) = 0;
  return;
}


