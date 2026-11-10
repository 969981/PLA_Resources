/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329e888; name: FUN_0329e888
 */


long FUN_0329e888(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  FUN_032c7e9c(param_1 + 0x18,param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  iVar2 = *(int *)(param_1 + 0x28);
  lVar5 = (long)iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    memset((void *)(*(long *)(param_1 + 0x20) + lVar5 * 8),0,lVar5 * -8);
  }
  else if (iVar2 != 0) {
    lVar5 = lVar5 * 8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    lVar7 = *(long *)(param_1 + 0x20) + -8;
    lVar4 = *(long *)(lVar7 + lVar5);
    while( true ) {
      if (lVar4 != 0) {
        FUN_032d647c();
      }
      if (lVar5 == 8) break;
      lVar5 = lVar5 + -8;
      lVar4 = *(long *)(lVar7 + lVar5);
    }
  }
  iVar3 = *(int *)(param_2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x28);
  plVar8 = *(long **)(param_2 + 0x20);
  lVar5 = *(long *)(param_1 + 0x20);
  iVar2 = iVar1 + iVar3;
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar2) {
    lVar5 = FUN_0329e9d0(PTR_PTR_0434a080,iVar2,lVar5,iVar1,param_1 + 0x2c);
    *(long *)(param_1 + 0x20) = lVar5;
  }
  if (iVar3 != 0) {
    lVar4 = (long)iVar3 << 3;
    plVar6 = (long *)(lVar5 + (long)iVar1 * 8);
    do {
      lVar5 = *plVar8;
      *plVar6 = lVar5;
      if (lVar5 != 0) {
        FUN_032d645c();
      }
      plVar8 = plVar8 + 1;
      lVar4 = lVar4 + -8;
      plVar6 = plVar6 + 1;
    } while (lVar4 != 0);
  }
  *(int *)(param_1 + 0x28) = iVar2;
  return param_1;
}


