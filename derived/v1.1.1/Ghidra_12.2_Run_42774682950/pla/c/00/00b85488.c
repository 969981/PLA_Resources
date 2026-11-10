/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b85488; name: FUN_00b85488
 */


void FUN_00b85488(long param_1,byte *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  bVar2 = *param_2;
  puVar3 = &DAT_041e7bfc;
  if (bVar2 != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    do {
      param_2 = param_2 + 1;
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *param_2;
    } while (bVar2 != 0);
    puVar1 = &DAT_041e7c04;
    if (puVar4 != (undefined1 *)0x4c70eef446d33b4c) {
      puVar1 = &DAT_041e7bfc;
    }
    puVar3 = &DAT_041e7bfc;
    if (puVar4 != (undefined1 *)0x9a1b9ce665afc7d1) {
      puVar3 = puVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x58) = *puVar3;
  return;
}


