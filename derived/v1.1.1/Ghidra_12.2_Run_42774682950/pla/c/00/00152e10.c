/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00152e10; name: FUN_00152e10
 */


undefined8
FUN_00152e10(long param_1,uint param_2,int param_3,int param_4,undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long local_40;
  int local_38;
  
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    if (param_4 < 1) {
      if (param_4 < -0xf4627) {
        if (param_4 == -0xf4628) {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
        }
        else {
          plVar4 = (long *)**(long **)(param_1 + 0x20);
          puVar3 = &DAT_039c5c28;
          if ((int)plVar4[1] != 0x16) {
            lVar2 = *plVar4;
            puVar3 = &DAT_039c5c28;
            if (-param_4 + -0xf4628 <= (int)(uint)*(byte *)(lVar2 + 10)) {
              puVar3 = (undefined8 *)(lVar2 + (long)(-param_4 + -0xf4629) * 0x10 + 0x20);
            }
          }
        }
      }
      else {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_4 * 0x10);
      }
    }
    else {
      puVar3 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_4 * 0x10);
      if (*(undefined8 **)(param_1 + 0x10) <= puVar3) {
        puVar3 = &DAT_039c5c28;
      }
    }
    lVar2 = (long)puVar3 - *(long *)(param_1 + 0x38);
  }
  local_40 = *(long *)(param_1 + 0x10) + (long)(int)~param_2 * 0x10;
  if ((param_6 == 0) || (*(short *)(param_1 + 0xc4) != 0)) {
    local_38 = param_3;
    uVar1 = FUN_0015b7f0(param_1,&LAB_00152fc0,&local_40,local_40 - *(long *)(param_1 + 0x38),lVar2)
    ;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    *(long *)(lVar5 + 0x20) = param_6;
    *(undefined8 *)(lVar5 + 0x30) = param_5;
    *(long *)(lVar5 + 0x38) = local_40 - *(long *)(param_1 + 0x38);
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_1 + 0xb0);
    *(long *)(param_1 + 0xb0) = lVar2;
    *(ushort *)(lVar5 + 0x42) =
         *(ushort *)(lVar5 + 0x42) & 0xfffe | (ushort)*(byte *)(param_1 + 0xcc) | 0x10;
    FUN_0015b0e0(param_1,local_40,param_3);
    *(ushort *)(lVar5 + 0x42) = *(ushort *)(lVar5 + 0x42) & 0xffef;
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar5 + 0x28);
  }
  if (param_3 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 8) < *(ulong *)(param_1 + 0x10)) {
      *(ulong *)(*(long *)(param_1 + 0x20) + 8) = *(ulong *)(param_1 + 0x10);
    }
  }
  return uVar1;
}


