/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001faec0; name: FUN_001faec0
 */


undefined8 FUN_001faec0(long *param_1,uint param_2,long *param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 auStack_60 [8];
  long local_58;
  undefined1 auStack_48 [8];
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (param_3 == (long *)0x0) {
    return 2;
  }
  *param_3 = 0;
  if (9 < param_2) {
    return 9;
  }
  uVar20 = param_4 >> 6 & 1;
  switch(param_2) {
  case 0:
    puVar18 = (undefined1 *)param_1[3];
    puVar22 = (undefined1 *)param_1[5];
    if ((*param_1 == 0) || (iVar10 = FUN_001f8b48(&DAT_039b069a), iVar10 == 0)) {
      if (param_1[4] == 0) {
        return 0xe;
      }
      puVar19 = (undefined1 *)*param_1;
      if (puVar19 == (undefined1 *)0x0) {
        if ((param_4 >> 2 & 1) == 0) {
          return 10;
        }
        puVar19 = &DAT_038a00d4;
      }
      lVar11 = FUN_001fd4b8(puVar19);
      if (((param_4 & 1) == 0) || (puVar22 != (undefined1 *)0x0)) {
        if ((puVar22 == (undefined1 *)0x0) || (lVar11 == 0)) {
          if (lVar11 == 0) goto LAB_001fb1c8;
        }
        else if (*(long *)(lVar11 + 0x78) == param_1[10] && (param_4 & 2) != 0) {
          puVar22 = (undefined1 *)0x0;
        }
LAB_001fb1b4:
        puVar1 = (undefined1 *)0x0;
        if ((*(byte *)(lVar11 + 0x85) & 4) != 0) {
          puVar1 = puVar18;
        }
        puVar18 = puVar1;
      }
      else {
        if (lVar11 != 0) {
          puVar22 = auStack_48;
          FUN_001e64cc(auStack_48,7,&DAT_038aa48e,*(undefined8 *)(lVar11 + 0x78));
          goto LAB_001fb1b4;
        }
        puVar22 = (undefined1 *)0x0;
      }
LAB_001fb1c8:
      puVar8 = (undefined1 *)param_1[1];
      puVar17 = (undefined1 *)param_1[2];
      puVar14 = &DAT_03996322;
      puVar1 = &DAT_03996322;
      if (puVar8 != (undefined1 *)0x0) {
        puVar1 = puVar8;
      }
      pcVar13 = (char *)param_1[6];
      puVar2 = &DAT_039b07fe;
      puVar3 = puVar17;
      if (puVar17 == (undefined1 *)0x0) {
        puVar2 = &DAT_03996322;
        puVar3 = &DAT_03996322;
      }
      bVar9 = puVar18 == (undefined1 *)0x0;
      puVar4 = &DAT_0390f70e;
      if (bVar9) {
        puVar4 = &DAT_03996322;
        puVar18 = &DAT_03996322;
      }
      puVar5 = &DAT_03917a45;
      if (bVar9) {
        puVar5 = &DAT_03996322;
      }
      if (puVar8 != (undefined1 *)0x0 || puVar17 != (undefined1 *)0x0) {
        puVar5 = &DAT_03917a45;
      }
      puVar8 = &DAT_039b07fe;
      if (puVar22 == (undefined1 *)0x0) {
        puVar8 = &DAT_03996322;
        puVar22 = &DAT_03996322;
      }
      if ((pcVar13 != (char *)0x0) && (puVar14 = &DAT_03996322, *pcVar13 != '/')) {
        puVar14 = &DAT_0389ffa9;
      }
      pcVar16 = (char *)param_1[7];
      pcVar6 = "/";
      if (pcVar13 != (char *)0x0) {
        pcVar6 = pcVar13;
      }
      if (pcVar16 == (char *)0x0) {
        puVar15 = &DAT_03996322;
        pcVar13 = "";
      }
      else {
        puVar15 = &DAT_03996322;
        if (*pcVar16 != '\0') {
          puVar15 = &DAT_038f8f88;
        }
        pcVar13 = "";
        if (*pcVar16 != '\0') {
          pcVar13 = pcVar16;
        }
      }
      puVar17 = (undefined1 *)param_1[8];
      puVar7 = &DAT_038aa602;
      if (puVar17 == (undefined1 *)0x0) {
        puVar7 = &DAT_03996322;
        puVar17 = &DAT_03996322;
      }
      local_58 = FUN_001e6534("%s://%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",puVar19,puVar1,puVar2,puVar3,
                              puVar4,puVar18,puVar5,param_1[4],puVar8,puVar22,puVar14,pcVar6,puVar15
                              ,pcVar13,puVar7,puVar17);
    }
    else {
      puVar18 = (undefined1 *)param_1[8];
      puVar14 = &DAT_038aa602;
      if (puVar18 == (undefined1 *)0x0) {
        puVar14 = &DAT_03996322;
        puVar18 = &DAT_03996322;
      }
      local_58 = FUN_001e6534("file://%s%s%s",param_1[6],puVar14,puVar18);
    }
    if (local_58 == 0) goto LAB_001fb2dc;
    goto LAB_001fb2d0;
  case 1:
    uVar20 = 0;
    uVar21 = 0;
    uVar12 = 10;
    break;
  case 2:
    uVar21 = 0;
    param_1 = param_1 + 1;
    uVar12 = 0xb;
    break;
  case 3:
    uVar21 = 0;
    param_1 = param_1 + 2;
    uVar12 = 0xc;
    break;
  case 4:
    uVar21 = 0;
    param_1 = param_1 + 3;
    uVar12 = 0xd;
    break;
  case 5:
    uVar21 = 0;
    param_1 = param_1 + 4;
    uVar12 = 0xe;
    break;
  case 6:
    puVar18 = (undefined1 *)param_1[5];
    if ((((param_4 & 1) == 0) || (puVar18 != (undefined1 *)0x0)) || (*param_1 == 0)) {
      if (puVar18 == (undefined1 *)0x0) {
        return 0xf;
      }
      if ((*param_1 != 0) && (lVar11 = FUN_001fd4b8(), lVar11 != 0)) {
        uVar21 = 0;
        if ((param_4 >> 1 & 1) == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          if (*(long *)(lVar11 + 0x78) == param_1[10]) {
            return 0xf;
          }
        }
        goto LAB_001fb060;
      }
    }
    else {
      lVar11 = FUN_001fd4b8();
      if (lVar11 == 0) {
        return 0xf;
      }
      puVar18 = auStack_48;
      FUN_001e64cc(auStack_48,7,&DAT_038aa48e,*(undefined8 *)(lVar11 + 0x78));
    }
    uVar21 = 0;
    uVar20 = 0;
    goto LAB_001fb060;
  case 7:
    puVar18 = (undefined1 *)param_1[6];
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)FUN_002044f4(&DAT_0389ffa9);
      param_1[6] = (long)puVar18;
      if (puVar18 == (undefined1 *)0x0) goto LAB_001fb2dc;
    }
    uVar21 = 0;
    goto LAB_001fb060;
  case 8:
    param_1 = param_1 + 7;
    uVar12 = 0x10;
    uVar21 = uVar20;
    break;
  case 9:
    param_1 = param_1 + 8;
    uVar12 = 0x11;
    uVar21 = 0;
  }
  puVar18 = (undefined1 *)*param_1;
  if (puVar18 != (undefined1 *)0x0) {
LAB_001fb060:
    pcVar13 = (char *)FUN_002044f4(puVar18);
    *param_3 = (long)pcVar13;
    if (pcVar13 == (char *)0x0) {
LAB_001fb2dc:
      uVar12 = 7;
    }
    else {
      if (uVar21 != 0) {
        do {
          if (*pcVar13 == '+') {
            *pcVar13 = ' ';
          }
          else if (*pcVar13 == '\0') break;
          pcVar13 = pcVar13 + 1;
        } while( true );
      }
      if (uVar20 == 0) {
        uVar12 = 0;
      }
      else {
        iVar10 = FUN_001fc6dc(0,*param_3,0,&local_58,auStack_60,1);
        FUN_002044d4(*param_3);
        if (iVar10 == 0) {
LAB_001fb2d0:
          uVar12 = 0;
          *param_3 = local_58;
        }
        else {
          *param_3 = 0;
          uVar12 = 6;
        }
      }
    }
  }
  return uVar12;
}


