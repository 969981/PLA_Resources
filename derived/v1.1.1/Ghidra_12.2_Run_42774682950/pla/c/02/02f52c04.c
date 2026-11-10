/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f52c04; name: FUN_02f52c04
 */


undefined8 FUN_02f52c04(undefined8 *param_1,int param_2,int *param_3,uint param_4)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  piVar5 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 == 0) || (*piVar5 == param_2)) {
    piVar6 = piVar5;
  }
  else {
    lVar4 = (ulong)uVar3 * 0x38;
    piVar8 = piVar5;
    do {
      lVar4 = lVar4 + -0x38;
      if (lVar4 == 0) goto LAB_02f52d34;
      piVar6 = piVar8 + 0xe;
      piVar1 = piVar8 + 0xe;
      piVar8 = piVar6;
    } while (*piVar1 != param_2);
  }
  if (piVar6 == piVar5 + (ulong)uVar3 * 0xe) {
LAB_02f52d34:
    uVar9 = 2;
  }
  else {
    *(undefined8 *)param_3 = *(undefined8 *)(piVar6 + 2);
    uVar7 = *(undefined8 *)(piVar6 + 8);
    uVar9 = *(undefined8 *)(piVar6 + 4);
    uVar2 = *(undefined8 *)(piVar6 + 6);
    param_3[8] = piVar6[10];
    *(undefined8 *)(param_3 + 4) = uVar2;
    *(undefined8 *)(param_3 + 6) = uVar7;
    *(undefined8 *)(param_3 + 2) = uVar9;
    if (((param_4 & 1) != 0) && (((0 < param_3[2] || (0 < param_3[1])) || (0 < param_3[3])))) {
      lVar4 = nn::os::GetSystemTick();
      *param_3 = *param_3 + (int)((float)(lVar4 - *(long *)(piVar6 + 0xc)) / DAT_0440a328);
    }
    uVar9 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return uVar9;
}


