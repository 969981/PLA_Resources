/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293d0c0; name: FUN_0293d0c0
 */


void FUN_0293d0c0(ulong *param_1,int param_2,ulong param_3,ulong param_4,uint param_5)

{
  *param_1 = (param_3 & 0xffff) << 0x11 |
             (ulong)(uint)(param_2 << 4) & 0x1f0 | (param_4 & 0xff) << 9 |
             (ulong)(param_5 & 0xff) << 0x21 | 2;
  return;
}


