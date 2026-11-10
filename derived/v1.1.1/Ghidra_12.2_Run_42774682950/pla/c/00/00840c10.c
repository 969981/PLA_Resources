/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00840c10; name: FUN_00840c10
 */


void FUN_00840c10(void)

{
  undefined4 local_30 [4];
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_30);
  if (DAT_043a55c8 == '\x01') {
    if (DAT_043a55c9 == '\x01') {
      FUN_00840cb0(local_30);
      FUN_007ee660(local_20,local_30);
    }
    if (*(long *)PTR_DAT_043773c0 != 0) {
      FUN_008544d8();
    }
    FUN_007e32c8(0xe);
    DAT_043a55c8 = '\0';
    FUN_007ee4d4(local_30,0xe);
    FUN_007ee660(local_20,local_30);
  }
  return;
}


