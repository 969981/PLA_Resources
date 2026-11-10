/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02739590; name: FUN_02739590
 */


char * FUN_02739590(char *param_1)

{
  char cVar1;
  long lVar2;
  
  if ((*param_1 == 'T') && (param_1[1] == ' ')) {
    if ((param_1[2] == '=') && (param_1[3] == ' ')) {
      lVar2 = 0;
      goto LAB_027395c4;
    }
LAB_02739604:
    cVar1 = param_1[2];
LAB_02739608:
    if (cVar1 != 'T') goto LAB_0273963c;
    cVar1 = param_1[3];
    if (cVar1 != ' ') goto LAB_02739640;
    if ((param_1[4] == '=') && (param_1[5] == ' ')) {
      lVar2 = 2;
      goto LAB_027395c4;
    }
LAB_02739674:
    cVar1 = param_1[4];
LAB_02739678:
    if (cVar1 != 'T') goto LAB_027396ac;
    cVar1 = param_1[5];
    if (cVar1 != ' ') goto LAB_027396b0;
    if ((param_1[6] == '=') && (param_1[7] == ' ')) {
      lVar2 = 4;
      goto LAB_027395c4;
    }
LAB_027396e4:
    cVar1 = param_1[6];
LAB_027396e8:
    if (cVar1 != 'T') goto LAB_0273971c;
    cVar1 = param_1[7];
    if (cVar1 != ' ') goto LAB_02739720;
    if ((param_1[8] == '=') && (param_1[9] == ' ')) {
      lVar2 = 6;
      goto LAB_027395c4;
    }
LAB_02739754:
    cVar1 = param_1[8];
LAB_02739758:
    if (cVar1 != 'T') goto LAB_0273978c;
    cVar1 = param_1[9];
    if (cVar1 != ' ') goto LAB_02739790;
    if ((param_1[10] == '=') && (param_1[0xb] == ' ')) {
      lVar2 = 8;
      goto LAB_027395c4;
    }
LAB_027397c4:
    cVar1 = param_1[10];
LAB_027397c8:
    if (cVar1 != 'T') goto LAB_027397fc;
    cVar1 = param_1[0xb];
    if (cVar1 != ' ') goto LAB_02739800;
    if ((param_1[0xc] == '=') && (param_1[0xd] == ' ')) {
      lVar2 = 10;
      goto LAB_027395c4;
    }
LAB_02739834:
    cVar1 = param_1[0xc];
LAB_02739838:
    if (cVar1 != 'T') goto LAB_0273986c;
    cVar1 = param_1[0xd];
    if (cVar1 != ' ') goto LAB_02739870;
    if ((param_1[0xe] == '=') && (param_1[0xf] == ' ')) {
      lVar2 = 0xc;
      goto LAB_027395c4;
    }
LAB_027398a4:
    cVar1 = param_1[0xe];
LAB_027398a8:
    if (cVar1 != 'T') goto LAB_027398dc;
    cVar1 = param_1[0xf];
    if (cVar1 != ' ') goto LAB_027398e0;
    if ((param_1[0x10] == '=') && (param_1[0x11] == ' ')) {
      lVar2 = 0xe;
      goto LAB_027395c4;
    }
LAB_02739914:
    cVar1 = param_1[0x10];
  }
  else {
    if (param_1[1] != 'T') goto LAB_02739604;
    cVar1 = param_1[2];
    if (cVar1 != ' ') goto LAB_02739608;
    if ((param_1[3] == '=') && (param_1[4] == ' ')) {
      lVar2 = 1;
      goto LAB_027395c4;
    }
LAB_0273963c:
    cVar1 = param_1[3];
LAB_02739640:
    if (cVar1 != 'T') goto LAB_02739674;
    cVar1 = param_1[4];
    if (cVar1 != ' ') goto LAB_02739678;
    if ((param_1[5] == '=') && (param_1[6] == ' ')) {
      lVar2 = 3;
      goto LAB_027395c4;
    }
LAB_027396ac:
    cVar1 = param_1[5];
LAB_027396b0:
    if (cVar1 != 'T') goto LAB_027396e4;
    cVar1 = param_1[6];
    if (cVar1 != ' ') goto LAB_027396e8;
    if ((param_1[7] == '=') && (param_1[8] == ' ')) {
      lVar2 = 5;
      goto LAB_027395c4;
    }
LAB_0273971c:
    cVar1 = param_1[7];
LAB_02739720:
    if (cVar1 != 'T') goto LAB_02739754;
    cVar1 = param_1[8];
    if (cVar1 != ' ') goto LAB_02739758;
    if ((param_1[9] == '=') && (param_1[10] == ' ')) {
      lVar2 = 7;
      goto LAB_027395c4;
    }
LAB_0273978c:
    cVar1 = param_1[9];
LAB_02739790:
    if (cVar1 != 'T') goto LAB_027397c4;
    cVar1 = param_1[10];
    if (cVar1 != ' ') goto LAB_027397c8;
    if ((param_1[0xb] == '=') && (param_1[0xc] == ' ')) {
      lVar2 = 9;
      goto LAB_027395c4;
    }
LAB_027397fc:
    cVar1 = param_1[0xb];
LAB_02739800:
    if (cVar1 != 'T') goto LAB_02739834;
    cVar1 = param_1[0xc];
    if (cVar1 != ' ') goto LAB_02739838;
    if ((param_1[0xd] == '=') && (param_1[0xe] == ' ')) {
      lVar2 = 0xb;
      goto LAB_027395c4;
    }
LAB_0273986c:
    cVar1 = param_1[0xd];
LAB_02739870:
    if (cVar1 != 'T') goto LAB_027398a4;
    cVar1 = param_1[0xe];
    if (cVar1 != ' ') goto LAB_027398a8;
    if ((param_1[0xf] == '=') && (param_1[0x10] == ' ')) {
      lVar2 = 0xd;
      goto LAB_027395c4;
    }
LAB_027398dc:
    cVar1 = param_1[0xf];
LAB_027398e0:
    if (cVar1 != 'T') goto LAB_02739914;
    cVar1 = param_1[0x10];
    if (cVar1 == ' ') {
      if (param_1[0x11] != '=') {
        return param_1;
      }
      if (param_1[0x12] != ' ') {
        return param_1;
      }
      lVar2 = 0xf;
      goto LAB_027395c4;
    }
  }
  if ((((cVar1 != 'T') || (param_1[0x11] != ' ')) || (param_1[0x12] != '=')) ||
     (param_1[0x13] != ' ')) {
    return param_1;
  }
  lVar2 = 0x10;
LAB_027395c4:
  return param_1 + lVar2 + 4;
}


