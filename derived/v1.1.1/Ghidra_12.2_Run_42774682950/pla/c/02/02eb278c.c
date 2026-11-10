/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb278c; name: FUN_02eb278c
 */


undefined8 FUN_02eb278c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  DAT_0440a468 = 0;
  DAT_0440a488 = (undefined8 *)(*DAT_0442d138)(5,0x3000);
  if (DAT_0440a488 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar3 = 0;
  DAT_0440a490 = 0x200;
  puVar2 = DAT_0440a488;
  DAT_0440a480 = DAT_0440a488;
  do {
    puVar1 = puVar2;
    *puVar1 = puVar1 + 3;
    uVar3 = uVar3 + 1;
    puVar2 = puVar1 + 3;
  } while (uVar3 < DAT_0440a490);
  *puVar1 = 0;
  return 1;
}


