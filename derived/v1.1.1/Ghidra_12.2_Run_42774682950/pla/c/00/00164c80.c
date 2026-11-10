/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00164c80; name: FUN_00164c80
 */


void FUN_00164c80(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0x10);
  FUN_0016a400();
  if (iVar2 == 0x10a) {
    if (*(int *)(param_1 + 0x10) != 0x124) {
      FUN_00166920(param_1,0x124);
                    /* WARNING: Does not return */
      pcVar4 = (code *)UndefinedInstructionException(0,0x164e2c);
      (*pcVar4)();
    }
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    FUN_0016a400(param_1);
  }
  else {
    uVar9 = FUN_0016d990(*(undefined8 *)(param_1 + 0x38),"break");
  }
  lVar10 = *(long *)(param_1 + 0x58);
  iVar2 = *(int *)(lVar10 + 0x18);
  lVar7 = (long)iVar2;
  if (iVar2 < *(int *)(lVar10 + 0x1c)) {
    lVar5 = *(long *)(lVar10 + 0x10);
  }
  else {
    lVar5 = FUN_00161400(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar10 + 0x10),
                         (int *)(lVar10 + 0x1c),0x18,0x7fff,"labels/gotos");
    *(long *)(lVar10 + 0x10) = lVar5;
  }
  lVar6 = lVar7 * 0x18;
  *(undefined8 *)(lVar5 + lVar6) = uVar9;
  *(undefined4 *)(*(long *)(lVar10 + 0x10) + lVar6 + 0xc) = uVar1;
  *(undefined1 *)(*(long *)(lVar10 + 0x10) + lVar6 + 0x10) =
       *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x3a);
  *(undefined4 *)(*(long *)(lVar10 + 0x10) + lVar6 + 8) = param_2;
  *(int *)(lVar10 + 0x18) = iVar2 + 1;
  lVar10 = *(long *)(param_1 + 0x58);
  iVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 8);
  if (iVar3 < *(int *)(lVar10 + 0x28)) {
    lVar5 = *(long *)(lVar10 + 0x10);
    plVar8 = (long *)(*(long *)(lVar10 + 0x20) + (long)iVar3 * 0x18);
    lVar10 = (long)*(int *)(lVar10 + 0x28) - (long)iVar3;
    do {
      if (*plVar8 == *(long *)(lVar5 + lVar7 * 0x18)) {
        if (*(byte *)(plVar8 + 2) < *(byte *)(lVar5 + lVar7 * 0x18 + 0x10)) {
          FUN_00167440(*(long *)(param_1 + 0x30),*(undefined4 *)(lVar5 + lVar7 * 0x18 + 8));
        }
        FUN_001667f0(param_1,iVar2,plVar8);
        return;
      }
      plVar8 = plVar8 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}


