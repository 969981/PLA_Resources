/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f01e08; name: FUN_02f01e08
 */


void FUN_02f01e08(long param_1,undefined4 *param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar5 + 0x2a3);
  if ((uVar1 >> 0x17 & 1) == 0) {
    uVar4 = 0;
    if ((ulong)DAT_042ab258 != 0) {
      uVar4 = ((ulong)*(uint *)(lVar5 + 0x29c) * (ulong)*(uint *)(param_1 + 0xac)) /
              (ulong)DAT_042ab258;
    }
    uVar3 = *(ushort *)(lVar5 + 0x2a0);
  }
  else {
    fVar6 = (float)*(uint *)(param_1 + 0x28);
    uVar3 = *(ushort *)(lVar5 + 0x2a0);
    if (uVar3 != 0) {
      fVar6 = fVar6 + (float)(int)(uVar3 - 1) *
                      (float)((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) + 1);
    }
    uVar4 = (ulong)(uint)(int)(((fVar6 * 1000.0) / (float)*(uint *)(param_1 + 0xac)) * 0.001 *
                              (float)*(uint *)(param_1 + 0xac) * *(float *)(lVar5 + 0x29c));
  }
  FUN_02f030a0(uVar4,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),uVar3,param_2,
               param_3);
  if (((uVar1 >> 0x18 & 1) == 0) || (lVar5 = FUN_02eb7d5c(param_1 + 0x88,*param_2), lVar5 == 0)) {
    return;
  }
  uVar2 = *(undefined4 *)(lVar5 + 4);
  *param_2 = uVar2;
  FUN_02f030a0(uVar2,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),*param_3,
               param_2,param_3);
  return;
}


