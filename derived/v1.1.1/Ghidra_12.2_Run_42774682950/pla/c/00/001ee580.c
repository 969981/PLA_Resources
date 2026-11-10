/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ee580; name: FUN_001ee580
 */


undefined8 FUN_001ee580(long *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  
  lVar8 = *param_1;
  do {
    for (; (iVar3 = FUN_001e33f4(*param_2), iVar3 != 0 || (cVar2 = *param_2, cVar2 == ','));
        param_2 = param_2 + 1) {
    }
    pcVar5 = param_2;
    pcVar6 = (char *)0x0;
    while ((cVar2 != '\0' && (cVar2 != ','))) {
      iVar3 = FUN_001e33f4(cVar2);
      pcVar1 = pcVar5 + (1 - (long)param_2);
      if (iVar3 != 0) {
        pcVar1 = pcVar6;
      }
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar1;
      cVar2 = *pcVar5;
    }
    if ((param_3 == 0) || (pcVar6 != &DAT_00000007)) {
      if (pcVar6 != (char *)0x0) goto LAB_001ee650;
    }
    else {
      iVar3 = FUN_001f8bec(param_2,"chunked",7);
      if (iVar3 == 0) {
LAB_001ee650:
        ppuVar7 = &PTR_s_identity_0411cf20;
        ppuVar9 = &PTR_PTR_0411cea8;
        do {
          iVar3 = FUN_001f8bec(param_2,*ppuVar7,pcVar6);
          if (((iVar3 != 0) && (pcVar6[(long)*ppuVar7] == '\0')) ||
             ((ppuVar7[1] != (undefined *)0x0 &&
              ((iVar3 = FUN_001f8bec(param_2,ppuVar7[1],pcVar6), iVar3 != 0 &&
               (pcVar6[(long)ppuVar7[1]] == '\0')))))) break;
          ppuVar7 = (undefined **)*ppuVar9;
          ppuVar9 = ppuVar9 + 1;
        } while (ppuVar7 != (undefined **)0x0);
        lVar4 = *(long *)(lVar8 + 0x1a0);
        if (lVar4 == 0) {
          lVar4 = FUN_001ee720(param_1,&DAT_0411cec0);
          *(long *)(lVar8 + 0x1a0) = lVar4;
          if (lVar4 == 0) {
            return 0x1b;
          }
        }
        ppuVar9 = (undefined **)&DAT_0411cef0;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar9 = ppuVar7;
        }
        lVar4 = FUN_001ee720(param_1,ppuVar9,lVar4);
        if (lVar4 == 0) {
          return 0x1b;
        }
        *(long *)(lVar8 + 0x1a0) = lVar4;
      }
      else {
        *(ushort *)(lVar8 + 0x660) = *(ushort *)(lVar8 + 0x660) | 0x20;
        FUN_001eeff0(param_1);
      }
    }
    param_2 = pcVar5;
    if (*pcVar5 == '\0') {
      return 0;
    }
  } while( true );
}


