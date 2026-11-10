/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec1a0; name: FUN_002ec1a0
 */


void FUN_002ec1a0(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined4 local_20;
  uint uStack_1c;
  undefined8 local_18;
  
  if (DAT_04152fc0 <= (long)(ulong)param_3) {
    local_28 = param_1;
    local_20 = param_2;
    uStack_1c = param_3;
    local_18 = param_4;
    (*(code *)PTR_FUN_04152fc8)(&local_28);
  }
  return;
}


