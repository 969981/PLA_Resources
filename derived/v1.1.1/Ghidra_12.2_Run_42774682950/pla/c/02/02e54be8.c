/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e54be8; name: FUN_02e54be8
 */


void FUN_02e54be8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x360) != 0) {
    FUN_02e55648(*(long *)(param_1 + 0x360),param_1,0);
    FUN_02e4c274(param_1 + 0x2d8);
    FUN_02e4c274(param_1 + 0x250);
    FUN_02e4c274(param_1 + 0x1c8);
    FUN_02e4c274(param_1 + 0x140);
    FUN_02e478e4(param_1 + 0xc0);
  }
  if (*(long *)(param_1 + 0x610) != 0) {
    FUN_02e55648(*(long *)(param_1 + 0x610),param_1,1);
    FUN_02e4c274(param_1 + 0x588);
    FUN_02e4c274(param_1 + 0x500);
    FUN_02e4c274(param_1 + 0x478);
    FUN_02e4c274(param_1 + 0x3f0);
    FUN_02e478e4(param_1 + 0x370);
  }
  if (*(uint *)(param_1 + 0x628) != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 0x628) * 0x50;
    puVar2 = *(undefined8 **)(param_1 + 0x620);
    do {
      (**(code **)*puVar2)(puVar2);
      lVar1 = lVar1 + -0x50;
      puVar2 = puVar2 + 10;
    } while (lVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(undefined8 *)(param_1 + 0x650) = 0;
  if (*(uint *)(param_1 + 0x660) != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 0x660) * 0x50;
    puVar2 = *(undefined8 **)(param_1 + 0x658);
    do {
      (**(code **)*puVar2)(puVar2);
      lVar1 = lVar1 + -0x50;
      puVar2 = puVar2 + 10;
    } while (lVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x660) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  return;
}


