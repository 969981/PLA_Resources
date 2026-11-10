/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb69d8; name: FUN_02eb69d8
 */


int FUN_02eb69d8(long param_1,int param_2,void *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)(param_1 + 0x18);
  piVar7 = (int *)*puVar9;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((uVar2 == 0) || (*piVar7 == param_2)) {
    piVar4 = piVar7;
  }
  else {
    lVar5 = (ulong)uVar2 * 0x38;
    piVar8 = piVar7;
    do {
      lVar5 = lVar5 + -0x38;
      if (lVar5 == 0) goto LAB_02eb6a2c;
      piVar4 = piVar8 + 0xe;
      piVar1 = piVar8 + 0xe;
      piVar8 = piVar4;
    } while (*piVar1 != param_2);
  }
  if (piVar4 == piVar7 + (ulong)uVar2 * 0xe) {
LAB_02eb6a2c:
    piVar4 = (int *)FUN_02eb6c08(puVar9,param_2);
    if (piVar4 == (int *)0x0) {
      return 0x34;
    }
    *piVar4 = param_2;
    iVar3 = FUN_02eb6fe0(piVar4,param_1);
    if (iVar3 != 1) {
      FUN_02eb6c94(puVar9,param_2);
      return iVar3;
    }
  }
  else {
    piVar4 = piVar4 + 2;
  }
  plVar6 = (long *)(piVar4 + 4);
  if (param_4 == 0) {
    if (*plVar6 != 0) {
      (*DAT_0442d150)(0);
      *plVar6 = 0;
    }
    piVar4[6] = 0;
    piVar4[7] = 0;
  }
  else {
    if (*plVar6 == 0) {
      piVar4[6] = 0;
      piVar4[7] = 0;
    }
    else {
      (*DAT_0442d150)(0);
      *plVar6 = 0;
      piVar4[6] = 0;
      piVar4[7] = 0;
    }
    if (param_3 != (void *)0x0) {
      piVar4[8] = 1;
      piVar4[6] = param_4 + 2;
      lVar5 = FUN_02f59e30(0,(param_4 + 2) * 0x14);
      *(long *)(piVar4 + 4) = lVar5;
      if (lVar5 == 0) {
        piVar4[6] = 0;
      }
      else {
        piVar4[7] = 0;
        memcpy((void *)(lVar5 + 0xc),param_3,(ulong)(uint)(param_4 * 0xc));
        *(undefined4 *)(*(long *)(piVar4 + 4) + 8) = 9;
        **(undefined4 **)(piVar4 + 4) = 0xff7fffff;
        *(undefined4 *)(*(long *)(piVar4 + 4) + 4) = *(undefined4 *)(*(long *)(piVar4 + 4) + 0x10);
        *(undefined4 *)(*(long *)(piVar4 + 4) + (ulong)(piVar4[6] - 1) * 0xc + 8) = 9;
        *(undefined4 *)(*(long *)(piVar4 + 4) + (ulong)(piVar4[6] - 1) * 0xc) = 0x7f7fffff;
        *(undefined4 *)(*(long *)(piVar4 + 4) + (ulong)(piVar4[6] - 1) * 0xc + 4) =
             *(undefined4 *)(*(long *)(piVar4 + 4) + (ulong)(piVar4[6] - 2) * 0xc + 4);
        FUN_02e9b180(plVar6);
      }
    }
  }
  iVar3 = FUN_02eb6d68(piVar4);
  plVar6 = *(long **)(piVar4 + 2);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x188))(plVar6,0,0);
  }
  return iVar3;
}


