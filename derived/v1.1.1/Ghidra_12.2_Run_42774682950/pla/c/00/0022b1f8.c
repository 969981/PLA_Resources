/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022b1f8; name: FUN_0022b1f8
 */


bool FUN_0022b1f8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char local_160 [256];
  undefined4 local_58;
  undefined1 local_54;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 == 0) {
    local_58 = 0x68736762;
    local_54 = 0;
    if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
      nn::util::SNPrintf(local_160,0xff,"%s/%s",&local_58,"__ArchiveShader.bnsh");
    }
    else {
      nn::util::SNPrintf(local_160,0xff,"%s/%s/%s",(char *)(param_1 + 0x40),&local_58,
                         "__ArchiveShader.bnsh");
    }
    iVar1 = FUN_0022c96c(param_1 + 8,local_160);
    if (iVar1 == -1) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      return false;
    }
    local_160[0] = '\0';
    local_160[1] = '\0';
    local_160[2] = '\0';
    local_160[3] = '\0';
    local_160[4] = '\0';
    local_160[5] = '\0';
    local_160[6] = '\0';
    local_160[7] = '\0';
    lVar2 = FUN_0022c904(param_1 + 8,local_160,iVar1);
    *(long *)(param_1 + 0xb8) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  lVar3 = *(long *)(param_1 + 0xc0);
  if (lVar3 == 0) {
    local_58 = 0x68736762;
    local_54 = 0;
    if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
      nn::util::SNPrintf(local_160,0xff,"%s/%s",&local_58,"__ArchiveShader.bushvt");
    }
    else {
      nn::util::SNPrintf(local_160,0xff,"%s/%s/%s",(char *)(param_1 + 0x40),&local_58,
                         "__ArchiveShader.bushvt");
    }
    iVar1 = FUN_0022c96c(param_1 + 8,local_160);
    if (iVar1 == -1) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      return false;
    }
    local_160[0] = '\0';
    local_160[1] = '\0';
    local_160[2] = '\0';
    local_160[3] = '\0';
    local_160[4] = '\0';
    local_160[5] = '\0';
    local_160[6] = '\0';
    local_160[7] = '\0';
    lVar3 = FUN_0022c904(param_1 + 8,local_160,iVar1);
    *(long *)(param_1 + 0xc0) = lVar3;
    if (lVar3 == 0) {
      return false;
    }
  }
  iVar1 = FUN_002506a0(lVar3,param_4,param_5,param_6);
  if (iVar1 != -1) {
    thunk_FUN_0022f758(param_2,param_3,lVar2,lVar3,*(undefined8 *)(param_1 + 0xd0),
                       (lVar2 - *(long *)(param_1 + 200)) + *(long *)(param_1 + 0xd8),
                       *(undefined8 *)(param_1 + 0xe0),3);
  }
  return iVar1 != -1;
}


