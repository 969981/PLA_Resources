/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03147f08; name: FUN_03147f08
 */


bool FUN_03147f08(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_50;
  ulong uStack_48;
  float local_40 [4];
  
  if (0 < (int)*(uint *)(param_1 + 0x58)) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x50) + uVar3 * 8) == param_4) {
        if (-1 < (int)uVar3) goto LAB_03147ffc;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + 0x58) != uVar3);
  }
  lVar2 = (**(code **)(*param_3 + 0x118))(param_3,param_4);
  lVar2 = (**(code **)(*param_3 + 0x270))(param_3,*(undefined4 *)(lVar2 + 0x80));
  local_50 = CONCAT44((float)*(double *)(lVar2 + 0x18),(float)*(double *)(lVar2 + 0x10));
  uStack_48 = (ulong)(uint)(float)*(double *)(lVar2 + 0x20);
  FUN_032cc45c(local_40,param_2,&local_50);
  if ((local_40[0] < 0.1) || (*(float *)(param_1 + 0x68) < local_40[0])) {
LAB_03147ffc:
    bVar1 = false;
  }
  else {
    bVar1 = *(float *)(param_1 + 100) <=
            (float)((int)(short)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x30) << 0x10);
  }
  return bVar1;
}


