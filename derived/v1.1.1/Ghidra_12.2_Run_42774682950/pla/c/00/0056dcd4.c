/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056dcd4; name: FUN_0056dcd4
 */


long FUN_0056dcd4(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  char local_3c [4];
  ulong local_38;
  ulong local_30;
  byte *local_28;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if ((*(int *)(lVar6 + 8) == 0) && (*(int *)(lVar6 + 0xc) == 0)) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  lVar2 = *(long *)(lVar6 + 0x60);
  *(undefined8 *)(lVar6 + 0x60) = uVar3;
  if (lVar2 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  *(undefined4 *)(lVar6 + 0x68) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x10) = *(undefined4 *)(param_1 + 0x68);
  FUN_00552d80();
  FUN_00554074(*(undefined8 *)(param_1 + 0x40));
  FUN_00553a78(*(undefined8 *)(param_1 + 0x40));
  if (*(char *)(*(long *)(param_1 + 0x40) + 2) == '\0') {
    local_30 = 0;
    local_28 = (byte *)0x0;
    local_38 = 0;
                    /* try { // try from 0056dd7c to 0056dd8b has its CatchHandler @ 0056de48 */
    uVar1 = FUN_0055fa64(param_2,&local_38,local_3c);
    if (local_3c[0] == '\0' && ((uVar1 ^ 0xffffffff) & 1) == 0) {
      if ((local_38 & 1) == 0) {
        lVar6 = *(long *)(param_1 + 0x40);
        uVar4 = local_38 >> 1 & 0x7f;
        pbVar5 = (byte *)((ulong)&local_38 | 1);
      }
      else {
        lVar6 = *(long *)(param_1 + 0x40);
        uVar4 = local_30;
        pbVar5 = local_28;
      }
      *(ulong *)(lVar6 + 0x18) = uVar4;
      *(uint *)(lVar6 + 0x20) = (uint)*pbVar5;
      *(uint *)(lVar6 + 0x24) = (uint)pbVar5[uVar4 - 1];
    }
    if ((local_38 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_28);
    }
  }
  if (*(long *)(param_1 + 0x70) < 1) {
    lVar6 = *(long *)(param_1 + 0x40);
    uVar4 = 0x100000;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x40);
    lVar2 = 0;
    if (*(long *)(lVar6 + 0x50) != 0) {
      lVar2 = (long)*(int *)(lVar6 + 0x10) * -2;
    }
    uVar4 = (*(long *)(param_1 + 0x70) + (long)*(int *)(lVar6 + 0x10) * -8 + lVar2) - 0x1a8;
    uVar4 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);
  }
  *(ulong *)(lVar6 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return lVar6;
}


