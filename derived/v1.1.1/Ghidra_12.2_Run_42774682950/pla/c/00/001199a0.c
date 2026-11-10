/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001199a0; name: FUN_001199a0
 */


long FUN_001199a0(uint *param_1,uint *param_2,ulong *param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 < (uint *)((long)param_1 + 2U)) {
    FUN_0010a430();
    pcVar6 = *(code **)PTR_PTR_043722f8;
    if (pcVar6 == (code *)0x0) goto LAB_00119bf0;
    pcVar4 = "OODLE ERROR : corruption : from_ptr+2 <= from_end\n";
    uVar3 = 0x31c;
  }
  else {
    bVar2 = (byte)*param_1;
    if ((char)bVar2 < '\0') {
      bVar2 = bVar2 >> 4 & 7;
      if (bVar2 == 0) {
        uVar8 = (ulong)(ushort)((ushort)*param_1 >> 8) | ((ulong)(ushort)*param_1 & 0xf) << 8;
        if (param_4 < (long)uVar8) {
          return -1;
        }
        puVar5 = (uint *)((long)((long)param_1 + 2U) + uVar8);
        if (param_2 < puVar5) {
          return -1;
        }
        goto LAB_00119bac;
      }
      if (param_1 + 1 <= param_2) {
        if (5 < bVar2) {
          return -1;
        }
        uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
        uVar8 = (ulong)((uVar1 >> 0x10 | uVar1 << 0x10) >> 8 & 0x3ff);
        puVar5 = (uint *)((long)param_1 + uVar8 + 3);
        if (param_2 < puVar5) {
          return -1;
        }
        uVar8 = uVar8 + ((uVar1 & 0xffff) >> 2 & 0x3ff) + 1;
        if (param_4 < (long)uVar8) {
          return -1;
        }
        goto LAB_00119b4c;
      }
      FUN_0010a430();
      pcVar6 = *(code **)PTR_PTR_043722f8;
      if (pcVar6 == (code *)0x0) goto LAB_00119bf0;
      pcVar4 = "OODLE ERROR : corruption : from_ptr+4 <= from_end\n";
      uVar3 = 0x339;
    }
    else {
      if (param_1 + 1 <= param_2) {
        if (((uint)(int)(char)bVar2 >> 4 & 0xf) == 0) {
          uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
          if ((uVar1 & 0xffff) >> 10 != 0) {
            return -1;
          }
          uVar8 = (ulong)((uVar1 >> 0x10 | uVar1 << 0x10) >> 8 & 0x3ffff);
          if (param_4 < (long)uVar8) {
            return -1;
          }
          puVar5 = (uint *)((long)param_1 + uVar8 + 3);
          if (param_2 < puVar5) {
            return -1;
          }
LAB_00119b4c:
          *param_3 = uVar8;
          return (long)puVar5 - (long)param_1;
        }
        if (0x5f < bVar2) {
          return -1;
        }
        if (param_2 < (uint *)((long)param_1 + 5U)) {
          return -1;
        }
        uVar1 = (*(uint *)((long)param_1 + 1) & 0xff00ff00) >> 8 |
                (*(uint *)((long)param_1 + 1) & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar7 = (ulong)uVar1 & 0x3ffff;
        puVar5 = (uint *)((long)((long)param_1 + 5U) + uVar7);
        if (param_2 < puVar5) {
          return -1;
        }
        uVar8 = (ulong)(CONCAT14(bVar2,uVar1) >> 0x12) & 0x3ffff;
        if (param_4 <= (long)uVar8) {
          return -1;
        }
        if (uVar8 < uVar7) {
          return -1;
        }
        uVar8 = uVar8 + 1;
LAB_00119bac:
        *param_3 = uVar8;
        return (long)puVar5 - (long)param_1;
      }
      if ((uint *)((long)param_1 + 3) != param_2) {
        return -1;
      }
      if ((bVar2 == 0 && *(char *)((long)param_1 + 1) == '\0') &&
          *(char *)((long)param_1 + 2) == '\0') {
        *param_3 = 0;
        return 3;
      }
      FUN_0010a430();
      pcVar6 = *(code **)PTR_PTR_043722f8;
      if (pcVar6 == (code *)0x0) goto LAB_00119bf0;
      pcVar4 = "OODLE ERROR : corruption : header == 0\n";
      uVar3 = 0x367;
    }
  }
  (*pcVar6)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.cpp",uVar3,pcVar4);
LAB_00119bf0:
  FUN_0010a450();
  return -1;
}


