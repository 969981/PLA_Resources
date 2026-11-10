/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008022b0; name: FUN_008022b0
 */


void FUN_008022b0(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)param_1[6];
  *param_1 = (long)(PTR_DAT_043776f8 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = FUN_0081a840(puVar2);
    uVar1 = uVar1 >> 5;
    if (uVar1 != 0) {
      puVar3 = puVar2;
      do {
        (**(code **)*puVar3)(puVar3);
        uVar1 = uVar1 - 1;
        puVar3 = puVar3 + 4;
      } while (uVar1 != 0);
    }
    FUN_0081a800(puVar2);
    param_1[6] = 0;
  }
  *(undefined2 *)(param_1 + 7) = 0;
  return;
}


