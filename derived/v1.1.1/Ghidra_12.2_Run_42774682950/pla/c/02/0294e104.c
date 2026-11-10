/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294e104; name: FUN_0294e104
 */


ulong FUN_0294e104(int param_1,int param_2,ulong param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulong uVar10;
  char cVar11;
  
  uVar10 = param_3 & 0xffffffff;
  uVar9 = (uint)param_3;
  if (param_1 == 2) {
    if (5 < (uVar9 & 0xff)) goto LAB_0294e1c4;
    puVar5 = &DAT_03a7ebc8;
LAB_0294e168:
    uVar3 = *(uint *)(puVar5 + (param_3 & 0xff) * 4);
    puVar6 = &DAT_03a7ebe0;
LAB_0294e1d4:
    cVar11 = puVar6[uVar3];
  }
  else {
    if (param_1 == 1) {
      if ((uVar9 & 0xff) < 6) {
        if ((param_2 - 1U & 0xff) < 5) {
          puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
        }
        else {
          puVar8 = &DAT_03a7eb68;
        }
        uVar3 = puVar8[param_3 & 0xff];
        if ((int)uVar3 < 5) {
          puVar6 = &DAT_03a7ebe5;
          goto LAB_0294e1d4;
        }
      }
    }
    else if ((param_1 == 0) && ((uVar9 & 0xff) < 2)) {
      puVar5 = &DAT_03a7eb50;
      goto LAB_0294e168;
    }
LAB_0294e1c4:
    cVar11 = '\x02';
  }
  uVar3 = FUN_0294e9bc(param_1,param_2,cVar11);
  if (uVar3 == 0) {
    return uVar10;
  }
  param_4 = param_4 & 0xff;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = param_4 / uVar3;
  }
  uVar9 = uVar9 & 0xff;
  uVar2 = uVar2 * uVar3;
  iVar1 = param_4 - uVar2;
  uVar4 = (ulong)(uVar9 % 6);
  if (param_1 == 2) {
    puVar8 = (undefined4 *)&DAT_03a7ebc8;
LAB_0294e3fc:
    if (puVar8[uVar4] == 5) {
LAB_0294e40c:
      iVar7 = 0;
    }
    else {
      if (param_1 == 2) {
        uVar3 = *(uint *)(&DAT_03a7ebc8 + uVar4 * 4);
        puVar6 = &DAT_03a7ebe0;
LAB_0294e540:
        if (puVar6[uVar3] == cVar11) goto LAB_0294e54c;
        goto LAB_0294e40c;
      }
      if (param_1 == 1) {
        if ((param_2 - 1U & 0xff) < 5) {
          puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
        }
        else {
          puVar8 = &DAT_03a7eb68;
        }
        uVar3 = puVar8[uVar4];
        if ((int)uVar3 < 5) {
          puVar6 = &DAT_03a7ebe5;
          goto LAB_0294e540;
        }
      }
      if (cVar11 != '\x02') goto LAB_0294e40c;
LAB_0294e54c:
      if (param_4 == uVar2) {
        return uVar4;
      }
      iVar7 = 1;
    }
    if (param_1 == 1) {
      if ((param_2 - 1U & 0xff) < 5) {
        puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
      }
      else {
        puVar8 = &DAT_03a7eb68;
      }
LAB_0294e490:
      uVar4 = (ulong)((uVar9 + 1) % 6);
      if (puVar8[uVar4] != 5) {
        if (param_1 == 2) {
          uVar3 = *(uint *)(&DAT_03a7ebc8 + uVar4 * 4);
          puVar6 = &DAT_03a7ebe0;
LAB_0294e588:
          if (puVar6[uVar3] == cVar11) goto LAB_0294e594;
        }
        else {
          if (param_1 == 1) {
            if ((param_2 - 1U & 0xff) < 5) {
              puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
            }
            else {
              puVar8 = &DAT_03a7eb68;
            }
            uVar3 = puVar8[uVar4];
            if ((int)uVar3 < 5) {
              puVar6 = &DAT_03a7ebe5;
              goto LAB_0294e588;
            }
          }
          if (cVar11 == '\x02') {
LAB_0294e594:
            if (iVar7 == iVar1) {
              return uVar4;
            }
            iVar7 = iVar7 + 1;
          }
        }
      }
    }
    else {
      puVar8 = (undefined4 *)&DAT_03a7ebc8;
      if (param_1 == 2) goto LAB_0294e490;
    }
    if (param_1 == 2) {
      puVar8 = (undefined4 *)&DAT_03a7ebc8;
LAB_0294e5ec:
      uVar4 = (ulong)((uVar9 + 2) % 6);
      if (puVar8[uVar4] != 5) {
        if (param_1 == 2) {
          uVar3 = *(uint *)(&DAT_03a7ebc8 + uVar4 * 4);
          puVar6 = &DAT_03a7ebe0;
LAB_0294e7f8:
          if (puVar6[uVar3] == cVar11) goto LAB_0294e804;
        }
        else {
          if (param_1 == 1) {
            if ((param_2 - 1U & 0xff) < 5) {
              puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
            }
            else {
              puVar8 = &DAT_03a7eb68;
            }
            uVar3 = puVar8[uVar4];
            if ((int)uVar3 < 5) {
              puVar6 = &DAT_03a7ebe5;
              goto LAB_0294e7f8;
            }
          }
          if (cVar11 == '\x02') {
LAB_0294e804:
            if (iVar7 == iVar1) {
              return uVar4;
            }
            iVar7 = iVar7 + 1;
          }
        }
      }
    }
    else if (param_1 == 1) {
      if ((param_2 - 1U & 0xff) < 5) {
        puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
      }
      else {
        puVar8 = &DAT_03a7eb68;
      }
      goto LAB_0294e5ec;
    }
    if (param_1 == 2) {
      puVar8 = (undefined4 *)&DAT_03a7ebc8;
LAB_0294e690:
      uVar4 = (ulong)((uVar9 + 3) % 6);
      if (puVar8[uVar4] != 5) {
        if (param_1 == 2) {
          uVar3 = *(uint *)(&DAT_03a7ebc8 + uVar4 * 4);
          puVar6 = &DAT_03a7ebe0;
LAB_0294e844:
          if (puVar6[uVar3] == cVar11) goto LAB_0294e850;
        }
        else {
          if (param_1 == 1) {
            if ((param_2 - 1U & 0xff) < 5) {
              puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
            }
            else {
              puVar8 = &DAT_03a7eb68;
            }
            uVar3 = puVar8[uVar4];
            if ((int)uVar3 < 5) {
              puVar6 = &DAT_03a7ebe5;
              goto LAB_0294e844;
            }
          }
          if (cVar11 == '\x02') {
LAB_0294e850:
            if (iVar7 == iVar1) {
              return uVar4;
            }
            iVar7 = iVar7 + 1;
          }
        }
      }
    }
    else if (param_1 == 1) {
      if ((param_2 - 1U & 0xff) < 5) {
        puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
      }
      else {
        puVar8 = &DAT_03a7eb68;
      }
      goto LAB_0294e690;
    }
    if (param_1 == 2) {
      puVar8 = (undefined4 *)&DAT_03a7ebc8;
LAB_0294e734:
      uVar4 = (ulong)((uVar9 + 4) % 6);
      if (puVar8[uVar4] != 5) {
        if (param_1 == 2) {
          uVar3 = *(uint *)(&DAT_03a7ebc8 + uVar4 * 4);
          puVar6 = &DAT_03a7ebe0;
LAB_0294e890:
          if (puVar6[uVar3] == cVar11) goto LAB_0294e89c;
        }
        else {
          if (param_1 == 1) {
            if ((param_2 - 1U & 0xff) < 5) {
              puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
            }
            else {
              puVar8 = &DAT_03a7eb68;
            }
            uVar3 = puVar8[uVar4];
            if ((int)uVar3 < 5) {
              puVar6 = &DAT_03a7ebe5;
              goto LAB_0294e890;
            }
          }
          if (cVar11 == '\x02') {
LAB_0294e89c:
            if (iVar7 == iVar1) {
              return uVar4;
            }
            iVar7 = iVar7 + 1;
          }
        }
      }
    }
    else if (param_1 == 1) {
      if ((param_2 - 1U & 0xff) < 5) {
        puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
      }
      else {
        puVar8 = &DAT_03a7eb68;
      }
      goto LAB_0294e734;
    }
    if (param_1 == 2) {
      puVar8 = (undefined4 *)&DAT_03a7ebc8;
    }
    else {
      if (param_1 != 1) {
        return uVar10;
      }
      if ((param_2 - 1U & 0xff) < 5) {
        puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
      }
      else {
        puVar8 = &DAT_03a7eb68;
      }
    }
    uVar4 = (ulong)((uVar9 + 5) % 6);
    if (puVar8[uVar4] == 5) {
      return uVar10;
    }
    if (param_1 == 2) {
      uVar9 = *(uint *)(&DAT_03a7ebc8 + uVar4 * 4);
      goto LAB_0294e954;
    }
    if (param_1 != 1) {
LAB_0294e984:
      if (cVar11 != '\x02') {
        return uVar10;
      }
      goto LAB_0294e990;
    }
    if ((param_2 - 1U & 0xff) < 5) {
      puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
    }
    else {
      puVar8 = &DAT_03a7eb68;
    }
    uVar9 = puVar8[uVar4];
    if (4 < (int)uVar9) goto LAB_0294e984;
    puVar6 = &DAT_03a7ebe5;
  }
  else {
    if (param_1 == 1) {
      if ((param_2 - 1U & 0xff) < 5) {
        puVar8 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
      }
      else {
        puVar8 = &DAT_03a7eb68;
      }
      goto LAB_0294e3fc;
    }
    if (param_1 != 0) goto LAB_0294e40c;
    if ((uVar9 % 6 < 2) && ((&DAT_03a7ebe0)[*(uint *)(&DAT_03a7eb50 + uVar4 * 4)] == cVar11)) {
      if (param_4 == uVar2) {
        return uVar4;
      }
      iVar7 = 1;
    }
    else {
      iVar7 = 0;
    }
    uVar3 = (uVar9 + 1) % 6;
    if ((uVar3 < 2) && ((&DAT_03a7ebe0)[*(uint *)(&DAT_03a7eb50 + (ulong)uVar3 * 4)] == cVar11)) {
      if (iVar7 == iVar1) {
        return (ulong)uVar3;
      }
      iVar7 = iVar7 + 1;
    }
    uVar3 = (uVar9 + 2) % 6;
    if ((uVar3 < 2) && ((&DAT_03a7ebe0)[*(uint *)(&DAT_03a7eb50 + (ulong)uVar3 * 4)] == cVar11)) {
      if (iVar7 == iVar1) {
        return (ulong)uVar3;
      }
      iVar7 = iVar7 + 1;
    }
    uVar3 = (uVar9 + 3) % 6;
    if ((uVar3 < 2) && ((&DAT_03a7ebe0)[*(uint *)(&DAT_03a7eb50 + (ulong)uVar3 * 4)] == cVar11)) {
      if (iVar7 == iVar1) {
        return (ulong)uVar3;
      }
      iVar7 = iVar7 + 1;
    }
    uVar3 = (uVar9 + 4) % 6;
    if ((uVar3 < 2) && ((&DAT_03a7ebe0)[*(uint *)(&DAT_03a7eb50 + (ulong)uVar3 * 4)] == cVar11)) {
      if (iVar7 == iVar1) {
        return (ulong)uVar3;
      }
      iVar7 = iVar7 + 1;
    }
    uVar9 = (uVar9 + 5) % 6;
    uVar4 = (ulong)uVar9;
    if (1 < uVar9) {
      return uVar10;
    }
    uVar9 = *(uint *)(&DAT_03a7eb50 + uVar4 * 4);
LAB_0294e954:
    puVar6 = &DAT_03a7ebe0;
  }
  if (puVar6[uVar9] != cVar11) {
    return uVar10;
  }
LAB_0294e990:
  if (iVar7 == iVar1) {
    return uVar4;
  }
  return uVar10;
}


