/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03306530; name: FUN_03306530
 */


undefined8 * FUN_03306530(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *local_38 [2];
  ulong local_28;
  
  uVar1 = FUN_033064e4(*param_1);
  if ((uVar1 & 1) == 0) {
    if (*param_2 == 0) {
      FUN_032db604(local_38,*param_1);
    }
    else {
      FUN_032db67c(local_38,param_2,param_2[1]);
    }
    if ((local_28 & 1) != 0) {
      FUN_032e0c40(local_28 & 0xfffffffffffffffe);
    }
    if (local_38[0] != (undefined8 *)0x0) {
      param_1[2] = local_38[0];
      param_1[3] = 1;
      *(undefined1 *)(param_1 + 1) = 2;
    }
  }
  else {
    local_38[0] = param_1 + 2;
    *local_38[0] = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[3] = 0;
  }
  return local_38[0];
}


