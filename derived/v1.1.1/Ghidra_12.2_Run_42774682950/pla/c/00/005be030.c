/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005be030; name: FUN_005be030
 */


void FUN_005be030(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  size_t sVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  char *__s;
  
  puVar1 = PTR_PTR_04375010;
  plVar6 = (long *)*param_3;
  while (plVar6 != param_3 + 1) {
    uVar3 = FUN_0053ee00(puVar1,param_1);
    FUN_005be170(param_1,uVar3,plVar6 + 7);
    if ((*(byte *)(plVar6 + 4) & 1) == 0) {
      __s = (char *)((long)plVar6 + 0x21);
    }
    else {
      __s = (char *)plVar6[6];
    }
    sVar4 = strlen(__s);
    lVar5 = *param_2;
    if (lVar5 == 0) {
      lVar5 = FUN_0053f280(param_1,0,8);
      *param_2 = lVar5;
    }
    FUN_00540250(lVar5 + 8,__s,sVar4,0,param_1);
    FUN_0053fb10(lVar5 + 8,__s,sVar4,uVar3,param_1);
    plVar7 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar7 = plVar6 + 2;
      bVar2 = (long *)*(long *)*plVar7 != plVar6;
      plVar6 = (long *)*plVar7;
      if (bVar2) {
        do {
          lVar5 = *plVar7;
          plVar7 = (long *)(lVar5 + 0x10);
          plVar6 = (long *)*plVar7;
        } while (*(long *)*plVar7 != lVar5);
      }
    }
    else {
      do {
        plVar6 = plVar7;
        plVar7 = (long *)*plVar6;
      } while (plVar7 != (long *)0x0);
    }
  }
  return;
}


