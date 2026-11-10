/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022c30c; name: FUN_0022c30c
 */


undefined8 FUN_0022c30c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 local_170 [32];
  undefined4 local_70;
  undefined1 local_6c;
  
  lVar7 = *(long *)(param_1 + 0x10);
  do {
    if (param_1 + 8 == lVar7) {
      return 0;
    }
    lVar5 = *(long *)(lVar7 + 0x10);
    local_70 = 0x68736762;
    local_6c = 0;
    pcVar6 = (char *)(lVar5 + 0x40);
    if ((*pcVar6 == '.') && (*(char *)(lVar5 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s",&local_70,"__ArchiveShader.bnsh");
    }
    else {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s/%s",pcVar6,&local_70,"__ArchiveShader.bnsh");
    }
    lVar1 = lVar5 + 8;
    iVar2 = FUN_0022c96c(lVar1,local_170);
    if (iVar2 != -1) {
      local_170[0] = 0;
      lVar3 = FUN_0022c904(lVar1,local_170,iVar2);
      if (lVar3 != 0) {
        local_70 = 0x68736762;
        local_6c = 0;
        if ((*pcVar6 == '.') && (*(char *)(lVar5 + 0x41) == '\0')) {
          nn::util::SNPrintf((char *)local_170,0xff,"%s/%s",&local_70,"__ArchiveShader.bushvt");
        }
        else {
          nn::util::SNPrintf((char *)local_170,0xff,"%s/%s/%s",pcVar6,&local_70,
                             "__ArchiveShader.bushvt");
        }
        iVar2 = FUN_0022c96c(lVar1,local_170);
        if (iVar2 == -1) {
          uVar4 = 0;
        }
        else {
          local_170[0] = 0;
          uVar4 = FUN_0022c904(lVar1,local_170,iVar2);
        }
        iVar2 = FUN_002506a0(uVar4,param_2,param_3,param_4);
        if (iVar2 != -1) {
          return *(undefined8 *)(lVar7 + 0x10);
        }
      }
    }
    lVar7 = *(long *)(lVar7 + 8);
  } while( true );
}


