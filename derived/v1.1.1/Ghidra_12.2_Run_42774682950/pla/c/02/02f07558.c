/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f07558; name: FUN_02f07558
 */


void FUN_02f07558(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char local_14 [4];
  
  puVar1 = (undefined8 *)FUN_02f07b04(param_1,param_2,local_14);
  if ((puVar1 != (undefined8 *)0x0) && (local_14[0] != '\0')) {
    puVar2 = (undefined8 *)((DAT_0440ab10 + (ulong)DAT_0440ab18 * 0x18) - 0x18);
    if (puVar1 < puVar2) {
      do {
        puVar3 = puVar1 + 3;
        puVar1[2] = puVar1[5];
        *puVar1 = *puVar3;
        puVar1[1] = puVar1[4];
        puVar1 = puVar3;
      } while (puVar3 < puVar2);
    }
    DAT_0440ab18 = DAT_0440ab18 - 1;
  }
  return;
}


