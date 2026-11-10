/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00442100; name: FUN_00442100
 */


ulong FUN_00442100(char *param_1,uint param_2,int param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  
  if (param_4 == (char *)0x0) {
    pcVar4 = (char *)FUN_004444c0();
    pcVar1 = "Enter PEM pass phrase:";
    if (pcVar4 != (char *)0x0) {
      pcVar1 = pcVar4;
    }
    iVar2 = FUN_004444e0(param_1,(ulong)(param_3 != 0) << 2,(ulong)param_2,pcVar1,param_3);
    if (iVar2 == 0) {
      sVar3 = strlen(param_1);
    }
    else {
      FUN_004014b0(9,100,0x6d,"external/openssl/crypto/pem/pem_lib.c",0x3b);
      memset(param_1,0,(ulong)param_2);
      sVar3 = 0xffffffff;
    }
  }
  else {
    sVar3 = strlen(param_4);
    if ((int)(uint)sVar3 <= (int)param_2) {
      param_2 = (uint)sVar3;
    }
    sVar3 = (size_t)param_2;
    memcpy(param_1,param_4,(long)(int)param_2);
  }
  return sVar3 & 0xffffffff;
}


