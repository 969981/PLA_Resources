/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00858540; name: FUN_00858540
 */


void FUN_00858540(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar2 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar2[1] != puVar2) {
      puVar1 = (undefined8 *)puVar2[1];
      do {
        puVar4 = (undefined8 *)puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_007e8fc4(puVar2 + 3,puVar2 + 3,(long)*(int *)((long)puVar2 + 0x2c) + (long)puVar1);
        puVar1 = puVar4;
      } while (puVar4 != puVar2);
    }
    FUN_007e8f94(puVar2);
  }
  FUN_00847354(param_1);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_0081a800();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


