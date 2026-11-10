/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d300; name: FUN_0040d300
 */


void FUN_0040d300(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(uint *)((long)param_1 + 0x14) =
       *(uint *)((long)param_1 + 0x14) & 1 | param_3 | *(uint *)((long)param_2 + 0x14) & 0xfffffffc
       | 2;
  return;
}


