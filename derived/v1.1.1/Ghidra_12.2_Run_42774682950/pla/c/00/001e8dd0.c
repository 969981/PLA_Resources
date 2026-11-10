/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e8dd0; name: FUN_001e8dd0
 */


undefined8 FUN_001e8dd0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar2 = 1;
  }
  else if ((char)param_1[0x3c] == '\0') {
    *param_1 = 0;
    plVar1 = (long *)param_1[1];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      if (((*(byte *)((long)plVar1 + 0x15a5) >> 3 & 1) == 0) && (plVar1[2] != 0)) {
        FUN_001e7044(plVar1,0,1);
      }
      if (*(int *)(plVar1 + 0x1a) == 2) {
        FUN_001e18ac(plVar1,plVar1[0x19]);
        plVar1[0x19] = 0;
        *(undefined4 *)(plVar1 + 0x1a) = 0;
      }
      plVar1[0x220] = 0;
      plVar1[0x1b] = 0;
      plVar1 = (long *)lVar3;
    }
    FUN_001df728(param_1 + 0x1f);
    FUN_001e0d20(param_1 + 0x17);
    FUN_001defa0(param_1 + 0x1f);
    FUN_001e381c(param_1 + 4,0);
    FUN_001e381c(param_1 + 8,0);
    FUN_001e0d20(param_1 + 0x10);
    FUN_001f248c(0,param_1 + 0x30);
    FUN_001f2614(0,param_1 + 0x34);
    FUN_002044d4(param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}


