/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f30254; name: FUN_02f30254
 */


void FUN_02f30254(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x90))(param_1);
  }
  plVar1 = (long *)(param_1[3] + 0x18);
  uVar2 = *(ushort *)(param_1[3] + 0x198);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,0);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    (**(code **)(*plVar1 + 0x58))();
  }
  lVar3 = param_1[3];
  fVar4 = exp2f(*(float *)(lVar3 + 0x7c) * 0.00083333335);
  fVar4 = (float)uVar5 / fVar4;
  *(byte *)(lVar3 + 0x2a2) = *(byte *)(lVar3 + 0x2a2) & 0x9f | 0x18;
  FUN_02f111b8(fVar4,lVar3,3,0);
  lVar3 = param_1[3];
  FUN_02edd0ac(uVar5,fVar4,DAT_0440a170,*(undefined4 *)(lVar3 + 0x210),
               *(undefined4 *)(*(long *)(lVar3 + 0x180) + 0x10),**(undefined4 **)(lVar3 + 0x230),
               (*(ushort *)(*(undefined4 **)(lVar3 + 0x230) + 3) & 0x7c) == 4);
  if ((*(byte *)(param_1[3] + 10) >> 4 & 1) == 0) {
    return;
  }
  FUN_02ede24c(DAT_0440a178,*(undefined4 *)(param_1[3] + 0x210),param_1);
  return;
}


