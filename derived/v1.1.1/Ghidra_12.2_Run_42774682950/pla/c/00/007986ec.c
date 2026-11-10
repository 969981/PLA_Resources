/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007986ec; name: FUN_007986ec
 */


void FUN_007986ec(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_1 = (long)(PTR_DAT_04376ea0 + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == puVar2) {
    puVar1 = puVar2;
  }
  else {
    do {
      puVar1 = puVar1 + -0x1d;
      (**(code **)*puVar1)(puVar1);
    } while (puVar2 != puVar1);
    puVar1 = (undefined8 *)param_1[1];
  }
  param_1[2] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x0079876c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],puVar1,param_1[3] - (long)puVar1,8);
  return;
}


