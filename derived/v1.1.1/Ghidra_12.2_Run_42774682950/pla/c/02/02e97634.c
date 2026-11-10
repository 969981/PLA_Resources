/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e97634; name: FUN_02e97634
 */


long FUN_02e97634(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 == 0) {
    lVar6 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + (uVar4 >> 1);
      lVar6 = (long)iVar1;
      uVar2 = *(uint *)(*param_1 + lVar6 * 0x20 + 4);
      uVar5 = (uint)((ulong)param_2 >> 0x20);
      if (uVar2 == uVar5) {
        *param_4 = 1;
        goto LAB_02e97684;
      }
      if (uVar2 < uVar5) {
        iVar3 = iVar1 + 1;
      }
      uVar4 = uVar4 - (uVar2 < uVar5) >> 1;
    } while (uVar4 != 0);
    lVar6 = (long)iVar3;
  }
  *param_4 = 0;
LAB_02e97684:
  return *param_1 + lVar6 * 0x20;
}


