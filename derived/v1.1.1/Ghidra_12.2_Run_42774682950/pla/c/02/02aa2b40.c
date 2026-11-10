/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa2b40; name: FUN_02aa2b40
 */


void FUN_02aa2b40(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  uVar2 = param_1[1];
  plVar1 = param_1 + 3;
  if (uVar2 < (ulong)param_1[2]) {
    FUN_00b6d82c(plVar1,uVar2,param_2);
    param_1[1] = param_1[1] + 0x80;
  }
  else {
    uVar5 = param_1[4];
    lVar6 = (long)(uVar2 - *param_1) >> 7;
    uVar2 = lVar6 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar4 = lVar3 >> 6;
    local_50 = 0;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    if ((ulong)(lVar3 >> 7) < uVar5 >> 1) {
      uVar5 = uVar2;
    }
    plStack_48 = plVar1;
    if (uVar5 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar5 << 7,0x10);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xb8))();
      }
    }
    lVar6 = local_68 + lVar6 * 0x80;
    local_50 = local_68 + uVar5 * 0x80;
    lStack_60 = lVar6;
    FUN_00b6d82c(plVar1,lVar6,param_2);
    local_58 = lVar6 + 0x80;
    FUN_00b6d990(param_1,&local_68);
    FUN_00b6da64(&local_68);
  }
  return;
}


