/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00455970; name: FUN_00455970
 */


undefined8 FUN_00455970(undefined2 *param_1,int param_2,void *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_2 + -0xb < (int)param_4) {
    FUN_004014b0(4,0x6d,0x6e,"external/openssl/crypto/rsa/rsa_pk1.c",0x7d);
  }
  else {
    iVar2 = (param_2 - param_4) + -3;
    pcVar5 = (char *)(param_1 + 1);
    *param_1 = 0x200;
    iVar3 = FUN_00427c60(pcVar5,iVar2);
    if (0 < iVar3) {
      if (iVar2 < 1) {
LAB_00455a2c:
        *pcVar5 = '\0';
        memcpy(pcVar5 + 1,param_3,(ulong)param_4);
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
          if (iVar3 == iVar2) goto LAB_00455a2c;
        }
        cVar1 = *pcVar5;
      } while( true );
    }
  }
  return 0;
}


