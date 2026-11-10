/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee95f4; name: FUN_02ee95f4
 */


void FUN_02ee95f4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5,
                 long param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  uVar3 = param_4 & 0xffffffff;
  if (((((*param_5 != 0) || ((int)param_5[1] != 0)) || ((int)param_5[2] != 0)) ||
      (((char)param_5[3] != -1 || ((char)param_5[4] != -1)))) || (param_5[5] != 0)) {
    if (param_6 == 0) {
      FUN_02ee9820(param_1,param_2,param_3,uVar3);
      return;
    }
    FUN_02ee9ea8(param_1,param_2,param_3,uVar3);
    return;
  }
  if (param_6 != 0) {
    FUN_02eea568(param_1,param_2,param_3,uVar3,param_6);
    return;
  }
  uVar4 = 1L << (param_4 & 0x3f);
  lVar2 = *(long *)(param_3 + 8);
  puVar5 = *(ulong **)(lVar2 + 0x10);
  uVar1 = *(uint *)(lVar2 + 0x18);
  if ((*(ulong *)(lVar2 + 8) & uVar4) == 0) {
    if (uVar1 != 0) {
      if ((*puVar5 & uVar4) != 0) {
        (**(code **)(*(long *)puVar5[1] + 0x10))(param_1,param_2,(long *)puVar5[1],uVar3);
      }
      if (uVar1 != 1) {
        if ((puVar5[2] & uVar4) != 0) {
          (**(code **)(*(long *)puVar5[3] + 0x10))(param_1,param_2,(long *)puVar5[3],uVar3);
        }
        if (uVar1 != 2) {
          if ((puVar5[4] & uVar4) != 0) {
            (**(code **)(*(long *)puVar5[5] + 0x10))(param_1,param_2,(long *)puVar5[5],uVar3);
          }
          if (uVar1 != 3) {
            lVar2 = (ulong)uVar1 * 0x10 + -0x30;
            puVar5 = puVar5 + 7;
            do {
              if ((puVar5[-1] & uVar4) != 0) {
                (**(code **)(*(long *)*puVar5 + 0x10))(param_1,param_2,(long *)*puVar5,uVar3);
              }
              lVar2 = lVar2 + -0x10;
              puVar5 = puVar5 + 2;
            } while (lVar2 != 0);
          }
        }
      }
    }
  }
  else if ((uVar1 != 0) &&
          ((**(code **)(*(long *)puVar5[1] + 0x10))(param_1,param_2,(long *)puVar5[1],uVar3),
          uVar1 != 1)) {
    lVar2 = (ulong)uVar1 * 0x10 + -0x10;
    puVar5 = puVar5 + 3;
    do {
      (**(code **)(*(long *)*puVar5 + 0x10))(param_1,param_2,(long *)*puVar5,uVar3);
      lVar2 = lVar2 + -0x10;
      puVar5 = puVar5 + 2;
    } while (lVar2 != 0);
  }
  return;
}


