/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001efa74; name: FUN_001efa74
 */


undefined8 FUN_001efa74(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar7 = param_2[0xf] - param_2[0x10];
  uVar6 = *param_1;
  uVar2 = FUN_00209480(*param_2,param_2[0xe] + param_2[0x10],uVar7);
  if ((long)uVar2 < 0) {
    uVar3 = FUN_002058e0(uVar2 & 0xffffffff);
    FUN_001f3ae0(uVar6,"h2_process_pending_input: nghttp2_session_mem_recv() returned %zd:%s\n",
                 uVar2,uVar3);
    uVar4 = 0x38;
  }
  else {
    if (uVar7 == uVar2) {
      lVar5 = 0;
      param_2[0xf] = 0;
    }
    else {
      lVar5 = param_2[0x10] + uVar2;
    }
    param_2[0x10] = lVar5;
    iVar1 = FUN_001f09f0(uVar6,*param_2);
    if (iVar1 == 0) {
      uVar6 = FUN_001f0a78(param_2);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      if (*(int *)(param_2 + 0x18) == 0) {
        FUN_001dee08(param_1,1);
        uVar4 = 0;
      }
      else {
        uVar4 = 0x10;
      }
    }
    else {
      uVar4 = 0x37;
    }
  }
  *param_3 = uVar4;
  return 0xffffffff;
}


