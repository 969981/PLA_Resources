/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004458e0; name: FUN_004458e0
 */


void FUN_004458e0(code *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  pthread_t pVar3;
  long lVar4;
  size_t sVar5;
  uint local_1150;
  undefined4 uStack_114c;
  undefined1 *local_1148;
  char acStack_1140 [4096];
  undefined1 auStack_140 [256];
  undefined8 local_38;
  
  pVar3 = pthread_self();
  do {
    lVar4 = FUN_00401a30(&local_38,&uStack_114c,&local_1148,&local_1150);
    if (lVar4 == 0) {
      return;
    }
    FUN_00401a90(lVar4,auStack_140,0x100);
    puVar1 = &DAT_03996322;
    if ((local_1150 & 2) != 0) {
      puVar1 = local_1148;
    }
    FUN_00403120(acStack_1140,0x1000,"%lu:%s:%s:%d:%s\n",pVar3,auStack_140,local_38,uStack_114c,
                 puVar1);
    sVar5 = strlen(acStack_1140);
    iVar2 = (*param_1)(acStack_1140,sVar5,param_2);
  } while (0 < iVar2);
  return;
}


