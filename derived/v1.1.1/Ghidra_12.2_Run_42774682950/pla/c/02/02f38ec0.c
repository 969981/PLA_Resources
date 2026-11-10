/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f38ec0; name: FUN_02f38ec0
 */


void FUN_02f38ec0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar1 = *(uint *)(param_1 + 0x138);
  if (uVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x130);
    puVar6 = puVar2;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (*DAT_0442d150)(2,puVar4);
        puVar2 = *(undefined8 **)(param_1 + 0x130);
        uVar1 = *(uint *)(param_1 + 0x138);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar2 + uVar1);
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  lVar3 = *(long *)(param_1 + 0x150);
  lVar5 = lVar3;
  if (*(int *)(param_1 + 0x158) != 0) {
    do {
      (**(code **)(**(long **)(lVar5 + 8) + 0x10))();
      lVar3 = *(long *)(param_1 + 0x150);
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar3 + (ulong)*(uint *)(param_1 + 0x158) * 0x10);
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0x158) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  return;
}


