/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011370bc; name: FUN_011370bc
 */


void FUN_011370bc(long param_1,int param_2,uint *param_3,uint *param_4,undefined4 *param_5,
                 undefined4 *param_6,uint *param_7)

{
  if (param_2 - 1U < 6) {
    param_1 = param_1 + (ulong)(param_2 - 1U) * 0x10;
    *param_4 = (uint)*(ushort *)(param_1 + 0x7c);
    *param_3 = (uint)*(byte *)(param_1 + 0x7e);
    *param_5 = *(undefined4 *)(param_1 + 0x80);
    *param_6 = *(undefined4 *)(param_1 + 0x84);
    *param_7 = (uint)*(ushort *)(param_1 + 0x88);
  }
  return;
}


