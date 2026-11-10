/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293d120; name: FUN_0293d120
 */


void FUN_0293d120(ulong *param_1,int param_2,uint param_3)

{
  *param_1 = (ulong)(uint)(param_2 << 4) & 0x1f0 | (ulong)((param_3 & 0xff) << 9) |
             *param_1 & 0xfffffffffffe0000 | 4;
  return;
}


