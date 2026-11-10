/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e458fc; name: FUN_02e458fc
 */


undefined8 FUN_02e458fc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long local_38;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  plVar1 = (long *)(param_1 + 0x18);
  local_38 = param_2;
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uint)param_2 / uVar2;
    }
    for (lVar7 = *(long *)(*plVar1 + (ulong)((uint)param_2 - uVar3 * uVar2) * 8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x48)) {
      if (*(long *)(lVar7 + 0x40) == param_2) goto LAB_02e45974;
    }
  }
  lVar7 = FUN_02e45a0c(param_1 + 0x50);
  if (lVar7 != 0) {
    uVar5 = FUN_02e45a44(plVar1,lVar7);
    if ((uVar5 & 1) == 0) {
      FUN_02e47d6c(lVar7);
    }
    else {
LAB_02e45974:
      FUN_02e53d18(lVar7,param_3);
      FUN_02e45aac(lVar7);
      iVar4 = FUN_02e4581c(param_1,lVar7,*(undefined8 *)(param_3 + 0x48));
      if ((iVar4 == 1) &&
         (uVar6 = FUN_02e4581c(param_1,lVar7,*(undefined8 *)(param_3 + 0x50)), (int)uVar6 == 1))
      goto LAB_02e459e0;
      FUN_02e45b04(plVar1,&local_38);
      FUN_02e47d6c(lVar7);
    }
    FUN_02e47fdc(param_1 + 0x50,lVar7);
  }
  uVar6 = 0x34;
LAB_02e459e0:
  *(undefined1 *)(param_1 + 0x7c) = 1;
  return uVar6;
}


