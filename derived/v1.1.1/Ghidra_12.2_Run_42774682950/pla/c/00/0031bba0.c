/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031bba0; name: FUN_0031bba0
 */


bool FUN_0031bba0(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  byte local_70 [16];
  undefined8 local_60;
  int local_58;
  
  switch(param_2 - param_1 >> 5) {
  case 0:
  case 1:
    break;
  case 2:
    param_2 = param_2 + -0x20;
    uVar2 = FUN_0031b148(param_3,param_2,param_1);
    if ((uVar2 & 1) != 0) {
      local_58 = 0;
      FUN_0031a934(local_70,param_1);
                    /* try { // try from 0031bc18 to 0031bc2f has its CatchHandler @ 0031bdcc */
      FUN_0031a934(param_1,param_2);
      FUN_0031a934(param_2,local_70);
      if ((local_58 == 9) && ((local_70[0] & 1) != 0)) {
        FUN_002e2ea0(PTR_LAB_04373088,local_60);
      }
    }
    break;
  case 3:
    FUN_0031b380(param_1,param_1 + 0x20,param_2 + -0x20,param_3);
    return true;
  case 4:
    FUN_0031b600(param_1,param_1 + 0x20,param_1 + 0x40,param_2 + -0x20,param_3);
    return true;
  case 5:
    FUN_0031b7e0(param_1,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60,param_2 + -0x20,param_3);
    break;
  default:
    FUN_0031b380(param_1,param_1 + 0x20,param_1 + 0x40,param_3);
    puVar1 = PTR_LAB_04373088;
    if (param_1 + 0x60 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      lVar7 = param_1 + 0x60;
      lVar4 = param_1 + 0x40;
      do {
        lVar3 = lVar7;
        uVar2 = FUN_0031b148(param_3,lVar3,lVar4);
        if ((uVar2 & 1) != 0) {
          local_58 = 0;
          FUN_0031a934(local_70,lVar3);
          lVar7 = lVar5;
          do {
            lVar4 = param_1 + lVar7;
                    /* try { // try from 0031bcfc to 0031bd17 has its CatchHandler @ 0031bdf4 */
            FUN_0031a934(lVar4 + 0x60,lVar4 + 0x40);
            if (lVar7 == -0x40) {
              lVar7 = param_1;
              goto LAB_0031bd30;
            }
            uVar2 = FUN_0031b148(param_3,local_70,lVar4 + 0x20);
            lVar7 = lVar7 + -0x20;
          } while ((uVar2 & 1) != 0);
          lVar7 = param_1 + lVar7 + 0x60;
LAB_0031bd30:
                    /* try { // try from 0031bd30 to 0031bd37 has its CatchHandler @ 0031bde0 */
          FUN_0031a934(lVar7,local_70);
          iVar6 = iVar6 + 1;
          if ((local_58 == 9) && ((local_70[0] & 1) != 0)) {
            FUN_002e2ea0(puVar1,local_60);
          }
          if (iVar6 == 8) {
            return lVar3 + 0x20 == param_2;
          }
        }
        lVar5 = lVar5 + 0x20;
        lVar7 = lVar3 + 0x20;
        lVar4 = lVar3;
      } while (lVar3 + 0x20 != param_2);
    }
  }
  return true;
}


