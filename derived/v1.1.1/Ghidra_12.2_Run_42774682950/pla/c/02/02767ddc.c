/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02767ddc; name: FUN_02767ddc
 */


void FUN_02767ddc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == puVar2) {
    puVar1 = puVar2;
  }
  else {
    do {
      puVar1 = puVar1 + -0x1d;
      (**(code **)*puVar1)(puVar1);
    } while (puVar2 != puVar1);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x02767e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar1,param_1[2] - (long)puVar1,8);
  return;
}


