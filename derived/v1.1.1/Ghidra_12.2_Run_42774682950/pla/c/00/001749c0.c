/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001749c0; name: FUN_001749c0
 */


undefined8 FUN_001749c0(undefined8 param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_38;
  
  lVar2 = FUN_00154910(param_1,1,&local_38);
  lVar3 = FUN_00154b00(param_1,2);
  lVar4 = 1;
  if (lVar3 < 0) {
    lVar4 = local_38 + 1;
  }
  lVar4 = FUN_00154b90(param_1,3,lVar4);
  if (lVar4 < 0) {
    lVar6 = 0;
    if ((ulong)-lVar4 <= local_38) {
      lVar5 = lVar4 + local_38;
      lVar6 = lVar5 + 1;
      if (0 < lVar6) goto LAB_00174a28;
    }
LAB_00174ac4:
    FUN_00154010(param_1,3,"position out of range");
    if (lVar3 != 0) goto LAB_00174a38;
joined_r0x00174ae0:
    for (; (0 < lVar6 && ((*(byte *)(lVar2 + lVar6) & 0xc0) == 0x80)); lVar6 = lVar6 + -1) {
    }
LAB_00174b60:
    FUN_001514d0(param_1,lVar6 + 1);
  }
  else {
    lVar5 = lVar4 + -1;
    lVar6 = lVar4;
    if (lVar4 < 1) goto LAB_00174ac4;
LAB_00174a28:
    lVar6 = lVar5;
    if ((long)local_38 < lVar5) goto LAB_00174ac4;
    if (lVar3 == 0) goto joined_r0x00174ae0;
LAB_00174a38:
    if ((*(byte *)(lVar2 + lVar6) & 0xc0) == 0x80) {
      FUN_00154110(param_1,"initial position is a continuation byte");
    }
    if (lVar3 < 0) {
      if (0 < lVar6) {
        do {
          lVar4 = lVar6;
          do {
            lVar6 = lVar4 + -1;
            if (lVar6 < 1) {
              lVar6 = 0;
              lVar3 = lVar3 + 1;
              goto LAB_00174b50;
            }
            pbVar1 = (byte *)(lVar2 + -1 + lVar4);
            lVar4 = lVar6;
          } while ((*pbVar1 & 0xc0) == 0x80);
          lVar3 = lVar3 + 1;
        } while ((lVar3 < 0) && (0 < lVar6));
        goto LAB_00174b50;
      }
    }
    else {
      lVar3 = lVar3 + -1;
      if ((0 < lVar3) && (lVar6 < (long)local_38)) {
        do {
          do {
            pbVar1 = (byte *)(lVar2 + 1 + lVar6);
            lVar6 = lVar6 + 1;
          } while ((*pbVar1 & 0xc0) == 0x80);
          lVar3 = lVar3 + -1;
        } while ((0 < lVar3) && (lVar6 < (long)local_38));
      }
LAB_00174b50:
      if (lVar3 == 0) goto LAB_00174b60;
    }
    FUN_00151490(param_1);
  }
  return 1;
}


