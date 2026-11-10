/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299c6e8; name: FUN_0299c6e8
 */


void FUN_0299c6e8(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  
  switch(*param_1) {
  case 1:
  case 5:
    cVar3 = FUN_0294e104(2,param_3,*(undefined1 *)(param_1 + 1),1);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299c92c;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299c92c:
    cVar3 = FUN_0294e104(2,param_3,*(undefined1 *)(param_1 + 1),2);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299ca58;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299ca58:
    cVar3 = FUN_0294e104(2,param_3,*(undefined1 *)(param_1 + 1),3);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299cb38;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299cb38:
    cVar3 = FUN_0294e104(2,param_3,*(undefined1 *)(param_1 + 1),4);
    uVar6 = (ulong)(byte)param_2[6];
    if (5 < uVar6) {
      return;
    }
    if (param_2[6] == 0) {
LAB_0299d080:
      uVar6 = 0;
    }
    else {
      pcVar8 = param_2;
      uVar7 = uVar6;
      do {
        if (*pcVar8 == cVar3) {
          return;
        }
        uVar7 = uVar7 - 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar7 != 0);
    }
    break;
  case 2:
  case 7:
    uVar1 = 2;
    if (*(byte *)(param_1 + 1) < 6) {
      uVar1 = *(byte *)(param_1 + 1) == 0;
    }
    uVar4 = FUN_0294dd9c(2,param_3,uVar1,0);
    cVar3 = FUN_0294e104(2,param_3,uVar4,0);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299c988;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299c988:
    uVar1 = 2;
    if (*(byte *)(param_1 + 1) < 6) {
      uVar1 = *(byte *)(param_1 + 1) == 0;
    }
    uVar4 = FUN_0294dd9c(2,param_3,uVar1,0);
    cVar3 = FUN_0294e104(2,param_3,uVar4,1);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299cab4;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299cab4:
    uVar1 = 2;
    if (*(byte *)(param_1 + 1) < 6) {
      uVar1 = *(byte *)(param_1 + 1) == 0;
    }
    uVar4 = FUN_0294dd9c(2,param_3,uVar1,0);
    cVar3 = FUN_0294e104(2,param_3,uVar4,2);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299cb94;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299cb94:
    uVar1 = 2;
    if (*(byte *)(param_1 + 1) < 6) {
      uVar1 = *(byte *)(param_1 + 1) == 0;
    }
    uVar4 = FUN_0294dd9c(2,param_3,uVar1,0);
    cVar3 = FUN_0294e104(2,param_3,uVar4,3);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299cc14;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299cc14:
    uVar1 = 2;
    if (*(byte *)(param_1 + 1) < 6) {
      uVar1 = *(byte *)(param_1 + 1) == 0;
    }
    uVar4 = FUN_0294dd9c(2,param_3,uVar1,0);
    cVar3 = FUN_0294e104(2,param_3,uVar4,4);
    uVar6 = (ulong)(byte)param_2[6];
    if (5 < uVar6) {
      return;
    }
    if (param_2[6] == 0) goto LAB_0299d080;
    pcVar8 = param_2;
    uVar7 = uVar6;
    do {
      if (*pcVar8 == cVar3) {
        return;
      }
      uVar7 = uVar7 - 1;
      pcVar8 = pcVar8 + 1;
    } while (uVar7 != 0);
    break;
  case 3:
    uVar1 = 2;
    if (*(byte *)(param_1 + 1) < 6) {
      uVar1 = *(byte *)(param_1 + 1) == 0;
    }
    uVar4 = FUN_0294dd9c(2,param_3,uVar1,0);
    cVar3 = FUN_0294e104(2,param_3,uVar4,0);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299cc98;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299cc98:
    uVar1 = 2;
    if (*(byte *)(param_1 + 1) < 6) {
      uVar1 = *(byte *)(param_1 + 1) == 0;
    }
    uVar4 = FUN_0294dd9c(2,param_3,uVar1,0);
    cVar3 = FUN_0294e104(2,param_3,uVar4,1);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299cdf8;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299cdf8:
    uVar1 = 2;
    if (*(byte *)(param_1 + 1) < 6) {
      uVar1 = *(byte *)(param_1 + 1) == 0;
    }
    uVar4 = FUN_0294dd9c(2,param_3,uVar1,0);
    cVar3 = FUN_0294e104(2,param_3,uVar4,2);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299ced8;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299ced8:
    uVar1 = 2;
    if (*(byte *)(param_1 + 1) < 6) {
      uVar1 = *(byte *)(param_1 + 1) == 0;
    }
    uVar4 = FUN_0294dd9c(2,param_3,uVar1,0);
    cVar3 = FUN_0294e104(2,param_3,uVar4,3);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299cfb4;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299cfb4:
    uVar1 = 2;
    if (*(byte *)(param_1 + 1) < 6) {
      uVar1 = *(byte *)(param_1 + 1) == 0;
    }
    uVar4 = FUN_0294dd9c(2,param_3,uVar1,0);
    cVar3 = FUN_0294e104(2,param_3,uVar4,4);
    uVar6 = (ulong)(byte)param_2[6];
    if (5 < uVar6) {
      return;
    }
    if (param_2[6] == 0) goto LAB_0299d080;
    pcVar8 = param_2;
    uVar7 = uVar6;
    do {
      if (*pcVar8 == cVar3) {
        return;
      }
      uVar7 = uVar7 - 1;
      pcVar8 = pcVar8 + 1;
    } while (uVar7 != 0);
    break;
  case 4:
    bVar2 = *(byte *)(param_1 + 1);
    uVar5 = (uint)bVar2;
    if (5 < bVar2) {
      return;
    }
    if (bVar2 == 0) {
      uVar6 = (ulong)(byte)param_2[6];
      if (5 < uVar6) {
        return;
      }
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == '\0') {
            return;
          }
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = '\0';
      param_2[6] = param_2[6] + '\x01';
      uVar5 = (uint)*(byte *)(param_1 + 1);
      if (4 < uVar5 - 1) {
        return;
      }
    }
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == '\x01') goto LAB_0299d13c;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = '\x01';
      param_2[6] = param_2[6] + '\x01';
      uVar5 = (uint)*(byte *)(param_1 + 1);
