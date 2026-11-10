/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02879f70; name: nnMain
 */


void nnMain(void)

{
  long lVar1;
  undefined8 uVar2;
  long local_510;
  undefined1 auStack_508 [24];
  undefined1 auStack_4f0 [56];
  undefined1 auStack_4b8 [40];
  undefined1 auStack_490 [968];
  undefined1 auStack_c8 [152];
  undefined8 local_28;
  
  FUN_02a49894(auStack_c8,0);
  FUN_02a498a4(auStack_c8);
  FUN_0287a034(auStack_490);
  FUN_0287a124(auStack_4b8);
  local_28 = FUN_02bcdda0();
  FUN_0272693c(&local_28);
  uVar2 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x28);
  FUN_0287bd2c(auStack_4f0,&DAT_043ec118);
  FUN_0287a210(&local_510,uVar2,auStack_4f0);
  lVar1 = local_510;
  FUN_028812dc(local_510);
  FUN_027277cc();
  local_510 = 0;
  if (lVar1 != 0) {
    FUN_0287bbf0(auStack_508,lVar1);
  }
  FUN_0287a320(auStack_4b8);
  FUN_0287a454(auStack_490);
  return;
}


