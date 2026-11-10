/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2d7b0; name: FUN_02f2d7b0
 */


void FUN_02f2d7b0(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
  plVar1 = (long *)(lVar5 + 0x18);
  if ((*(ushort *)(lVar5 + 0x198) & 1) == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,0);
  }
  else if ((*(ushort *)(lVar5 + 0x198) >> 4 & 1) != 0) {
    (**(code **)(*plVar1 + 0x58))();
  }
  if ((*(byte *)(lVar5 + 0x199) & 3) != 0) {
    uVar3 = FUN_02ecf2b8(lVar5);
    if (((uVar3 & 1) != 0) || (*(int *)(param_1 + 0x15c) == 0)) {
      *(undefined8 *)(param_1 + 0x158) = 0x200000001;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(lVar5 + 0x160) = 0;
    FUN_02eceac4(lVar5);
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  lVar5 = *(long *)(param_1 + 8);
  if (*(float *)(lVar5 + 0x60) * 0.05 < -37.0) {
    fVar6 = 0.0;
  }
  else {
    uVar4 = (uint)(*(float *)(lVar5 + 0x60) * 1393317.6 + 1.0653532e+09);
    fVar6 = (float)(uVar4 & 0x7fffff | 0x3f800000);
    fVar6 = (fVar6 * (fVar6 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar4 & 0xff800000);
  }
  *(float *)(param_1 + 0x10) = *(float *)(lVar5 + 200) * fVar6;
  if (((*(byte *)(lVar5 + 0x10c) >> 3 & 1) != 0) && (iVar2 = FUN_02e9d1a0(lVar5), iVar2 != 0)) {
    FUN_02e73cd0(lVar5,lVar5 + 0x140);
  }
  FUN_02f2547c(param_1);
  return;
}


