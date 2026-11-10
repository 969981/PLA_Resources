/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00870630; name: FUN_00870630
 */


void FUN_00870630(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(long *)(param_1 + 0x6f0) != 0) {
    uVar1 = FUN_007e5f0c();
    while ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x6f0);
      *(undefined1 *)(lVar2 + 0x48) = 1;
      FUN_007ec500(lVar2,10);
      uVar1 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0x6f0));
    }
    puVar3 = *(undefined8 **)(param_1 + 0x6f0);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_0081a800(puVar3);
      *(undefined8 *)(param_1 + 0x6f0) = 0;
    }
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x6e8);
  if (lVar2 != 0) {
    FUN_007eb6e8(lVar2);
    FUN_0081a800(lVar2);
    *(undefined8 *)(param_1 + 0x6e8) = 0;
  }
  return;
}


