/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4a10; name: FUN_032c4a10
 */


void FUN_032c4a10(char *param_1,int param_2,long *param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar3 = 0x1100000000;
  do {
    if ((long)param_2 <= (long)uVar5) {
      puVar1 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,lVar3 >> 0x20,0);
      *puVar1 = param_3;
      *(int *)(puVar1 + 1) = (int)uVar5 + 1;
      pcVar2 = (char *)(puVar1 + 2);
      if ((int)uVar5 != 0) {
        uVar5 = uVar5 & 0xffffffff;
        goto LAB_032c4a7c;
      }
      iVar4 = 0;
      goto LAB_032c4a88;
    }
    pcVar2 = param_1 + uVar5;
    uVar5 = uVar5 + 1;
    lVar3 = lVar3 + 0x100000000;
  } while (*pcVar2 != '\0');
  puVar1 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,lVar3 >> 0x20,0);
  *puVar1 = param_3;
  *(int *)(puVar1 + 1) = (int)uVar5 + 1;
  pcVar2 = (char *)(puVar1 + 2);
LAB_032c4a7c:
  iVar4 = (int)uVar5;
  pcVar2 = strncpy(pcVar2,param_1,uVar5 & 0xffffffff);
LAB_032c4a88:
  pcVar2[iVar4] = '\0';
  return;
}


