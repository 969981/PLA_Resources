/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edef28; name: FUN_02edef28
 */


void FUN_02edef28(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = lVar3 + (ulong)*(uint *)(param_1 + 0x18) * 0x28;
    do {
      puVar1 = *(undefined8 **)(lVar3 + 0x10);
      if (*(uint *)(lVar3 + 0x18) != 0) {
        lVar4 = (ulong)*(uint *)(lVar3 + 0x18) * 0x28;
        do {
          FUN_02ee4658(puVar1);
          puVar1 = puVar1 + 5;
          lVar4 = lVar4 + -0x28;
        } while (lVar4 != 0);
        puVar1 = *(undefined8 **)(lVar3 + 0x10);
      }
      if (puVar1 != (undefined8 *)0x0) {
        if (*(uint *)(lVar3 + 0x18) != 0) {
          lVar4 = (ulong)*(uint *)(lVar3 + 0x18) * 0x28;
          do {
            (**(code **)*puVar1)(puVar1);
            lVar4 = lVar4 + -0x28;
            puVar1 = puVar1 + 5;
          } while (lVar4 != 0);
          puVar1 = *(undefined8 **)(lVar3 + 0x10);
        }
        *(undefined4 *)(lVar3 + 0x18) = 0;
        (*DAT_0442d150)(0,puVar1);
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined4 *)(lVar3 + 0x1c) = 0;
      }
      lVar3 = lVar3 + 0x28;
    } while (lVar3 != lVar2);
  }
  FUN_02ee51e4();
  return;
}


