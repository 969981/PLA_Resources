/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0fa44; name: FUN_02f0fa44
 */


void FUN_02f0fa44(void)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = DAT_0440ad68;
  while (DAT_0440ad68 = puVar3, puVar2 = DAT_0440ad78, puVar3 != (ulong *)0x0) {
    DAT_0440ad68 = (ulong *)*puVar3;
    if (DAT_0440ad70 == puVar3) {
      DAT_0440ad70 = (ulong *)0x0;
    }
    if ((puVar3 < DAT_0440ad80) || (DAT_0440ad80 + (ulong)DAT_0440ad88 * 4 <= puVar3)) {
      (*DAT_0442d150)(0);
    }
    else {
      *puVar3 = (ulong)DAT_0440ad78;
      DAT_0440ad78 = puVar3;
    }
    DAT_0440ad8c = DAT_0440ad8c + -1;
    puVar3 = DAT_0440ad68;
  }
  while (puVar2 != (ulong *)0x0) {
    puVar3 = (ulong *)*puVar2;
    if ((puVar2 < DAT_0440ad80) ||
       (bVar1 = DAT_0440ad80 + (ulong)DAT_0440ad88 * 4 <= puVar2, puVar2 = puVar3, bVar1)) {
      (*DAT_0442d150)(0);
      puVar2 = puVar3;
    }
  }
  if (DAT_0440ad80 != (ulong *)0x0) {
    (*DAT_0442d150)(0);
    DAT_0440ad80 = (ulong *)0x0;
  }
  DAT_0440ad88 = 0;
  DAT_0440ad68 = (ulong *)0x0;
  DAT_0440ad70 = (ulong *)0x0;
  DAT_0440ad78 = (ulong *)0x0;
  return;
}


