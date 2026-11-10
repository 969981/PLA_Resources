/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00119c60; name: FUN_00119c60
 */


long FUN_00119c60(uint param_1,long *param_2,uint *param_3,uint *param_4,long *param_5,long param_6,
                 long param_7,long param_8)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  code *pcVar7;
  uint *puVar8;
  ulong uVar9;
  
  if (5 < param_1) {
    return -1;
  }
  if ((char)*param_3 < '\0') {
    if (param_3 + 1 <= param_4) {
      puVar8 = (uint *)((long)param_3 + 3);
      uVar2 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
      uVar9 = (ulong)((uVar2 >> 0x10 | uVar2 << 0x10) >> 8 & 0x3ff);
      if (param_4 < (uint *)((long)puVar8 + uVar9)) {
        return -1;
      }
      lVar1 = uVar9 + ((uVar2 & 0xffff) >> 2 & 0x3ff) + 1;
      if (param_6 < lVar1) {
        return -1;
      }
      lVar3 = *param_2;
      goto joined_r0x00119d24;
    }
    FUN_0010a430();
    pcVar7 = *(code **)PTR_PTR_043722f8;
    if (pcVar7 == (code *)0x0) goto LAB_00119e48;
    pcVar5 = "OODLE ERROR : corruption : from_ptr+4 <= from_end\n";
    uVar4 = 0x3bf;
  }
  else {
    puVar8 = (uint *)((long)param_3 + 5);
    if (puVar8 <= param_4) {
      uVar2 = (*(uint *)((long)param_3 + 1) & 0xff00ff00) >> 8 |
              (*(uint *)((long)param_3 + 1) & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar9 = (ulong)uVar2 & 0x3ffff;
      if (param_4 < (uint *)((long)puVar8 + uVar9)) {
        return -1;
      }
      uVar6 = (ulong)(CONCAT14((char)*param_3,uVar2) >> 0x12) & 0x3ffff;
      if (param_6 <= (long)uVar6) {
        return -1;
      }
      if (uVar6 < uVar9) {
        return -1;
      }
      lVar1 = uVar6 + 1;
      lVar3 = *param_2;
joined_r0x00119d24:
      if (lVar3 == param_7) {
        if (param_8 - param_7 < lVar1) {
          return -1;
        }
        param_7 = param_7 + lVar1;
      }
      if (param_1 == 1) {
        uVar6 = FUN_0011d130(puVar8,uVar9,lVar3,lVar1,param_7,param_8);
      }
      else if (param_1 == 3) {
        uVar6 = FUN_00119e70(puVar8,uVar9,lVar3,lVar1,param_7,param_8);
      }
      else if (param_1 == 5) {
        uVar6 = FUN_00120860(puVar8,uVar9,lVar3,lVar1,param_7,param_8);
      }
      else {
        uVar6 = FUN_0011a6e0(puVar8,uVar9,lVar3,lVar1,param_1 == 4);
      }
      if (uVar9 == uVar6) {
        *param_5 = lVar1;
        return (long)puVar8 + (uVar9 - (long)param_3);
      }
      return -1;
    }
    FUN_0010a430();
    pcVar7 = *(code **)PTR_PTR_043722f8;
    if (pcVar7 == (code *)0x0) goto LAB_00119e48;
    pcVar5 = "OODLE ERROR : corruption : from_ptr+5 <= from_end\n";
    uVar4 = 0x3df;
  }
  (*pcVar7)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.cpp",uVar4,pcVar5);
LAB_00119e48:
  FUN_0010a450();
  return -1;
}


