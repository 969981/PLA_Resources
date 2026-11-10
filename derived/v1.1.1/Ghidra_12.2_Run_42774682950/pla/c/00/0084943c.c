/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084943c; name: FUN_0084943c
 */


void FUN_0084943c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = FUN_0081a840(puVar2);
    if (0x51f < uVar1) {
      uVar4 = 0;
      puVar3 = puVar2;
      do {
        (**(code **)*puVar3)(puVar3);
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 0xa4;
      } while (uVar4 < uVar1 / 0x520);
    }
    FUN_0081a800(puVar2);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}


