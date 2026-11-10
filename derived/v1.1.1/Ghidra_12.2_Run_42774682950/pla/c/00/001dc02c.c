/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dc02c; name: FUN_001dc02c
 */


long FUN_001dc02c(undefined8 param_1,char *param_2,long param_3,byte param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  
  lVar7 = param_3;
  if (param_3 == 0) {
    lVar7 = FUN_00204504(1,0x820);
    if (lVar7 == 0) {
      return 0;
    }
    pcVar4 = "none";
    if (param_2 != (char *)0x0) {
      pcVar4 = param_2;
    }
    lVar3 = FUN_002044f4(pcVar4);
    *(long *)(lVar7 + 0x800) = lVar3;
    if (lVar3 != 0) goto LAB_001dc060;
    FUN_002044d4();
    lVar3 = 0;
    bVar1 = true;
LAB_001dc1ec:
    FUN_001dd1dc(lVar7);
LAB_001dc1f4:
    lVar7 = 0;
    if ((bVar1) && (lVar3 != 0)) {
      FUN_002055a4(lVar3);
      lVar7 = 0;
    }
  }
  else {
LAB_001dc060:
    *(undefined1 *)(lVar7 + 0x808) = 0;
    if (param_2 == (char *)0x0) {
LAB_001dc0a4:
      *(byte *)(lVar7 + 0x818) = param_4 & 1;
    }
    else {
      iVar2 = strcmp(param_2,"-");
      if (iVar2 == 0) {
        lVar3 = *(long *)PTR_stdin_04372360;
        bVar1 = false;
      }
      else {
        if (*param_2 == '\0') goto LAB_001dc0a4;
        lVar3 = FUN_002055c8(param_2,&DAT_03948cf6);
        bVar1 = true;
      }
      *(byte *)(lVar7 + 0x818) = param_4 & 1;
      if (lVar3 != 0) {
        pcVar4 = (char *)FUN_002044c4(5000);
        if (pcVar4 == (char *)0x0) {
          FUN_002044d4();
          if (param_3 == 0) goto LAB_001dc1ec;
          goto LAB_001dc1f4;
        }
        lVar5 = FUN_001dd14c(pcVar4,5000,lVar3);
        if (lVar5 != 0) {
          do {
            iVar2 = thunk_FUN_001f8bec("Set-Cookie:",pcVar4,0xb);
            pcVar6 = pcVar4;
            if (iVar2 != 0) {
              pcVar6 = pcVar4 + 0xb;
            }
            for (; *pcVar6 == ' ' || *pcVar6 == '\t'; pcVar6 = pcVar6 + 1) {
            }
            FUN_001dc210(param_1,lVar7,iVar2 != 0,1,pcVar6,0,0,1);
            lVar5 = FUN_001dd14c(pcVar4,5000,lVar3);
          } while (lVar5 != 0);
        }
        FUN_002044d4(pcVar4);
        FUN_001dcfe8(lVar7);
        if (bVar1) {
          FUN_002055a4(lVar3);
        }
      }
    }
    *(undefined1 *)(lVar7 + 0x808) = 1;
  }
  return lVar7;
}


