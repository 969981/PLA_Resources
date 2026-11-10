/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040cc60; name: FUN_0040cc60
 */


uint FUN_0040cc60(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
    uVar6 = (uint)(param_2 != (long *)0x0);
    if (param_1 != (long *)0x0) {
      uVar6 = 0xffffffff;
    }
    return uVar6;
  }
  iVar1 = (int)param_1[2];
  uVar6 = 0xffffffff;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  if (iVar1 == (int)param_2[2]) {
    iVar4 = (int)param_1[1];
    lVar7 = (long)iVar4;
    uVar5 = 1;
    if (iVar1 == 0) {
      uVar5 = 0xffffffff;
    }
    if (iVar4 <= (int)param_2[1]) {
      if ((int)param_2[1] <= iVar4) {
        do {
          if (lVar7 < 1) {
            return 0;
          }
          lVar8 = (lVar7 + -1) * 4;
          uVar2 = *(uint *)(*param_1 + lVar8);
          uVar3 = *(uint *)(*param_2 + lVar8);
          if (uVar3 < uVar2) {
            return uVar6;
          }
          lVar7 = lVar7 + -1;
        } while (uVar3 <= uVar2);
      }
      uVar6 = uVar5;
    }
  }
  return uVar6;
}


