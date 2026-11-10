/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0277de00; name: FUN_0277de00
 */


char * FUN_0277de00(char *param_1)

{
  char cVar1;
  long lVar2;
  
  if ((*param_1 == 'T') && (param_1[1] == ' ')) {
    if ((param_1[2] == '=') && (param_1[3] == ' ')) {
      lVar2 = 0;
      goto LAB_0277de34;
    }
LAB_0277de74:
    cVar1 = param_1[2];
LAB_0277de78:
    if (cVar1 != 'T') goto LAB_0277deac;
    cVar1 = param_1[3];
    if (cVar1 != ' ') goto LAB_0277deb0;
    if ((param_1[4] == '=') && (param_1[5] == ' ')) {
      lVar2 = 2;
      goto LAB_0277de34;
    }
LAB_0277dee4:
    cVar1 = param_1[4];
LAB_0277dee8:
    if (cVar1 != 'T') goto LAB_0277df1c;
    cVar1 = param_1[5];
    if (cVar1 != ' ') goto LAB_0277df20;
    if ((param_1[6] == '=') && (param_1[7] == ' ')) {
      lVar2 = 4;
      goto LAB_0277de34;
    }
LAB_0277df54:
    cVar1 = param_1[6];
LAB_0277df58:
    if (cVar1 != 'T') goto LAB_0277df8c;
    cVar1 = param_1[7];
    if (cVar1 != ' ') goto LAB_0277df90;
    if ((param_1[8] == '=') && (param_1[9] == ' ')) {
      lVar2 = 6;
      goto LAB_0277de34;
    }
LAB_0277dfc4:
    cVar1 = param_1[8];
LAB_0277dfc8:
    if (cVar1 != 'T') goto LAB_0277dffc;
    cVar1 = param_1[9];
    if (cVar1 != ' ') goto LAB_0277e000;
    if ((param_1[10] == '=') && (param_1[0xb] == ' ')) {
      lVar2 = 8;
      goto LAB_0277de34;
    }
LAB_0277e034:
    cVar1 = param_1[10];
LAB_0277e038:
    if (cVar1 != 'T') goto LAB_0277e06c;
    cVar1 = param_1[0xb];
    if (cVar1 != ' ') goto LAB_0277e070;
    if ((param_1[0xc] == '=') && (param_1[0xd] == ' ')) {
      lVar2 = 10;
      goto LAB_0277de34;
    }
LAB_0277e0a4:
    cVar1 = param_1[0xc];
LAB_0277e0a8:
    if (cVar1 != 'T') goto LAB_0277e0dc;
    cVar1 = param_1[0xd];
    if (cVar1 != ' ') goto LAB_0277e0e0;
    if ((param_1[0xe] == '=') && (param_1[0xf] == ' ')) {
      lVar2 = 0xc;
      goto LAB_0277de34;
    }
LAB_0277e114:
    cVar1 = param_1[0xe];
LAB_0277e118:
    if (cVar1 != 'T') goto LAB_0277e14c;
    cVar1 = param_1[0xf];
    if (cVar1 != ' ') goto LAB_0277e150;
    if ((param_1[0x10] == '=') && (param_1[0x11] == ' ')) {
      lVar2 = 0xe;
      goto LAB_0277de34;
    }
LAB_0277e184:
    cVar1 = param_1[0x10];
LAB_0277e188:
    if (cVar1 != 'T') goto LAB_0277e1bc;
    cVar1 = param_1[0x11];
    if (cVar1 != ' ') goto LAB_0277e1c0;
    if ((param_1[0x12] == '=') && (param_1[0x13] == ' ')) {
      lVar2 = 0x10;
      goto LAB_0277de34;
    }
LAB_0277e1f4:
    cVar1 = param_1[0x12];
  }
  else {
    if (param_1[1] != 'T') goto LAB_0277de74;
    cVar1 = param_1[2];
    if (cVar1 != ' ') goto LAB_0277de78;
    if ((param_1[3] == '=') && (param_1[4] == ' ')) {
      lVar2 = 1;
      goto LAB_0277de34;
    }
LAB_0277deac:
    cVar1 = param_1[3];
LAB_0277deb0:
    if (cVar1 != 'T') goto LAB_0277dee4;
    cVar1 = param_1[4];
    if (cVar1 != ' ') goto LAB_0277dee8;
    if ((param_1[5] == '=') && (param_1[6] == ' ')) {
      lVar2 = 3;
      goto LAB_0277de34;
    }
LAB_0277df1c:
    cVar1 = param_1[5];
LAB_0277df20:
    if (cVar1 != 'T') goto LAB_0277df54;
    cVar1 = param_1[6];
    if (cVar1 != ' ') goto LAB_0277df58;
    if ((param_1[7] == '=') && (param_1[8] == ' ')) {
      lVar2 = 5;
      goto LAB_0277de34;
    }
LAB_0277df8c:
    cVar1 = param_1[7];
LAB_0277df90:
    if (cVar1 != 'T') goto LAB_0277dfc4;
    cVar1 = param_1[8];
    if (cVar1 != ' ') goto LAB_0277dfc8;
    if ((param_1[9] == '=') && (param_1[10] == ' ')) {
      lVar2 = 7;
      goto LAB_0277de34;
    }
LAB_0277dffc:
    cVar1 = param_1[9];
LAB_0277e000:
    if (cVar1 != 'T') goto LAB_0277e034;
    cVar1 = param_1[10];
    if (cVar1 != ' ') goto LAB_0277e038;
    if ((param_1[0xb] == '=') && (param_1[0xc] == ' ')) {
      lVar2 = 9;
      goto LAB_0277de34;
    }
LAB_0277e06c:
    cVar1 = param_1[0xb];
LAB_0277e070:
    if (cVar1 != 'T') goto LAB_0277e0a4;
    cVar1 = param_1[0xc];
    if (cVar1 != ' ') goto LAB_0277e0a8;
    if ((param_1[0xd] == '=') && (param_1[0xe] == ' ')) {
      lVar2 = 0xb;
      goto LAB_0277de34;
    }
LAB_0277e0dc:
    cVar1 = param_1[0xd];
LAB_0277e0e0:
    if (cVar1 != 'T') goto LAB_0277e114;
    cVar1 = param_1[0xe];
    if (cVar1 != ' ') goto LAB_0277e118;
    if ((param_1[0xf] == '=') && (param_1[0x10] == ' ')) {
      lVar2 = 0xd;
      goto LAB_0277de34;
    }
LAB_0277e14c:
    cVar1 = param_1[0xf];
LAB_0277e150:
    if (cVar1 != 'T') goto LAB_0277e184;
    cVar1 = param_1[0x10];
    if (cVar1 != ' ') goto LAB_0277e188;
    if ((param_1[0x11] == '=') && (param_1[0x12] == ' ')) {
      lVar2 = 0xf;
      goto LAB_0277de34;
    }
LAB_0277e1bc:
    cVar1 = param_1[0x11];
LAB_0277e1c0:
    if (cVar1 != 'T') goto LAB_0277e1f4;
    cVar1 = param_1[0x12];
    if (cVar1 == ' ') {
      if (param_1[0x13] != '=') {
        return param_1;
      }
      if (param_1[0x14] != ' ') {
        return param_1;
      }
      lVar2 = 0x11;
      goto LAB_0277de34;
    }
  }
  if ((((cVar1 != 'T') || (param_1[0x13] != ' ')) || (param_1[0x14] != '=')) ||
     (param_1[0x15] != ' ')) {
    return param_1;
  }
  lVar2 = 0x12;
LAB_0277de34:
  return param_1 + lVar2 + 4;
}


