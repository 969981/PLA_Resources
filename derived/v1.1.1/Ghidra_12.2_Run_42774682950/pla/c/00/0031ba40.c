/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031ba40; name: FUN_0031ba40
 */


void FUN_0031ba40(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte local_70 [16];
  undefined8 local_60;
  int local_58;
  
  FUN_0031b380(param_1,param_1 + 0x20,param_1 + 0x40,param_3);
  puVar1 = PTR_LAB_04373088;
  if (param_1 + 0x60 != param_2) {
    lVar6 = 0;
    lVar5 = param_1 + 0x60;
    lVar4 = param_1 + 0x40;
    do {
      lVar3 = lVar5;
      uVar2 = FUN_0031b148(param_3,lVar3,lVar4);
      if ((uVar2 & 1) != 0) {
        local_58 = 0;
        FUN_0031a934(local_70,lVar3);
        lVar5 = lVar6;
        do {
          lVar4 = param_1 + lVar5;
                    /* try { // try from 0031badc to 0031baf7 has its CatchHandler @ 0031bb6c */
          FUN_0031a934(lVar4 + 0x60,lVar4 + 0x40);
          if (lVar5 == -0x40) {
            lVar5 = param_1;
            goto LAB_0031bb10;
          }
          uVar2 = FUN_0031b148(param_3,local_70,lVar4 + 0x20);
          lVar5 = lVar5 + -0x20;
        } while ((uVar2 & 1) != 0);
        lVar5 = param_1 + lVar5 + 0x60;
LAB_0031bb10:
                    /* try { // try from 0031bb10 to 0031bb17 has its CatchHandler @ 0031bb58 */
        FUN_0031a934(lVar5,local_70);
        if ((local_58 == 9) && ((local_70[0] & 1) != 0)) {
          FUN_002e2ea0(puVar1,local_60);
        }
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar3 + 0x20;
      lVar4 = lVar3;
    } while (lVar3 + 0x20 != param_2);
  }
  return;
}


