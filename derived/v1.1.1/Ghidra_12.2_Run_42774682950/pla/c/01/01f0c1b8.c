/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0c1b8; name: FUN_01f0c1b8
 */


void FUN_01f0c1b8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[0xb] != 0) {
    FUN_01f0b6a4(param_1,param_1[6]);
    lVar1 = param_1[1];
    param_1[6] = 0;
    if (((lVar1 != 0) && (*(undefined8 *)*param_1 = 0, lVar1 != 1)) &&
       (*(undefined8 *)(*param_1 + 8) = 0, lVar1 != 2)) {
      lVar2 = 2;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[0xb] = 0;
  }
  return;
}


