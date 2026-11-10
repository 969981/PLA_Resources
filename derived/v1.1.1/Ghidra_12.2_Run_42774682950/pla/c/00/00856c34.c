/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00856c34; name: FUN_00856c34
 */


void FUN_00856c34(long param_1,uint param_2,ulong param_3)

{
  param_2 = param_2 & 1;
  FUN_008454cc(param_1,param_2);
  if ((param_3 & 1) == 0) {
    FUN_008454cc(param_1 + 0x1910,param_2);
    FUN_008454cc(param_1 + 0x3220,param_2);
  }
  FUN_008454cc(param_1 + 0x4b30,param_2);
  FUN_00856cec(param_1 + 0x6440);
  FUN_008459b0("[Analysis] ------ DispatchCount:%u, SendThreadCount:%u, ReceiveThreadCount:%u ------"
               ,*(undefined4 *)(param_1 + 0x68c4),*(undefined4 *)(param_1 + 0x68c8),
               *(undefined4 *)(param_1 + 0x68cc));
  return;
}


