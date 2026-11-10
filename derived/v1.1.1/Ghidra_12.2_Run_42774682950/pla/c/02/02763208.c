/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02763208; name: FUN_02763208
 */


void FUN_02763208(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 == lVar4) {
    lVar5 = param_2[1];
  }
  else {
    lVar5 = param_2[1];
    lVar6 = 0;
    do {
      lVar1 = lVar2 + lVar6;
      *(undefined ***)(lVar5 + -0xf0) = &PTR_LAB_0426b978;
      *(undefined ***)(lVar5 + -0xe8) = &PTR_FUN_0426b958;
      FUN_02762fb0(lVar5 + -0xe0,lVar1 + -0xe0);
      FUN_02762fb0(lVar5 + -0xc0,lVar1 + -0xc0);
      FUN_02763008(lVar5 + -0xa0,lVar1 + -0xa0);
      uVar3 = *(undefined8 *)(lVar1 + -0x78);
      *(undefined8 *)(lVar5 + -0x80) = *(undefined8 *)(lVar1 + -0x80);
      *(undefined8 *)(lVar5 + -0x78) = uVar3;
      FUN_02762fb0(lVar5 + -0x70,lVar1 + -0x70);
      FUN_027630b8(lVar5 + -0x50,lVar1 + -0x50);
      FUN_02762fb0(lVar5 + -0x30,lVar1 + -0x30);
      uVar3 = *(undefined8 *)(lVar1 + -8);
      lVar6 = lVar6 + -0xf0;
      *(undefined8 *)(lVar5 + -0x10) = *(undefined8 *)(lVar1 + -0x10);
      *(undefined8 *)(lVar5 + -8) = uVar3;
      lVar5 = param_2[1] + -0xf0;
      param_2[1] = lVar5;
    } while (lVar4 - lVar2 != lVar6);
    lVar4 = *param_1;
  }
  *param_1 = lVar5;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}


