/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299d884; name: FUN_0299d884
 */


long * FUN_0299d884(long param_1,long param_2,int param_3,byte param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  char cVar13;
  
  uVar8 = (ulong)*(byte *)(param_1 + 0xd88);
  if (uVar8 == 0) {
    return (long *)0x0;
  }
  uVar9 = 0;
  pcVar7 = (char *)(param_1 + 0x65);
  if (*pcVar7 == '\0') goto LAB_0299d8b4;
  do {
    do {
      uVar9 = uVar9 + 1;
      pcVar7 = pcVar7 + 0x60;
      if (uVar8 == uVar9) {
        return (long *)0x0;
      }
    } while (*pcVar7 != '\0');
LAB_0299d8b4:
  } while ((*(int *)(pcVar7 + -0x55) != 1) || (*(int *)(pcVar7 + -0x4d) != param_3));
  lVar10 = (ulong)(5 < param_4) << 1;
  lVar11 = (ulong)(param_4 < 0x1e) << 2;
  if (0xb < param_4) {
    lVar10 = 1;
  }
  if (param_4 < 0x18) {
    lVar11 = 3;
  }
  if (0x11 < param_4) {
    lVar10 = lVar11;
  }
  do {
    plVar5 = (long *)(param_1 + uVar9 * 0x60 + 8);
    lVar11 = *plVar5;
    if (((lVar11 != 0) && (param_4 != 0x1f)) && (bVar1 = *(byte *)(lVar11 + 0x7d), bVar1 != 0x1f)) {
      uVar2 = *(uint *)(param_2 + 0x110);
      if (uVar2 < 3) {
        cVar13 = (&PTR_DAT_042770c0)[(int)uVar2][lVar10];
        if (bVar1 < 6) goto LAB_0299d984;
LAB_0299d96c:
        if (0xb < bVar1) {
          if (bVar1 < 0x12) {
            lVar4 = 1;
          }
          else {
            if (0x17 < bVar1) {
              lVar4 = (ulong)(bVar1 < 0x1e) << 2;
              goto joined_r0x0299d97c;
            }
            lVar4 = 3;
          }
          goto joined_r0x0299d9d4;
        }
        lVar4 = 2;
joined_r0x0299d97c:
        if (2 < uVar2) goto LAB_0299d9d8;
LAB_0299d990:
        cVar3 = (&PTR_DAT_042770a8)[(int)uVar2][lVar4];
      }
      else {
        cVar13 = '\x02';
        if (5 < bVar1) goto LAB_0299d96c;
LAB_0299d984:
        lVar4 = 0;
joined_r0x0299d9d4:
        if (uVar2 < 3) goto LAB_0299d990;
LAB_0299d9d8:
        cVar3 = '\x02';
      }
      if (((bVar1 != param_4) && (cVar13 == cVar3)) && (*(short *)(lVar11 + 0x74) != 0)) {
        return plVar5;
      }
    }
    uVar6 = uVar8;
    uVar12 = uVar9;
    do {
      if (uVar12 == 0) goto LAB_0299da10;
      uVar12 = uVar12 - 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uVar9 = uVar8;
LAB_0299da10:
    uVar2 = (int)uVar9 + 1;
    if ((uint)*(byte *)(param_1 + 0xd88) <= (uVar2 & 0xff)) {
      return (long *)0x0;
    }
    uVar9 = (ulong)uVar2 & 0xff;
    pcVar7 = (char *)(param_1 + 0x65 + uVar9 * 0x60);
    if (*pcVar7 == '\0') goto LAB_0299da44;
    do {
      do {
        uVar9 = uVar9 + 1;
        pcVar7 = pcVar7 + 0x60;
        if (uVar8 == uVar9) {
          return (long *)0x0;
        }
      } while (*pcVar7 != '\0');
LAB_0299da44:
    } while ((*(int *)(pcVar7 + -0x55) != 1) || (*(int *)(pcVar7 + -0x4d) != param_3));
  } while( true );
}


