/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f86f0; name: FUN_001f86f0
 */


undefined8 FUN_001f86f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((-1 < *(long *)(param_1 + 4000)) && (*(long *)(param_1 + 0x7e8) != 0)) {
    if (*(long *)(param_1 + 4000) < *(long *)(param_1 + 0x7e0)) {
      if (*(long *)(param_1 + 0x1108) == 0) {
        *(undefined8 *)(param_1 + 0x1108) = param_2;
        *(undefined8 *)(param_1 + 0x1110) = param_3;
      }
      else {
        iVar1 = FUN_001f8fe0(param_2,param_3,*(long *)(param_1 + 0x1108),
                             *(undefined8 *)(param_1 + 0x1110));
        if (*(long *)(param_1 + 0x7e8) * 1000 <= (long)iVar1) {
          FUN_001f3ae0(param_1,
                       "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds"
                       ,*(undefined8 *)(param_1 + 0x7e0));
          return 0x1c;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1108) = 0;
    }
  }
  if (*(long *)(param_1 + 0x7e0) != 0) {
    FUN_001e6b54(param_1,1000,7);
  }
  return 0;
}


