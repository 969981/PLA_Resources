/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a40d58; name: FUN_02a40d58
 */


void FUN_02a40d58(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint local_24;
  
  uVar2 = nn::oe::TryPopNotificationMessage(&local_24);
  if ((uVar2 & 1) != 0) {
    switch(local_24) {
    case 4:
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x70);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x68); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      break;
    case 0xf:
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x50) + 0x70);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x50) + 0x68); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      break;
    case 0x10:
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x58) + 0x70);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x58) + 0x68); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      break;
    case 0x1e:
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x70);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x68); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      break;
    case 0x1f:
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x70);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x68); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
    }
  }
  return;
}


