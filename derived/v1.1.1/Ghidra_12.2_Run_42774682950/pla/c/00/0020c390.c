/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c390; name: FUN_0020c390
 */


undefined8 FUN_0020c390(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long local_28;
  
  if (param_2 < (ulong)param_1[7]) {
    uVar1 = 0xfffffe0b;
  }
  else {
    uVar1 = FUN_0020c31c(&local_28,param_2,param_1[2]);
    if ((int)uVar1 == 0) {
      FUN_0020c420(param_1);
      *param_1 = local_28;
      param_1[1] = local_28;
      *(long *)(local_28 + 0x18) = *(long *)(local_28 + 0x18) + param_1[7];
      uVar1 = 0;
      *(long *)(param_1[1] + 0x20) = *(long *)(param_1[1] + 0x20) + param_1[7];
      param_1[3] = param_2;
      param_1[5] = 1;
    }
  }
  return uVar1;
}


