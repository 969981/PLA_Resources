/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003100b8; name: FUN_003100b8
 */


undefined8 FUN_003100b8(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *__src;
  undefined4 *puVar2;
  size_t sVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 local_34;
  
  __src = (undefined4 *)*param_1;
  if ((uint)((int)param_1[1] - (int)__src) < 4) {
    lVar6 = param_1[1] - (long)__src;
    if ((int)lVar6 < 4) {
      iVar4 = 4;
      puVar2 = &local_34;
      do {
        sVar3 = (size_t)(int)lVar6;
        memcpy(puVar2,__src,sVar3);
        *param_1 = *param_1 + sVar3;
        uVar1 = FUN_0030fad0(param_1);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        __src = (undefined4 *)*param_1;
        iVar4 = iVar4 - (int)lVar6;
        lVar6 = param_1[1] - (long)__src;
        puVar2 = (undefined4 *)((long)puVar2 + sVar3);
      } while ((int)lVar6 < iVar4);
      sVar3 = (size_t)iVar4;
    }
    else {
      puVar2 = &local_34;
      sVar3 = 4;
    }
    puVar5 = &local_34;
    memcpy(puVar2,__src,sVar3);
    puVar2 = (undefined4 *)(*param_1 + sVar3);
  }
  else {
    puVar2 = __src + 1;
    puVar5 = __src;
  }
  *param_1 = (long)puVar2;
  *param_2 = *puVar5;
  return 1;
}


