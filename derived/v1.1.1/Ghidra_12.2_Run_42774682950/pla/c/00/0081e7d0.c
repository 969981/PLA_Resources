/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081e7d0; name: FUN_0081e7d0
 */


void FUN_0081e7d0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04377bb8 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  if (*(long *)PTR_DAT_04377b08 != 0) {
    lVar2 = FUN_0081eaac(*(long *)PTR_DAT_04377b08,param_1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_0081d980(lVar2,param_1);
      return;
    }
  }
  return;
}


