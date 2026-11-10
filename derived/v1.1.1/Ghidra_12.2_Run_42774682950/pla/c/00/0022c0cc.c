/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022c0cc; name: FUN_0022c0cc
 */


undefined8 FUN_0022c0cc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char acStack_250 [256];
  undefined8 local_150 [32];
  undefined4 local_48;
  undefined1 local_44;
  
  nn::util::SNPrintf(acStack_250,0x100,"ArchiveShader-%s.bnsh",param_2);
  lVar3 = *(long *)(param_1 + 0x10);
  do {
    if (param_1 + 8 == lVar3) {
      return 0;
    }
    lVar2 = *(long *)(lVar3 + 0x10);
    local_48 = 0x68736762;
    local_44 = 0;
    if ((*(char *)(lVar2 + 0x40) == '.') && (*(char *)(lVar2 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)local_150,0xff,"%s/%s",&local_48,acStack_250);
    }
    else {
      nn::util::SNPrintf((char *)local_150,0xff,"%s/%s/%s",(char *)(lVar2 + 0x40),&local_48,
                         acStack_250);
    }
    iVar1 = FUN_0022c96c(lVar2 + 8,local_150);
    if (iVar1 != -1) {
      local_150[0] = 0;
      lVar2 = FUN_0022c904(lVar2 + 8,local_150,iVar1);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}


