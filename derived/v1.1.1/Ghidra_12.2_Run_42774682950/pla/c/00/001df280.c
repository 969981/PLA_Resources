/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df280; name: FUN_001df280
 */


void FUN_001df280(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar3 = param_2[0xcc];
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x1100);
    if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
      FUN_001f43b0(param_1,5,2);
    }
    FUN_001df360(lVar3,param_2);
    if ((*(long *)(lVar3 + 8) == 0) && (lVar2 != 0)) {
      FUN_001e0ebc(lVar2,auStack_58);
      do {
        lVar1 = FUN_001e0ecc(auStack_58);
        if (lVar1 == 0) goto LAB_001df318;
      } while (*(long *)(lVar1 + 0x18) != lVar3);
      FUN_001e0bf0(lVar2,lVar1 + 0x28,*(undefined8 *)(lVar1 + 0x20));
    }
LAB_001df318:
    param_2[0xcc] = 0;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
    }
    *param_2 = 0;
    if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
      FUN_001f43f8(param_1,5);
    }
  }
  return;
}


