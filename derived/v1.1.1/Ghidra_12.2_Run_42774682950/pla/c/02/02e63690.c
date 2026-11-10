/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e63690; name: FUN_02e63690
 */


undefined8
FUN_02e63690(undefined8 param_1,long param_2,undefined8 param_3,int *param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04388658;
  if (*(int *)(param_2 + 0x284) < 1) {
    if (0 < *(int *)(param_2 + 0x280)) {
      lVar4 = 0;
      do {
        *param_4 = *param_4 + 1;
        uVar2 = FUN_02e63798(param_5,*(undefined8 *)(param_2 + 0x200 + lVar4 * 8));
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_2 + 0x280));
    }
  }
  else if (0 < *(int *)(param_2 + 0x280)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      uVar2 = FUN_02e4e14c(param_1,param_3,param_2 + lVar3,puVar1);
      if (((uVar2 & 1) != 0) &&
         (uVar2 = FUN_02e63690(param_1,*(undefined8 *)(param_2 + lVar4 * 8 + 0x200),param_3,param_4,
                               param_5), (uVar2 & 1) == 0)) {
        return 0;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar4 < *(int *)(param_2 + 0x280));
  }
  return 1;
}


