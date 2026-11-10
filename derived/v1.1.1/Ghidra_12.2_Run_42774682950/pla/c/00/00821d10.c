/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00821d10; name: FUN_00821d10
 */


void FUN_00821d10(long *param_1)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  
  puVar6 = PTR_DAT_04377b50 + 0x10;
  *param_1 = (long)(PTR_DAT_04377c40 + 0x10);
  plVar5 = param_1 + 1;
  *plVar5 = (long)puVar6;
  param_1[2] = (long)param_1 + 0x1c;
  *(undefined4 *)(param_1 + 3) = 0x80;
  FUN_0081f2c0(plVar5);
  *plVar5 = (long)(PTR_DAT_04377b58 + 0x10);
  puVar6 = (undefined *)param_1[2];
  if (puVar6 != &DAT_0390528d) {
    cVar1 = *PTR_DAT_04377b60;
    if (cVar1 == ' ') {
LAB_00821dcc:
      iVar3 = 0;
    }
    else {
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        if (uVar4 == 0x80000) goto LAB_00821dcc;
        uVar2 = uVar4 + 1;
      } while ((&DAT_0390528e)[uVar4] != cVar1);
      iVar3 = 0;
      if (uVar4 >> 0x13 == 0) {
        iVar3 = (int)(uVar4 + 1);
      }
    }
    if ((int)param_1[3] <= iVar3) {
      iVar3 = (int)param_1[3] + -1;
    }
    memcpy(puVar6,&DAT_0390528d,(long)iVar3);
    puVar6[iVar3] = cVar1;
  }
  *plVar5 = (long)(PTR_DAT_04377b68 + 0x10);
  return;
}


