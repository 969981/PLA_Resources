/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e2714; name: FUN_007e2714
 */


void FUN_007e2714(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  Result *pRVar5;
  undefined8 *puVar6;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined4 local_28 [2];
  
  if ((*(int *)(param_2 + 0x5c) == 1) || (*(int *)(param_2 + 0x5c) == 4)) {
LAB_007e2790:
    local_38 = CONCAT44(local_38._4_4_,0x10408);
  }
  else {
    cVar1 = FUN_008473d0();
    if ((cVar1 == -3) || (lVar2 = FUN_008473ec(param_2), lVar2 == 0)) goto LAB_007e2790;
    lVar2 = FUN_00847388(param_2);
    lVar3 = FUN_008473ec(param_2);
    if (lVar2 != lVar3) {
      *(undefined4 *)(param_2 + 0x5c) = 1;
      local_38 = 0;
      FUN_007ecf14(&local_38);
      *(long *)(param_2 + 0x68) = local_38;
      uVar4 = FUN_008473ec(param_2);
      FUN_007e297c(&local_38,param_2,uVar4);
      local_48[0]._0_4_ = 0x2c0a;
      puVar6 = local_48;
      pRVar5 = (Result *)local_28;
      local_28[0] = 0;
      goto LAB_007e27ac;
    }
    *(undefined4 *)(param_2 + 0x5c) = 3;
    *(undefined1 *)(param_2 + 0x80) = 1;
    local_38 = (ulong)local_38._4_4_ << 0x20;
  }
  puVar6 = &local_38;
  local_48[0]._0_4_ = 0;
  pRVar5 = (Result *)local_48;
LAB_007e27ac:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)puVar6 | 4),pRVar5);
  FUN_007ee578(param_1,&local_38);
  return;
}


