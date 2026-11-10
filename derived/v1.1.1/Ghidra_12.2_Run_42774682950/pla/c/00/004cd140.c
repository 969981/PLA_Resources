/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cd140; name: FUN_004cd140
 */


void FUN_004cd140(undefined1 *param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  *(undefined1 *)param_2 = *param_1;
  param_2[1] = (ulong)(byte)param_1[1] << 0x10 | (ulong)(byte)param_1[2] << 8 |
               (ulong)(byte)param_1[3];
  *(ushort *)(param_2 + 2) = *(ushort *)(param_1 + 4) >> 8 | *(ushort *)(param_1 + 4) << 8;
  param_2[3] = (ulong)(byte)param_1[6] << 0x10 | (ulong)(byte)param_1[7] << 8 |
               (ulong)(byte)param_1[8];
  param_2[4] = (ulong)(byte)param_1[9] << 0x10 | (ulong)(byte)param_1[10] << 8 |
               (ulong)(byte)param_1[0xb];
  return;
}


