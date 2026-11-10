/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e498c; name: FUN_006e498c
 */


void FUN_006e498c(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (lVar1 != 0) {
                    /* try { // try from 006e49b8 to 006e49c3 has its CatchHandler @ 006e49f8 */
    FUN_002deb18(lVar1,0);
  }
  *param_1 = lVar1;
  if (*(int *)(lVar1 + 0x1c) != 3) {
                    /* try { // try from 006e49d4 to 006e49db has its CatchHandler @ 006e49f4 */
    FUN_002de8d8(lVar1);
    *(undefined4 *)(lVar1 + 0x1c) = 3;
  }
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  return;
}


