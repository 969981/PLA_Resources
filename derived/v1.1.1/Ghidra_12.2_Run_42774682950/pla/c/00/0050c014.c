/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050c014; name: FUN_0050c014
 */


void FUN_0050c014(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_0439ebd0 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x60);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
                    /* try { // try from 0050c050 to 0050c05b has its CatchHandler @ 0050c07c */
      uVar2 = FUN_002ec2d0("dns:///");
      puVar1[0xb] = uVar2;
    }
    DAT_0439ebd0 = puVar1;
  }
  return;
}


