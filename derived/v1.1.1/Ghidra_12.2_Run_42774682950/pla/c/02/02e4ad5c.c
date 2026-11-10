/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4ad5c; name: FUN_02e4ad5c
 */


long FUN_02e4ad5c(long *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    lVar7 = 0;
  }
  else {
    iVar5 = 0;
    do {
      iVar1 = iVar5 + (uVar6 >> 1);
      lVar7 = (long)iVar1;
      uVar3 = *(uint *)(*param_1 + (long)iVar1 * 0x18);
      uVar2 = uVar3 & 0xffff;
      uVar3 = uVar3 >> 0x10;
      if (uVar2 == (param_2 & 0xffff) && uVar3 == param_2 >> 0x10) {
        *param_3 = 1;
        goto LAB_02e4add0;
      }
      bVar4 = uVar3 < param_2 >> 0x10;
      if (uVar2 != (param_2 & 0xffff)) {
        bVar4 = uVar2 < (param_2 & 0xffff);
      }
      if (bVar4 != 0) {
        iVar5 = iVar1 + 1;
      }
      uVar6 = uVar6 - bVar4 >> 1;
    } while (uVar6 != 0);
    lVar7 = (long)iVar5;
  }
  *param_3 = 0;
LAB_02e4add0:
  return *param_1 + lVar7 * 0x18;
}


