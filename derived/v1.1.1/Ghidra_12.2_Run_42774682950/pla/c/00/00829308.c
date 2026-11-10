/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00829308; name: FUN_00829308
 */


void FUN_00829308(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  uVar3 = FUN_00825860();
  if ((uVar3 & 1) == 0) {
    local_40[0] = 0x1040c;
  }
  else {
    uVar3 = FUN_008259b0();
    puVar1 = PTR_DAT_04377550;
    if ((uVar3 & 1) == 0) {
      local_40[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_04377550 == 0) {
      if (((long *)*param_2 == (long *)0x0) ||
         (uVar2 = (**(code **)(*(long *)*param_2 + 0xd8))(), uVar2 < *(ushort *)(param_2 + 1))) {
        local_40[0] = 0x10407;
      }
      else {
        uVar4 = FUN_007e336c();
        lVar5 = FUN_0081a7a0(0x478,uVar4,8);
        if (lVar5 == 0) {
          local_40[0] = 0x10401;
          *(undefined8 *)PTR_DAT_04377cd8 = 0;
        }
        else {
          lVar6 = 0;
          do {
            *(undefined4 *)(lVar5 + lVar6) = 0;
            lVar6 = lVar6 + 4;
          } while (lVar6 != 0x478);
          *(long *)PTR_DAT_04377cd8 = lVar5;
          FUN_008294b8(lVar5,param_2);
          *(long *)puVar1 = lVar5;
          uVar4 = (**(code **)(*(long *)*param_2 + 0xe0))();
          *(undefined8 *)(*(long *)puVar1 + 0x18) = uVar4;
          local_40[0] = 0;
        }
      }
    }
    else {
      local_40[0] = 0x1040f;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


