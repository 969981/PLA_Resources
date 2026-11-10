/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845b20; name: FUN_00845b20
 */


void FUN_00845b20(undefined8 param_1,long param_2,ushort param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  *(ushort *)(param_2 + 0x10) = param_3;
  if (param_3 < 2) {
    local_48[0] = 0x10407;
  }
  else {
    uVar1 = FUN_007e336c();
    uVar4 = (ulong)param_3;
    lVar2 = FUN_0081a750(uVar4 * 0x650,uVar1);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      do {
        FUN_007f065c(lVar3);
        uVar4 = uVar4 - 1;
        lVar3 = lVar3 + 0x650;
      } while (uVar4 != 0);
    }
    *(long *)(param_2 + 8) = lVar2;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


