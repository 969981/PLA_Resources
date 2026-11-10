/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0a320; name: FUN_02e0a320
 */


void FUN_02e0a320(float param_1,float param_2,undefined8 *param_3,long *param_4,long *param_5,
                 long param_6,ulong param_7,ulong param_8)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  lVar5 = *param_4;
  uVar1 = *(ushort *)(param_4 + 2);
  uVar3 = (ulong)*(ushort *)((long)param_5 + 0x12);
  pvVar6 = (void *)*param_3;
  uVar2 = *(ushort *)(param_3 + 2);
  switch(*(undefined4 *)(param_6 + 0x138)) {
  case 0:
  case 2:
    memcpy(pvVar6,(void *)(*param_5 + (param_7 & 0xff) * (ulong)*(ushort *)(param_5 + 2) * 4),
           uVar3 << 2);
    break;
  case 1:
  case 3:
    memset(pvVar6,0,uVar3 << 2);
  }
  if (*(uint *)(param_6 + 0x13c) < 4) {
    pvVar6 = (void *)((long)pvVar6 + (ulong)uVar2 * 4);
    switch(*(uint *)(param_6 + 0x13c)) {
    default:
      memcpy(pvVar6,(void *)(*param_5 + ((param_7 & 0xff) * 4 + 4) * (ulong)*(ushort *)(param_5 + 2)
                            ),uVar3 << 2);
      break;
    case 1:
    case 3:
      memset(pvVar6,0,uVar3 << 2);
    }
  }
  FUN_02e09080(param_6 + (param_8 & 0xff) * 0x60,param_3,param_4,param_6 + 0x160,param_6 + 0x120,
               param_6 + 0x140,*(undefined1 *)(param_6 + 0x1b4));
  lVar4 = (param_7 & 0xff) * 4;
  FUN_02e0add0(*(undefined4 *)(param_6 + 400),*(undefined4 *)(param_6 + 0x150),
               *(float *)(param_6 + 0x194) * param_2,*(float *)(param_6 + 0x154) * param_1,
               *param_5 + lVar4 * (ulong)*(ushort *)(param_5 + 2),lVar5,uVar3);
  FUN_02e0add0(*(undefined4 *)(param_6 + 400),*(undefined4 *)(param_6 + 0x150),
               *(float *)(param_6 + 0x194) * param_2,*(float *)(param_6 + 0x154) * param_1,
               *param_5 + (lVar4 + 4) * (ulong)*(ushort *)(param_5 + 2),lVar5 + (ulong)uVar1 * 4,
               uVar3);
  return;
}


