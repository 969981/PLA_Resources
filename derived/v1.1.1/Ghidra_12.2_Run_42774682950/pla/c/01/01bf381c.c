/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf381c; name: FUN_01bf381c
 */


void FUN_01bf381c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01bf3878();
  if ((((uVar1 & 1) != 0) && (uVar1 = FUN_01a5badc(param_1,param_1 + 0xe30), (uVar1 & 0xff) != 0))
     && ((uVar1 & 0xffffffff00000000) == 0x200000000)) {
    FUN_01a5bd74(param_1,param_1 + 0xe18,0);
  }
  *(undefined8 *)(param_1 + 0xe60) = 0;
  return;
}


