/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef65c8; name: FUN_02ef65c8
 */


void FUN_02ef65c8(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if (((uVar1 & 0x7c) == 4) && (*(long *)(param_1 + 4) != 0)) {
    (*DAT_0442d150)(0,*(long *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
    uVar1 = *(ushort *)(param_1 + 3);
  }
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0xffffffff;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = 0xffffffff;
  *(ushort *)(param_1 + 3) = uVar1 & 0xf800 | 8;
  return;
}


