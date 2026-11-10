/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00401150; name: FUN_00401150
 */


undefined8 FUN_00401150(void)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  size_t sVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  char *__s;
  char *pcVar10;
  long lVar11;
  
  iVar2 = FUN_004001b0(&DAT_0439de38,FUN_004013a0);
  uVar4 = 0;
  if ((iVar2 != 0) && (DAT_0439de3c != 0)) {
    FUN_00400140(DAT_0439de50);
    if (DAT_041579f0 != 0) {
      plVar9 = &DAT_041579f0;
      do {
        FUN_00405810(DAT_0439de58,plVar9);
        plVar9 = plVar9 + 2;
      } while (*plVar9 != 0);
    }
    FUN_00400160(DAT_0439de50);
    FUN_00400140(DAT_0439de50);
    if (DAT_04157810 != 0) {
      plVar9 = &DAT_04157810;
      do {
        FUN_00405810(DAT_0439de58,plVar9);
        plVar9 = plVar9 + 2;
      } while (*plVar9 != 0);
    }
    FUN_00400160(DAT_0439de50);
    if (DAT_04157690 != 0) {
      uVar7 = DAT_04157690;
      puVar8 = &DAT_041576a0;
      do {
        puVar8[-2] = uVar7 | 0x2000000;
        uVar7 = *puVar8;
        puVar8 = puVar8 + 2;
      } while (uVar7 != 0);
    }
    FUN_00400140(DAT_0439de50);
    if (DAT_04157690 != 0) {
      plVar9 = (long *)&DAT_04157690;
      do {
        FUN_00405810(DAT_0439de58,plVar9);
        plVar9 = plVar9 + 2;
      } while (*plVar9 != 0);
    }
    FUN_00400160(DAT_0439de50);
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    FUN_00400140(DAT_0439de50);
    if ((DAT_0439de34 & 1) == 0) {
      lVar11 = 0;
      __s = &DAT_0439ce30;
      uVar7 = 1;
      do {
        plVar9 = &DAT_0439de58 + uVar7 * 2;
        (&DAT_0439de50)[uVar7 * 2] = uVar7 & 0xffffffff | 0x2000000;
        if (*plVar9 == 0) {
          iVar3 = FUN_00405410(uVar7 & 0xffffffff,__s,0x1000 - lVar11);
          if (iVar3 != 0) {
            sVar6 = strlen(__s);
            uVar1 = sVar6 + lVar11;
            if (0xfff < uVar1) {
              uVar1 = 0x1000;
            }
            lVar11 = uVar1 + 2;
            *plVar9 = (long)__s;
            __s = __s + sVar6 + 2;
            do {
              pcVar10 = __s;
              iVar3 = FUN_00405430(pcVar10[-3],8);
              lVar11 = lVar11 + -1;
              __s = pcVar10 + -1;
            } while (iVar3 != 0);
            pcVar10[-2] = '\0';
          }
          if (*plVar9 == 0) {
            *plVar9 = (long)"unknown";
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80);
      DAT_0439de34 = 1;
      FUN_00400160(DAT_0439de50);
      piVar5 = __errno_location();
      *piVar5 = iVar2;
      FUN_00400140(DAT_0439de50);
      if (DAT_0439de60 != 0) {
        plVar9 = &DAT_0439de60;
        do {
          FUN_00405810(DAT_0439de58,plVar9);
          plVar9 = plVar9 + 2;
        } while (*plVar9 != 0);
      }
    }
    FUN_00400160(DAT_0439de50);
    uVar4 = 1;
  }
  return uVar4;
}


