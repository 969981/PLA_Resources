/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022b9fc; name: FUN_0022b9fc
 */


undefined8 FUN_0022b9fc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_158 [32];
  undefined4 local_58;
  undefined1 local_54;
  
  lVar3 = *(long *)(param_1 + 0x10);
  do {
    if (param_1 + 8 == lVar3) {
      return 0;
    }
    lVar2 = *(long *)(lVar3 + 0x10);
    local_58 = 0x746e6f66;
    local_54 = 0;
    if ((*(char *)(lVar2 + 0x40) == '.') && (*(char *)(lVar2 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)local_158,0xff,"%s/%s",&local_58,param_2);
    }
    else {
      nn::util::SNPrintf((char *)local_158,0xff,"%s/%s/%s",(char *)(lVar2 + 0x40),&local_58,param_2)
      ;
    }
    iVar1 = FUN_0022c96c(lVar2 + 8,local_158);
    if (iVar1 != -1) {
      local_158[0] = 0;
      lVar2 = FUN_0022c904(lVar2 + 8,local_158,iVar1);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}


