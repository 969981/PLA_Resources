/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084f8cc; name: FUN_0084f8cc
 */


void FUN_0084f8cc(undefined8 param_1,long param_2,ushort param_3,undefined2 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if ((ushort)(param_3 - 1) < 0x18) {
    *(ushort *)(param_2 + 0x5a) = param_3;
    *(undefined2 *)PTR_DAT_04378048 = 500;
    FUN_007ecf14(param_2 + 0x68);
    *(undefined2 *)PTR_DAT_04378050 = param_4;
    uVar1 = FUN_007e336c();
    uVar4 = (ulong)param_3;
    lVar2 = FUN_0081a750(uVar4 * 0x34,uVar1);
    if (lVar2 != 0) {
      lVar3 = lVar2 + 0x30;
      do {
        *(undefined8 *)(lVar3 + -4) = 0;
        uVar4 = uVar4 - 1;
        *(undefined8 *)(lVar3 + -0x30) = 0;
        lVar3 = lVar3 + 0x34;
      } while (uVar4 != 0);
    }
    *(long *)(param_2 + 0x60) = lVar2;
    local_40[0] = 0;
  }
  else {
    local_40[0] = 0x10407;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


