/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00841f30; name: FUN_00841f30
 */


void FUN_00841f30(undefined8 param_1,long param_2,ushort param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  if (*(long *)(param_2 + 8) == 0) {
    if ((param_3 < 2) || (param_3 == 0xffff)) {
      local_58[0] = 0x10407;
    }
    else {
      uVar1 = FUN_007e336c();
      uVar3 = (ulong)param_3;
      puVar2 = (undefined2 *)FUN_0081a750(uVar3 * 0x5b8,uVar1);
      if (puVar2 != (undefined2 *)0x0) {
        puVar4 = puVar2;
        do {
          *puVar4 = 0;
          *(undefined1 *)(puVar4 + 1) = 0;
          puVar4[2] = 0;
          memset(puVar4 + 3,0,0x5a0);
          *(undefined8 *)(puVar4 + 0x2d4) = 0;
          uVar3 = uVar3 - 1;
          *(undefined8 *)(puVar4 + 0x2d8) = 0;
          puVar4 = puVar4 + 0x2dc;
        } while (uVar3 != 0);
      }
      *(ushort *)(param_2 + 0x10) = param_3;
      *(undefined2 **)(param_2 + 8) = puVar2;
      local_58[0] = 0;
    }
  }
  else {
    local_58[0] = 0x10402;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_58);
  return;
}


