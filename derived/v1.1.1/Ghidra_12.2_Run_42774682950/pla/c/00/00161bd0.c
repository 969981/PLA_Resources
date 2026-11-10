/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00161bd0; name: FUN_00161bd0
 */


void FUN_00161bd0(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4,
                 undefined8 param_5)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined1 auStack_2080 [8224];
  
  FUN_00155030(param_1,auStack_2080);
  if (*param_4 != '\0') {
    param_2 = FUN_00155d30(param_1,param_2,param_4,param_5);
  }
  cVar1 = *param_3;
  while( true ) {
    while (cVar1 == ';') {
      cVar1 = param_3[1];
      param_3 = param_3 + 1;
    }
    if (cVar1 == '\0') break;
    pcVar2 = strchr(param_3,0x3b);
    if (pcVar2 == (char *)0x0) {
      sVar3 = strlen(param_3);
      pcVar2 = param_3 + sVar3;
    }
    FUN_001514f0(param_1,param_3,(long)pcVar2 - (long)param_3);
    if (pcVar2 == (char *)0x0) break;
    uVar4 = FUN_00150da0(param_1,0xffffffff,0);
    uVar4 = FUN_00155d30(param_1,uVar4,&DAT_038f8f88,param_2);
    FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_00151650(param_1,"\n\tno file \'%s\'",uVar4);
    FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_00154f70(auStack_2080);
    cVar1 = *pcVar2;
    param_3 = pcVar2;
  }
  FUN_00154ec0(auStack_2080);
  return;
}


