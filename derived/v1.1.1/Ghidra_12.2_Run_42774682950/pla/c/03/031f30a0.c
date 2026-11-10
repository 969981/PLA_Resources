/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f30a0; name: FUN_031f30a0
 */


void FUN_031f30a0(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  
  lVar3 = *(long *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  if (lVar3 != 0) {
    FUN_032d647c();
  }
  if (*(long *)(param_1 + 0x150) == 0) {
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x150) = 0;
      cVar2 = *(char *)(param_1 + 0x118);
      goto joined_r0x031f3100;
    }
    FUN_032d645c(param_2);
    lVar3 = *(long *)(param_1 + 0x150);
    *(long *)(param_1 + 0x150) = param_2;
    if (lVar3 != 0) {
      FUN_032d647c();
      cVar2 = *(char *)(param_1 + 0x118);
      goto joined_r0x031f3100;
    }
  }
  cVar2 = *(char *)(param_1 + 0x118);
joined_r0x031f3100:
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x118) = 1;
    iVar4 = *(int *)(param_1 + 0x1a8);
    lVar3 = *(long *)(param_1 + 0x1a0);
    iVar1 = iVar4 + 1;
    if ((int)(*(uint *)(param_1 + 0x1ac) & 0x3fffffff) <= iVar4) {
      lVar3 = FUN_031f35d8(PTR_PTR_0434a080,iVar1);
      iVar4 = *(int *)(param_1 + 0x1a8);
      *(long *)(param_1 + 0x1a0) = lVar3;
    }
    puVar5 = (undefined4 *)(lVar3 + (long)iVar4 * 0x50);
    *(int *)(param_1 + 0x1a8) = iVar1;
    *puVar5 = 4;
    puVar5[4] = 0;
  }
  return;
}


