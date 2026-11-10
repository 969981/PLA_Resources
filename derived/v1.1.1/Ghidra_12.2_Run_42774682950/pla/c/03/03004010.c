/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03004010; name: FUN_03004010
 */


void FUN_03004010(undefined8 *param_1)

{
  long local_80;
  uint local_78;
  uint local_74;
  uint local_5c;
  
  FUN_030053b4(&local_80,param_1 + 7);
  do {
    if (local_74 == local_5c) {
      return;
    }
    FUN_030040bc(*param_1,local_80 + (ulong)local_74 * 0x38,0xff);
    do {
      local_74 = local_74 + 1;
      if (local_78 <= local_74) {
        local_74 = 0xffffffff;
        break;
      }
    } while (*(int *)(local_80 + (ulong)local_74 * 0x38 + 0x14) == 0x7fffffff);
  } while( true );
}


