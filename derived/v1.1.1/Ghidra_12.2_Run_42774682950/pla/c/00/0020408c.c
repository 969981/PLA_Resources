/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020408c; name: FUN_0020408c
 */


undefined1 * FUN_0020408c(void *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = (undefined8 *)PTR_DAT_0411d640;
  if (*(undefined8 **)PTR_PTR_04372758 != &DAT_0411d650) {
    puVar2 = *(undefined8 **)PTR_PTR_04372758;
  }
  if (puVar2 != DAT_0438ec28) {
    DAT_0438ec28 = puVar2;
    if (PTR_DAT_0411d640 == (undefined *)0x0) {
      puVar4 = &DAT_0438ec30;
    }
    else {
      puVar4 = &DAT_0438ec30;
      puVar3 = (undefined8 *)PTR_DAT_0411d640;
      lVar7 = 0;
      do {
        puVar5 = puVar4;
        if (lVar7 != 0) {
          puVar3 = (undefined8 *)(&PTR_DAT_0411d640)[lVar7];
          puVar5 = puVar4 + 1;
          *puVar4 = 0x20;
        }
        puVar6 = puVar5;
        if (puVar2 != puVar3) {
          puVar2 = (undefined8 *)(&PTR_DAT_0411d640)[lVar7];
          puVar6 = puVar5 + 1;
          *puVar5 = 0x28;
        }
        lVar1 = (*(code *)puVar2[6])(puVar6,(long)&DAT_0438ecf8 - (long)puVar6);
        puVar2 = DAT_0438ec28;
        puVar6 = puVar6 + lVar1;
        puVar4 = puVar6;
        if (DAT_0438ec28 != (undefined8 *)(&PTR_DAT_0411d640)[lVar7]) {
          puVar4 = puVar6 + 1;
          *puVar6 = 0x29;
        }
        puVar3 = (undefined8 *)(&DAT_0411d648)[lVar7];
        lVar7 = lVar7 + 1;
      } while (puVar3 != (undefined8 *)0x0);
    }
    *puVar4 = 0;
    DAT_0438ecf8 = puVar4 + -0x438ec30;
  }
  puVar4 = DAT_0438ecf8;
  if (param_2 < DAT_0438ecf8) {
    memcpy(param_1,&DAT_0438ec30,(size_t)(DAT_0438ecf8 + 1));
  }
  else {
    memcpy(param_1,&DAT_0438ec30,(size_t)(param_2 + -1));
    *(undefined1 *)((long)param_1 + (long)(param_2 + -1)) = 0;
  }
  return puVar4;
}


