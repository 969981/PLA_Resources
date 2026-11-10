/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a10b8; name: FUN_032a10b8
 */


void FUN_032a10b8(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x150);
  if (0 < (int)*(uint *)(param_1 + 0x150)) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x148) + lVar3);
      if (*(char *)(puVar1 + 2) != '\0') {
        (**(code **)(*(long *)*puVar1 + 0x70))((long *)*puVar1,puVar1[1]);
        *(undefined1 *)(puVar1 + 2) = 0;
      }
      if (puVar1[1] != 0) {
        FUN_032cf640(puVar1[1],0x310);
        puVar1[1] = 0;
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar2 != 0);
  }
  return;
}


