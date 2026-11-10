/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004459b0; name: FUN_004459b0
 */


void FUN_004459b0(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  pthread_t pVar3;
  long lVar4;
  size_t sVar5;
  uint local_1148;
  undefined4 uStack_1144;
  undefined1 *local_1140;
  undefined8 uStack_1138;
  char acStack_1130 [4096];
  undefined1 auStack_130 [256];
  
  pVar3 = pthread_self();
  do {
    lVar4 = FUN_00401a30(&uStack_1138,&uStack_1144,&local_1140,&local_1148);
    if (lVar4 == 0) {
      return;
    }
    FUN_00401a90(lVar4,auStack_130,0x100);
    puVar1 = &DAT_03996322;
    if ((local_1148 & 2) != 0) {
      puVar1 = local_1140;
    }
    FUN_00403120(acStack_1130,0x1000,"%lu:%s:%s:%d:%s\n",pVar3,auStack_130,uStack_1138,uStack_1144,
                 puVar1);
    sVar5 = strlen(acStack_1130);
    iVar2 = FUN_004042b0(param_1,acStack_1130,sVar5);
  } while (0 < iVar2);
  return;
}


