/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081e820; name: FUN_0081e820
 */


void FUN_0081e820(long *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04377bb8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  if (param_2 == 0) {
    if (param_3 < 2) {
      if (*(long *)PTR_DAT_04377b08 == 0) {
        return;
      }
      param_2 = FUN_0081eaac(*(long *)PTR_DAT_04377b08,param_1);
      param_1[1] = param_2;
    }
    else {
      if (param_3 != 3) {
        return;
      }
      if (*(long *)PTR_DAT_04377b08 == 0) {
        return;
      }
      param_2 = FUN_0081edbc();
      param_1[1] = param_2;
    }
    if (param_2 == 0) {
      return;
    }
  }
  FUN_0081d980(param_2,param_1);
  return;
}


