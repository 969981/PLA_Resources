/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012465c0; name: FUN_012465c0
 */


void FUN_012465c0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    if (param_2 == 1) {
      local_30 = puVar1[3];
      uStack_28 = puVar1[4];
      local_20 = puVar1[5];
    }
    else {
      if (param_2 != 0) {
        return;
      }
      local_30 = *puVar1;
      uStack_28 = puVar1[1];
      local_20 = puVar1[2];
    }
    uStack_18 = 0;
    FUN_0283b1e8(*param_1,&local_30);
  }
  return;
}


