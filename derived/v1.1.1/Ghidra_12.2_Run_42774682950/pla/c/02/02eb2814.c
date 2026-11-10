/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb2814; name: FUN_02eb2814
 */


void FUN_02eb2814(void)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  DAT_0440a458 = 0;
  DAT_0440a460 = 0;
  puVar2 = DAT_0440a470;
  while (puVar2 != (ulong *)0x0) {
    DAT_0440a470 = (ulong *)*puVar2;
    if ((ulong *)DAT_0440a478 == puVar2) {
      DAT_0440a478 = 0;
    }
    if ((puVar2 < DAT_0440a488) || (DAT_0440a488 + (ulong)DAT_0440a490 * 0x18 <= puVar2)) {
      FUN_02f59e60(5);
    }
    else {
      *puVar2 = (ulong)DAT_0440a480;
      DAT_0440a480 = puVar2;
    }
    DAT_0440a494 = DAT_0440a494 + -1;
    puVar2 = DAT_0440a470;
  }
  DAT_0440a470 = (ulong *)0x0;
  puVar2 = DAT_0440a480;
  while (puVar2 != (ulong *)0x0) {
    puVar3 = (ulong *)*puVar2;
    if ((puVar2 < DAT_0440a488) ||
       (bVar1 = DAT_0440a488 + (ulong)DAT_0440a490 * 0x18 <= puVar2, puVar2 = puVar3, bVar1)) {
      FUN_02f59e60(5);
      puVar2 = puVar3;
    }
  }
  if (DAT_0440a488 != 0) {
    FUN_02f59e60(5);
    DAT_0440a488 = 0;
  }
  DAT_0440a490 = 0;
  DAT_0440a470 = (ulong *)0x0;
  DAT_0440a478 = 0;
  DAT_0440a480 = (ulong *)0x0;
  return;
}


