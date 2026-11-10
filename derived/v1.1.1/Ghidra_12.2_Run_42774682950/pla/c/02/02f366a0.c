/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f366a0; name: FUN_02f366a0
 */


void FUN_02f366a0(void)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  while (DAT_0442c040 != 0) {
    FUN_02f3869c(DAT_0442c040,0);
  }
  DAT_0442c040 = 0;
  puVar2 = (ulong *)DAT_0442c050;
  while (puVar2 != (ulong *)0x0) {
    puVar3 = (ulong *)*puVar2;
    if ((puVar2 < DAT_0442c058) ||
       (bVar1 = DAT_0442c058 + (ulong)DAT_0442c060 * 0x18 <= puVar2, puVar2 = puVar3, bVar1)) {
      (*DAT_0442d150)(0);
      puVar2 = puVar3;
    }
  }
  if (DAT_0442c058 != 0) {
    (*DAT_0442d150)(0);
    DAT_0442c058 = 0;
  }
  DAT_0442c060 = 0;
  DAT_0442c040 = 0;
  DAT_0442c048 = 0;
  DAT_0442c050 = 0;
  return;
}


