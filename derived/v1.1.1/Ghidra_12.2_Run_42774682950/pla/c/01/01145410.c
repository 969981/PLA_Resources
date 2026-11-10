/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01145410; name: FUN_01145410
 */


void FUN_01145410(void)

{
  byte bVar1;
  
  if (DAT_043ba6a0 == 0) {
    bVar1 = FUN_01145530(0x10003f003a34000,"savedata.bin");
    DAT_043ba6a0 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = FUN_01145530(0x100187003a36000,"savedata.bin");
      DAT_043ba6a0 = bVar1 & 1;
    }
  }
  if (DAT_043ba6a4 == 0) {
    bVar1 = FUN_01145530(0x100abf008968000,&DAT_0395ca85);
    DAT_043ba6a4 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = FUN_01145530(0x1008db008c2c000,&DAT_0395ca85);
      DAT_043ba6a4 = bVar1 & 1;
    }
  }
  if (DAT_043ba6a8 == 0) {
    bVar1 = FUN_01145530(0x100000011d90000,"SaveData.bin");
    DAT_043ba6a8 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = FUN_01145530(0x10018e011d92000,"SaveData.bin");
      DAT_043ba6a8 = bVar1 & 1;
    }
  }
  return;
}


