/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004db720; name: FUN_004db720
 */


undefined8 FUN_004db720(undefined8 param_1,uint param_2,ushort *param_3,long param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_4 != 0) && (param_3 != (ushort *)0x0)) {
    if (param_5 == 0) {
      do {
        if ((uint)*param_3 == (param_2 & 0xffff)) {
          return 1;
        }
        param_4 = param_4 + -1;
        param_3 = param_3 + 1;
      } while (param_4 != 0);
      return 0;
    }
    if ((uint)*param_3 == (param_2 & 0xffff)) goto LAB_004db778;
    do {
      do {
        param_4 = param_4 + -1;
        param_3 = param_3 + 1;
        if (param_4 == 0) {
          return 0;
        }
      } while ((uint)*param_3 != (param_2 & 0xffff));
LAB_004db778:
      iVar1 = FUN_004dc0c0(param_1,param_2,0x20006);
    } while (iVar1 == 0);
    uVar2 = 1;
  }
  return uVar2;
}


