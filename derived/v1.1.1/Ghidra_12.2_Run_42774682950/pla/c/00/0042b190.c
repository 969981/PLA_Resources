/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042b190; name: FUN_0042b190
 */


long FUN_0042b190(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0) {
    lVar2 = 0;
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
    lVar6 = 0;
    lVar7 = 0;
    goto LAB_0042b28c;
  }
  lVar2 = thunk_FUN_004242f0();
  if (lVar2 == 0) goto LAB_0042b278;
  if (*(long *)(param_1 + 8) == 0) {
    if ((*(long *)(param_1 + 0x18) != 0) || (*(long *)(param_1 + 0x10) != 0)) {
LAB_0042b278:
      lVar3 = 0;
      lVar5 = 0;
      lVar4 = 0;
      goto LAB_0042b284;
    }
LAB_0042b23c:
    if (*(long *)(param_1 + 0x20) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        return lVar2;
      }
      goto LAB_0042b278;
    }
    lVar6 = FUN_0040c480();
    if (lVar6 != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        lVar7 = 0;
LAB_0042b2ec:
        iVar1 = FUN_004246c0(lVar2,lVar6,lVar7);
        if (iVar1 != 0) {
          return lVar2;
        }
      }
      else {
        lVar7 = FUN_0040c480();
        if (lVar7 != 0) goto LAB_0042b2ec;
      }
      lVar3 = 0;
      lVar5 = 0;
      lVar4 = 0;
      goto LAB_0042b28c;
    }
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_0042b278;
    lVar3 = FUN_0040c480();
    lVar4 = FUN_0040c480(*(undefined8 *)(param_1 + 0x18));
    lVar5 = FUN_0040c480(*(undefined8 *)(param_1 + 0x10));
    lVar6 = 0;
    if (((lVar3 == 0) || (lVar4 == 0)) || (lVar5 == 0)) {
      lVar7 = 0;
      goto LAB_0042b28c;
    }
    iVar1 = FUN_00424600(lVar2,lVar3,lVar5,lVar4);
    if (iVar1 != 0) goto LAB_0042b23c;
LAB_0042b284:
    lVar6 = 0;
  }
  lVar7 = 0;
LAB_0042b28c:
  FUN_0040c1e0(lVar3);
  FUN_0040c1e0(lVar4);
  FUN_0040c1e0(lVar5);
  FUN_0040c1e0(lVar6);
  FUN_0040c1e0(lVar7);
  FUN_00424410(lVar2);
  return 0;
}


