/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00819c10; name: FUN_00819c10
 */


void FUN_00819c10(undefined4 *param_1,long param_2,long param_3)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  long lVar4;
  ushort uVar5;
  int local_70 [4];
  undefined1 auStack_60 [24];
  short local_48;
  
  lVar4 = *(long *)(param_2 + 0x58);
  FUN_007e3428(auStack_60,lVar4 + 0x1238);
  if (*(short *)(param_3 + 0x12) == 0) {
    uVar3 = FUN_007f02fc(param_2 + 8);
    *(undefined2 *)(param_3 + 0x12) = uVar3;
  }
  *(undefined2 *)(param_3 + 0xe) = 1;
  FUN_007f031c(param_3);
  local_70[0] = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_70);
  if (*(char *)(lVar4 + 0x1190) == '\0') {
    sVar1 = *(short *)(lVar4 + 0x12c4);
    sVar2 = *(short *)(lVar4 + 0x12c6) - sVar1;
    if (sVar2 != -1) {
      uVar5 = 0;
      while( true ) {
        local_48 = sVar1 + uVar5;
        FUN_00819e6c(local_70,param_2,param_3,auStack_60);
        if (local_70[0] != 0) {
          FUN_007ee660(param_1,local_70);
        }
        uVar5 = uVar5 + 1;
        if ((ushort)(sVar2 + 1U) <= uVar5) break;
        sVar1 = *(short *)(lVar4 + 0x12c4);
      }
    }
  }
  else {
    local_48 = -0x63c0;
    FUN_00819e6c(local_70,param_2,param_3,auStack_60);
    FUN_007ee660(param_1,local_70);
  }
  FUN_007e34a4(auStack_60);
  return;
}


