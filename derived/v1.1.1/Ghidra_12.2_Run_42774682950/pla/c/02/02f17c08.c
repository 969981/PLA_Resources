/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f17c08; name: FUN_02f17c08
 */


void FUN_02f17c08(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  for (lVar2 = *(long *)(param_1 + 0x20); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x40)) {
    if ((((*(long *)(lVar2 + 0x20) != 0) && ((~*(byte *)(lVar2 + 0x168) & 3) != 0)) &&
        ((*(byte *)(lVar2 + 0x168) >> 3 & 1) == 0)) &&
       (lVar1 = *(long *)(*(long *)(lVar2 + 0x50) + 0x58), lVar1 != 0)) {
      FUN_02f295dc(param_1,lVar1,lVar2);
    }
  }
  lVar2 = FUN_02f29984(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    if (((*(short *)(lVar2 + 0x12) != 0) &&
        ((*(long *)(param_1 + 0x68) == 0 || (*(long *)(*(long *)(param_1 + 0x68) + 0x88) == 0)))) &&
       (lVar1 = FUN_02eca560(param_1 + 0x68), lVar1 != 0)) {
      fVar3 = *(float *)(lVar1 + 0x140) * *(float *)(param_1 + 0x98) * (float)DAT_042aa0e8;
      fVar4 = DAT_042aa0e8._4_4_ * *(float *)(param_1 + 0x9c) * *(float *)(lVar1 + 0x144);
      if (*(long *)(lVar1 + 0x148) != 0) {
        FUN_02ef4730(fVar3,fVar4,lVar2,*(undefined8 *)(lVar1 + 0x150));
        *(undefined2 *)(*(long *)(lVar1 + 0x150) + 0x12) = *(undefined2 *)(lVar2 + 0x12);
      }
      (**(code **)(**(long **)(lVar1 + 0x138) + 0x48))(fVar3,fVar4,*(long **)(lVar1 + 0x138),lVar2);
    }
    lVar2 = 0;
  }
  *(long *)(param_1 + 0x58) = lVar2;
  return;
}


