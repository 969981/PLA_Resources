/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e56d0c; name: FUN_02e56d0c
 */


undefined8 FUN_02e56d0c(uint *param_1,uint param_2)

{
  uint uVar1;
  void *__src;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 2);
  if (puVar2 == (undefined8 *)0x0 || *param_1 < param_2) {
    if (*param_1 < param_2) {
      puVar2 = (undefined8 *)FUN_02f59e30(9,param_2 * 0x48 + 0x10);
      if (puVar2 == (undefined8 *)0x0) {
        return 0;
      }
      __src = *(void **)(param_1 + 2);
      if ((__src == (void *)0x0) || (*(int *)((long)__src + 8) == 0)) {
        *puVar2 = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 1) = 0;
      }
      else {
        memcpy(puVar2,__src,(ulong)(*(int *)((long)__src + 8) * 0x48 + 0x10));
      }
      if (*(long *)(param_1 + 2) != 0) {
        FUN_02f59e60(9);
      }
      *(undefined8 **)(param_1 + 2) = puVar2;
      *param_1 = param_2;
    }
    if (puVar2 == (undefined8 *)0x0) {
      return 1;
    }
  }
  uVar1 = *(uint *)(puVar2 + 1);
  if (uVar1 < param_2) {
    lVar3 = (ulong)param_2 - (ulong)uVar1;
    lVar4 = (ulong)uVar1 * 0x48 + 0x50;
    do {
      puVar2 = (undefined8 *)((long)puVar2 + lVar4);
      lVar4 = lVar4 + 0x48;
      puVar2[-6] = 0x3f8000003f800000;
      puVar2[-8] = 0xffffffff;
      puVar2[-7] = 0;
      lVar3 = lVar3 + -1;
      *(undefined4 *)(puVar2 + -5) = 0;
      *(undefined2 *)((long)puVar2 + -0x24) = 0;
      puVar2[-4] = 1;
      *(undefined4 *)(puVar2 + -1) = 0;
      *puVar2 = 0;
      puVar2 = *(undefined8 **)(param_1 + 2);
    } while (lVar3 != 0);
  }
  *(uint *)(puVar2 + 1) = param_2;
  return 1;
}


