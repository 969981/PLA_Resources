/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f25d70; name: FUN_02f25d70
 */


void FUN_02f25d70(long param_1,long param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0x42ca0000;
  }
  lVar3 = param_2;
  if ((*(byte *)(param_2 + 0x34c) >> 2 & 1) == 0) {
    lVar4 = *(long *)(param_2 + 0x28);
    if (lVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        if ((*(int *)(lVar4 + 0x164) == 0) &&
           (lVar3 = *(long *)(lVar4 + 0x60), *(long *)(lVar4 + 0xd0) == *(long *)(param_2 + 0x70)))
        break;
        lVar4 = *(long *)(lVar4 + 0x48);
      } while (lVar4 != 0);
    }
  }
  lVar3 = FUN_02eb8428(param_1 + 0x28,param_1,param_2,lVar3,param_3,
                       (*(byte *)(param_1 + 0x50) & 3) != 1);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x40) = 0;
    plVar5 = (long *)(param_2 + 0x20);
    if (*plVar5 != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
    }
    *plVar5 = lVar3;
    *(long *)(param_2 + 0x18) = lVar3;
    lVar4 = FUN_02eca560(*(long *)(lVar3 + 0x58) + 0x68);
    if ((lVar4 == 0) ||
       (iVar2 = FUN_02f00cdc(lVar4,*(undefined4 *)(*(long *)(lVar3 + 0x58) + 0x80)), iVar2 != 1)) {
      FUN_02f25e8c(param_1,param_2);
      bVar1 = *(byte *)(param_1 + 0x50);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x50);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      DAT_0440ae44 = 1;
    }
  }
  return;
}


