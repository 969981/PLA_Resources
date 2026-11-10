/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d8390; name: FUN_004d8390
 */


undefined * FUN_004d8390(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return (undefined *)0x0;
  }
  iVar1 = FUN_0040cc60(PTR_PTR_041814a0,param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_0040cc60(PTR_PTR_041814a8,param_2), iVar1 == 0)) {
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_0040cc60(PTR_PTR_041814b8,param_1);
    if ((iVar1 == 0) && (iVar1 = FUN_0040cc60(PTR_PTR_041814c0,param_2), iVar1 == 0)) {
      lVar2 = 1;
    }
    else {
      iVar1 = FUN_0040cc60(PTR_PTR_041814d0,param_1);
      if ((iVar1 == 0) && (iVar1 = FUN_0040cc60(PTR_PTR_041814d8,param_2), iVar1 == 0)) {
        lVar2 = 2;
      }
      else {
        iVar1 = FUN_0040cc60(PTR_PTR_041814e8,param_1);
        if ((iVar1 == 0) && (iVar1 = FUN_0040cc60(PTR_PTR_041814f0,param_2), iVar1 == 0)) {
          lVar2 = 3;
        }
        else {
          iVar1 = FUN_0040cc60(PTR_PTR_04181500,param_1);
          if ((iVar1 == 0) && (iVar1 = FUN_0040cc60(PTR_PTR_04181508,param_2), iVar1 == 0)) {
            lVar2 = 4;
          }
          else {
            iVar1 = FUN_0040cc60(PTR_PTR_04181518,param_1);
            if ((iVar1 == 0) && (iVar1 = FUN_0040cc60(PTR_PTR_04181520,param_2), iVar1 == 0)) {
              lVar2 = 5;
            }
            else {
              iVar1 = FUN_0040cc60(PTR_PTR_04181530,param_1);
              if (iVar1 != 0) {
                return (undefined *)0x0;
              }
              iVar1 = FUN_0040cc60(PTR_PTR_04181538,param_2);
              if (iVar1 != 0) {
                return (undefined *)0x0;
              }
              lVar2 = 6;
            }
          }
        }
      }
    }
  }
  return (&PTR_DAT_04181498)[lVar2 * 3];
}


