/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023c230; name: FUN_0023c230
 */


void FUN_0023c230(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  
  if (param_2 != (long *)0x0) {
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      lVar2 = 0x230;
    }
    else {
      lVar2 = (ulong)**(uint **)(param_1 + 0x38) + 0x230;
    }
    lVar2 = FUN_00250f00(param_3,0x10,lVar2);
    *param_2 = *param_2 + lVar2;
    if ((*(uint *)(param_1 + 0x10) >> 0x10 & 1) == 0) {
      if ((*(uint *)(param_1 + 0x10) >> 0x11 & 1) == 0) {
        if (*(long *)(param_1 + 0x38) == 0) {
          lVar2 = 0x90;
        }
        else {
          lVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 4) + 0x90;
        }
      }
      else {
        lVar2 = 0x220;
      }
    }
    else {
      lVar2 = 0xe0;
    }
    lVar2 = FUN_00250f00(param_3,0x10,lVar2);
    *param_2 = *param_2 + lVar2;
    uVar1 = *(uint *)(param_1 + 0x14) & 3;
    if (uVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x18) +
              ((ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30) +
              ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14;
      if ((*(char *)(lVar2 + 1) == '\a') ||
         ((uVar1 != 1 &&
          ((*(char *)(lVar2 + 0x11) == '\a' || ((uVar1 != 2 && (*(char *)(lVar2 + 0x21) == '\a')))))
          ))) {
        lVar2 = FUN_00250f00(param_3,0x10,0xc0);
        *param_2 = *param_2 + lVar2;
      }
    }
    if ((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 8) != 0)) {
      lVar2 = FUN_00250f00(param_3,0x10);
      *param_2 = *param_2 + lVar2;
    }
  }
  return;
}


