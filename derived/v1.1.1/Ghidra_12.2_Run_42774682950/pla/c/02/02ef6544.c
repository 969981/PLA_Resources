/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6544; name: FUN_02ef6544
 */


void FUN_02ef6544(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if (((*(ushort *)((long)param_1 + 0xc) & 0x7c) == 4) && (param_1[2] != 0)) {
    (*DAT_0442d150)(0,param_1[2]);
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[1] = param_5;
  param_1[2] = param_3;
  *param_1 = param_4;
  *(ushort *)((long)param_1 + 0xc) = (ushort)((ulong)param_5 >> 0x20) | 0x80;
  return;
}


