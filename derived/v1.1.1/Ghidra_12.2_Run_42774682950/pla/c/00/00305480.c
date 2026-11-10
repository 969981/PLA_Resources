/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00305480; name: FUN_00305480
 */


void FUN_00305480(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    do {
      uStack_38 = param_2[1];
      local_40 = *param_2;
      uStack_28 = param_2[3];
      uStack_30 = param_2[2];
      FUN_003052c0(param_1,&local_40);
      param_3 = param_3 + -1;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
  }
  return;
}


