/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9ca34; name: FUN_02e9ca34
 */


void FUN_02e9ca34(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  float fVar2;
  
  if ((*(byte *)(param_2 + 0x180) >> 6 & 1) != 0) {
    return;
  }
  fVar2 = (float)param_1;
  switch(param_3) {
  case 0x12:
    *(float *)(param_2 + 0x100) = *(float *)(param_2 + 0x100) + fVar2;
    break;
  case 0x13:
    *(float *)(param_2 + 0x104) = *(float *)(param_2 + 0x104) + fVar2;
    break;
  case 0x14:
    if (*(long *)(param_2 + 0x160) != 0) {
      fVar2 = (float)FUN_02e9cc38(param_1,param_2);
      *(float *)(*(long *)(param_2 + 0x160) + 4) =
           *(float *)(*(long *)(param_2 + 0x160) + 4) + fVar2;
    }
    break;
  case 0x15:
    if (*(long *)(param_2 + 0x160) != 0) {
      fVar2 = (float)FUN_02e9cc38(param_1,param_2);
      *(float *)(*(long *)(param_2 + 0x160) + 0xc) =
           *(float *)(*(long *)(param_2 + 0x160) + 0xc) + fVar2;
    }
    break;
  case 0x16:
    if (*(long *)(param_2 + 0x160) != 0) {
      fVar2 = (float)FUN_02e9cc38(param_1,param_2);
      *(float *)(*(long *)(param_2 + 0x160) + 8) =
           *(float *)(*(long *)(param_2 + 0x160) + 8) + fVar2;
    }
    break;
  case 0x17:
    *(float *)(param_2 + 0x120) = fVar2;
    break;
  case 0x18:
    *(float *)(param_2 + 0x108) = fVar2;
    break;
  case 0x2e:
    *(ushort *)(param_2 + 0x134) =
         *(ushort *)(param_2 + 0x134) & 0xffbf | (ushort)(fVar2 != 0.0) << 6;
  default:
    lVar1 = *(long *)(param_2 + 0x160);
    goto joined_r0x02e9cbe0;
  case 0x40:
    *(byte *)(param_2 + 0x10c) = *(byte *)(param_2 + 0x10c) & 0xf8 | (byte)(int)fVar2 & 7;
    break;
  case 0x41:
    *(ushort *)(param_2 + 0x134) =
         *(ushort *)(param_2 + 0x134) & 0xff7f | (ushort)(fVar2 != 0.0) << 7;
    lVar1 = *(long *)(param_2 + 0x160);
    if (lVar1 == 0) {
      return;
    }
    goto LAB_02e9cb44;
  case 0x45:
    *(byte *)(param_2 + 0x10c) = *(byte *)(param_2 + 0x10c) & 0xf7 | (0.0 < fVar2) << 3;
    break;
  case 0x46:
    FUN_02e9c0e4(param_2);
    lVar1 = *(long *)(param_2 + 0x160);
joined_r0x02e9cbe0:
    if (lVar1 != 0) {
LAB_02e9cb44:
      if (param_3 == 0x44) {
        *(int *)(lVar1 + 0x10) = (int)fVar2;
      }
      else {
        if (param_3 == 0x43) {
          FUN_02eb2360(lVar1,(int)fVar2);
          return;
        }
        if (param_3 == 0x42) {
          *(uint *)(lVar1 + 0x30) =
               *(uint *)(lVar1 + 0x30) & 0x7fffffff | (uint)(fVar2 != 0.0) << 0x1f;
        }
      }
    }
  }
  return;
}


