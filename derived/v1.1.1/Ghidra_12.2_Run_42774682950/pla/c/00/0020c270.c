/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c270; name: FUN_0020c270
 */


undefined8
FUN_0020c270(long *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,long param_6)

{
  undefined8 uVar1;
  long local_48;
  
  uVar1 = 0xfffffe0b;
  if (((param_4 - 1U < param_3) && (param_5 <= param_2)) &&
     (uVar1 = FUN_0020c31c(&local_48,param_2,param_6), (int)uVar1 == 0)) {
    param_1[7] = param_5;
    *param_1 = local_48;
    param_1[1] = local_48;
    param_1[2] = param_6;
    *(ulong *)(local_48 + 0x18) = *(long *)(local_48 + 0x18) + param_5;
    *(ulong *)(param_1[1] + 0x20) = *(long *)(param_1[1] + 0x20) + param_5;
    param_1[3] = param_2;
    param_1[4] = param_3;
    param_1[5] = 1;
    param_1[6] = param_4;
  }
  return uVar1;
}


