/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f52adc; name: FUN_02f52adc
 */


undefined8 FUN_02f52adc(long *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  piVar7 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 == 0) || (*piVar7 == param_2)) {
    piVar9 = piVar7;
  }
  else {
    lVar8 = (ulong)uVar3 * 0x38;
    piVar10 = piVar7;
    do {
      lVar8 = lVar8 + -0x38;
      if (lVar8 == 0) goto LAB_02f52b2c;
      piVar9 = piVar10 + 0xe;
      piVar1 = piVar10 + 0xe;
      piVar10 = piVar9;
    } while (*piVar1 != param_2);
  }
  if (piVar9 == piVar7 + (ulong)uVar3 * 0xe) {
LAB_02f52b2c:
    uVar4 = *(uint *)((long)param_1 + 0xc);
    if (uVar3 < uVar4) {
joined_r0x02f52bf0:
      if (uVar3 < uVar4) {
        uVar3 = *(uint *)(param_1 + 1);
        lVar8 = *param_1;
        *(uint *)(param_1 + 1) = uVar3 + 1;
        piVar7 = (int *)(lVar8 + (ulong)uVar3 * 0x38);
        if (piVar7 != (int *)0x0) {
          *piVar7 = param_2;
          piVar9 = (int *)(lVar8 + (ulong)uVar3 * 0x38);
          goto LAB_02f52b6c;
        }
      }
    }
    else {
      iVar2 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar2 = 1;
      }
      uVar6 = FUN_02f52d3c(param_1,iVar2);
      if ((uVar6 & 1) != 0) {
        uVar4 = *(uint *)((long)param_1 + 0xc);
        goto joined_r0x02f52bf0;
      }
    }
    uVar5 = 2;
  }
  else {
LAB_02f52b6c:
    piVar9[10] = 0;
    piVar9[6] = 0;
    piVar9[7] = 0;
    piVar9[8] = 0;
    piVar9[9] = 0;
    piVar9[2] = 0;
    piVar9[3] = 0;
    piVar9[4] = 0;
    piVar9[5] = 0;
    uVar5 = nn::os::GetSystemTick();
    *(undefined8 *)(piVar9 + 0xc) = uVar5;
    uVar5 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return uVar5;
}


