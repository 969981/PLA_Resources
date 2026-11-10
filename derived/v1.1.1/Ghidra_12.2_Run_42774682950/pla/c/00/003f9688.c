/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f9688; name: FUN_003f9688
 */


undefined * FUN_003f9688(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_002ef9f0(&DAT_0439cd7c,PTR_LAB_04374150);
  uVar1 = *(ulong *)(PTR_DAT_04374158 + 8);
  if (*(long *)PTR_DAT_04374158 == 0) {
    uVar1 = *(ulong *)(PTR_DAT_04374158 + 8) & 0xff;
  }
  puVar2 = *(undefined **)(PTR_DAT_04374158 + 0x10);
  if (*(long *)PTR_DAT_04374158 == 0) {
    puVar2 = PTR_DAT_04374158 + 9;
  }
  puVar3 = (undefined *)0x0;
  if (uVar1 != 0) {
    puVar3 = puVar2;
  }
  return puVar3;
}


