/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00819310; name: FUN_00819310
 */


void FUN_00819310(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  uVar2 = FUN_00811e70();
  if ((uVar2 & 1) == 0) {
    local_40[0] = 0x1040c;
  }
  else {
    uVar2 = FUN_00811f20();
    puVar1 = PTR_DAT_04377ad0;
    if ((uVar2 & 1) == 0) {
      local_40[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_04377ad0 == 0) {
      uVar3 = FUN_007e336c();
      plVar4 = (long *)FUN_0081a7a0(0x38,uVar3,8);
      if (plVar4 == (long *)0x0) {
        local_40[0] = 0x10401;
        *(undefined8 *)PTR_DAT_04377ad8 = 0;
      }
      else {
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[6] = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        *(long **)PTR_DAT_04377ad8 = plVar4;
        FUN_007f2ae0();
        *(undefined2 *)((long)plVar4 + 0x31) = 0;
        *plVar4 = (long)(PTR_DAT_04377ae0 + 0x10);
        *(long **)puVar1 = plVar4;
        local_40[0] = 0;
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


