/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317dfb0; name: FUN_0317dfb0
 */


void FUN_0317dfb0(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x18);
    lVar6 = (long)*(int *)(param_1 + 0x20) << 4;
    uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x180);
    do {
      lVar2 = FUN_0315fddc(param_2,uVar1,*puVar5);
      if (-1 < lVar2) {
        puVar3 = (undefined8 *)(*(long *)(param_3 + 0x38) + (lVar2 >> 0x20) * 0x18);
        if (*(char *)(puVar3 + 2) == '\x01') {
          uVar4 = *puVar3;
        }
        else {
          uVar4 = FUN_03165a00();
        }
        FUN_0317d9e0(puVar5,uVar4);
      }
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  return;
}


