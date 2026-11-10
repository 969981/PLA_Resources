/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f36768; name: FUN_02f36768
 */


undefined8 FUN_02f36768(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar2 = (undefined8 *)(*DAT_0442d138)(0,0x60);
  DAT_0442c058 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    return 0x34;
  }
  DAT_0442c060 = 4;
  DAT_0442c050 = puVar2;
  *puVar2 = puVar2 + 3;
  puVar3 = puVar2;
  if (DAT_0442c060 < 2) goto LAB_02f36804;
  puVar3 = puVar2 + 6;
  puVar2[3] = puVar3;
  puVar1 = puVar2 + 3;
  if (2 < DAT_0442c060) {
    puVar2[6] = puVar2 + 9;
    if (DAT_0442c060 < 4) goto LAB_02f36804;
    puVar2[9] = puVar2 + 0xc;
    puVar1 = puVar2 + 9;
    if (4 < DAT_0442c060) {
      puVar3 = puVar2 + 9;
      uVar4 = 4;
      do {
        puVar2 = puVar3 + 6;
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 3;
        *puVar3 = puVar2;
      } while (uVar4 < DAT_0442c060);
      goto LAB_02f36804;
    }
  }
  puVar3 = puVar1;
LAB_02f36804:
  *puVar3 = 0;
  return 1;
}


