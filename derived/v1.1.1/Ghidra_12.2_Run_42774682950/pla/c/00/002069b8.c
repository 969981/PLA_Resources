/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002069b8; name: FUN_002069b8
 */


undefined8 FUN_002069b8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  lVar1 = FUN_00205cf4(param_1,*(undefined4 *)(param_2 + 8));
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    if (lVar1 == 0) {
      return 0xfffffe02;
    }
    if (*(long *)(lVar1 + 0xa8) == 0) {
      uVar2 = FUN_002119b4(lVar1,param_2);
      return uVar2;
    }
    return 0xfffffdef;
  case 1:
    if ((*(int *)(param_2 + 0x38) == 0) || ((lVar1 != 0 && (*(int *)(lVar1 + 0xdc) == 4)))) {
      param_1 = param_1 + 0x138;
      goto LAB_00206ab4;
    }
    break;
  case 3:
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0xdc) = 3;
    }
    break;
  case 4:
  case 6:
    param_1 = param_1 + 0x108;
    goto LAB_00206ab4;
  case 5:
    if (lVar1 == 0) {
      return 0xfffffe02;
    }
    FUN_00205be8(auStack_30,*(undefined4 *)(lVar1 + 0xb8),0x10,0);
    lVar1 = FUN_002066d8(param_1,*(undefined4 *)(param_2 + 0x28),0,auStack_30,4,
                         *(undefined8 *)(param_2 + 0x70));
    if (lVar1 == 0) {
      return 0xfffffc7b;
    }
    break;
  case 8:
    if (lVar1 == 0) {
      if (*(int *)(param_2 + 8) == 0) {
        *(undefined1 *)(param_1 + 0x9ac) = 1;
      }
    }
    else {
      *(undefined1 *)(lVar1 + 0xe7) = 1;
    }
  }
  param_1 = param_1 + 0x120;
LAB_00206ab4:
  FUN_002113bc(param_1,param_2);
  *(undefined1 *)(param_2 + 0x90) = 1;
  return 0;
}


