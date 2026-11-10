/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e4d20; name: FUN_006e4d20
 */


undefined8 FUN_006e4d20(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x20);
    if (lVar2 != 0) {
                    /* try { // try from 006e4d68 to 006e4d73 has its CatchHandler @ 006e4d94 */
      FUN_002deb18(lVar2,0);
    }
    *param_1 = lVar2;
    iVar1 = *(int *)(lVar2 + 0x1c);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x1c);
  }
  if (iVar1 == 3) {
    return *(undefined8 *)(lVar2 + 0x10);
  }
  return 0;
}


