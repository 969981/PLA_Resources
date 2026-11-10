/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef32e4; name: FUN_02ef32e4
 */


undefined4 FUN_02ef32e4(undefined8 param_1,long param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  if ((param_2 == 0) || (lVar4 = FUN_02ef3428(param_2), lVar4 == 0)) {
    return 2;
  }
  piVar5 = *(int **)(lVar4 + 0x20);
  uVar3 = *(uint *)(lVar4 + 0x28);
  if ((uVar3 == 0) || (*piVar5 == param_3)) {
    piVar8 = piVar5;
  }
  else {
    lVar7 = (ulong)uVar3 * 0xc;
    piVar9 = piVar5;
    do {
      lVar7 = lVar7 + -0xc;
      if (lVar7 == 0) goto LAB_02ef3394;
      piVar1 = piVar9 + 3;
      piVar8 = piVar9 + 3;
      piVar9 = piVar9 + 3;
    } while (*piVar1 != param_3);
  }
  if (piVar8 != piVar5 + (ulong)uVar3 * 3) {
    piVar8 = piVar8 + 1;
    *(undefined8 *)piVar8 = *param_4;
    goto LAB_02ef3374;
  }
LAB_02ef3394:
  uVar10 = *(uint *)(lVar4 + 0x2c);
  if (uVar3 < uVar10) {
LAB_02ef33d8:
    if (uVar3 < uVar10) {
      uVar3 = *(uint *)(lVar4 + 0x28);
      *(uint *)(lVar4 + 0x28) = uVar3 + 1;
      if (piVar5 + (ulong)uVar3 * 3 != (int *)0x0) {
        piVar5[(ulong)uVar3 * 3] = param_3;
        piVar8 = piVar5 + (ulong)uVar3 * 3 + 1;
        *(undefined8 *)piVar8 = *param_4;
        goto LAB_02ef3374;
      }
    }
  }
  else {
    iVar2 = uVar10 + (uVar10 >> 1);
    if (uVar10 == 0) {
      iVar2 = 1;
    }
    uVar10 = iVar2 + uVar10;
    piVar5 = (int *)(*DAT_0442d148)(0,piVar5,(ulong)uVar10 * 0xc);
    if (piVar5 != (int *)0x0) {
      *(int **)(lVar4 + 0x20) = piVar5;
      *(uint *)(lVar4 + 0x2c) = uVar10;
      goto LAB_02ef33d8;
    }
  }
  piVar8 = (int *)0x0;
LAB_02ef3374:
  uVar6 = 1;
  if (piVar8 == (int *)0x0) {
    uVar6 = 2;
  }
  return uVar6;
}


