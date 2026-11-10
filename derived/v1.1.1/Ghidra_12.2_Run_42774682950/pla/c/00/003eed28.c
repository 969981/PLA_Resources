/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eed28; name: FUN_003eed28
 */


void FUN_003eed28(void)

{
  long lVar1;
  
  lVar1 = DAT_0439c468;
  if (DAT_0439c468 == 0) {
    return;
  }
  FUN_003ef144(DAT_0439c468 + 0x20,*(undefined8 *)(DAT_0439c468 + 0x28));
                    /* try { // try from 003eed44 to 003eed4b has its CatchHandler @ 003eed68 */
  FUN_002ef710(lVar1);
  FUN_002e2ea0(PTR_LAB_04373088,lVar1);
  return;
}


