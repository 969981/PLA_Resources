/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef63b4; name: FUN_02ef63b4
 */


void FUN_02ef63b4(undefined8 *param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)((long)param_1 + 0xc);
  if (((uVar1 & 0x7c) == 4) && (param_1[2] != 0)) {
    (*DAT_0442d150)(0);
    param_1[2] = 0;
    uVar1 = *(ushort *)((long)param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff00000000;
  param_1[2] = 0;
  *(ushort *)((long)param_1 + 0xc) = uVar1 & 0xf800;
  return;
}


