/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edaa98; name: FUN_02edaa98
 */


void FUN_02edaa98(long *param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  float local_34;
  
  if ((ulong *)param_1[7] == (ulong *)0x0) {
    uVar2 = 0;
    uVar4 = 0;
    uVar1 = 0;
LAB_02edaad8:
    if ((uVar2 == 0) && (uVar4 == 0)) {
      return;
    }
  }
  else {
    uVar3 = *(ulong *)param_1[7];
    uVar2 = (uint)(uVar3 >> 0x14) & 1;
    uVar1 = (uint)(uVar3 >> 0x15) & 1;
    uVar4 = (uint)(uVar3 >> 0x16) & 1;
    if ((uVar3 >> 0x15 & 1) == 0) goto LAB_02edaad8;
  }
  local_34 = 0.0;
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  if (uVar2 != 0) {
    fVar5 = (float)FUN_02ed2e94(param_1,0x14,param_2);
    *param_3 = fVar5;
    uVar3 = (**(code **)(*param_1 + 0x108))(param_1,&local_34);
    if ((uVar3 & 1) != 0) {
      *param_3 = local_34 * 0.01 * *param_3;
    }
  }
  if (uVar1 != 0) {
    fVar5 = (float)FUN_02ed2e94(param_1,0x15,param_2);
    param_3[2] = fVar5;
    if (local_34 == 0.0) {
      uVar3 = (**(code **)(*param_1 + 0x108))(param_1,&local_34);
      if ((uVar3 & 1) == 0) goto LAB_02edaba0;
      fVar5 = param_3[2];
    }
    param_3[2] = fVar5 * local_34 * 0.01;
  }
LAB_02edaba0:
  if (uVar4 != 0) {
    fVar5 = (float)FUN_02ed2e94(param_1,0x16,param_2);
    param_3[1] = fVar5;
    if (local_34 == 0.0) {
      uVar3 = (**(code **)(*param_1 + 0x108))(param_1,&local_34);
      if ((uVar3 & 1) == 0) {
        return;
      }
      fVar5 = param_3[1];
    }
    param_3[1] = fVar5 * local_34 * 0.01;
  }
  return;
}


