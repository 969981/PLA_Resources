/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f3c0c; name: FUN_031f3c0c
 */


void FUN_031f3c0c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *__dest;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *__src;
  
  puVar2 = (undefined8 *)FUN_032cf5b0(0x50);
  puVar2[5] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  *puVar2 = &PTR_LAB_0430b500;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 1;
  puVar2[7] = 0x8000000000000000;
  *param_1 = puVar2;
  uVar5 = param_2[4];
  puVar2[5] = param_2[5];
  puVar2[4] = uVar5;
  if (param_2 == puVar2) {
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 7);
    __src = (void *)param_2[6];
    if (iVar1 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x10,0,0,(long)puVar2 + 0x3c);
      puVar2[6] = __dest;
    }
    memcpy(__dest,__src,(long)iVar1 << 4);
    lVar3 = puVar2[8];
    *(int *)(puVar2 + 7) = iVar1;
  }
  lVar4 = param_2[8];
  if (lVar3 != lVar4) {
    uVar5 = 0;
    if (lVar4 != 0) {
      FUN_032d645c(lVar4);
      lVar3 = puVar2[8];
      uVar5 = param_2[8];
    }
    puVar2[8] = uVar5;
    if (lVar3 != 0) {
      FUN_032d647c();
      return;
    }
  }
  return;
}


