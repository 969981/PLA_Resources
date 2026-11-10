/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001def24; name: FUN_001def24
 */


int FUN_001def24(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_001dbaac();
  *(long *)(param_1 + 0x50) = lVar2;
  if (lVar2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_001e0a0c(param_1,param_2,PTR_LAB_04372748,PTR_DAT_04372750,&LAB_001def9c);
    if (iVar1 == 0) {
      *(long *)(*(long *)(param_1 + 0x50) + 0x1100) = param_1;
    }
    else {
      FUN_001fc8b8();
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  return iVar1;
}


