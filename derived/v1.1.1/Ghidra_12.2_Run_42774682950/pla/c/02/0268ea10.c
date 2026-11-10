/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0268ea10; name: FUN_0268ea10
 */


void FUN_0268ea10(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  char local_40 [32];
  
  FUN_01a823b8(local_40);
  if (local_40[0] == '\0') {
    lVar1 = *param_1;
  }
  else {
    local_50 = CONCAT44(local_40._20_4_ + (float)((ulong)*param_2 >> 0x20),
                        local_40._16_4_ + (float)*param_2);
    uStack_48 = CONCAT44(local_40._28_4_ + (float)((ulong)param_2[1] >> 0x20),
                         local_40._24_4_ + (float)param_2[1]);
    lVar1 = *param_1;
    param_2 = &local_50;
  }
  (**(code **)(lVar1 + 0x100))(param_1,param_2);
  return;
}