LAB_0299d13c:
      if (4 < uVar5 - 1) {
        return;
      }
      uVar6 = (ulong)(byte)param_2[6];
      if (uVar6 < 6) {
        if (param_2[6] == 0) {
          uVar6 = 0;
        }
        else {
          pcVar8 = param_2;
          uVar7 = uVar6;
          do {
            if (*pcVar8 == '\x02') goto LAB_0299d278;
            uVar7 = uVar7 - 1;
            pcVar8 = pcVar8 + 1;
          } while (uVar7 != 0);
        }
        param_2[uVar6] = '\x02';
        param_2[6] = param_2[6] + '\x01';
        uVar5 = (uint)*(byte *)(param_1 + 1);
LAB_0299d278:
        if (4 < uVar5 - 1) {
          return;
        }
        uVar6 = (ulong)(byte)param_2[6];
        if (uVar6 < 6) {
          if (param_2[6] == 0) {
            uVar6 = 0;
          }
          else {
            pcVar8 = param_2;
            uVar7 = uVar6;
            do {
              if (*pcVar8 == '\x03') goto LAB_0299d2d4;
              uVar7 = uVar7 - 1;
              pcVar8 = pcVar8 + 1;
            } while (uVar7 != 0);
          }
          param_2[uVar6] = '\x03';
          param_2[6] = param_2[6] + '\x01';
          uVar5 = (uint)*(byte *)(param_1 + 1);
LAB_0299d2d4:
          if (4 < uVar5 - 1) {
            return;
          }
          uVar6 = (ulong)(byte)param_2[6];
          if (uVar6 < 6) {
            if (param_2[6] == 0) {
              uVar6 = 0;
            }
            else {
              pcVar8 = param_2;
              uVar7 = uVar6;
              do {
                if (*pcVar8 == '\x04') goto LAB_0299c8a0;
                uVar7 = uVar7 - 1;
                pcVar8 = pcVar8 + 1;
              } while (uVar7 != 0);
            }
            param_2[uVar6] = '\x04';
            param_2[6] = param_2[6] + '\x01';
            uVar5 = (uint)*(byte *)(param_1 + 1);
          }
        }
      }
    }
LAB_0299c8a0:
    if (4 < uVar5 - 1) {
      return;
    }
    uVar6 = (ulong)(byte)param_2[6];
    if (5 < uVar6) {
      return;
    }
    if (param_2[6] == 0) {
LAB_0299d24c:
      uVar6 = 0;
    }
    else {
      pcVar8 = param_2;
      uVar7 = uVar6;
      do {
        if (*pcVar8 == '\x05') {
          return;
        }
        uVar7 = uVar7 - 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar7 != 0);
    }
    goto LAB_0299d250;
  case 6:
  case 9:
    uVar6 = (ulong)(byte)param_2[6];
    if (5 < uVar6) {
      return;
    }
    if (param_2[6] == 0) {
      uVar6 = 0;
    }
    else {
      pcVar8 = param_2;
      uVar7 = uVar6;
      do {
        if (*pcVar8 == '\0') goto LAB_0299ca08;
        uVar7 = uVar7 - 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar7 != 0);
    }
    param_2[uVar6] = '\0';
    uVar6 = (ulong)((byte)param_2[6] + 1);
    param_2[6] = (char)((byte)param_2[6] + 1);
