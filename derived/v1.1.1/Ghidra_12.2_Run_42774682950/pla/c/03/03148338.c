/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03148338; name: FUN_03148338
 */


void FUN_03148338(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x48) != -1) {
    lVar1 = (**(code **)(*param_3 + 0x118))(param_3);
    if ((*(float *)(param_1 + 100) *
         (float)((int)(short)((ulong)*(undefined8 *)
                                      (param_3[0x2a] + (ulong)*(uint *)(lVar1 + 0x80) * 0x80 + 0x40)
                             >> 0x30) << 0x10) <= 1.0) &&
       (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x60))) {
      FUN_031481c0(param_1,*(undefined8 *)(param_1 + 0x48),param_3);
      return;
    }
    fVar2 = -*(float *)(param_1 + 0x6c);
    local_40 = CONCAT44((float)((ulong)*param_2 >> 0x20) * fVar2,(float)*param_2 * fVar2);
    uStack_38 = CONCAT44((float)((ulong)param_2[1] >> 0x20) * fVar2,(float)param_2[1] * fVar2);
    (**(code **)(*param_3 + 0x1b0))(param_3,*(undefined8 *)(param_1 + 0x48),&local_40,0);
  }
  return;
}


