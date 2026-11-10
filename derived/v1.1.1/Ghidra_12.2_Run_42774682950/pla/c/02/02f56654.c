/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f56654; name: FUN_02f56654
 */


bool FUN_02f56654(long param_1,long param_2,undefined8 param_3,int param_4,long *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  undefined8 local_30;
  undefined1 local_28;
  long local_18;
  
  local_30 = 0x400000000;
  local_28 = 0;
  lVar4 = *(long *)(param_1 + 0x80);
  lVar5 = *(long *)(param_2 + 0x18);
  piVar6 = *(int **)(lVar4 + 200);
  uVar2 = *(uint *)(lVar4 + 0xd0);
  if ((uVar2 == 0) || (*piVar6 == *(int *)(lVar5 + 4))) {
    piVar9 = piVar6;
  }
  else {
    lVar7 = (ulong)uVar2 * 0x10;
    piVar10 = piVar6;
    do {
      lVar7 = lVar7 + -0x10;
      if (lVar7 == 0) goto LAB_02f56764;
      piVar9 = piVar10 + 4;
      piVar1 = piVar10 + 4;
      piVar10 = piVar9;
    } while (*piVar1 != *(int *)(lVar5 + 4));
  }
  if ((piVar9 == piVar6 + (ulong)uVar2 * 4) || (lVar7 = *(long *)(piVar9 + 2), lVar7 == 0)) {
LAB_02f56764:
    iVar3 = 2;
  }
  else {
    if (*(short *)(lVar7 + 0x1a) == 0x10) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x60);
      iVar3 = FUN_02f3e7e8(lVar8 + 0x58,param_1,lVar4,lVar7,*(undefined8 *)(lVar8 + 0x30),&local_30,
                           lVar8 + 0x18,lVar5,*(undefined4 *)(param_2 + 0x20),
                           *(undefined4 *)(param_2 + 0x24),param_4,&local_18);
      lVar4 = local_18 + 0x58;
    }
    else {
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x60);
      iVar3 = FUN_02f36844(param_1,lVar4,lVar7,*(undefined8 *)(lVar8 + 0x30),&local_30,lVar8 + 0x18,
                           *(undefined1 *)(lVar8 + 0x38),lVar5,*(undefined4 *)(param_2 + 0x24),
                           *(int *)(param_2 + 0x28) + param_4,&local_18);
      lVar4 = local_18 + 0x300;
    }
    lVar5 = 0;
    if (local_18 != 0) {
      lVar5 = lVar4;
    }
    *param_5 = lVar5;
  }
  return iVar3 == 1;
}


