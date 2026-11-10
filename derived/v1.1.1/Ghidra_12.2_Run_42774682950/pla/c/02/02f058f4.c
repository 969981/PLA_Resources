/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f058f4; name: FUN_02f058f4
 */


undefined8 FUN_02f058f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined8 *)(*DAT_0442d138)(0,0xc0);
  *(undefined8 **)(param_1 + 0x28) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar2;
    *(undefined4 *)(param_1 + 0x30) = 8;
    do {
      puVar1 = puVar2;
      *puVar1 = puVar1 + 3;
      uVar3 = uVar3 + 1;
      puVar2 = puVar1 + 3;
    } while (uVar3 < *(uint *)(param_1 + 0x30));
    *puVar1 = 0;
    puVar2 = (undefined8 *)(*DAT_0442d138)(0,0x100);
    *(undefined8 **)(param_1 + 0x58) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = 0;
      *(undefined8 **)(param_1 + 0x50) = puVar2;
      *(undefined4 *)(param_1 + 0x60) = 8;
      do {
        puVar1 = puVar2;
        *puVar1 = puVar1 + 4;
        uVar3 = uVar3 + 1;
        puVar2 = puVar1 + 4;
      } while (uVar3 < *(uint *)(param_1 + 0x60));
      *puVar1 = 0;
      return 1;
    }
  }
  return 0x34;
}


