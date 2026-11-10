/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4499c; name: FUN_02e4499c
 */


void FUN_02e4499c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    (*DAT_0442d158)(9);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x40);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
    (*DAT_0442d158)(9);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar2 == (undefined8 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  else {
    if (*(uint *)(param_1 + 0x48) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 0x48) * 0x50;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar4 != 0);
      puVar2 = *(undefined8 **)(param_1 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    (*DAT_0442d158)(0xb,puVar2);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x58);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          (*DAT_0442d150)(0xb);
        } while (plVar3 != (long *)0x0);
        lVar4 = *(long *)(param_1 + 0x58);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x60));
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    (*DAT_0442d150)(0xb);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}


