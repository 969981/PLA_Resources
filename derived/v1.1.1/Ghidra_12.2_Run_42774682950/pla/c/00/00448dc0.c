/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00448dc0; name: FUN_00448dc0
 */


ulong FUN_00448dc0(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *local_30;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = local_28;
  if (((param_2 == (undefined4 *)0x0) || (uVar1 = param_2[1], 0x1e < uVar1)) ||
     ((0x2a23efffU >> ((long)(int)uVar1 & 0x3fU) & 1) != 0)) {
    return 0xffffffff;
  }
  local_28[0] = 0;
  local_20 = 0;
  uStack_18 = 0;
  uVar2 = FUN_00449310(&local_30,*(undefined8 *)(param_2 + 2),*param_2,
                       (int)(char)(&DAT_03a0be60)[(int)uVar1] | 0x1000,0x2000);
  if (-1 < (int)uVar2) {
    *param_1 = local_20;
    uVar2 = (ulong)local_28[0];
  }
  return uVar2;
}


