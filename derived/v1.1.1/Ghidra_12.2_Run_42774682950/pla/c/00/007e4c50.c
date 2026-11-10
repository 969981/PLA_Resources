/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e4c50; name: FUN_007e4c50
 */


void FUN_007e4c50(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar3 = FUN_007e2d00();
  if ((uVar3 & 1) == 0) {
    local_38[0] = 0x1040c;
  }
  else {
    uVar3 = FUN_007e30d0();
    puVar2 = PTR_DAT_04377420;
    if ((uVar3 & 1) == 0) {
      local_38[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_04377420 == 0) {
      uVar4 = FUN_007e336c();
      lVar5 = FUN_0081a7a0(0x5b8,uVar4,8);
      if (lVar5 == 0) {
        local_38[0] = 0x10401;
        *(undefined8 *)PTR_DAT_04377428 = 0;
      }
      else {
        lVar6 = 0;
        do {
          puVar1 = (undefined4 *)(lVar5 + lVar6);
          lVar6 = lVar6 + 6;
          *puVar1 = 0;
          *(undefined2 *)(puVar1 + 1) = 0;
        } while (lVar6 != 0x5b8);
        *(long *)PTR_DAT_04377428 = lVar5;
        FUN_007e4ae0(lVar5);
        *(long *)puVar2 = lVar5;
        local_38[0] = 0;
      }
    }
    else {
      local_38[0] = 0x1040f;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


