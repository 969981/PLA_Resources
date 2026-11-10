/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f07cbc; name: FUN_02f07cbc
 */


void FUN_02f07cbc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  char local_14 [4];
  
  puVar1 = (undefined8 *)FUN_02f082e8(param_1,local_14);
  if ((puVar1 != (undefined8 *)0x0) && (local_14[0] != '\0')) {
    puVar3 = (undefined8 *)(DAT_0440ab40 + (ulong)DAT_0440ab48 * 0x10 + -0x10);
    if (puVar1 < puVar3) {
      uVar4 = (DAT_0440ab40 + (ulong)DAT_0440ab48 * 0x10 + ~(ulong)puVar1) - 0x10;
      puVar2 = puVar1;
      if (((uint)uVar4 >> 4 & 1) == 0) {
        puVar2 = puVar1 + 2;
        *puVar1 = *puVar2;
        puVar1[1] = puVar1[3];
      }
      if (0xf < uVar4) {
        do {
          *puVar2 = puVar2[2];
          puVar2[1] = puVar2[3];
          puVar1 = puVar2 + 4;
          puVar2[2] = *puVar1;
          puVar2[3] = puVar2[5];
          puVar2 = puVar1;
        } while (puVar1 < puVar3);
      }
    }
    DAT_0440ab48 = DAT_0440ab48 - 1;
  }
  return;
}


