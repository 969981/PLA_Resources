/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00858248; name: FUN_00858248
 */


void FUN_00858248(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_78 [3];
  undefined2 local_60;
  undefined4 local_58 [2];
  
  if (param_3 == (undefined4 *)0x0) {
    local_78[0] = (undefined *)CONCAT44(local_78[0]._4_4_,0x10407);
  }
  else {
    lVar3 = *(long *)(param_2 + 0xd8);
    if (lVar3 != param_2 + 0xd0) {
      puVar1 = PTR_DAT_04377418 + 0x10;
      uVar2 = FUN_007e3604(param_5);
      if ((uVar2 & 1) == 0) goto LAB_008582ac;
      do {
        local_78[0] = puVar1;
        FUN_007e34ac(local_78,0xffffffff);
        local_60 = 0;
        uVar2 = FUN_007e440c(lVar3 + 0x38,local_78);
        if ((uVar2 & 1) != 0) {
          FUN_007e34a4(local_78);
          goto LAB_008582ac;
        }
        uVar2 = FUN_007e440c(lVar3 + 0x38,param_5);
        FUN_007e34a4(local_78);
        if ((uVar2 & 1) != 0) goto LAB_008582ac;
        while( true ) {
          lVar3 = *(long *)(lVar3 + 8);
          if (lVar3 == param_2 + 0xd0) goto LAB_0085831c;
          uVar2 = FUN_007e3604(param_5);
          if ((uVar2 & 1) != 0) break;
LAB_008582ac:
          uVar2 = FUN_007e440c(lVar3 + 0x18,param_4);
          if ((uVar2 & 1) != 0) {
            *param_3 = *(undefined4 *)(lVar3 + 0x10);
            local_78[0] = (undefined *)((ulong)local_78[0] & 0xffffffff00000000);
            goto LAB_00858354;
          }
        }
      } while( true );
    }
LAB_0085831c:
    *param_3 = 0;
    local_78[0] = (undefined *)CONCAT44(local_78[0]._4_4_,0x2c0a);
  }
LAB_00858354:
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_58);
  FUN_007ee578(param_1,local_78);
  return;
}


