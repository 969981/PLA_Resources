/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00443d90; name: FUN_00443d90
 */


long FUN_00443d90(char *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  size_t *psVar3;
  size_t *psVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  
  if (param_1 == (char *)0x0) {
    FUN_004014b0(0x20,0x7e,0x73,"external/openssl/crypto/bio/bss_mem.c",0x5e);
    return 0;
  }
  if (param_2 < 0) {
    sVar5 = strlen(param_1);
    lVar1 = FUN_00403d80(&DAT_041661e8);
  }
  else {
    sVar5 = (size_t)param_2;
    lVar1 = FUN_00403d80(&DAT_041661e8);
  }
  if (lVar1 == 0) {
    return 0;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x38);
  psVar4 = (size_t *)*puVar2;
  psVar4[2] = sVar5;
  *psVar4 = sVar5;
  psVar4[1] = (size_t)param_1;
  psVar3 = (size_t *)puVar2[1];
  sVar5 = *psVar4;
  sVar7 = psVar4[3];
  sVar6 = psVar4[2];
  psVar3[1] = psVar4[1];
  *psVar3 = sVar5;
  psVar3[3] = sVar7;
  psVar3[2] = sVar6;
  *(uint *)(lVar1 + 0x28) = *(uint *)(lVar1 + 0x28) | 0x200;
  *(undefined4 *)(lVar1 + 0x30) = 0;
  return lVar1;
}


