/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00455f40; name: FUN_00455f40
 */


undefined8 FUN_00455f40(undefined2 *param_1,int param_2,void *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = (param_2 + -0xb) - param_4;
  if (param_2 + -0xb < (int)param_4) {
    FUN_004014b0(4,0x6e,0x6e,"external/openssl/crypto/rsa/rsa_ssl.c",0x19);
  }
  else {
    pcVar5 = (char *)(param_1 + 1);
    *param_1 = 0x200;
    iVar3 = FUN_00427c60(pcVar5,iVar2);
    if (0 < iVar3) {
      if (iVar2 < 1) {
LAB_00455ff4:
        builtin_strncpy(pcVar5,"\x03\x03\x03\x03\x03\x03\x03\x03",9);
        memcpy(pcVar5 + 9,param_3,(ulong)param_4);
        return 1;
      }
      iVar3 = 0;
      cVar1 = *pcVar5;
      do {
        if (cVar1 == '\0') {
          iVar4 = FUN_00427c60(pcVar5,1);
          if (iVar4 < 1) {
            return 0;
          }
        }
        else {
          iVar3 = iVar3 + 1;
          pcVar5 = pcVar5 + 1;
          if (iVar3 == iVar2) goto LAB_00455ff4;
        }
        cVar1 = *pcVar5;
      } while( true );
    }
  }
  return 0;
}


