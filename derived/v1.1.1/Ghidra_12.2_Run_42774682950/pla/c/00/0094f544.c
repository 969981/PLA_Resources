/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094f544; name: FUN_0094f544
 */


void FUN_0094f544(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xf8) == 7) {
    uVar2 = *(undefined8 *)(param_1 + 200);
    FUN_0099b190(uVar2);
    FUN_0099b310(uVar2);
    FUN_0099bb44(uVar2);
    lVar1 = *(long *)(*(long *)(param_1 + 0xd0) + 0xe8) << 3;
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0xd0) + 0x68);
      do {
        (**(code **)(*(long *)*puVar3 + 0x30))();
        lVar1 = lVar1 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar1 != 0);
    }
  }
  return;
}


