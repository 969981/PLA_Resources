/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339c2b0; name: FUN_0339c2b0
 */


void FUN_0339c2b0(long param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      iVar3 = strcmp((char *)(*(ulong *)(*(long *)(param_1 + 0x28) + lVar5) & 0xfffffffffffffffe),
                     param_2);
      if (iVar3 == 0) {
        lVar4 = *(long *)(param_1 + 0x28) + lVar5;
        FUN_032c7b9c(lVar4 + 8);
        FUN_032c7b9c(lVar4);
        iVar3 = *(int *)(param_1 + 0x30);
        lVar4 = (long)iVar3 + -1;
        *(int *)(param_1 + 0x30) = (int)lVar4;
        if ((int)lVar6 - iVar3 == -1) {
          return;
        }
        if (lVar4 == lVar6) {
          return;
        }
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar4 * 0x10);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar5);
        *puVar2 = *puVar1;
        *puVar1 = 0;
        puVar2[1] = puVar1[1];
        puVar1[1] = 0;
        FUN_032c7b9c();
        FUN_032c7b9c(puVar1);
        return;
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < *(int *)(param_1 + 0x30));
  }
  return;
}


