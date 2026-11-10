/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02953894; name: FUN_02953894
 */


void FUN_02953894(char *param_1,long param_2,byte param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  
  bVar1 = param_1[(ulong)param_3 + (ulong)param_3 * 2 + 2];
  uVar4 = (ulong)bVar1;
  if (uVar4 == 0x1f) {
    return;
  }
  if (*param_1 != '\0') {
    bVar2 = param_1[2];
    uVar6 = (ulong)bVar2;
    if ((uVar6 != 0x1f) && (bVar2 != bVar1)) {
      uVar3 = *(uint *)(param_2 + 0x110);
      if (bVar2 < 6) {
        lVar7 = 0;
joined_r0x02953924:
        if (uVar3 < 3) goto LAB_02953928;
LAB_029538e8:
        cVar5 = '\x02';
        if (bVar1 < 6) goto LAB_029538f4;
LAB_02953940:
        if (bVar1 < 0xc) {
          lVar7 = 2;
          goto joined_r0x02953950;
        }
        if (bVar1 < 0x12) {
          lVar7 = 1;
        }
        else {
          if (bVar1 < 0x18) {
            lVar7 = 3;
            goto joined_r0x02953950;
          }
          lVar7 = (ulong)(bVar1 < 0x1e) << 2;
        }
        if (2 < uVar3) goto LAB_02953954;
LAB_02953900:
        if (cVar5 == (&PTR_DAT_04276a30)[(int)uVar3][lVar7]) goto LAB_02953a54;
      }
      else {
        if (bVar2 < 0xc) {
          lVar7 = 2;
          goto joined_r0x02953924;
        }
        if (bVar2 < 0x12) {
          lVar7 = 1;
        }
        else {
          if (0x17 < bVar2) {
            lVar7 = (ulong)(bVar2 < 0x1e) << 2;
            goto joined_r0x02953924;
          }
          lVar7 = 3;
        }
        if (2 < uVar3) goto LAB_029538e8;
LAB_02953928:
        cVar5 = (&PTR_DAT_04276a30)[(int)uVar3][lVar7];
        if (5 < bVar1) goto LAB_02953940;
LAB_029538f4:
        lVar7 = 0;
joined_r0x02953950:
        if (uVar3 < 3) goto LAB_02953900;
LAB_02953954:
        if (cVar5 == '\x02') goto LAB_02953a54;
      }
      lVar7 = *(long *)(param_4 + uVar6 * 8 + 0x120);
      bVar2 = *(byte *)(lVar7 + 0x26d);
      uVar8 = (ulong)bVar2;
      if (uVar8 == 0) {
        cVar5 = '\x01';
LAB_029539f4:
        *(byte *)(lVar7 + uVar8 + 0x26e) = bVar1;
        *(char *)(lVar7 + 0x26d) = cVar5;
        uVar6 = (ulong)(byte)param_1[2];
      }
      else {
        pbVar9 = (byte *)(lVar7 + 0x26e);
        uVar10 = uVar8;
        do {
          if (*pbVar9 == bVar1) goto LAB_02953a04;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (bVar2 < 0x1e) {
          cVar5 = bVar2 + 1;
          goto LAB_029539f4;
        }
      }
LAB_02953a04:
      lVar7 = *(long *)(param_4 + uVar4 * 8 + 0x120);
      bVar2 = *(byte *)(lVar7 + 0x26d);
      uVar8 = (ulong)bVar2;
      if (uVar8 == 0) {
        cVar5 = '\x01';
      }
      else {
        pbVar9 = (byte *)(lVar7 + 0x26e);
        uVar10 = uVar8;
        do {
          if ((uint)*pbVar9 == (uint)uVar6) goto LAB_02953a54;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (0x1d < bVar2) goto LAB_02953a54;
        cVar5 = bVar2 + 1;
      }
      *(char *)(lVar7 + uVar8 + 0x26e) = (char)uVar6;
      *(char *)(lVar7 + 0x26d) = cVar5;
    }
  }
LAB_02953a54:
  if (param_1[3] != '\0') {
    bVar2 = param_1[5];
    uVar6 = (ulong)bVar2;
    if ((uVar6 != 0x1f) && (bVar2 != bVar1)) {
      uVar3 = *(uint *)(param_2 + 0x110);
      if (bVar2 < 6) {
        lVar7 = 0;
joined_r0x02953acc:
        if (uVar3 < 3) goto LAB_02953ad0;
LAB_02953a90:
        cVar5 = '\x02';
        if (bVar1 < 6) goto LAB_02953a9c;
LAB_02953ae8:
        if (bVar1 < 0xc) {
          lVar7 = 2;
          goto joined_r0x02953aa4;
        }
        if (bVar1 < 0x12) {
          lVar7 = 1;
        }
        else {
          if (bVar1 < 0x18) {
            lVar7 = 3;
            goto joined_r0x02953aa4;
          }
          lVar7 = (ulong)(bVar1 < 0x1e) << 2;
        }
        if (2 < uVar3) goto LAB_02953afc;
LAB_02953aa8:
        if (cVar5 == (&PTR_DAT_04276a30)[(int)uVar3][lVar7]) goto LAB_02953bfc;
      }
      else {
        if (bVar2 < 0xc) {
          lVar7 = 2;
          goto joined_r0x02953acc;
        }
        if (bVar2 < 0x12) {
          lVar7 = 1;
        }
        else {
          if (0x17 < bVar2) {
            lVar7 = (ulong)(bVar2 < 0x1e) << 2;
            goto joined_r0x02953acc;
          }
          lVar7 = 3;
        }
        if (2 < uVar3) goto LAB_02953a90;
LAB_02953ad0:
        cVar5 = (&PTR_DAT_04276a30)[(int)uVar3][lVar7];
        if (5 < bVar1) goto LAB_02953ae8;
LAB_02953a9c:
        lVar7 = 0;
joined_r0x02953aa4:
        if (uVar3 < 3) goto LAB_02953aa8;
LAB_02953afc:
        if (cVar5 == '\x02') goto LAB_02953bfc;
      }
      lVar7 = *(long *)(param_4 + uVar6 * 8 + 0x120);
      bVar2 = *(byte *)(lVar7 + 0x26d);
      uVar8 = (ulong)bVar2;
      if (uVar8 == 0) {
        cVar5 = '\x01';
LAB_02953b9c:
        *(byte *)(lVar7 + uVar8 + 0x26e) = bVar1;
        *(char *)(lVar7 + 0x26d) = cVar5;
        uVar6 = (ulong)(byte)param_1[5];
      }
      else {
        pbVar9 = (byte *)(lVar7 + 0x26e);
        uVar10 = uVar8;
        do {
          if (*pbVar9 == bVar1) goto LAB_02953bac;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (bVar2 < 0x1e) {
          cVar5 = bVar2 + 1;
          goto LAB_02953b9c;
        }
      }
LAB_02953bac:
      lVar7 = *(long *)(param_4 + uVar4 * 8 + 0x120);
      bVar2 = *(byte *)(lVar7 + 0x26d);
      uVar8 = (ulong)bVar2;
      if (uVar8 == 0) {
        cVar5 = '\x01';
      }
      else {
        pbVar9 = (byte *)(lVar7 + 0x26e);
        uVar10 = uVar8;
        do {
          if ((uint)*pbVar9 == (uint)uVar6) goto LAB_02953bfc;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (0x1d < bVar2) goto LAB_02953bfc;
        cVar5 = bVar2 + 1;
      }
      *(char *)(lVar7 + uVar8 + 0x26e) = (char)uVar6;
      *(char *)(lVar7 + 0x26d) = cVar5;
    }
  }
LAB_02953bfc:
  if (param_1[6] != '\0') {
    bVar2 = param_1[8];
    uVar6 = (ulong)bVar2;
    if ((uVar6 != 0x1f) && (bVar2 != bVar1)) {
      uVar3 = *(uint *)(param_2 + 0x110);
      if (bVar2 < 6) {
        lVar7 = 0;
joined_r0x02953c74:
        if (uVar3 < 3) goto LAB_02953c78;
LAB_02953c38:
        cVar5 = '\x02';
        if (bVar1 < 6) goto LAB_02953c44;
LAB_02953c90:
        if (bVar1 < 0xc) {
          lVar7 = 2;
          goto joined_r0x02953c4c;
        }
        if (bVar1 < 0x12) {
          lVar7 = 1;
        }
        else {
          if (bVar1 < 0x18) {
            lVar7 = 3;
            goto joined_r0x02953c4c;
          }
          lVar7 = (ulong)(bVar1 < 0x1e) << 2;
        }
        if (2 < uVar3) goto LAB_02953ca4;
LAB_02953c50:
        if (cVar5 == (&PTR_DAT_04276a30)[(int)uVar3][lVar7]) goto LAB_02953da4;
      }
      else {
        if (bVar2 < 0xc) {
          lVar7 = 2;
          goto joined_r0x02953c74;
        }
        if (bVar2 < 0x12) {
          lVar7 = 1;
        }
        else {
          if (0x17 < bVar2) {
            lVar7 = (ulong)(bVar2 < 0x1e) << 2;
            goto joined_r0x02953c74;
          }
          lVar7 = 3;
        }
        if (2 < uVar3) goto LAB_02953c38;
LAB_02953c78:
        cVar5 = (&PTR_DAT_04276a30)[(int)uVar3][lVar7];
        if (5 < bVar1) goto LAB_02953c90;
LAB_02953c44:
        lVar7 = 0;
joined_r0x02953c4c:
        if (uVar3 < 3) goto LAB_02953c50;
LAB_02953ca4:
        if (cVar5 == '\x02') goto LAB_02953da4;
      }
      lVar7 = *(long *)(param_4 + uVar6 * 8 + 0x120);
      bVar2 = *(byte *)(lVar7 + 0x26d);
      uVar8 = (ulong)bVar2;
      if (uVar8 == 0) {
        cVar5 = '\x01';
LAB_02953d44:
        *(byte *)(lVar7 + uVar8 + 0x26e) = bVar1;
        *(char *)(lVar7 + 0x26d) = cVar5;
        uVar6 = (ulong)(byte)param_1[8];
      }
      else {
        pbVar9 = (byte *)(lVar7 + 0x26e);
        uVar10 = uVar8;
        do {
          if (*pbVar9 == bVar1) goto LAB_02953d54;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (bVar2 < 0x1e) {
          cVar5 = bVar2 + 1;
          goto LAB_02953d44;
        }
      }
LAB_02953d54:
      lVar7 = *(long *)(param_4 + uVar4 * 8 + 0x120);
      bVar2 = *(byte *)(lVar7 + 0x26d);
      uVar8 = (ulong)bVar2;
      if (uVar8 == 0) {
        cVar5 = '\x01';
      }
      else {
        pbVar9 = (byte *)(lVar7 + 0x26e);
        uVar10 = uVar8;
        do {
          if ((uint)*pbVar9 == (uint)uVar6) goto LAB_02953da4;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (0x1d < bVar2) goto LAB_02953da4;
        cVar5 = bVar2 + 1;
      }
      *(char *)(lVar7 + uVar8 + 0x26e) = (char)uVar6;
      *(char *)(lVar7 + 0x26d) = cVar5;
    }
  }
LAB_02953da4:
  if (param_1[9] != '\0') {
    bVar2 = param_1[0xb];
    uVar6 = (ulong)bVar2;
    if ((uVar6 != 0x1f) && (bVar2 != bVar1)) {
      uVar3 = *(uint *)(param_2 + 0x110);
      if (bVar2 < 6) {
        lVar7 = 0;
joined_r0x02953e1c:
        if (uVar3 < 3) goto LAB_02953e20;
LAB_02953de0:
        cVar5 = '\x02';
        if (bVar1 < 6) goto LAB_02953dec;
LAB_02953e38:
        if (bVar1 < 0xc) {
          lVar7 = 2;
          goto joined_r0x02953df4;
        }
        if (bVar1 < 0x12) {
          lVar7 = 1;
        }
        else {
          if (bVar1 < 0x18) {
            lVar7 = 3;
            goto joined_r0x02953df4;
          }
          lVar7 = (ulong)(bVar1 < 0x1e) << 2;
        }
        if (2 < uVar3) goto LAB_02953e4c;
LAB_02953df8:
        if (cVar5 == (&PTR_DAT_04276a30)[(int)uVar3][lVar7]) goto LAB_02953f4c;
      }
      else {
        if (bVar2 < 0xc) {
          lVar7 = 2;
          goto joined_r0x02953e1c;
        }
        if (bVar2 < 0x12) {
          lVar7 = 1;
        }
        else {
          if (0x17 < bVar2) {
            lVar7 = (ulong)(bVar2 < 0x1e) << 2;
            goto joined_r0x02953e1c;
          }
          lVar7 = 3;
        }
        if (2 < uVar3) goto LAB_02953de0;
LAB_02953e20:
        cVar5 = (&PTR_DAT_04276a30)[(int)uVar3][lVar7];
        if (5 < bVar1) goto LAB_02953e38;
LAB_02953dec:
        lVar7 = 0;
joined_r0x02953df4:
        if (uVar3 < 3) goto LAB_02953df8;
LAB_02953e4c:
        if (cVar5 == '\x02') goto LAB_02953f4c;
      }
      lVar7 = *(long *)(param_4 + uVar6 * 8 + 0x120);
      bVar2 = *(byte *)(lVar7 + 0x26d);
      uVar8 = (ulong)bVar2;
      if (uVar8 == 0) {
        cVar5 = '\x01';
LAB_02953eec:
        *(byte *)(lVar7 + uVar8 + 0x26e) = bVar1;
        *(char *)(lVar7 + 0x26d) = cVar5;
        uVar6 = (ulong)(byte)param_1[0xb];
      }
      else {
        pbVar9 = (byte *)(lVar7 + 0x26e);
        uVar10 = uVar8;
        do {
          if (*pbVar9 == bVar1) goto LAB_02953efc;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (bVar2 < 0x1e) {
          cVar5 = bVar2 + 1;
          goto LAB_02953eec;
        }
      }
LAB_02953efc:
      lVar7 = *(long *)(param_4 + uVar4 * 8 + 0x120);
      bVar2 = *(byte *)(lVar7 + 0x26d);
      uVar8 = (ulong)bVar2;
      if (uVar8 == 0) {
        cVar5 = '\x01';
      }
      else {
        pbVar9 = (byte *)(lVar7 + 0x26e);
        uVar10 = uVar8;
        do {
          if ((uint)*pbVar9 == (uint)uVar6) goto LAB_02953f4c;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (0x1d < bVar2) goto LAB_02953f4c;
        cVar5 = bVar2 + 1;
      }
      *(char *)(lVar7 + uVar8 + 0x26e) = (char)uVar6;
      *(char *)(lVar7 + 0x26d) = cVar5;
    }
  }
LAB_02953f4c:
  if (param_1[0xc] != '\0') {
    bVar2 = param_1[0xe];
    uVar6 = (ulong)bVar2;
    if ((uVar6 != 0x1f) && (bVar2 != bVar1)) {
      uVar3 = *(uint *)(param_2 + 0x110);
      if (bVar2 < 6) {
        lVar7 = 0;
joined_r0x02953fc4:
        if (uVar3 < 3) goto LAB_02953fc8;
LAB_02953f88:
        cVar5 = '\x02';
        if (bVar1 < 6) goto LAB_02953f94;
LAB_02953fe0:
        if (bVar1 < 0xc) {
          lVar7 = 2;
          goto joined_r0x02953f9c;
        }
        if (bVar1 < 0x12) {
          lVar7 = 1;
        }
        else {
          if (bVar1 < 0x18) {
            lVar7 = 3;
            goto joined_r0x02953f9c;
          }
          lVar7 = (ulong)(bVar1 < 0x1e) << 2;
        }
        if (2 < uVar3) goto LAB_02953ff4;
LAB_02953fa0:
        if (cVar5 == (&PTR_DAT_04276a30)[(int)uVar3][lVar7]) goto LAB_029540f4;
      }
      else {
        if (bVar2 < 0xc) {
          lVar7 = 2;
          goto joined_r0x02953fc4;
        }
        if (bVar2 < 0x12) {
          lVar7 = 1;
        }
        else {
          if (0x17 < bVar2) {
            lVar7 = (ulong)(bVar2 < 0x1e) << 2;
            goto joined_r0x02953fc4;
          }
          lVar7 = 3;
        }
        if (2 < uVar3) goto LAB_02953f88;
LAB_02953fc8:
        cVar5 = (&PTR_DAT_04276a30)[(int)uVar3][lVar7];
        if (5 < bVar1) goto LAB_02953fe0;
LAB_02953f94:
        lVar7 = 0;
joined_r0x02953f9c:
        if (uVar3 < 3) goto LAB_02953fa0;
LAB_02953ff4:
        if (cVar5 == '\x02') goto LAB_029540f4;
      }
      lVar7 = *(long *)(param_4 + uVar6 * 8 + 0x120);
      bVar2 = *(byte *)(lVar7 + 0x26d);
      uVar8 = (ulong)bVar2;
      if (uVar8 == 0) {
        cVar5 = '\x01';
LAB_02954094:
        *(byte *)(lVar7 + uVar8 + 0x26e) = bVar1;
        *(char *)(lVar7 + 0x26d) = cVar5;
        uVar6 = (ulong)(byte)param_1[0xe];
      }
      else {
        pbVar9 = (byte *)(lVar7 + 0x26e);
        uVar10 = uVar8;
        do {
          if (*pbVar9 == bVar1) goto LAB_029540a4;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (bVar2 < 0x1e) {
          cVar5 = bVar2 + 1;
          goto LAB_02954094;
        }
      }
LAB_029540a4:
      lVar7 = *(long *)(param_4 + uVar4 * 8 + 0x120);
      bVar2 = *(byte *)(lVar7 + 0x26d);
      uVar8 = (ulong)bVar2;
      if (uVar8 == 0) {
        cVar5 = '\x01';
      }
      else {
        pbVar9 = (byte *)(lVar7 + 0x26e);
        uVar10 = uVar8;
        do {
          if ((uint)*pbVar9 == (uint)uVar6) goto LAB_029540f4;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (0x1d < bVar2) goto LAB_029540f4;
        cVar5 = bVar2 + 1;
      }
      *(char *)(lVar7 + uVar8 + 0x26e) = (char)uVar6;
      *(char *)(lVar7 + 0x26d) = cVar5;
    }
  }
LAB_029540f4:
  if (param_1[0xf] == '\0') {
    return;
  }
  bVar2 = param_1[0x11];
  uVar6 = (ulong)bVar2;
  if (uVar6 == 0x1f) {
    return;
  }
  if (bVar2 == bVar1) {
    return;
  }
  uVar3 = *(uint *)(param_2 + 0x110);
  if (bVar2 < 6) {
    lVar7 = 0;
joined_r0x0295416c:
    if (uVar3 < 3) goto LAB_02954170;
LAB_02954130:
    cVar5 = '\x02';
    if (bVar1 < 6) goto LAB_0295413c;
LAB_02954188:
    if (bVar1 < 0xc) {
      lVar7 = 2;
      goto joined_r0x02954144;
    }
    if (bVar1 < 0x12) {
      lVar7 = 1;
    }
    else {
      if (bVar1 < 0x18) {
        lVar7 = 3;
        goto joined_r0x02954144;
      }
      lVar7 = (ulong)(bVar1 < 0x1e) << 2;
    }
    if (2 < uVar3) goto LAB_0295419c;
LAB_02954148:
    if (cVar5 == (&PTR_DAT_04276a30)[(int)uVar3][lVar7]) {
      return;
    }
  }
  else {
    if (bVar2 < 0xc) {
      lVar7 = 2;
      goto joined_r0x0295416c;
    }
    if (bVar2 < 0x12) {
      lVar7 = 1;
    }
    else {
      if (0x17 < bVar2) {
        lVar7 = (ulong)(bVar2 < 0x1e) << 2;
        goto joined_r0x0295416c;
      }
      lVar7 = 3;
    }
    if (2 < uVar3) goto LAB_02954130;
LAB_02954170:
    cVar5 = (&PTR_DAT_04276a30)[(int)uVar3][lVar7];
    if (5 < bVar1) goto LAB_02954188;
LAB_0295413c:
    lVar7 = 0;
joined_r0x02954144:
    if (uVar3 < 3) goto LAB_02954148;
LAB_0295419c:
    if (cVar5 == '\x02') {
      return;
    }
  }
  lVar7 = *(long *)(param_4 + uVar6 * 8 + 0x120);
  bVar2 = *(byte *)(lVar7 + 0x26d);
  uVar8 = (ulong)bVar2;
  if (uVar8 == 0) {
    cVar5 = '\x01';
  }
  else {
    pbVar9 = (byte *)(lVar7 + 0x26e);
    uVar10 = uVar8;
    do {
      if (*pbVar9 == bVar1) goto LAB_0295424c;
      uVar10 = uVar10 - 1;
      pbVar9 = pbVar9 + 1;
    } while (uVar10 != 0);
    if (0x1d < bVar2) goto LAB_0295424c;
    cVar5 = bVar2 + 1;
  }
  *(byte *)(lVar7 + uVar8 + 0x26e) = bVar1;
  *(char *)(lVar7 + 0x26d) = cVar5;
  uVar6 = (ulong)(byte)param_1[0x11];
LAB_0295424c:
  lVar7 = *(long *)(param_4 + uVar4 * 8 + 0x120);
  bVar1 = *(byte *)(lVar7 + 0x26d);
  uVar4 = (ulong)bVar1;
  if (uVar4 == 0) {
    cVar5 = '\x01';
  }
  else {
    pbVar9 = (byte *)(lVar7 + 0x26e);
    uVar8 = uVar4;
    do {
      if ((uint)*pbVar9 == (uint)uVar6) {
        return;
      }
      uVar8 = uVar8 - 1;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
    if (0x1d < bVar1) {
      return;
    }
    cVar5 = bVar1 + 1;
  }
  *(char *)(lVar7 + uVar4 + 0x26e) = (char)uVar6;
  *(char *)(lVar7 + 0x26d) = cVar5;
  return;
}


