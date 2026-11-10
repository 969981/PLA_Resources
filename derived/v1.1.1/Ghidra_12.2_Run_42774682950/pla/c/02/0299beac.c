/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299beac; name: FUN_0299beac
 */


void FUN_0299beac(uint *param_1,char *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  
  uVar2 = *param_1;
  if (9 < uVar2) {
    return;
  }
  uVar3 = 1 << (ulong)(uVar2 & 0x1f);
  if ((uVar3 & 0x8c) == 0) {
    if ((uVar3 & 0x240) == 0) {
      if (uVar2 != 4) {
        return;
      }
      uVar6 = (ulong)(byte)param_2[6];
      if (5 < uVar6) {
        return;
      }
      cVar4 = (char)param_1[1];
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar7 = param_2;
        uVar8 = uVar6;
        do {
          if (*pcVar7 == cVar4) {
            return;
          }
          uVar8 = uVar8 - 1;
          pcVar7 = pcVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    else {
      uVar6 = (ulong)(byte)param_2[6];
      if (5 < uVar6) {
        return;
      }
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar7 = param_2;
        uVar8 = uVar6;
        do {
          if (*pcVar7 == '\0') goto LAB_0299bfec;
          uVar8 = uVar8 - 1;
          pcVar7 = pcVar7 + 1;
        } while (uVar8 != 0);
      }
      param_2[uVar6] = '\0';
      uVar6 = (ulong)((byte)param_2[6] + 1);
      param_2[6] = (char)((byte)param_2[6] + 1);
LAB_0299bfec:
      if (5 < ((uint)uVar6 & 0xff)) {
        return;
      }
      if ((uVar6 & 0xff) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 & 0xff;
        pcVar7 = param_2;
        uVar8 = uVar6;
        do {
          if (*pcVar7 == '\x01') {
            return;
          }
          uVar8 = uVar8 - 1;
          pcVar7 = pcVar7 + 1;
        } while (uVar8 != 0);
      }
      cVar4 = '\x01';
    }
    param_2[uVar6] = cVar4;
  }
  else {
    uVar1 = 2;
    if ((byte)param_1[1] < 2) {
      uVar1 = (byte)param_1[1] == 0;
    }
    uVar5 = FUN_0294dd9c(0,param_3,uVar1,0);
    cVar4 = FUN_0294e104(0,param_3,uVar5,0);
    uVar6 = (ulong)(byte)param_2[6];
    if (5 < uVar6) {
      return;
    }
    if (param_2[6] == 0) {
      uVar6 = 0;
    }
    else {
      pcVar7 = param_2;
      uVar8 = uVar6;
      do {
        if (*pcVar7 == cVar4) {
          return;
        }
        uVar8 = uVar8 - 1;
        pcVar7 = pcVar7 + 1;
      } while (uVar8 != 0);
    }
    param_2[uVar6] = cVar4;
  }
  param_2[6] = param_2[6] + '\x01';
  return;
}


