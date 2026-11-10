/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b3580; name: FUN_032b3580
 */


undefined4 FUN_032b3580(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char cVar4;
  undefined4 local_1e0 [2];
  long local_1d8;
  char local_1d0 [200];
  undefined1 auStack_108 [200];
  
  *param_3 = 0;
  *param_2 = 0;
  FUN_032af29c(param_1,auStack_108,10);
  iVar1 = FUN_032c4b10(auStack_108,"#?RADIANCE",10);
  uVar2 = 0;
  if (iVar1 == 0) {
    FUN_032af29c(param_1,local_1d0,1);
    iVar1 = 200;
    cVar4 = '\0';
    do {
      FUN_032af29c(param_1,local_1d0,1);
      if ((cVar4 == '\n') && (local_1d0[0] == '\n')) break;
      iVar1 = iVar1 + -1;
      cVar4 = local_1d0[0];
    } while (iVar1 != 0);
    pcVar3 = local_1d0;
    do {
      FUN_032af29c(param_1,&local_1d8,1);
      *pcVar3 = (char)local_1d8;
      pcVar3 = pcVar3 + 1;
    } while ((char)local_1d8 != '\n');
    iVar1 = sscanf(local_1d0,"-Y %ld +X %ld",(long *)local_1e0,&local_1d8);
    uVar2 = 0;
    if (iVar1 != 0) {
      *param_2 = (int)CONCAT71(local_1d8._1_7_,(char)local_1d8);
      uVar2 = 1;
      *param_3 = local_1e0[0];
    }
  }
  return uVar2;
}


