/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a6988; name: FUN_027a6988
 */


undefined8 FUN_027a6988(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_60;
  undefined1 local_5c;
  
  if (*(int *)(param_1 + 0xc38) == 2) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xc38) != 1) ||
     (uVar3 = FUN_02cc40dc(*(undefined8 *)(param_1 + 0xc40)), (uVar3 & 1) != 0)) {
    return 0;
  }
  piVar4 = (int *)FUN_02cc4160(*(undefined8 *)(param_1 + 0xc40));
  piVar5 = (int *)FUN_02cc4174(*(undefined8 *)(param_1 + 0xc40));
  iVar2 = *piVar5;
  lVar6 = FUN_02cc417c(*(undefined8 *)(param_1 + 0xc40));
  local_5c = 0;
  local_60 = 2000;
  FUN_027a70a4(param_1 + 0x1fe8,&local_60);
  *(undefined2 *)(param_1 + 0x1ffd) = 0;
  *(undefined4 *)(param_1 + 0x1ff9) = 0;
  if (*(char *)(param_1 + 0x1ff8) == '\0') {
    *(undefined1 *)(param_1 + 0x1ff8) = 1;
    if (iVar2 != 0) goto LAB_027a6a58;
LAB_027a6ab4:
    if (lVar6 == 200) {
      if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
        *(undefined4 *)(param_1 + 0x1fec) = 2000;
      }
      else {
        uVar8 = *(undefined8 *)(piVar4 + 2);
        puVar1 = (undefined4 *)(param_1 + 0x1fec);
        uVar3 = FUN_027a6b28(uVar8,puVar1);
        if ((uVar3 & 1) == 0) {
          *puVar1 = 2000;
        }
        else if (((*(char *)(param_1 + 0xc3c) != '\0') &&
                 (uVar3 = FUN_027a6bac(uVar8,(undefined4 *)(param_1 + 0x1ff9)), (uVar3 & 1) == 0))
                && (*puVar1 = 2000, *(char *)(param_1 + 0x1ff8) != '\0')) {
          *(undefined1 *)(param_1 + 0x1ff8) = 0;
        }
      }
      goto LAB_027a6a74;
    }
    uVar7 = 1000;
  }
  else {
    if (iVar2 == 0) goto LAB_027a6ab4;
LAB_027a6a58:
    *(int *)(param_1 + 0x1ff4) = iVar2;
    if (*(char *)(param_1 + 0x1ff0) == '\0') {
      *(char *)(param_1 + 0x1ff0) = '\x01';
    }
    uVar7 = 5000;
  }
  *(undefined4 *)(param_1 + 0x1fec) = uVar7;
LAB_027a6a74:
  lVar6 = *(long *)(param_1 + 0xc40);
  *(undefined8 *)(param_1 + 0xc40) = 0;
  if (lVar6 != 0) {
    FUN_027a7010(param_1 + 0xc48);
  }
  memset((void *)(param_1 + 0xc60),0,5000);
  *(undefined4 *)(param_1 + 0xc38) = 2;
  return 1;
}