LAB_0299ca08:
    if (5 < ((uint)uVar6 & 0xff)) {
      return;
    }
    if ((uVar6 & 0xff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 & 0xff;
      pcVar8 = param_2;
      uVar9 = uVar7;
      do {
        if (*pcVar8 == '\x01') goto LAB_0299cda8;
        uVar9 = uVar9 - 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar9 != 0);
    }
    param_2[uVar7] = '\x01';
    uVar6 = (ulong)((byte)param_2[6] + 1);
    param_2[6] = (char)((byte)param_2[6] + 1);
LAB_0299cda8:
    if (5 < ((uint)uVar6 & 0xff)) {
      return;
    }
    if ((uVar6 & 0xff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 & 0xff;
      pcVar8 = param_2;
      uVar9 = uVar7;
      do {
        if (*pcVar8 == '\x02') goto LAB_0299d0e4;
        uVar9 = uVar9 - 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar9 != 0);
    }
    param_2[uVar7] = '\x02';
    uVar6 = (ulong)((byte)param_2[6] + 1);
    param_2[6] = (char)((byte)param_2[6] + 1);
LAB_0299d0e4:
    if (5 < ((uint)uVar6 & 0xff)) {
      return;
    }
    if ((uVar6 & 0xff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 & 0xff;
      pcVar8 = param_2;
      uVar9 = uVar7;
      do {
        if (*pcVar8 == '\x03') goto LAB_0299d194;
        uVar9 = uVar9 - 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar9 != 0);
    }
    param_2[uVar7] = '\x03';
    uVar6 = (ulong)((byte)param_2[6] + 1);
    param_2[6] = (char)((byte)param_2[6] + 1);
LAB_0299d194:
    if (5 < ((uint)uVar6 & 0xff)) {
      return;
    }
    if ((uVar6 & 0xff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 & 0xff;
      pcVar8 = param_2;
      uVar9 = uVar7;
      do {
        if (*pcVar8 == '\x04') goto LAB_0299d210;
        uVar9 = uVar9 - 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar9 != 0);
    }
    param_2[uVar7] = '\x04';
    uVar6 = (ulong)((byte)param_2[6] + 1);
    param_2[6] = (char)((byte)param_2[6] + 1);
LAB_0299d210:
    if (5 < ((uint)uVar6 & 0xff)) {
      return;
    }
    if ((uVar6 & 0xff) == 0) goto LAB_0299d24c;
    uVar6 = uVar6 & 0xff;
    pcVar8 = param_2;
    uVar7 = uVar6;
    do {
      if (*pcVar8 == '\x05') {
        return;
      }
      uVar7 = uVar7 - 1;
      pcVar8 = pcVar8 + 1;
    } while (uVar7 != 0);
LAB_0299d250:
    param_2[uVar6] = '\x05';
    goto LAB_0299d088;
  case 8:
    uVar6 = (ulong)(byte)param_2[6];
    cVar3 = *(char *)(param_1 + 1);
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299cd4c;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
      cVar3 = *(char *)(param_1 + 1);
    }
LAB_0299cd4c:
    cVar3 = FUN_0294e104(2,param_3,cVar3,1);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299ce7c;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299ce7c:
    cVar3 = FUN_0294e104(2,param_3,*(undefined1 *)(param_1 + 1),2);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299cf58;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299cf58:
    cVar3 = FUN_0294e104(2,param_3,*(undefined1 *)(param_1 + 1),3);
    uVar6 = (ulong)(byte)param_2[6];
    if (uVar6 < 6) {
      if (param_2[6] == 0) {
        uVar6 = 0;
      }
      else {
        pcVar8 = param_2;
        uVar7 = uVar6;
        do {
          if (*pcVar8 == cVar3) goto LAB_0299d038;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      param_2[uVar6] = cVar3;
      param_2[6] = param_2[6] + '\x01';
    }
LAB_0299d038:
    cVar3 = FUN_0294e104(2,param_3,*(undefined1 *)(param_1 + 1),4);
    uVar6 = (ulong)(byte)param_2[6];
    if (5 < uVar6) {
      return;
    }
    if (param_2[6] == 0) goto LAB_0299d080;
    pcVar8 = param_2;
    uVar7 = uVar6;
    do {
      if (*pcVar8 == cVar3) {
        return;
      }
      uVar7 = uVar7 - 1;
      pcVar8 = pcVar8 + 1;
    } while (uVar7 != 0);
    break;
  default:
    goto switchD_0299c728_default;
  }
  param_2[uVar6] = cVar3;
LAB_0299d088:
  param_2[6] = param_2[6] + '\x01';
switchD_0299c728_default:
  return;
}


