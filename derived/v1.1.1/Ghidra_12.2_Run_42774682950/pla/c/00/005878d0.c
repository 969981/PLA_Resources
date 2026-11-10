/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005878d0; name: FUN_005878d0
 */


bool FUN_005878d0(byte *param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  bVar7 = *pbVar5;
  if (bVar7 == 0x3a) {
    return false;
  }
  pbVar10 = pbVar5;
  if (bVar7 == 0) {
LAB_005879a4:
    pbVar4 = pbVar10 + -(long)pbVar5;
    if ((long)pbVar4 < 3) {
LAB_005879b0:
      pbVar10 = (byte *)0x0;
      goto LAB_005879c0;
    }
  }
  else {
    if (bVar7 != 0x3c) {
      uVar6 = 1L << ((ulong)bVar7 & 0x3f);
      if (bVar7 < 0x40) goto LAB_0058798c;
      do {
        do {
          if ((bVar7 < 0x40) && ((uVar6 & 0x3ff000000000001) != 0)) goto LAB_005879a4;
          pbVar10 = pbVar10 + 1;
          bVar7 = *pbVar10;
          if (bVar7 == 0) goto LAB_005879a4;
          uVar6 = 1L << ((ulong)bVar7 & 0x3f);
        } while (0x3f < bVar7);
LAB_0058798c:
      } while ((uVar6 & 0x380000000001) == 0);
      goto LAB_005879a4;
    }
    pbVar4 = pbVar5 + 1;
    do {
      pbVar10 = pbVar4 + 1;
      bVar7 = *pbVar4;
      if (bVar7 == 0) goto LAB_005879b0;
      pbVar4 = pbVar10;
    } while (bVar7 != 0x3e);
    uVar6 = ~(ulong)pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar10 + (uVar6 - 1);
  }
  FUN_00291910(param_2,pbVar5,pbVar4);
LAB_005879c0:
  pbVar5 = (byte *)FUN_00587b00(pbVar10,0,0x18,0xffffffff,param_2 + 0x18);
  bVar1 = false;
  if (pbVar5 != (byte *)0x0) {
    bVar7 = *pbVar5;
    uVar6 = (ulong)bVar7;
    if (bVar7 == 0) {
      return true;
    }
    if (bVar7 == 0x3c) {
      pbVar4 = pbVar5 + 1;
      do {
        pbVar10 = pbVar4 + 1;
        bVar7 = *pbVar4;
        if (bVar7 == 0) {
          return false;
        }
        pbVar4 = pbVar10;
      } while (bVar7 != 0x3e);
      pbVar4 = pbVar10 + (~(ulong)pbVar5 - 1);
      pbVar5 = pbVar5 + 1;
    }
    else {
      uVar9 = 1L << (uVar6 & 0x3f);
      pbVar10 = pbVar5;
      if (bVar7 < 0x40) goto LAB_00587a70;
      do {
        do {
          if (((uint)uVar6 < 0x40) && ((uVar9 & 0x3ff000000000001) != 0)) goto LAB_00587a88;
          pbVar10 = pbVar10 + 1;
          uVar8 = (uint)*pbVar10;
          if (uVar8 == 0) goto LAB_00587a88;
          uVar6 = (ulong)uVar8;
          uVar9 = 1L << ((ulong)*pbVar10 & 0x3f);
        } while (0x3f < uVar8);
LAB_00587a70:
      } while ((uVar9 & 0x380000000001) == 0);
LAB_00587a88:
      pbVar4 = pbVar10 + -(long)pbVar5;
      if ((long)pbVar4 < 3) {
        return false;
      }
    }
    FUN_00291910(param_2 + 0x20,pbVar5,pbVar4);
    *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x18) + 0xe10;
    if (*pbVar10 != 0x2c) {
      pbVar10 = (byte *)FUN_00587b00(pbVar10,0,0x18,0xffffffff);
    }
    uVar2 = FUN_00587db0(pbVar10,param_2 + 0x3c);
    pcVar3 = (char *)FUN_00587db0(uVar2,param_2 + 0x48);
    bVar1 = false;
    if (pcVar3 != (char *)0x0) {
      bVar1 = *pcVar3 == '\0';
    }
  }
  return bVar1;
}


