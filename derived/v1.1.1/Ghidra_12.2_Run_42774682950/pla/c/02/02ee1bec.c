/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee1bec; name: FUN_02ee1bec
 */


void FUN_02ee1bec(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 ulong param_5)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined ***pppuVar4;
  size_t __n;
  long lVar5;
  undefined8 *puVar6;
  undefined **appuStack_70 [4];
  
  appuStack_70[3] = (undefined **)(param_3 + 8);
  uVar2 = *param_3;
  appuStack_70[1] = &PTR_LAB_042aabf8;
  uVar1 = param_3[0x14];
  pppuVar4 = appuStack_70 + 1;
  if ((param_5 & 1) == 0) {
    pppuVar4 = (undefined ***)0x0;
  }
  if (uVar1 != 0) {
    __n = (ulong)uVar1 * 8;
    lVar3 = -(__n + 0xf & 0xffffffff0);
    appuStack_70[2] = (undefined **)param_4;
    memcpy((undefined8 *)((long)appuStack_70 + lVar3),*(void **)(param_3 + 0x12),__n);
    FUN_02ee1cfc(param_1,param_2,*(undefined8 *)((long)appuStack_70 + lVar3),uVar2,param_4,pppuVar4)
    ;
    if ((uVar1 != 1) &&
       (FUN_02ee1cfc(param_1,param_2,*(undefined8 *)((long)appuStack_70 + lVar3 + 8),uVar2,param_4,
                     pppuVar4), uVar1 != 2)) {
      lVar5 = __n - 0x10;
      puVar6 = (undefined8 *)((long)appuStack_70 + lVar3 + 0x10);
      do {
        FUN_02ee1cfc(param_1,param_2,*puVar6,uVar2,param_4,pppuVar4);
        lVar5 = lVar5 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar5 != 0);
    }
  }
  return;
}


