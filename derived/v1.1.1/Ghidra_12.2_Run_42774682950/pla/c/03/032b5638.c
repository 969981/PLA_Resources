/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5638; name: FUN_032b5638
 */


ulong FUN_032b5638(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  if (((((param_3 == 0xff) && (param_2 == 0xff)) && (param_1 == 0xff)) && (param_5 == 8)) ||
     (((param_4 == 0xff && ((param_2 == 0 && param_1 == 0) && param_3 == 0)) && (param_5 == 8)))) {
    uVar2 = 0x70;
  }
  else {
    uVar2 = 0;
    piVar3 = (int *)((long)&DAT_04440a4d + 7);
    do {
      if (((piVar3[-2] == param_1) && (piVar3[-1] == param_2)) &&
         (((*piVar3 == param_3 &&
           (((piVar3[1] == param_4 && (iVar1 = FUN_032b5430(uVar2 & 0xffffffff), iVar1 == param_5))
            && (piVar3[5] == 3)))) && ((char)piVar3[4] == '\0')))) goto LAB_032b5688;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0xe;
    } while (uVar2 != 0x116);
    uVar2 = 0;
  }
LAB_032b5688:
  return uVar2 & 0xffffffff;
}


