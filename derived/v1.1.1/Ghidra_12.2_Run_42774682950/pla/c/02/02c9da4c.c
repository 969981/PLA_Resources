/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c9da4c; name: FUN_02c9da4c
 */


void FUN_02c9da4c(long param_1,int param_2,char *param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  undefined1 auStack_130 [224];
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x80) + 8);
  lVar2 = (long)iVar1;
  if (0 < iVar1) {
    puVar3 = (uint *)(*(long *)(*(long *)(param_1 + 0x80) + 0x10) + (long)param_4 * 4 + 8);
    do {
      if ((*puVar3 & param_5) != 0) {
        FUN_00877468(auStack_130);
        if ((*param_3 != '\0') && (*(long *)(param_3 + 8) != 0)) {
          FUN_00876f88(auStack_130,*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x3010);
          iVar1 = nn::os::GetCurrentCoreNumber();
          if (*(long *)(*(long *)(param_1 + 0x898) + (long)param_2 * 8) != 0) {
            iVar1 = iVar1 + param_2 * 3;
            FUN_00283834(*(undefined8 *)(param_1 + 0x80),iVar1,auStack_130);
            FUN_00283c48(*(undefined8 *)(param_1 + 0x80),iVar1,auStack_130,param_4,param_5,
                         param_6 & 1,1,0);
          }
        }
        FUN_008774a4(auStack_130);
        return;
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 0x27a;
    } while (lVar2 != 0);
  }
  return;
}


