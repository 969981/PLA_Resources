/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f13e0; name: FUN_004f13e0
 */


undefined8 FUN_004f13e0(int param_1,byte *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  if ((((-1 < (long)param_3) && (param_1 - 1U < 2)) && (param_2 != (byte *)0x0)) && (param_3 != 0))
  {
    if (param_1 == 2) {
      do {
        if (param_3 < 4) {
          return 0;
        }
        if (param_3 - 4 < 2) {
          return 0;
        }
        if ((param_3 - 4 & 0xfffffffffffffffe) == 2) {
          return 0;
        }
        uVar1 = (ulong)CONCAT11(param_2[6],param_2[7]);
        uVar4 = param_3 - 8;
        param_3 = uVar4 - uVar1;
        if (uVar4 < uVar1) {
          return 0;
        }
        if (param_4 != 0) {
          uVar4 = (ulong)*param_2 << 0x18 | (ulong)param_2[1] << 0x10 | (ulong)param_2[2] << 8 |
                  (ulong)param_2[3];
          if (uVar4 == 0x1d0) {
            uVar3 = FUN_004e3b20(param_4,CONCAT11(param_2[4],param_2[5]),&LAB_004f1980,0,0,
                                 &LAB_004f1a60,0);
            iVar2 = (int)uVar3;
          }
          else {
            uVar3 = FUN_004e3b40(param_4,CONCAT11(param_2[4],param_2[5]),uVar4,&LAB_004f1a80,0,0,
                                 &LAB_004f1b60,0);
            iVar2 = (int)uVar3;
          }
          if (iVar2 == 0) {
            return uVar3;
          }
        }
        param_2 = param_2 + uVar1 + 8;
      } while (param_3 != 0);
    }
    else {
      do {
        if ((param_3 < 2) || ((param_3 & 0xfffffffffffffffe) == 2)) {
          return 0;
        }
        uVar1 = (ulong)CONCAT11(param_2[2],param_2[3]);
        uVar4 = param_3 - 4;
        param_3 = uVar4 - uVar1;
        if (uVar4 < uVar1) {
          return 0;
        }
        if (param_4 != 0) {
          if (param_1 == 1) {
            uVar3 = FUN_004e3b20(param_4,CONCAT11(*param_2,param_2[1]),&LAB_004f1980,0,0,
                                 &LAB_004f1a60,0);
            iVar2 = (int)uVar3;
          }
          else {
            uVar3 = FUN_004e3b40(param_4,CONCAT11(*param_2,param_2[1]),0,&LAB_004f1a80,0,0,
                                 &LAB_004f1b60,0);
            iVar2 = (int)uVar3;
          }
          if (iVar2 == 0) {
            return uVar3;
          }
        }
        param_2 = param_2 + uVar1 + 4;
      } while (param_3 != 0);
    }
    uVar3 = 1;
  }
  return uVar3;
}


