/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00447fa0; name: FUN_00447fa0
 */


bool FUN_00447fa0(undefined8 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  int iStack_64;
  
  iVar2 = FUN_004475b0(&local_78);
  if (iVar2 == 0) {
    FUN_004042b0(param_1,"Bad time value",0xe);
    bVar1 = false;
  }
  else {
    lVar5 = *(long *)(param_2 + 2);
    iVar2 = *param_2;
    if (param_2[1] == 0x18) {
      if ((iVar2 < 0x10) || (pcVar6 = (char *)(lVar5 + 0xe), *pcVar6 != '.')) {
        pcVar6 = (char *)0x0;
        iStack_64 = 0;
      }
      else {
        lVar7 = 0;
        do {
          iVar3 = FUN_00405430(*(undefined1 *)(lVar5 + 0xf + lVar7),4);
          if (iVar3 == 0) break;
          lVar7 = lVar7 + 1;
        } while ((ulong)(iVar2 - 0xe) - 1 != lVar7);
        iStack_64 = (int)lVar7 + 1;
      }
      pcVar4 = "%s %2d %02d:%02d:%02d%.*s %d%s";
    }
    else {
      iStack_64 = iStack_64 + 0x76c;
      pcVar6 = " GMT";
      if (*(char *)(iVar2 + lVar5 + -1) != 'Z') {
        pcVar6 = "";
      }
      pcVar4 = "%s %2d %02d:%02d:%02d %d%s";
    }
    iVar2 = FUN_00402590(param_1,pcVar4,&UNK_03a0bdfc + (long)local_68 * 4,uStack_6c,local_70,
                         uStack_74,local_78,iStack_64,pcVar6);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}


